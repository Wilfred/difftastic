#![allow(dead_code)]

use std::hash::{Hash, Hasher};

use crate::tree_diff::Node;
use Action::*;

#[derive(Debug)]
struct GraphNode<'a> {
    distance: u64,
    action: Action,
    lhs_next: Option<(&'a Node<'a>, Vec<usize>)>,
    rhs_next: Option<(&'a Node<'a>, Vec<usize>)>,
}

#[derive(Debug, Copy, Clone)]
enum Action {
    UnchangedNode,
    UnchangedDelimiter,
    NovelAtomLHS,
    NovelAtomRHS,
    NovelDelimiterLHS,
    NovelDelimiterRHS,
}

impl Action {
    fn cost(&self) -> u64 {
        match self {
            // Matching nodes is always best.
            UnchangedNode => 0,
            // Matcing an outer delimiter is good.
            UnchangedDelimiter => 1,
            // Otherwise, we've added/removed a node.
            NovelAtomLHS => 2,
            NovelAtomRHS => 2,
            NovelDelimiterLHS => 2,
            NovelDelimiterRHS => 2,
        }
    }
}

fn next_graph_nodes<'a>(gn: &GraphNode<'a>) -> Vec<GraphNode<'a>> {
    let mut res = vec![];

    match (&gn.lhs_next, &gn.rhs_next) {
        (Some((lhs_next_node, lhs_next_idx)), Some((rhs_next_node, rhs_next_idx))) => {
            if lhs_next_node == rhs_next_node {
                // Both nodes are equal, the happy case.
                let action = UnchangedNode;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: next_node(lhs_next_node, lhs_next_idx.clone()),
                    rhs_next: next_node(rhs_next_node, rhs_next_idx.clone()),
                });
            }
        }
        _ => {}
    }

    if let Some((lhs_next_node, lhs_next_idx)) = &gn.lhs_next {
        match lhs_next_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let action = NovelAtomLHS;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: next_node(lhs_next_node, lhs_next_idx.clone()),
                    rhs_next: gn.rhs_next.clone(),
                });
            }
            // Step into this partially/fully novel list.
            Node::List { children, .. } => {
                // TODO: handle unchanged delimiter.
                let action = NovelDelimiterLHS;
                if children.len() == 0 {
                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: next_node(lhs_next_node, lhs_next_idx.clone()),
                        rhs_next: gn.rhs_next.clone(),
                    });
                } else {
                    let mut new_lhs_idx = lhs_next_idx.clone();
                    new_lhs_idx.push(0);

                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: Some((children[0], new_lhs_idx)),
                        rhs_next: gn.rhs_next.clone(),
                    });
                }
            }
        }
    }

    if let Some((rhs_next_node, rhs_next_idx)) = &gn.rhs_next {
        match rhs_next_node {
            // Step over this novel atom.
            Node::Atom { .. } => {
                let action = NovelAtomRHS;
                res.push(GraphNode {
                    action,
                    distance: gn.distance + action.cost(),
                    lhs_next: gn.lhs_next.clone(),
                    rhs_next: next_node(rhs_next_node, rhs_next_idx.clone()),
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
                        rhs_next: next_node(rhs_next_node, rhs_next_idx.clone()),
                    });
                } else {
                    let mut new_rhs_idx = rhs_next_idx.clone();
                    new_rhs_idx.push(0);

                    res.push(GraphNode {
                        action,
                        distance: gn.distance + action.cost(),
                        lhs_next: gn.lhs_next.clone(),
                        rhs_next: Some((children[0], new_rhs_idx)),
                    });
                }
            }
        }
    }


    res
}

fn next_node<'a>(
    current: &'a Node<'a>,
    mut current_idx: Vec<usize>,
) -> Option<(&'a Node<'a>, Vec<usize>)> {
    match current.get_parent() {
        Some(parent) => {
            let idx_in_parent = current_idx.last().unwrap();
            match parent {
                Node::List {
                    children: siblings, ..
                } => match siblings.get(idx_in_parent + 1) {
                    Some(node) => {
                        let new_idx = current_idx.last_mut().unwrap();
                        *new_idx += 1;
                        Some((node, current_idx))
                    }
                    None => {
                        current_idx.pop();
                        next_node(parent, current_idx)
                    }
                },
                Node::Atom { .. } => unreachable!(),
            }
        }
        None => None,
    }
}

impl<'a> PartialEq for GraphNode<'a> {
    fn eq(&self, other: &Self) -> bool {
        let lhs_node = self.lhs_next.as_ref().map(|(n, _)| n);
        let rhs_node = self.rhs_next.as_ref().map(|(n, _)| n);

        let other_lhs_node = other.lhs_next.as_ref().map(|(n, _)| n);
        let other_rhs_node = other.rhs_next.as_ref().map(|(n, _)| n);

        lhs_node == other_lhs_node && rhs_node == other_rhs_node
    }
}
impl<'a> Eq for GraphNode<'a> {}

impl<'a> Hash for GraphNode<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        // Deliberately ignore distance: we want to find equal nodes
        // regardless of the distance of different paths to them.
        self.lhs_next.hash(state);
        self.rhs_next.hash(state);

        // next_idx fields are unnecessary: they're unique to the
        // current node fields and just used for convenience of
        // traversing.
    }
}
