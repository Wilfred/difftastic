//! A fast diff for linear content, particularly lines of text.
//!
//! This file uses the histogram algorithm, using the `imara-diff`
//! crate.
//!
//! Difftastic has the files huge_cpp_1.cpp and huge_cpp_2.cpp in the
//! sample_files directory for a performance stress test. These files
//! are 22 MiB and 590,000 lines.

use std::hash::Hash;

use imara_diff::{Algorithm, Diff, InternedInput, Interner};

use crate::hash::DftHashSet;

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
///
/// Items are interned (i.e. mapped to a unique integer) before
/// diffing, so this is fast even when equality checks on `T` are
/// expensive, such as large strings.
pub(crate) fn slice<'a, T: Eq + Hash>(lhs: &'a [T], rhs: &'a [T]) -> Vec<DiffResult<&'a T>> {
    let mut input: InternedInput<&'a T> = InternedInput {
        before: Vec::with_capacity(lhs.len()),
        after: Vec::with_capacity(rhs.len()),
        interner: Interner::new(lhs.len() + rhs.len()),
    };
    input.update_before(lhs.iter());
    input.update_after(rhs.iter());

    let mut diff = Diff::compute(Algorithm::Histogram, &input);
    // Shift changed regions so they line up in the way a human would
    // expect. This doesn't change the number of items considered
    // changed.
    diff.postprocess_no_heuristic(&input);

    // `imara-diff` gives us the changed regions ("hunks") of both
    // sides. Everything outside a hunk is unchanged, so walk both
    // sides in lockstep to recover the full diff.
    let mut res: Vec<DiffResult<&'a T>> = Vec::with_capacity(std::cmp::max(lhs.len(), rhs.len()));
    let mut lhs_i = 0;
    let mut rhs_i = 0;

    for hunk in diff.hunks() {
        while lhs_i < hunk.before.start as usize {
            res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
            lhs_i += 1;
            rhs_i += 1;
        }

        for i in hunk.before.clone() {
            res.push(DiffResult::Left(&lhs[i as usize]));
        }
        for i in hunk.after.clone() {
            res.push(DiffResult::Right(&rhs[i as usize]));
        }

        lhs_i = hunk.before.end as usize;
        rhs_i = hunk.after.end as usize;
    }

    while lhs_i < lhs.len() {
        res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
        lhs_i += 1;
        rhs_i += 1;
    }

    res
}

/// Compute the linear diff between `lhs` and `rhs`. If there are
/// items that only occur on a single side, mark them as novel without
/// processing them with the full diff algorithm.
///
/// This is substantially faster than `slice`, when `lhs` and `rhs`
/// have few items in common.
///
/// (This heuristic is used in traditional diff tools too, such as GNU
/// diff.)
pub(crate) fn slice_unique_by_hash<'a, T: Eq + Hash>(
    lhs: &'a [T],
    rhs: &'a [T],
) -> Vec<DiffResult<&'a T>> {
    let mut lhs_set = DftHashSet::default();
    for item in lhs {
        lhs_set.insert(item);
    }
    let mut rhs_set = DftHashSet::default();
    for item in rhs {
        rhs_set.insert(item);
    }

    let lhs_without_unique: Vec<&'a T> = lhs.iter().filter(|n| rhs_set.contains(n)).collect();
    let rhs_without_unique: Vec<&'a T> = rhs.iter().filter(|n| lhs_set.contains(n)).collect();

    let mut res: Vec<DiffResult<&'a T>> = Vec::with_capacity(lhs.len());
    let mut lhs_i = 0;
    let mut rhs_i = 0;

    for item in slice(&lhs_without_unique, &rhs_without_unique) {
        match item {
            DiffResult::Left(lhs_item) => {
                while lhs_i < lhs.len() {
                    if &lhs[lhs_i] != *lhs_item {
                        res.push(DiffResult::Left(&lhs[lhs_i]));
                        lhs_i += 1;
                    } else {
                        break;
                    }
                }

                res.push(DiffResult::Left(*lhs_item));
                lhs_i += 1;
            }
            DiffResult::Both(lhs_item, rhs_item) => {
                while lhs_i < lhs.len() {
                    if &lhs[lhs_i] != *lhs_item {
                        res.push(DiffResult::Left(&lhs[lhs_i]));
                        lhs_i += 1;
                    } else {
                        break;
                    }
                }

                while rhs_i < rhs.len() {
                    if &rhs[rhs_i] != *rhs_item {
                        res.push(DiffResult::Right(&rhs[rhs_i]));
                        rhs_i += 1;
                    } else {
                        break;
                    }
                }

                res.push(DiffResult::Both(*lhs_item, *rhs_item));
                lhs_i += 1;
                rhs_i += 1;
            }
            DiffResult::Right(rhs_item) => {
                while rhs_i < rhs.len() {
                    if &rhs[rhs_i] != *rhs_item {
                        res.push(DiffResult::Right(&rhs[rhs_i]));
                        rhs_i += 1;
                    } else {
                        break;
                    }
                }

                res.push(DiffResult::Right(*rhs_item));
                rhs_i += 1;
            }
        }
    }

    while lhs_i < lhs.len() {
        res.push(DiffResult::Left(&lhs[lhs_i]));
        lhs_i += 1;
    }
    while rhs_i < rhs.len() {
        res.push(DiffResult::Right(&rhs[rhs_i]));
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

    #[test]
    fn test_slice_unique_same_items() {
        let diff_items = slice_unique_by_hash(&["a", "b"], &["a", "b"]);
        assert_eq!(
            diff_items,
            vec![DiffResult::Both(&"a", &"a"), DiffResult::Both(&"b", &"b")]
        );
    }

    #[test]
    fn test_slice_unique_different_items() {
        let diff_items = slice_unique_by_hash(&["a", "b"], &["c", "d"]);
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
