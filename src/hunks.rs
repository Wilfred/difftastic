//! Calculating which modified lines should be displayed together.

/// The maximum number of lines that may occur between changed lines in a hunk.
///
/// If we exceed this, the lines are stored in separate hunks.
const MAX_DISTANCE: usize = 4;

use std::collections::{HashMap, HashSet};

use crate::{
    context::{add_context, opposite_positions, MAX_PADDING},
    lines::LineNumber,
    side_by_side::lines_with_novel,
    syntax::{zip_pad_shorter, MatchedPos},
};

/// A hunk represents a series of modified lines that are displayed
/// together.
#[derive(Debug, Clone)]
pub struct Hunk {
    /// The LHS line numbers that contain novel content.
    pub novel_lhs: HashSet<LineNumber>,
    /// The RHS line numbers that contain novel content.
    pub novel_rhs: HashSet<LineNumber>,
    /// Line pairs that contain modified lines. This does not include
    /// padding, so at least one of the two lines has novel content.
    pub lines: Vec<(Option<LineNumber>, Option<LineNumber>)>,
}

impl Hunk {
    pub fn merge(self, other: &Self) -> Self {
        let mut lines = self.lines;
        lines.extend(other.lines.iter());

        let mut lhs_seen: HashSet<LineNumber> = HashSet::new();
        let mut rhs_seen: HashSet<LineNumber> = HashSet::new();

        let mut deduped_lines = vec![];
        for (lhs_line, rhs_line) in lines {
            let lhs_is_dupe = match lhs_line {
                Some(lhs_line) => {
                    let seen_already = lhs_seen.contains(&lhs_line);
                    lhs_seen.insert(lhs_line);
                    seen_already
                }
                None => false,
            };
            let rhs_is_dupe = match rhs_line {
                Some(rhs_line) => {
                    let seen_already = rhs_seen.contains(&rhs_line);
                    rhs_seen.insert(rhs_line);
                    seen_already
                }
                None => false,
            };
            if lhs_is_dupe && rhs_is_dupe {
                continue;
            }

            deduped_lines.push((
                if lhs_is_dupe { None } else { lhs_line },
                if rhs_is_dupe { None } else { rhs_line },
            ));
        }

        Hunk {
            novel_lhs: self.novel_lhs.union(&other.novel_lhs).copied().collect(),
            novel_rhs: self.novel_rhs.union(&other.novel_rhs).copied().collect(),
            lines: deduped_lines,
        }
    }
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

fn extract_lines(hunk: &Hunk) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
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

pub fn merge_adjacent(
    hunks: &[Hunk],
    opposite_to_lhs: &HashMap<LineNumber, HashSet<LineNumber>>,
    opposite_to_rhs: &HashMap<LineNumber, HashSet<LineNumber>>,
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> Vec<Hunk> {
    let mut res: Vec<Hunk> = vec![];
    let mut prev_hunk: Option<Hunk> = None;

    let mut prev_lhs_lines: HashSet<LineNumber> = HashSet::new();
    let mut prev_rhs_lines: HashSet<LineNumber> = HashSet::new();

    for hunk in hunks {
        let mut lhs_lines: HashSet<LineNumber> = HashSet::new();
        let mut rhs_lines: HashSet<LineNumber> = HashSet::new();

        let lines = extract_lines(hunk);
        let contextual_lines = add_context(
            &lines,
            opposite_to_lhs,
            opposite_to_rhs,
            max_lhs_src_line,
            max_rhs_src_line,
        );
        for (lhs_line, rhs_line) in contextual_lines {
            if let Some(lhs_line) = lhs_line {
                lhs_lines.insert(lhs_line);
            }
            if let Some(rhs_line) = rhs_line {
                rhs_lines.insert(rhs_line);
            }
        }

        match prev_hunk {
            Some(hunk_so_far) => {
                if lhs_lines.is_disjoint(&prev_lhs_lines) && rhs_lines.is_disjoint(&prev_rhs_lines)
                {
                    // No overlaps, start a new hunk.
                    res.push(hunk_so_far.clone());
                    prev_hunk = Some(hunk.clone());

                    prev_lhs_lines = lhs_lines;
                    prev_rhs_lines = rhs_lines;
                } else {
                    // Adjacent hunks, merge.
                    prev_hunk = Some(hunk_so_far.merge(hunk));
                    prev_lhs_lines.extend(lhs_lines.iter());
                    prev_rhs_lines.extend(rhs_lines.iter());
                }
            }
            None => {
                // The very first hunk.
                prev_hunk = Some(hunk.clone());
                prev_lhs_lines = lhs_lines;
                prev_rhs_lines = rhs_lines;
            }
        }
    }

    if let Some(current_hunk) = prev_hunk {
        res.push(current_hunk);
    }

    res
}

fn lines_are_close(
    max_lhs: Option<LineNumber>,
    max_rhs: Option<LineNumber>,
    line: (Option<LineNumber>, Option<LineNumber>),
) -> bool {
    let (lhs, rhs) = line;

    if let (Some(max_lhs_number), Some(lhs_number)) = (max_lhs, lhs) {
        if lhs_number.0 <= max_lhs_number.0 + MAX_DISTANCE {
            return true;
        }
    }
    if let (Some(max_rhs_number), Some(rhs_number)) = (max_rhs, rhs) {
        if rhs_number.0 <= max_rhs_number.0 + MAX_DISTANCE {
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

fn find_novel_lines(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    all_lhs_novel: &HashSet<LineNumber>,
    all_rhs_novel: &HashSet<LineNumber>,
) -> (HashSet<LineNumber>, HashSet<LineNumber>) {
    let mut lhs_novel = HashSet::new();
    let mut rhs_novel = HashSet::new();

    for (lhs_line, rhs_line) in lines {
        if let Some(lhs_line) = lhs_line {
            if all_lhs_novel.contains(lhs_line) {
                lhs_novel.insert(*lhs_line);
            }
        }
        if let Some(rhs_line) = rhs_line {
            if all_rhs_novel.contains(rhs_line) {
                rhs_novel.insert(*rhs_line);
            }
        }
    }

    (lhs_novel, rhs_novel)
}

/// Split lines into hunks.
fn lines_to_hunks(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> Vec<Hunk> {
    let (all_lhs_novel, all_rhs_novel) = lines_with_novel(lhs_mps, rhs_mps);

    let mut hunks = vec![];
    let mut current_hunk_lines = vec![];
    let mut max_lhs_line: Option<LineNumber> = None;
    let mut max_rhs_line: Option<LineNumber> = None;

    for line in enforce_increasing(lines) {
        let (lhs_line, rhs_line) = line;

        if current_hunk_lines.is_empty() || lines_are_close(max_lhs_line, max_rhs_line, line) {
            current_hunk_lines.push(line);
        } else {
            let (novel_lhs, novel_rhs) =
                find_novel_lines(&current_hunk_lines, &all_lhs_novel, &all_rhs_novel);
            hunks.push(Hunk {
                novel_lhs,
                novel_rhs,
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
        let (novel_lhs, novel_rhs) =
            find_novel_lines(&current_hunk_lines, &all_lhs_novel, &all_rhs_novel);
        hunks.push(Hunk {
            novel_lhs,
            novel_rhs,
            lines: current_hunk_lines,
        });
    }

    hunks
}

#[derive(Debug, Copy, Clone, PartialEq, Eq)]
enum Side {
    LHS,
    RHS,
}

/// Return a vec of novel MatchedPos values in an order suited for
/// displaying.
///
/// Since novel positions don't have a corresponding opposite
/// position, use the last opposite matched position to decide
/// ordering.
fn sorted_novel_positions(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> Vec<(Side, MatchedPos)> {
    let mut lhs_mps: Vec<MatchedPos> = lhs_mps.to_vec();
    lhs_mps.sort_unstable_by_key(|mp| mp.pos);

    let mut rhs_mps: Vec<MatchedPos> = rhs_mps.to_vec();
    rhs_mps.sort_unstable_by_key(|mp| mp.pos);

    let mut lhs_prev_opposite = None;
    let mut rhs_prev_opposite = None;

    let mut res: Vec<(Side, MatchedPos)> = vec![];
    let mut lhs_i = 0;
    let mut rhs_i = 0;
    while let (Some(lhs_mp), Some(rhs_mp)) = (lhs_mps.get(lhs_i), rhs_mps.get(rhs_i)) {
        match (
            lhs_mp.kind.first_opposite_span(),
            rhs_mp.kind.first_opposite_span(),
        ) {
            (Some(lhs_opposite_span), _) => {
                // This is an unchanged position, so just update the
                // opposite position.
                lhs_prev_opposite = Some(lhs_opposite_span);
                lhs_i += 1;
            }
            (_, Some(rhs_opposite_span)) => {
                // This is an unchanged position, so just update the
                // opposite position.
                rhs_prev_opposite = Some(rhs_opposite_span);
                rhs_i += 1;
            }
            (None, None) => {
                assert!(lhs_mp.kind.is_change());
                assert!(rhs_mp.kind.is_change());

                match (lhs_prev_opposite, rhs_prev_opposite) {
                    (None, _) => {
                        // If we see a novel LHS position and we don't
                        // have a previous matched position, put it
                        // first.
                        res.push((Side::LHS, lhs_mp.clone()));
                        lhs_i += 1;
                    }
                    (_, None) => {
                        // If we see a novel RHS position and we don't
                        // have a previous matched position,
                        // arbitrarily put it after novel LHS
                        // positions. This prevents incorrect
                        // interleaving.
                        res.push((Side::RHS, rhs_mp.clone()));
                        rhs_i += 1;
                    }
                    (Some(lhs_prev_opposite), Some(_)) => {
                        // Both sides are novel. Take the side with the earlier opposite position.
                        if lhs_prev_opposite < rhs_mp.pos {
                            res.push((Side::LHS, lhs_mp.clone()));
                            lhs_i += 1;
                        } else {
                            res.push((Side::RHS, rhs_mp.clone()));
                            rhs_i += 1;
                        }
                    }
                }
            }
        }
    }

    while let Some(lhs_mp) = lhs_mps.get(lhs_i) {
        if lhs_mp.kind.is_change() {
            res.push((Side::LHS, lhs_mp.clone()));
        }
        lhs_i += 1;
    }
    while let Some(rhs_mp) = rhs_mps.get(rhs_i) {
        if rhs_mp.kind.is_change() {
            res.push((Side::RHS, rhs_mp.clone()));
        }
        rhs_i += 1;
    }

    res
}

fn next_opposite(
    line: LineNumber,
    opposites: &HashMap<LineNumber, HashSet<LineNumber>>,
    prev_opposite: Option<LineNumber>,
) -> Option<LineNumber> {
    opposites.get(&line).and_then(|lines_set| {
        let mut lines: Vec<LineNumber> = lines_set.iter().copied().collect();
        lines.sort_unstable();

        lines.into_iter().find(|ln| {
            if let Some(prev_opposite) = prev_opposite {
                *ln > prev_opposite
            } else {
                true
            }
        })
    })
}

fn matched_novel_lines(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut highest_lhs: Option<LineNumber> = None;
    let mut highest_rhs: Option<LineNumber> = None;

    let opposite_to_lhs = opposite_positions(lhs_mps);
    let opposite_to_rhs = opposite_positions(rhs_mps);

    let mut lines: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    for (side, mp) in sorted_novel_positions(lhs_mps, rhs_mps) {
        let self_line = mp.pos.line;

        match side {
            Side::LHS => {
                let should_append = if let Some(highest_lhs) = highest_lhs {
                    self_line > highest_lhs
                } else {
                    true
                };
                if should_append {
                    lines.push((
                        Some(self_line),
                        next_opposite(self_line, &opposite_to_lhs, highest_rhs),
                    ));
                    highest_lhs = Some(self_line);
                }
            }
            Side::RHS => {
                let should_append = if let Some(highest_rhs) = highest_rhs {
                    self_line > highest_rhs
                } else {
                    true
                };
                if should_append {
                    lines.push((
                        next_opposite(self_line, &opposite_to_rhs, highest_rhs),
                        Some(self_line),
                    ));
                    highest_rhs = Some(self_line);
                }
            }
        }
    }

    lines
}

pub fn matched_pos_to_hunks(lhs_mps: &[MatchedPos], rhs_mps: &[MatchedPos]) -> Vec<Hunk> {
    lines_to_hunks(&matched_novel_lines(lhs_mps, rhs_mps), lhs_mps, rhs_mps)
}

/// Ensure that we don't miss any intermediate values.
///
/// Before:
///
/// ```text
/// 1 11
/// 3 14
/// 4 --
/// ```
///
/// After:
///
/// ```text
/// 1 10
/// 2 12 (choosing to align even though content doesn't match)
/// - 13 (fix uneven gap)
/// 3 14
/// 4 -- (preserve outer gaps)
/// ```
pub fn ensure_contiguous(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];

    let mut lhs_min: Option<LineNumber> = None;
    let mut rhs_min: Option<LineNumber> = None;

    for (lhs_line, rhs_line) in lines {
        if let Some(lhs_line) = lhs_line {
            if let Some(lhs_prev_min) = lhs_min {
                if lhs_prev_min.0 + 1 != lhs_line.0 {
                    res.extend((lhs_prev_min.0 + 1..lhs_line.0).map(|l| (Some(l.into()), None)));
                }
            }
            lhs_min = Some(*lhs_line);
        }
        if let Some(rhs_line) = rhs_line {
            if let Some(rhs_prev_min) = rhs_min {
                if rhs_prev_min.0 + 1 != rhs_line.0 {
                    res.extend((rhs_prev_min.0 + 1..rhs_line.0).map(|r| (None, Some(r.into()))));
                }
            }
            rhs_min = Some(*rhs_line);
        }
        res.push((*lhs_line, *rhs_line));
    }

    res
}

/// Before:
///
/// 10 --
/// 11 --
/// -- 20
/// 12 21
///
/// After:
///
/// 10 20
/// 11 --
/// 12 21
///
/// The returned vec will contain no (None, None) pairs.
pub fn compact_gaps(
    items: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    // A vec of the most recent single-sided lines, e.g.
    //
    // 10 --
    // 11 --
    //
    // All items must be Some on the same side.
    let mut unpaired_lines: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];

    for (lhs_line, rhs_line) in items {
        match (lhs_line, rhs_line) {
            (Some(lhs_line), None) => {
                match unpaired_lines.first() {
                    Some((None, Some(rhs_line))) => {
                        // We've found a line that can be compacted.
                        res.push((Some(*lhs_line), Some(*rhs_line)));
                        unpaired_lines.remove(0);
                    }
                    _ => {
                        unpaired_lines.push((Some(*lhs_line), None));
                    }
                }
            }
            (None, Some(rhs_line)) => {
                match unpaired_lines.first() {
                    Some((Some(lhs_line), None)) => {
                        // We've found a line that can be compacted.
                        res.push((Some(*lhs_line), Some(*rhs_line)));
                        unpaired_lines.remove(0);
                    }
                    _ => {
                        unpaired_lines.push((None, Some(*rhs_line)));
                    }
                }
            }
            _ => {
                res.extend(unpaired_lines);
                unpaired_lines = vec![];
                res.push((*lhs_line, *rhs_line));
            }
        }
    }

    res.extend(unpaired_lines);
    res
}

fn either_side_equal(
    x: &(Option<LineNumber>, Option<LineNumber>),
    y: &(Option<LineNumber>, Option<LineNumber>),
) -> bool {
    let (lhs_x, rhs_x) = x;
    let (lhs_y, rhs_y) = y;
    if let (Some(lhs_x), Some(lhs_y)) = (lhs_x, lhs_y) {
        if lhs_x == lhs_y {
            return true;
        }
    }
    if let (Some(rhs_x), Some(rhs_y)) = (rhs_x, rhs_y) {
        if rhs_x == rhs_y {
            return true;
        }
    }

    false
}

pub fn matched_lines_for_hunk(
    matched_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    hunk: &Hunk,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut hunk_lhs_novel = hunk.novel_lhs.iter().copied().collect::<Vec<_>>();
    hunk_lhs_novel.sort();

    let mut hunk_rhs_novel = hunk.novel_rhs.iter().copied().collect::<Vec<_>>();
    hunk_rhs_novel.sort();

    let hunk_smallest = (
        hunk_lhs_novel.first().copied(),
        hunk_rhs_novel.first().copied(),
    );
    let hunk_largest = (
        hunk_lhs_novel.last().copied(),
        hunk_rhs_novel.last().copied(),
    );

    // TODO: Use binary search instead.
    let mut start_i = None;
    for (i, matched_line) in matched_lines.iter().enumerate() {
        if either_side_equal(matched_line, &hunk_smallest) {
            start_i = Some(i);
            break;
        }
    }

    let mut end_i = None;
    for (i, matched_line) in matched_lines.iter().enumerate().rev() {
        if either_side_equal(matched_line, &hunk_largest) {
            end_i = Some(i + 1);
            break;
        }
    }

    let mut start_i = start_i.expect("Hunk lines should be present in matched lines");
    let mut end_i = end_i.expect("Hunk lines should be present in matched lines");
    if start_i >= MAX_PADDING {
        start_i -= MAX_PADDING;
    } else {
        start_i = 0;
    }
    if end_i + MAX_PADDING < matched_lines.len() {
        end_i += MAX_PADDING
    } else {
        end_i = matched_lines.len();
    }

    matched_lines[start_i..end_i].to_vec()
}

#[cfg(test)]
mod tests {
    use std::iter::FromIterator;

    use super::*;
    use crate::{
        positions::SingleLineSpan,
        syntax::{MatchKind, TokenKind},
    };
    use pretty_assertions::assert_eq;

    #[test]
    fn test_sorted_novel_positions_simple() {
        let novel_mp = MatchedPos {
            kind: MatchKind::Novel {
                highlight: TokenKind::Delimiter,
            },
            pos: SingleLineSpan {
                line: 0.into(),
                start_col: 1,
                end_col: 2,
            },
        };
        let matched_mp = MatchedPos {
            kind: MatchKind::UnchangedToken {
                highlight: TokenKind::Delimiter,
                self_pos: vec![SingleLineSpan {
                    line: 1.into(),
                    start_col: 1,
                    end_col: 2,
                }],
                opposite_pos: vec![SingleLineSpan {
                    line: 2.into(),
                    start_col: 1,
                    end_col: 2,
                }],
            },
            pos: SingleLineSpan {
                line: 1.into(),
                start_col: 1,
                end_col: 2,
            },
        };

        let lhs_mps = vec![novel_mp.clone(), matched_mp];
        let res = sorted_novel_positions(&lhs_mps, &[]);

        assert_eq!(res, vec![(Side::LHS, novel_mp)]);
    }

    #[test]
    fn test_matched_pos_to_hunks() {
        let matched_pos = SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 3,
        };

        let lhs_mps = [
            MatchedPos {
                kind: MatchKind::Novel {
                    highlight: TokenKind::Delimiter,
                },
                pos: SingleLineSpan {
                    line: 0.into(),
                    start_col: 1,
                    end_col: 2,
                },
            },
            MatchedPos {
                kind: MatchKind::UnchangedToken {
                    highlight: TokenKind::Delimiter,
                    self_pos: vec![matched_pos],
                    opposite_pos: vec![matched_pos],
                },
                pos: matched_pos,
            },
        ];

        let rhs_mps = [
            MatchedPos {
                kind: MatchKind::Novel {
                    highlight: TokenKind::Delimiter,
                },
                pos: SingleLineSpan {
                    line: 0.into(),
                    start_col: 1,
                    end_col: 2,
                },
            },
            MatchedPos {
                kind: MatchKind::UnchangedToken {
                    highlight: TokenKind::Delimiter,
                    self_pos: vec![matched_pos],
                    opposite_pos: vec![matched_pos],
                },
                pos: matched_pos,
            },
        ];

        let hunks = matched_pos_to_hunks(&lhs_mps, &rhs_mps);
        assert_eq!(hunks.len(), 1);
        assert_eq!(hunks[0].lines, vec![(Some(0.into()), Some(0.into()))]);
    }

    #[test]
    fn test_compact_gaps() {
        let res = compact_gaps(&[
            (Some(0.into()), None),
            (None, Some(0.into())),
            (Some(1.into()), Some(1.into())),
        ]);
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
            ]
        )
    }

    #[test]
    fn test_compact_gaps_with_larger_gap() {
        let res = compact_gaps(&[
            (Some(0.into()), None),
            (Some(1.into()), None),
            (None, Some(0.into())),
            (None, Some(1.into())),
        ]);
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
            ]
        )
    }

    #[test]
    fn test_matched_lines_for_hunk() {
        let matched_lines = &[
            (Some(0.into()), Some(0.into())),
            (Some(1.into()), Some(1.into())),
            (Some(2.into()), Some(2.into())),
        ];

        let novel_lhs = HashSet::from_iter([1.into()]);
        let novel_rhs = HashSet::from_iter([1.into()]);
        let hunk = Hunk {
            novel_lhs,
            novel_rhs,
            lines: vec![(Some(1.into()), Some(1.into()))],
        };

        let res = matched_lines_for_hunk(matched_lines, &hunk);
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
                (Some(2.into()), Some(2.into())),
            ]
        );
    }

    #[test]
    fn test_matched_lines_for_hunk_misaligned() {
        let matched_lines = &[
            (Some(0.into()), Some(0.into())),
            (Some(1.into()), Some(1.into())),
            (Some(2.into()), Some(2.into())),
            (Some(3.into()), Some(3.into())),
            (Some(4.into()), Some(4.into())),
            (Some(5.into()), Some(5.into())),
        ];

        let novel_lhs = HashSet::from_iter([1.into()]);
        let novel_rhs = HashSet::from_iter([2.into()]);
        let hunk = Hunk {
            novel_lhs,
            novel_rhs,
            // LHS and RHS are misaligned
            lines: vec![(Some(1.into()), Some(2.into()))],
        };

        let res = matched_lines_for_hunk(matched_lines, &hunk);
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
                (Some(2.into()), Some(2.into())),
                // We want to show the full 3 lines of padding after
                // the lower of the two lines, so up to line 5
                // inclusive.
                (Some(3.into()), Some(3.into())),
                (Some(4.into()), Some(4.into())),
                (Some(5.into()), Some(5.into())),
            ]
        );
    }
}
