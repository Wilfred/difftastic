#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.
#![allow(dead_code)]

use std::cell::Cell;
use std::collections::hash_map::DefaultHasher;
use std::fmt;
use std::hash::{Hash, Hasher};
use typed_arena::Arena;

use crate::lines::NewlinePositions;
use crate::positions::SingleLineSpan;
use ChangeKind::*;
use Syntax::*;

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Syntax<'a>),
    Moved,
    Novel,
}

/// A Debug implementation that ignores the corresponding node
/// mentioned for Unchanged. Otherwise we will infinitely loop on
/// unchanged nodes, which both point to the other.
impl<'a> fmt::Debug for ChangeKind<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Unchanged(_) => "Unchanged",
            Moved => "Moved",
            Novel => "Novel",
        };
        f.write_str(desc)
    }
}

#[derive(PartialEq, Eq, Copy, Clone, Debug, PartialOrd, Ord)]
pub enum AtomKind {
    String,
    Comment,
    Other,
}

pub enum Syntax<'a> {
    List {
        pos_content_hash: u64,
        next: Cell<Option<&'a Syntax<'a>>>,
        change: Cell<Option<ChangeKind<'a>>>,
        open_position: Vec<SingleLineSpan>,
        open_content: String,
        children: Vec<&'a Syntax<'a>>,
        close_position: Vec<SingleLineSpan>,
        close_content: String,
        num_descendants: usize,
    },
    Atom {
        pos_content_hash: u64,
        next: Cell<Option<&'a Syntax<'a>>>,
        change: Cell<Option<ChangeKind<'a>>>,
        position: Vec<SingleLineSpan>,
        content: String,
        kind: AtomKind,
    },
}

impl<'a> fmt::Debug for Syntax<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            List {
                open_content,
                children,
                close_content,
                change,
                next,
                ..
            } => {
                let mut ds = f.debug_struct("List");

                ds.field("open_content", &open_content)
                    .field("children", &children)
                    .field("close_content", &close_content)
                    .field("change", &change.get());

                let next_s = match next.get() {
                    Some(List { .. }) => "Some(List)",
                    Some(Atom { .. }) => "Some(Atom)",
                    None => "None",
                };
                ds.field("next", &next_s);

                ds.finish()
            }
            Atom {
                content,
                change,
                next,
                position,
                ..
            } => {
                let mut ds = f.debug_struct("Atom");
                ds.field("content", &content).field("change", &change.get());
                ds.field("position", &position);

                let next_s = match next.get() {
                    Some(List { .. }) => "Some(List)",
                    Some(Atom { .. }) => "Some(Atom)",
                    None => "None",
                };
                ds.field("next", &next_s);

                ds.finish()
            }
        }
    }
}

impl<'a> Syntax<'a> {
    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_list(
        arena: &'a Arena<Syntax<'a>>,
        open_content: &str,
        open_position: Vec<SingleLineSpan>,
        children: Vec<&'a Syntax<'a>>,
        close_content: &str,
        close_position: Vec<SingleLineSpan>,
    ) -> &'a mut Syntax<'a> {
        let mut num_descendants = 0;
        for child in &children {
            num_descendants += match child {
                List {
                    num_descendants, ..
                } => *num_descendants + 1,
                Atom { .. } => 1,
            };
        }

        let mut hasher = DefaultHasher::new();

        open_position.hash(&mut hasher);
        open_content.hash(&mut hasher);
        close_content.hash(&mut hasher);
        close_position.hash(&mut hasher);
        for child in &children {
            child.hash(&mut hasher);
        }

        arena.alloc(List {
            pos_content_hash: hasher.finish(),
            next: Cell::new(None),
            change: Cell::new(None),
            open_position,
            open_content: open_content.into(),
            close_content: close_content.into(),
            close_position,
            children,
            num_descendants,
        })
    }

    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_atom(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
        kind: AtomKind,
    ) -> &'a mut Syntax<'a> {
        let mut hasher = DefaultHasher::new();

        position.hash(&mut hasher);
        content.hash(&mut hasher);

        arena.alloc(Atom {
            pos_content_hash: hasher.finish(),
            next: Cell::new(None),
            position,
            content: content.into(),
            change: Cell::new(None),
            kind,
        })
    }

    pub fn get_next(&self) -> Option<&'a Syntax<'a>> {
        match self {
            List { next, .. } => next.get(),
            Atom { next, .. } => next.get(),
        }
    }

    pub fn set_change(&self, ck: ChangeKind<'a>) {
        match self {
            List { change, .. } => {
                change.set(Some(ck));
            }
            Atom { change, .. } => {
                change.set(Some(ck));
            }
        }
    }

    pub fn set_change_deep(&self, ck: ChangeKind<'a>) {
        self.set_change(ck);

        if let List { children, .. } = self {
            // For unchanged lists, match up children with the
            // unchanged children on the other side.
            if let Unchanged(List {
                children: other_children,
                ..
            }) = ck
            {
                for (child, other_child) in children.iter().zip(other_children) {
                    child.set_change_deep(Unchanged(other_child));
                }
            } else {
                for child in children {
                    child.set_change_deep(ck);
                }
            };
        }
    }

    pub fn equal_content(&self, other: &Self) -> bool {
        match (&self, other) {
            (
                Atom {
                    content: lhs_content,
                    kind: lhs_kind,
                    ..
                },
                Atom {
                    content: rhs_content,
                    kind: rhs_kind,
                    ..
                },
            ) => lhs_content == rhs_content && lhs_kind == rhs_kind,
            (
                List {
                    open_content: lhs_open_content,
                    close_content: lhs_close_content,
                    children: lhs_children,
                    ..
                },
                List {
                    open_content: rhs_open_content,
                    close_content: rhs_close_content,
                    children: rhs_children,
                    ..
                },
            ) => {
                if lhs_open_content != rhs_open_content || lhs_close_content != rhs_close_content {
                    return false;
                }
                if lhs_children.len() != rhs_children.len() {
                    return false;
                }
                for (lhs_child, rhs_child) in lhs_children.iter().zip(rhs_children.iter()) {
                    if !lhs_child.equal_content(rhs_child) {
                        return false;
                    }
                }

                true
            }
            _ => false,
        }
    }

    /// Does this `Node` have the same position in all its subnodes?
    ///
    /// Nodes with different numbers of children return false
    /// regardless of top-level positions.
    fn equal_pos(&self, other: &Self) -> bool {
        match (&self, other) {
            (
                Atom {
                    position: lhs_position,
                    ..
                },
                Atom {
                    position: rhs_position,
                    ..
                },
            ) => lhs_position == rhs_position,
            (
                List {
                    open_position: lhs_open_position,
                    close_position: lhs_close_position,
                    children: lhs_children,
                    ..
                },
                List {
                    open_position: rhs_open_position,
                    close_position: rhs_close_position,
                    children: rhs_children,
                    ..
                },
            ) => {
                if lhs_open_position != rhs_open_position
                    || lhs_close_position != rhs_close_position
                {
                    return false;
                }
                if lhs_children.len() != rhs_children.len() {
                    return false;
                }

                for (lhs_child, rhs_child) in lhs_children.iter().zip(rhs_children.iter()) {
                    if !lhs_child.equal_pos(rhs_child) {
                        return false;
                    }
                }

                true
            }
            _ => false,
        }
    }
}

pub fn set_next<'a>(nodes: &[&'a Syntax<'a>], parent_next: Option<&'a Syntax<'a>>) {
    for (i, node) in nodes.iter().enumerate() {
        let node_next = match nodes.get(i + 1) {
            Some(node_next) => Some(*node_next),
            None => parent_next,
        };

        match node {
            List { next, children, .. } => {
                next.set(node_next);
                set_next(children, node_next);
            }
            Atom { next, .. } => {
                next.set(node_next);
            }
        }
    }
}

impl<'a> PartialEq for Syntax<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.equal_pos(other) && self.equal_content(other)
    }
}
impl<'a> Eq for Syntax<'a> {}

impl<'a> Hash for Syntax<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        match self {
            List {
                pos_content_hash, ..
            } => {
                pos_content_hash.hash(state);
            }
            Atom {
                pos_content_hash, ..
            } => {
                pos_content_hash.hash(state);
            }
        }
    }
}

#[derive(PartialEq, Eq, Debug)]
pub enum MatchKind {
    Unchanged,
    Moved,
    Novel,
}

impl MatchKind {
    fn from_change(ck: ChangeKind) -> Self {
        match ck {
            Unchanged(_) => MatchKind::Unchanged,
            Moved => MatchKind::Moved,
            Novel => MatchKind::Novel,
        }
    }
}

#[derive(Debug)]
pub struct MatchedPos {
    pub kind: MatchKind,
    pub pos: Vec<SingleLineSpan>,
    pub prev_opposite_pos: Vec<SingleLineSpan>,
}

/// Walk `nodes` and return a vec of all the changed positions.
pub fn change_positions<'a>(
    src: &str,
    opposite_src: &str,
    nodes: &[&Syntax<'a>],
) -> Vec<MatchedPos> {
    let nl_pos = NewlinePositions::from(src);
    let opposite_nl_pos = NewlinePositions::from(opposite_src);

    let mut positions = Vec::new();
    let mut prev_unchanged = vec![SingleLineSpan {
        line: 0.into(),
        start_col: 0,
        end_col: 0,
    }];
    change_positions_(
        &nl_pos,
        &opposite_nl_pos,
        nodes,
        &mut prev_unchanged,
        &mut positions,
    );
    positions
}

fn change_positions_<'a>(
    nl_pos: &NewlinePositions,
    opposite_nl_pos: &NewlinePositions,
    nodes: &[&Syntax<'a>],
    prev_opposite_pos: &mut Vec<SingleLineSpan>,
    positions: &mut Vec<MatchedPos>,
) {
    for node in nodes {
        match node {
            List {
                change,
                open_position,
                children,
                close_position,
                ..
            } => {
                let change = change
                    .get()
                    .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));

                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List {
                            open_position: opposite_open_pos,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_open_pos.clone();
                        }
                        Atom { .. } => unreachable!(),
                    }
                }

                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: open_position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });

                change_positions_(
                    nl_pos,
                    opposite_nl_pos,
                    children,
                    prev_opposite_pos,
                    positions,
                );

                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List {
                            close_position: opposite_close_pos,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_close_pos.clone();
                        }
                        Atom { .. } => unreachable!(),
                    }
                }
                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: close_position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });
            }
            Atom {
                change, position, ..
            } => {
                let change = change
                    .get()
                    .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));
                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List { .. } => {
                            dbg!(node, opposite_node);
                            unreachable!()
                        }
                        Atom {
                            position: opposite_position,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_position.clone();
                        }
                    }
                }
                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;
    use AtomKind::Other;

    /// Ensure that we assign prev_opposite_pos even if the change is on the first node.
    #[test]
    fn test_prev_opposite_pos_first_node() {
        // TODO: use Node::new_atom
        let nodes = &[&Atom {
            pos_content_hash: 0,
            next: Cell::new(None),
            change: Cell::new(Some(Novel)),
            position: vec![SingleLineSpan {
                line: 0.into(),
                start_col: 2,
                end_col: 3,
            }],
            content: "foo".into(),
            kind: Other,
        }];
        let positions = change_positions("irrelevant", "also irrelevant", nodes);
        assert_eq!(
            positions[0].prev_opposite_pos,
            vec![SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 0
            }]
        );
    }

    #[test]
    fn test_atom_equality_ignores_change() {
        assert_eq!(
            Atom {
                pos_content_hash: 0,
                next: Cell::new(None),
                change: Cell::new(Some(Novel)),
                position: vec![SingleLineSpan {
                    line: 1.into(),
                    start_col: 2,
                    end_col: 3
                }],
                content: "foo".into(),
                kind: Other,
            },
            Atom {
                pos_content_hash: 1,
                next: Cell::new(None),
                change: Cell::new(None),
                position: vec![SingleLineSpan {
                    line: 1.into(),
                    start_col: 2,
                    end_col: 3
                }],
                content: "foo".into(),
                kind: Other,
            }
        );
    }
}
