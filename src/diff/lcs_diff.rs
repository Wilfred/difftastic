//! A fast diff for linear content, particularly lines of text.
//!
//! This file uses the histogram algorithm, using the `imara-diff` crate.
//!
//! Difftastic has the files huge_cpp_1.cpp and huge_cpp_2.cpp in the
//! sample_files directory for a performance stress test. These files
//! are 22 MiB and 590,000 lines.

use std::hash::Hash;

use imara_diff::{Algorithm, Diff, InternedInput, Interner};

#[derive(Debug, PartialEq)]
pub(crate) enum DiffResult<T> {
    /// Both sides match.
    Both(T, T),
    /// Novel to LHS.
    Left(T),
    /// Novel to RHS.
    Right(T),
}

/// Compute a linear diff between `lhs` and `rhs`.
pub(crate) fn slice<'a, T: Eq + Hash>(lhs: &'a [T], rhs: &'a [T]) -> Vec<DiffResult<&'a T>> {
    let mut input = InternedInput {
        before: Vec::with_capacity(lhs.len()),
        after: Vec::with_capacity(rhs.len()),
        interner: Interner::new(lhs.len() + rhs.len()),
    };
    input.update_before(lhs.iter());
    input.update_after(rhs.iter());

    let diff = Diff::compute(Algorithm::Histogram, &input);

    let mut res: Vec<DiffResult<&'a T>> = Vec::with_capacity(std::cmp::max(lhs.len(), rhs.len()));
    let mut lhs_i = 0;
    let mut rhs_i = 0;

    for hunk in diff.hunks() {
        while lhs_i < hunk.before.start as usize {
            res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
            lhs_i += 1;
            rhs_i += 1;
        }
        while lhs_i < hunk.before.end as usize {
            res.push(DiffResult::Left(&lhs[lhs_i]));
            lhs_i += 1;
        }
        while rhs_i < hunk.after.end as usize {
            res.push(DiffResult::Right(&rhs[rhs_i]));
            rhs_i += 1;
        }
    }
    while lhs_i < lhs.len() {
        res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
        lhs_i += 1;
        rhs_i += 1;
    }

    res
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_slice_same_items() {
        let diff_items = slice(&["a", "b"], &["a", "b"]);
        assert_eq!(
            diff_items,
            vec![DiffResult::Both(&"a", &"a"), DiffResult::Both(&"b", &"b")]
        );
    }

    #[test]
    fn test_slice_different_items() {
        let diff_items = slice(&["a", "b"], &["c", "d"]);
        assert_eq!(
            diff_items,
            vec![
                DiffResult::Left(&"a"),
                DiffResult::Left(&"b"),
                DiffResult::Right(&"c"),
                DiffResult::Right(&"d"),
            ]
        );
    }
}

#[cfg(test)]
mod invariant_tests {
    use super::*;

    fn check(lhs: &[u8], rhs: &[u8]) {
        let res = slice(lhs, rhs);
        let lhs_out: Vec<u8> = res
            .iter()
            .filter_map(|r| match r {
                DiffResult::Left(x) => Some(**x),
                DiffResult::Both(x, _) => Some(**x),
                DiffResult::Right(_) => None,
            })
            .collect();
        let rhs_out: Vec<u8> = res
            .iter()
            .filter_map(|r| match r {
                DiffResult::Right(x) => Some(**x),
                DiffResult::Both(_, x) => Some(**x),
                DiffResult::Left(_) => None,
            })
            .collect();
        assert_eq!(lhs_out, lhs, "lhs mismatch for {:?} vs {:?}", lhs, rhs);
        assert_eq!(rhs_out, rhs, "rhs mismatch for {:?} vs {:?}", lhs, rhs);
        for r in &res {
            if let DiffResult::Both(x, y) = r {
                assert_eq!(x, y, "unequal Both for {:?} vs {:?}", lhs, rhs);
            }
        }
    }

    #[test]
    fn exhaustive_small() {
        // All sequences over {0,1,2} up to length 5 on each side.
        fn seqs(len: usize) -> Vec<Vec<u8>> {
            if len == 0 {
                return vec![vec![]];
            }
            let mut out = vec![];
            for s in seqs(len - 1) {
                for c in 0..3u8 {
                    let mut s2 = s.clone();
                    s2.push(c);
                    out.push(s2);
                }
            }
            out
        }
        let mut all = vec![];
        for l in 0..=5 {
            all.extend(seqs(l));
        }
        for a in &all {
            for b in &all {
                check(a, b);
            }
        }
    }
}
