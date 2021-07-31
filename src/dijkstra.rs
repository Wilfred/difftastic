//! Implements Dijkstra's algorithm for shortest path, to find an
//! optimal and readable diff between two ASTs.

use std::cmp::{min, Ordering, Reverse};
use std::collections::BinaryHeap;
use std::hash::{Hash, Hasher};

use crate::syntax::{ChangeKind, Syntax};
use rustc_hash::FxHashMap;
use strsim::normalized_levenshtein;
use Edge::*;

/// A vertex in a directed acyclic graph that represents a diff.
///
/// Each vertex represents two pointers: one to the next unmatched LHS
/// syntax, and one to the next unmatched RHS syntax.
///
/// For example, suppose we have `X A` on the LHS and `A` on the
/// RHS. Our start vertex looks like this.
///
/// ```
/// LHS: X A     RHS: A
///      ^            ^
/// ```
///
/// From this vertex, we could take [`Edge::NovelAtomLHS`], bringing
/// us to this vertex.
///
/// ```
/// LHS: X A     RHS: A
///        ^          ^
/// ```
///
/// Alternatively, we could take the [`Edge::NovelAtomRHS`], bringing us
/// to this vertex.
///
/// ```
/// LHS: X A     RHS: A
///      ^              ^
/// ```
#[derive(Debug, Clone)]
struct Vertex<'a> {
    lhs_syntax: Option<&'a Syntax<'a>>,
    rhs_syntax: Option<&'a Syntax<'a>>,
    /// If the previous edge was marking syntax as novel, what line
    /// was it on?
    ///
    /// We want to prefer marking syntax nodes as novel if we've
    /// already marked other nodes as novel on the current line. See
    /// `sample_files/contiguous_after.js`.
    ///
    /// Unfortunately this is path dependent: the vertex doesn't care
    /// how we got here.
    ///
    /// We solve this by distinguishing vertices based on the novel
    /// state of the previous edge. This increases the search space
    /// but allows us to keep using a graph traversal.
    lhs_prev_is_novel: bool,
    rhs_prev_is_novel: bool,
}
impl<'a> PartialEq for Vertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.lhs_syntax.map(|node| node.id()) == other.lhs_syntax.map(|node| node.id())
            && self.rhs_syntax.map(|node| node.id()) == other.rhs_syntax.map(|node| node.id())
    }
}
impl<'a> Eq for Vertex<'a> {}

impl<'a> Hash for Vertex<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.map(|node| node.id()).hash(state);
        self.rhs_syntax.map(|node| node.id()).hash(state);
    }
}

impl<'a> Vertex<'a> {
    fn is_end(&self) -> bool {
        self.lhs_syntax.is_none() && self.rhs_syntax.is_none()
    }
}

/// A vertex with a distance.
///
/// Rust requires that PartialEq, PartialOrd and Ord agree.
/// <https://doc.rust-lang.org/std/cmp/trait.Ord.html>
///
/// We want two nodes of the same distance to be the same as far as
/// the priority queue is concerned. This differs from the equality
/// semantics on [`Vertex`] (which should only consider LHS/RHS
/// syntax).
///
/// Defining OrdVertex as a separate type allows us different Eq and
/// Ord behaviour.
#[derive(Debug)]
struct OrdVertex<'a> {
    /// The distance from the start vertex to this vertex.
    distance: u64,
    /// The vertex we have just reached.
    current: Vertex<'a>,
    /// The previous vertex and edge we took to reach this vertex.
    prev: Option<(Vertex<'a>, Edge)>,
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

/// An edge in our graph, with an associated [`cost`](Edge::cost).
///
/// A syntax node can always be marked as novel, so a vertex will have
/// at least a NovelFoo edge. Depending on the syntax nodes of the
/// current [`Vertex`], other edges may also be available.
///
/// See [`neighbours`] for all the edges available for a given `Vertex`.
#[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
enum Edge {
    UnchangedNode { depth_difference: u64 },
    UnchangedDelimiter { depth_difference: u64 },
    ReplacedComment { levenshtein_pct: u8 },
    NovelAtomLHS { contiguous: bool },
    NovelAtomRHS { contiguous: bool },
    NovelDelimiterLHS { contiguous: bool },
    NovelDelimiterRHS { contiguous: bool },
    NovelTreeLHS { num_descendants: u64 },
    NovelTreeRHS { num_descendants: u64 },
}

impl Edge {
    fn cost(&self) -> u64 {
        match self {
            // Matching nodes is always best.
            UnchangedNode { depth_difference } => min(40, *depth_difference),
            // Matching an outer delimiter is good.
            UnchangedDelimiter { depth_difference } => 100 + min(40, *depth_difference),

            // Replacing a comment is better than treating it as novel.
            ReplacedComment { levenshtein_pct } => 150 + u64::from(100 - levenshtein_pct),

            // Otherwise, we've added/removed a node.
            NovelAtomLHS { contiguous } | NovelAtomRHS { contiguous } => {
                if *contiguous {
                    300
                } else {
                    301
                }
            }
            NovelDelimiterLHS { contiguous } | NovelDelimiterRHS { contiguous } => {
                if *contiguous {
                    300
                } else {
                    301
                }
            }

            // For large trees, it's better to mark the whole tree as
            // novel rather than marking 90% of the children as
            // novel. This stops us matching up completely unrelated trees.
            NovelTreeLHS { num_descendants } | NovelTreeRHS { num_descendants } => {
                200 + (*num_descendants - 10) * NovelDelimiterLHS { contiguous: false }.cost()
            }
        }
    }
}

fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    // We want to visit nodes with the shortest distance first, but
    // BinaryHeap is a max-heap. Ensure nodes are wrapped with Reverse
    // to flip comparisons.
    let mut heap: BinaryHeap<Reverse<_>> = BinaryHeap::new();

    heap.push(Reverse(OrdVertex {
        distance: 0,
        current: start,
        prev: None,
    }));

    // TODO: this grows very big. Consider using IDA* to reduce memory
    // usage.
    let mut predecessors: FxHashMap<Vertex, Option<(Vertex, Edge)>> = FxHashMap::default();

    let end;
    loop {
        match heap.pop() {
            Some(Reverse(OrdVertex {
                distance,
                current,
                prev,
            })) => {
                if predecessors.contains_key(&current) {
                    continue;
                }
                predecessors.insert(current.clone(), prev);

                if current.is_end() {
                    end = current;
                    break;
                }

                for (edge, next) in neighbours(&current) {
                    if predecessors.contains_key(&next) {
                        continue;
                    }
                    let distance_to_next = distance + edge.cost();

                    heap.push(Reverse(OrdVertex {
                        distance: distance_to_next,
                        current: next,
                        prev: Some((current.clone(), edge)),
                    }));
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    let mut current = end;
    let mut res: Vec<(Edge, Vertex)> = vec![];
    while let Some(Some((node, edge))) = predecessors.remove(&current) {
        res.push((edge, node.clone()));
        current = node;
    }

    res.reverse();
    res
}

const NOVEL_TREE_THRESHOLD: u64 = 20;

fn neighbours<'a>(v: &Vertex<'a>) -> Vec<(Edge, Vertex<'a>)> {
    let mut res = vec![];

    if let (Some(lhs_syntax), Some(rhs_syntax)) = (&v.lhs_syntax, &v.rhs_syntax) {
        if lhs_syntax.equal_content(rhs_syntax) {
            let depth_difference = (lhs_syntax.num_ancestors() as i64
                - rhs_syntax.num_ancestors() as i64)
                .abs() as u64;

            // Both nodes are equal, the happy case.
            res.push((
                UnchangedNode { depth_difference },
                Vertex {
                    lhs_syntax: lhs_syntax.next(),
                    rhs_syntax: rhs_syntax.next(),
                    lhs_prev_is_novel: false,
                    rhs_prev_is_novel: false,
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
            // The list delimiters are equal, but children may not be.
            if lhs_open_content == rhs_open_content && lhs_close_content == rhs_close_content {
                let lhs_next = if lhs_children.is_empty() {
                    lhs_syntax.next()
                } else {
                    Some(lhs_children[0])
                };
                let rhs_next = if rhs_children.is_empty() {
                    rhs_syntax.next()
                } else {
                    Some(rhs_children[0])
                };

                let depth_difference = (lhs_syntax.num_ancestors() as i64
                    - rhs_syntax.num_ancestors() as i64)
                    .abs() as u64;

                res.push((
                    UnchangedDelimiter { depth_difference },
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: rhs_next,
                        lhs_prev_is_novel: false,
                        rhs_prev_is_novel: false,
                    },
                ));
            }
        }

        if let (
            Syntax::Atom {
                content: lhs_content,
                is_comment: lhs_is_comment,
                ..
            },
            Syntax::Atom {
                content: rhs_content,
                is_comment: rhs_is_comment,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            // Both sides are comments and their content is reasonably
            // similar.
            if *lhs_is_comment && *rhs_is_comment && lhs_content != rhs_content {
                let levenshtein_pct =
                    (normalized_levenshtein(lhs_content, rhs_content) * 100.0).round() as u8;
                res.push((
                    ReplacedComment { levenshtein_pct },
                    Vertex {
                        lhs_syntax: lhs_syntax.next(),
                        rhs_syntax: rhs_syntax.next(),
                        lhs_prev_is_novel: false,
                        rhs_prev_is_novel: false,
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
                    NovelAtomLHS {
                        contiguous: v.lhs_prev_is_novel && lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_syntax.next(),
                        rhs_syntax: v.rhs_syntax,
                        lhs_prev_is_novel: true,
                        rhs_prev_is_novel: v.rhs_prev_is_novel,
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List {
                children,
                num_descendants,
                ..
            } => {
                let lhs_next = if children.is_empty() {
                    lhs_syntax.next()
                } else {
                    Some(children[0])
                };

                res.push((
                    NovelDelimiterLHS {
                        contiguous: v.lhs_prev_is_novel && lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: v.rhs_syntax,
                        lhs_prev_is_novel: true,
                        rhs_prev_is_novel: v.rhs_prev_is_novel,
                    },
                ));

                if *num_descendants > NOVEL_TREE_THRESHOLD {
                    res.push((
                        NovelTreeLHS {
                            num_descendants: *num_descendants as u64,
                        },
                        Vertex {
                            lhs_syntax: lhs_syntax.next(),
                            rhs_syntax: v.rhs_syntax,
                            lhs_prev_is_novel: v.lhs_prev_is_novel,
                            rhs_prev_is_novel: v.rhs_prev_is_novel,
                        },
                    ));
                }
            }
        }
    }

    if let Some(rhs_syntax) = &v.rhs_syntax {
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                res.push((
                    NovelAtomRHS {
                        contiguous: v.rhs_prev_is_novel && rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_syntax.next(),
                        lhs_prev_is_novel: v.lhs_prev_is_novel,
                        rhs_prev_is_novel: true,
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List {
                children,
                num_descendants,
                ..
            } => {
                let rhs_next = if children.is_empty() {
                    rhs_syntax.next()
                } else {
                    Some(children[0])
                };

                res.push((
                    NovelDelimiterRHS {
                        contiguous: v.rhs_prev_is_novel && rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_next,
                        lhs_prev_is_novel: v.lhs_prev_is_novel,
                        rhs_prev_is_novel: true,
                    },
                ));

                if *num_descendants > NOVEL_TREE_THRESHOLD {
                    res.push((
                        NovelTreeRHS {
                            num_descendants: *num_descendants as u64,
                        },
                        Vertex {
                            lhs_syntax: v.lhs_syntax,
                            rhs_syntax: rhs_syntax.next(),
                            lhs_prev_is_novel: v.lhs_prev_is_novel,
                            rhs_prev_is_novel: v.rhs_prev_is_novel,
                        },
                    ));
                }
            }
        }
    }

    res
}

pub fn mark_syntax<'a>(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) {
    let start = Vertex {
        lhs_syntax,
        rhs_syntax,
        lhs_prev_is_novel: false,
        rhs_prev_is_novel: false,
    };
    let route = shortest_path(start);
    mark_route(&route);
}

fn mark_route(route: &[(Edge, Vertex)]) {
    for (e, v) in route {
        match e {
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Unchanged(rhs));
                rhs.set_change_deep(ChangeKind::Unchanged(lhs));
            }
            UnchangedDelimiter { .. } => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } => {
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();

                if *levenshtein_pct > 40 {
                    lhs.set_change(ChangeKind::ReplacedComment(lhs, rhs));
                    rhs.set_change(ChangeKind::ReplacedComment(rhs, lhs));
                } else {
                    lhs.set_change(ChangeKind::Novel);
                    rhs.set_change(ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | NovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | NovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax.unwrap();
                rhs.set_change(ChangeKind::Novel);
            }
            NovelTreeLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Novel);
            }
            NovelTreeRHS { .. } => {
                let rhs = v.rhs_syntax.unwrap();
                rhs.set_change_deep(ChangeKind::Novel);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::positions::SingleLineSpan;
    use crate::syntax::init_info;
    use crate::syntax::Syntax::*;
    use crate::syntax::SyntaxInfo;

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
            info: SyntaxInfo {
                unique_id: Cell::new(0),
                ..SyntaxInfo::new(0)
            },
            position: pos_helper(0),
            content: "foo".into(),
            is_comment: false,
        });

        // Same content as LHS.
        let rhs = arena.alloc(Atom {
            info: SyntaxInfo {
                unique_id: Cell::new(1),
                ..SyntaxInfo::new(1)
            },
            position: pos_helper(1),
            content: "foo".into(),
            is_comment: false,
        });

        let start = Vertex {
            lhs_syntax: Some(lhs),
            rhs_syntax: Some(rhs),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![UnchangedNode {
                depth_difference: 0
            }]
        );
    }

    #[test]
    fn extra_atom_lhs() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![Syntax::new_atom(&arena, pos_helper(1), "foo")],
            "]",
            pos_helper(2),
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![],
            "]",
            pos_helper(2),
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomLHS { contiguous: false }
            ]
        );
    }

    #[test]
    fn repeated_atoms() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![],
            "]",
            pos_helper(2),
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "foo"),
                Syntax::new_atom(&arena, pos_helper(2), "foo"),
            ],
            "]",
            pos_helper(3),
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomRHS { contiguous: false },
                NovelAtomRHS { contiguous: false }
            ]
        );
    }

    #[test]
    fn atom_after_empty_list() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_list(&arena, "(", pos_helper(1), vec![], ")", pos_helper(2)),
                Syntax::new_atom(&arena, pos_helper(3), "foo"),
            ],
            "]",
            pos_helper(4),
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "{",
            pos_helper(0),
            vec![
                Syntax::new_list(&arena, "(", pos_helper(1), vec![], ")", pos_helper(2)),
                Syntax::new_atom(&arena, pos_helper(3), "foo"),
            ],
            "}",
            pos_helper(4),
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterRHS { contiguous: false },
                NovelDelimiterLHS { contiguous: false },
                UnchangedNode {
                    depth_difference: 0
                },
                UnchangedNode {
                    depth_difference: 0
                }
            ],
        );
    }

    #[test]
    fn prefer_atoms_same_line() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![
            Syntax::new_atom(&arena, col_helper(1, 0), "foo"),
            Syntax::new_atom(&arena, col_helper(2, 0), "bar"),
            Syntax::new_atom(&arena, col_helper(2, 1), "foo"),
        ];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_atom(&arena, col_helper(1, 0), "foo")];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedNode {
                    depth_difference: 0
                },
                NovelAtomLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
            ]
        );
    }

    #[test]
    fn prefer_children_same_line() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            col_helper(1, 0),
            vec![Syntax::new_atom(&arena, col_helper(1, 2), "1")],
            "]",
            pos_helper(2),
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![];

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
            ]
        );
    }

    #[test]
    fn atom_after_novel_list_contiguous() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![
            Syntax::new_list(
                &arena,
                "[",
                col_helper(1, 0),
                vec![Syntax::new_atom(&arena, col_helper(1, 2), "1")],
                "]",
                col_helper(2, 1),
            ),
            Syntax::new_atom(&arena, col_helper(2, 2), ";"),
        ];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![];

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
                NovelAtomLHS { contiguous: true }
            ]
        );
    }

    #[test]
    fn test_novel_tree() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "1"),
                Syntax::new_atom(&arena, pos_helper(2), "2"),
                Syntax::new_atom(&arena, pos_helper(3), "3"),
                Syntax::new_atom(&arena, pos_helper(4), "4"),
                Syntax::new_atom(&arena, pos_helper(5), "5"),
                Syntax::new_atom(&arena, pos_helper(6), "6"),
                Syntax::new_atom(&arena, pos_helper(7), "7"),
                Syntax::new_atom(&arena, pos_helper(8), "8"),
                Syntax::new_atom(&arena, pos_helper(9), "9"),
                Syntax::new_atom(&arena, pos_helper(10), "10"),
                Syntax::new_atom(&arena, pos_helper(11), "11"),
                Syntax::new_atom(&arena, pos_helper(12), "12"),
                Syntax::new_atom(&arena, pos_helper(13), "13"),
                Syntax::new_atom(&arena, pos_helper(14), "14"),
                Syntax::new_atom(&arena, pos_helper(15), "15"),
                Syntax::new_atom(&arena, pos_helper(16), "16"),
                Syntax::new_atom(&arena, pos_helper(17), "17"),
                Syntax::new_atom(&arena, pos_helper(18), "18"),
                Syntax::new_atom(&arena, pos_helper(19), "19"),
                Syntax::new_atom(&arena, pos_helper(20), "20"),
                Syntax::new_atom(&arena, pos_helper(21), "21"),
            ],
            "]",
            pos_helper(100),
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "d1"),
                Syntax::new_atom(&arena, pos_helper(2), "d2"),
                Syntax::new_atom(&arena, pos_helper(3), "d3"),
                Syntax::new_atom(&arena, pos_helper(4), "d4"),
                Syntax::new_atom(&arena, pos_helper(5), "d5"),
                Syntax::new_atom(&arena, pos_helper(6), "d6"),
                Syntax::new_atom(&arena, pos_helper(7), "d7"),
                Syntax::new_atom(&arena, pos_helper(8), "d8"),
                Syntax::new_atom(&arena, pos_helper(9), "d9"),
                // This is the only common atom:
                Syntax::new_atom(&arena, pos_helper(10), "10"),
                Syntax::new_atom(&arena, pos_helper(11), "d11"),
                Syntax::new_atom(&arena, pos_helper(12), "d12"),
                Syntax::new_atom(&arena, pos_helper(13), "d13"),
                Syntax::new_atom(&arena, pos_helper(14), "d14"),
                Syntax::new_atom(&arena, pos_helper(15), "d15"),
                Syntax::new_atom(&arena, pos_helper(16), "d16"),
                Syntax::new_atom(&arena, pos_helper(17), "d17"),
                Syntax::new_atom(&arena, pos_helper(18), "d18"),
                Syntax::new_atom(&arena, pos_helper(19), "d19"),
                Syntax::new_atom(&arena, pos_helper(20), "d20"),
                Syntax::new_atom(&arena, pos_helper(21), "d21"),
            ],
            "]",
            pos_helper(100),
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelTreeLHS {
                    num_descendants: 21
                },
                NovelTreeRHS {
                    num_descendants: 21
                },
            ]
        );
    }

    #[test]
    fn replace_similar_comment() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_comment(
            &arena,
            pos_helper(1),
            "the quick brown fox",
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_comment(
            &arena,
            pos_helper(1),
            "the quick brown cat",
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![ReplacedComment {
                levenshtein_pct: 84
            }]
        );
    }

    #[test]
    fn replace_very_different_comment() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![Syntax::new_comment(
            &arena,
            pos_helper(1),
            "the quick brown fox",
        )];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_comment(&arena, pos_helper(1), "foo bar")];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![ReplacedComment {
                levenshtein_pct: 11
            }]
        );
    }

    #[test]
    fn replace_comment_prefer_most_similar() {
        let arena = Arena::new();

        let lhs: Vec<&Syntax> = vec![
            Syntax::new_comment(&arena, pos_helper(1), "the quick brown fox"),
            Syntax::new_comment(&arena, pos_helper(2), "the quick brown thing"),
        ];
        init_info(&lhs);

        let rhs: Vec<&Syntax> = vec![Syntax::new_comment(
            &arena,
            pos_helper(1),
            "the quick brown fox.",
        )];
        init_info(&rhs);

        let start = Vertex {
            lhs_syntax: lhs.get(0).copied(),
            rhs_syntax: rhs.get(0).copied(),
            lhs_prev_is_novel: false,
            rhs_prev_is_novel: false,
        };
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                ReplacedComment {
                    levenshtein_pct: 95
                },
                NovelAtomLHS { contiguous: false }
            ]
        );
    }
}
