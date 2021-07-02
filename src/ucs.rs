#![allow(dead_code)]

use std::cmp::Ordering;
use std::collections::HashSet;
use std::collections::{BinaryHeap, HashMap};
use std::hash::{Hash, Hasher};

use crate::tree_diff::Node;
use Edge::*;

#[derive(Debug, Eq, Clone)]
struct GraphNode<'a> {
    distance: i64,
    action: Edge,
    lhs_next: Option<&'a Node<'a>>,
    rhs_next: Option<&'a Node<'a>>,
}

impl<'a> GraphNode<'a> {
    fn new(lhs: &'a Node<'a>, rhs: &'a Node<'a>) -> Self {
        Self {
            distance: 0,
            action: Edge::StartNode,
            lhs_next: Some(lhs),
            rhs_next: Some(rhs),
        }
    }

    fn is_end(&self) -> bool {
        self.lhs_next.is_none() && self.rhs_next.is_none()
    }
}

// Rust requires that PartialEq, PartialOrd and Ord agree.
// https://doc.rust-lang.org/std/cmp/trait.Ord.html
//
// For GraphNode, we want to compare by distance in a priority queue,
// but equality should only consider LHS/RHS node when deciding if
// we've visited a node. We define separate wrappers for these two use
// cases.
#[derive(Debug, Eq)]
struct OrderedGraphNode<'a> {
    gn: GraphNode<'a>,
}

impl<'a> PartialOrd for OrderedGraphNode<'a> {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

impl<'a> Ord for OrderedGraphNode<'a> {
    fn cmp(&self, other: &Self) -> Ordering {
        self.gn.distance.cmp(&other.gn.distance)
    }
}

impl<'a> PartialEq for OrderedGraphNode<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.gn.distance == other.gn.distance
    }
}

// A GraphNode that only considers the underlying Nodes for equality,
// ignoring distance.
#[derive(Debug)]
struct EqualityGraphNode<'a> {
    gn: GraphNode<'a>,
}

impl<'a> PartialEq for EqualityGraphNode<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.gn.action == other.gn.action
            && self.gn.lhs_next == other.gn.lhs_next
            && self.gn.rhs_next == other.gn.rhs_next
    }
}
impl<'a> Eq for EqualityGraphNode<'a> {}

impl<'a> Hash for EqualityGraphNode<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.gn.action.hash(state);
        self.gn.lhs_next.hash(state);
        self.gn.rhs_next.hash(state);
    }
}

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

fn find_route<'a>(start: GraphNode<'a>) -> Vec<GraphNode<'a>> {
    let mut heap = BinaryHeap::new();
    heap.push(OrderedGraphNode { gn: start.clone() });

    let mut visited: HashSet<EqualityGraphNode> = HashSet::new();
    let mut predecessors: HashMap<EqualityGraphNode, GraphNode> = HashMap::new();

    let end;
    loop {
        match heap.pop() {
            Some(ogn) => {
                if ogn.gn.is_end() {
                    end = ogn.gn;
                    break;
                }

                let egn = EqualityGraphNode { gn: ogn.gn };
                if visited.contains(&egn) {
                    continue;
                }

                let gn = egn.gn;
                for new_gn in next_graph_nodes(&gn) {
                    predecessors.insert(EqualityGraphNode { gn: new_gn.clone() }, gn.clone());
                    heap.push(OrderedGraphNode { gn: new_gn });
                }

                visited.insert(EqualityGraphNode { gn });
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    let mut current = end;
    let mut res = vec![];
    loop {
        res.push(current.clone());

        match predecessors.remove(&EqualityGraphNode {
            gn: current.clone(),
        }) {
            Some(node) => {
                current = node;
            }
            None => break,
        }
    }

    res.reverse();
    res
}

fn next_graph_nodes<'a>(gn: &GraphNode<'a>) -> Vec<GraphNode<'a>> {
    let mut res = vec![];

    match (&gn.lhs_next, &gn.rhs_next) {
        (Some(lhs_next_node), Some(rhs_next_node)) => {
            if lhs_next_node == rhs_next_node {
                // Both nodes are equal, the happy case.
                let action = UnchangedNode;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: lhs_next_node.get_next(),
                    rhs_next: rhs_next_node.get_next(),
                });
            }

            match (lhs_next_node, rhs_next_node) {
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
                        let action = UnchangedDelimiter;
                        res.push(GraphNode {
                            action,
                            distance: gn.distance + action.cost(),
                            lhs_next: lhs_children.first().map(|n| *n),
                            rhs_next: rhs_children.first().map(|n| *n),
                        });
                    }
                }
                _ => {}
            }
        }
        _ => {}
    }

    if let Some(lhs_next_node) = &gn.lhs_next {
        match lhs_next_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let action = NovelAtomLHS;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: lhs_next_node.get_next(),
                    rhs_next: gn.rhs_next.clone(),
                });
            }
            // Step into this partially/fully novel list.
            Node::List { children, .. } => {
                let action = NovelDelimiterLHS;
                if children.len() == 0 {
                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: lhs_next_node.get_next(),
                        rhs_next: gn.rhs_next.clone(),
                    });
                } else {
                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: Some(children[0]),
                        rhs_next: gn.rhs_next.clone(),
                    });
                }
            }
        }
    }

    if let Some(rhs_next_node) = &gn.rhs_next {
        match rhs_next_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let action = NovelAtomRHS;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: gn.lhs_next.clone(),
                    rhs_next: rhs_next_node.get_next(),
                });
            }
            // Step into this partially/fully novel list.
            Node::List { children, .. } => {
                // TODO: handle unchanged delimiter.
                let action = NovelDelimiterRHS;
                if children.len() == 0 {
                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: gn.lhs_next.clone(),
                        rhs_next: rhs_next_node.get_next(),
                    });
                } else {
                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: gn.lhs_next.clone(),
                        rhs_next: Some(children[0]),
                    });
                }
            }
        }
    }

    res
}

impl<'a> PartialEq for GraphNode<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.lhs_next == other.lhs_next && self.rhs_next == other.rhs_next
    }
}

impl<'a> Hash for GraphNode<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        // Deliberately ignore distance: we want to find equal nodes
        // regardless of the distance of different paths to them.
        self.lhs_next.hash(state);
        self.rhs_next.hash(state);
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

        let start = GraphNode::new(lhs, rhs);
        let route = find_route(start);

        let actions = route.iter().map(|gn| gn.action).collect_vec();
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

        let start = GraphNode::new(lhs, rhs);
        let route = find_route(start);

        let actions = route.iter().map(|gn| gn.action).collect_vec();
        assert_eq!(actions, vec![StartNode, UnchangedDelimiter, NovelAtomLHS]);
    }
}
