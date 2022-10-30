//! Implements Dijkstra's algorithm for shortest path, to find an
//! optimal and readable diff between two ASTs.

use std::{cmp::Reverse, env};

use crate::{
    diff::changes::ChangeMap,
    diff::graph::{
        get_set_neighbours, populate_change_map, Direction, Direction::*, Edge, SyntaxInTree,
        Vertex,
    },
    parse::syntax::Syntax,
};
use bumpalo::Bump;
use itertools::Itertools;
use radix_heap::RadixHeapMap;
use rustc_hash::FxHashMap;

fn predecessor<'a, 'b>(
    vertex: &'b Vertex<'a, 'b>,
    direction: Direction,
) -> &'b std::cell::Cell<Option<(u64, &'b Vertex<'a, 'b>)>> {
    match direction {
        Forwards => &vertex.forward_predecessor,
        Backwards => &vertex.backward_predecessor,
    }
}

#[derive(Debug)]
pub struct ExceededGraphLimit {}

/// Return the shortest route from `start` to the end vertex.
fn shortest_vertex_path<'a, 'b>(
    start: &'b Vertex<'a, 'b>,
    end: &'b Vertex<'a, 'b>,
    lhs_nodes: &Vec<SyntaxInTree<'a>>,
    rhs_nodes: &Vec<SyntaxInTree<'a>>,
    vertex_arena: &'b Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<&'b Vertex<'a, 'b>>, ExceededGraphLimit> {
    // We want to visit nodes with the shortest distance first, but
    // RadixHeapMap is a max-heap. Ensure nodes are wrapped with
    // Reverse to flip comparisons.
    let mut heap: RadixHeapMap<Reverse<_>, (&'b Vertex<'a, 'b>, Direction)> = RadixHeapMap::new();

    start.seen.set((true, false));
    end.seen.set((false, true));
    heap.push(Reverse(0), (end, Backwards));
    heap.push(Reverse(0), (start, Forwards));

    let mut seen = FxHashMap::default();
    seen.reserve(size_hint);

    let mut min_cost_forwards = 0;
    let mut min_cost_backwards = 0;
    let mut best_meeting_cost = u64::MAX;
    let mut best_meeting_point: Option<&'b Vertex<'a, 'b>> = None;

    while let Some((Reverse(distance), (current, direction))) = heap.pop() {
        match direction {
            Forwards => {
                min_cost_forwards = distance;
                current.seen.set((true, current.seen.get().1));
            }
            Backwards => {
                min_cost_backwards = distance;
                current.seen.set((current.seen.get().0, true));
            }
        }
        if min_cost_forwards + min_cost_backwards >= best_meeting_cost {
            // We can no longer find a meeting point that is better
            // than the one we already found, so the search is over.
            break;
        }

        // If this is an end node, don't bother looking for neighbors.
        // This can happen in very small graphs (e.g. one token on both sides).
        let end_node = match direction {
            Forwards => current.lhs_pos == end.lhs_pos && current.rhs_pos == end.rhs_pos,
            Backwards => current.lhs_pos == 0 && current.rhs_pos == 0,
        };
        if end_node {
            let cost = predecessor(current, direction).get().unwrap().0;
            if cost < best_meeting_cost {
                best_meeting_cost = cost;
                best_meeting_point = Some(current);
            }
            continue;
        }

        for neighbour in &get_set_neighbours(
            current,
            vertex_arena,
            lhs_nodes,
            rhs_nodes,
            &mut seen,
            direction,
        ) {
            let (edge, next) = neighbour;
            let distance_to_next = distance + edge.cost();

            let found_shorter_route = match predecessor(next, direction).get() {
                Some((prev_shortest, _)) => distance_to_next < prev_shortest,
                None => true,
            };

            if found_shorter_route {
                predecessor(next, direction).replace(Some((distance_to_next, current)));
                heap.push(Reverse(distance_to_next), (next, direction));

                // See if this node is a meeting point between the forward and backwards searches,
                // and if so, whether it is a new best meeting point.
                if let (Some((forward_cost, _)), Some((backward_cost, _))) = (
                    next.forward_predecessor.get(),
                    next.backward_predecessor.get(),
                ) {
                    if (direction == Forwards && next.seen.get().1)
                        || (direction == Backwards && next.seen.get().0)
                    {
                        let meeting_cost = forward_cost + backward_cost;
                        if meeting_cost < best_meeting_cost {
                            best_meeting_cost = meeting_cost;
                            best_meeting_point = Some(next);
                        }
                    }
                }
            }
        }

        if seen.len() > graph_limit {
            if best_meeting_point.is_some() {
                break;
            } else {
                return Err(ExceededGraphLimit {});
            }
        }
    }

    debug!(
        "Saw {} vertices (a Vertex is {} bytes), with {} left on heap.",
        seen.len(),
        std::mem::size_of::<Vertex>(),
        heap.len(),
    );

    let mut vertex_route: Vec<&'b Vertex<'a, 'b>> = vec![];

    // Backtrack to find the path from meet -> start.
    let mut current = Some((0, best_meeting_point.unwrap()));
    while let Some((_, node)) = current {
        vertex_route.push(node);
        current = node.forward_predecessor.get();
    }

    // Reverse it, so that we have start, ..., meet, then chop off meet.
    vertex_route.reverse();
    vertex_route.pop();

    // Find the path meet -> end, and append it, so that we have start ... meet ... end.
    // Also make sure we have forward edges for all of these nodes, as the later steps
    // expect to use them to find the actual diff.
    current = Some((0, best_meeting_point.unwrap()));
    while let Some((_, node)) = current {
        current = node.backward_predecessor.get();
        if current.is_some() {
            get_set_neighbours(
                node,
                vertex_arena,
                lhs_nodes,
                rhs_nodes,
                &mut seen,
                Forwards,
            );
        }
        vertex_route.push(node);
    }

    Ok(vertex_route)
}

fn shortest_path_with_edges<'a, 'b>(
    route: &[&'b Vertex<'a, 'b>],
) -> Vec<(Edge, &'b Vertex<'a, 'b>)> {
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
fn shortest_path<'a, 'b>(
    start: Vertex<'a, 'b>,
    end: Vertex<'a, 'b>,
    lhs_nodes: &Vec<SyntaxInTree<'a>>,
    rhs_nodes: &Vec<SyntaxInTree<'a>>,
    vertex_arena: &'b Bump,
    size_hint: usize,
    graph_limit: usize,
) -> Result<Vec<(Edge, &'b Vertex<'a, 'b>)>, ExceededGraphLimit> {
    let start: &'b Vertex<'a, 'b> = vertex_arena.alloc(start.clone());
    let end: &'b Vertex<'a, 'b> = vertex_arena.alloc(end.clone());
    let vertex_path = shortest_vertex_path(
        start,
        end,
        lhs_nodes,
        rhs_nodes,
        vertex_arena,
        size_hint,
        graph_limit,
    )?;
    Ok(shortest_path_with_edges(&vertex_path))
}

fn shortest_edge<'a, 'b>(
    edges: &Option<Vec<(Edge, &'b Vertex<'a, 'b>)>>,
    target: &Vertex<'a, 'b>,
) -> Option<Edge> {
    let mut shortest_edge: Option<Edge> = None;
    if let Some(neighbours) = edges {
        for neighbour in neighbours {
            let (edge, next) = *neighbour;
            // If there are multiple edges that can take us to `next`,
            // prefer the shortest.
            if *next == *target {
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
    return shortest_edge;
}

fn edge_between<'a, 'b>(before: &Vertex<'a, 'b>, after: &Vertex<'a, 'b>) -> Edge {
    assert_ne!(before, after);

    if let Some(edge) = shortest_edge(&*before.forward_neighbours.borrow(), after) {
        return edge;
    }

    // Nominally, the forward and backward edge set should be identical.
    // However, due to our conflation of different Vertex objects (see the implementation
    // of PartialEq on Vertex), this object does not always hold in practice, and we can
    // have a path that contains an backwards edge from B to A that does not actually
    // match an edge from A to B. Thus, in rare cases, we will also need to look at
    // backward edges to find the one we're looking for.
    if let Some(edge) = shortest_edge(&*after.backward_neighbours.borrow(), before) {
        return edge;
    }

    panic!(
        "Expected a route between the two vertices {:#?} and {:#?}",
        before, after
    );
}

/// What is the total number of AST nodes?
fn node_count(root: Option<&Syntax>) -> u32 {
    let mut node = root;
    let mut count = 0;
    while let Some(current_node) = node {
        let current_count = match current_node {
            Syntax::List {
                num_descendants, ..
            } => *num_descendants,
            Syntax::Atom { .. } => 1,
        };
        count += current_count;

        node = current_node.next_sibling();
    }

    count
}

/// Create SyntaxInTree nodes for the given list of Syntax objects and all their
/// children, recursively. Vertex nodes will contain indexes to this array.
pub fn flatten_syntax<'a>(
    syntaxes: &'a Vec<&'a Syntax<'a>>,
    nodes: &mut Vec<SyntaxInTree<'a>>,
) -> (u32, u32) {
    let start_idx = nodes.len();
    for (i, syntax) in syntaxes.iter().enumerate() {
        nodes.push(SyntaxInTree {
            syntax: Some(syntax),
            next_index: (start_idx + i + 1) as u32,
            prev_index: if i == 0 {
                u32::MAX
            } else {
                (start_idx + i - 1) as u32
            },
            first_child: u32::MAX,
            last_child: u32::MAX,
        });
    }
    nodes.push(SyntaxInTree {
        syntax: None,
        next_index: u32::MAX,
        prev_index: if syntaxes.len() == 0 {
            u32::MAX
        } else {
            (start_idx + syntaxes.len() - 1) as u32
        },
        first_child: u32::MAX,
        last_child: u32::MAX,
    });
    for (i, syntax) in syntaxes.iter().enumerate() {
        if let Syntax::List { children, .. } = syntax {
            let (first_child, last_child) = flatten_syntax(children, nodes);
            nodes[start_idx + i].first_child = first_child;
            nodes[start_idx + i].last_child = last_child;
        }
    }
    return (start_idx as u32, (start_idx + syntaxes.len()) as u32);
}

pub fn mark_syntax<'a>(
    lhs: &'a Vec<&'a Syntax<'a>>,
    rhs: &'a Vec<&'a Syntax<'a>>,
    change_map: &mut ChangeMap<'a>,
    graph_limit: usize,
) -> Result<(), ExceededGraphLimit> {
    let lhs_node_count = node_count(lhs.get(0).and_then(|x| Some(*x))) as usize;
    let rhs_node_count = node_count(rhs.get(0).and_then(|x| Some(*x))) as usize;
    info!(
        "LHS nodes: {} ({} toplevel), RHS nodes: {} ({} toplevel)",
        lhs_node_count,
        lhs.len(),
        rhs_node_count,
        rhs.len(),
    );

    // When there are a large number of changes, we end up building a
    // graph whose size is roughly quadratic. Use this as a size hint,
    // so we don't spend too much time re-hashing and expanding the
    // predecessors hashmap.
    let size_hint = lhs_node_count * rhs_node_count;

    let mut lhs_nodes: Vec<SyntaxInTree<'a>> = Vec::new();
    let mut rhs_nodes: Vec<SyntaxInTree<'a>> = Vec::new();
    let (lhs_start_idx, lhs_end_idx) = flatten_syntax(&lhs, &mut lhs_nodes);
    let (rhs_start_idx, rhs_end_idx) = flatten_syntax(&rhs, &mut rhs_nodes);

    let start = Vertex::new(lhs_start_idx, rhs_start_idx);
    let end = Vertex::new(lhs_end_idx, rhs_end_idx);
    let vertex_arena = Bump::new();

    let route = shortest_path(
        start,
        end,
        &lhs_nodes,
        &rhs_nodes,
        &vertex_arena,
        size_hint,
        graph_limit,
    )?;

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
            .map(|x| {
                format!(
                    "{:20} {:20} --- {:3} {:?}",
                    x.1.lhs_syntax(&lhs_nodes)
                        .map_or_else(|| "None".into(), Syntax::dbg_content),
                    x.1.rhs_syntax(&rhs_nodes)
                        .map_or_else(|| "None".into(), Syntax::dbg_content),
                    x.0.cost(),
                    x.0,
                )
            })
            .take(print_length)
            .collect_vec()
    );

    populate_change_map(&route, change_map, &lhs_nodes, &rhs_nodes);
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{
        diff::changes::ChangeKind,
        diff::graph::Edge::*,
        options::DEFAULT_GRAPH_LIMIT,
        positions::SingleLineSpan,
        syntax::{init_all_info, AtomKind},
    };

    use itertools::Itertools;
    use typed_arena::Arena;

    fn pos_helper(line: u32) -> Vec<SingleLineSpan> {
        vec![SingleLineSpan {
            line: line.into(),
            start_col: 0,
            end_col: 1,
        }]
    }

    fn col_helper(line: u32, col: u32) -> Vec<SingleLineSpan> {
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                EnterUnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomLHS {
                    contiguous: false,
                    probably_punctuation: false,
                },
                ExitDelimiterBoth,
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                EnterUnchangedDelimiter {
                    depth_difference: 0
                },
                NovelAtomRHS {
                    contiguous: false,
                    probably_punctuation: false
                },
                NovelAtomRHS {
                    contiguous: false,
                    probably_punctuation: false
                },
                ExitDelimiterBoth,
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                EnterNovelDelimiterRHS { contiguous: false },
                EnterNovelDelimiterLHS { contiguous: false },
                UnchangedNode {
                    depth_difference: 0
                },
                UnchangedNode {
                    depth_difference: 0
                },
                ExitDelimiterRHS,
                ExitDelimiterLHS,
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                UnchangedNode {
                    depth_difference: 0
                },
                NovelAtomLHS {
                    contiguous: false,
                    probably_punctuation: false
                },
                NovelAtomLHS {
                    contiguous: true,
                    probably_punctuation: false
                },
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                EnterNovelDelimiterLHS { contiguous: false },
                NovelAtomLHS {
                    contiguous: true,
                    probably_punctuation: false
                },
                ExitDelimiterLHS,
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                EnterNovelDelimiterLHS { contiguous: false },
                NovelAtomLHS {
                    contiguous: true,
                    probably_punctuation: false
                },
                ExitDelimiterLHS,
                NovelAtomLHS {
                    contiguous: true,
                    probably_punctuation: true
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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

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
        let vertex_arena = Bump::new();
        let route = shortest_path(start, &vertex_arena, 0, DEFAULT_GRAPH_LIMIT).unwrap();

        let actions = route.iter().map(|(action, _)| *action).collect_vec();
        assert_eq!(
            actions,
            vec![
                ReplacedComment {
                    levenshtein_pct: 95
                },
                NovelAtomLHS {
                    contiguous: false,
                    probably_punctuation: false
                }
            ]
        );
    }

    #[test]
    fn mark_syntax_equal_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let mut change_map = ChangeMap::default();
        mark_syntax(Some(lhs), Some(rhs), &mut change_map, DEFAULT_GRAPH_LIMIT).unwrap();

        assert_eq!(change_map.get(lhs), Some(ChangeKind::Unchanged(rhs)));
        assert_eq!(change_map.get(rhs), Some(ChangeKind::Unchanged(lhs)));
    }

    #[test]
    fn mark_syntax_different_atoms() {
        let arena = Arena::new();
        let lhs = Syntax::new_atom(&arena, pos_helper(1), "foo", AtomKind::Normal);
        let rhs = Syntax::new_atom(&arena, pos_helper(1), "bar", AtomKind::Normal);
        init_all_info(&[lhs], &[rhs]);

        let mut change_map = ChangeMap::default();
        mark_syntax(Some(lhs), Some(rhs), &mut change_map, DEFAULT_GRAPH_LIMIT).unwrap();
        assert_eq!(change_map.get(lhs), Some(ChangeKind::Novel));
        assert_eq!(change_map.get(rhs), Some(ChangeKind::Novel));
    }
}
