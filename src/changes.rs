//! Data types that track the change state for syntax nodes.

use std::num::NonZeroU32;

use rustc_hash::FxHashMap;

use crate::parse::syntax::Syntax;

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Syntax<'a>),
    ReplacedComment(&'a Syntax<'a>, &'a Syntax<'a>),
    Novel,
}

#[derive(Debug, Default)]
pub struct ChangeMap<'a> {
    changes: FxHashMap<NonZeroU32, ChangeKind<'a>>,
}

impl<'a> ChangeMap<'a> {
    pub fn insert(&mut self, node: &'a Syntax<'a>, ck: ChangeKind<'a>) {
        self.changes.insert(node.id(), ck);
    }

    pub fn get(&self, node: &Syntax<'a>) -> Option<ChangeKind<'a>> {
        self.changes.get(&node.id()).copied()
    }
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
