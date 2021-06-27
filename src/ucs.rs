#![allow(dead_code)]

use std::hash::{Hash, Hasher};

use crate::tree_diff::Node;

#[derive(Debug)]
struct GraphNode<'a> {
    distance: u64,
    lhs_next: &'a Node<'a>,
    rhs_next: &'a Node<'a>,
    lhs_idx: Vec<usize>,
    rhs_idx: Vec<usize>,
}

fn next_graph_nodes<'a>(gn: &GraphNode<'a>) -> Vec<GraphNode<'a>> {
    let mut res = vec![];
    let new_lhs_next = next_node(gn.lhs_next, gn.lhs_idx.clone());
    let new_rhs_next = next_node(gn.rhs_next, gn.rhs_idx.clone());

    if gn.lhs_next == gn.rhs_next {
        // We can step over both sides, with a cost of 0.
        match (&new_lhs_next, &new_rhs_next) {
            (Some((new_lhs_next, new_lhs_idx)), Some((new_rhs_next, new_rhs_idx))) => {
                res.push(GraphNode {
                    distance: gn.distance,
                    lhs_next: new_lhs_next,
                    rhs_next: new_rhs_next,
                    lhs_idx: new_lhs_idx.to_vec(),
                    rhs_idx: new_rhs_idx.to_vec(),
                });
            }
            _ => {}
        }
    }

    // New atom on LHS.
    // TODO: step into list.
    if let Some((new_lhs_next, new_lhs_idx)) = &new_lhs_next {
        res.push(GraphNode {
            distance: gn.distance + 1,
            lhs_next: new_lhs_next,
            rhs_next: gn.rhs_next,
            lhs_idx: new_lhs_idx.to_vec(),
            rhs_idx: gn.rhs_idx.clone(),
        });
    }

    // New atom on RHS.
    // TODO: step into list.
    if let Some((new_rhs_next, new_rhs_idx)) = &new_rhs_next {
        res.push(GraphNode {
            distance: gn.distance + 1,
            lhs_next: gn.rhs_next,
            rhs_next: new_rhs_next,
            lhs_idx: gn.lhs_idx.clone(),
            rhs_idx: new_rhs_idx.to_vec(),
        });
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
        self.lhs_next == other.lhs_next && self.rhs_next == other.rhs_next
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
