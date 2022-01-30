use crate::syntax::{ChangeKind, Syntax};

pub fn skip_unchanged_at_ends<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
    let mut lhs_nodes = lhs_nodes;
    let mut rhs_nodes = rhs_nodes;

    while let (Some(lhs_node), Some(rhs_node)) = (lhs_nodes.first(), rhs_nodes.first()) {
        if lhs_node.content_id() == rhs_node.content_id() {
            skip_pair(lhs_node, rhs_node);

            lhs_nodes = &lhs_nodes[1..];
            rhs_nodes = &rhs_nodes[1..];
        } else {
            break;
        }
    }

    while let (Some(lhs_node), Some(rhs_node)) = (lhs_nodes.last(), rhs_nodes.last()) {
        if lhs_node.content_id() == rhs_node.content_id() {
            skip_pair(lhs_node, rhs_node);

            lhs_nodes = &lhs_nodes[..lhs_nodes.len() - 1];
            rhs_nodes = &rhs_nodes[..rhs_nodes.len() - 1];
        } else {
            break;
        }
    }

    (Vec::from(lhs_nodes), Vec::from(rhs_nodes))
}

fn skip_pair<'a>(lhs_node: &'a Syntax<'a>, rhs_node: &'a Syntax<'a>) {
    lhs_node.set_change_deep(ChangeKind::Unchanged(rhs_node));
    rhs_node.set_change_deep(ChangeKind::Unchanged(lhs_node));
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
}
