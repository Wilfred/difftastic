//! Implements A* search for shortest path, to find an optimal and
//! readable diff between two ASTs.

use std::cmp::Reverse;
use std::env;

use bumpalo::Bump;
use radix_heap::RadixHeapMap;

use crate::diff::changes::ChangeMap;
use crate::diff::graph::{
    populate_change_map, set_neighbours, Edge, Vertex, NOVEL_EDGE_COST,
};
use crate::hash::DftHashMap;
use crate::parse::syntax::{Syntax, SyntaxId};

#[derive(Debug)]
pub(crate) struct ExceededGraphLimit {}

/// The number of atoms and list delimiters in part of a syntax tree.
#[derive(Debug, Clone, Copy)]
struct RemainingCounts {
    /// (atoms, lists) from this node (inclusive) to the end of the
    /// file, in document order.
    from_here: (u32, u32),
    /// (atoms, lists) after this node's subtree, in document order.
    after_subtree: (u32, u32),
}

/// Precomputed node counts for the A* heuristic.
struct Heuristic {
    counts: DftHashMap<SyntaxId, RemainingCounts>,
}

/// Store the counts for `node` and everything in its subtree, where
/// `after` is the counts for everything after `node`'s subtree in
/// document order. Returns the counts from `node` inclusive.
fn set_counts(
    node: &Syntax,
    after: (u32, u32),
    counts: &mut DftHashMap<SyntaxId, RemainingCounts>,
) -> (u32, u32) {
    let mut from_here = after;
    match node {
        Syntax::List { children, .. } => {
            for child in children.iter().rev() {
                from_here = set_counts(child, from_here, counts);
            }
            from_here.1 += 1;
        }
        Syntax::Atom { .. } => {
            from_here.0 += 1;
        }
    }

    counts.insert(
        node.id(),
        RemainingCounts {
            from_here,
            after_subtree: after,
        },
    );
    from_here
}

impl Heuristic {
    fn new<'a>(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) -> Self {
        let mut counts = DftHashMap::default();

        for root in [lhs_syntax, rhs_syntax] {
            let top_level: Vec<&Syntax> =
                std::iter::successors(root, |node| node.next_sibling()).collect();

            let mut after = (0, 0);
            for node in top_level.iter().rev() {
                after = set_counts(node, after, &mut counts);
            }
        }

        Self { counts }
    }

    /// The (atoms, lists) still to be consumed on one side of the
    /// diff, where `syntax` is the next unmatched node on that side
    /// and `unpopped_delimiter` is the deepest entered-but-not-exited
    /// delimiter on that side.
    fn side_remaining(
        &self,
        syntax: Option<&Syntax>,
        unpopped_delimiter: Option<&Syntax>,
    ) -> (u32, u32) {
        if let Some(node) = syntax {
            self.counts[&node.id()].from_here
        } else if let Some(delimiter) = unpopped_delimiter {
            self.counts[&delimiter.id()].after_subtree
        } else {
            (0, 0)
        }
    }

    /// A lower bound on the cost of the route from `v` to the end
    /// vertex.
    ///
    /// Every edge consumes the same number of atoms (and the same
    /// number of list delimiters) on both sides, except the novel
    /// edges: NovelAtomLHS/NovelAtomRHS change the difference in
    /// remaining atom counts by exactly one, and
    /// EnterNovelDelimiterLHS/EnterNovelDelimiterRHS change the
    /// difference in remaining delimiter counts by exactly one. Both
    /// differences are zero at the end vertex, so any route from `v`
    /// to the end contains at least one novel edge (each costing
    /// NOVEL_EDGE_COST) per unit of difference.
    ///
    /// Since each edge changes this estimate by no more than its own
    /// cost, the heuristic is consistent: the f-values popped from
    /// the priority queue never decrease (which RadixHeapMap
    /// requires), and the first route found to the end vertex is
    /// optimal.
    fn estimate(&self, v: &Vertex) -> u32 {
        let (lhs_atoms, lhs_delims) = self.side_remaining(
            v.lhs_syntax,
            if v.lhs_syntax.is_none() {
                v.lhs_unpopped_delimiter()
            } else {
                None
            },
        );
        let (rhs_atoms, rhs_delims) = self.side_remaining(
            v.rhs_syntax,
            if v.rhs_syntax.is_none() {
                v.rhs_unpopped_delimiter()
            } else {
                None
            },
        );

        NOVEL_EDGE_COST * (lhs_atoms.abs_diff(rhs_atoms) + lhs_delims.abs_diff(rhs_delims))
    }
}

/// Return the shortest route from `start` to the end vertex.
fn shortest_vertex_path<'s, 'v>(
    start: &'v Vertex<'s, 'v>,
    vertex_arena: &'v Bump,
    heuristic: &Heuristic,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<&'v Vertex<'s, 'v>>, ExceededGraphLimit> {
    // We want to visit nodes with the smallest estimated total route
    // cost first, but RadixHeapMap is a max-heap. Ensure nodes are
    // wrapped with Reverse to flip comparisons.
    //
    // The heap keys are the A* f-values (distance from the start
    // plus the heuristic estimate to the end), and we store the
    // distance from the start alongside each vertex.
    let mut heap: RadixHeapMap<Reverse<_>, (u32, &'v Vertex<'s, 'v>)> = RadixHeapMap::new();

    heap.push(Reverse(heuristic.estimate(start)), (0, start));

    let mut seen = DftHashMap::default();
    seen.reserve(size_hint);

    let end: &'v Vertex<'s, 'v> = loop {
        match heap.pop() {
            Some((Reverse(_), (distance, current))) => {
                if current.is_end() {
                    break current;
                }

                set_neighbours(current, vertex_arena, &mut seen);
                for neighbour in *current.neighbours.borrow().as_ref().unwrap() {
                    let (edge, next) = neighbour;
                    let distance_to_next = distance + edge.cost();

                    let found_shorter_route = match next.predecessor.get() {
                        Some((prev_shortest, _)) => distance_to_next < prev_shortest,
                        None => true,
                    };

                    if found_shorter_route {
                        next.predecessor.replace(Some((distance_to_next, current)));
                        heap.push(
                            Reverse(distance_to_next + heuristic.estimate(next)),
                            (distance_to_next, next),
                        );
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
        "Saw {} vertices (a Vertex is {} bytes), arena consumed {}, with {} vertices left on heap.",
        seen.len(),
        std::mem::size_of::<Vertex>(),
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
    let heuristic = Heuristic::new(start.lhs_syntax, start.rhs_syntax);

    let start: &'v Vertex<'s, 'v> = vertex_arena.alloc(start);
    let vertex_path = shortest_vertex_path(start, vertex_arena, &heuristic, size_hint, graph_limit)?;
    Ok(shortest_path_with_edges(&vertex_path))
}

fn edge_between<'s, 'v>(before: &Vertex<'s, 'v>, after: &Vertex<'s, 'v>) -> Edge {
    assert_ne!(before, after);

    let mut shortest_edge: Option<Edge> = None;
    if let Some(neighbours) = &*before.neighbours.borrow() {
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
        "LHS nodes: {} ({} toplevel), RHS nodes: {} ({} toplevel)",
        lhs_node_count,
        tree_count(lhs_syntax),
        rhs_node_count,
        tree_count(rhs_syntax),
    );

    // When there are a large number of changes, we end up building a
    // graph whose size is roughly quadratic. Use this as a size hint,
    // so we don't spend too much time re-hashing and expanding the
    // predecessors hashmap.
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
