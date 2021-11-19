use std::collections::{HashMap, HashSet};

use crate::{
    lines::LineNumber,
    syntax::{zip_repeat_shorter, MatchKind, MatchedPos},
};

const MAX_PADDING: usize = 3;

pub fn opposite_positions(mps: &[MatchedPos]) -> HashMap<LineNumber, HashSet<LineNumber>> {
    let mut res: HashMap<LineNumber, HashSet<LineNumber>> = HashMap::new();

    for mp in mps {
        match &mp.kind {
            MatchKind::Unchanged {
                self_pos,
                opposite_pos,
                ..
            } => {
                for (self_span, opposite_span) in zip_repeat_shorter(&self_pos.0, &opposite_pos.0) {
                    let opposite_lines = res.entry(self_span.line).or_insert_with(HashSet::new);
                    opposite_lines.insert(opposite_span.line);
                }
                for (self_span, opposite_span) in zip_repeat_shorter(&self_pos.1, &opposite_pos.1) {
                    let opposite_lines = res.entry(self_span.line).or_insert_with(HashSet::new);
                    opposite_lines.insert(opposite_span.line);
                }
            }
            MatchKind::UnchangedCommentPart {
                opposite_pos,
                self_pos,
            } => {
                let opposite_lines = res.entry(self_pos.line).or_insert_with(HashSet::new);
                for opposite_span in opposite_pos {
                    opposite_lines.insert(opposite_span.line);
                }
            }
            MatchKind::Novel { .. } | MatchKind::ChangedCommentPart { .. } => {}
        }
    }

    res
}

/// Before:
/// 118    --
/// 119    --
/// 120    -- (novel)
///
/// After:
/// 118    88 (expanded from closest)
/// 119    89 (closest match)
/// 120    -- (novel)
fn before_with_opposites(
    before_lines: &[LineNumber],
    opposite_lines: &HashMap<LineNumber, HashSet<LineNumber>>,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut lines = before_lines.to_vec();
    lines.reverse();

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

        res.push((Some(line), current_opposite));
        if current_opposite.is_some() {
            prev_opposite = current_opposite;
        }
    }

    res.reverse();
    res
}

fn pad_before(ln: LineNumber) -> Vec<LineNumber> {
    let mut res = vec![];

    let mut current = ln;
    for _ in 0..MAX_PADDING {
        if current.0 == 0 {
            break;
        }

        current = (current.0 - 1).into();
        res.push(current);
    }

    res.reverse();
    res
}

fn pad_after(ln: LineNumber, max_line: LineNumber) -> Vec<LineNumber> {
    let mut res = vec![];

    let mut current = ln;
    for _ in 0..MAX_PADDING {
        if current == max_line {
            break;
        }

        current = (current.0 + 1).into();
        res.push(current);
    }

    res
}

fn flip_tuples<Tx: Copy, Ty: Copy>(items: &[(Tx, Ty)]) -> Vec<(Ty, Tx)> {
    items.iter().map(|(x, y)| (*y, *x)).collect()
}

/// Before:
/// 120    -- (novel)
/// 121    --
/// 122    --
///
/// After:
/// 120    90 (novel)
/// 121    --
/// 122    91 (closest match)
fn after_with_opposites(
    after_lines: &[LineNumber],
    opposite_lines: HashMap<LineNumber, HashSet<LineNumber>>,
    prev_max_opposite: Option<LineNumber>,
    max_opposite: LineNumber,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut prev_opposite: Option<LineNumber> = None;
    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];

    for line in after_lines {
        let current_opposite: Option<LineNumber> = match prev_opposite {
            Some(prev_opposite) => {
                if prev_opposite < max_opposite {
                    Some((prev_opposite.0 + 1).into())
                } else {
                    None
                }
            }
            None => match opposite_lines.get(line) {
                Some(all_opposites) => {
                    let mut all_opposites: Vec<LineNumber> =
                        all_opposites.iter().copied().collect();
                    all_opposites.sort();

                    if let Some(prev_max_opposite) = prev_max_opposite {
                        all_opposites = all_opposites
                            .into_iter()
                            .filter(|x| *x > prev_max_opposite)
                            .collect()
                    }

                    all_opposites.first().copied()
                }
                None => None,
            },
        };

        res.push((Some(*line), current_opposite));
        if current_opposite.is_some() {
            prev_opposite = current_opposite;
        }
    }

    res
}

pub fn calculate_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> (
    Vec<(Option<LineNumber>, Option<LineNumber>)>,
    Vec<(Option<LineNumber>, Option<LineNumber>)>,
) {
    let opposite_to_lhs = opposite_positions(lhs_mps);
    let opposite_to_rhs = opposite_positions(rhs_mps);

    let before_lines: Vec<_> = match lines.first() {
        Some(first_line) => match *first_line {
            (Some(lhs_line), _) => {
                let padded_lines = pad_before(lhs_line);
                before_with_opposites(&padded_lines, &opposite_to_lhs)
            }
            (_, Some(rhs_line)) => {
                let padded_lines = pad_before(rhs_line);
                flip_tuples(&before_with_opposites(&padded_lines, &opposite_to_rhs))
            }
            (None, None) => return (vec![], vec![]),
        },
        None => return (vec![], vec![]),
    };

    let after_lines = match lines.last() {
        Some(first_line) => match *first_line {
            (Some(lhs_line), _) => {
                let mut max_opposite = None;
                for (_, rhs_line) in [&before_lines, lines].concat() {
                    if let Some(rhs_line) = rhs_line {
                        max_opposite = Some(rhs_line);
                    }
                }

                let padded_lines = pad_after(lhs_line, max_lhs_src_line);
                after_with_opposites(
                    &padded_lines,
                    opposite_to_lhs,
                    max_opposite,
                    max_rhs_src_line,
                )
            }
            (_, Some(rhs_line)) => {
                let mut max_opposite = None;
                for (lhs_line, _) in [&before_lines, lines].concat() {
                    if let Some(lhs_line) = lhs_line {
                        max_opposite = Some(lhs_line);
                    }
                }

                let padded_lines = pad_after(rhs_line, max_rhs_src_line);
                flip_tuples(&after_with_opposites(
                    &padded_lines,
                    opposite_to_rhs,
                    max_opposite,
                    max_lhs_src_line,
                ))
            }
            (None, None) => return (vec![], vec![]),
        },
        None => return (vec![], vec![]),
    };

    (before_lines, after_lines)
}

pub fn add_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let (mut before_lines, mut after_lines) =
        calculate_context(lines, lhs_mps, rhs_mps, max_lhs_src_line, max_rhs_src_line);

    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    res.append(&mut before_lines);
    res.extend(lines.iter());
    res.append(&mut after_lines);
    res
}
