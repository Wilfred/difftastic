//! Manipulate lines of text and groups of lines.

// The `from_offset*` methods on NewlinePositions are sensible names,
// and the docs clippy cites:
// https://rust-lang.github.io/api-guidelines/naming.html#ad-hoc-conversions-follow-as_-to_-into_-conventions-c-conv
// don't actually have an opinion on `from_foo` names.
#![allow(clippy::wrong_self_convention)]

use crate::positions::SingleLineSpan;
use std::ops::Sub;
use std::{cmp::Ordering, fmt};

/// A distinct number type for line numbers, to prevent confusion with
/// other numerical data.
///
/// Zero-indexed internally.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber(pub u32);

impl LineNumber {
    pub fn one_indexed(self) -> u32 {
        self.0 + 1
    }

    pub fn as_usize(self) -> usize {
        self.0 as usize
    }
}

impl fmt::Debug for LineNumber {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_fmt(format_args!(
            "LineNumber: {} (raw: {})",
            self.one_indexed(),
            self.0
        ))
    }
}

impl From<u32> for LineNumber {
    fn from(number: u32) -> Self {
        Self(number)
    }
}

pub fn format_line_num(line_num: LineNumber) -> String {
    format!("{} ", line_num.one_indexed())
}

/// A position in a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
struct LinePosition {
    /// Both zero-indexed.
    pub line: LineNumber,
    column: usize,
}

/// A struct for efficiently converting absolute string positions to
/// line-relative positions.
#[derive(Debug)]
pub struct NewlinePositions {
    /// A vector of the start and end positions of all the lines in
    /// `s`. Positions include the newline character itself.
    positions: Vec<(usize, usize)>,
}

impl From<&str> for NewlinePositions {
    fn from(s: &str) -> Self {
        let mut line_start = 0;
        let mut positions = vec![];
        for line in s.split('\n') {
            let line_end = line_start + line.len() + "\n".len();
            // TODO: this assumes lines terminate with \n, not \r\n.
            positions.push((line_start, line_end - 1));
            line_start = line_end;
        }

        NewlinePositions { positions }
    }
}

impl NewlinePositions {
    fn from_offset(&self, offset: usize) -> usize {
        let idx = self.positions.binary_search_by(|(line_start, line_end)| {
            if *line_end < offset {
                return Ordering::Less;
            }
            if *line_start > offset {
                return Ordering::Greater;
            }

            Ordering::Equal
        });

        idx.expect("line should be present")
    }

    /// Convert to single-line spans. If the original span crosses a
    /// newline, the vec will contain multiple items.
    pub fn from_offsets(&self, region_start: usize, region_end: usize) -> Vec<SingleLineSpan> {
        assert!(region_start <= region_end);

        let first_idx = self.from_offset(region_start);
        let last_idx = self.from_offset(region_end);

        let mut res = vec![];
        for idx in first_idx..=last_idx {
            let (line_start, line_end) = self.positions[idx];
            res.push(SingleLineSpan {
                line: (idx as u32).into(),
                start_col: if line_start > region_start {
                    0
                } else {
                    region_start - line_start
                } as u32,
                end_col: if region_end < line_end {
                    region_end - line_start
                } else {
                    line_end - line_start
                } as u32,
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
        assert!(region_start <= region_end);

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

/// Return the length of `s` in codepoints. This is important when
/// finding character boundaries for slicing without errors.
pub fn codepoint_len(s: &str) -> usize {
    s.chars().count()
}

/// Return the length of `s` in bytes.
///
/// This is a trivial wrapper to make it clear when we want bytes not
/// codepoints.
pub fn byte_len(s: &str) -> usize {
    s.len()
}

pub trait MaxLine {
    fn max_line(&self) -> LineNumber;
}

impl<S: AsRef<str>> MaxLine for S {
    fn max_line(&self) -> LineNumber {
        (self
            .as_ref()
            .trim_end() // Remove extra trailing whitespaces.
            .split('\n') // Split by `\n` to calculate lines.
            .count() as u32)
            .sub(1) // Sub 1 to make zero-indexed LineNumber
            .into()
    }
}

/// Split `s` on \n or \r\n. Always returns a non-empty vec. Each line
/// in the vec does not include the trailing newline.
///
/// This differs from `str::lines`, which considers `""` to be zero
/// lines and `"foo\n"` to be one line.
pub fn split_on_newlines(s: &str) -> Vec<&str> {
    s.split('\n')
        .map(|l| {
            if let Some(l) = l.strip_suffix('\r') {
                l
            } else {
                l
            }
        })
        .collect()
}

pub fn is_all_whitespace(s: &str) -> bool {
    s.chars().all(|c| c.is_whitespace())
}

#[cfg(test)]
mod tests {
    use super::*;
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
    fn from_offsets_split_over_multiple_lines() {
        let newline_positions: NewlinePositions = "foo\nbar\nbaz\naaaaaaaaaaa".into();
        let line_spans = newline_positions.from_offsets(5, 10);

        assert_eq!(
            line_spans,
            vec![
                SingleLineSpan {
                    line: 1.into(),
                    start_col: 1,
                    end_col: 3
                },
                SingleLineSpan {
                    line: 2.into(),
                    start_col: 0,
                    end_col: 2
                }
            ]
        );
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
    fn str_max_line_trailing_newline() {
        let line: String = "foo\nbar\n".into();
        assert_eq!(line.max_line().0, 1);
    }

    #[test]
    fn str_max_line_extra_trailing_newline() {
        let line: String = "foo\nbar\n\n".into();
        assert_eq!(line.max_line().0, 1);
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
    fn codepoint_len_non_ascii() {
        assert_eq!(codepoint_len("ƒoo"), 3);
    }

    #[test]
    fn test_split_line_empty() {
        assert_eq!(split_on_newlines(""), vec![""]);
    }

    #[test]
    fn test_split_line_single() {
        assert_eq!(split_on_newlines("foo"), vec!["foo"]);
    }

    #[test]
    fn test_split_line_with_newline() {
        assert_eq!(split_on_newlines("foo\nbar"), vec!["foo", "bar"]);
    }

    #[test]
    fn test_split_line_with_crlf() {
        assert_eq!(split_on_newlines("foo\r\nbar"), vec!["foo", "bar"]);
    }

    #[test]
    fn test_split_line_with_trailing_newline() {
        assert_eq!(split_on_newlines("foo\nbar\n"), vec!["foo", "bar", ""]);
    }

    #[test]
    fn test_is_all_whiteapce() {
        assert!(is_all_whitespace(" \n\t"));
    }
}
