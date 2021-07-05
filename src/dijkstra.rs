use std::cmp::Ordering;
use std::collections::BinaryHeap;

use crate::syntax::{ChangeKind, Syntax};
use rustc_hash::{FxHashMap, FxHashSet};
use Edge::*;

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
struct Vertex<'a> {
    lhs_syntax: Option<&'a Syntax<'a>>,
    rhs_syntax: Option<&'a Syntax<'a>>,
}

impl<'a> Vertex<'a> {
    fn is_end(&self) -> bool {
        self.lhs_syntax.is_none() && self.rhs_syntax.is_none()
    }
}

// Rust requires that PartialEq, PartialOrd and Ord agree.
// https://doc.rust-lang.org/std/cmp/trait.Ord.html
//
// For `Vertex`, we want to compare by distance in a priority queue, but
// equality should only consider LHS/RHS node when deciding if we've
// visited a vertex. We define separate wrappers for these two use
// cases.
#[derive(Debug)]
struct OrdVertex<'a> {
    distance: i64,
    v: Vertex<'a>,
}

impl<'a> PartialOrd for OrdVertex<'a> {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

impl<'a> Ord for OrdVertex<'a> {
    fn cmp(&self, other: &Self) -> Ordering {
        self.distance.cmp(&other.distance)
    }
}

impl<'a> PartialEq for OrdVertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.distance == other.distance
    }
}
impl<'a> Eq for OrdVertex<'a> {}

#[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
enum Edge {
    StartNode,
    UnchangedNode,
    UnchangedDelimiter,
    NovelAtomLHS { same_line: bool },
    NovelAtomRHS { same_line: bool },
    NovelDelimiterLHS,
    NovelDelimiterRHS,
}

impl Edge {
    fn cost(&self) -> i64 {
        match self {
            StartNode => 0,
            // Matching nodes is always best.
            UnchangedNode => 0,
            // Matching an outer delimiter is good.
            UnchangedDelimiter => -1,
            // Otherwise, we've added/removed a node. Prefer novel
            // nodes on the same line, to reduce the risk of sliders.
            NovelAtomLHS { same_line } | NovelAtomRHS { same_line } => {
                if *same_line {
                    -2
                } else {
                    -3
                }
            }
            NovelDelimiterLHS => -2,
            NovelDelimiterRHS => -2,
        }
    }
}

fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    let mut heap = BinaryHeap::new();
    heap.push(OrdVertex {
        distance: 0,
        v: start.clone(),
    });

    let mut visited = FxHashSet::default();
    let mut predecessors: FxHashMap<Vertex, (Edge, Vertex)> = FxHashMap::default();

    loop {
        match heap.pop() {
            Some(OrdVertex { distance, v }) => {
                if v.is_end() {
                    break;
                }

                if visited.contains(&v) {
                    continue;
                }
                for (edge, new_v) in neighbours(&v) {
                    if !predecessors.contains_key(&new_v) {
                        predecessors.insert(new_v.clone(), (edge, v.clone()));
                        heap.push(OrdVertex {
                            distance: distance + edge.cost(),
                            v: new_v,
                        });
                    }
                }

                visited.insert(v);
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    let mut current = Vertex {
        lhs_syntax: None,
        rhs_syntax: None,
    };
    let mut res: Vec<(Edge, Vertex)> = vec![];
    loop {
        match predecessors.remove(&current) {
            Some((edge, node)) => {
                res.push((edge, node.clone()));
                current = node;
            }
            None => {
                res.push((StartNode, current.clone()));
                break;
            }
        }
    }

    res.reverse();
    res
}

fn neighbours<'a>(v: &Vertex<'a>) -> Vec<(Edge, Vertex<'a>)> {
    let mut res = vec![];

    if let (Some(lhs_syntax), Some(rhs_syntax)) = (&v.lhs_syntax, &v.rhs_syntax) {
        if lhs_syntax.equal_content(rhs_syntax) {
            // Both nodes are equal, the happy case.
            res.push((
                UnchangedNode,
                Vertex {
                    lhs_syntax: lhs_syntax.get_next(),
                    rhs_syntax: rhs_syntax.get_next(),
                },
            ));
        }

        if let (
            Syntax::List {
                open_content: lhs_open_content,
                close_content: lhs_close_content,
                children: lhs_children,
                ..
            },
            Syntax::List {
                open_content: rhs_open_content,
                close_content: rhs_close_content,
                children: rhs_children,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            if lhs_open_content == rhs_open_content && lhs_close_content == rhs_close_content {
                let lhs_next = if lhs_children.is_empty() {
                    lhs_syntax.get_next()
                } else {
                    Some(lhs_children[0])
                };
                let rhs_next = if rhs_children.is_empty() {
                    rhs_syntax.get_next()
                } else {
                    Some(rhs_children[0])
                };
                res.push((
                    UnchangedDelimiter,
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: rhs_next,
                    },
                ));
            }
        }
    }

    if let Some(lhs_syntax) = &v.lhs_syntax {
        match lhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                res.push((
                    NovelAtomLHS { same_line: false },
                    Vertex {
                        lhs_syntax: lhs_syntax.get_next(),
                        rhs_syntax: v.rhs_syntax,
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                let lhs_next = if children.is_empty() {
                    lhs_syntax.get_next()
                } else {
                    Some(children[0])
                };

                res.push((
                    NovelDelimiterLHS,
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: v.rhs_syntax,
                    },
                ));
            }
        }
    }

    if let Some(rhs_syntax) = &v.rhs_syntax {
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                res.push((
                    NovelAtomRHS { same_line: false },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_syntax.get_next(),
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                let rhs_next = if children.is_empty() {
                    rhs_syntax.get_next()
                } else {
                    Some(children[0])
                };

                res.push((
                    NovelDelimiterRHS,
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_next,
                    },
                ));
            }
        }
    }

    res
}

pub fn mark_syntax<'a>(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) {
    let start = Vertex {
        lhs_syntax,
        rhs_syntax,
    };
    let route = shortest_path(start);
    mark_route(&route);
}

fn mark_route(route: &[(Edge, Vertex)]) {
    for (e, v) in route {
        match e {
            StartNode => {
                // No change on the root node.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            UnchangedNode => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Unchanged(rhs));
                rhs.set_change_deep(ChangeKind::Unchanged(lhs));
            }
            UnchangedDelimiter => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            NovelAtomLHS { .. } | NovelDelimiterLHS => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | NovelDelimiterRHS => {
                let rhs = v.rhs_syntax.unwrap();
                rhs.set_change(ChangeKind::Novel);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::positions::SingleLineSpan;
    use crate::syntax::Syntax::*;
    use crate::syntax::{set_next, AtomKind};

    use itertools::Itertools;
    use std::cell::Cell;
    use typed_arena::Arena;

    fn pos_helper(line: usize) -> Vec<SingleLineSpan> {
        vec![SingleLineSpan {
            line: line.into(),
            start_col: 0,
            end_col: 1,
        }]
    }

    fn col_helper(line: usize, col: usize) -> Vec<SingleLineSpan> {
        vec![SingleLineSpan {
            line: line.into(),
            start_col: col,
            end_col: col + 1,
        }]
    }

    #[test]
    fn identical_atoms() {
        let arena = Arena::new();

        let lhs = arena.alloc(Atom {
            pos_content_hash: 0,
            next: Cell::new(None),
            position: pos_helper(0),
            change: Cell::new(None),
            content: "foo".into(),
            kind: AtomKind::Other,
        });

        // Same content as LHS.
        let rhs = arena.alloc(Atom {
            pos_content_hash: 1,
            next: Cell::new(None),
            position: pos_helper(1),
            change: Cell::new(None),
            content: "foo".into(),
            kind: AtomKind::Other,
        });

        let start = Vertex {
            lhs_syntax: Some(lhs),
            rhs_syntax: Some(rhs),
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(actions, vec![StartNode, UnchangedNode]);
    }

    #[test]
    fn extra_atom_lhs() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[".into(),
            pos_helper(0),
            vec![Syntax::new_atom(
                &arena,
                pos_helper(1),
                "foo",
                AtomKind::Other,
            )],
            "]".into(),
            pos_helper(2),
        )];
        set_next(&lhs, None);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[".into(),
            pos_helper(0),
            vec![],
            "]".into(),
            pos_helper(2),
        )];
        set_next(&rhs, None);

        let start = Vertex {
            lhs_syntax: lhs.get(0).map(|n| *n),
            rhs_syntax: rhs.get(0).map(|n| *n),
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                StartNode,
                UnchangedDelimiter,
                NovelAtomLHS { same_line: false }
            ]
        );
    }

    #[test]
    fn repeated_atoms() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[".into(),
            pos_helper(0),
            vec![],
            "]".into(),
            pos_helper(2),
        )];
        set_next(&lhs, None);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[".into(),
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Other),
                Syntax::new_atom(&arena, pos_helper(2), "foo", AtomKind::Other),
            ],
            "]".into(),
            pos_helper(3),
        )];
        set_next(&rhs, None);

        let start = Vertex {
            lhs_syntax: lhs.get(0).map(|n| *n),
            rhs_syntax: rhs.get(0).map(|n| *n),
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                StartNode,
                UnchangedDelimiter,
                NovelAtomRHS { same_line: false },
                NovelAtomRHS { same_line: false }
            ]
        );
    }

    #[test]
    fn atom_after_empty_list() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[".into(),
            pos_helper(0),
            vec![
                Syntax::new_list(
                    &arena,
                    "(".into(),
                    pos_helper(1),
                    vec![],
                    ")".into(),
                    pos_helper(2),
                ),
                Syntax::new_atom(&arena, pos_helper(3), "foo", AtomKind::Other),
            ],
            "]".into(),
            pos_helper(4),
        )];
        set_next(&lhs, None);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "{".into(),
            pos_helper(0),
            vec![
                Syntax::new_list(
                    &arena,
                    "(".into(),
                    pos_helper(1),
                    vec![],
                    ")".into(),
                    pos_helper(2),
                ),
                Syntax::new_atom(&arena, pos_helper(3), "foo", AtomKind::Other),
            ],
            "}".into(),
            pos_helper(4),
        )];
        set_next(&rhs, None);

        let start = Vertex {
            lhs_syntax: lhs.get(0).map(|n| *n),
            rhs_syntax: rhs.get(0).map(|n| *n),
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                StartNode,
                NovelDelimiterLHS,
                NovelDelimiterRHS,
                UnchangedNode,
                UnchangedNode
            ],
        );
    }
    #[test]
    fn prefer_atoms_same_line() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![
            Syntax::new_atom(&arena, col_helper(1, 0), "foo", AtomKind::Other),
            Syntax::new_atom(&arena, col_helper(2, 0), "bar", AtomKind::Other),
            Syntax::new_atom(&arena, col_helper(2, 1), "foo", AtomKind::Other),
        ];
        set_next(&lhs, None);

        let rhs: Vec<&Syntax> = vec![Syntax::new_atom(
            &arena,
            col_helper(1, 0),
            "foo",
            AtomKind::Other,
        )];
        set_next(&rhs, None);

        let start = Vertex {
            lhs_syntax: lhs.get(0).map(|n| *n),
            rhs_syntax: rhs.get(0).map(|n| *n),
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                StartNode,
                NovelAtomLHS { same_line: true },
                NovelAtomLHS { same_line: false },
                UnchangedNode,
            ],
        );
    }
}
