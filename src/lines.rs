#![allow(dead_code)]

use crate::positions::{Span, LineSpan};
use regex::Regex;

#[cfg(test)]
use pretty_assertions::assert_eq;

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber {
    pub number: usize,
}

impl From<usize> for LineNumber {
    fn from(number: usize) -> Self {
        LineNumber { number }
    }
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
    fn split_line_boundaries(
        self: &NewlinePositions,
        start: LinePosition,
        end: LinePosition,
    ) -> Vec<LineSpan> {
        let mut ranges = vec![];

        if start.line == end.line {
            ranges.push(LineSpan {
                line: start.line,
                start_col: start.column,
                end_col: end.column,
            });
            return ranges;
        } else {
            let first_line_end_pos = self.positions[start.line.number + 1] - 1;
            let first_line_length = first_line_end_pos - self.positions[start.line.number];
            ranges.push(LineSpan {
                line: start.line,
                start_col: start.column,
                end_col: first_line_length,
            });
        }

        for line_num in (start.line.number + 1)..end.line.number {
            let line_end_pos = self.positions[line_num + 1] - 1;
            let line_length = line_end_pos - self.positions[line_num];
            ranges.push(LineSpan {
                line: line_num.into(),
                start_col: 0,
                end_col: line_length,
            });
        }

        // Last line, up to end.
        ranges.push(LineSpan {
            line: end.line,
            start_col: 0,
            end_col: end.column,
        });

        ranges
    }

    /// Convert absolute string ranges to line-relative ranges. If the
    /// absolute range crosses a newline, split it into multiple
    /// line-relative ranges.
    pub fn from_ranges(self: &NewlinePositions, ranges: &[Span]) -> Vec<LineSpan> {
        let mut rel_positions = vec![];
        for range in ranges {
            let start_pos = self.from_offset(range.start);
            let end_pos = self.from_offset(range.end);

            rel_positions.extend(self.split_line_boundaries(start_pos, end_pos));
        }

        rel_positions
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
    let relative_ranges = newline_positions.from_ranges(&vec![Span { start: 1, end: 3 }]);
    assert_eq!(
        relative_ranges,
        vec![LineSpan {
            line: 0.into(),
            start_col: 1,
            end_col: 3
        }]
    );
}

#[test]
fn from_ranges_split_over_multiple_lines() {
    let newline_positions: NewlinePositions = "foo\nbar\nbaz\naaaaaaaaaaa".into();
    let relative_ranges = newline_positions.from_ranges(&vec![Span { start: 5, end: 10 }]);

    assert_eq!(
        relative_ranges,
        vec![
            (LineSpan {
                line: 1.into(),
                start_col: 1,
                end_col: 3
            }),
            (LineSpan {
                line: 2.into(),
                start_col: 0,
                end_col: 2
            })
        ]
    );
}

pub fn max_line(s: &str) -> LineNumber {
    LineNumber::from(s.lines().count() - 1)
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
