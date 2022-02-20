//! Implements Dijkstra's algorithm for shortest path, to find an
//! optimal and readable diff between two ASTs.

use std::{cmp::Reverse, env};

use crate::{
    graph::{mark_route, neighbours, Edge, Vertex},
    syntax::Syntax,
};
use itertools::Itertools;
use radix_heap::RadixHeapMap;
use rustc_hash::FxHashMap;

type PredecessorInfo<'a> = (u64, Vertex<'a>, Edge);

fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    // We want to visit nodes with the shortest distance first, but
    // RadixHeapMap is a max-heap. Ensure nodes are wrapped with
    // Reverse to flip comparisons.
    let mut heap: RadixHeapMap<Reverse<_>, Vertex> = RadixHeapMap::new();

    heap.push(Reverse(0), start);

    // TODO: this grows very big. Consider using IDA* to reduce memory
    // usage.
    let mut predecessors: FxHashMap<Vertex, PredecessorInfo> = FxHashMap::default();

    let mut neighbour_buf = [
        None, None, None, None, None, None, None, None, None, None, None, None,
    ];
    let end = loop {
        match heap.pop() {
            Some((Reverse(distance), current)) => {
                if current.is_end() {
                    break current;
                }

                neighbours(&current, &mut neighbour_buf);
                for (edge, next) in neighbour_buf.iter().flatten() {
                    let distance_to_next = distance + edge.cost();
                    let found_shorter_route = match predecessors.get(next) {
                        Some((prev_shortest, _, _)) => distance_to_next < *prev_shortest,
                        _ => true,
                    };

                    if found_shorter_route {
                        predecessors
                            .insert(next.clone(), (distance_to_next, current.clone(), *edge));

                        heap.push(Reverse(distance_to_next), next.clone());
                    }
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    };

    info!(
        "Found predecessors for {} syntax nodes (hashmap key: {} bytes, value: {} bytes), with {} left on heap.",
        predecessors.len(),
        std::mem::size_of::<Vertex>(),
        std::mem::size_of::<PredecessorInfo>(),
        heap.len(),
    );
    let mut current = end;

    let mut route: Vec<(Edge, Vertex)> = vec![];
    let mut cost = 0;
    while let Some((_, node, edge)) = predecessors.remove(&current) {
        route.push((edge, node.clone()));
        cost += edge.cost();

        current = node;
    }
    route.reverse();

    info!("Found a path of {} with cost {}.", route.len(), cost);
    info!(
        "Initial path: {:#?}",
        route
            .iter()
            .map(|x| x.0)
            .take(if env::var("DFT_VERBOSE").is_ok() {
                50
            } else {
                5
            })
            .collect_vec()
    );
    route
}

pub fn mark_syntax<'a>(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) {
    let start = Vertex::new(lhs_syntax, rhs_syntax);
    let route = shortest_path(start);
    mark_route(&route);
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{
        graph::Edge::*,
        positions::SingleLineSpan,
        syntax::{init_all_info, AtomKind, ChangeKind},
    };

    use itertools::Itertools;
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

        let lhs = Syntax::new_atom(&arena, pos_helper(0), "foo", AtomKind::Normal);
        // Same content as LHS.
        let rhs = Syntax::new_atom(&arena, pos_helper(0), "foo", AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let start = Vertex::new(Some(lhs), Some(rhs));
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(actions, vec![UnchangedNode]);
    }

    #[test]
    fn extra_atom_lhs() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![Syntax::new_atom(
                &arena,
                pos_helper(1),
                "foo",
                AtomKind::Normal,
            )],
            "]",
            pos_helper(2),
        )];

        let rhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![],
            "]",
            pos_helper(2),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedDelimiter,
                NovelAtomLHS { contiguous: false },
                MoveParentBoth,
            ]
        );
    }

    #[test]
    fn repeated_atoms() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![],
            "]",
            pos_helper(2),
        )];

        let rhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(2), "foo", AtomKind::Normal),
            ],
            "]",
            pos_helper(3),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedDelimiter,
                NovelAtomRHS { contiguous: false },
                NovelAtomRHS { contiguous: false },
                MoveParentBoth,
            ]
        );
    }

    #[test]
    fn atom_after_empty_list() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_list(&arena, "(", pos_helper(1), vec![], ")", pos_helper(2)),
                Syntax::new_atom(&arena, pos_helper(3), "foo", AtomKind::Normal),
            ],
            "]",
            pos_helper(4),
        )];

        let rhs = vec![Syntax::new_list(
            &arena,
            "{",
            pos_helper(0),
            vec![
                Syntax::new_list(&arena, "(", pos_helper(1), vec![], ")", pos_helper(2)),
                Syntax::new_atom(&arena, pos_helper(3), "foo", AtomKind::Normal),
            ],
            "}",
            pos_helper(4),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterRHS { contiguous: false },
                NovelDelimiterLHS { contiguous: false },
                UnchangedNode,
                UnchangedNode,
                MoveParentLHS,
                MoveParentRHS,
            ],
        );
    }

    #[test]
    fn prefer_atoms_same_line() {
        let arena = Arena::new();

        let lhs = vec![
            Syntax::new_atom(&arena, col_helper(1, 0), "foo", AtomKind::Normal),
            Syntax::new_atom(&arena, col_helper(2, 0), "bar", AtomKind::Normal),
            Syntax::new_atom(&arena, col_helper(2, 1), "foo", AtomKind::Normal),
        ];

        let rhs = vec![Syntax::new_atom(
            &arena,
            col_helper(1, 0),
            "foo",
            AtomKind::Normal,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedNode,
                NovelAtomLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
            ]
        );
    }

    #[test]
    fn prefer_children_same_line() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_list(
            &arena,
            "[",
            col_helper(1, 0),
            vec![Syntax::new_atom(
                &arena,
                col_helper(1, 2),
                "1",
                AtomKind::Normal,
            )],
            "]",
            pos_helper(2),
        )];

        let rhs = vec![];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
                MoveParentLHS,
            ]
        );
    }

    #[test]
    fn atom_after_novel_list_contiguous() {
        let arena = Arena::new();

        let lhs = vec![
            Syntax::new_list(
                &arena,
                "[",
                col_helper(1, 0),
                vec![Syntax::new_atom(
                    &arena,
                    col_helper(1, 2),
                    "1",
                    AtomKind::Normal,
                )],
                "]",
                col_helper(2, 1),
            ),
            Syntax::new_atom(&arena, col_helper(2, 2), ";", AtomKind::Normal),
        ];

        let rhs = vec![];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelDelimiterLHS { contiguous: false },
                NovelAtomLHS { contiguous: true },
                MoveParentLHS,
                NovelAtomLHS { contiguous: true },
            ]
        );
    }

    #[test]
    fn test_novel_tree() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "1", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(2), "2", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(3), "3", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(4), "4", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(5), "5", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(6), "6", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(7), "7", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(8), "8", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(9), "9", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(10), "10", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(11), "11", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(12), "12", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(13), "13", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(14), "14", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(15), "15", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(16), "16", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(17), "17", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(18), "18", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(19), "19", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(20), "20", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(21), "21", AtomKind::Normal),
            ],
            "]",
            pos_helper(100),
        )];

        let rhs = vec![Syntax::new_list(
            &arena,
            "[",
            pos_helper(0),
            vec![
                Syntax::new_atom(&arena, pos_helper(1), "d1", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(2), "d2", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(3), "d3", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(4), "d4", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(5), "d5", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(6), "d6", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(7), "d7", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(8), "d8", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(9), "d9", AtomKind::Normal),
                // This is the only common atom:
                Syntax::new_atom(&arena, pos_helper(10), "10", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(11), "d11", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(12), "d12", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(13), "d13", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(14), "d14", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(15), "d15", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(16), "d16", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(17), "d17", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(18), "d18", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(19), "d19", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(20), "d20", AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(21), "d21", AtomKind::Normal),
            ],
            "]",
            pos_helper(100),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
        let route = shortest_path(start);

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                NovelTreeRHS {
                    num_descendants: 21
                },
                NovelTreeLHS {
                    num_descendants: 21
                },
            ]
        );
    }

    #[test]
    fn replace_similar_comment() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown fox",
            AtomKind::Comment,
        )];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown cat",
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
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

        let lhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown fox",
            AtomKind::Comment,
        )];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "foo bar",
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
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

        let lhs = vec![
            Syntax::new_atom(
                &arena,
                pos_helper(1),
                "the quick brown fox",
                AtomKind::Comment,
            ),
            Syntax::new_atom(
                &arena,
                pos_helper(2),
                "the quick brown thing",
                AtomKind::Comment,
            ),
        ];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown fox.",
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.get(0).copied(), rhs.get(0).copied());
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

    #[test]
    fn mark_syntax_equal_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        mark_syntax(Some(lhs), Some(rhs));
        assert_eq!(lhs.change(), Some(ChangeKind::Unchanged(rhs)));
        assert_eq!(rhs.change(), Some(ChangeKind::Unchanged(lhs)));
    }

    #[test]
    fn mark_syntax_different_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "bar", AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        mark_syntax(Some(lhs), Some(rhs));
        assert_eq!(lhs.change(), Some(ChangeKind::Novel));
        assert_eq!(rhs.change(), Some(ChangeKind::Novel));
    }
}
