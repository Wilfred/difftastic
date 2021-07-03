use crate::positions::SingleLineSpan;
use crate::syntax::{MatchKind, MatchedPos};
use regex::Regex;
use std::cmp::{max, min, Ordering};
use std::fmt;
use std::ops::RangeInclusive;

const SPACER: &str = "  ";
const MAX_GAP: usize = 1;
const MIN_WIDTH: usize = 35;

#[cfg(test)]
use pretty_assertions::assert_eq;

#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber {
    pub number: usize,
}

impl fmt::Debug for LineNumber {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_fmt(format_args!("LineNumber: {}", self.number))
    }
}

impl From<usize> for LineNumber {
    fn from(number: usize) -> Self {
        LineNumber { number }
    }
}

#[derive(Debug, PartialEq, Eq)]
pub struct LineGroup {
    lhs_lines: Option<RangeInclusive<LineNumber>>,
    rhs_lines: Option<RangeInclusive<LineNumber>>,
}

impl LineGroup {
    fn new() -> Self {
        Self {
            lhs_lines: None,
            rhs_lines: None,
        }
    }

    // We can't iterate over a RangeInclusive<LineNumber> in safe, stable Rust. See
    // https://github.com/rust-lang/rust/issues/42168
    pub fn iter_lhs_lines(&self) -> RangeInclusive<usize> {
        let empty_iter = 1usize..=0;
        match &self.lhs_lines {
            Some(lhs_lines) => lhs_lines.start().number..=lhs_lines.end().number,
            None => empty_iter,
        }
    }

    pub fn iter_rhs_lines(&self) -> RangeInclusive<usize> {
        let empty_iter = 1usize..=0;
        match &self.rhs_lines {
            Some(rhs_lines) => rhs_lines.start().number..=rhs_lines.end().number,
            None => empty_iter,
        }
    }

    pub fn pad(&mut self, amount: usize, max_lhs_line: LineNumber, max_rhs_line: LineNumber) {
        if let Some(lhs_lines) = self.lhs_lines.take() {
            let (mut start, mut end) = lhs_lines.into_inner();

            start = (max(0, start.number as isize - amount as isize) as usize).into();
            end = min(max_lhs_line.number, end.number + amount).into();

            self.lhs_lines = Some(start..=end);
        }

        if let Some(rhs_lines) = self.rhs_lines.take() {
            let (mut start, mut end) = rhs_lines.into_inner();

            start = (max(0, start.number as isize - amount as isize) as usize).into();
            end = min(max_rhs_line.number, end.number + amount).into();

            self.rhs_lines = Some(start..=end);
        }
    }

    /// Does `lg` overlap with `self`, or occur on exactly the next
    /// line?
    fn next_lg_touches(&self, lg: &LineGroup) -> bool {
        if let (Some(self_lines), Some(lg_lines)) = (&self.lhs_lines, &lg.lhs_lines) {
            let self_end = self_lines.end();
            let lg_start = lg_lines.start();

            if lg_start.number <= self_end.number + 1 {
                return true;
            }
        }

        if let (Some(self_lines), Some(lg_lines)) = (&self.rhs_lines, &lg.rhs_lines) {
            let self_end = self_lines.end();
            let lg_start = lg_lines.start();

            if lg_start.number <= self_end.number + 1 {
                return true;
            }
        }

        false
    }

    /// Extend LHS and RHS of self until it includes all the lines in
    /// `lg`. If either side of `lg` does not overlap with self, fill in
    /// the gap.
    fn next_extend(&mut self, lg: &LineGroup) {
        match &self.lhs_lines {
            Some(self_lhs) => {
                if let Some(lg_lines) = &lg.lhs_lines {
                    self.lhs_lines = Some(*self_lhs.start()..=*lg_lines.end());
                }
            }
            None => {
                self.lhs_lines = lg.lhs_lines.clone();
            }
        }

        match &self.rhs_lines {
            Some(self_rhs) => {
                if let Some(lg_lines) = &lg.rhs_lines {
                    self.rhs_lines = Some(*self_rhs.start()..=*lg_lines.end());
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
            let last_group_line = group_lines.end();

            let match_lines = &mp.pos;
            assert!(!match_lines.is_empty());
            let first_match_line = match_lines[0].line.number;

            if first_match_line <= last_group_line.number + max_gap {
                return true;
            }
        }
        if let (Some(first_opposite), Some(opposite_group_lines)) =
            (mp.prev_opposite_pos.first(), opposite_group_lines)
        {
            if first_opposite.line.number <= opposite_group_lines.end().number + max_gap {
                return true;
            }
        }

        false
    }

    fn add_lhs_pos(&mut self, line_spans: &[SingleLineSpan]) {
        if let (Some(first), Some(last)) = (line_spans.first(), line_spans.last()) {
            if let Some(lhs_lines) = &self.lhs_lines {
                let start = min(*lhs_lines.start(), first.line);
                let end = max(*lhs_lines.end(), last.line);
                self.lhs_lines = Some(start..=end);
            } else {
                self.lhs_lines = Some(first.line..=last.line);
            }
        }
    }
    fn add_rhs_pos(&mut self, line_spans: &[SingleLineSpan]) {
        if let (Some(first), Some(last)) = (line_spans.first(), line_spans.last()) {
            if let Some(rhs_lines) = &self.rhs_lines {
                let start = min(*rhs_lines.start(), first.line);
                let end = max(*rhs_lines.end(), last.line);
                self.rhs_lines = Some(start..=end);
            } else {
                self.rhs_lines = Some(first.line..=last.line);
            }
        }
    }

    fn add_lhs(&mut self, mp: &MatchedPos) {
        self.add_lhs_pos(&mp.pos);
        self.add_rhs_pos(&mp.prev_opposite_pos);
    }
    fn add_rhs(&mut self, mp: &MatchedPos) {
        self.add_rhs_pos(&mp.pos);
        self.add_lhs_pos(&mp.prev_opposite_pos);
    }

    pub fn max_visible_lhs(&self) -> LineNumber {
        match &self.lhs_lines {
            Some(lhs_lines) => *lhs_lines.end(),
            None => 0.into(),
        }
    }
    pub fn max_visible_rhs(&self) -> LineNumber {
        match &self.rhs_lines {
            Some(rhs_lines) => *rhs_lines.end(),
            None => 0.into(),
        }
    }
}

fn horizontal_concat(
    left: &str,
    right: &str,
    lhs_content_width: usize,
    lhs_column_width: usize,
) -> String {
    let left_str_lines: Vec<&str> = left.lines().collect();
    let right_str_lines: Vec<&str> = right.lines().collect();

    let mut i = 0;
    let mut res = String::new();
    loop {
        match (left_str_lines.get(i), right_str_lines.get(i)) {
            (Some(left_line), Some(right_line)) => {
                res.push_str(left_line);
                res.push_str(SPACER);
                res.push_str(right_line);
            }
            (Some(left_line), None) => {
                res.push_str(left_line);
            }
            (None, Some(right_line)) => {
                res.push_str(&" ".repeat(lhs_column_width + lhs_content_width));
                res.push_str(SPACER);
                res.push_str(right_line);
            }
            (None, None) => break,
        }
        res.push('\n');
        i += 1;
    }

    res
}

/// Compare two MatchedPos to see which starts earlier (on either
/// side).
fn compare_matched_pos(lhs: &MatchedPos, rhs: &MatchedPos) -> Ordering {
    let lhs_line = lhs.pos[0].line;
    let rhs_line = rhs.pos[0].line;
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
    let lhs_positions = lhs_positions
        .iter()
        .filter(|mp| mp.kind != MatchKind::Unchanged);
    let rhs_positions = rhs_positions
        .iter()
        .filter(|mp| mp.kind != MatchKind::Unchanged);

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

#[test]
fn test_visible_groups_ignores_unchanged() {
    let lhs_positions = vec![MatchedPos {
        kind: MatchKind::Unchanged,
        pos: vec![SingleLineSpan {
            line: 1.into(),
            start_col: 0,
            end_col: 1,
        }],
        prev_opposite_pos: vec![],
    }];
    let rhs_positions = vec![MatchedPos {
        kind: MatchKind::Unchanged,
        pos: vec![SingleLineSpan {
            line: 1.into(),
            start_col: 0,
            end_col: 1,
        }],
        prev_opposite_pos: vec![],
    }];

    let res = visible_groups(&lhs_positions, &rhs_positions);
    assert_eq!(res, vec![]);
}

pub fn format_line_num(line_num: usize) -> String {
    format!("{:<2} ", line_num + 1)
}

pub fn format_line_num_padded(line_num: usize, column_width: usize) -> String {
    format!("{:width$} ", line_num + 1, width = column_width - 1)
}

pub fn lhs_printable_width(lhs: &str, lhs_column_width: usize, terminal_width: usize) -> usize {
    let longest_line_length = lhs.lines().map(|line| line.len()).max().unwrap_or(1);
    let longest_line = longest_line_length + lhs_column_width;

    let space_available = terminal_width / 2 - SPACER.len();
    max(MIN_WIDTH, min(longest_line, space_available))
}

pub fn rhs_printable_width(
    rhs: &str,
    lhs_width: usize,
    rhs_column_width: usize,
    terminal_width: usize,
) -> usize {
    let longest_line_length = rhs.lines().map(|line| line.len()).max().unwrap_or(1);
    let longest_line = longest_line_length + rhs_column_width;

    let space_available = (terminal_width - SPACER.len()) - lhs_width;

    max(MIN_WIDTH, min(longest_line, space_available))
}

/// Display all the lines in `lhs` and `rhs` that are mentioned in
/// `groups`. horizontally concatenating the matched lines.
pub fn apply_groups(
    lhs: &str,
    rhs: &str,
    // TODO: define a helper function that operates on a single
    // LineGroup.
    groups: &[LineGroup],
    lhs_content_width: usize,
    lhs_column_width: usize,
    rhs_column_width: usize,
    terminal_width: usize,
) -> String {
    let lhs_lines: Vec<_> = lhs.lines().collect();
    let rhs_lines: Vec<_> = rhs.lines().collect();

    let mut result = String::new();
    let spacer = "-".repeat(terminal_width);

    for (i, group) in groups.iter().enumerate() {
        let mut lhs_result = String::new();
        for lhs_line_num in group.iter_lhs_lines() {
            lhs_result.push_str(&format_line_num_padded(lhs_line_num, lhs_column_width));

            match lhs_lines.get(lhs_line_num) {
                Some(line) => lhs_result.push_str(line),
                None => lhs_result.push_str(&" ".repeat(lhs_content_width)),
            }
            lhs_result.push('\n');
        }

        let mut rhs_result = String::new();
        for rhs_line_num in group.iter_rhs_lines() {
            rhs_result.push_str(&format_line_num_padded(rhs_line_num, rhs_column_width));
            rhs_result.push_str(rhs_lines.get(rhs_line_num).unwrap_or(&""));
            rhs_result.push('\n');
        }

        result.push_str(&horizontal_concat(
            &lhs_result,
            &rhs_result,
            lhs_content_width,
            lhs_column_width,
        ));
        if i != groups.len() - 1 {
            result.push_str(&spacer);
            result.push('\n');
        }
    }

    result
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
        let newline_re = Regex::new("\n").unwrap();
        let mut positions: Vec<_> = newline_re.find_iter(s).map(|mat| mat.end()).collect();
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
            if *line_start >= region_end {
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
}

#[test]
fn from_ranges_first_line() {
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
fn from_ranges_split_over_multiple_lines() {
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

/// Ensure that every line in `s` has this length. Pad short lines and
/// truncate long lines.
pub fn enforce_length(s: &str, line_length: usize) -> String {
    let mut result = String::with_capacity(s.len());
    for line in s.lines() {
        // TODO: use length in chars not bytes.
        if line.len() > line_length {
            // Truncate.
            result.push_str(&line[0..line_length]);
            result.push('\n');
        } else {
            // Pad with spaces.
            result.push_str(&format!("{:width$}\n", line, width = line_length));
        }
    }

    result
}

#[test]
fn enforce_length_short() {
    let result = enforce_length("foo\nbar\n", 5);
    assert_eq!(result, "foo  \nbar  \n");
}

#[test]
fn enforce_length_long() {
    let result = enforce_length("foobar\nbarbaz\n", 3);
    assert_eq!(result, "foo\nbar\n");
}

pub trait MaxLine {
    fn max_line(&self) -> LineNumber;
}

impl MaxLine for String {
    fn max_line(&self) -> LineNumber {
        (self.lines().count() - 1).into()
    }
}

#[test]
fn str_max_line() {
    let line: String = "foo\nbar".into();
    assert_eq!(line.max_line().number, 1);
}
