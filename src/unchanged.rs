use crate::syntax::{ChangeKind, Syntax};

/// Discard nodes that are obviously unchanged, so we have a smaller
/// number of nodes to run the full diffing algorithm on.
pub fn skip_unchanged<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
    let mut lhs_nodes = lhs_nodes.to_vec();
    let mut rhs_nodes = rhs_nodes.to_vec();

    // Repeatedly skip outer/leading/trailing nodes until we can't any
    // more (i.e. find a fixpoint).
    let mut keep_trying = true;
    while keep_trying {
        keep_trying = false;

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged_at_ends(&lhs_nodes, &rhs_nodes);
        if lhs_after_skip != lhs_nodes {
            keep_trying = true;
            lhs_nodes = lhs_after_skip;
            rhs_nodes = rhs_after_skip;
        }

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged_delimiters(&lhs_nodes, &rhs_nodes);
        if lhs_after_skip != lhs_nodes {
            keep_trying = true;
            lhs_nodes = lhs_after_skip;
            rhs_nodes = rhs_after_skip;
        }
    }

    (lhs_nodes, rhs_nodes)
}

/// If we're comparing two lists that have the same delimiters, mark
/// the delimiters as unchanged and return the children.
fn skip_unchanged_delimiters<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
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
            lhs_nodes[0].set_change(ChangeKind::Unchanged(rhs_nodes[0]));
            rhs_nodes[0].set_change(ChangeKind::Unchanged(lhs_nodes[0]));

            return (lhs_children.to_vec(), rhs_children.to_vec());
        }
    }

    (lhs_nodes.into(), rhs_nodes.into())
}

/// Skip syntax nodes at the beginning or end that are obviously
/// unchanged.
///
/// Set the ChangeKind on the definitely changed nodes, and return the
/// nodes that may contain changes.
fn skip_unchanged_at_ends<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
    let mut lhs_nodes = lhs_nodes;
    let mut rhs_nodes = rhs_nodes;

    while let (Some(lhs_node), Some(rhs_node)) = (lhs_nodes.first(), rhs_nodes.first()) {
        if lhs_node.content_id() == rhs_node.content_id() {
            {
                lhs_node.set_change_deep(ChangeKind::Unchanged(rhs_node));
                rhs_node.set_change_deep(ChangeKind::Unchanged(lhs_node));
            };

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

            lhs_nodes = &lhs_nodes[..lhs_nodes.len() - 1];
            rhs_nodes = &rhs_nodes[..rhs_nodes.len() - 1];
        } else {
            break;
        }
    }

    (Vec::from(lhs_nodes), Vec::from(rhs_nodes))
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
    fn test_unchanged_at_start() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "unchanged A B", &config);
        let rhs_nodes = parse(&arena, "unchanged X", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged_at_ends(&lhs_nodes, &rhs_nodes);

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
    fn test_unchanged_at_end() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "A B unchanged", &config);
        let rhs_nodes = parse(&arena, "X unchanged", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged_at_ends(&lhs_nodes, &rhs_nodes);

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
    fn test_unchanged_outer_delimiters() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "(A)", &config);
        let rhs_nodes = parse(&arena, "(B)", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged_delimiters(&lhs_nodes, &rhs_nodes);

        // The only possibly changed nodes are inside the lists.
        assert_eq!(lhs_after_skip.len(), 1);
        assert!(matches!(lhs_after_skip[0], Syntax::Atom { .. }));

        assert_eq!(rhs_after_skip.len(), 1);
        assert!(matches!(rhs_after_skip[0], Syntax::Atom { .. }));

        // The outer list delimiters are unchanged.
        assert_eq!(
            lhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(rhs_nodes[0]))
        );
        assert_eq!(
            rhs_nodes[0].change(),
            Some(ChangeKind::Unchanged(lhs_nodes[0]))
        );

        // The inner items haven't had their change set yet.
        assert_eq!(lhs_after_skip[0].change(), None);
        assert_eq!(rhs_after_skip[0].change(), None);
    }

    #[test]
    fn test_skip_unchanged() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs_nodes = parse(&arena, "unchanged-before (more-unchanged (A))", &config);
        let rhs_nodes = parse(&arena, "unchanged-before (more-unchanged (B))", &config);
        init_all_info(&lhs_nodes, &rhs_nodes);

        let (lhs_after_skip, rhs_after_skip) = skip_unchanged(&lhs_nodes, &rhs_nodes);

        // The only possibly changed nodes are inside the lists.
        assert_eq!(lhs_after_skip.len(), 1);
        assert!(matches!(lhs_after_skip[0], Syntax::Atom { .. }));

        assert_eq!(rhs_after_skip.len(), 1);
        assert!(matches!(rhs_after_skip[0], Syntax::Atom { .. }));

        // The inner items haven't had their change set yet.
        assert_eq!(lhs_after_skip[0].change(), None);
        assert_eq!(rhs_after_skip[0].change(), None);
    }
}
