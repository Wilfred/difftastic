mod json;
mod diffs;
mod lines;
mod tree_diff;
use clap::{App, Arg};
use std::ffi::OsStr;
use std::path::Path;
use typed_arena::Arena;

use crate::json::{lang_from_str, parse, read_or_die};
use crate::lines::enforce_length;
use crate::tree_diff::{apply_colors, change_positions, set_changed};

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

fn horizontal_concat(left: &str, right: &str, max_left_length: usize) -> String {
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

    let syntax_toml = read_or_die("syntax.toml");

    let before_extension = Path::new(before_path)
        .extension()
        .and_then(OsStr::to_str)
        .unwrap();

    let lang = lang_from_str(&syntax_toml, before_extension);

    let terminal_width = match matches.value_of("COLUMNS") {
        Some(width) => usize::from_str_radix(width, 10).unwrap(),
        None => term_width().unwrap_or(80),
    };

    let line_length = terminal_width / 2 - 1;
    // TODO: enforce length after parsing.
    let before_src = enforce_length(&before_src, line_length);
    let after_src = enforce_length(&after_src, line_length);

    let arena = Arena::new();
    let lhs = parse(&arena, &before_src, &lang);
    let rhs = parse(&arena, &after_src, &lang);

    set_changed(&lhs, &rhs);

    let positions = change_positions(&lhs);
    let lhs_colored = apply_colors(&before_src, true, &positions);

    let positions = change_positions(&rhs);
    let rhs_colored = apply_colors(&after_src, false, &positions);

    print!(
        "{}",
        horizontal_concat(&lhs_colored, &rhs_colored, line_length)
    );
}
