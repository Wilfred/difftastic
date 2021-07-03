#![allow(clippy::mutable_key_type)] // Hash for Node doesn't use mutable fields.
#![allow(dead_code)]

use std::cell::Cell;
use std::fmt;
use std::hash::{Hash, Hasher};
use typed_arena::Arena;

use crate::lines::NewlinePositions;
use crate::positions::SingleLineSpan;
use ChangeKind::*;
use Node::*;

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Node<'a>),
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

pub enum Node<'a> {
    List {
        next: Cell<Option<&'a Node<'a>>>,
        change: Cell<Option<ChangeKind<'a>>>,
        open_position: Vec<SingleLineSpan>,
        open_delimiter: String,
        children: Vec<&'a Node<'a>>,
        close_position: Vec<SingleLineSpan>,
        close_delimiter: String,
        num_descendants: usize,
    },
    Atom {
        next: Cell<Option<&'a Node<'a>>>,
        change: Cell<Option<ChangeKind<'a>>>,
        position: Vec<SingleLineSpan>,
        content: String,
        kind: AtomKind,
    },
}

impl<'a> fmt::Debug for Node<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            List {
                open_delimiter,
                children,
                close_delimiter,
                change,
                next,
                ..
            } => {
                let mut ds = f.debug_struct("List");

                ds.field("open_delimiter", &open_delimiter)
                    .field("children", &children)
                    .field("close_delimiter", &close_delimiter)
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
                ..
            } => {
                let mut ds = f.debug_struct("Atom");
                ds.field("content", &content).field("change", &change.get());

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

impl<'a> Node<'a> {
    #[allow(clippy::clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_list(
        arena: &'a Arena<Node<'a>>,
        open_delimiter: &str,
        open_position: Vec<SingleLineSpan>,
        children: Vec<&'a Node<'a>>,
        close_delimiter: &str,
        close_position: Vec<SingleLineSpan>,
    ) -> &'a mut Node<'a> {
        let mut num_descendants = 0;
        for child in &children {
            num_descendants += match child {
                List {
                    num_descendants, ..
                } => *num_descendants + 1,
                Atom { .. } => 1,
            };
        }

        arena.alloc(List {
            next: Cell::new(None),
            change: Cell::new(None),
            open_position,
            open_delimiter: open_delimiter.into(),
            close_delimiter: close_delimiter.into(),
            close_position,
            children,
            num_descendants,
        })
    }

    #[allow(clippy::clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_atom(
        arena: &'a Arena<Node<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
        kind: AtomKind,
    ) -> &'a mut Node<'a> {
        arena.alloc(Atom {
            next: Cell::new(None),
            position,
            content: content.into(),
            change: Cell::new(None),
            kind,
        })
    }

    pub fn get_next(&self) -> Option<&'a Node<'a>> {
        match self {
            List { next, .. } => next.get(),
            Atom { next, .. } => next.get(),
        }
    }

    fn get_change(&self) -> Option<ChangeKind<'a>> {
        match self {
            List { change, .. } => change.get(),
            Atom { change, .. } => change.get(),
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
                    open_delimiter: lhs_open_delimiter,
                    close_delimiter: lhs_close_delimiter,
                    children: lhs_children,
                    ..
                },
                List {
                    open_delimiter: rhs_open_delimiter,
                    close_delimiter: rhs_close_delimiter,
                    children: rhs_children,
                    ..
                },
            ) => {
                if lhs_open_delimiter != rhs_open_delimiter
                    || lhs_close_delimiter != rhs_close_delimiter
                {
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
}

pub fn set_next<'a>(node: &'a Node<'a>) {
    set_next_(node, None);
}

fn set_next_<'a>(node: &'a Node<'a>, new_next: Option<&'a Node<'a>>) {
    match node {
        List { next, children, .. } => {
            next.set(new_next);
            for (i, child) in children.iter().enumerate() {
                let child_next = match children.get(i + 1) {
                    Some(child_next) => Some(*child_next),
                    None => new_next,
                };
                set_next_(child, child_next);
            }
        }
        Atom { next, .. } => {
            next.set(new_next);
        }
    }
}

impl<'a> PartialEq for Node<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.equal_content(other)
    }
}
impl<'a> Eq for Node<'a> {}

impl<'a> Hash for Node<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        match self {
            List {
                open_delimiter,
                close_delimiter,
                children,
                ..
            } => {
                open_delimiter.hash(state);
                close_delimiter.hash(state);
                for child in children {
                    child.hash(state);
                }
            }
            Atom { content, .. } => {
                content.hash(state);
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
pub fn change_positions<'a>(src: &str, opposite_src: &str, nodes: &[&Node<'a>]) -> Vec<MatchedPos> {
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
    nodes: &[&Node<'a>],
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
                let change = change.get().expect(&format!(
                    "Should have changes set in all nodes: {:#?}",
                    node
                ));

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
                let change = change.get().expect(&format!(
                    "Should have changes set in all nodes: {:#?}",
                    node
                ));
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
        let nodes = &[&Atom {
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
    fn test_atom_equality_ignores_change_and_pos() {
        assert_eq!(
            Atom {
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
                next: Cell::new(None),
                change: Cell::new(None),
                position: vec![SingleLineSpan {
                    line: 10.into(),
                    start_col: 20,
                    end_col: 30
                }],
                content: "foo".into(),
                kind: Other,
            }
        );
    }
}
