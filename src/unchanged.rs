use crate::myers_diff;
use crate::syntax::{ChangeKind, Syntax};

const TINY_TREE_THRESHOLD: u32 = 10;

/// Set ChangeKind on nodes that are obviously unchanged, and return a
/// vec of pairs that need proper diffing.
pub fn mark_unchanged<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> Vec<(Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> {
    let (_, lhs_nodes, rhs_nodes) = shrink_unchanged_at_ends(lhs_nodes, rhs_nodes);
    split_unchanged(&lhs_nodes, &rhs_nodes)
}

#[derive(Debug)]
enum ChangeState {
    Unchanged,
    PossiblyChanged,
}

fn split_unchanged<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> Vec<(Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> {
    let size_threshold = if let Ok(env_threshold) = std::env::var("DFT_TINY_THRESHOLD") {
        env_threshold
            .parse::<u32>()
            .ok()
            .unwrap_or(TINY_TREE_THRESHOLD)
    } else {
        TINY_TREE_THRESHOLD
    };

    let mut res: Vec<(Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> = vec![];
    for (cs, lhs_section_nodes, rhs_section_nodes) in
        split_unchanged_toplevel(lhs_nodes, rhs_nodes, size_threshold)
    {
        match cs {
            ChangeState::Unchanged => {
                assert_eq!(lhs_section_nodes.len(), rhs_section_nodes.len());
                for (lhs_section_node, rhs_section_node) in
                    lhs_section_nodes.iter().zip(rhs_section_nodes.iter())
                {
                    lhs_section_node.set_change_deep(ChangeKind::Unchanged(rhs_section_node));
                    rhs_section_node.set_change_deep(ChangeKind::Unchanged(lhs_section_node));
                }
            }
            ChangeState::PossiblyChanged => {
                res.push((lhs_section_nodes, rhs_section_nodes));
            }
        }
    }

    res
}

/// Mark top-level nodes as unchanged if they have exactly the same
/// content on both sides.
fn split_unchanged_toplevel<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
    size_threshold: u32,
) -> Vec<(ChangeState, Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> {
    let lhs_node_ids = lhs_nodes
        .iter()
        .map(|n| EqOnFirstItem(n.content_id(), *n))
        .collect::<Vec<_>>();
    let rhs_node_ids = rhs_nodes
        .iter()
        .map(|n| EqOnFirstItem(n.content_id(), *n))
        .collect::<Vec<_>>();

    let mut res: Vec<(ChangeState, Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> = vec![];
    let mut section_lhs_nodes = vec![];
    let mut section_rhs_nodes = vec![];

    for diff_res in myers_diff::slice(&lhs_node_ids, &rhs_node_ids) {
        match diff_res {
            myers_diff::DiffResult::Both(lhs, rhs) => {
                let lhs_node = lhs.1;
                let rhs_node = rhs.1;

                // If we've matched a node but it's very small, don't
                // mark it as unchanged. We're interested in marking
                // large nodes as unchanged for performance, but small
                // nodes are fine.
                //
                // If we don't do this, difftastic can find e.g. a
                // single unchanged comma in a huge expression, which
                // produces worse diffs.
                let tiny_node = match lhs_node {
                    Syntax::List {
                        num_descendants, ..
                    } => *num_descendants < size_threshold,
                    Syntax::Atom { .. } => true,
                };

                if tiny_node {
                    section_lhs_nodes.push(lhs_node);
                    section_rhs_nodes.push(rhs_node);
                } else {
                    if !section_lhs_nodes.is_empty() || !section_rhs_nodes.is_empty() {
                        match as_singleton_list_children(&section_lhs_nodes, &section_rhs_nodes) {
                            Some((lhs_children, rhs_children)) => {
                                let mut split_children = split_unchanged_toplevel(
                                    &lhs_children,
                                    &rhs_children,
                                    size_threshold,
                                );
                                if split_children.len() > 1 {
                                    // Managed to further split.
                                    res.append(&mut split_children);
                                } else {
                                    // Did not split further. Keep the outer list, so we can use
                                    // its delimiter when doing the tree diff.
                                    res.push((
                                        ChangeState::PossiblyChanged,
                                        section_lhs_nodes,
                                        section_rhs_nodes,
                                    ));
                                }
                            }
                            None => {
                                res.push((
                                    ChangeState::PossiblyChanged,
                                    section_lhs_nodes,
                                    section_rhs_nodes,
                                ));
                            }
                        }

                        section_lhs_nodes = vec![];
                        section_rhs_nodes = vec![];
                    }

                    res.push((ChangeState::Unchanged, vec![lhs_node], vec![rhs_node]));
                }
            }
            myers_diff::DiffResult::Left(lhs) => {
                section_lhs_nodes.push(lhs.1);
            }
            myers_diff::DiffResult::Right(rhs) => {
                section_rhs_nodes.push(rhs.1);
            }
        }
    }

    if !section_lhs_nodes.is_empty() || !section_rhs_nodes.is_empty() {
        res.push((
            ChangeState::PossiblyChanged,
            section_lhs_nodes,
            section_rhs_nodes,
        ));
    }

    res
}

#[derive(Debug, Clone)]
struct EqOnFirstItem<X, Y>(X, Y);

impl<X: Eq, Y> PartialEq for EqOnFirstItem<X, Y> {
    fn eq(&self, other: &Self) -> bool {
        self.0 == other.0
    }
}
impl<X: Eq, Y> Eq for EqOnFirstItem<X, Y> {}

fn as_singleton_list_children<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> Option<(Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>)> {
    if let (
        [Syntax::List {
            open_content: lhs_open,
            children: lhs_children,
            close_content: lhs_close,
            ..
        }],
        [Syntax::List {
            open_content: rhs_open,
            children: rhs_children,
            close_content: rhs_close,
            ..
        }],
    ) = (lhs_nodes, rhs_nodes)
    {
        if lhs_open == rhs_open && lhs_close == rhs_close {
            return Some((lhs_children.to_vec(), rhs_children.to_vec()));
        }
    }

    None
}

/// If we're comparing two lists that have the same delimiters, mark
/// the delimiters as unchanged and return the children.
fn shrink_unchanged_delimiters<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (bool, Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
    if let (
        [Syntax::List {
            open_content: lhs_open,
            children: lhs_children,
            close_content: lhs_close,
            ..
        }],
        [Syntax::List {
            open_content: rhs_open,
            children: rhs_children,
            close_content: rhs_close,
            ..
        }],
    ) = (lhs_nodes, rhs_nodes)
    {
        if lhs_open == rhs_open && lhs_close == rhs_close {
            let (changed_later, lhs_shrunk_nodes, rhs_shrunk_nodes) =
                shrink_unchanged_at_ends(lhs_children, rhs_children);
            if changed_later {
                lhs_nodes[0].set_change(ChangeKind::Unchanged(rhs_nodes[0]));
                rhs_nodes[0].set_change(ChangeKind::Unchanged(lhs_nodes[0]));
                return (true, lhs_shrunk_nodes, rhs_shrunk_nodes);
            }
        }
    }

    (false, Vec::from(lhs_nodes), Vec::from(rhs_nodes))
}

/// Skip syntax nodes at the beginning or end that are obviously
/// unchanged.
///
/// Set the ChangeKind on the definitely changed nodes, and return the
/// nodes that may contain changes.
fn shrink_unchanged_at_ends<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (bool, Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
    let mut lhs_nodes = lhs_nodes;
    let mut rhs_nodes = rhs_nodes;

    let mut changed = false;
    while let (Some(lhs_node), Some(rhs_node)) = (lhs_nodes.first(), rhs_nodes.first()) {
        // We don't consider TINY_TREE_THRESHOLD here because we are
        // only considering equal nodes at the beginning or end of the
        // file. There's no risk we split unrelated regions with a
        // trivial unchanged node in the middle.
        if lhs_node.content_id() == rhs_node.content_id() {
            lhs_node.set_change_deep(ChangeKind::Unchanged(rhs_node));
            rhs_node.set_change_deep(ChangeKind::Unchanged(lhs_node));

            changed = true;
            lhs_nodes = &lhs_nodes[1..];
            rhs_nodes = &rhs_nodes[1..];
        } else {
            break;
        }
    }

    while let (Some(lhs_node), Some(rhs_node)) = (lhs_nodes.last(), rhs_nodes.last()) {
        if lhs_node.content_id() == rhs_node.content_id() {
            lhs_node.set_change_deep(ChangeKind::Unchanged(rhs_node));
            rhs_node.set_change_deep(ChangeKind::Unchanged(lhs_node));

            changed = true;
            lhs_nodes = &lhs_nodes[..lhs_nodes.len() - 1];
            rhs_nodes = &rhs_nodes[..rhs_nodes.len() - 1];
        } else {
            break;
        }
    }

    if lhs_nodes.len() == 1 && rhs_nodes.len() == 1 {
        let (changed_later, lhs_nodes, rhs_nodes) =
            shrink_unchanged_delimiters(lhs_nodes, rhs_nodes);
        (changed || changed_later, lhs_nodes, rhs_nodes)
    } else {
        (changed, Vec::from(lhs_nodes), Vec::from(rhs_nodes))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{
        guess_language,
        syntax::init_all_info,
        tree_sitter_parser::{from_language, parse},
    };
    use typed_arena::Arena;

    #[test]
    fn test_shrink_unchanged_at_start() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "unchanged A B", &config);
        let rhs_nodes = parse(&arena, "unchanged X", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (_, lhs_after_skip, rhs_after_skip) = shrink_unchanged_at_ends(&lhs_nodes, &rhs_nodes);

        assert_eq!(
            lhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[0]))
        );
        assert_eq!(
            rhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[0]))
        );

        assert_eq!(lhs_after_skip.len(), 2);
        assert_eq!(rhs_after_skip.len(), 1);
    }

    #[test]
    fn test_shrink_unchanged_at_end() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "A B unchanged", &config);
        let rhs_nodes = parse(&arena, "X unchanged", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (_, lhs_after_skip, rhs_after_skip) = shrink_unchanged_at_ends(&lhs_nodes, &rhs_nodes);

        assert_eq!(
            lhs_nodes[2].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[1]))
        );
        assert_eq!(
            rhs_nodes[1].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[2]))
        );

        assert_eq!(lhs_after_skip.len(), 2);
        assert_eq!(rhs_after_skip.len(), 1);
    }

    #[test]
    fn test_shrink_unchanged_nested() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "unchanged-before (more-unchanged (A))", &config);
        let rhs_nodes = parse(&arena, "unchanged-before (more-unchanged (B))", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (_, lhs_after_skip, rhs_after_skip) = shrink_unchanged_at_ends(&lhs_nodes, &rhs_nodes);

        // The only possibly changed nodes are inside the lists.
        assert_eq!(lhs_after_skip.len(), 1);
        assert!(matches!(lhs_after_skip[0], Syntax::List { .. }));

        assert_eq!(rhs_after_skip.len(), 1);
        assert!(matches!(rhs_after_skip[0], Syntax::List { .. }));

        // The inner items haven't had their change set yet.
        assert_eq!(lhs_after_skip[0].change(), None);
        assert_eq!(rhs_after_skip[0].change(), None);
    }

    #[test]
    fn test_mark_unchanged_toplevel_at_start() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        // Make sure that the initial unchanged node exceeds TINY_TREE_THRESHOLD.
        let lhs_nodes = parse(&arena, "(unchanged (1 2 3 4 5 6 7 8 9 10)) A B", &config);
        let rhs_nodes = parse(&arena, "(unchanged (1 2 3 4 5 6 7 8 9 10)) X", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let res = split_unchanged(&lhs_nodes, &rhs_nodes);

        assert_eq!(res.len(), 1);
        let (lhs_after_skip, rhs_after_skip) = &res[0];

        assert_eq!(
            lhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[0]))
        );
        assert_eq!(
            rhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[0]))
        );

        assert_eq!(lhs_after_skip.len(), 2);
        assert_eq!(rhs_after_skip.len(), 1);
    }

    #[test]
    fn test_mark_unchanged_toplevel_at_end() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "A B (unchanged (1 2 3 4 5 6 7 8 9 10))", &config);
        let rhs_nodes = parse(&arena, "X (unchanged (1 2 3 4 5 6 7 8 9 10))", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let res = split_unchanged(&lhs_nodes, &rhs_nodes);

        assert_eq!(res.len(), 1);
        let (lhs_after_skip, rhs_after_skip) = &res[0];

        assert_eq!(
            lhs_nodes[2].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[1]))
        );
        assert_eq!(
            rhs_nodes[1].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[2]))
        );

        assert_eq!(lhs_after_skip.len(), 2);
        assert_eq!(rhs_after_skip.len(), 1);
    }

    #[test]
    fn test_mark_preserves_outer_delimiters() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "(A)", &config);
        let rhs_nodes = parse(&arena, "(B)", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let res = split_unchanged(&lhs_nodes, &rhs_nodes);

        assert_eq!(res.len(), 1);
        let (lhs_after_skip, rhs_after_skip) = &res[0];

        // The only possibly changed nodes are inside the lists.
        assert_eq!(lhs_after_skip.len(), 1);
        assert!(matches!(lhs_after_skip[0], Syntax::List { .. }));

        assert_eq!(rhs_after_skip.len(), 1);
        assert!(matches!(rhs_after_skip[0], Syntax::List { .. }));

        // The outer list delimiters don't have their change set yet.
        assert_eq!(lhs_nodes[0].change(), None);
        assert_eq!(rhs_nodes[0].change(), None);
    }

    #[test]
    fn test_mark_unchanged_middle() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(
            &arena,
            "novel-lhs (unchanged (1 2 3 4 5 6 7 8 9 10)) novel-lhs-2",
            &config,
        );
        let rhs_nodes = parse(
            &arena,
            "novel-rhs (unchanged (1 2 3 4 5 6 7 8 9 10)) novel-rhs-2",
            &config,
        );
        init_all_info(&lhs_nodes, &rhs_nodes);

        let res = split_unchanged(&lhs_nodes, &rhs_nodes);
        assert_eq!(
            res,
            vec![
                (vec![lhs_nodes[0]], vec![rhs_nodes[0]]),
                (vec![lhs_nodes[2]], vec![rhs_nodes[2]])
            ]
        );

        assert_eq!(
            lhs_nodes[1].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[1]))
        );
        assert_eq!(
            rhs_nodes[1].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[1]))
        );
    }

    #[test]
    fn test_mark_unchanged_multiple() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(
            &arena,
            "novel-lhs (unchanged-1 (1 2 3 4 5 6 7 8 9 10)) (unchanged-2 (1 2 3 4 5 6 7 8 9 10)) novel-lhs-2",
            &config,
        );
        let rhs_nodes = parse(
            &arena,
            "novel-rhs (unchanged-1 (1 2 3 4 5 6 7 8 9 10)) (unchanged-2 (1 2 3 4 5 6 7 8 9 10)) novel-rhs-2",
            &config,
        );
        init_all_info(&lhs_nodes, &rhs_nodes);

        let res = split_unchanged(&lhs_nodes, &rhs_nodes);
        assert_eq!(
            res,
            vec![
                (vec![lhs_nodes[0]], vec![rhs_nodes[0]]),
                (vec![lhs_nodes[3]], vec![rhs_nodes[3]])
            ]
        );
    }
}
