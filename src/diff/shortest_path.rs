//! Implements Dijkstra's algorithm for shortest path, to find an
//! optimal and readable diff between two ASTs.
//!
//! ## Why Dijkstra?
//!
//! Dijkstra is fast enough, and it's relatively easy to reason about.
//!
//! The obvious alternative to consider is A*. It's typically faster
//! and there's some precedent for tree diffing with A*.
//!
//! <https://www.redblobgames.com/pathfinding/a-star/introduction.html#more>
//! <https://thume.ca/2017/06/17/tree-diffing/>
//!
//! Difftastic's graph structure makes A* difficult. You can think of
//! the graph as a grid (see the manual for the full graph
//! description). For diffing sequences of flat tokens, this is fine.
//!
//! ```text
//!     A   B
//!   o---o---o
//! X |   |   |
//!   o---o---o
//! B |   | \ |
//!   o---o---o <- GOAL
//! ```
//!
//! However, difftastic's graph sometimes has edges with very low cost
//! when it can match up entire subtrees. These edges cover a long
//! distance in the grid despite their low cost.
//!
//! This means that it's really hard to write a good heuristic for
//! A*. On a geographical map, you can use geometric distance (use a
//! ruler) or Manhattan distance (count blocks).
//!
//! There's no good equivalent in the difftastic graph, which has no
//! physical world analogue. I've experimented with A*, but you end up
//! with something buggy and/or reimplementing much of the graph in
//! the heuristic.
//!
//! Dijkstra works well enough in practice, and preprocessing the
//! input to find smaller subsections to diff tends to be much more
//! effective.

use std::cmp::Reverse;
use std::env;

use bumpalo::Bump;
use radix_heap::RadixHeapMap;

use crate::diff::changes::ChangeMap;
use crate::diff::graph::{allocate_if_new, populate_change_map, visit_neighbours, Edge, Vertex};
use crate::hash::DftHashMap;
use crate::parse::syntax::Syntax;

#[derive(Debug)]
pub(crate) struct ExceededGraphLimit {}

/// Return each edge on the shortest route together with the vertex it leaves.
fn shortest_path<'s, 'v>(
    start: Vertex<'s, 'v>,
    vertex_arena: &'v Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<(Edge, &'v Vertex<'s, 'v>)>, ExceededGraphLimit> {
    // We want to visit nodes with the shortest distance first, but
    // RadixHeapMap is a max-heap. Ensure nodes are wrapped with
    // Reverse to flip comparisons.
    let mut heap: RadixHeapMap<Reverse<_>, &'v Vertex<'s, 'v>> = RadixHeapMap::new();

    heap.push(Reverse(0), vertex_arena.alloc(start));

    let mut seen = DftHashMap::default();
    seen.reserve(size_hint);

    let end: &'v Vertex<'s, 'v> = loop {
        match heap.pop() {
            Some((Reverse(distance), current)) => {
                if current.is_end() {
                    break current;
                }

                if current
                    .predecessor
                    .get()
                    .is_some_and(|(best, _)| best < distance)
                {
                    continue;
                }
                visit_neighbours(current, vertex_arena, |edge, candidate| {
                    let next = allocate_if_new(candidate, vertex_arena, &mut seen);
                    let distance_to_next = distance + edge.cost();
                    if next
                        .predecessor
                        .get()
                        .is_none_or(|(best, _)| distance_to_next < best)
                    {
                        next.predecessor.set(Some((distance_to_next, current)));
                        heap.push(Reverse(distance_to_next), next);
                    }
                });

                if seen.len() > graph_limit {
                    info!(
                        "Reached graph limit, arena consumed {}",
                        humansize::format_size(vertex_arena.allocated_bytes(), humansize::BINARY),
                    );
                    return Err(ExceededGraphLimit {});
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    };

    info!(
        "Saw {} vertices (a Vertex is {} bytes), arena consumed {}, with {} vertices left on heap.",
        seen.len(),
        std::mem::size_of::<Vertex>(),
        humansize::format_size(vertex_arena.allocated_bytes(), humansize::BINARY),
        heap.len(),
    );

    let mut current = end;
    let mut route = Vec::new();
    let mut scratch = Bump::new();
    while let Some((_, previous)) = current.predecessor.get() {
        let edge = route_edge(previous, current, &scratch);
        route.push((edge, previous));
        scratch.reset();
        current = previous;
    }
    debug!(
        "Found a path of {} with cost {}.",
        route.len() + 1,
        route.iter().map(|(edge, _)| edge.cost()).sum::<u32>()
    );
    route.reverse();
    Ok(route)
}

// Distinct parent stacks can compare equal as vertices. Recover the first
// cheapest edge to the selected position, replaying only the winning route.
fn route_edge<'s>(from: &Vertex<'s, '_>, to: &Vertex<'s, '_>, arena: &Bump) -> Edge {
    assert_ne!(from, to);
    let mut cheapest: Option<Edge> = None;
    visit_neighbours(from, arena, |edge, next| {
        if &next == to && cheapest.is_none_or(|best| edge.cost() < best.cost()) {
            cheapest = Some(edge);
        }
    });
    cheapest.expect("the predecessor has an edge to its successor")
}

/// What is the total number of AST nodes?
fn node_count(root: Option<&Syntax>) -> u32 {
    let iter = std::iter::successors(root, |node| node.next_sibling());

    iter.map(|node| match node {
        Syntax::List {
            num_descendants, ..
        } => *num_descendants,
        Syntax::Atom { .. } => 1,
    })
    .sum::<u32>()
}

/// How many top-level AST nodes do we have?
fn tree_count(root: Option<&Syntax>) -> u32 {
    std::iter::successors(root, |node| node.next_sibling()).count() as _
}

pub(crate) fn mark_syntax<'a>(
    lhs_syntax: Option<&'a Syntax<'a>>,
    rhs_syntax: Option<&'a Syntax<'a>>,
    change_map: &mut ChangeMap<'a>,
    graph_limit: usize,
) -> Result<(), ExceededGraphLimit> {
    let lhs_node_count = node_count(lhs_syntax) as usize;
    let rhs_node_count = node_count(rhs_syntax) as usize;
    info!(
        "LHS nodes: {} ({} toplevel), RHS nodes: {} ({} toplevel), LHS first: {}, RHS first: {}",
        lhs_node_count,
        tree_count(lhs_syntax),
        rhs_node_count,
        tree_count(rhs_syntax),
        lhs_syntax.map_or_else(|| "None".into(), Syntax::dbg_content),
        rhs_syntax.map_or_else(|| "None".into(), Syntax::dbg_content),
    );

    // When there are a large number of changes, we end up building a
    // graph whose size is roughly quadratic. Use this as a size hint,
    // so we don't spend too much time re-hashing and expanding the
    // seen nodes hashmap.
    //
    // Cap this number to the graph limit, so we don't try to allocate
    // an absurdly large (i.e. greater than physical memory) hashmap
    // when there is a large number of nodes. We'll never visit more
    // than graph_limit nodes.
    let size_hint = std::cmp::min(lhs_node_count * rhs_node_count, graph_limit);

    let start = Vertex::new(lhs_syntax, rhs_syntax);
    let vertex_arena = Bump::new();

    let route = shortest_path(start, &vertex_arena, size_hint, graph_limit)?;

    let print_length = if env::var("DFT_VERBOSE").is_ok() {
        50
    } else {
        5
    };
    debug!(
        "Initial {} items on path: {:#?}",
        print_length,
        route
            .iter()
            .map(|(edge, v)| {
                format!(
                    "{:20} {:20} --- {:3} {:?}",
                    v.lhs_syntax
                        .map_or_else(|| "None".into(), Syntax::dbg_content),
                    v.rhs_syntax
                        .map_or_else(|| "None".into(), Syntax::dbg_content),
                    edge.cost(),
                    edge,
                )
            })
            .take(print_length)
            .collect::<Vec<_>>()
    );

    populate_change_map(&route, change_map);
    Ok(())
}

#[cfg(test)]
mod tests {
    use line_numbers::SingleLineSpan;
    use typed_arena::Arena;

    use super::*;
    use crate::diff::changes::ChangeKind;
    use crate::diff::graph::Edge::*;
    use crate::options::DEFAULT_GRAPH_LIMIT;
    use crate::syntax::{init_all_info, AtomKind};

    fn pos_helper(line: u32) -> Vec<SingleLineSpan> {
        vec![SingleLineSpan {
            line: line.into(),
            start_col: 0,
            end_col: 1,
        }]
    }

    #[test]
    fn route_uses_the_cheapest_edge_to_equivalent_empty_lists() {
        let syntax = Arena::new();
        let list = || Syntax::new_list(&syntax, "(", pos_helper(0), vec![], ")", pos_helper(0));
        let (lhs, rhs) = (list(), list());
        init_all_info(&[lhs], &[rhs]);
        let from = Vertex::new(Some(lhs), Some(rhs));
        let to = Vertex::new(None, None);
        assert_eq!(
            route_edge(&from, &to, &Bump::new()),
            UnchangedNode {
                depth_difference: 0,
                probably_punctuation: false
            },
        );
    }

    #[test]
    fn identical_atoms() {
        let arena = Arena::new();

        let lhs = Syntax::new_atom(&arena, pos_helper(0), "foo".to_owned(), AtomKind::Normal);
        // Same content as LHS.
        let rhs = Syntax::new_atom(&arena, pos_helper(0), "foo".to_owned(), AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let start = Vertex::new(Some(lhs), Some(rhs));
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
        assert_eq!(
            actions,
            vec![UnchangedNode {
                probably_punctuation: false,
                depth_difference: 0
            }]
        );
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
                "foo".to_owned(),
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

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
        assert_eq!(
            actions,
            vec![
                EnterUnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomLHS {},
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
                Syntax::new_atom(&arena, pos_helper(1), "foo".to_owned(), AtomKind::Normal),
                Syntax::new_atom(&arena, pos_helper(2), "foo".to_owned(), AtomKind::Normal),
            ],
            "]",
            pos_helper(3),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
        assert_eq!(
            actions,
            vec![
                EnterUnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomRHS {},
                NovelAtomRHS {},
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
                Syntax::new_atom(&arena, pos_helper(3), "foo".to_owned(), AtomKind::Normal),
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
                Syntax::new_atom(&arena, pos_helper(3), "foo".to_owned(), AtomKind::Normal),
            ],
            "}",
            pos_helper(4),
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
        assert_eq!(
            actions,
            vec![
                EnterNovelDelimiterRHS {},
                EnterNovelDelimiterLHS {},
                UnchangedNode {
                    probably_punctuation: false,
                    depth_difference: 0
                },
                UnchangedNode {
                    probably_punctuation: false,
                    depth_difference: 0
                },
            ],
        );
    }

    #[test]
    fn replace_similar_comment() {
        let arena = Arena::new();

        let lhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown fox".to_owned(),
            AtomKind::Comment,
        )];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown cat".to_owned(),
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
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
            "the quick brown fox".to_owned(),
            AtomKind::Comment,
        )];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "foo bar".to_owned(),
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
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
                "the quick brown fox".to_owned(),
                AtomKind::Comment,
            ),
            Syntax::new_atom(
                &arena,
                pos_helper(2),
                "the quick brown thing".to_owned(),
                AtomKind::Comment,
            ),
        ];

        let rhs = vec![Syntax::new_atom(
            &arena,
            pos_helper(1),
            "the quick brown fox.".to_owned(),
            AtomKind::Comment,
        )];
        init_all_info(&lhs, &rhs);

        let start = Vertex::new(lhs.first().copied(), rhs.first().copied());
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect::<Vec<_>>();
        assert_eq!(
            actions,
            vec![
                ReplacedComment {
                    levenshtein_pct: 95
                },
                NovelAtomLHS {}
            ]
        );
    }

    #[test]
    fn mark_syntax_equal_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo".to_owned(), AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "foo".to_owned(), AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let mut change_map = ChangeMap::default();
        mark_syntax(Some(lhs), Some(rhs), &mut change_map, DEFAULT_GRAPH_LIMIT).unwrap();

        assert_eq!(change_map.get(lhs), Some(ChangeKind::Unchanged(rhs)));
        assert_eq!(change_map.get(rhs), Some(ChangeKind::Unchanged(lhs)));
    }

    #[test]
    fn mark_syntax_different_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo".to_owned(), AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "bar".to_owned(), AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let mut change_map = ChangeMap::default();
        mark_syntax(Some(lhs), Some(rhs), &mut change_map, DEFAULT_GRAPH_LIMIT).unwrap();
        assert_eq!(change_map.get(lhs), Some(ChangeKind::Novel));
        assert_eq!(change_map.get(rhs), Some(ChangeKind::Novel));
    }
}
