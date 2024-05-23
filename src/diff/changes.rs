//! Data types that track the change state for syntax nodes.

use crate::{
    hash::DftHashMap,
    parse::syntax::{Syntax, SyntaxId, SyntaxIdMap},
};

#[derive(PartialEq, Eq, Clone, Copy)]
pub(crate) enum ChangeKind {
    Unchanged(SyntaxId),
    ReplacedComment(SyntaxId, SyntaxId),
    ReplacedString(SyntaxId, SyntaxId),
    Novel,
}

#[derive(Debug, Default)]
pub(crate) struct ChangeMap {
    changes: DftHashMap<SyntaxId, ChangeKind>,
}

impl ChangeMap {
    pub(crate) fn insert(&mut self, node: SyntaxId, ck: ChangeKind) {
        self.changes.insert(node, ck);
    }

    pub(crate) fn get(&self, node: SyntaxId) -> Option<ChangeKind> {
        self.changes.get(&node).copied()
    }
}

pub(crate) fn insert_deep_unchanged<'s>(
    node_id: SyntaxId,
    opposite_node_id: SyntaxId,
    id_map: &SyntaxIdMap<'s>,
    change_map: &mut ChangeMap,
) {
    let node = id_map[&node_id];
    let opposite_node = id_map[&opposite_node_id];

    change_map.insert(node_id, ChangeKind::Unchanged(opposite_node_id));

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
                insert_deep_unchanged(child.id(), opposite_child.id(), id_map, change_map);
            }
        }
        (Syntax::Atom { .. }, Syntax::Atom { .. }) => {}
        _ => unreachable!("Unchanged nodes should be both lists, or both atoms"),
    }
}

pub(crate) fn insert_deep_novel<'s>(
    node_id: SyntaxId,
    id_map: &SyntaxIdMap<'s>,
    change_map: &mut ChangeMap,
) {
    change_map.insert(node_id, ChangeKind::Novel);

    let node = id_map[&node_id];
    if let Syntax::List { children, .. } = node {
        for child in children.iter() {
            insert_deep_novel(child.id(), id_map, change_map);
        }
    }
}
