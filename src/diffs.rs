use colored::*;
use language::{language_lexer, lex, Language};
use lines::{line_relative_ranges, LineRange, Range};
use std::cmp::min;
use std::collections::HashMap;

#[derive(Debug, PartialEq, Clone, Copy)]
pub enum Change {
    Add,
    Remove,
}

pub fn difference_positions(
    before_src: &str,
    after_src: &str,
    lang: Language,
) -> (Vec<(Change, Range)>) {
    let re = language_lexer(lang);
    let before_tokens = lex(&before_src, &re);
    let after_tokens = lex(&after_src, &re);

    let mut positions = vec![];
    for d in diff::slice(&before_tokens, &after_tokens) {
        match d {
            // Only present in the before, so has been removed.
            diff::Result::Left(l) => {
                positions.push((
                    Change::Remove,
                    Range {
                        start: l.start,
                        end: l.start + l.text.len(),
                    },
                ));
            }
            // Present in both.
            diff::Result::Both(_, _) => (),
            // Only present in the after.
            diff::Result::Right(r) => {
                positions.push((
                    Change::Add,
                    Range {
                        start: r.start,
                        end: r.start + r.text.len(),
                    },
                ));
            }
        }
    }
    positions
}

/// Return a copy of `s` with this colour applied to the ranges specified.
fn apply_color(s: &str, ranges: &[Range], c: Color) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for range in ranges {
        if range.start >= s.len() {
            break;
        }

        if i < range.start {
            res.push_str(&s[i..range.start]);
        }
        let colored = &s[range.start..min(s.len(), range.end)].color(c);
        res.push_str(&colored.to_string());
        i = range.end;
    }
    if i < s.len() {
        res.push_str(&s[i..s.len()]);
    }
    res
}

/// Apply this colour to all the ranges specified. Handle lines being
/// shorter than the ranges specified.
fn apply_color_by_line(s: &str, ranges: &[LineRange], c: Color) -> String {
    // TODO: we're assuming ranges is sorted. Either sort, or assert.

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

    let mut res = String::with_capacity(s.len());
    for (i, line) in s.lines().enumerate() {
        match ranges_by_line.get(&i) {
            Some(line_ranges) => {
                let ranges: Vec<_> = line_ranges
                    .iter()
                    .map(|lr| Range {
                        start: lr.start,
                        end: lr.end,
                    })
                    .collect();

                res.push_str(&apply_color(&line, &ranges, c));
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
    assert_eq!(apply_color("foobar", &vec![], Color::Black), "foobar");
}

#[test]
fn apply_color_whole_length() {
    assert_eq!(
        apply_color("foo", &vec![Range { start: 0, end: 3 }], Color::Red),
        "foo".red().to_string()
    );
}

#[test]
fn apply_color_beyond_end() {
    assert_eq!(
        apply_color("foobar", &vec![Range { start: 6, end: 10 }], Color::Black),
        "foobar"
    );
}

/// A range whose start is in bounds, but end is beyond the string
/// end.
#[test]
fn apply_color_overlapping_end() {
    let mut expected = String::new();
    expected.push_str("foo");
    expected.push_str(&"bar".green().to_string());

    assert_eq!(
        apply_color("foobar", &vec![Range { start: 3, end: 100 }], Color::Green),
        expected
    );
}

pub fn added(differences: &[(Change, Range)]) -> Vec<Range> {
    differences
        .iter()
        .filter(|(c, _)| *c == Change::Add)
        .map(|(_, r)| *r)
        .collect()
}

pub fn removed(differences: &[(Change, Range)]) -> Vec<Range> {
    differences
        .iter()
        .filter(|(c, _)| *c == Change::Remove)
        .map(|(_, r)| *r)
        .collect()
}

pub fn highlight_differences(
    before_src: &str,
    after_src: &str,
    differences: &[(Change, Range)],
) -> (String, String) {
    let before_ranges = line_relative_ranges(&removed(differences), &before_src);
    let after_ranges = line_relative_ranges(&added(differences), &after_src);

    let before_colored = apply_color_by_line(&before_src, &before_ranges, Color::Red);
    let after_colored = apply_color_by_line(&after_src, &after_ranges, Color::Green);

    (before_colored, after_colored)
}
