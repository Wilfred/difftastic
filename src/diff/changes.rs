//! Data types that track the change state for syntax nodes.

use crate::{
    hash::DftHashMap,
    parse::syntax::{Syntax, SyntaxArena, SyntaxArenaId, SyntaxId},
};

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(SyntaxArenaId<'a>),
    ReplacedComment(SyntaxArenaId<'a>, SyntaxArenaId<'a>),
    ReplacedString(SyntaxArenaId<'a>, SyntaxArenaId<'a>),
    Novel,
}

#[derive(Debug, Default)]
pub struct ChangeMap<'a> {
    changes: DftHashMap<SyntaxId, ChangeKind<'a>>,
}

impl<'a> ChangeMap<'a> {
    pub fn insert(
        &mut self,
        node_arena: &SyntaxArena<'a>,
        node_id: SyntaxArenaId<'a>,
        ck: ChangeKind<'a>,
    ) {
        let node = &node_arena[node_id];
        self.changes.insert(node.id(), ck);
    }

    pub fn get(
        &self,
        node_arena: &SyntaxArena<'a>,
        node_id: SyntaxArenaId<'a>,
    ) -> Option<ChangeKind<'a>> {
        let node = &node_arena[node_id];
        self.changes.get(&node.id()).copied()
    }
}

pub fn insert_deep_unchanged<'a>(
    node_arena: &SyntaxArena<'a>,
    node_id: SyntaxArenaId<'a>,
    opposite_node_id: SyntaxArenaId<'a>,
    change_map: &mut ChangeMap<'a>,
) {
    let node = &node_arena[node_id];
    let opposite_node = &node_arena[opposite_node_id];

    change_map.insert(node_arena, node_id, ChangeKind::Unchanged(opposite_node_id));

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
                insert_deep_unchanged(node_arena, *child, *opposite_child, change_map);
            }
        }
        (Syntax::Atom { .. }, Syntax::Atom { .. }) => {}
        _ => unreachable!("Unchanged nodes should be both lists, or both atoms"),
    }
}

pub fn insert_deep_novel<'a>(
    node_arena: &SyntaxArena<'a>,
    node_id: SyntaxArenaId<'a>,
    change_map: &mut ChangeMap<'a>,
) {
    let node = &node_arena[node_id];
    change_map.insert(node_arena, node_id, ChangeKind::Novel);

    if let Syntax::List { children, .. } = node {
        for child in children.iter() {
            insert_deep_novel(node_arena, *child, change_map);
        }
    }
}
