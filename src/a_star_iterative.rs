use rustc_hash::FxHashSet;

use crate::{
    a_star::estimated_distance_remaining,
    graph::{neighbours, Edge, Vertex},
};

pub fn shortest_path(start: Vertex) -> Vec<(Edge, Vertex)> {
    let mut limit = 0;
    let mut path = vec![];
    let mut visited = FxHashSet::default();
    loop {
        match deepen(start.clone(), 0, &mut path, &mut visited, limit) {
            Some(DeepenResult::FoundEnd) => {
                info!(
                    "Found found a path of {} using limit {}.",
                    path.len(),
                    limit
                );
                return path;
            }
            Some(DeepenResult::ExceedLimit(smallest_over_limit)) => {
                info!("Increasing limit from {} to {}", limit, smallest_over_limit);
                limit = smallest_over_limit;
            }
            None => panic!("Ran out of nodes"),
        }
    }
}

enum DeepenResult {
    ExceedLimit(u64),
    FoundEnd,
}

fn deepen<'a>(
    current_v: Vertex<'a>,
    current_dist: u64,
    path: &mut Vec<(Edge, Vertex<'a>)>,
    visited: &mut FxHashSet<Vertex<'a>>,
    limit: u64,
) -> Option<DeepenResult> {
    let estimated_total = current_dist + estimated_distance_remaining(&current_v);
    if estimated_total > limit {
        return Some(DeepenResult::ExceedLimit(estimated_total));
    }

    let mut smallest_over_limit = None;

    let mut candidates = vec![];
    for (edge, next) in neighbours(&current_v) {
        if next.is_end() {
            path.push((edge, next));
            return Some(DeepenResult::FoundEnd);
        }
        if visited.contains(&next) {
            continue;
        }

        let total_estimate = current_dist + edge.cost() + estimated_distance_remaining(&next);
        candidates.push((total_estimate, edge, next));
    }

    candidates.sort_unstable_by_key(|(d, _, _)| *d);
    for (_, edge, next) in candidates {
        path.push((edge, next.clone()));
        visited.insert(next.clone());
        match deepen(next.clone(), current_dist + edge.cost(), path, visited, limit) {
            Some(DeepenResult::FoundEnd) => {
                return Some(DeepenResult::FoundEnd);
            }
            Some(DeepenResult::ExceedLimit(next_limit)) => {
                let is_closer = match smallest_over_limit {
                    Some(over_limit) => next_limit < over_limit,
                    None => true,
                };
                if is_closer {
                    smallest_over_limit = Some(next_limit);
                }
            }
            None => {}
        }

        path.pop();
        visited.remove(&next);
    }

    smallest_over_limit.map(DeepenResult::ExceedLimit)
}
