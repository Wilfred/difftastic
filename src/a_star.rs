use crate::graph::{neighbours, Edge, Edge::*, Vertex};
use rustc_hash::FxHashMap;
use std::{
    cmp::{min, Ordering, Reverse},
    collections::BinaryHeap,
};

#[derive(Debug)]
struct OrdVertex<'a> {
    /// The distance from the start vertex to this vertex.
    distance: u64,
    /// The vertex we have just reached.
    current: Vertex<'a>,
    /// The previous vertex and edge we took to reach this vertex.
    prev: Option<(Vertex<'a>, Edge)>,
    /// Our best guess as to how far we are from the destination.
    remaining_estimate: u64,
}

impl<'a> PartialOrd for OrdVertex<'a> {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

impl<'a> Ord for OrdVertex<'a> {
    fn cmp(&self, other: &Self) -> Ordering {
        (self.distance + self.remaining_estimate).cmp(&(other.distance + other.remaining_estimate))
    }
}

impl<'a> PartialEq for OrdVertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.distance == other.distance
    }
}
impl<'a> Eq for OrdVertex<'a> {}

fn estimated_distance_remaining(v: &Vertex) -> u64 {
    let lhs_left = match v.lhs_syntax {
        Some(lhs_syntax) => {
            lhs_syntax.num_after() as u64
                * UnchangedNode {
                    depth_difference: 0,
                }
                .cost()
        }
        None => 0,
    };
    let rhs_left = match v.rhs_syntax {
        Some(rhs_syntax) => {
            rhs_syntax.num_after() as u64
                * UnchangedNode {
                    depth_difference: 0,
                }
                .cost()
        }
        None => 0,
    };

    min(lhs_left, rhs_left)
}

pub fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    // We want to visit nodes with the shortest distance first, but
    // BinaryHeap is a max-heap. Ensure nodes are wrapped with Reverse
    // to flip comparisons.
    let mut heap: BinaryHeap<Reverse<_>> = BinaryHeap::new();

    let remaining_estimate = estimated_distance_remaining(&start);
    heap.push(Reverse(OrdVertex {
        distance: 0,
        current: start,
        prev: None,
        remaining_estimate,
    }));

    // TODO: this grows very big. Consider using IDA* to reduce memory
    // usage.
    let mut predecessors: FxHashMap<Vertex, (u64, Edge, Vertex)> = FxHashMap::default();

    let end;
    loop {
        match heap.pop() {
            Some(Reverse(OrdVertex {
                distance,
                current,
                prev,
                remaining_estimate: _,
            })) => {
                if current.is_end() {
                    if let Some((prev_node, prev_edge)) = prev {
                        predecessors.insert(current.clone(), (distance, prev_edge, prev_node));
                    }

                    // TODO: Is this correct? Can we terminate if we reach for the first time?
                    end = current;
                    break;
                }

                // We've found a route to `current`. Is it an
                // improvement over previously seen routes?
                let found_shorter_route = match predecessors.get(&current) {
                    Some((prev_shortest, _, _)) => distance < *prev_shortest,
                    _ => true,
                };

                if found_shorter_route {
                    if let Some((prev_node, prev_edge)) = prev {
                        predecessors.insert(current.clone(), (distance, prev_edge, prev_node));
                    }

                    for (edge, next) in neighbours(&current) {
                        let new_remaining_estimate = estimated_distance_remaining(&next);
                        let distance_to_next = distance + edge.cost();

                        heap.push(Reverse(OrdVertex {
                            distance: distance_to_next,
                            remaining_estimate: new_remaining_estimate,
                            current: next,
                            prev: Some((current.clone(), edge)),
                        }));
                    }
                }
            }
            None => panic!("Ran out of graph nodes before reaching end"),
        }
    }

    let mut current = end;
    let mut res: Vec<(Edge, Vertex)> = vec![];
    loop {
        match predecessors.remove(&current) {
            Some((_, edge, node)) => {
                res.push((edge, node.clone()));
                current = node;
            }
            None => {
                break;
            }
        }
    }

    res.reverse();
    res
}
