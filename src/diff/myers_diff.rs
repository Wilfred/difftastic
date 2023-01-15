//! A fast diff for linear content, using Myer's diff algorithm.

#[derive(Debug, PartialEq)]
pub enum DiffResult<T> {
    Left(T),
    Both(T, T),
    Right(T),
}

pub fn slice<'a, T: PartialEq + Clone>(lhs: &'a [T], rhs: &'a [T]) -> Vec<DiffResult<&'a T>> {
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
