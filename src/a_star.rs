use crate::graph::{neighbours, Edge, Edge::*, Vertex};
use rustc_hash::FxHashMap;
use std::{
    cmp::{max, min, Ordering, Reverse},
    collections::BinaryHeap,
};

#[derive(Debug)]
struct OrdVertex<'a> {
    /// The distance from the start vertex to this vertex.
    distance: u64,
    /// The vertex we have just reached.
    current: Vertex<'a>,
    /// Our best guess as to the total distance from start to end if
    /// we go through this vertex.
    total_estimate: u64,
}

impl<'a> PartialOrd for OrdVertex<'a> {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

impl<'a> Ord for OrdVertex<'a> {
    fn cmp(&self, other: &Self) -> Ordering {
        self.total_estimate.cmp(&other.total_estimate)
    }
}

impl<'a> PartialEq for OrdVertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.total_estimate == other.total_estimate
    }
}
impl<'a> Eq for OrdVertex<'a> {}

fn estimated_distance_remaining(v: &Vertex) -> u64 {
    let lhs_num_after = match v.lhs_syntax {
        Some(lhs_syntax) => lhs_syntax.num_after() as u64,
        None => 0,
    };
    let rhs_num_after = match v.rhs_syntax {
        Some(rhs_syntax) => rhs_syntax.num_after() as u64,
        None => 0,
    };
    // Best case scenario: we match up all of these.
    let max_common = min(lhs_num_after, rhs_num_after);
    // For the remaining, they must be novel in some form.
    let min_novel = max(lhs_num_after, rhs_num_after) - max_common;

    max_common
        * UnchangedNode {
            depth_difference: 0,
        }
        .cost()
        + min_novel * NovelAtomLHS { contiguous: true }.cost()
}

pub fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    // We want to visit nodes with the shortest distance first, but
    // BinaryHeap is a max-heap. Ensure nodes are wrapped with Reverse
    // to flip comparisons.
    let mut heap: BinaryHeap<Reverse<_>> = BinaryHeap::new();

    let total_estimate = estimated_distance_remaining(&start);
    heap.push(Reverse(OrdVertex {
        distance: 0,
        current: start,
        total_estimate,
    }));

    // TODO: this grows very big. Consider using IDA* to reduce memory
    // usage.
    let mut predecessors: FxHashMap<Vertex, (u64, Vertex, Edge)> = FxHashMap::default();

    let end;
    loop {
        match heap.pop() {
            Some(Reverse(OrdVertex {
                distance,
                current,
                total_estimate: _,
            })) => {
                if current.is_end() {
                    end = current;
                    break;
                }

                for (edge, next) in neighbours(&current) {
                    let distance_to_next = distance + edge.cost();
                    let found_shorter_route = match predecessors.get(&next) {
                        Some((prev_shortest, _, _)) => distance_to_next < *prev_shortest,
                        _ => true,
                    };

                    if found_shorter_route {
                        predecessors
                            .insert(next.clone(), (distance_to_next, current.clone(), edge));

                        let total_estimate = distance_to_next + estimated_distance_remaining(&next);
                        heap.push(Reverse(OrdVertex {
                            distance: distance_to_next,
                            current: next,
                            total_estimate,
                        }));
                    }
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    info!(
        "Found predecessors for {} syntax nodes.",
        predecessors.len()
    );
    let mut current = end;

    let mut route: Vec<(Edge, Vertex)> = vec![];
    let mut cost = 0;
    while let Some((_, node, edge)) = predecessors.remove(&current) {
        route.push((edge, node.clone()));
        cost += edge.cost();

        current = node;
    }
    info!("Found found a path of {} with cost {}.", route.len(), cost);

    route.reverse();
    route
}

pub fn shortest_path_greedy(start: Vertex) -> Vec<(Edge, Vertex)> {
    // We want to visit nodes with the shortest distance first, but
    // BinaryHeap is a max-heap. Ensure nodes are wrapped with Reverse
    // to flip comparisons.
    let mut heap: BinaryHeap<Reverse<_>> = BinaryHeap::new();

    let total_estimate = estimated_distance_remaining(&start);
    heap.push(Reverse(OrdVertex {
        distance: 0,
        current: start,
        total_estimate,
    }));

    // TODO: this grows very big. Consider using IDA* to reduce memory
    // usage.
    let mut predecessors: FxHashMap<Vertex, (u64, Vertex, Edge)> = FxHashMap::default();

    let end;
    loop {
        match heap.pop() {
            Some(Reverse(OrdVertex {
                distance,
                current,
                total_estimate: _,
            })) => {
                if current.is_end() {
                    end = current;
                    break;
                }

                for (edge, next) in neighbours(&current) {
                    if predecessors.get(&next).is_none() {
                        let distance_to_next = distance + edge.cost();
                        predecessors
                            .insert(next.clone(), (distance_to_next, current.clone(), edge));

                        let total_estimate = distance_to_next + estimated_distance_remaining(&next);
                        heap.push(Reverse(OrdVertex {
                            distance: distance_to_next,
                            current: next,
                            total_estimate,
                        }));
                    }
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    info!(
        "Found predecessors for {} syntax nodes.",
        predecessors.len()
    );
    let mut current = end;

    let mut route: Vec<(Edge, Vertex)> = vec![];
    let mut cost = 0;
    while let Some((_, node, edge)) = predecessors.remove(&current) {
        route.push((edge, node.clone()));
        cost += edge.cost();

        current = node;
    }
    info!("Found found a path of {} with cost {}.", route.len(), cost);

    route.reverse();
    route
}
