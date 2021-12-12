//! Manipulate lines of text and groups of lines.

use crate::positions::SingleLineSpan;
use lazy_static::lazy_static;
use regex::Regex;
use std::{cmp::max, fmt};

/// A distinct number type for line numbers, to prevent confusion with
/// other numerical data.
///
/// Zero-indexed internally.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct LineNumber(pub usize);

impl LineNumber {
    pub fn one_indexed(&self) -> usize {
        self.0 + 1
    }
}

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

/// Return the length of `s` in codepoints. This is important when
/// finding character boundaries for slicing without errors.
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
    fn codepoint_len_non_ascii() {
        assert_eq!(codepoint_len("ƒoo"), 3);
    }
}
