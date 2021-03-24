use std::collections::HashSet;
use std::hash::{Hash, Hasher};

use ChangeKind::*;

#[derive(PartialEq, Eq, Copy, Clone)]
pub enum ChangeKind {
    Unchanged,
    Added,
    Removed,
}

// TODO: equality should ignore position.
#[derive(PartialEq, Eq, Clone)]
pub enum Tree {
    Node {
        change: ChangeKind,
        start: usize,
        end: usize,
        children: Vec<Tree>,
        // TODO: open/close text, so we consider changing delimiter to
        // be a change.
    },
    Leaf {
        change: ChangeKind,
        start: usize,
        end: usize,
        content: String,
    },
}

impl Hash for Tree {
    fn hash<H: Hasher>(&self, state: &mut H) {
        match self {
            Tree::Node { children, .. } => {
                for child in children {
                    child.hash(state);
                }
            }
            Tree::Leaf { content, .. } => {
                content.hash(state);
            }
        }
    }
}

fn set_change_kind(lhs: &mut Tree, rhs_subtrees: &mut HashSet<Tree>) {
    // TODO: model changing (A B) to (B A).
    if rhs_subtrees.remove(lhs) {
        // This whole tree was already in the RHS.
        match lhs {
            Tree::Node { ref mut change, .. } => {
                *change = Unchanged;
            }
            Tree::Leaf { ref mut change, .. } => {
                *change = Unchanged;
            }
        }
    } else {
        // This subtree does not exist in RHS.
        match lhs {
            Tree::Node { ref mut change, ref mut children, .. } => {
                *change = Removed;
                for child in children {
                    set_change_kind(child, rhs_subtrees);
                }
            }
            Tree::Leaf { ref mut change, .. } => {
                *change = Removed;
            }
        }
        
    }
}

fn compute_subtrees(tree: &Tree, found: &mut HashSet<Tree>) {
    match tree {
        Tree::Node { children, .. } => {
            found.insert(tree.clone());
            for child in children {
                compute_subtrees(tree, found);
            }
        }
        Tree::Leaf { .. } => {
            found.insert(tree.clone());
        }
    }
}
