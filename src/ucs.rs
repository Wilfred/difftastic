#![allow(dead_code)]

use std::hash::{Hash, Hasher};

use crate::tree_diff::Node;

#[derive(Debug)]
struct GraphNode<'a> {
    distance: u64,
    lhs_current: &'a Node<'a>,
    rhs_current: &'a Node<'a>,
    lhs_idx: usize,
    rhs_idx: usize,
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
        self.lhs_current == other.lhs_current && self.rhs_current == other.rhs_current
    }
}
impl<'a> Eq for GraphNode<'a> {}

impl<'a> Hash for GraphNode<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        // Deliberately ignore distance: we want to find equal nodes
        // regardless of the distance of different paths to them.
        self.lhs_current.hash(state);
        self.rhs_current.hash(state);

        // next_idx fields are unnecessary: they're unique to the
        // current node fields and just used for convenience of
        // traversing.
    }
}
