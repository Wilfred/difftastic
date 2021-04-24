use std::collections::HashSet;
use std::hash::{Hash, Hasher};

use ChangeKind::*;
use Syntax::*;

#[derive(PartialEq, Eq, Copy, Clone, Debug)]
pub enum ChangeKind {
    Unchanged,
    Added,
    Removed,
    Moved,
}

#[derive(Debug)]
pub enum Syntax {
    Items {
        change: ChangeKind,
        start_content: String,
        end_content: String,
        children: Vec<Syntax>,
    },
    Atom {
        change: ChangeKind,
        content: String,
    },
}
impl PartialEq for Syntax {
    fn eq(&self, other: &Self) -> bool {
        match (&self, other) {
            (
                Atom {
                    content: lhs_content,
                    ..
                },
                Atom {
                    content: rhs_content,
                    ..
                },
            ) => lhs_content == rhs_content,
            (
                Items {
                    start_content: lhs_start_content,
                    end_content: lhs_end_content,
                    children: lhs_children,
                    ..
                },
                Items {
                    start_content: rhs_start_content,
                    end_content: rhs_end_content,
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

impl Hash for Syntax {
    fn hash<H: Hasher>(&self, state: &mut H) {
        match self {
            Items {
                start_content,
                end_content,
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

/// Extremely dumb top-level comparison of `lhs` and `rhs`.
pub fn set_changed(lhs: &mut [Syntax], rhs: &mut [Syntax]) {}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_atom_equality_ignores_changes() {
        assert_eq!(
            Atom {
                content: "foo".into(),
                change: Added,
            },
            Atom {
                content: "foo".into(),
                change: Moved,
            }
        );
    }
    #[test]
    fn test_set_syntax_change_kind() {
        let mut s = Items {
            change: Unchanged,
            children: vec![
                Atom {
                    content: "foo".into(),
                    change: Added,
            },
],
            start_content: "".into(),
            end_content: "".into(),
        };
        set_syntax_change_kind(&mut s, Removed);
    }
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

fn set_syntax_change_kind(s: &mut Syntax, ck: ChangeKind) {
    match s {
        Items {
            ref mut change,
            ref mut children,
            ..
        } => {
            *change = ck;
            for child in children {
                set_syntax_change_kind(child, ck);
            }
        }
        Atom { ref mut change, .. } => {
            *change = ck;
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
