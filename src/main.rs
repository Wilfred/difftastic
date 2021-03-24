mod diffs;
mod language;
mod lines;
mod tree_diff;

use crate::diffs::{
    added, apply_color_at_changes, difference_positions, highlight_differences_combined, removed,
};
use crate::language::{infer_language, Language};
use crate::lines::{add_context, enforce_length, max_line, relevant_lines, MatchedLine};
use clap::{App, Arg};
use colored::*;
use std::collections::HashMap;
use std::fs;

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

fn index_map(lines: &[MatchedLine]) -> HashMap<usize, MatchedLine> {
    lines.iter().map(|ml| (ml.line.number, *ml)).collect()
}

fn format_divider(line_num: usize, column_width: usize, spacer: &str) -> String {
    let mut result = String::with_capacity(2 * column_width);

    let line_description = format!("-- Line {} ", line_num + 1);

    result.push_str(&line_description.yellow().to_string());
    result.push_str(
        &"-".repeat(column_width - line_description.len())
            .yellow()
            .to_string(),
    );
    result.push_str(spacer);
    result.push_str(&"-".repeat(column_width).yellow().to_string());
    result
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
    let mut needs_separator = true;

    let mut result = String::new();
    let spacer = "  ";

    // Walk the lines and append any if they're present in the slice
    // of matched lines as a line number or opposite line number.
    while left_i < left_str_lines.len() || right_i < right_str_lines.len() {
        let left_i_index = left_line_indexes.get(&left_i);
        let right_i_index = right_line_indexes.get(&right_i);

        if (left_i_index.is_some() || right_i_index.is_some()) && needs_separator {
            let left_line = left_i_index.unwrap_or_else(|| right_i_index.unwrap());
            let left_line_num = left_line.line.number;
            result.push_str(&format_divider(left_line_num, max_left_length, &spacer));
            needs_separator = false;
        }

        match (left_i_index, right_i_index) {
            // Print the line of code on both sides.
            (Some(_), Some(_)) => {
                result.push_str(left_str_lines[left_i]);
                result.push_str(spacer);
                result.push_str(right_str_lines[right_i]);
                result.push('\n');

                left_i += 1;
                right_i += 1;
            }
            (Some(left_i_index), None) => {
                let matching_right_i = left_i_index.opposite_line.number;
                if matching_right_i > right_i {
                    // There's a matching line of code on the other
                    // side, but later. Since we aren't printing the
                    // other side now, just advance that side.
                    right_i += 1;
                } else {
                    // There's no matching line of code on the other
                    // side, so just print this side.
                    result.push_str(left_str_lines[left_i]);
                    result.push('\n');

                    left_i += 1;
                }
            }
            (None, Some(right_i_index)) => {
                let matching_left_i = right_i_index.opposite_line.number;
                if matching_left_i > left_i {
                    left_i += 1;
                } else {
                    // There's no matching line of code on the other
                    // side, so just print this side.
                    result.push_str(&" ".repeat(max_left_length));
                    result.push_str(spacer);
                    result.push_str(right_str_lines[right_i]);
                    result.push('\n');

                    right_i += 1;
                }
            }
            (None, None) => {
                // Don't print either side. This means we've finished
                // a section, so we'll want to print a new separator.
                left_i += 1;
                right_i += 1;

                needs_separator = true;
            }
        };
    }

    result
}

fn read_or_die(path: &str) -> String {
    match fs::read_to_string(path) {
        Ok(src) => src,
        Err(e) => {
            match e.kind() {
                std::io::ErrorKind::NotFound => {
                    eprintln!("No such file: {}", path);
                }
                std::io::ErrorKind::PermissionDenied => {
                    eprintln!("Permission denied when reading file: {}", path);
                }
                _ => {
                    eprintln!("Could not read file: {} (error {:?})", path, e.kind());
                }
            };
            std::process::exit(1);
        }
    }
}

fn side_by_side_diff(
    before_src: &str,
    after_src: &str,
    terminal_width: usize,
    language: Language,
    num_ctx_lines: usize,
) {
    let line_length = terminal_width / 2 - 1;
    let before_src = enforce_length(&before_src, line_length);
    let after_src = enforce_length(&after_src, line_length);

    let differences = difference_positions(&before_src, &after_src, language);

    let mut left_lines = relevant_lines(&removed(&differences), &before_src);
    let mut right_lines = relevant_lines(&added(&differences), &after_src);

    let before_colored = apply_color_at_changes(&before_src, &removed(&&differences), Color::Red);
    let after_colored = apply_color_at_changes(&after_src, &added(&&differences), Color::Green);

    left_lines = add_context(&left_lines, num_ctx_lines, max_line(&before_src));
    right_lines = add_context(&right_lines, num_ctx_lines, max_line(&after_src));

    let result = filter_concat(
        &before_colored,
        &after_colored,
        &left_lines,
        &right_lines,
        line_length,
    );

    print!("{}", result);
}

fn inline_diff(before_path: &str, after_path: &str, language: Language) {
    println!("{} {}", "---".bright_yellow(), before_path.bright_yellow());
    println!("{} {}", "+++".bright_yellow(), after_path.bright_yellow());
    let before_src = read_or_die(before_path);
    let after_src = read_or_die(after_path);

    let differences = difference_positions(&before_src, &after_src, language);

    let result = highlight_differences_combined(&before_src, &after_src, &differences);
    print!("{}", result);
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
        .arg(
            Arg::with_name("inline")
                .long("inline")
                .help("Prefer single column output"),
        )
        .arg(Arg::with_name("first").index(1).required(true))
        .arg(Arg::with_name("second").index(2).required(true))
        .get_matches();

    let before_path = matches.value_of("first").unwrap();
    let before_src = read_or_die(before_path);

    let after_path = matches.value_of("second").unwrap();
    let after_src = read_or_die(after_path);

    let language = match matches.value_of("LANGUAGE") {
        Some(s) => Language::from(s).expect("No such language known."),
        _ => infer_language(before_path).expect("Could not infer language"),
    };

    let num_ctx_lines = matches.value_of("LINES").unwrap_or("3");
    let num_ctx_lines = usize::from_str_radix(num_ctx_lines, 10).unwrap();

    if matches.is_present("inline") {
        inline_diff(before_path, after_path, language);
    } else {
        let terminal_width = match matches.value_of("COLUMNS") {
            Some(width) => usize::from_str_radix(width, 10).unwrap(),
            None => term_width().unwrap_or(80),
        };

        side_by_side_diff(
            &before_src,
            &after_src,
            terminal_width,
            language,
            num_ctx_lines,
        );
    }
}
