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

    let lhs_path = matches.value_of("first").unwrap();
    let lhs_src = read_or_die(lhs_path);

    let rhs_path = matches.value_of("second").unwrap();
    let rhs_src = read_or_die(rhs_path);

    let syntax_toml = read_or_die("syntax.toml");

    let lhs_extension = Path::new(lhs_path)
        .extension()
        .and_then(OsStr::to_str)
        .unwrap();

    let lang = lang_from_str(&syntax_toml, lhs_extension);

    let terminal_width = match matches.value_of("COLUMNS") {
        Some(width) => usize::from_str_radix(width, 10).unwrap(),
        None => term_width().unwrap_or(80),
    };

    let lhs_formatted_length = lhs_printable_width(&lhs_src, terminal_width);
    let rhs_formatted_length = rhs_printable_width(&rhs_src, lhs_formatted_length, terminal_width);

    let arena = Arena::new();
    let lhs = parse(&arena, &lhs_src, &lang);
    let rhs = parse(&arena, &rhs_src, &lang);

    set_changed(&lhs, &rhs);

    let lhs_column_width = printed_line_num_width(&lhs_src);
    let lhs_content_width = lhs_formatted_length - lhs_column_width;
    let before_src = enforce_length(&lhs_src, lhs_content_width);
    let rhs_column_width = printed_line_num_width(&rhs_src);
    let rhs_content_width = rhs_formatted_length - rhs_column_width;
    let rhs_src = enforce_length(&rhs_src, rhs_content_width);

    let lhs_positions = matched_positions(&before_src, &rhs_src, &lhs);
    let lhs_colored = apply_colors(&before_src, true, &lhs_positions);

    let rhs_positions = matched_positions(&rhs_src, &before_src, &rhs);
    let rhs_colored = apply_colors(&rhs_src, false, &rhs_positions);

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
            lhs_content_width,
            lhs_column_width,
            terminal_width
        )
    );
}
