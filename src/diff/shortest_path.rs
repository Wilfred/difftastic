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
use crate::diff::graph::{
    allocate_if_new, compute_neighbours, compute_predecessors, populate_change_map, vertex_count,
    BackwardContext, Edge, Vertex,
};
use crate::hash::DftHashMap;
use crate::parse::syntax::Syntax;

#[derive(Debug)]
pub(crate) struct ExceededGraphLimit {}

/// Return the shortest route from `start` to the end vertex.
fn shortest_vertex_path<'s, 'v>(
    start: Vertex<'s, 'v>,
    ctx: BackwardContext<'s>,
    vertex_arena: &'v Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<&'v Vertex<'s, 'v>>, ExceededGraphLimit> {
    // We want to visit nodes with the shortest distance first, but
    // RadixHeapMap is a max-heap. Ensure nodes are wrapped with
    // Reverse to flip comparisons.
    let mut heap: RadixHeapMap<Reverse<_>, &'v Vertex<'s, 'v>> = RadixHeapMap::new();

    let mut seen = DftHashMap::default();
    seen.reserve(size_hint);

    let start = allocate_if_new(start, vertex_arena, &mut seen);
    heap.push(Reverse(0), start);

    let mut settled: usize = 0;

    let end: &'v Vertex<'s, 'v> = loop {
        match heap.pop() {
            Some((Reverse(distance), current)) => {
                if current.is_end() {
                    break current;
                }
                settled += 1;

                let neighbours = *current
                    .neighbours
                    .get_or_init(|| compute_neighbours(current, vertex_arena, &mut seen));

                for neighbour in neighbours {
                    let (edge, next) = neighbour;
                    let distance_to_next = distance + edge.cost();

                    let found_shorter_route = match next.predecessor.get() {
                        Some((prev_shortest, _)) => distance_to_next < prev_shortest,
                        None => true,
                    };

                    if found_shorter_route {
                        next.predecessor.replace(Some((distance_to_next, current)));
                        heap.push(Reverse(distance_to_next), next);
                    }
                }

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
        "Saw {} vertices ({} keys, a Vertex is {} bytes), settled {} forward, arena consumed {}, with {} vertices left on heap.",
        vertex_count(&seen),
        seen.len(),
        std::mem::size_of::<Vertex>(),
        settled,
        humansize::format_size(vertex_arena.allocated_bytes(), humansize::BINARY),
        heap.len(),
    );

    let mut current = Some((0, end));
    let mut vertex_route: Vec<&'v Vertex<'s, 'v>> = vec![];
    while let Some((_, node)) = current {
        vertex_route.push(node);
        current = node.predecessor.get();
    }

    vertex_route.reverse();

    // Debugging aid: check that every edge on the route is found by
    // `compute_predecessors`.
    if env::var("DFT_CHECK_PREDECESSORS").is_ok() {
        for pair in vertex_route.windows(2) {
            let (before, after) = (pair[0], pair[1]);
            let predecessors = compute_predecessors(after, ctx, vertex_arena, &mut seen);
            if !predecessors.iter().any(|(_, v)| std::ptr::eq(*v, before)) {
                eprintln!(
                    "MISSING PREDECESSOR: edge {:?}\n  before: {}\n  after:  {}\n  found:",
                    edge_between(before, after),
                    before.dbg_summary(),
                    after.dbg_summary(),
                );
                for (edge, v) in predecessors {
                    eprintln!("    {:?} {}", edge, v.dbg_summary());
                }
            }
        }
    }

    Ok(vertex_route)
}

/// The shortest distance from the start vertex to `v` found so far.
fn forward_distance<'s, 'v>(v: &'v Vertex<'s, 'v>, start: &'v Vertex<'s, 'v>) -> Option<u32> {
    if std::ptr::eq(v, start) {
        Some(0)
    } else {
        v.predecessor.get().map(|(distance, _)| distance)
    }
}

/// The shortest distance from `v` to the end vertex found so far.
fn backward_distance<'s, 'v>(v: &'v Vertex<'s, 'v>) -> Option<u32> {
    if v.is_end() {
        Some(0)
    } else {
        v.successor.get().map(|(distance, _)| distance)
    }
}

/// Return the shortest route from `start` to the end vertex, using
/// bidirectional Dijkstra: one search from the start vertex following
/// edges forwards, and one from the end vertex following edges
/// backwards. We stop when the two searches have met.
fn bidirectional_vertex_path<'s, 'v>(
    start: Vertex<'s, 'v>,
    ctx: BackwardContext<'s>,
    vertex_arena: &'v Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<&'v Vertex<'s, 'v>>, ExceededGraphLimit> {
    let mut seen = DftHashMap::default();
    seen.reserve(size_hint);

    // The backward search may reach the start vertex, so make sure
    // it's in `seen` and any equal vertex gets the same allocation.
    let start = allocate_if_new(start, vertex_arena, &mut seen);

    let mut heap_f: RadixHeapMap<Reverse<u32>, &'v Vertex<'s, 'v>> = RadixHeapMap::new();
    let mut heap_b: RadixHeapMap<Reverse<u32>, &'v Vertex<'s, 'v>> = RadixHeapMap::new();
    heap_f.push(Reverse(0), start);

    // The forward search records different parent IDs at the top
    // level depending on the route taken, so there are several
    // possible end vertices. Start the backward search from all of
    // them.
    for (lhs_parent_id, rhs_parent_id) in ctx.end_parent_ids() {
        let end = allocate_if_new(
            Vertex::new_end(lhs_parent_id, rhs_parent_id),
            vertex_arena,
            &mut seen,
        );
        assert!(end.is_end());
        heap_b.push(Reverse(0), end);
    }

    // RadixHeapMap has no peek, so hold the smallest entry of each
    // heap here until we expand it.
    let mut pending_f: Option<(u32, &'v Vertex<'s, 'v>)> = None;
    let mut pending_b: Option<(u32, &'v Vertex<'s, 'v>)> = None;

    // The cost of the best complete route found so far, and the
    // vertex where the two searches met on that route.
    let mut best_cost = u32::MAX;
    let mut meeting: Option<&'v Vertex<'s, 'v>> = None;

    let mut settled_f: usize = 0;
    let mut settled_b: usize = 0;

    loop {
        if pending_f.is_none() {
            pending_f = heap_f.pop().map(|(Reverse(d), v)| (d, v));
        }
        if pending_b.is_none() {
            pending_b = heap_b.pop().map(|(Reverse(d), v)| (d, v));
        }

        let bound_f = pending_f.map_or(u64::from(u32::MAX), |(d, _)| u64::from(d));
        let bound_b = pending_b.map_or(u64::from(u32::MAX), |(d, _)| u64::from(d));
        if best_cost != u32::MAX && bound_f + bound_b >= u64::from(best_cost) {
            break;
        }

        let expand_forward = match (pending_f, pending_b) {
            (Some((d_f, _)), Some((d_b, _))) => d_f <= d_b,
            (Some(_), None) => true,
            (None, Some(_)) => false,
            (None, None) => panic!("Ran out of graph nodes before reaching end"),
        };

        if expand_forward {
            let (distance, current) = pending_f.take().unwrap();
            if forward_distance(current, start) != Some(distance) || current.is_end() {
                continue;
            }
            settled_f += 1;

            let neighbours = *current
                .neighbours
                .get_or_init(|| compute_neighbours(current, vertex_arena, &mut seen));

            for (edge, next) in neighbours {
                let distance_to_next = distance + edge.cost();
                let prev_distance = forward_distance(next, start);
                let found_shorter_route = prev_distance.map_or(true, |d| distance_to_next < d);

                if found_shorter_route {
                    next.predecessor.replace(Some((distance_to_next, current)));
                    heap_f.push(Reverse(distance_to_next), next);
                }

                if let Some(distance_to_end) = backward_distance(next) {
                    let total = std::cmp::min(distance_to_next, prev_distance.unwrap_or(u32::MAX))
                        + distance_to_end;
                    if total < best_cost {
                        best_cost = total;
                        meeting = Some(next);
                    }
                }
            }
        } else {
            let (distance, current) = pending_b.take().unwrap();
            if backward_distance(current) != Some(distance) || std::ptr::eq(current, start) {
                continue;
            }
            settled_b += 1;

            let predecessors = *current
                .predecessors
                .get_or_init(|| compute_predecessors(current, ctx, vertex_arena, &mut seen));

            for (edge, prev) in predecessors {
                let distance_to_prev = distance + edge.cost();
                let prev_distance = backward_distance(prev);
                let found_shorter_route = prev_distance.map_or(true, |d| distance_to_prev < d);

                if found_shorter_route {
                    prev.successor.replace(Some((distance_to_prev, current)));
                    heap_b.push(Reverse(distance_to_prev), prev);
                }

                if let Some(distance_from_start) = forward_distance(prev, start) {
                    let total = std::cmp::min(distance_to_prev, prev_distance.unwrap_or(u32::MAX))
                        + distance_from_start;
                    if total < best_cost {
                        best_cost = total;
                        meeting = Some(prev);
                    }
                }
            }
        }

        if seen.len() > graph_limit {
            info!(
                "Reached graph limit, arena consumed {}",
                humansize::format_size(vertex_arena.allocated_bytes(), humansize::BINARY),
            );
            return Err(ExceededGraphLimit {});
        }
    }

    info!(
        "Bidirectional: saw {} vertices ({} keys, a Vertex is {} bytes), settled {} forward and {} backward, arena consumed {}, with {} + {} vertices left on heaps, cost {}.",
        vertex_count(&seen),
        seen.len(),
        std::mem::size_of::<Vertex>(),
        settled_f,
        settled_b,
        humansize::format_size(vertex_arena.allocated_bytes(), humansize::BINARY),
        heap_f.len(),
        heap_b.len(),
        best_cost,
    );

    let meeting = meeting.expect("Bidirectional search should find a route");

    let mut vertex_route: Vec<&'v Vertex<'s, 'v>> = vec![];
    let mut current = Some(meeting);
    while let Some(node) = current {
        vertex_route.push(node);
        current = node.predecessor.get().map(|(_, prev)| prev);
    }
    vertex_route.reverse();

    let mut current = meeting.successor.get().map(|(_, next)| next);
    while let Some(node) = current {
        vertex_route.push(node);
        current = node.successor.get().map(|(_, next)| next);
    }

    Ok(vertex_route)
}

fn shortest_path_with_edges<'s, 'v>(
    route: &[&'v Vertex<'s, 'v>],
) -> Vec<(Edge, &'v Vertex<'s, 'v>)> {
    let mut prev = route.first().expect("Expected non-empty route");

    let mut cost = 0;
    let mut res = vec![];

    for vertex in route.iter().skip(1) {
        let edge = edge_between(prev, vertex);
        res.push((edge, *prev));
        cost += edge.cost();

        prev = vertex;
    }
    debug!("Found a path of {} with cost {}.", route.len(), cost);

    res
}

/// Return the shortest route from the `start` to the end vertex.
///
/// The vec returned does not return the very last vertex. This is
/// necessary because a route of N vertices only has N-1 edges.
fn shortest_path<'s, 'v>(
    start: Vertex<'s, 'v>,
    vertex_arena: &'v Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<(Edge, &'v Vertex<'s, 'v>)>, ExceededGraphLimit> {
    let ctx = BackwardContext::new(start.lhs_syntax, start.rhs_syntax);
    let vertex_path = if env::var("DFT_BIDIRECTIONAL").is_ok() {
        bidirectional_vertex_path(start, ctx, vertex_arena, size_hint, graph_limit)?
    } else {
        shortest_vertex_path(start, ctx, vertex_arena, size_hint, graph_limit)?
    };
    Ok(shortest_path_with_edges(&vertex_path))
}

fn edge_between<'s, 'v>(before: &Vertex<'s, 'v>, after: &Vertex<'s, 'v>) -> Edge {
    assert_ne!(before, after);

    let mut shortest_edge: Option<Edge> = None;
    if let Some(neighbours) = before.neighbours.get() {
        for neighbour in *neighbours {
            let (edge, next) = *neighbour;
            // If there are multiple edges that can take us to `next`,
            // prefer the shortest.
            if *next == *after {
                let is_shorter = match shortest_edge {
                    Some(prev_edge) => edge.cost() < prev_edge.cost(),
                    None => true,
                };

                if is_shorter {
                    shortest_edge = Some(edge);
                }
            }
        }
    }

    if let Some(edge) = shortest_edge {
        return edge;
    }

    panic!(
        "Expected a route between the two vertices {:#?} and {:#?}",
        before, after
    );
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
                NovelAtomLHS {
                    probably_punctuation: false
                },
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
                NovelAtomRHS {
                    probably_punctuation: false
                },
                NovelAtomRHS {
                    probably_punctuation: false
                },
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
                EnterNovelDelimiterBoth {},
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
                NovelAtomLHS {
                    probably_punctuation: false
                }
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
