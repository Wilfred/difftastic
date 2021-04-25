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

#[derive(Debug, Clone)]
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
impl Eq for Syntax {}

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
pub fn set_changed(lhs: &mut [Syntax], rhs: &mut [Syntax]) {
    let mut lhs_subtrees = HashSet::new();
    for s in lhs.iter() {
        walk_syntax_subtree(s, &mut lhs_subtrees);
    }

    let mut rhs_subtrees = HashSet::new();
    for s in rhs.iter() {
        walk_syntax_subtree(s, &mut rhs_subtrees);
    }

    for s in lhs {
        if rhs_subtrees.contains(s) {
            // TODO: handle duplication
            // TODO: handle moves
            set_syntax_change_kind(s, Unchanged);
        } else {
            set_syntax_change_kind(s, Removed);
        }
    }
    
    for s in rhs {
        if lhs_subtrees.contains(s) {
            set_syntax_change_kind(s, Unchanged);
        } else {
            set_syntax_change_kind(s, Added);
        }
    }
    
}

fn walk_syntax_subtree(s: &Syntax, subtrees: &mut HashSet<Syntax>) {
    subtrees.insert(s.clone());
    match s {
        Items { children, .. } => {
            for child in children {
                walk_syntax_subtree(child, subtrees);
            }
            
        }
        Atom { .. } => {}
    }
}

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
            children: vec![Atom {
                content: "foo".into(),
                change: Added,
            }],
            start_content: "".into(),
            end_content: "".into(),
        };
        set_syntax_change_kind(&mut s, Removed);
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
