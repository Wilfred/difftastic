#![allow(dead_code)]

use std::cmp::Ordering;
use std::collections::HashSet;
use std::collections::{BinaryHeap, HashMap};

use crate::tree_diff::{ChangeKind, Node};
use typed_arena::Arena;
use Edge::*;

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
struct Vertex<'a> {
    lhs_node: Option<&'a Node<'a>>,
    rhs_node: Option<&'a Node<'a>>,
}

impl<'a> Vertex<'a> {
    fn new(lhs: &'a Node<'a>, rhs: &'a Node<'a>) -> Self {
        Self {
            lhs_node: Some(lhs),
            rhs_node: Some(rhs),
        }
    }

    fn is_end(&self) -> bool {
        self.lhs_node.is_none() && self.rhs_node.is_none()
    }
}

// Rust requires that PartialEq, PartialOrd and Ord agree.
// https://doc.rust-lang.org/std/cmp/trait.Ord.html
//
// For `Vertex`, we want to compare by distance in a priority queue, but
// equality should only consider LHS/RHS node when deciding if we've
// visited a vertex. We define separate wrappers for these two use
// cases.
#[derive(Debug)]
struct OrdVertex<'a> {
    distance: i64,
    v: Vertex<'a>,
}

impl<'a> PartialOrd for OrdVertex<'a> {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

impl<'a> Ord for OrdVertex<'a> {
    fn cmp(&self, other: &Self) -> Ordering {
        self.distance.cmp(&other.distance)
    }
}

impl<'a> PartialEq for OrdVertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.distance == other.distance
    }
}
impl<'a> Eq for OrdVertex<'a> {}

#[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
enum Edge {
    StartNode,
    UnchangedNode,
    UnchangedDelimiter,
    NovelAtomLHS,
    NovelAtomRHS,
    NovelDelimiterLHS,
    NovelDelimiterRHS,
}

impl Edge {
    fn cost(&self) -> i64 {
        match self {
            StartNode => 0,
            // Matching nodes is always best.
            UnchangedNode => 0,
            // Matcing an outer delimiter is good.
            UnchangedDelimiter => -1,
            // Otherwise, we've added/removed a node.
            NovelAtomLHS => -2,
            NovelAtomRHS => -2,
            NovelDelimiterLHS => -2,
            NovelDelimiterRHS => -2,
        }
    }
}

fn shortest_path<'a>(start: Vertex<'a>) -> Vec<(Edge, Vertex<'a>)> {
    let mut heap = BinaryHeap::new();
    heap.push(OrdVertex {
        distance: 0,
        v: start.clone(),
    });

    let mut visited: HashSet<Vertex> = HashSet::new();
    let mut predecessors: HashMap<Vertex, (Edge, Vertex)> = HashMap::new();

    loop {
        match heap.pop() {
            Some(OrdVertex { distance, v }) => {
                if v.is_end() {
                    break;
                }

                if visited.contains(&v) {
                    continue;
                }
                for (edge, new_v) in neighbours(&v) {
                    if !predecessors.contains_key(&new_v) {
                        predecessors.insert(new_v.clone(), (edge, v.clone()));
                        heap.push(OrdVertex {
                            distance: distance + edge.cost(),
                            v: new_v,
                        });
                    }
                }

                visited.insert(v);
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    let mut current = Vertex {
        lhs_node: None,
        rhs_node: None,
    };
    let mut res: Vec<(Edge, Vertex)> = vec![];
    loop {
        match predecessors.remove(&current) {
            Some((edge, node)) => {
                res.push((edge, node.clone()));
                current = node;
            }
            None => {
                res.push((StartNode, current.clone()));
                break;
            }
        }
    }

    res.reverse();
    res
}

fn neighbours<'a>(v: &Vertex<'a>) -> Vec<(Edge, Vertex<'a>)> {
    let mut res = vec![];

    match (&v.lhs_node, &v.rhs_node) {
        (Some(lhs_node), Some(rhs_node)) => {
            if lhs_node == rhs_node {
                // Both nodes are equal, the happy case.
                let edge = UnchangedNode;
                res.push((
                    edge,
                    Vertex {
                        lhs_node: lhs_node.get_next(),
                        rhs_node: rhs_node.get_next(),
                    },
                ));
            }

            match (lhs_node, rhs_node) {
                (
                    Node::List {
                        open_delimiter: lhs_open_delimiter,
                        close_delimiter: lhs_close_delimiter,
                        children: lhs_children,
                        ..
                    },
                    Node::List {
                        open_delimiter: rhs_open_delimiter,
                        close_delimiter: rhs_close_delimiter,
                        children: rhs_children,
                        ..
                    },
                ) => {
                    if lhs_open_delimiter == rhs_open_delimiter
                        && lhs_close_delimiter == rhs_close_delimiter
                    {
                        let edge = UnchangedDelimiter;
                        res.push((
                            edge,
                            Vertex {
                                lhs_node: lhs_children.first().map(|n| *n),
                                rhs_node: rhs_children.first().map(|n| *n),
                            },
                        ));
                    }
                }
                _ => {}
            }
        }
        _ => {}
    }

    if let Some(lhs_node) = &v.lhs_node {
        match lhs_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let edge = NovelAtomLHS;
                res.push((
                    edge,
                    Vertex {
                        lhs_node: lhs_node.get_next(),
                        rhs_node: v.rhs_node.clone(),
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Node::List { children, .. } => {
                let edge = NovelDelimiterLHS;
                let lhs_next = if children.is_empty() {
                    lhs_node.get_next()
                } else {
                    Some(children[0])
                };

                res.push((
                    edge,
                    Vertex {
                        lhs_node: lhs_next,
                        rhs_node: v.rhs_node.clone(),
                    },
                ));
            }
        }
    }

    if let Some(rhs_node) = &v.rhs_node {
        match rhs_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let edge = NovelAtomRHS;
                res.push((
                    edge,
                    Vertex {
                        lhs_node: v.lhs_node.clone(),
                        rhs_node: rhs_node.get_next(),
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Node::List { children, .. } => {
                let edge = NovelDelimiterRHS;
                let rhs_next = if children.is_empty() {
                    rhs_node.get_next()
                } else {
                    Some(children[0])
                };

                res.push((
                    edge,
                    Vertex {
                        lhs_node: v.lhs_node.clone(),
                        rhs_node: rhs_next,
                    },
                ));
            }
        }
    }

    res
}

pub fn toplevel_list<'a>(
    arena: &'a Arena<Node<'a>>,
    lhs_children: Vec<&'a Node<'a>>,
    rhs_children: Vec<&'a Node<'a>>,
) -> (&'a Node<'a>, &'a Node<'a>) {
    let lhs = Node::new_list(arena, "".into(), vec![], lhs_children, "".into(), vec![]);
    let rhs = Node::new_list(arena, "".into(), vec![], rhs_children, "".into(), vec![]);
    (lhs, rhs)
}

pub fn mark_node<'a>(lhs: &'a Node<'a>, rhs: &'a Node<'a>) {
    let start = Vertex::new(lhs, rhs);
    let route = shortest_path(start);
    mark_route(&route);
}

fn mark_route<'a>(route: &[(Edge, Vertex<'a>)]) {
    for (e, v) in route {
        match e {
            StartNode => {
                // No change on the root node.
                let lhs = v.lhs_node.unwrap();
                let rhs = v.rhs_node.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            UnchangedNode => {
                // No change on this node or its children.
                let lhs = v.lhs_node.unwrap();
                let rhs = v.rhs_node.unwrap();
                lhs.set_change_deep(ChangeKind::Unchanged(rhs));
                rhs.set_change_deep(ChangeKind::Unchanged(lhs));
            }
            UnchangedDelimiter => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_node.unwrap();
                let rhs = v.rhs_node.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            NovelAtomLHS | NovelDelimiterLHS => {
                let lhs = v.lhs_node.unwrap();
                lhs.set_change(ChangeKind::Novel);
            }
            NovelAtomRHS | NovelDelimiterRHS => {
                let rhs = v.rhs_node.unwrap();
                rhs.set_change(ChangeKind::Novel);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::positions::SingleLineSpan;
    use crate::tree_diff::Node::*;
    use crate::tree_diff::{set_next, AtomKind};

    use itertools::Itertools;
    use std::cell::Cell;
    use typed_arena::Arena;

    fn pos_helper() -> Vec<SingleLineSpan> {
        vec![SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 1,
        }]
    }

    #[test]
    fn identical_atoms() {
        let arena = Arena::new();

        let lhs = arena.alloc(Atom {
            next: Cell::new(None),
            position: pos_helper(),
            change: Cell::new(None),
            content: "foo".into(),
            kind: AtomKind::Other,
        });

        // Same as LHS.
        let rhs = arena.alloc(Atom {
            next: Cell::new(None),
            position: pos_helper(),
            change: Cell::new(None),
            content: "foo".into(),
            kind: AtomKind::Other,
        });

        let start = Vertex::new(lhs, rhs);
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(actions, vec![StartNode, UnchangedNode]);
    }

    #[test]
    fn extra_atom_lhs() {
        let arena = Arena::new();

        let lhs = Node::new_list(
            &arena,
            "[".into(),
            pos_helper(),
            vec![Node::new_atom(&arena, pos_helper(), "foo", AtomKind::Other)],
            "]".into(),
            pos_helper(),
        );
        set_next(lhs);

        let rhs = Node::new_list(
            &arena,
            "[".into(),
            pos_helper(),
            vec![],
            "]".into(),
            pos_helper(),
        );
        set_next(rhs);

        let start = Vertex::new(lhs, rhs);
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(actions, vec![StartNode, UnchangedDelimiter, NovelAtomLHS]);
    }
}
