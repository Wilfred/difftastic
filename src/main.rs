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
use language::{infer_language, Language};
use lines::{add_context, enforce_length, max_line, relevant_lines, MatchedLine};
use std::collections::HashMap;
use std::fs;
use std::iter::FromIterator;

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

fn index_map(lines: &[MatchedLine]) -> HashMap<usize, MatchedLine> {
    HashMap::from_iter(lines.iter().map(|ml| (ml.line.number, *ml)))
}

/// Vertically concat the desired lines of `left` and `right`, lining
/// up corresponding lines where possible.
///
/// Assumes that `enforce_length` has already been called on the
/// strings.
fn filter_concat(
    left: &str,
    right: &str,
    left_lines: &[MatchedLine],
    right_lines: &[MatchedLine],
    max_left_length: usize,
) -> String {
    let left_line_indexes = index_map(left_lines);
    let right_line_indexes = index_map(right_lines);

    let left_str_lines: Vec<&str> = left.lines().collect();
    let right_str_lines: Vec<&str> = right.lines().collect();

    let mut left_i = 0;
    let mut right_i = 0;

    let mut result = String::new();
    let spacer = "  ";

    // Walk the lines and append any if they're present in the slice
    // of matched lines as a line number or opposite line number.
    while left_i < left_str_lines.len() || right_i < right_str_lines.len() {
        let include_left_i = left_line_indexes.contains_key(&left_i)
            || right_line_indexes
                .get(&right_i)
                .map(|ml| ml.opposite_line.number)
                == Some(left_i);
        let include_right_i = right_line_indexes.contains_key(&right_i)
            || left_line_indexes
                .get(&left_i)
                .map(|ml| ml.opposite_line.number)
                == Some(right_i);

        if include_left_i && include_right_i {
            result.push_str(left_str_lines[left_i]);
            result.push_str(spacer);
            result.push_str(right_str_lines[right_i]);
            result.push_str("\n");

            left_i += 1;
            right_i += 1;
        } else if include_left_i {
            result.push_str(left_str_lines[left_i]);
            result.push_str("\n");

            left_i += 1;
        } else if include_right_i {
            result.push_str(&" ".repeat(max_left_length));
            result.push_str(spacer);
            result.push_str(right_str_lines[right_i]);
            result.push_str("\n");

            right_i += 1;
        } else {
            left_i += 1;
            right_i += 1;
        }
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

    let (before_colored, after_colored) =
        highlight_differences(&before_src, &after_src, &differences);

    let context = matches.value_of("LINES").unwrap_or("3");
    let context = usize::from_str_radix(context, 10).unwrap();

    left_lines = add_context(&left_lines, context, max_line(&before_src));
    right_lines = add_context(&right_lines, context, max_line(&after_src));

    let result = filter_concat(
        &before_colored,
        &after_colored,
        &left_lines,
        &right_lines,
        line_length,
    );

    print!("{}", result);
}
