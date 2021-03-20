use crate::language::{language_lexer, lex, Language};
use crate::lines::{AbsoluteRange, LineNumber, LineRange, NewlinePositions};
use colored::*;
use itertools::EitherOrBoth;
use itertools::Itertools;
use std::cmp::min;
use std::collections::HashMap;

#[cfg(test)]
use pretty_assertions::assert_eq;

#[derive(Debug, PartialEq, Clone, Copy)]
pub enum ChangeKind {
    Add,
    Remove,
}

/// An addition or removal in a string.
#[derive(Debug, PartialEq, Clone, Copy)]
pub struct Change {
    kind: ChangeKind,
    /// The position of the affected text.
    pub range: AbsoluteRange,
    /// The corresponding position of the comparison string. This
    /// enables us to line up changed lines between the two strings.
    pub opposite_line: LineNumber,
}

pub fn difference_positions(before_src: &str, after_src: &str, lang: Language) -> Vec<Change> {
    let re = language_lexer(lang);
    let before_tokens = lex(&before_src, &re);
    let after_tokens = lex(&after_src, &re);

    let before_newlines = NewlinePositions::from(before_src);
    let after_newlines = NewlinePositions::from(after_src);

    let mut left_line = LineNumber::from(0);
    let mut right_line = LineNumber::from(0);
    let mut positions = vec![];

    for d in diff::slice(&before_tokens, &after_tokens) {
        match d {
            // Only present in the before, so has been removed.
            diff::Result::Left(l) => {
                positions.push(Change {
                    kind: ChangeKind::Remove,
                    range: AbsoluteRange {
                        start: l.start,
                        end: l.start + l.text.len(),
                    },
                    opposite_line: right_line,
                });
            }
            // Present in both.
            diff::Result::Both(l, r) => {
                left_line = before_newlines.from_offset(l.start).line;
                right_line = after_newlines.from_offset(r.start).line;
            }
            // Only present in the after.
            diff::Result::Right(r) => {
                positions.push(Change {
                    kind: ChangeKind::Add,
                    range: AbsoluteRange {
                        start: r.start,
                        end: r.start + r.text.len(),
                    },
                    opposite_line: left_line,
                });
            }
        }
    }
    positions
}

/// Return a copy of `s` with this colour applied to the ranges specified.
fn apply_bold_color(s: &str, ranges: &[AbsoluteRange], c: Color) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for range in ranges {
        if range.start >= s.len() {
            break;
        }

        if i < range.start {
            res.push_str(&s[i..range.start]);
        }
        let colored = &s[range.start..min(s.len(), range.end)].color(c).bold();
        res.push_str(&colored.to_string());
        i = range.end;
    }
    if i < s.len() {
        res.push_str(&s[i..s.len()]);
    }
    res
}

fn group_by_line(ranges: &[LineRange]) -> HashMap<usize, Vec<LineRange>> {
    let mut ranges_by_line: HashMap<usize, Vec<LineRange>> = HashMap::with_capacity(ranges.len());
    for range in ranges {
        let mut inserted = false;
        if let Some(matching_ranges) = ranges_by_line.get_mut(&range.line.number) {
            (*matching_ranges).push(*range);
            inserted = true;
        }
        if !inserted {
            ranges_by_line.insert(range.line.number, vec![*range]);
        }
    }

    ranges_by_line
}

/// Apply this colour to all the ranges specified. Handle lines being
/// shorter than the ranges specified.
fn apply_color_by_line(s: &str, ranges: &[LineRange], c: Color) -> String {
    // TODO: we're assuming ranges is sorted. Either sort, or assert.

    let ranges_by_line = group_by_line(ranges);

    let mut res = String::with_capacity(s.len());
    for (i, line) in s.lines().enumerate() {
        match ranges_by_line.get(&i) {
            Some(line_ranges) => {
                let ranges: Vec<_> = line_ranges
                    .iter()
                    .map(|lr| AbsoluteRange {
                        start: lr.start_col,
                        end: lr.end_col,
                    })
                    .collect();

                res.push_str(&apply_bold_color(&line, &ranges, c));
            }
            None => {
                res.push_str(line);
            }
        }
        res.push_str("\n");
    }
    res
}

#[test]
fn apply_color_by_line_no_positions() {
    assert_eq!(
        apply_color_by_line("foo\nbar\n", &vec![], Color::Black),
        "foo\nbar\n"
    );
}

#[test]
fn apply_color_no_positions() {
    assert_eq!(apply_bold_color("foobar", &vec![], Color::Black), "foobar");
}

#[test]
fn apply_color_whole_length() {
    assert_eq!(
        apply_bold_color("foo", &vec![AbsoluteRange { start: 0, end: 3 }], Color::Red),
        "foo".red().bold().to_string()
    );
}

#[test]
fn apply_color_beyond_end() {
    assert_eq!(
        apply_bold_color(
            "foobar",
            &vec![AbsoluteRange { start: 6, end: 10 }],
            Color::Black
        ),
        "foobar"
    );
}

/// A range whose start is in bounds, but end is beyond the string
/// end.
#[test]
fn apply_color_overlapping_end() {
    let mut expected = String::new();
    expected.push_str("foo");
    expected.push_str(&"bar".green().bold().to_string());

    assert_eq!(
        apply_bold_color(
            "foobar",
            &vec![AbsoluteRange { start: 3, end: 100 }],
            Color::Green
        ),
        expected
    );
}

pub fn added(differences: &[Change]) -> Vec<Change> {
    differences
        .iter()
        .filter(|c| c.kind == ChangeKind::Add)
        .copied()
        .collect()
}

pub fn removed(differences: &[Change]) -> Vec<Change> {
    differences
        .iter()
        .filter(|c| c.kind == ChangeKind::Remove)
        .copied()
        .collect()
}

pub fn highlight_differences(
    before_src: &str,
    after_src: &str,
    differences: &[Change],
) -> (String, String) {
    let before_newlines = NewlinePositions::from(before_src);
    let after_newlines = NewlinePositions::from(after_src);

    let before_abs_ranges: Vec<_> = removed(differences).iter().map(|c| c.range).collect();
    let after_abs_ranges: Vec<_> = added(differences).iter().map(|c| c.range).collect();

    let before_ranges = before_newlines.from_ranges(&before_abs_ranges);
    let after_ranges = after_newlines.from_ranges(&after_abs_ranges);

    let before_colored = apply_color_by_line(&before_src, &before_ranges, Color::Red);
    let after_colored = apply_color_by_line(&after_src, &after_ranges, Color::Green);

    (before_colored, after_colored)
}

/// Given a list of differences, build up a string of the form:
///
///   -line two old
///   +line two new
///   +line five new
///
pub fn highlight_differences_combined(
    before_src: &str,
    after_src: &str,
    differences: &[Change],
) -> String {
    let before_newlines = NewlinePositions::from(before_src);
    let after_newlines = NewlinePositions::from(after_src);

    let before_abs_ranges: Vec<_> = removed(differences).iter().map(|c| c.range).collect();
    let after_abs_ranges: Vec<_> = added(differences).iter().map(|c| c.range).collect();

    let before_ranges = before_newlines.from_ranges(&before_abs_ranges);
    let after_ranges = after_newlines.from_ranges(&after_abs_ranges);

    let before_ranges = group_by_line(&before_ranges);
    let after_ranges = group_by_line(&after_ranges);

    let mut res = String::new();

    let mut prev_line = None;

    for (i, line) in before_src
        .lines()
        .zip_longest(after_src.lines())
        .enumerate()
    {
        let (before_line, after_line) = match line {
            EitherOrBoth::Both(left, right) => (Some(left), Some(right)),
            EitherOrBoth::Left(left) => (Some(left), None),
            EitherOrBoth::Right(right) => (None, Some(right)),
        };

        let before_line_formatted = match (before_ranges.get(&i), before_line) {
            (Some(line_ranges), Some(before_line)) => {
                let mut res = String::new();

                let ranges: Vec<_> = line_ranges
                    .iter()
                    .map(|lr| AbsoluteRange {
                        start: lr.start_col,
                        end: lr.end_col,
                    })
                    .collect();

                res.push_str(&"-".red().to_string());
                res.push_str(&apply_bold_color(&before_line, &ranges, Color::Red));
                res.push_str("\n");

                Some(res)
            }
            _ => None,
        };

        let after_line_formatted = match (after_ranges.get(&i), after_line) {
            (Some(line_ranges), Some(after_line)) => {
                let mut res = String::new();

                let ranges: Vec<_> = line_ranges
                    .iter()
                    .map(|lr| AbsoluteRange {
                        start: lr.start_col,
                        end: lr.end_col,
                    })
                    .collect();

                res.push_str(&"+".green().to_string());
                res.push_str(&apply_bold_color(&after_line, &ranges, Color::Green));
                res.push_str("\n");

                Some(res)
            }
            _ => None,
        };

        if before_line_formatted.is_some() || after_line_formatted.is_some() {
            let print_line_num = match prev_line {
                Some(prev_line) => i > prev_line + 1,
                None => true,
            };
            if print_line_num {
                res.push_str(&format!("@@ line {} @@", i).blue().to_string());
                res.push_str("\n");
            }
            prev_line = Some(i);
        }

        if let Some(before_line_formatted) = before_line_formatted {
            res.push_str(&before_line_formatted);
        }
        if let Some(after_line_formatted) = after_line_formatted {
            res.push_str(&after_line_formatted);
        }
    }

    res
}
