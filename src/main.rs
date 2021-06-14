mod lines;
mod parse;
mod positions;
mod style;
mod tree_diff;
use clap::{App, Arg};
use std::ffi::OsStr;
use std::path::Path;
use typed_arena::Arena;

use crate::lines::{
    apply_groups, enforce_length, lhs_printable_width, printed_line_num_width, rhs_printable_width,
    visible_groups,
};
use crate::parse::{lang_from_str, parse, read_or_die};
use crate::style::apply_colors;
use crate::tree_diff::{matched_positions, set_changed};

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
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

    let max_left_length = lhs_printable_width(&before_src, terminal_width);
    let max_right_length = rhs_printable_width(&after_src, max_left_length, terminal_width);

    let arena = Arena::new();
    let lhs = parse(&arena, &before_src, &lang);
    let rhs = parse(&arena, &after_src, &lang);

    set_changed(&lhs, &rhs);

    let before_column_width = printed_line_num_width(&before_src);
    let before_src = enforce_length(
        &before_src,
        max_left_length - before_column_width,
    );
    let after_column_width = printed_line_num_width(&after_src);
    let after_src = enforce_length(
        &after_src,
        max_right_length - after_column_width,
    );

    let lhs_positions = matched_positions(&before_src, &after_src, &lhs);
    let lhs_colored = apply_colors(&before_src, true, &lhs_positions);

    let rhs_positions = matched_positions(&after_src, &before_src, &rhs);
    let rhs_colored = apply_colors(&after_src, false, &rhs_positions);

    let mut groups = visible_groups(&lhs_positions, &rhs_positions);
    for group in &mut groups {
        group.pad(1);
    }

    print!(
        "{}",
        apply_groups(
            &lhs_colored,
            &rhs_colored,
            &groups,
            max_left_length - before_column_width,
            before_column_width,
            terminal_width
        )
    );
}
