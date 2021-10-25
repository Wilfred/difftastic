#![allow(warnings, unused)]

use std::collections::{HashMap, HashSet};

use crate::lines::LineNumber;

const MAX_PADDING: usize = 2;

pub fn pad_before(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    vec![]
}


/// Before:
/// 118    --
/// 119    --
/// 120    -- (novel)
///
/// After:
/// 118    88 (expanded below)
/// 119    89 (first match)
/// 120    -- (novel)
fn before_with_opposites(
    before_lines: &[LineNumber],
    opposite_lines: HashMap<LineNumber, HashSet<LineNumber>>,
) -> Vec<(LineNumber, Option<LineNumber>)> {
    let mut lines = before_lines.to_vec();
    lines.reverse();

    let mut nearest_opposite: Option<LineNumber> = None;
    let mut prev_opposite: Option<LineNumber> = None;
    let mut res = vec![];
    
    for line in lines {
        let current_opposite: Option<LineNumber> = match prev_opposite {
            Some(prev_opposite) => {
                if prev_opposite.0 > 0 {
                    Some((prev_opposite.0 - 1).into())
                } else {
                    None
                }
            }
            None => match opposite_lines.get(&line) {
                Some(all_opposites) => {
                    let mut all_opposites: Vec<LineNumber> =
                        all_opposites.iter().copied().collect();
                    all_opposites.sort();

                    all_opposites.last().copied()
                }
                None => None,
            },
        };

        res.push((line, current_opposite));
        if current_opposite.is_some() {
            prev_opposite = current_opposite;
        }
    }

    res.reverse();
    res
}

pub fn add_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let before_padding = pad_before(lines);

    let mut res = lines.to_vec();
    res
}
