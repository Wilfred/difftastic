extern crate clap;
extern crate colored;
extern crate diff;
extern crate itertools;
extern crate regex;
extern crate term_size;

mod diffs;
mod language;
mod lines;

use clap::{App, Arg};
use diffs::{added, difference_positions, highlight_differences, removed};
use itertools::EitherOrBoth::{Both, Left, Right};
use itertools::Itertools;
use language::{infer_language, Language};
use lines::{add_context, enforce_length, max_line, relevant_lines, MatchedLine};
use std::collections::HashSet;
use std::fs;
use std::iter::FromIterator;

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

/// Return a copy of string that only contains the lines specified.
fn filter_lines(s: &str, lines_wanted: &[MatchedLine]) -> String {
    let lines_wanted: HashSet<usize> =
        HashSet::from_iter(lines_wanted.iter().map(|ml| ml.line.number));

    let mut result = String::new();
    let mut first = true;
    for (i, line) in s.lines().enumerate() {
        if lines_wanted.contains(&i) {
            if first {
                first = false;
            } else {
                result.push('\n');
            }
            result.push_str(line);
        }
    }
    result
}

#[test]
fn test_filter_lines() {
    fn matched_line(i: usize) -> MatchedLine {
        MatchedLine {
            line: LineNumber::from(i),
            opposite_line: LineNumber::from(i),
        }
    }

    let s = "foo\nbar\nbaz\nquux";
    let result = filter_lines(s, &[matched_line(1), matched_line(3)]);
    assert_eq!(result, "bar\nquux");
}

fn vertical_concat(left: &str, right: &str, max_left_length: usize) -> String {
    let mut result = String::with_capacity(left.len() + right.len());

    let spacer = "  ";
    for item in left.lines().zip_longest(right.lines()) {
        match item {
            Both(left_line, right_line) if left_line != "" => {
                result.push_str(left_line);
                result.push_str(spacer);
                result.push_str(right_line);
            }
            Both(_, right_line) | Right(right_line) => {
                result.push_str(&" ".repeat(max_left_length));
                result.push_str(spacer);
                result.push_str(right_line);
            }
            Left(left_line) => {
                result.push_str(left_line);
            }
        }
        result.push_str("\n");
    }

    result
}

fn main() {
    let matches = App::new("Difftastic")
        .version("0.1")
        .about("A word level diff tool that understands syntax!")
        .author("Wilfred Hughes")
        .arg(
            Arg::with_name("LANGUAGE")
                .long("lang")
                .takes_value(true)
                .help("Override the language parser"),
        )
        .arg(
            Arg::with_name("LINES")
                .long("context")
                .takes_value(true)
                .help("Number of lines of context (default 3)"),
        )
        .arg(
            Arg::with_name("COLUMNS")
                .long("width")
                .takes_value(true)
                .help("Override terminal width"),
        )
        .arg(Arg::with_name("first").index(1).required(true))
        .arg(Arg::with_name("second").index(2).required(true))
        .get_matches();

    let before_path = matches.value_of("first").unwrap();
    let mut before_src = fs::read_to_string(before_path).expect("Unable to read PATH 1");
    let after_path = matches.value_of("second").unwrap();
    let mut after_src = fs::read_to_string(after_path).expect("Unable to read PATH 2");

    let terminal_width = match matches.value_of("COLUMNS") {
        Some(width) => usize::from_str_radix(width, 10).unwrap(),
        None => term_width().unwrap_or(80),
    };

    let line_length = terminal_width / 2 - 1;
    before_src = enforce_length(&before_src, line_length);
    after_src = enforce_length(&after_src, line_length);

    let language = match matches.value_of("LANGUAGE") {
        Some(s) => Language::from(s).expect("No such language known."),
        _ => infer_language(before_path).expect("Could not infer language"),
    };

    let differences = difference_positions(&before_src, &after_src, language);

    let mut left_lines = relevant_lines(&removed(&differences), &before_src);
    let mut right_lines = relevant_lines(&added(&differences), &after_src);

    let (mut before_colored, mut after_colored) =
        highlight_differences(&before_src, &after_src, &differences);

    let context = matches.value_of("LINES").unwrap_or("3");
    let context = usize::from_str_radix(context, 10).unwrap();

    left_lines = add_context(&left_lines, context, max_line(&before_src));
    right_lines = add_context(&right_lines, context, max_line(&after_src));

    // TODO: this is very dumb. We assume the left and right line
    // up (rather than showing gaps if we've just added a big
    // block of text).
    before_colored = filter_lines(&before_colored, &left_lines);
    after_colored = filter_lines(&after_colored, &right_lines);

    print!(
        "{}",
        vertical_concat(&before_colored, &after_colored, line_length)
    );
}
