//! Manipulate lines of text and groups of lines.

use crate::{
    intervals::Interval,
    positions::SingleLineSpan,
    syntax::{MatchKind, MatchedPos},
};
use lazy_static::lazy_static;
use regex::Regex;
use std::{
    cmp::{max, min, Ordering},
    fmt,
};

const MAX_GAP: usize = 1;

/// A distinct number type for line numbers, to prevent confusion with
/// other numerical data.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber(pub usize);

impl fmt::Debug for LineNumber {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_fmt(format_args!("LineNumber: {}", self.0))
    }
}

impl From<usize> for LineNumber {
    fn from(number: usize) -> Self {
        Self(number)
    }
}

/// A group of lines that are displayed together.
///
/// This is called a 'hunk' in some diff tools.
#[derive(Debug, PartialEq, Eq)]
pub struct LineGroup {
    pub lhs_lines: Option<Interval<LineNumber>>,
    pub rhs_lines: Option<Interval<LineNumber>>,
}

impl LineGroup {
    fn new() -> Self {
        Self {
            lhs_lines: None,
            rhs_lines: None,
        }
    }

    pub fn lhs_lines(&self) -> Vec<LineNumber> {
        let mut res = vec![];
        match &self.lhs_lines {
            Some(lhs_lines) => {
                if lhs_lines.is_empty() {
                    return vec![];
                }

                for line in lhs_lines.start.0..lhs_lines.end.0 {
                    res.push(line.into());
                }
            }
            None => {}
        }
        res
    }

    pub fn rhs_lines(&self) -> Vec<LineNumber> {
        let mut res = vec![];
        match &self.rhs_lines {
            Some(rhs_lines) => {
                if rhs_lines.end.0 == 0 {
                    return vec![];
                }

                for line in rhs_lines.start.0..rhs_lines.end.0 {
                    res.push(line.into());
                }
            }
            None => {}
        }
        res
    }

    pub fn pad(&mut self, amount: usize, max_lhs_line: LineNumber, max_rhs_line: LineNumber) {
        if let Some(Interval { start, end }) = self.lhs_lines.take() {
            let start = (max(0, start.0 as isize - amount as isize) as usize).into();
            let end = min(max_lhs_line.0 + 1, end.0 + amount).into();

            self.lhs_lines = Some(Interval { start, end });
        }

        if let Some(Interval { start, end }) = self.rhs_lines.take() {
            let start = (max(0, start.0 as isize - amount as isize) as usize).into();
            let end = min(max_rhs_line.0 + 1, end.0 + amount).into();

            self.rhs_lines = Some(Interval { start, end });
        }
    }

    /// Does `lg` overlap with `self`, or occur on exactly the next
    /// line?
    fn next_lg_touches(&self, lg: &LineGroup) -> bool {
        if let (Some(self_lines), Some(lg_lines)) = (&self.lhs_lines, &lg.lhs_lines) {
            let self_end = self_lines.end;
            let lg_start = lg_lines.start;

            if lg_start.0 <= self_end.0 + 1 {
                return true;
            }
        }

        if let (Some(self_lines), Some(lg_lines)) = (&self.rhs_lines, &lg.rhs_lines) {
            let self_end = self_lines.end;
            let lg_start = lg_lines.start;

            if lg_start.0 <= self_end.0 + 1 {
                return true;
            }
        }

        false
    }

    /// Extend LHS and RHS of self until it includes all the lines in
    /// `lg`. If either side of `lg` does not overlap with self, fill in
    /// the gap.
    fn next_extend(&mut self, lg: &LineGroup) {
        // TODO: rename to `lg` to `other`.
        match &mut self.lhs_lines {
            Some(Interval { end: self_end, .. }) => {
                if let Some(Interval { end: lg_end, .. }) = &lg.lhs_lines {
                    *self_end = *lg_end;
                }
            }
            None => {
                self.lhs_lines = lg.lhs_lines.clone();
            }
        }

        match &mut self.rhs_lines {
            Some(Interval { end: self_end, .. }) => {
                if let Some(Interval { end: lg_end, .. }) = &lg.rhs_lines {
                    *self_end = *lg_end;
                }
            }
            None => {
                self.rhs_lines = lg.rhs_lines.clone();
            }
        }
    }

    /// Does `mp` overlap with self? Assumes that `mp` either overlaps
    /// or occurs after self.
    fn next_overlaps(&self, is_lhs: bool, mp: &MatchedPos, max_gap: usize) -> bool {
        let (group_lines, opposite_group_lines) = if is_lhs {
            (&self.lhs_lines, &self.rhs_lines)
        } else {
            (&self.rhs_lines, &self.lhs_lines)
        };

        if let Some(group_lines) = group_lines {
            let last_group_line = group_lines.end;

            let first_match_line = mp.pos.line.0;

            if first_match_line <= last_group_line.0 + max_gap {
                return true;
            }
        }

        let opposite_pos: Vec<SingleLineSpan> = match &mp.kind {
            MatchKind::Unchanged { opposite_pos, .. } => opposite_pos.1.clone(),
            MatchKind::Novel {
                prev_opposite_pos, ..
            } => prev_opposite_pos.clone(),
            MatchKind::UnchangedCommentPart { opposite_pos, .. } => opposite_pos.clone(),
            MatchKind::ChangedCommentPart { prev_opposite_pos } => prev_opposite_pos.clone(),
        };

        if let (Some(first_opposite), Some(opposite_group_lines)) =
            (opposite_pos.first(), opposite_group_lines)
        {
            if first_opposite.line.0 <= opposite_group_lines.end.0 + max_gap {
                return true;
            }
        }

        false
    }

    fn add_lhs_pos(&mut self, line_span: Option<SingleLineSpan>) {
        if let Some(first) = line_span {
            if let Some(lhs_lines) = &self.lhs_lines {
                let start = min(lhs_lines.start, first.line);
                let end = max(lhs_lines.end, first.line);
                self.lhs_lines = Some(Interval { start, end });
            } else {
                self.lhs_lines = Some(Interval {
                    start: first.line,
                    end: first.line,
                });
            }
        }
    }
    fn add_rhs_pos(&mut self, line_span: Option<SingleLineSpan>) {
        if let Some(first) = line_span {
            if let Some(rhs_lines) = &self.rhs_lines {
                let start = min(rhs_lines.start, first.line);
                let end = max(rhs_lines.end, first.line);
                self.rhs_lines = Some(Interval { start, end });
            } else {
                self.rhs_lines = Some(Interval {
                    start: first.line,
                    end: first.line,
                });
            }
        }
    }

    fn add_lhs(&mut self, mp: &MatchedPos) {
        self.add_lhs_pos(Some(mp.pos));

        let opposite_pos: Vec<SingleLineSpan> = match &mp.kind {
            MatchKind::Unchanged { opposite_pos, .. } => {
                // TODO: should we take the open or close delim pos
                // here?
                opposite_pos.1.clone()
            }
            MatchKind::Novel {
                prev_opposite_pos, ..
            } => prev_opposite_pos.clone(),
            MatchKind::UnchangedCommentPart { opposite_pos, .. } => opposite_pos.clone(),
            MatchKind::ChangedCommentPart { prev_opposite_pos } => prev_opposite_pos.clone(),
        };

        // TODO: first or last here?
        self.add_rhs_pos(opposite_pos.first().copied());
    }
    fn add_rhs(&mut self, mp: &MatchedPos) {
        self.add_rhs_pos(Some(mp.pos));

        let opposite_pos: Vec<SingleLineSpan> = match &mp.kind {
            MatchKind::Unchanged { opposite_pos, .. } => {
                // TODO: should we take the open or close delim pos
                // here?
                opposite_pos.1.clone()
            }
            MatchKind::Novel {
                prev_opposite_pos, ..
            } => prev_opposite_pos.clone(),
            MatchKind::UnchangedCommentPart { opposite_pos, .. } => opposite_pos.clone(),
            MatchKind::ChangedCommentPart { prev_opposite_pos } => prev_opposite_pos.clone(),
        };

        // TODO: first or last here?
        self.add_lhs_pos(opposite_pos.first().copied());
    }

    pub fn max_visible_lhs(&self) -> LineNumber {
        match &self.lhs_lines {
            Some(lhs_lines) => lhs_lines.end,
            None => 0.into(),
        }
    }
    pub fn max_visible_rhs(&self) -> LineNumber {
        match &self.rhs_lines {
            Some(rhs_lines) => rhs_lines.end,
            None => 0.into(),
        }
    }
}

/// Compare two MatchedPos to see which starts earlier (on either
/// side).
pub fn compare_matched_pos(lhs: &MatchedPos, rhs: &MatchedPos) -> Ordering {
    let lhs_line = lhs.pos.line;
    let rhs_line = rhs.pos.line;
    lhs_line.cmp(&rhs_line)
}

pub fn join_overlapping(line_groups: Vec<LineGroup>) -> Vec<LineGroup> {
    let mut res = vec![];

    let mut prev: Option<LineGroup> = None;
    for line_group in line_groups {
        match prev.take() {
            Some(mut p) => {
                if p.next_lg_touches(&line_group) {
                    p.next_extend(&line_group);
                    prev = Some(p);
                } else {
                    // Does not overlap, just append to the result.
                    res.push(p);
                    prev = Some(line_group);
                }
            }
            None => {
                prev = Some(line_group);
            }
        }
    }

    if let Some(prev) = prev {
        res.push(prev);
    }

    res
}

/// The exact lines that have changes, grouped into contiguous
/// sections. Try to match up LHS and RHS lines, where the
/// corresponding changes are contiguous.
///
/// Moves across large distances will not be grouped.
pub fn visible_groups(
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
) -> Vec<LineGroup> {
    let lhs_positions = lhs_positions.iter().filter(|mp| !mp.kind.is_unchanged());
    let rhs_positions = rhs_positions.iter().filter(|mp| !mp.kind.is_unchanged());

    let mut positions = vec![];
    positions.extend(lhs_positions.map(|p| (true, p)));
    positions.extend(rhs_positions.map(|p| (false, p)));

    positions.sort_unstable_by(|(_, x), (_, y)| compare_matched_pos(x, y));

    let mut groups = vec![];
    let mut current: Option<LineGroup> = None;

    for (is_lhs, position) in positions {
        if let Some(group) = current.take() {
            if group.next_overlaps(is_lhs, position, MAX_GAP) {
                // Continue with this group.
                current = Some(group);
            } else {
                // Start new group
                groups.push(group);
                current = None;
            }
        }

        let mut group = current.unwrap_or_else(LineGroup::new);
        if is_lhs {
            group.add_lhs(position);
        } else {
            group.add_rhs(position);
        }
        current = Some(group);
    }

    if let Some(group) = current {
        groups.push(group);
    }

    groups
}

pub fn format_line_num(line_num: LineNumber) -> String {
    format!("{:>2} ", line_num.0 + 1)
}

/// A position in a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
pub struct LinePosition {
    /// Both zero-indexed.
    pub line: LineNumber,
    column: usize,
}

/// A struct for efficiently converting absolute string positions to
/// line-relative positions.
#[derive(Debug)]
pub struct NewlinePositions {
    /// A vector of the start positions of all the lines in `s`.
    positions: Vec<usize>,
    str_length: usize,
}

impl From<&str> for NewlinePositions {
    fn from(s: &str) -> Self {
        lazy_static! {
            static ref NEWLINE_RE: Regex = Regex::new("\n").unwrap();
        }
        let mut positions: Vec<_> = NEWLINE_RE.find_iter(s).map(|mat| mat.end()).collect();
        positions.insert(0, 0);

        NewlinePositions {
            positions,
            str_length: s.len(),
        }
    }
}

impl NewlinePositions {
    /// Convert to single-line spans. If the original span crosses a
    /// newline, the vec will contain multiple items.
    pub fn from_offsets(&self, region_start: usize, region_end: usize) -> Vec<SingleLineSpan> {
        let mut res = vec![];
        for (line_num, line_start) in self.positions.iter().enumerate() {
            let line_end = match self.positions.get(line_num + 1) {
                // TODO: this assumes lines terminate with \n, not \r\n.
                Some(v) => *v - 1,
                None => self.str_length,
            };

            if region_start > line_end {
                continue;
            }
            if *line_start > region_end {
                break;
            }

            res.push(SingleLineSpan {
                line: line_num.into(),
                start_col: if *line_start > region_start {
                    0
                } else {
                    region_start - line_start
                },
                end_col: if region_end < line_end {
                    region_end - line_start
                } else {
                    line_end - line_start
                },
            });
        }
        res
    }

    pub fn from_offsets_relative_to(
        &self,
        start: SingleLineSpan,
        region_start: usize,
        region_end: usize,
    ) -> Vec<SingleLineSpan> {
        let mut res = vec![];
        for pos in self.from_offsets(region_start, region_end) {
            if pos.line.0 == 0 {
                res.push(SingleLineSpan {
                    line: start.line,
                    start_col: start.start_col + pos.start_col,
                    end_col: start.start_col + pos.end_col,
                });
            } else {
                res.push(SingleLineSpan {
                    line: (start.line.0 + pos.line.0).into(),
                    start_col: pos.start_col,
                    end_col: pos.end_col,
                });
            }
        }

        res
    }
}

/// Return the length of `s` in codepoints. This ensures that it's
/// safe to slice `s` at this boundary.
pub fn codepoint_len(s: &str) -> usize {
    s.chars().count()
}

/// The first `len` codepoints of `s`. This is safer than slicing by
/// bytes, which panics if the byte isn't on a codepoint boundary.
pub fn substring_by_codepoint(s: &str, start: usize, end: usize) -> &str {
    let byte_start = s.char_indices().nth(start).unwrap().0;
    match s.char_indices().nth(end) {
        Some(byte_end) => &s[byte_start..byte_end.0],
        None => &s[byte_start..],
    }
}

/// Ensure that every line in `s` has this length. Pad short lines and
/// truncate long lines.
pub fn enforce_exact_length(s: &str, line_length: usize) -> String {
    let mut result = String::with_capacity(s.len());
    for line in s.lines() {
        if codepoint_len(line) > line_length {
            result.push_str(substring_by_codepoint(line, 0, line_length));
            result.push('\n');
        } else {
            // Pad with spaces.
            result.push_str(&format!("{:width$}\n", line, width = line_length));
        }
    }

    result
}

/// Truncate any lines in `s` that are longer than `line_length`.
pub fn enforce_max_length(s: &str, line_length: usize) -> String {
    let mut result = String::with_capacity(s.len());
    for line in s.lines() {
        // TODO: use length in chars not bytes.
        if line.len() > line_length {
            result.push_str(substring_by_codepoint(line, 0, line_length));
            result.push('\n');
        } else {
            result.push_str(&format!("{}\n", line));
        }
    }

    result
}

pub trait MaxLine {
    fn max_line(&self) -> LineNumber;
}

impl<S: AsRef<str>> MaxLine for S {
    fn max_line(&self) -> LineNumber {
        (max(1, self.as_ref().lines().count()) - 1).into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::syntax::{AtomKind, MatchKind, TokenKind};
    use pretty_assertions::assert_eq;

    #[test]
    fn from_offsets_first_line() {
        let newline_positions: NewlinePositions = "foo".into();
        let line_spans = newline_positions.from_offsets(1, 3);
        assert_eq!(
            line_spans,
            vec![SingleLineSpan {
                line: 0.into(),
                start_col: 1,
                end_col: 3
            }]
        );
    }

    #[test]
    fn from_offsets_first_char() {
        let newline_positions: NewlinePositions = "foo".into();
        let line_spans = newline_positions.from_offsets(0, 0);
        assert_eq!(
            line_spans,
            vec![SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 0
            }]
        );
    }

    #[test]
    fn test_visible_groups_ignores_unchanged() {
        let lhs_positions = vec![MatchedPos {
            kind: MatchKind::Unchanged {
                highlight: TokenKind::Atom(AtomKind::Normal),
                self_pos: (vec![], vec![]),
                opposite_pos: (vec![], vec![]),
            },
            pos: SingleLineSpan {
                line: 1.into(),
                start_col: 0,
                end_col: 1,
            },
        }];
        let rhs_positions = vec![MatchedPos {
            kind: MatchKind::Unchanged {
                highlight: TokenKind::Atom(AtomKind::Normal),
                self_pos: (vec![], vec![]),
                opposite_pos: (vec![], vec![]),
            },
            pos: SingleLineSpan {
                line: 1.into(),
                start_col: 0,
                end_col: 1,
            },
        }];

        let res = visible_groups(&lhs_positions, &rhs_positions);
        assert_eq!(res, vec![]);
    }

    #[test]
    fn from_offsets_split_over_multiple_lines() {
        let newline_positions: NewlinePositions = "foo\nbar\nbaz\naaaaaaaaaaa".into();
        let line_spans = newline_positions.from_offsets(5, 10);

        assert_eq!(
            line_spans,
            vec![
                (SingleLineSpan {
                    line: 1.into(),
                    start_col: 1,
                    end_col: 3
                }),
                (SingleLineSpan {
                    line: 2.into(),
                    start_col: 0,
                    end_col: 2
                })
            ]
        );
    }

    #[test]
    fn enforce_length_short() {
        let result = enforce_exact_length("foo\nbar\n", 5);
        assert_eq!(result, "foo  \nbar  \n");
    }

    #[test]
    fn enforce_length_long() {
        let result = enforce_exact_length("foobar\nbarbaz\n", 3);
        assert_eq!(result, "foo\nbar\n");
    }

    #[test]
    fn str_max_line() {
        let line: String = "foo\nbar".into();
        assert_eq!(line.max_line().0, 1);
    }

    #[test]
    fn empty_str_max_line() {
        let line: String = "".into();
        assert_eq!(line.max_line().0, 0);
    }

    #[test]
    fn from_offsets_relative_to() {
        let newline_positions: NewlinePositions = "foo\nbar".into();

        let pos = SingleLineSpan {
            line: 1.into(),
            start_col: 1,
            end_col: 1,
        };

        let line_spans = newline_positions.from_offsets_relative_to(pos, 1, 2);
        assert_eq!(
            line_spans,
            vec![SingleLineSpan {
                line: 1.into(),
                start_col: 2,
                end_col: 3
            }]
        );
    }

    #[test]
    fn line_group_uses_interval_correctly() {
        let group = LineGroup {
            lhs_lines: Some(Interval {
                start: 1.into(),
                end: 3.into(),
            }),
            rhs_lines: None,
        };

        // Intervals are inclusive of `start` but exclusive of `end`.
        assert_eq!(group.lhs_lines(), vec![1.into(), 2.into()])
    }

    #[test]
    fn codepoint_len_non_ascii() {
        assert_eq!(codepoint_len("ƒoo"), 3);
    }
}
