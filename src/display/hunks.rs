//! Calculating which modified lines should be displayed together.

/// The maximum number of lines that may occur between changed lines in a hunk.
///
/// If we exceed this, the lines are stored in separate hunks.
const MAX_DISTANCE: u32 = 4;

use line_numbers::LineNumber;

use crate::{
    constants::Side,
    display::{
        context::{add_context, opposite_positions},
        side_by_side::lines_with_novel,
    },
    hash::{DftHashMap, DftHashSet},
    parse::syntax::{zip_pad_shorter, MatchKind, MatchedPos},
};

/// A hunk represents a series of modified lines that are displayed
/// together.
#[derive(Debug, Clone)]
pub(crate) struct Hunk {
    /// The LHS line numbers that contain novel content.
    pub(crate) novel_lhs: DftHashSet<LineNumber>,
    /// The RHS line numbers that contain novel content.
    pub(crate) novel_rhs: DftHashSet<LineNumber>,
    /// Line pairs that contain modified lines. This does not include
    /// padding, so at least one of the two lines has novel content.
    pub(crate) lines: Vec<(Option<LineNumber>, Option<LineNumber>)>,
}

impl Hunk {
    pub(crate) fn merge(self, other: &Self) -> Self {
        let mut lines = self.lines;
        lines.extend(other.lines.iter());

        let mut lhs_seen: DftHashSet<LineNumber> = DftHashSet::default();
        let mut rhs_seen: DftHashSet<LineNumber> = DftHashSet::default();

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
            lhs_lines = (prev_lhs.0 + 1..next_lhs.0).map(LineNumber::from).collect();
        }
    }

    let mut rhs_lines = vec![];
    if let (Some(prev_rhs), Some(next_rhs)) = (prev_rhs, next_rhs) {
        if prev_rhs.0 + 1 < next_rhs.0 {
            rhs_lines = (prev_rhs.0 + 1..next_rhs.0).map(LineNumber::from).collect();
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

pub(crate) fn merge_adjacent(
    hunks: &[Hunk],
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
    num_context_lines: usize,
) -> Vec<Hunk> {
    let mut merged_hunks: Vec<Hunk> = vec![];
    let mut prev_hunk: Option<Hunk> = None;

    let mut prev_lhs_lines: DftHashSet<LineNumber> = DftHashSet::default();
    let mut prev_rhs_lines: DftHashSet<LineNumber> = DftHashSet::default();

    for hunk in hunks {
        let mut lhs_lines: DftHashSet<LineNumber> = DftHashSet::default();
        let mut rhs_lines: DftHashSet<LineNumber> = DftHashSet::default();

        let lines = extract_lines(hunk);
        let contextual_lines = add_context(
            &lines,
            opposite_to_lhs,
            opposite_to_rhs,
            max_lhs_src_line,
            max_rhs_src_line,
            num_context_lines,
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
                    merged_hunks.push(hunk_so_far.clone());
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
        merged_hunks.push(current_hunk);
    }

    merged_hunks
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
    let mut ordered_lines = vec![];

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
            ordered_lines.push((lhs_line, rhs_line));
        }
    }

    ordered_lines
}

fn find_novel_lines(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    all_lhs_novel: &DftHashSet<LineNumber>,
    all_rhs_novel: &DftHashSet<LineNumber>,
) -> (DftHashSet<LineNumber>, DftHashSet<LineNumber>) {
    let mut lhs_novel = DftHashSet::default();
    let mut rhs_novel = DftHashSet::default();

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

/// Given a sequence of novel [`MatchedPos`] values in a section between
/// two unchanged [`MatchedPos`] values, return them in an order suited
/// for displaying.
///
/// ```text
/// unchanged-before novel-1
/// novel-2
/// novel-3
/// novel-4 unchanged-after
/// ```
///
/// We need novel-1 to occur before novel-2/3, and novel-2/3 to occur
/// before novel-4, so we can safely interleave LHS and RHS whilst
/// still being monotonically increasing.
fn novel_section_in_order(
    lhs_novel_mps: &[&MatchedPos],
    rhs_novel_mps: &[&MatchedPos],
    lhs_prev_matched_line: Option<LineNumber>,
    rhs_prev_matched_line: Option<LineNumber>,
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
) -> Vec<(Side, MatchedPos)> {
    let mut res: Vec<(Side, MatchedPos)> = vec![];

    let mut lhs_iter = lhs_novel_mps.iter().peekable();
    let mut rhs_iter = rhs_novel_mps.iter().peekable();

    // Novel MatchedPos values that occur on the same line as the
    // previous unchanged MatchedPos must occur first.
    while let Some(lhs_mp) = lhs_iter.peek() {
        let same_line_as_prev = if let Some(lhs_prev_matched_line) = lhs_prev_matched_line {
            lhs_mp.pos.line == lhs_prev_matched_line
        } else {
            false
        };
        if same_line_as_prev {
            res.push((Side::Left, (**lhs_mp).clone()));
            lhs_iter.next();
        } else {
            break;
        }
    }
    while let Some(rhs_mp) = rhs_iter.peek() {
        let same_line_as_prev = if let Some(rhs_prev_matched_line) = rhs_prev_matched_line {
            rhs_mp.pos.line == rhs_prev_matched_line
        } else {
            false
        };
        if same_line_as_prev {
            res.push((Side::Right, (**rhs_mp).clone()));
            rhs_iter.next();
        } else {
            break;
        }
    }

    // Next, we want novel MatchedPos values that occur on lines
    // without any unchanged MatchedPos values.
    while let Some(lhs_mp) = lhs_iter.peek() {
        if opposite_to_lhs.contains_key(&lhs_mp.pos.line) {
            break;
        }
        res.push((Side::Left, (**lhs_mp).clone()));
        lhs_iter.next();
    }
    while let Some(rhs_mp) = rhs_iter.peek() {
        if opposite_to_rhs.contains_key(&rhs_mp.pos.line) {
            break;
        }
        res.push((Side::Right, (**rhs_mp).clone()));
        rhs_iter.next();
    }

    // Finally, the remainder of the novel MatchedPos values will be
    // on the same line as the following unchanged MatchedPos value.
    for lhs_mp in lhs_iter {
        res.push((Side::Left, (*lhs_mp).clone()));
    }
    for rhs_mp in rhs_iter {
        res.push((Side::Right, (*rhs_mp).clone()));
    }

    res
}

/// Return a vec of novel [`MatchedPos`] values in an order suited for
/// displaying.
///
/// Since novel positions don't have a corresponding opposite
/// position, use the last opposite matched position to decide
/// ordering.
fn sorted_novel_positions(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
) -> Vec<(Side, MatchedPos)> {
    let mut lhs_mps: Vec<MatchedPos> = lhs_mps.to_vec();
    lhs_mps.sort_unstable_by_key(|mp| mp.pos);

    let mut rhs_mps: Vec<MatchedPos> = rhs_mps.to_vec();
    rhs_mps.sort_unstable_by_key(|mp| mp.pos);

    let mut res: Vec<(Side, MatchedPos)> = vec![];

    let mut lhs_prev_matched_line = None;
    let mut rhs_prev_matched_line = None;
    let mut lhs_novel_section = vec![];
    let mut rhs_novel_section = vec![];

    let mut lhs_iter = lhs_mps.iter().peekable();
    let mut rhs_iter = rhs_mps.iter().peekable();
    loop {
        match (lhs_iter.peek(), rhs_iter.peek()) {
            (
                Some(MatchedPos {
                    kind: MatchKind::Ignored { .. },
                    ..
                }),
                _,
            ) => {
                // Ignored nodes shouldn't be treated as novel,
                // because we don't want to create hunks if we see
                // them. However, they don't have corresponding
                // positions on the other side, so just skip.
                lhs_iter.next();
            }
            (
                _,
                Some(MatchedPos {
                    kind: MatchKind::Ignored { .. },
                    ..
                }),
            ) => {
                // Ignored nodes shouldn't be treated as novel,
                // because we don't want to create hunks if we see
                // them. However, they don't have corresponding
                // positions on the other side, so just skip.
                rhs_iter.next();
            }
            (Some(lhs_mp), Some(rhs_mp)) if !lhs_mp.kind.is_novel() && !rhs_mp.kind.is_novel() => {
                res.append(&mut novel_section_in_order(
                    &lhs_novel_section,
                    &rhs_novel_section,
                    lhs_prev_matched_line,
                    rhs_prev_matched_line,
                    opposite_to_lhs,
                    opposite_to_rhs,
                ));
                lhs_novel_section = vec![];
                rhs_novel_section = vec![];

                lhs_prev_matched_line = Some(lhs_mp.pos.line);
                rhs_prev_matched_line = Some(rhs_mp.pos.line);
                lhs_iter.next();
                rhs_iter.next();
            }
            (Some(lhs_mp), _) if lhs_mp.kind.is_novel() => {
                lhs_novel_section.push(lhs_mp);
                lhs_iter.next();
            }
            (_, Some(rhs_mp)) if rhs_mp.kind.is_novel() => {
                rhs_novel_section.push(rhs_mp);
                rhs_iter.next();
            }
            (None, None) => {
                break;
            }
            (lhs_mp, rhs_mp) => {
                unreachable!("Should be impossible: every LHS Unchanged MatchedPos should have a corresponding RHS Unchanged MatchedPos\n  {:?}\n  {:?}", lhs_mp, rhs_mp);
            }
        }
    }

    res.append(&mut novel_section_in_order(
        &lhs_novel_section,
        &rhs_novel_section,
        lhs_prev_matched_line,
        rhs_prev_matched_line,
        opposite_to_lhs,
        opposite_to_rhs,
    ));

    res
}

fn next_opposite(
    line: LineNumber,
    opposites: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
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
    for (side, mp) in sorted_novel_positions(lhs_mps, rhs_mps, &opposite_to_lhs, &opposite_to_rhs) {
        let self_line = mp.pos.line;

        match side {
            Side::Left => {
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
            Side::Right => {
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

pub(crate) fn matched_pos_to_hunks(lhs_mps: &[MatchedPos], rhs_mps: &[MatchedPos]) -> Vec<Hunk> {
    lines_to_hunks(&matched_novel_lines(lhs_mps, rhs_mps), lhs_mps, rhs_mps)
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

pub(crate) fn matched_lines_indexes_for_hunk(
    matched_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    hunk: &Hunk,
    num_context_lines: usize,
) -> (usize, usize) {
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
    if start_i >= num_context_lines {
        start_i -= num_context_lines;
    } else {
        start_i = 0;
    }

    if end_i + num_context_lines < matched_lines.len() {
        end_i += num_context_lines
    } else {
        end_i = matched_lines.len();
    }

    (start_i, end_i)
}

#[cfg(test)]
mod tests {
    use std::iter::FromIterator;

    use line_numbers::SingleLineSpan;
    use pretty_assertions::assert_eq;

    use super::*;
    use crate::{
        hash::DftHashMap,
        syntax::{MatchKind, TokenKind},
    };

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

        let lhs_mps = vec![novel_mp.clone(), matched_mp.clone()];
        let res = sorted_novel_positions(
            &lhs_mps,
            &[matched_mp],
            &DftHashMap::default(),
            &DftHashMap::default(),
        );

        assert_eq!(res, vec![(Side::Left, novel_mp)]);
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

    fn matched_lines_for_hunk<'a>(
        matched_lines: &'a [(Option<LineNumber>, Option<LineNumber>)],
        hunk: &Hunk,
    ) -> &'a [(Option<LineNumber>, Option<LineNumber>)] {
        let (start_i, end_i) = matched_lines_indexes_for_hunk(matched_lines, hunk, 3);
        &matched_lines[start_i..end_i]
    }

    #[test]
    fn test_matched_lines_for_hunk() {
        let matched_lines = &[
            (Some(0.into()), Some(0.into())),
            (Some(1.into()), Some(1.into())),
            (Some(2.into()), Some(2.into())),
        ];

        let novel_lhs = DftHashSet::from_iter([1.into()]);
        let novel_rhs = DftHashSet::from_iter([1.into()]);
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

        let novel_lhs = DftHashSet::from_iter([1.into()]);
        let novel_rhs = DftHashSet::from_iter([2.into()]);
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
