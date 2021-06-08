#![allow(dead_code)]

use crate::lines::{LineNumber};
use crate::positions::{SingleLineSpan, Span};
use colored::*;
use std::cmp::min;
use std::collections::HashMap;

#[cfg(test)]
use pretty_assertions::assert_eq;

#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Clone, Copy)]
pub enum ChangeKind {
    Add,
    Remove,
    Move,
}

/// An addition or removal in a string.
#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Clone, Copy)]
pub struct Change {
    kind: ChangeKind,
    /// The position of the affected text.
    pub range: Span,
    /// The corresponding position of the comparison string. This
    /// enables us to line up changed lines between the two strings.
    pub opposite_line: LineNumber,
}

/// Return a copy of `s` with this colour applied to the ranges specified.
fn apply_bold_color(s: &str, ranges: &[Span], c: Color) -> String {
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

fn group_by_line(ranges: &[SingleLineSpan]) -> HashMap<usize, Vec<SingleLineSpan>> {
    let mut ranges_by_line: HashMap<usize, Vec<SingleLineSpan>> =
        HashMap::with_capacity(ranges.len());
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
fn apply_color_by_line(s: &str, ranges: &[SingleLineSpan], c: Color) -> String {
    // TODO: we're assuming ranges is sorted. Either sort, or assert.

    let ranges_by_line = group_by_line(ranges);

    let mut res = String::with_capacity(s.len());
    for (i, line) in s.lines().enumerate() {
        match ranges_by_line.get(&i) {
            Some(line_ranges) => {
                let ranges: Vec<_> = line_ranges
                    .iter()
                    .map(|lr| Span {
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
        apply_bold_color("foo", &vec![Span { start: 0, end: 3 }], Color::Red),
        "foo".red().bold().to_string()
    );
}

#[test]
fn apply_color_beyond_end() {
    assert_eq!(
        apply_bold_color("foobar", &vec![Span { start: 6, end: 10 }], Color::Black),
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
        apply_bold_color("foobar", &vec![Span { start: 3, end: 100 }], Color::Green),
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
