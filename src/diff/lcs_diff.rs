//! A fast diff for linear content, particularly lines of text.
//!
//! This file uses the Histogram algorithm, using the `imara-diff`
//! crate.
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
    let mut input: InternedInput<&'a T> = InternedInput {
        before: Vec::with_capacity(lhs.len()),
        after: Vec::with_capacity(rhs.len()),
        interner: Interner::new(lhs.len() + rhs.len()),
    };
    input.update_before(lhs.iter());
    input.update_after(rhs.iter());

    let mut diff = Diff::compute(Algorithm::Histogram, &input);
    diff.postprocess_no_heuristic(&input);

    let mut res: Vec<DiffResult<&'a T>> = Vec::with_capacity(std::cmp::max(lhs.len(), rhs.len()));
    let mut lhs_i = 0;
    let mut rhs_i = 0;

    for hunk in diff.hunks() {
        // Hunks only cover changed items, but we want all items, so collect
        // unchanged items before this hunk.
        while lhs_i < hunk.before.start as usize {
            res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
            lhs_i += 1;
            rhs_i += 1;
        }

        for lhs_i in hunk.before.clone() {
            res.push(DiffResult::Left(&lhs[lhs_i as usize]));
        }
        for rhs_i in hunk.after.clone() {
            res.push(DiffResult::Right(&rhs[rhs_i as usize]));
        }

        lhs_i = hunk.before.end as usize;
        rhs_i = hunk.after.end as usize;
    }

    // LHS is sufficient here because we're only handling unchanged items.
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
