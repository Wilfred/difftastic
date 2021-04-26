use std::collections::HashMap;
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

impl Syntax {
    fn set_change(&mut self, ck: ChangeKind) {
        match self {
            Items { ref mut change, .. } => {
                *change = ck;
            }
            Atom { ref mut change, .. } => {
                *change = ck;
            }
        }
    }
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
    let mut lhs_subtrees = HashMap::new();
    for s in lhs.iter() {
        build_subtrees(s, &mut lhs_subtrees);
    }

    let mut rhs_subtrees = HashMap::new();
    for s in rhs.iter() {
        build_subtrees(s, &mut rhs_subtrees);
    }

    for s in lhs {
        // TODO: handle moves
        // TODO: handle moving up/down subtrees.
        let count = rhs_subtrees.get_mut(s);
        match count {
            Some(c) if *c > 0 => {
                set_syntax_change_kind(s, Unchanged);
                *c -= 1;
            }
            _ => {
                set_syntax_change_kind(s, Removed);
            }
        }
    }

    for s in rhs {
        let count = lhs_subtrees.get_mut(s);
        match count {
            Some(c) if *c > 0 => {
                set_syntax_change_kind(s, Unchanged);
                *c -= 1;
            }
            _ => {
                set_syntax_change_kind(s, Added);
            }
        }
    }
}

fn build_subtrees(s: &Syntax, subtrees: &mut HashMap<Syntax, i64>) {
    let entry = subtrees.entry(s.clone()).or_insert(0);
    *entry += 1;
    match s {
        Items { children, .. } => {
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

    #[test]
    fn test_add_duplicate_node() {
        let mut lhs = vec![Atom {
            change: Unchanged,
            content: "a".into(),
        }];
        let mut rhs = vec![
            Atom {
                change: Unchanged,
                content: "a".into(),
            },
            Atom {
                change: Unchanged,
                content: "a".into(),
            },
        ];

        set_changed(&mut lhs, &mut rhs);

        match rhs[0] {
            Atom { change, .. } => {
                assert_eq!(change, Unchanged);
            }
            Items { .. } => {
                assert!(false);
            }
        };
        match rhs[1] {
            Atom { change, .. } => {
                assert_eq!(change, Added);
            }
            Items { .. } => {
                assert!(false);
            }
        };
    }
}

fn set_syntax_change_kind(s: &mut Syntax, ck: ChangeKind) {
    s.set_change(ck);
    if let Items {
        ref mut children, ..
    } = s
    {
        for child in children {
            set_syntax_change_kind(child, ck);
        }
    }
}
