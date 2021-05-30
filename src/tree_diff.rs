use colored::*;
use diff::{slice, Result::*};
use itertools::EitherOrBoth;
use itertools::Itertools;
use std::cell::Cell;
use std::cmp::min;
use std::cmp::Ordering;
use std::collections::HashMap;
use std::hash::{Hash, Hasher};
use typed_arena::Arena;

use crate::lines::AbsoluteRange;
use ChangeKind::*;
use Node::*;

#[derive(PartialEq, Eq, Copy, Clone, Debug)]
pub enum ChangeKind {
    Unchanged,
    Moved,
    Novel,
}

#[derive(PartialEq, Eq, Copy, Clone, Debug, PartialOrd, Ord)]
pub enum AtomKind {
    String,
    Comment,
    Other,
}

#[derive(Debug, Clone)]
pub enum Node<'a> {
    List {
        change: Cell<Option<ChangeKind>>,
        open_position: AbsoluteRange,
        open_delimiter: String,
        children: Vec<&'a Node<'a>>,
        close_position: AbsoluteRange,
        close_delimiter: String,
        num_descendants: usize,
    },
    Atom {
        change: Cell<Option<ChangeKind>>,
        position: AbsoluteRange,
        content: String,
        kind: AtomKind,
    },
}

impl<'a> Node<'a> {
    pub fn new_list(
        arena: &'a Arena<Node<'a>>,
        open_delimiter: &str,
        open_position: AbsoluteRange,
        children: Vec<&'a Node<'a>>,
        close_delimiter: &str,
        close_position: AbsoluteRange,
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
            change: Cell::new(None),
            open_position,
            open_delimiter: open_delimiter.into(),
            close_delimiter: close_delimiter.into(),
            close_position,
            children,
            num_descendants,
        })
    }

    pub fn new_atom(
        arena: &'a Arena<Node<'a>>,
        position: AbsoluteRange,
        content: &str,
        kind: AtomKind,
    ) -> &'a mut Node<'a> {
        arena.alloc(Atom {
            position,
            content: content.into(),
            change: Cell::new(None),
            kind,
        })
    }

    fn get_change(&self) -> Option<ChangeKind> {
        match self {
            List { change, .. } => change.get(),
            Atom { change, .. } => change.get(),
        }
    }

    fn set_change(&self, ck: ChangeKind) {
        match self {
            List { change, .. } => {
                change.set(Some(ck));
            }
            Atom { change, .. } => {
                change.set(Some(ck));
            }
        }
    }

    fn set_change_deep(&self, ck: ChangeKind) {
        self.set_change(ck);
        if let List { children, .. } = self {
            for child in children {
                child.set_change_deep(ck);
            }
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

pub fn change_positions(nodes: &[&Node]) -> Vec<(ChangeKind, AbsoluteRange)> {
    let mut res: Vec<(ChangeKind, AbsoluteRange)> = vec![];
    for node in nodes {
        match node {
            List {
                change,
                open_position,
                children,
                close_position,
                ..
            } => {
                res.push((
                    change.get().expect("Should have computed change kind"),
                    *open_position,
                ));
                let mut child_positions = change_positions(children);
                res.append(&mut child_positions);
                res.push((
                    change.get().expect("Should have computed change kind"),
                    *close_position,
                ));
            }
            Atom {
                change, position, ..
            } => {
                res.push((
                    change.get().expect("Should have computed change kind"),
                    *position,
                ));
            }
        }
    }
    res
}

pub fn apply_colors(s: &str, is_lhs: bool, positions: &[(ChangeKind, AbsoluteRange)]) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for (kind, position) in positions {
        if position.start >= s.len() {
            break;
        }

        // Dim text that doesn't have any matching positions.
        if i < position.start {
            res.push_str(&s[i..position.start].dimmed());
        }

        let color = match kind {
            Unchanged => Color::White,
            Novel if is_lhs => Color::Red,
            Novel => Color::Green,
            Moved => Color::Yellow,
        };
        let colored = &s[position.start..min(s.len(), position.end)].color(color);

        res.push_str(&colored.to_string());
        i = position.end;
    }
    if i < s.len() {
        res.push_str(&s[i..s.len()]);
    }
    res
}

/// Extremely dumb top-level comparison of `lhs` and `rhs`.
pub fn set_changed(lhs: &[&Node], rhs: &[&Node]) {
    let mut lhs_subtrees = HashMap::new();
    for s in lhs.iter() {
        build_subtrees(s, &mut lhs_subtrees);
    }

    let mut rhs_subtrees = HashMap::new();
    for s in rhs.iter() {
        build_subtrees(s, &mut rhs_subtrees);
    }

    let mut env = Env::new(lhs_subtrees, rhs_subtrees);
    mark_unchanged_nodes(lhs, rhs, &mut env);

    process_moves(env);
}

/// Handles nodes that exist on both sides, but in different
/// positions. These may be moves (when both sides have the same
/// number of a node) or additional nodes.
///
/// Try to find a minimal set of moves by considering the largest
/// subtrees first.
fn process_moves<'a>(mut env: Env<'a>) {
    sort_by_size(&mut env.lhs_unmatched);
    for lhs_node in env.lhs_unmatched {
        // Partial overlaps?
        if lhs_node.get_change().is_none() {
            if try_decrement(lhs_node, &mut env.rhs_counts) {
                lhs_node.set_change_deep(Moved)
            } else {
                lhs_node.set_change_deep(Novel)
            }
        }
    }

    sort_by_size(&mut env.rhs_unmatched);
    for rhs_node in env.rhs_unmatched {
        if rhs_node.get_change().is_none() {
            if try_decrement(rhs_node, &mut env.lhs_counts) {
                rhs_node.set_change_deep(Moved)
            } else {
                rhs_node.set_change_deep(Novel)
            }
        }
    }
}

fn get_count<T: Hash + Eq>(node: &T, counts: &HashMap<&T, i64>) -> i64 {
    *counts.get(node).unwrap_or(&0)
}

/// Decrement the count of `node` from `counts`, along with all its children.
fn decrement<'a>(node: &'a Node<'a>, counts: &mut HashMap<&'a Node<'a>, i64>) {
    let count = if let Some(count) = counts.get(node) {
        *count
    } else {
        panic!("Called decrement on a node that isn't in counts")
    };

    assert!(count > 0);
    counts.insert(node, count - 1);
    match node {
        List { children, .. } => {
            for child in children {
                decrement(child, counts);
            }
        }
        Atom { .. } => {}
    }
}

fn try_decrement<'a>(node: &'a Node<'a>, counts: &mut HashMap<&'a Node<'a>, i64>) -> bool {
    let node_count = get_count(node, counts);

    if node_count > 0 {
        counts.insert(node, node_count - 1);
        match node {
            List { children, .. } => {
                for child in children {
                    try_decrement(child, counts);
                }
            }
            Atom { .. } => {}
        }
        true
    } else {
        false
    }
}

struct Env<'a> {
    lhs_counts: HashMap<&'a Node<'a>, i64>,
    rhs_counts: HashMap<&'a Node<'a>, i64>,
    lhs_unmatched: Vec<&'a Node<'a>>,
    rhs_unmatched: Vec<&'a Node<'a>>,
}

impl<'a> Env<'a> {
    fn new(
        lhs_counts: HashMap<&'a Node<'a>, i64>,
        rhs_counts: HashMap<&'a Node<'a>, i64>,
    ) -> Self {
        Env {
            lhs_counts,
            rhs_counts,
            lhs_unmatched: Vec::new(),
            rhs_unmatched: Vec::new(),
        }
    }
}

// Greedy tree differ.
fn mark_unchanged_nodes<'a>(lhs: &[&'a Node], rhs: &[&'a Node], env: &mut Env<'a>) {
    // Run a diff algorithm on the nodes at this level, and mark as
    // many things as unchanged as we can.
    for res in slice(lhs, rhs) {
        match res {
            Both(lhs_node, rhs_node) => {
                lhs_node.set_change_deep(Unchanged);
                rhs_node.set_change_deep(Unchanged);

                decrement(lhs_node, &mut env.rhs_counts);
                decrement(rhs_node, &mut env.lhs_counts);
            }
            _ => {}
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
        mark_unchanged_node(lhs_node, rhs_node, env);
    }
}

fn mark_unchanged_node<'a>(lhs: Option<&'a Node>, rhs: Option<&'a Node>, env: &mut Env<'a>) {
    match (lhs, rhs) {
        (Some(lhs_node), Some(rhs_node)) => {
            let lhs_possible_move = get_count(lhs_node, &env.rhs_counts) > 0;
            let rhs_possible_move = get_count(rhs_node, &env.lhs_counts) > 0;

            match (lhs_possible_move, rhs_possible_move) {
                (true, true) => {
                    env.lhs_unmatched.push(lhs_node);
                    env.rhs_unmatched.push(rhs_node);
                    return;
                }
                (true, false) => {
                    env.lhs_unmatched.push(lhs_node);
                    mark_unchanged_node(None, rhs, env);
                    return;
                }
                (false, true) => {
                    env.rhs_unmatched.push(rhs_node);
                    mark_unchanged_node(lhs, None, env);
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
                        lhs_node.set_change(Unchanged);
                        rhs_node.set_change(Unchanged);
                    } else {
                        // Children are different and the wrapping
                        // has changed (e.g. from {} to []).
                        lhs_node.set_change(Novel);
                        rhs_node.set_change(Novel);
                    }
                    mark_unchanged_nodes(&lhs_children[..], &rhs_children[..], env);
                }
                (
                    List {
                        children: lhs_children,
                        ..
                    },
                    Atom { .. },
                ) => {
                    lhs_node.set_change(Novel);
                    mark_unchanged_nodes(&lhs_children[..], std::slice::from_ref(&rhs_node), env);
                }
                (
                    Atom { .. },
                    List {
                        children: rhs_children,
                        ..
                    },
                ) => {
                    rhs_node.set_change(Novel);
                    mark_unchanged_nodes(std::slice::from_ref(&lhs_node), &rhs_children[..], env);
                }
                (Atom { .. }, Atom { .. }) => {
                    lhs_node.set_change(Novel);
                    rhs_node.set_change(Novel);
                }
            }
        }
        (Some(lhs_node), None) => {
            if get_count(lhs_node, &env.rhs_counts) > 0 {
                env.lhs_unmatched.push(lhs_node);
            } else {
                lhs_node.set_change(Novel);
                if let List { children, .. } = lhs_node {
                    mark_unchanged_nodes(&children[..], &[], env);
                }
            }
        }
        (None, Some(rhs_node)) => {
            if get_count(rhs_node, &env.lhs_counts) > 0 {
                env.rhs_unmatched.push(rhs_node);
            } else {
                rhs_node.set_change(Novel);
                if let List { children, .. } = rhs_node {
                    mark_unchanged_nodes(&[], &children[..], env);
                }
            }
        }
        (None, None) => {}
    }
}

fn build_subtrees<'a>(s: &'a Node<'a>, subtrees: &mut HashMap<&'a Node<'a>, i64>) {
    let entry = subtrees.entry(s).or_insert(0);
    *entry += 1;
    match s {
        List { children, .. } => {
            for child in children {
                build_subtrees(child, subtrees);
            }
        }
        Atom { .. } => {}
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use AtomKind::Other;

    #[test]
    fn test_atom_equality_ignores_change_and_pos() {
        assert_eq!(
            Atom {
                change: Cell::new(Some(Novel)),
                position: AbsoluteRange { start: 0, end: 1 },
                content: "foo".into(),
                kind: Other,
            },
            Atom {
                change: Cell::new(None),
                position: AbsoluteRange { start: 42, end: 50 },
                content: "foo".into(),
                kind: Other,
            }
        );
    }
}
