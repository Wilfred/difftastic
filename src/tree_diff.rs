use colored::*;
use std::cell::Cell;
use std::cmp::min;
use std::collections::HashMap;
use std::hash::{Hash, Hasher};
use typed_arena::Arena;

use crate::lines::AbsoluteRange;
use ChangeKind::*;
use Syntax::*;

#[derive(PartialEq, Eq, Copy, Clone, Debug)]
pub enum ChangeKind {
    Unchanged,
    Added,
    Removed,
    Moved,
}

#[derive(PartialEq, Eq, Copy, Clone, Debug)]
pub enum AtomKind {
    String,
    Comment,
    Other,
}

#[derive(Debug, Clone)]
pub enum Syntax<'a> {
    List {
        change: Cell<Option<ChangeKind>>,
        open_position: AbsoluteRange,
        open_delimiter: String,
        children: Vec<&'a Syntax<'a>>,
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

impl<'a> Syntax<'a> {
    pub fn new_list(
        arena: &'a Arena<Syntax<'a>>,
        open_delimiter: &str,
        open_position: AbsoluteRange,
        children: Vec<&'a Syntax<'a>>,
        close_delimiter: &str,
        close_position: AbsoluteRange,
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
        arena: &'a Arena<Syntax<'a>>,
        position: AbsoluteRange,
        content: &str,
        kind: AtomKind,
    ) -> &'a mut Syntax<'a> {
        arena.alloc(Atom {
            position,
            content: content.into(),
            change: Cell::new(None),
            kind,
        })
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

impl<'a> PartialEq for Syntax<'a> {
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
impl<'a> Eq for Syntax<'a> {}

impl<'a> Hash for Syntax<'a> {
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

pub fn change_positions(nodes: &[&Syntax]) -> Vec<(ChangeKind, AbsoluteRange)> {
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

pub fn apply_colors(s: &str, positions: &[(ChangeKind, AbsoluteRange)]) -> String {
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
            Added => Color::Green,
            Removed => Color::Red,
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
pub fn set_changed(lhs: &[&Syntax], rhs: &[&Syntax]) {
    let mut lhs_subtrees = HashMap::new();
    for s in lhs.iter() {
        build_subtrees(s, &mut lhs_subtrees);
    }

    let mut rhs_subtrees = HashMap::new();
    for s in rhs.iter() {
        build_subtrees(s, &mut rhs_subtrees);
    }

    walk_nodes_ordered(lhs, rhs, &mut lhs_subtrees, &mut rhs_subtrees);
}

fn get_count<T: Hash + Eq>(node: &T, counts: &HashMap<&T, i64>) -> i64 {
    *counts.get(node).unwrap_or(&0)
}

/// Decrement the count of `node` from `counts`, along with all its children.
fn decrement<'a>(node: &'a Syntax<'a>, counts: &mut HashMap<&'a Syntax<'a>, i64>) {
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

fn try_decrement<'a>(node: &'a Syntax<'a>, counts: &mut HashMap<&'a Syntax<'a>, i64>) -> bool {
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

// Greedy tree differ.
fn walk_nodes_ordered<'a>(
    lhs: &'a [&'a Syntax],
    rhs: &'a [&'a Syntax],
    lhs_counts: &mut HashMap<&'a Syntax<'a>, i64>,
    rhs_counts: &mut HashMap<&'a Syntax<'a>, i64>,
) {
    let mut lhs_i = 0;
    let mut rhs_i = 0;
    loop {
        match (lhs.get(lhs_i), rhs.get(rhs_i)) {
            (Some(lhs_node), Some(rhs_node)) => {
                // Count the number of nodes on the opposite side.
                let lhs_node_count = get_count(*lhs_node, rhs_counts);
                let rhs_node_count = get_count(*rhs_node, lhs_counts);

                // If they're equal, nothing to do.
                if lhs_node == rhs_node && lhs_node_count > 0 && rhs_node_count > 0 {
                    lhs_node.set_change_deep(Unchanged);
                    rhs_node.set_change_deep(Unchanged);

                    decrement(lhs_node, rhs_counts);
                    decrement(rhs_node, lhs_counts);
                    lhs_i += 1;
                    rhs_i += 1;
                    continue;
                }

                // Do we have remaining instances of the LHS node on
                // the RHS? If so, this is a move.
                if try_decrement(lhs_node, rhs_counts) {
                    lhs_node.set_change_deep(Moved);
                    lhs_i += 1;
                    continue;
                }

                // Do we have remaining instances of the RHS node on
                // the LHS? If so, this is a move.
                if try_decrement(rhs_node, lhs_counts) {
                    rhs_node.set_change_deep(Moved);
                    rhs_i += 1;
                    continue;
                }

                // Not equal, and neither is present on the opposite
                // side. Atoms are novel, but check lists for moved
                // subtrees.
                match (lhs_node, rhs_node) {
                    (
                        List {
                            open_delimiter: lhs_start_content,
                            close_delimiter: lhs_end_content,
                            children: lhs_children,
                            change: lhs_change,
                            ..
                        },
                        List {
                            open_delimiter: rhs_start_content,
                            close_delimiter: rhs_end_content,
                            children: rhs_children,
                            change: rhs_change,
                            ..
                        },
                    ) => {
                        // Both sides are lists, so check the
                        // delimiters for the list node themselves, then
                        // recurse.

                        if lhs_start_content == rhs_start_content
                            && lhs_end_content == rhs_end_content
                        {
                            // We didn't see either the LHS or RHS
                            // node on the other side, but they have
                            // the same delimiters, so only the
                            // children are different.
                            lhs_change.set(Some(Unchanged));
                            rhs_change.set(Some(Unchanged));
                        } else {
                            // Children are different and the wrapping
                            // has changed (e.g. from {} to []).
                            lhs_change.set(Some(Removed));
                            rhs_change.set(Some(Added));
                        }
                        walk_nodes_ordered(
                            &lhs_children[..],
                            &rhs_children[..],
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        List {
                            children: lhs_children,
                            change: lhs_change,
                            ..
                        },
                        Atom { .. },
                    ) => {
                        lhs_change.set(Some(Removed));
                        walk_nodes_ordered(
                            &lhs_children[..],
                            std::slice::from_ref(rhs_node),
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        Atom { .. },
                        List {
                            children: rhs_children,
                            change: rhs_change,
                            ..
                        },
                    ) => {
                        rhs_change.set(Some(Added));
                        walk_nodes_ordered(
                            std::slice::from_ref(lhs_node),
                            &rhs_children[..],
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        Atom {
                            change: lhs_change, ..
                        },
                        Atom {
                            change: rhs_change, ..
                        },
                    ) => {
                        lhs_change.set(Some(Removed));
                        rhs_change.set(Some(Added));
                    }
                }
                lhs_i += 1;
                rhs_i += 1;
            }
            (Some(lhs_node), None) => {
                if try_decrement(lhs_node, rhs_counts) {
                    lhs_node.set_change_deep(Moved);
                } else {
                    lhs_node.set_change(Removed);
                    if let List { children, .. } = lhs_node {
                        walk_nodes_ordered(&children[..], &[], lhs_counts, rhs_counts);
                    }
                }
                lhs_i += 1;
            }
            (None, Some(rhs_node)) => {
                if try_decrement(rhs_node, lhs_counts) {
                    rhs_node.set_change_deep(Moved);
                } else {
                    rhs_node.set_change(Added);
                    if let List { children, .. } = rhs_node {
                        walk_nodes_ordered(&[], &children[..], lhs_counts, rhs_counts);
                    }
                }
                rhs_i += 1;
            }
            (None, None) => break,
        }
    }
}

fn build_subtrees<'a>(s: &'a Syntax<'a>, subtrees: &mut HashMap<&'a Syntax<'a>, i64>) {
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
                change: Cell::new(Some(Added)),
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
