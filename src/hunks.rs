#![allow(warnings, unused)]

const MAX_PADDING: usize = 2;

use std::collections::{HashMap, HashSet};

use crate::{
    lines::{compare_matched_pos, LineNumber},
    syntax::{zip_pad_shorter, MatchKind, MatchedPos},
};

#[derive(Debug, Clone)]
pub struct Hunk {
    pub lines: Vec<(Option<LineNumber>, Option<LineNumber>)>,
}

impl Hunk {
    pub fn merge(self, other: &Self) -> Self {
        let mut lines = self.lines;
        lines.extend(other.lines.iter());
        lines.sort();

        let mut lhs_seen: HashSet<LineNumber> = HashSet::new();
        let mut rhs_seen: HashSet<LineNumber> = HashSet::new();

        let mut deduped_lines = vec![];
        for (lhs_line, rhs_line) in lines {
            let lhs_is_dupe = match lhs_line {
                Some(lhs_line) => lhs_seen.contains(&lhs_line),
                None => false,
            };
            let rhs_is_dupe = match rhs_line {
                Some(rhs_line) => rhs_seen.contains(&rhs_line),
                None => false,
            };
            if lhs_is_dupe && rhs_is_dupe {
                continue;
            }

            deduped_lines.push((
                if lhs_is_dupe { None } else { lhs_line },
                if rhs_is_dupe { None } else { rhs_line },
            ))
        }

        Hunk {
            lines: deduped_lines,
        }
    }
}

// Add up to MAX_PADDING lines after the last relevant line in this hunk.
fn extend_forward(
    last_lhs: Option<LineNumber>,
    last_rhs: Option<LineNumber>,
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut lhs_current = last_lhs;
    let mut rhs_current = last_rhs;

    let mut res = vec![];
    for _ in 0..MAX_PADDING {
        lhs_current = match lhs_current {
            Some(lhs_current_line) if lhs_current_line < max_lhs_src_line => {
                Some((lhs_current_line.0 + 1).into())
            }
            _ => None,
        };
        rhs_current = match rhs_current {
            Some(rhs_current_line) if rhs_current_line < max_rhs_src_line => {
                Some((rhs_current_line.0 + 1).into())
            }
            _ => None,
        };

        if lhs_current.is_none() && rhs_current.is_none() {
            break;
        }
        res.push((lhs_current, rhs_current));
    }

    res
}

fn fill_between(
    prev_lhs: Option<LineNumber>,
    next_lhs: Option<LineNumber>,
    prev_rhs: Option<LineNumber>,
    next_rhs: Option<LineNumber>,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut lhs_lines = vec![];
    if let (Some(prev_lhs), Some(next_lhs)) = (prev_lhs, next_lhs) {
        if prev_lhs.0 + 1 < next_lhs.0 {
            lhs_lines = (prev_lhs.0 + 1..next_lhs.0)
                .map(|line| line.into())
                .collect();
        }
    }

    let mut rhs_lines = vec![];
    if let (Some(prev_rhs), Some(next_rhs)) = (prev_rhs, next_rhs) {
        if prev_rhs.0 + 1 < next_rhs.0 {
            rhs_lines = (prev_rhs.0 + 1..next_rhs.0)
                .map(|line| line.into())
                .collect();
        }
    }

    zip_pad_shorter(&lhs_lines, &rhs_lines)
}

pub fn extract_lines(hunk: &Hunk) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut min_lhs = None;
    let mut min_rhs = None;
    let mut max_lhs = None;
    let mut max_rhs = None;

    // Relevant lines.
    let mut relevant = vec![];
    for (left_line, right_line) in &hunk.lines {
        // Fill in the gap.
        let mut inbetween = fill_between(max_lhs, *left_line, max_rhs, *right_line);
        relevant.append(&mut inbetween);

        if let Some(l) = left_line {
            if min_lhs.is_none() {
                min_lhs = Some(*l);
            }
            max_lhs = Some(*l);
        }

        if let Some(r) = right_line {
            if min_rhs.is_none() {
                min_rhs = Some(*r);
            }
            max_rhs = Some(*r);
        }

        relevant.push((*left_line, *right_line));
    }

    relevant
}

fn line_close(
    max_lhs: Option<LineNumber>,
    max_rhs: Option<LineNumber>,
    line: (Option<LineNumber>, Option<LineNumber>),
    max_distance: usize,
) -> bool {
    let (lhs, rhs) = line;

    if let (Some(max_lhs_number), Some(lhs_number)) = (max_lhs, lhs) {
        if lhs_number.0 <= max_lhs_number.0 + max_distance {
            return true;
        }
    }
    if let (Some(max_rhs_number), Some(rhs_number)) = (max_rhs, rhs) {
        if rhs_number.0 <= max_rhs_number.0 + max_distance {
            return true;
        }
    }

    false
}

/// Given a slice of line pairs that are ordered as far as possible,
/// but may refer to earlier lines, return line pairs that are
/// monotonically increasing. If an earlier line occurs after a later
/// line, replace that line with None.
fn enforce_increasing(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut res = vec![];

    let mut max_lhs_line: Option<LineNumber> = None;
    let mut max_rhs_line: Option<LineNumber> = None;

    for (mut lhs_line, mut rhs_line) in lines {
        // If this LHS line is before the max line we've seen, discard it.
        match max_lhs_line {
            Some(max_lhs_line_number) => match lhs_line {
                Some(lhs_line_number) if lhs_line_number > max_lhs_line_number => {
                    max_lhs_line = lhs_line;
                }
                _ => {
                    lhs_line = None;
                }
            },
            None => {
                max_lhs_line = lhs_line;
            }
        }

        // If this RHS line is before the max line we've seen, discard it.
        match max_rhs_line {
            Some(max_rhs_line_number) => match rhs_line {
                Some(rhs_line_number) if rhs_line_number > max_rhs_line_number => {
                    max_rhs_line = rhs_line;
                }
                _ => {
                    rhs_line = None;
                }
            },
            None => {
                max_rhs_line = rhs_line;
            }
        }

        if lhs_line.is_some() || rhs_line.is_some() {
            res.push((lhs_line, rhs_line));
        }
    }

    res
}

/// Split lines into hunks.
fn lines_to_hunks(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    max_distance: usize,
) -> Vec<Hunk> {
    let mut hunks = vec![];
    let mut current_hunk_lines = vec![];
    let mut max_lhs_line: Option<LineNumber> = None;
    let mut max_rhs_line: Option<LineNumber> = None;

    for line in enforce_increasing(lines) {
        let (lhs_line, rhs_line) = line;

        if current_hunk_lines.is_empty()
            || line_close(max_lhs_line, max_rhs_line, line, max_distance)
        {
            current_hunk_lines.push(line);
        } else {
            hunks.push(Hunk {
                lines: current_hunk_lines,
            });
            current_hunk_lines = vec![line];
        }

        if let Some(lhs_line) = lhs_line {
            max_lhs_line = Some(lhs_line);
        }
        if let Some(rhs_line) = rhs_line {
            max_rhs_line = Some(rhs_line);
        }
    }

    if !current_hunk_lines.is_empty() {
        hunks.push(Hunk {
            lines: current_hunk_lines,
        });
    }

    hunks
}

pub fn matched_pos_to_hunks(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_distance: usize,
) -> Vec<Hunk> {
    let lhs_changed_mps = lhs_mps.iter().filter(|mp| !mp.kind.is_unchanged());
    let rhs_changed_mps = rhs_mps.iter().filter(|mp| !mp.kind.is_unchanged());

    let mut positions = vec![];
    positions.extend(lhs_changed_mps.map(|p| (true, p)));
    positions.extend(rhs_changed_mps.map(|p| (false, p)));

    positions.sort_unstable_by(|(_, x), (_, y)| compare_matched_pos(x, y));

    let mut lines: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    for (is_lhs, mp) in positions {
        let self_line = mp.pos.line;
        let opposite_line: Option<LineNumber> = match &mp.kind {
            MatchKind::Unchanged { opposite_pos, .. } => {
                opposite_pos.0.first().map(|span| span.line)
            }
            MatchKind::UnchangedCommentPart { opposite_pos, .. } => {
                opposite_pos.first().map(|span| span.line)
            }
            MatchKind::Novel {
                prev_opposite_pos, ..
            } => None,
            MatchKind::ChangedCommentPart { prev_opposite_pos } => None,
        };

        let line = if is_lhs {
            (Some(self_line), opposite_line)
        } else {
            (opposite_line, Some(self_line))
        };
        lines.push(line);
    }

    lines_to_hunks(&lines, max_distance)
}

/// Before:
///
/// 1 11
/// 3 14
///
/// After
///
/// 1 10
/// 2 12 (choosing to align even though content doesn't match)
/// - 13 (fix uneven gap)
/// 3 14
///
fn fill_gaps(lines: &[(LineNumber, LineNumber)]) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut res = vec![];
    for (i, (lhs_line, rhs_line)) in lines.iter().copied().enumerate() {
        if i > 0 {
            let (lhs_prev_line, rhs_prev_line) = lines[i - 1];

            let lhs_missing: Vec<LineNumber> = (lhs_prev_line.0 + 1..lhs_line.0).map(|i| i.into()).collect();
            let rhs_missing: Vec<LineNumber> = (rhs_prev_line.0 + 1..rhs_line.0).map(|i| i.into()).collect();

            let missing = zip_pad_shorter(&lhs_missing, &rhs_missing);
            res.extend(missing.iter());
        }

        res.push((Some(lhs_line), Some(rhs_line)));
    }

    res
}

fn fill_aligned(
    start: (LineNumber, LineNumber),
    end: (LineNumber, LineNumber),
    matched_rhs_lines: &HashMap<LineNumber, HashSet<LineNumber>>,
) -> Vec<(LineNumber, LineNumber)> {
    let mut res = vec![];

    let mut lhs_current = start.0;
    let mut rhs_max_so_far = start.1;

    let (lhs_max, rhs_max) = end;

    while lhs_current < lhs_max {
        lhs_current = (lhs_current.0 + 1).into();

        let empty = HashSet::new();
        let mut opposite_lines: Vec<LineNumber> = matched_rhs_lines
            .get(&lhs_current)
            .unwrap_or(&empty)
            .iter()
            .copied()
            .filter(|ln| *ln > rhs_max_so_far && *ln < rhs_max)
            .collect();
        opposite_lines.sort();

        if let Some(opposite_line) = opposite_lines.first() {
            res.push((lhs_current, *opposite_line));
        }
    }

    res
}
