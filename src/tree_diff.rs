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
    List {
        id: usize,
        change: ChangeKind,
        start_content: String,
        end_content: String,
        children: Vec<Syntax>,
    },
    Atom {
        id: usize,
        change: ChangeKind,
        content: String,
    },
}

impl Syntax {
    fn set_change(&mut self, ck: ChangeKind) {
        match self {
            List { ref mut change, .. } => {
                *change = ck;
            }
            Atom { ref mut change, .. } => {
                *change = ck;
            }
        }
    }

    fn set_change_deep(&mut self, ck: ChangeKind) {
        self.set_change(ck);
        if let List {
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
                List {
                    start_content: lhs_start_content,
                    end_content: lhs_end_content,
                    children: lhs_children,
                    ..
                },
                List {
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
            List {
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

    walk_nodes_ordered(lhs, rhs, &mut lhs_subtrees, &mut rhs_subtrees);
}

/// Decrement the count of `node` from `counts`, along with all its children.
fn decrement(node: &Syntax, counts: &mut HashMap<Syntax, i64>) {
    let count = if let Some(count) = counts.get(node) {
        *count
    } else {
        panic!("Called decrement on a node that isn't in counts")
    };

    assert!(count > 0);
    counts.insert(node.clone(), count - 1);
    match node {
        List { children, .. } => {
            for child in children {
                decrement(child, counts);
            }
        }
        Atom { .. } => {}
    }
}

// Greedy tree differ.
fn walk_nodes_ordered(
    lhs: &mut [Syntax],
    rhs: &mut [Syntax],
    lhs_counts: &mut HashMap<Syntax, i64>,
    rhs_counts: &mut HashMap<Syntax, i64>,
) {
    let mut lhs_i = 0;
    let mut rhs_i = 0;
    loop {
        match (lhs.get_mut(lhs_i), rhs.get_mut(rhs_i)) {
            (Some(ref mut lhs_node), Some(ref mut rhs_node)) => {
                let lhs_count = *lhs_counts.get(lhs_node).unwrap_or(&0);
                let rhs_count = *rhs_counts.get(lhs_node).unwrap_or(&0);

                // If they're equal, nothing to do.
                if lhs_node == rhs_node && lhs_count > 0 && rhs_count > 0 {
                    lhs_node.set_change_deep(Unchanged);
                    rhs_node.set_change_deep(Unchanged);

                    decrement(lhs_node, lhs_counts);
                    decrement(rhs_node, rhs_counts);
                    lhs_i += 1;
                    rhs_i += 1;
                    continue;
                }

                // Not equal. Do we have more instances of the LHS
                // node? If so, we've removed some instances on the
                // RHS, so assume this is a removal.
                if lhs_count > rhs_count && rhs_count > 0 {
                    lhs_node.set_change_deep(Removed);
                    decrement(lhs_node, lhs_counts);
                    lhs_i += 1;
                    continue;
                }

                // Do we have more instances of the RHS
                // node? If so, we've added some instances on the
                // RHS, so assume this is an addition.
                let lhs_count = *lhs_counts.get(rhs_node).unwrap_or(&0);
                let rhs_count = *rhs_counts.get(rhs_node).unwrap_or(&0);
                if rhs_count > lhs_count && lhs_count > 0 {
                    rhs_node.set_change_deep(Added);
                    decrement(rhs_node, rhs_counts);
                    rhs_i += 1;
                    continue;
                }

                // Same number: reordered nodes, or both nodes are
                // novel to a single side.
                let mut lhs_node = lhs_node;
                let mut rhs_node = rhs_node;
                match (&mut lhs_node, &mut rhs_node) {
                    (
                        List {
                            start_content: lhs_start_content,
                            end_content: lhs_end_content,
                            children: lhs_children,
                            change: lhs_change,
                            ..
                        },
                        List {
                            start_content: rhs_start_content,
                            end_content: rhs_end_content,
                            children: rhs_children,
                            change: rhs_change,
                            ..
                        },
                    ) => {
                        // Both sides are lists, so check the
                        // delimiters for the list node themselves, then
                        // recurse.

                        if lhs_start_content == rhs_start_content
                            && lhs_end_content == rhs_end_content
                        {
                            // We didn't see either the LHS or RHS
                            // node on the other side, but they have
                            // the same start/end, so only the
                            // children are different.
                            *lhs_change = Unchanged;
                            *rhs_change = Unchanged;
                        } else {
                            // Children are different and the wrapping
                            // has changed (e.g. from {} to []).
                            *lhs_change = Removed;
                            *rhs_change = Added;
                        }
                        walk_nodes_ordered(
                            &mut lhs_children[..],
                            &mut rhs_children[..],
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        List {
                            children: lhs_children,
                            change: lhs_change,
                            ..
                        },
                        Atom { .. },
                    ) => {
                        *lhs_change = Removed;
                        walk_nodes_ordered(
                            &mut lhs_children[..],
                            std::slice::from_mut(*rhs_node),
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        Atom { .. },
                        List {
                            children: rhs_children,
                            change: rhs_change,
                            ..
                        },
                    ) => {
                        *rhs_change = Added;
                        walk_nodes_ordered(
                            std::slice::from_mut(*lhs_node),
                            &mut rhs_children[..],
                            lhs_counts,
                            rhs_counts,
                        );
                    }
                    (
                        Atom {
                            change: lhs_change, ..
                        },
                        Atom {
                            change: rhs_change, ..
                        },
                    ) => {
                        *lhs_change = Removed;
                        *rhs_change = Added;
                    }
                }
                lhs_i += 1;
                rhs_i += 1;
            }
            (Some(lhs_node), None) => {
                let rhs_count = *rhs_counts.get(lhs_node).unwrap_or(&0);
                if rhs_count > 0 {
                    lhs_node.set_change_deep(Moved);
                    decrement(lhs_node, rhs_counts);
                } else {
                    lhs_node.set_change_deep(Removed);
                }
                lhs_i += 1;
            }
            (None, Some(rhs_node)) => {
                let lhs_count = *lhs_counts.get(rhs_node).unwrap_or(&0);
                if lhs_count > 0 {
                    rhs_node.set_change_deep(Moved);
                    decrement(rhs_node, lhs_counts);
                } else {
                    rhs_node.set_change_deep(Added);
                }
                rhs_i += 1;
            }
            (None, None) => break,
        }
    }
}

fn build_subtrees(s: &Syntax, subtrees: &mut HashMap<Syntax, i64>) {
    let entry = subtrees.entry(s.clone()).or_insert(0);
    *entry += 1;
    match s {
        List { children, .. } => {
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

    fn new_atom(id: usize, content: &str) -> Syntax {
        Atom {
            id,
            content: content.into(),
            change: Unchanged,
        }
    }

    fn new_list(
        id: usize,
        start_content: &str,
        end_content: &str,
        children: Vec<Syntax>,
    ) -> Syntax {
        List {
            id,
            change: Unchanged,
            start_content: start_content.into(),
            end_content: end_content.into(),
            children,
        }
    }

    fn assert_syntaxes(expected: &[Syntax], actual: &[Syntax]) {
        if expected.len() != actual.len() {
            dbg!(expected, actual);
            assert!(false);
        } else {
            for (lhs_child, rhs_child) in expected.iter().zip(actual.iter()) {
                assert_syntax(lhs_child, rhs_child);
            }
        }
    }

    /// Compare all the fields in a Syntax value, not just
    /// those used in its Eq implementation.
    fn assert_syntax(expected: &Syntax, actual: &Syntax) {
        let mut matches = true;
        match (expected, actual) {
            (
                List {
                    id: lhs_id,
                    start_content: lhs_start_content,
                    end_content: lhs_end_content,
                    children: lhs_children,
                    change: lhs_change,
                },
                List {
                    id: rhs_id,
                    start_content: rhs_start_content,
                    end_content: rhs_end_content,
                    children: rhs_children,
                    change: rhs_change,
                },
            ) => {
                assert_syntaxes(lhs_children, rhs_children);
                if lhs_id != rhs_id {
                    dbg!(lhs_id, rhs_id);
                    matches = false;
                }
                if lhs_start_content != rhs_start_content {
                    dbg!(lhs_start_content, rhs_start_content);
                    matches = false;
                }
                if lhs_end_content != rhs_end_content {
                    dbg!(lhs_end_content, rhs_end_content);
                    matches = false;
                }
                if lhs_change != rhs_change {
                    dbg!(lhs_change, rhs_change);
                    matches = false;
                }
            }
            (
                Atom {
                    id: lhs_id,
                    content: lhs_content,
                    change: lhs_change,
                },
                Atom {
                    id: rhs_id,
                    content: rhs_content,
                    change: rhs_change,
                },
            ) => {
                if lhs_id != rhs_id {
                    dbg!(lhs_id, rhs_id);
                    matches = false;
                }
                if lhs_content != rhs_content {
                    dbg!(lhs_content, rhs_content);
                    matches = false;
                }
                if lhs_change != rhs_change {
                    dbg!(lhs_change, rhs_change);
                    matches = false;
                }
            }
            _ => {
                matches = false;
            }
        }
        if !matches {
            dbg!(actual, expected);
            assert!(false);
        }
    }

    #[test]
    fn test_atom_equality_content_only() {
        assert_eq!(
            Atom {
                content: "foo".into(),
                id: 1,
                change: Added,
            },
            Atom {
                content: "foo".into(),
                id: 2,
                change: Moved,
            }
        );
    }

    #[test]
    fn test_add_duplicate_node() {
        let mut lhs = vec![new_atom(0, "a")];
        let mut rhs = vec![new_atom(1, "a"), new_atom(2, "a")];

        set_changed(&mut lhs, &mut rhs);

        let expected_rhs = vec![
            Atom {
                id: 1,
                change: Unchanged,
                content: "a".into(),
            },
            Atom {
                id: 2,
                change: Added,
                content: "a".into(),
            },
        ];
        assert_syntaxes(&expected_rhs, &rhs);
    }
    #[test]
    fn test_add_subtree() {
        let mut lhs = vec![new_list(0, "[", "]", vec![new_atom(1, "a")])];
        let mut rhs = vec![new_list(
            2,
            "[",
            "]",
            vec![new_atom(3, "a"), new_atom(4, "a")],
        )];

        set_changed(&mut lhs, &mut rhs);

        let expected_rhs = vec![List {
            id: 2,
            change: Unchanged,
            start_content: "[".into(),
            end_content: "]".into(),
            children: vec![
                Atom {
                    id: 3,
                    change: Unchanged,
                    content: "a".into(),
                },
                Atom {
                    id: 4,
                    change: Added,
                    content: "a".into(),
                },
            ],
        }];
        assert_syntaxes(&expected_rhs, &rhs);
    }

    /// Moving a subtree should consume its children, so further uses
    /// of children of that subtree is not a move.
    ///
    /// [], [1] -> [[1]], 1
    ///
    /// In this example, the second instance of 1 is an addition.
    #[test]
    fn test_add_subsubtree() {
        let mut lhs = vec![
            new_list(0, "[", "]", vec![]),
            new_list(1, "[", "]", vec![new_atom(2, "1")]),
        ];

        let mut rhs = vec![
            new_list(3, "[", "]", vec![new_list(4, "[", "]", vec![new_atom(5, "1")])]),
            new_atom(6, "1"),
        ];

        set_changed(&mut lhs, &mut rhs);

        let expected_rhs = vec![
            List {
                id: 3,
                start_content: "[".into(),
                end_content: "]".into(),
                change: Unchanged,
                children: vec![List {
                    id: 4,
                    change: Moved,
                    start_content: "[".into(),
                    end_content: "]".into(),
                    children: vec![Atom {
                        id: 5,
                        change: Moved,
                        content: "1".into(),
                    }],
                }],
            },
            Atom {
                id: 6,
                change: Added,
                content: "1".into(),
            },
        ];
        assert_syntaxes(&expected_rhs, &rhs);
    }
}
