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

    #[cfg(test)]
    fn change(&self) -> ChangeKind {
        match self {
            Items { change, .. } => *change,
            Atom { change, .. } => *change,
        }
    }

    fn set_change_deep(&mut self, ck: ChangeKind) {
        self.set_change(ck);
        if let Items {
            ref mut children, ..
        } = self
        {
            for child in children {
                child.set_change_deep(ck);
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

    walk_nodes(lhs, &mut rhs_subtrees, Removed);
    walk_nodes(rhs, &mut lhs_subtrees, Added);
}

// Greedy tree differ.
fn walk_nodes_ordered(
    lhs: &mut [Syntax],
    rhs: &mut [Syntax],
    lhs_counts: &mut HashMap<Syntax, i64>,
    rhs_counts: &mut HashMap<Syntax, i64>,
) {
    // TODO: A B C -> A X B C
    let mut lhs_i = 0;
    let mut rhs_i = 0;
    loop {
        match (lhs.get_mut(lhs_i), rhs.get_mut(rhs_i)) {
            (Some(ref mut lhs_node), Some(ref mut rhs_node)) => {
                // If they're equal, nothing to do.
                if lhs_node == rhs_node {
                    lhs_node.set_change_deep(Unchanged);
                    rhs_node.set_change_deep(Unchanged);
                    lhs_i += 1;
                    rhs_i += 1;
                    continue;
                }

                // Not equal. Do we have more instances of the LHS
                // node? If so, we've removed some instances on the
                // RHS, so assume this is a removal.
                let lhs_count = *lhs_counts.get(lhs_node).unwrap_or(&0);
                let rhs_count = *rhs_counts.get(lhs_node).unwrap_or(&0);
                if lhs_count > rhs_count {
                    lhs_node.set_change_deep(Removed);
                    lhs_counts.insert((*lhs_node).clone(), lhs_count - 1);
                    lhs_i += 1;
                    continue;
                }

                // Do we have more instances of the RHS
                // node? If so, we've added some instances on the
                // RHS, so assume this is an addition.
                let lhs_count = *lhs_counts.get(rhs_node).unwrap_or(&0);
                let rhs_count = *rhs_counts.get(rhs_node).unwrap_or(&0);
                if rhs_count > lhs_count {
                    rhs_node.set_change_deep(Added);
                    rhs_counts.insert((*rhs_node).clone(), rhs_count - 1);
                    rhs_i += 1;
                    continue;
                }

                // Same number: reordered nodes, or both nodes are
                // novel to a single side.
                match (&lhs_node, &rhs_node) {
                    (Items { .. }, Items { .. }) => {
                        todo!();
                    }
                    (Items { .. }, Atom { .. }) => {
                        todo!();
                    }
                    (Atom { .. }, Items { .. }) => {
                        todo!();
                    }
                    (Atom { .. }, Atom { .. }) => {
                        lhs_node.set_change_deep(Removed);
                        rhs_node.set_change_deep(Added);
                        lhs_i += 1;
                        rhs_i += 1;
                        continue;
                    }
                }
            }
            (Some(lhs_node), None) => {
                let rhs_count = *rhs_counts.get(lhs_node).unwrap_or(&0);
                if rhs_count > 0 {
                    lhs_node.set_change_deep(Moved);
                    rhs_counts.insert(lhs_node.clone(), rhs_count - 1);
                } else {
                    lhs_node.set_change_deep(Removed);
                }
                lhs_i += 1;
            }
            (None, Some(rhs_node)) => {
                let lhs_count = *lhs_counts.get(rhs_node).unwrap_or(&0);
                if lhs_count > 0 {
                    rhs_node.set_change_deep(Moved);
                    lhs_counts.insert(rhs_node.clone(), lhs_count - 1);
                } else {
                    rhs_node.set_change_deep(Added);
                }
                rhs_i += 1;
            }
            (None, None) => break,
        }
    }
}

/// For every node in `nodes`, if it's in `subtrees`, mark it as
/// Unchanged and remove it from `subtrees`.
///
/// If it's not in `subtrees`, set the root changekind to `ck` and recurse.
fn walk_nodes(nodes: &mut [Syntax], subtrees: &mut HashMap<Syntax, i64>, ck: ChangeKind) {
    for s in nodes {
        // TODO: handle moves
        // TODO: this is greedy, so going `A B C D` to `D A B C D` is
        // considered `D:move A B C D:add` which is not the minimal
        // diff.
        let count = subtrees.get_mut(s);
        match count {
            Some(c) if *c > 0 => {
                s.set_change_deep(Unchanged);
                *c -= 1;
            }
            _ => {
                s.set_change(ck);
                match s {
                    Items { children, .. } => {
                        walk_nodes(children, subtrees, ck);
                    }
                    Atom { .. } => {}
                }
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
    #[test]
    fn test_add_subtree() {
        let mut lhs = vec![Items {
            change: Unchanged,
            start_content: "[".into(),
            end_content: "[".into(),
            children: vec![Atom {
                change: Unchanged,
                content: "a".into(),
            }],
        }];

        let mut rhs = vec![Items {
            change: Unchanged,
            start_content: "[".into(),
            end_content: "[".into(),
            children: vec![
                Atom {
                    change: Unchanged,
                    content: "a".into(),
                },
                Atom {
                    change: Unchanged,
                    content: "a".into(),
                },
            ],
        }];

        set_changed(&mut lhs, &mut rhs);

        match &rhs[0] {
            Items { children, .. } => {
                assert_eq!(children[0].change(), Unchanged)
            }
            Atom { .. } => unreachable!(),
        };
    }
}
