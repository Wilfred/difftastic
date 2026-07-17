//! A fast diff for linear content, particularly lines of text.
//!
//! This file uses the Wu algorithm, using the `wu-diff` crate.
//!
//! Difftastic has the files huge_cpp_1.cpp and huge_cpp_2.cpp in the
//! sample_files directory for a performance stress test. These files
//! are 22 MiB and 590,000 lines.

use std::hash::Hash;

use crate::diff::wu_diff;
use crate::hash::DftHashMap;

#[derive(Debug, PartialEq)]
pub(crate) enum DiffResult<T> {
    Left(T),
    Both(T, T),
    Right(T),
}

/// Compute a linear diff between `lhs` and `rhs`.
pub(crate) fn slice<'a, T: PartialEq + Clone>(
    lhs: &'a [T],
    rhs: &'a [T],
) -> Vec<DiffResult<&'a T>> {
    wu_diff::diff(lhs, rhs)
        .into_iter()
        .map(|result| match result {
            wu_diff::DiffResult::Removed(r) => DiffResult::Left(&lhs[r.old_index.unwrap()]),
            wu_diff::DiffResult::Common(c) => {
                let lhs_id = c.old_index.unwrap();
                let rhs_id = c.new_index.unwrap();
                DiffResult::Both(&lhs[lhs_id], &rhs[rhs_id])
            }
            wu_diff::DiffResult::Added(a) => DiffResult::Right(&rhs[a.new_index.unwrap()]),
        })
        .collect::<Vec<_>>()
}

/// Compute a linear diff between `lhs` and `rhs`, but use hashed
/// values internally.
///
/// This is faster when equality checks on `T` are expensive, such as
/// large strings.
pub(crate) fn slice_by_hash<'a, T: Eq + Hash>(
    lhs: &'a [T],
    rhs: &'a [T],
) -> Vec<DiffResult<&'a T>> {
    // Compute a unique numeric value for each item, use that for
    // diffing, then return diff results in terms of the original
    // type.
    //
    // This is the decorate-sort-undecorate pattern, or Schwartzian
    // transform, for diffing.
    let mut value_ids: DftHashMap<&T, u32> = DftHashMap::default();
    let mut id_values: DftHashMap<u32, &T> = DftHashMap::default();

    let mut lhs_ids = Vec::with_capacity(lhs.len());
    for value in lhs {
        let id: u32 = match value_ids.get(value) {
            Some(id) => *id,
            None => {
                let new_id = value_ids.len() as u32;
                value_ids.insert(value, new_id);
                id_values.insert(new_id, value);
                new_id
            }
        };
        lhs_ids.push(id);
    }

    let mut rhs_ids = Vec::with_capacity(rhs.len());
    for value in rhs {
        let id = match value_ids.get(value) {
            Some(id) => *id,
            None => {
                let new_id = value_ids.len() as u32;
                value_ids.insert(value, new_id);
                id_values.insert(new_id, value);
                new_id
            }
        };
        rhs_ids.push(id);
    }

    slice(&lhs_ids[..], &rhs_ids[..])
        .into_iter()
        .map(|result| match result {
            DiffResult::Left(id) => DiffResult::Left(*id_values.get(id).unwrap()),
            DiffResult::Both(lhs_id, rhs_id) => DiffResult::Both(
                *id_values.get(lhs_id).unwrap(),
                *id_values.get(rhs_id).unwrap(),
            ),
            DiffResult::Right(id) => DiffResult::Right(*id_values.get(id).unwrap()),
        })
        .collect::<Vec<_>>()
}

/// Compute the linear diff between `lhs` and `rhs`. If there are
/// items that only occur on a single side, mark them as novel without
/// processing them with Myers' diff.
///
/// This is substantially faster than `slice`, when `lhs` and `rhs`
/// have few items in common.
///
/// (This heuristic is used in traditional diff tools too, such as GNU
/// diff.)
pub(crate) fn slice_unique_by_hash<'a, T: Eq + Clone + Hash>(
    lhs: &'a [T],
    rhs: &'a [T],
) -> Vec<DiffResult<&'a T>> {
    // Assign each distinct value a dense numeric ID, so every item is
    // hashed exactly once. All the subsequent work (uniqueness
    // filtering, the diff itself, and re-interleaving) happens on
    // u32s, which is much cheaper than repeatedly hashing and
    // comparing large strings.
    let mut value_ids: DftHashMap<&T, u32> = DftHashMap::default();
    let mut in_lhs: Vec<bool> = vec![];
    let mut in_rhs: Vec<bool> = vec![];

    let mut lhs_ids: Vec<u32> = Vec::with_capacity(lhs.len());
    for value in lhs {
        let next_id = in_lhs.len() as u32;
        let id = *value_ids.entry(value).or_insert_with(|| {
            in_lhs.push(false);
            in_rhs.push(false);
            next_id
        });
        in_lhs[id as usize] = true;
        lhs_ids.push(id);
    }

    let mut rhs_ids: Vec<u32> = Vec::with_capacity(rhs.len());
    for value in rhs {
        let next_id = in_lhs.len() as u32;
        let id = *value_ids.entry(value).or_insert_with(|| {
            in_lhs.push(false);
            in_rhs.push(false);
            next_id
        });
        in_rhs[id as usize] = true;
        rhs_ids.push(id);
    }

    // Items that only occur on a single side are novel, and don't
    // need to be considered by the diff algorithm itself.
    let lhs_core: Vec<u32> = lhs_ids
        .iter()
        .copied()
        .filter(|id| in_rhs[*id as usize])
        .collect();
    let rhs_core: Vec<u32> = rhs_ids
        .iter()
        .copied()
        .filter(|id| in_lhs[*id as usize])
        .collect();

    let mut res: Vec<DiffResult<&'a T>> = Vec::with_capacity(lhs.len());
    let mut lhs_i = 0;
    let mut rhs_i = 0;

    for item in wu_diff::diff(&lhs_core, &rhs_core) {
        match item {
            wu_diff::DiffResult::Removed(r) => {
                let id = lhs_core[r.old_index.unwrap()];
                while lhs_i < lhs.len() && lhs_ids[lhs_i] != id {
                    res.push(DiffResult::Left(&lhs[lhs_i]));
                    lhs_i += 1;
                }

                res.push(DiffResult::Left(&lhs[lhs_i]));
                lhs_i += 1;
            }
            wu_diff::DiffResult::Common(c) => {
                let lhs_id = lhs_core[c.old_index.unwrap()];
                let rhs_id = rhs_core[c.new_index.unwrap()];

                while lhs_i < lhs.len() && lhs_ids[lhs_i] != lhs_id {
                    res.push(DiffResult::Left(&lhs[lhs_i]));
                    lhs_i += 1;
                }
                while rhs_i < rhs.len() && rhs_ids[rhs_i] != rhs_id {
                    res.push(DiffResult::Right(&rhs[rhs_i]));
                    rhs_i += 1;
                }

                res.push(DiffResult::Both(&lhs[lhs_i], &rhs[rhs_i]));
                lhs_i += 1;
                rhs_i += 1;
            }
            wu_diff::DiffResult::Added(a) => {
                let id = rhs_core[a.new_index.unwrap()];
                while rhs_i < rhs.len() && rhs_ids[rhs_i] != id {
                    res.push(DiffResult::Right(&rhs[rhs_i]));
                    rhs_i += 1;
                }

                res.push(DiffResult::Right(&rhs[rhs_i]));
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
    fn test_slice_by_hash_same_items() {
        let diff_items = slice_by_hash(&["a", "b"], &["a", "b"]);
        assert_eq!(
            diff_items,
            vec![DiffResult::Both(&"a", &"a"), DiffResult::Both(&"b", &"b")]
        );
    }

    #[test]
    fn test_slice_by_hash_different_items() {
        let diff_items = slice_by_hash(&["a", "b"], &["c", "d"]);
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
