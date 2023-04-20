use crate::diff::changes::{ChangeKind, ChangeMap};
use crate::parse::syntax::Syntax;

pub fn mark_changed<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
    change_map: &mut ChangeMap<'a>,
) {
    mark_unique_atoms_changed(lhs_nodes, change_map);
    mark_unique_atoms_changed(rhs_nodes, change_map);
}

fn mark_unique_atoms_changed<'a>(nodes: &[&'a Syntax<'a>], change_map: &mut ChangeMap<'a>) {
    for node in nodes {
        match node {
            Syntax::List { children, .. } => {
                mark_unique_atoms_changed(children, change_map);
            }
            Syntax::Atom { .. } => {
                if node.content_is_unique_both_sides() {
                    change_map.insert(node, ChangeKind::Novel);
                }
            }
        }
    }
}
