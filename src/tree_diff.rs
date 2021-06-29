#![allow(clippy::mutable_key_type)] // Hash for Node doesn't use mutable fields.

use diff::{slice, Result::*};
use itertools::EitherOrBoth;
use itertools::Itertools;
use std::cell::Cell;
use std::cmp::Ordering;
use std::collections::HashMap;
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

#[derive(Debug)]
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

    fn set_change(&self, ck: ChangeKind<'a>) {
        match self {
            List { change, .. } => {
                change.set(Some(ck));
            }
            Atom { change, .. } => {
                change.set(Some(ck));
            }
        }
    }

    fn set_change_deep(&self, ck: ChangeKind<'a>) {
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
                    open_delimiter: lhs_start_content,
                    close_delimiter: lhs_end_content,
                    children: lhs_children,
                    ..
                },
                List {
                    open_delimiter: rhs_start_content,
                    close_delimiter: rhs_end_content,
                    children: rhs_children,
                    ..
                },
            ) => {
                lhs_start_content == rhs_start_content
                    && lhs_end_content == rhs_end_content
                    && lhs_children == rhs_children
            }
            _ => false,
        }
    }
}
impl<'a> Eq for Node<'a> {}

impl<'a> Hash for Node<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        match self {
            List {
                open_delimiter: start_content,
                close_delimiter: end_content,
                children,
                ..
            } => {
                start_content.hash(state);
                end_content.hash(state);
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

/// Compare two nodes, treating nodes with more children as
/// greater. If the number of nodes match, consider nodes with an
/// earlier position to be greater.
fn cmp_nodes(lhs: &&Node, rhs: &&Node) -> Ordering {
    match lhs {
        List {
            open_position: lhs_open_position,
            num_descendants: lhs_num_descendants,
            ..
        } => match rhs {
            List {
                open_position: rhs_open_position,
                num_descendants: rhs_num_descendants,
                ..
            } => match lhs_num_descendants.cmp(rhs_num_descendants) {
                Ordering::Equal => lhs_open_position.cmp(rhs_open_position),
                o => o,
            },
            Atom { .. } => Ordering::Greater,
        },
        Atom {
            position: lhs_position,
            ..
        } => match rhs {
            List { .. } => Ordering::Less,
            Atom {
                position: rhs_position,
                ..
            } => lhs_position.cmp(rhs_position),
        },
    }
}

// Sort a vec of nodes by size, largest first.
fn sort_by_size(nodes: &mut Vec<&Node>) {
    nodes.sort_unstable_by(cmp_nodes);
    nodes.reverse();
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
                let change = change.get().expect("Should have changes set in all nodes");

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
                let change = change.get().expect("Should have changes set in all nodes");
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

/// Calculate a structural diff between `lhs` and `rhs`, and write the
/// change state to the `.change` field on the nodes.
pub fn mark_nodes<'a>(lhs: &[&'a Node<'a>], rhs: &[&'a Node<'a>]) {
    let mut env = Env::new(lhs, rhs);
    mark_unchanged_or_novel(lhs, rhs, &mut env);

    mark_moves(env);
}

/// Handles nodes that exist on both sides, but in different
/// positions. These may be moves (when both sides have the same
/// number of a node) or additional nodes.
///
/// Try to find a minimal set of moves by considering the largest
/// subtrees first.
fn mark_moves(mut env: Env) {
    sort_by_size(&mut env.lhs_unmatched);
    for lhs_node in env.lhs_unmatched {
        // Partial overlaps?
        if lhs_node.get_change().is_none() {
            if env.rhs_counts.try_decrement(lhs_node) {
                lhs_node.set_change_deep(Moved)
            } else {
                lhs_node.set_change_deep(Novel)
            }
        }
    }

    sort_by_size(&mut env.rhs_unmatched);
    for rhs_node in env.rhs_unmatched {
        if rhs_node.get_change().is_none() {
            if env.lhs_counts.try_decrement(rhs_node) {
                rhs_node.set_change_deep(Moved)
            } else {
                rhs_node.set_change_deep(Novel)
            }
        }
    }
}

struct NodeCounts<'a> {
    counts: HashMap<&'a Node<'a>, i64>,
}

impl<'a> NodeCounts<'a> {
    fn new(nodes: &[&'a Node<'a>]) -> Self {
        let mut res = Self {
            counts: HashMap::new(),
        };
        for node in nodes {
            res._insert_node(node);
        }
        res
    }

    fn _insert_node(&mut self, node: &'a Node<'a>) {
        let entry = self.counts.entry(node).or_insert(0);
        *entry += 1;
        match node {
            List { children, .. } => {
                for child in children {
                    self._insert_node(child);
                }
            }
            Atom { .. } => {}
        }
    }

    fn possible_move(&self, node: &'a Node<'a>) -> bool {
        *self.counts.get(node).unwrap_or(&0) > 0
    }

    /// Decrement the count of `node` from `counts`, along with all its children.
    fn decrement(&mut self, node: &'a Node<'a>) {
        let count = if let Some(count) = self.counts.get(node) {
            *count
        } else {
            panic!("Called decrement on a node that isn't in counts")
        };

        assert!(count > 0);
        self.counts.insert(node, count - 1);
        match node {
            List { children, .. } => {
                for child in children {
                    self.decrement(child);
                }
            }
            Atom { .. } => {}
        }
    }
    fn try_decrement(&mut self, node: &'a Node<'a>) -> bool {
        let node_count = *self.counts.get(node).unwrap_or(&0);

        if node_count > 0 {
            self.counts.insert(node, node_count - 1);
            match node {
                List { children, .. } => {
                    for child in children {
                        self.try_decrement(child);
                    }
                }
                Atom { .. } => {}
            }
            true
        } else {
            false
        }
    }
}

struct Env<'a> {
    lhs_counts: NodeCounts<'a>,
    rhs_counts: NodeCounts<'a>,
    lhs_unmatched: Vec<&'a Node<'a>>,
    rhs_unmatched: Vec<&'a Node<'a>>,
}

impl<'a> Env<'a> {
    fn new(lhs: &[&'a Node<'a>], rhs: &[&'a Node<'a>]) -> Self {
        Env {
            lhs_counts: NodeCounts::new(lhs),
            rhs_counts: NodeCounts::new(rhs),
            lhs_unmatched: Vec::new(),
            rhs_unmatched: Vec::new(),
        }
    }
}

/// Mark nodes that are unambiguously unchanged (they have a
/// corresponding node on the other side) or unambiguously novel
/// (exactly zero occurrences on the other side).
fn mark_unchanged_or_novel<'a>(lhs: &[&'a Node<'a>], rhs: &[&'a Node<'a>], env: &mut Env<'a>) {
    // Run a longest-common-subsequence diff algorithm on the nodes at
    // this level, and mark as many things as unchanged as we can.
    for res in slice(lhs, rhs) {
        if let Both(lhs_node, rhs_node) = res {
            // todo: fix sliders by preferring atoms that come before
            // a list.
            lhs_node.set_change_deep(Unchanged(rhs_node));
            rhs_node.set_change_deep(Unchanged(lhs_node));

            env.lhs_counts.decrement(lhs_node);
            env.rhs_counts.decrement(rhs_node);
        }
    }

    let lhs_unprocessed = lhs.iter().filter(|node| node.get_change().is_none());
    let rhs_unprocessed = rhs.iter().filter(|node| node.get_change().is_none());

    // For the remaining nodes, process children.
    for res in lhs_unprocessed.zip_longest(rhs_unprocessed) {
        let (lhs_node, rhs_node) = match res {
            EitherOrBoth::Both(lhs_node, rhs_node) => (Some(*lhs_node), Some(*rhs_node)),
            EitherOrBoth::Left(lhs_node) => (Some(*lhs_node), None),
            EitherOrBoth::Right(rhs_node) => (None, Some(*rhs_node)),
        };
        mark_novel(lhs_node, rhs_node, env);
    }
}

fn mark_novel<'a>(lhs: Option<&'a Node<'a>>, rhs: Option<&'a Node<'a>>, env: &mut Env<'a>) {
    match (lhs, rhs) {
        (Some(lhs_node), Some(rhs_node)) => {
            match (
                env.rhs_counts.possible_move(lhs_node),
                env.lhs_counts.possible_move(rhs_node),
            ) {
                (true, true) => {
                    env.lhs_unmatched.push(lhs_node);
                    env.rhs_unmatched.push(rhs_node);
                    return;
                }
                (true, false) => {
                    env.lhs_unmatched.push(lhs_node);
                    mark_novel(None, rhs, env);
                    return;
                }
                (false, true) => {
                    env.rhs_unmatched.push(rhs_node);
                    mark_novel(lhs, None, env);
                    return;
                }
                (false, false) => {}
            }

            // Neither is present on the opposite side. Atoms are
            // novel, but check lists for moved subtrees.
            match (lhs_node, rhs_node) {
                (
                    List {
                        open_delimiter: lhs_start_content,
                        close_delimiter: lhs_end_content,
                        children: lhs_children,
                        ..
                    },
                    List {
                        open_delimiter: rhs_start_content,
                        close_delimiter: rhs_end_content,
                        children: rhs_children,
                        ..
                    },
                ) => {
                    // Both sides are lists, so check the
                    // delimiters for the list node themselves, then
                    // recurse.

                    if lhs_start_content == rhs_start_content && lhs_end_content == rhs_end_content
                    {
                        // We didn't see either the LHS or RHS
                        // node on the other side, but they have
                        // the same delimiters, so only the
                        // children are different.
                        lhs_node.set_change(Unchanged(rhs_node));
                        rhs_node.set_change(Unchanged(lhs_node));
                    } else {
                        // Children are different and the wrapping
                        // has changed (e.g. from {} to []).
                        lhs_node.set_change(Novel);
                        rhs_node.set_change(Novel);
                    }
                    mark_unchanged_or_novel(&lhs_children[..], &rhs_children[..], env);
                }
                (
                    List {
                        children: lhs_children,
                        ..
                    },
                    Atom { .. },
                ) => {
                    // TODO: this produces poor results when RHS is
                    // not a descedant of the LHS children. We should
                    // step over RHS in that case. RHS is never a
                    // descendant, or it would be a potential move.
                    lhs_node.set_change(Novel);
                    mark_unchanged_or_novel(
                        &lhs_children[..],
                        std::slice::from_ref(&rhs_node),
                        env,
                    );
                }
                (
                    Atom { .. },
                    List {
                        children: rhs_children,
                        ..
                    },
                ) => {
                    rhs_node.set_change(Novel);
                    mark_unchanged_or_novel(
                        std::slice::from_ref(&lhs_node),
                        &rhs_children[..],
                        env,
                    );
                }
                (Atom { .. }, Atom { .. }) => {
                    lhs_node.set_change(Novel);
                    rhs_node.set_change(Novel);
                }
            }
        }
        (Some(lhs_node), None) => {
            if env.rhs_counts.possible_move(lhs_node) {
                env.lhs_unmatched.push(lhs_node);
            } else {
                lhs_node.set_change(Novel);
                if let List { children, .. } = lhs_node {
                    mark_unchanged_or_novel(&children[..], &[], env);
                }
            }
        }
        (None, Some(rhs_node)) => {
            if env.lhs_counts.possible_move(rhs_node) {
                env.rhs_unmatched.push(rhs_node);
            } else {
                rhs_node.set_change(Novel);
                if let List { children, .. } = rhs_node {
                    mark_unchanged_or_novel(&[], &children[..], env);
                }
            }
        }
        (None, None) => {}
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
