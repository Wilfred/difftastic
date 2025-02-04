//! Calculate which nearby lines should also be displayed.

use std::cmp::Ordering;

use line_numbers::LineNumber;

use crate::{
    hash::{DftHashMap, DftHashSet},
    parse::syntax::{zip_repeat_shorter, MatchKind, MatchedPos},
};

pub(crate) fn all_matched_lines_filled(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let matched_lines = add_ends(&all_matched_lines(lhs_mps, rhs_mps), lhs_lines, rhs_lines);

    compact_gaps(&ensure_contiguous(&match_preceding_blanks(
        &matched_lines,
        lhs_lines,
        rhs_lines,
    )))
}

/// Extend `matched_lines` to include the leading and trailing lines
/// in the file.
///
/// If the leading or trailing lines are blank, we won't have any
/// MatchedPos values corresponding with those lines.
fn add_ends(
    matched_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut lhs_min = None;
    let mut rhs_min = None;
    for (lhs_line, rhs_line) in matched_lines {
        if lhs_min.is_none() && lhs_line.is_some() {
            lhs_min = *lhs_line;
        }
        if rhs_min.is_none() && rhs_line.is_some() {
            rhs_min = *rhs_line;
        }

        if lhs_min.is_some() && rhs_min.is_some() {
            break;
        }
    }

    let mut lhs_max = None;
    let mut rhs_max = None;
    for (lhs_line, rhs_line) in matched_lines.iter().rev() {
        if lhs_max.is_none() && lhs_line.is_some() {
            lhs_max = *lhs_line;
        }
        if rhs_max.is_none() && rhs_line.is_some() {
            rhs_max = *rhs_line;
        }

        if lhs_max.is_some() && rhs_max.is_some() {
            break;
        }
    }

    let mut res = vec![];

    if let (Some(lhs_min), Some(rhs_min)) = (lhs_min, rhs_min) {
        let mut lhs_line: LineNumber = 0.into();
        let mut rhs_line: LineNumber = 0.into();
        while lhs_line < lhs_min && rhs_line < rhs_min {
            res.push((Some(lhs_line), Some(rhs_line)));
            lhs_line = (lhs_line.0 + 1).into();
            rhs_line = (rhs_line.0 + 1).into();
        }
        while lhs_line < lhs_min {
            res.push((Some(lhs_line), None));
            lhs_line = (lhs_line.0 + 1).into();
        }
        while rhs_line < rhs_min {
            res.push((None, Some(rhs_line)));
            rhs_line = (rhs_line.0 + 1).into();
        }
    }

    res.extend_from_slice(matched_lines);

    if let (Some(lhs_max), Some(rhs_max)) = (lhs_max, rhs_max) {
        let mut lhs_line: LineNumber = (lhs_max.0 + 1).into();
        let mut rhs_line: LineNumber = (rhs_max.0 + 1).into();

        while (lhs_line.0 as usize) < lhs_lines.len() && (rhs_line.0 as usize) < rhs_lines.len() {
            res.push((Some(lhs_line), Some(rhs_line)));
            lhs_line = (lhs_line.0 + 1).into();
            rhs_line = (rhs_line.0 + 1).into();
        }
        while (lhs_line.0 as usize) < lhs_lines.len() {
            res.push((Some(lhs_line), None));
            lhs_line = (lhs_line.0 + 1).into();
        }
        while (rhs_line.0 as usize) < rhs_lines.len() {
            res.push((None, Some(rhs_line)));
            rhs_line = (rhs_line.0 + 1).into();
        }
    }

    res
}

fn all_matched_lines(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let lhs_matched_lines = matched_lines_from_unchanged(lhs_mps);
    let rhs_lines = all_lines(rhs_mps);

    let lines = merge_in_opposite_lines(&lhs_matched_lines, &rhs_lines);

    let lhs_lines = all_lines(lhs_mps);
    flip_tuples(&merge_in_opposite_lines(&flip_tuples(&lines), &lhs_lines))
}

fn all_lines(mps: &[MatchedPos]) -> Vec<LineNumber> {
    let mut lines = DftHashSet::default();
    for mp in mps {
        lines.insert(mp.pos.line);
    }
    let mut line_nums: Vec<LineNumber> = lines.into_iter().collect();
    line_nums.sort_unstable();
    line_nums
}

fn matched_lines_from_unchanged(
    mps: &[MatchedPos],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut highest_line = None;
    let mut highest_opposite_line = None;

    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    for mp in mps {
        let opposite_line = match &mp.kind {
            MatchKind::UnchangedToken { opposite_pos, .. }
            | MatchKind::UnchangedPartOfNovelItem { opposite_pos, .. } => {
                if let Some(highest_opposite_side) = highest_opposite_line {
                    opposite_pos
                        .iter()
                        .map(|p| p.line)
                        .find(|l| *l > highest_opposite_side)
                } else {
                    opposite_pos.first().map(|p| p.line)
                }
            }
            MatchKind::Novel { .. } | MatchKind::NovelWord { .. } | MatchKind::Ignored { .. } => {
                None
            }
        };

        let should_insert = match highest_line {
            Some(highest_this_side) => mp.pos.line > highest_this_side,
            None => true,
        };

        if should_insert && opposite_line.is_some() {
            res.push((Some(mp.pos.line), opposite_line));

            highest_line = Some(mp.pos.line);
            if opposite_line.is_some() {
                highest_opposite_line = opposite_line;
            }
        }
    }

    res
}

fn merge_in_opposite_lines(
    matched_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    novel_opposite_lines: &[LineNumber],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];

    let mut i = 0;
    for (line, opposite_line) in matched_lines {
        if let Some(opposite_line) = opposite_line {
            while let Some(novel_opposite_line) = novel_opposite_lines.get(i) {
                match novel_opposite_line.cmp(opposite_line) {
                    Ordering::Less => res.push((None, Some(*novel_opposite_line))),
                    Ordering::Equal => (),
                    Ordering::Greater => {
                        break;
                    }
                }
                i += 1;
            }
        }
        res.push((*line, *opposite_line));
    }

    while let Some(novel_opposite_line) = novel_opposite_lines.get(i) {
        res.push((None, Some(*novel_opposite_line)));
        i += 1;
    }

    res
}

/// If the lines immediately before `current` are blank on both sides,
/// return the line numbers of those blank lines.
fn match_blanks_between(
    current: (LineNumber, LineNumber),
    prev: (LineNumber, LineNumber),
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let (mut current_lhs, mut current_rhs) = current;
    if current_lhs.0 == 0 || current_rhs.0 == 0 {
        return vec![];
    }

    current_lhs = (current_lhs.0 - 1).into();
    current_rhs = (current_rhs.0 - 1).into();

    let mut res = vec![];
    while current_lhs > prev.0 && current_rhs > prev.1 {
        if lhs_lines[current_lhs.as_usize()] == "" && rhs_lines[current_rhs.as_usize()] == "" {
            res.push((Some(current_lhs), Some(current_rhs)));

            current_lhs = (current_lhs.0 - 1).into();
            current_rhs = (current_rhs.0 - 1).into();
        } else {
            break;
        }
    }

    res.reverse();
    res
}

fn match_blanks_before(
    current: (LineNumber, LineNumber),
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let (mut current_lhs, mut current_rhs) = current;
    if current_lhs.0 == 0 || current_rhs.0 == 0 {
        return vec![];
    }

    current_lhs = (current_lhs.0 - 1).into();
    current_rhs = (current_rhs.0 - 1).into();

    let mut res = vec![];
    loop {
        if lhs_lines[current_lhs.as_usize()] == "" && rhs_lines[current_rhs.as_usize()] == "" {
            res.push((Some(current_lhs), Some(current_rhs)));

            if current_lhs.0 == 0 || current_rhs.0 == 0 {
                break;
            }

            current_lhs = (current_lhs.0 - 1).into();
            current_rhs = (current_rhs.0 - 1).into();
        } else {
            break;
        }
    }

    res.reverse();
    res
}

/// For every line number pair, if there are blank lines preceding the
/// pair, add those blank lines to the vec.
///
/// This substantially improves alignment, leading to more readable
/// diffs.
///
/// We don't need to match blank lines following each pair. After
/// matching up all the matching lines, we just display the remaining
/// lines side-by-side regardless of content (see
/// `ensure_contiguous`). If there are blank lines immediately
/// following the pair, they will get aligned by this.
fn match_preceding_blanks(
    line_nums: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut prev_lhs = None;
    let mut prev_rhs = None;

    let mut res: Vec<(Option<LineNumber>, Option<LineNumber>)> = vec![];
    for (lhs_line_num, rhs_line_num) in line_nums {
        match (lhs_line_num, rhs_line_num, prev_lhs, prev_rhs) {
            (Some(lhs_line_num), Some(rhs_line_num), None, None) => {
                // The first pair.
                res.append(&mut match_blanks_before(
                    (*lhs_line_num, *rhs_line_num),
                    lhs_lines,
                    rhs_lines,
                ));
            }
            (Some(lhs_line_num), Some(rhs_line_num), Some(prev_lhs), Some(prev_rhs)) => {
                // Later pairs.
                res.append(&mut match_blanks_between(
                    (*lhs_line_num, *rhs_line_num),
                    (prev_lhs, prev_rhs),
                    lhs_lines,
                    rhs_lines,
                ));
            }
            _ => {}
        }

        res.push((*lhs_line_num, *rhs_line_num));

        if lhs_line_num.is_some() {
            prev_lhs = *lhs_line_num;
        }
        if rhs_line_num.is_some() {
            prev_rhs = *rhs_line_num;
        }
    }

    res
}

pub(crate) fn opposite_positions(
    mps: &[MatchedPos],
) -> DftHashMap<LineNumber, DftHashSet<LineNumber>> {
    let mut res: DftHashMap<LineNumber, DftHashSet<LineNumber>> = DftHashMap::default();

    for mp in mps {
        match &mp.kind {
            MatchKind::UnchangedToken {
                self_pos,
                opposite_pos,
                ..
            } => {
                for (self_span, opposite_span) in zip_repeat_shorter(self_pos, opposite_pos) {
                    let opposite_lines = res
                        .entry(self_span.line)
                        .or_insert_with(DftHashSet::default);
                    opposite_lines.insert(opposite_span.line);
                }
            }
            MatchKind::UnchangedPartOfNovelItem {
                opposite_pos,
                self_pos,
                ..
            } => {
                let opposite_lines = res.entry(self_pos.line).or_insert_with(DftHashSet::default);
                for opposite_span in opposite_pos {
                    opposite_lines.insert(opposite_span.line);
                }
            }
            MatchKind::Novel { .. } | MatchKind::NovelWord { .. } | MatchKind::Ignored { .. } => {}
        }
    }

    res
}

/// Before:
///
/// ```text
/// 118    --
/// 119    --
/// 120    -- (novel)
/// ```
///
/// After:
///
/// ```text
/// 118    88 (expanded from closest)
/// 119    89 (closest match)
/// 120    -- (novel)
/// ```
fn before_with_opposites(
    before_lines: &[LineNumber],
    opposite_lines: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
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

fn pad_before(ln: LineNumber, num_context_lines: usize) -> Vec<LineNumber> {
    let mut line_nums = vec![];

    let mut current = ln;
    // Use one more line than num_context_lines so we merge
    // immediately adjacent hunks.
    for _ in 0..num_context_lines + 1 {
        if current.0 == 0 {
            break;
        }

        current = (current.0 - 1).into();
        line_nums.push(current);
    }

    line_nums.reverse();
    line_nums
}

fn pad_after(ln: LineNumber, max_line: LineNumber, num_context_lines: usize) -> Vec<LineNumber> {
    let mut line_nums = vec![];

    let mut current = ln;
    // Use one more line than num_context_lines so we merge
    // immediately adjacent hunks.
    for _ in 0..num_context_lines + 1 {
        if current >= max_line {
            break;
        }

        current = (current.0 + 1).into();
        line_nums.push(current);
    }

    line_nums
}

pub(crate) fn flip_tuple<Tx: Copy, Ty: Copy>(pair: (Tx, Ty)) -> (Ty, Tx) {
    let (x, y) = pair;
    (y, x)
}

pub(crate) fn flip_tuples<Tx: Copy, Ty: Copy>(items: &[(Tx, Ty)]) -> Vec<(Ty, Tx)> {
    items.iter().copied().map(flip_tuple).collect()
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
    opposite_lines: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
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
                        all_opposites.retain(|x| *x > prev_max_opposite);
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

pub(crate) fn calculate_before_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    num_context_lines: usize,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    match lines.first() {
        Some(first_line) => match *first_line {
            (Some(lhs_line), _) => {
                let padded_lines = pad_before(lhs_line, num_context_lines);
                before_with_opposites(&padded_lines, opposite_to_lhs)
            }
            (_, Some(rhs_line)) => {
                let padded_lines = pad_before(rhs_line, num_context_lines);
                flip_tuples(&before_with_opposites(&padded_lines, opposite_to_rhs))
            }
            (None, None) => vec![],
        },
        None => vec![],
    }
}

pub(crate) fn calculate_after_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
    num_context_lines: usize,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    match lines.last() {
        Some(last_line) => match *last_line {
            (Some(lhs_line), _) => {
                let mut max_opposite = None;
                // TODO: It would be simpler to do one loop over all
                // the lines and take the last non-None on each side.
                for (_, rhs_line) in lines {
                    if let Some(rhs_line) = rhs_line {
                        max_opposite = Some(*rhs_line);
                    }
                }

                let padded_lines = pad_after(lhs_line, max_lhs_src_line, num_context_lines);
                after_with_opposites(
                    &padded_lines,
                    opposite_to_lhs,
                    max_opposite,
                    max_rhs_src_line,
                )
            }
            (_, Some(rhs_line)) => {
                let mut max_opposite = None;
                for (lhs_line, _) in lines {
                    if let Some(lhs_line) = lhs_line {
                        max_opposite = Some(*lhs_line);
                    }
                }

                let padded_lines = pad_after(rhs_line, max_rhs_src_line, num_context_lines);
                flip_tuples(&after_with_opposites(
                    &padded_lines,
                    opposite_to_rhs,
                    max_opposite,
                    max_lhs_src_line,
                ))
            }
            (None, None) => vec![],
        },
        None => vec![],
    }
}

pub(crate) fn add_context(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    opposite_to_lhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    opposite_to_rhs: &DftHashMap<LineNumber, DftHashSet<LineNumber>>,
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
    num_context_lines: usize,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let before_lines =
        calculate_before_context(lines, opposite_to_lhs, opposite_to_rhs, num_context_lines);
    let after_lines = calculate_after_context(
        &[&before_lines, lines].concat(),
        opposite_to_lhs,
        opposite_to_rhs,
        max_lhs_src_line,
        max_rhs_src_line,
        num_context_lines,
    );

    before_lines
        .into_iter()
        .chain(lines.iter().copied())
        .chain(after_lines)
        .collect()
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
fn ensure_contiguous(
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
fn compact_gaps(
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

#[cfg(test)]
mod tests {
    use std::iter::FromIterator;

    use line_numbers::SingleLineSpan;
    use pretty_assertions::assert_eq;

    use super::*;
    use crate::syntax::TokenKind;

    #[test]
    fn test_calculate_before_context() {
        let num_context_lines = 3;
        let lines = vec![(Some(1.into()), Some(1.into()))];

        let mut opposite_to_lhs = DftHashMap::default();
        opposite_to_lhs.insert(0.into(), DftHashSet::from_iter([0.into()]));

        let mut opposite_to_rhs = DftHashMap::default();
        opposite_to_rhs.insert(0.into(), DftHashSet::from_iter([0.into()]));

        let res = calculate_before_context(
            &lines,
            &opposite_to_lhs,
            &opposite_to_rhs,
            num_context_lines,
        );
        assert_eq!(res, vec![(Some(0.into()), Some(0.into()))]);
    }

    #[test]
    fn test_all_matched_lines() {
        let matched_pos = SingleLineSpan {
            line: 1.into(),
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
        let rhs_mps = [MatchedPos {
            kind: MatchKind::UnchangedToken {
                highlight: TokenKind::Delimiter,
                self_pos: vec![matched_pos],
                opposite_pos: vec![matched_pos],
            },
            pos: matched_pos,
        }];

        assert_eq!(
            all_matched_lines(&lhs_mps, &rhs_mps),
            vec![(Some(0.into()), None), (Some(1.into()), Some(1.into()))]
        );
    }

    #[test]
    fn test_matched_lines_novel_on_same_line() {
        let matched_pos = SingleLineSpan {
            line: 1.into(),
            start_col: 2,
            end_col: 3,
        };
        let mps = [
            MatchedPos {
                kind: MatchKind::Novel {
                    highlight: TokenKind::Delimiter,
                },
                pos: SingleLineSpan {
                    line: 1.into(),
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

        assert_eq!(
            matched_lines_from_unchanged(&mps),
            vec![(Some(1.into()), Some(1.into()))]
        );
    }

    #[test]
    fn test_all_lines() {
        let mps = [
            MatchedPos {
                kind: MatchKind::UnchangedPartOfNovelItem {
                    highlight: TokenKind::Delimiter,
                    self_pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 2,
                        end_col: 3,
                    },
                    opposite_pos: vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 2,
                        end_col: 3,
                    }],
                },
                pos: SingleLineSpan {
                    line: 0.into(),
                    start_col: 2,
                    end_col: 3,
                },
            },
            MatchedPos {
                kind: MatchKind::UnchangedToken {
                    highlight: TokenKind::Delimiter,
                    self_pos: vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 2,
                        end_col: 3,
                    }],
                    opposite_pos: vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 2,
                        end_col: 3,
                    }],
                },
                pos: SingleLineSpan {
                    line: 1.into(),
                    start_col: 2,
                    end_col: 3,
                },
            },
            MatchedPos {
                kind: MatchKind::Novel {
                    highlight: TokenKind::Delimiter,
                },
                pos: SingleLineSpan {
                    line: 2.into(),
                    start_col: 1,
                    end_col: 2,
                },
            },
        ];

        assert_eq!(all_lines(&mps), vec![0.into(), 1.into(), 2.into()]);
    }

    #[test]
    fn test_merge_in_opposite_lines() {
        let matched_lines = [(Some(1.into()), Some(1.into()))];
        let novel_lines = [0.into(), 3.into()];

        assert_eq!(
            merge_in_opposite_lines(&matched_lines, &novel_lines),
            vec![
                (None, Some(0.into())),
                (Some(1.into()), Some(1.into())),
                (None, Some(3.into()))
            ]
        );
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
    fn test_match_preceding_blanks() {
        let lhs_lines = vec!["x", "", "", "y"];
        let rhs_lines = vec!["x", "extra", "", "", "y"];

        let res = match_preceding_blanks(
            &[
                (Some(0.into()), Some(0.into())),
                (Some(3.into()), Some(4.into())),
            ],
            &lhs_lines,
            &rhs_lines,
        );
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(2.into())),
                (Some(2.into()), Some(3.into())),
                (Some(3.into()), Some(4.into())),
            ]
        );
    }

    #[test]
    fn test_match_preceding_blanks_first_pair() {
        let lhs_lines = vec!["", "", "y"];
        let rhs_lines = vec!["extra", "", "", "y"];

        let res =
            match_preceding_blanks(&[(Some(2.into()), Some(3.into()))], &lhs_lines, &rhs_lines);
        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(1.into())),
                (Some(1.into()), Some(2.into())),
                (Some(2.into()), Some(3.into())),
            ]
        );
    }

    #[test]
    fn test_match_blanks_between() {
        let lhs_lines = vec!["x", "", "", "y"];
        let rhs_lines = vec!["x", "extra", "", "", "y"];

        let res = match_blanks_between(
            (3.into(), 4.into()),
            (0.into(), 0.into()),
            &lhs_lines,
            &rhs_lines,
        );
        assert_eq!(
            res,
            vec![
                (Some(1.into()), Some(2.into())),
                (Some(2.into()), Some(3.into()))
            ]
        );
    }

    #[test]
    fn test_matched_lines_blank_at_ends() {
        let lhs_lines = vec!["", "foo", ""];
        let rhs_lines = vec!["", "foo", ""];

        let matched_pos = SingleLineSpan {
            line: 1.into(),
            start_col: 2,
            end_col: 3,
        };
        let lhs_mps = [MatchedPos {
            kind: MatchKind::UnchangedToken {
                highlight: TokenKind::Delimiter,
                self_pos: vec![matched_pos],
                opposite_pos: vec![matched_pos],
            },
            pos: matched_pos,
        }];
        let rhs_mps = [MatchedPos {
            kind: MatchKind::UnchangedToken {
                highlight: TokenKind::Delimiter,
                self_pos: vec![matched_pos],
                opposite_pos: vec![matched_pos],
            },
            pos: matched_pos,
        }];

        let res = all_matched_lines_filled(&lhs_mps, &rhs_mps, &lhs_lines, &rhs_lines);

        assert_eq!(
            res,
            vec![
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
                (Some(2.into()), Some(2.into()))
            ]
        );
    }

    #[test]
    fn test_pad_after_when_line_exceeds_max() {
        let res = pad_after(2.into(), 1.into(), 5);
        assert_eq!(res, vec![]);
    }
}
