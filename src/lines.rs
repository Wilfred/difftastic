use crate::positions::SingleLineSpan;
use crate::tree_diff::{MatchKind, MatchedPos};
use regex::Regex;
use std::cmp::{min, Ordering};
use std::fmt;

#[cfg(test)]
use crate::positions::Span;
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
    lhs_lines: Vec<LineNumber>,
    rhs_lines: Vec<LineNumber>,
}

impl LineGroup {
    fn new() -> Self {
        Self {
            lhs_lines: vec![],
            rhs_lines: vec![],
        }
    }

    pub fn pad(&mut self, amount: usize) {
        if !self.lhs_lines.is_empty() {
            for _ in 0..amount {
                let current = self.lhs_lines[0].number;
                if current <= 0 {
                    break;
                }

                self.lhs_lines.insert(0, (current - 1).into());
            }

            for _ in 0..amount {
                let current = self.lhs_lines.last().unwrap().number;
                if current <= 0 {
                    break;
                }

                self.lhs_lines.push((current + 1).into());
            }
        }

        if !self.rhs_lines.is_empty() {
            for _ in 0..amount {
                let current = self.rhs_lines[0].number;
                if current <= 0 {
                    break;
                }

                self.rhs_lines.insert(0, (current - 1).into());
            }

            for _ in 0..amount {
                let current = self.rhs_lines.last().unwrap().number;
                if current <= 0 {
                    break;
                }

                self.rhs_lines.push((current + 1).into());
            }
        }
    }

    fn overlaps(&self, is_lhs: bool, mp: &MatchedPos) -> bool {
        if is_lhs {
            self.overlaps_lhs(mp)
        } else {
            self.overlaps_rhs(mp)
        }
    }

    fn overlaps_lhs(&self, mp: &MatchedPos) -> bool {
        if self.lhs_lines.is_empty() {
            return false;
        }

        let lines = &mp.pos;
        assert!(!lines.is_empty());
        let first_match_line = lines[0].line.number;
        let last_match_line = lines.last().unwrap().line.number;

        let first_group_line = self.lhs_lines[0].number;
        let last_group_line = self.lhs_lines.last().unwrap().number;

        // [  ] match region
        //  []  group region
        if first_match_line <= first_group_line && last_match_line >= last_group_line {
            return true;
        }

        // [ ]  match region
        //  [ ] group region
        if last_match_line >= first_group_line && last_match_line <= last_group_line {
            return true;
        }

        //  [ ] match region
        // [ ]  group region
        if first_match_line >= first_group_line && first_match_line <= last_group_line {
            return true;
        }

        false
    }

    fn overlaps_rhs(&self, mp: &MatchedPos) -> bool {
        if self.rhs_lines.is_empty() {
            return false;
        }

        let lines = &mp.pos;
        assert!(!lines.is_empty());
        let first_match_line = lines[0].line.number;
        let last_match_line = lines.last().unwrap().line.number;

        let first_group_line = self.rhs_lines[0].number;
        let last_group_line = self.rhs_lines.last().unwrap().number;

        // [  ] match region
        //  []  group region
        if first_match_line <= first_group_line && last_match_line >= last_group_line {
            return true;
        }

        // [ ]  match region
        //  [ ] group region
        if last_match_line >= first_group_line && last_match_line <= last_group_line {
            return true;
        }

        //  [ ] match region
        // [ ]  group region
        if first_match_line >= first_group_line && first_match_line <= last_group_line {
            return true;
        }

        false
    }

    fn add_lhs_pos(&mut self, line_spans: &[SingleLineSpan]) {
        let current_highest = self
            .lhs_lines
            .last()
            .map(|ln| ln.number as isize)
            .unwrap_or(-1);
        for line_span in line_spans {
            if (line_span.line.number as isize) > current_highest {
                self.lhs_lines.push(line_span.line);
            }
        }
    }
    fn add_rhs_pos(&mut self, line_spans: &[SingleLineSpan]) {
        let current_highest = self
            .rhs_lines
            .last()
            .map(|ln| ln.number as isize)
            .unwrap_or(-1);
        for line_span in line_spans {
            if (line_span.line.number as isize) > current_highest {
                self.rhs_lines.push(line_span.line);
            }
        }
    }

    fn add_lhs(&mut self, mp: &MatchedPos) {
        self.add_lhs_pos(&mp.pos);
        if let Some(ref opposite_pos) = mp.prev_opposite_pos {
            self.add_rhs_pos(opposite_pos);
        }
    }
    fn add_rhs(&mut self, mp: &MatchedPos) {
        self.add_rhs_pos(&mp.pos);
        if let Some(ref opposite_pos) = mp.prev_opposite_pos {
            self.add_lhs_pos(opposite_pos);
        }
    }

    fn is_empty(&self) -> bool {
        self.lhs_lines.is_empty() && self.rhs_lines.is_empty()
    }
}

pub fn horizontal_concat(left: &str, right: &str, max_left_length: usize) -> String {
    let left_str_lines: Vec<&str> = left.lines().collect();
    let right_str_lines: Vec<&str> = right.lines().collect();

    let mut i = 0;
    let mut res = String::new();
    let spacer = "  ";
    loop {
        match (left_str_lines.get(i), right_str_lines.get(i)) {
            (Some(left_line), Some(right_line)) => {
                res.push_str(left_line);
                res.push_str(spacer);
                res.push_str(right_line);
            }
            (Some(left_line), None) => {
                res.push_str(left_line);
            }
            (None, Some(right_line)) => {
                res.push_str(&" ".repeat(max_left_length));
                res.push_str(spacer);
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
    let mut lhs_line = lhs.pos[0].line;
    if let Some(opposite_pos) = &lhs.prev_opposite_pos {
        lhs_line = min(opposite_pos[0].line, lhs_line);
    }

    let mut rhs_line = rhs.pos[0].line;
    if let Some(opposite_pos) = &rhs.prev_opposite_pos {
        rhs_line = min(opposite_pos[0].line, rhs_line);
    }

    lhs_line.cmp(&rhs_line)
}

/// The exact lines that have changes, grouped into contiguous
/// sections with the corresponding line numbers of the other side.
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
    let mut group = LineGroup::new();

    for (is_lhs, position) in positions {
        if group.is_empty() || group.overlaps(is_lhs, position) {
            // Add to the current group.
        } else {
            // Start new group
            groups.push(group);
            group = LineGroup::new();
        }
        if is_lhs {
            group.add_lhs(position);
        } else {
            group.add_rhs(position);
        }
    }

    if !group.is_empty() {
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
        prev_opposite_pos: None,
    }];
    let rhs_positions = vec![MatchedPos {
        kind: MatchKind::Unchanged,
        pos: vec![SingleLineSpan {
            line: 1.into(),
            start_col: 0,
            end_col: 1,
        }],
        prev_opposite_pos: None,
    }];

    let res = visible_groups(&lhs_positions, &rhs_positions);
    assert_eq!(res, vec![]);
}

pub fn apply_groups(lhs: &str, rhs: &str, groups: &[LineGroup], max_left_length: usize) -> String {
    let lhs_lines: Vec<_> = lhs.lines().collect();
    let rhs_lines: Vec<_> = rhs.lines().collect();

    let mut result = String::new();
    let spacer = "--------------------------\n";

    for group in groups {
        let mut lhs_result = String::new();
        for lhs_line_num in &group.lhs_lines {
            lhs_result.push_str(lhs_lines.get(lhs_line_num.number).unwrap_or(&""));
            lhs_result.push_str("\n");
        }

        let mut rhs_result = String::new();
        for rhs_line_num in &group.rhs_lines {
            rhs_result.push_str(rhs_lines.get(rhs_line_num.number).unwrap_or(&""));
            rhs_result.push_str("\n");
        }

        result.push_str(&horizontal_concat(
            &lhs_result,
            &rhs_result,
            max_left_length,
        ));
        result.push_str(spacer);
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
}

impl From<&str> for NewlinePositions {
    fn from(s: &str) -> Self {
        let newline_re = Regex::new("\n").unwrap();
        let mut positions: Vec<_> = newline_re.find_iter(s).map(|mat| mat.end()).collect();
        positions.insert(0, 0);

        NewlinePositions { positions }
    }
}

impl NewlinePositions {
    pub fn from_offset(self: &NewlinePositions, offset: usize) -> LinePosition {
        for line_num in (0..self.positions.len()).rev() {
            if offset >= self.positions[line_num] {
                return LinePosition {
                    line: line_num.into(),
                    column: offset - self.positions[line_num],
                };
            }
        }

        LinePosition {
            line: 0.into(),
            column: offset,
        }
    }

    // Given a range within a string, split it into ranges where each
    // range is on a single line.
    pub fn split_line_boundaries(
        self: &NewlinePositions,
        start: LinePosition,
        end: LinePosition,
    ) -> Vec<SingleLineSpan> {
        let mut res = vec![];

        if start.line == end.line {
            res.push(SingleLineSpan {
                line: start.line,
                start_col: start.column,
                end_col: end.column,
            });
            return res;
        } else {
            let first_line_end_pos = self.positions[start.line.number + 1] - 1;
            let first_line_length = first_line_end_pos - self.positions[start.line.number];
            res.push(SingleLineSpan {
                line: start.line,
                start_col: start.column,
                end_col: first_line_length,
            });
        }

        for line_num in (start.line.number + 1)..end.line.number {
            let line_end_pos = self.positions[line_num + 1] - 1;
            let line_length = line_end_pos - self.positions[line_num];
            res.push(SingleLineSpan {
                line: line_num.into(),
                start_col: 0,
                end_col: line_length,
            });
        }

        // Last line, up to end.
        res.push(SingleLineSpan {
            line: end.line,
            start_col: 0,
            end_col: end.column,
        });

        res
    }
}

#[test]
fn from_offset_newline_boundary() {
    let newline_positions = NewlinePositions::from("abc\nbar");
    let position = newline_positions.from_offset(4);
    assert_eq!(
        position,
        LinePosition {
            line: 1.into(),
            column: 0
        }
    );
}

#[test]
fn from_ranges_first_line() {
    let newline_positions: NewlinePositions = "foo".into();
    let pos = Span { start: 1, end: 3 };
    let line_spans = pos.to_line_spans(&newline_positions);
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
    let pos = Span { start: 5, end: 10 };
    let line_spans = pos.to_line_spans(&newline_positions);

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
