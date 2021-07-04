mod dijkstra;
mod lines;
mod parse;
mod positions;
mod style;
mod syntax;
use clap::{App, Arg};
use std::ffi::OsStr;
use std::path::Path;
use typed_arena::Arena;

use crate::dijkstra::{mark_syntax, toplevel_list};
use crate::lines::{
    apply_groups, enforce_length, format_line_num, join_overlapping, lhs_printable_width,
    rhs_printable_width, visible_groups, MaxLine,
};
use crate::parse::{find_lang, parse, parse_lines, read_or_die, ConfigDir};
use crate::style::apply_colors;
use crate::syntax::{change_positions, set_next};

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

    let syntax_toml = ConfigDir::read_default_toml();

    let lhs_extension = Path::new(lhs_path)
        .extension()
        .and_then(OsStr::to_str)
        .unwrap();

    let lang = find_lang(syntax_toml, lhs_extension);

    let terminal_width = match matches.value_of("COLUMNS") {
        Some(width) => width.parse::<usize>().unwrap(),
        None => term_width().unwrap_or(80),
    };

    let arena = Arena::new();

    let (lhs, rhs) = match &lang {
        Some(lang) => (
            parse(&arena, &lhs_src, &lang),
            parse(&arena, &rhs_src, &lang),
        ),
        None => (parse_lines(&arena, &lhs_src), parse_lines(&arena, &rhs_src)),
    };

    let (lhs, rhs) = toplevel_list(&arena, lhs, rhs);
    set_next(lhs);
    set_next(rhs);
    mark_syntax(lhs, rhs);

    let lhs_positions = change_positions(&lhs_src, &rhs_src, &[lhs]);
    let rhs_positions = change_positions(&rhs_src, &lhs_src, &[rhs]);

    let mut groups = visible_groups(&lhs_positions, &rhs_positions);
    for group in &mut groups {
        group.pad(3, lhs_src.max_line(), rhs_src.max_line());
    }
    groups = join_overlapping(groups);

    let lhs_column_width = format_line_num(groups.last().unwrap().max_visible_lhs().number).len();
    let rhs_column_width = format_line_num(groups.last().unwrap().max_visible_rhs().number).len();

    let lhs_formatted_length = lhs_printable_width(&lhs_src, lhs_column_width, terminal_width);
    let rhs_formatted_length = rhs_printable_width(
        &rhs_src,
        lhs_formatted_length,
        rhs_column_width,
        terminal_width,
    );

    let lhs_content_width = lhs_formatted_length - lhs_column_width;
    let rhs_content_width = rhs_formatted_length - rhs_column_width;

    let lhs_src = enforce_length(&lhs_src, lhs_content_width);
    let rhs_src = enforce_length(&rhs_src, rhs_content_width);
    let lhs_colored = apply_colors(&lhs_src, true, &lhs_positions);
    let rhs_colored = apply_colors(&rhs_src, false, &rhs_positions);

    let lang_name = match &lang {
        Some(lang) => lang.name.clone(),
        None => "plain text".to_string(),
    };
    println!("{}", style::header(lhs_path, &lang_name));
    print!(
        "{}",
        apply_groups(
            &lhs_colored,
            &rhs_colored,
            &groups,
            lhs_content_width,
            lhs_column_width,
            rhs_column_width,
            terminal_width
        )
    );
}
