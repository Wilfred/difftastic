use rustc_hash::FxHashMap;

use crate::syntax::Syntax;

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Syntax<'a>),
    ReplacedComment(&'a Syntax<'a>, &'a Syntax<'a>),
    Novel,
}

pub type ChangeMap<'a> = FxHashMap<&'a Syntax<'a>, ChangeKind<'a>>;

pub fn new_change_map<'a>() -> ChangeMap<'a> {
    FxHashMap::default()
}

pub fn insert_deep_unchanged<'a>(
    node: &'a Syntax<'a>,
    opposite_node: &'a Syntax<'a>,
    change_map: &mut ChangeMap<'a>,
) {
    change_map.insert(node, ChangeKind::Unchanged(opposite_node));

    match (node, opposite_node) {
        (
            Syntax::List {
                children: node_children,
                ..
            },
            Syntax::List {
                children: opposite_children,
                ..
            },
        ) => {
            for (child, opposite_child) in node_children.iter().zip(opposite_children) {
                insert_deep_unchanged(child, opposite_child, change_map);
            }
        }
        (Syntax::Atom { .. }, Syntax::Atom { .. }) => {}
        _ => unreachable!("Unchanged nodes should be both lists, or both atoms"),
    }
}

pub fn insert_deep_novel<'a>(node: &'a Syntax<'a>, change_map: &mut ChangeMap<'a>) {
    change_map.insert(node, ChangeKind::Novel);

    if let Syntax::List { children, .. } = node {
        for child in children.iter() {
            insert_deep_novel(child, change_map);
        }
    }
}
