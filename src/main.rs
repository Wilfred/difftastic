mod dijkstra;
mod inline;
mod intervals;
mod lines;
mod parse;
mod positions;
mod side_by_side;
mod sitter;
mod style;
mod syntax;
use clap::{App, AppSettings, Arg};
use std::ffi::OsStr;
use std::path::Path;
use std::{env, fs};
use typed_arena::Arena;

use crate::dijkstra::mark_syntax;
use crate::lines::{join_overlapping, visible_groups, MaxLine};
use crate::parse::{find_lang, parse, parse_lines, ConfigDir};
use crate::syntax::{change_positions, init_info, matching_lines};

fn read_or_die(path: &str) -> Vec<u8> {
    match fs::read(path) {
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

/// Do these bytes look like a binary (non-textual) format?
fn is_probably_binary(bytes: &[u8]) -> bool {
    // If more than 20 of the first 1,000 characters are not valid
    // UTF-8, we assume it's binary.
    let num_replaced = String::from_utf8_lossy(bytes)
        .to_string()
        .chars()
        .take(1000)
        .filter(|c| *c == std::char::REPLACEMENT_CHARACTER)
        .count();
    num_replaced > 20
}

const VERSION: &str = env!("CARGO_PKG_VERSION");

fn main() {
    let matches = App::new("Difftastic")
        .version(VERSION)
        .about("A syntax aware diff.")
        .author("Wilfred Hughes")
        .arg(
            Arg::with_name("LANGUAGE")
                .long("lang")
                .takes_value(true)
                .help("Override the language parser"),
        )
        .arg(Arg::with_name("positional_args").multiple(true))
        .setting(AppSettings::ArgRequiredElseHelp)
        .get_matches();

    let args: Vec<_> = matches.values_of_lossy("positional_args").unwrap();

    // TODO: document these different ways of calling difftastic.
    let (display_path, lhs_path, rhs_path) = match &args[..] {
        [lhs_path, rhs_path] => (rhs_path, lhs_path, rhs_path),
        [display_path, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (display_path, lhs_tmp_file, rhs_tmp_file)
        }
        _ => panic!("Expected 2 arguments or 7 arguments"),
    };

    let syntax_toml = ConfigDir::read_default_toml();
    let extension = Path::new(&display_path).extension();
    let lang = match extension {
        Some(extension) => find_lang(syntax_toml, &OsStr::to_string_lossy(extension)),
        None => None,
    };

    let lhs_bytes = read_or_die(lhs_path);
    let rhs_bytes = read_or_die(rhs_path);
    let lhs_binary = is_probably_binary(&lhs_bytes);
    let rhs_binary = is_probably_binary(&rhs_bytes);

    let lang_name = match &lang {
        _ if lhs_binary || rhs_binary => "binary".to_string(),
        Some(lang) => lang.name.clone(),
        None => "text".to_string(),
    };
    println!("{}", style::header(display_path, &lang_name));

    if lhs_binary || rhs_binary {
        return;
    }

    // TODO: don't replace tab characters inside string literals.
    let lhs_src = String::from_utf8_lossy(&lhs_bytes)
        .to_string()
        .replace("\t", "    ");
    let rhs_src = String::from_utf8_lossy(&rhs_bytes)
        .to_string()
        .replace("\t", "    ");

    let arena = Arena::new();

    let prefer_legacy_parser = env::var("DFT_LEGACY").is_ok();
    let extension = extension.unwrap_or_else(|| OsStr::new(""));
    let (lhs, rhs) = if sitter::supported(extension) && !prefer_legacy_parser {
        (
            sitter::parse(&arena, &lhs_src, extension),
            sitter::parse(&arena, &rhs_src, extension),
        )
    } else {
        match &lang {
            Some(lang) => (parse(&arena, &lhs_src, lang), parse(&arena, &rhs_src, lang)),
            None => (parse_lines(&arena, &lhs_src), parse_lines(&arena, &rhs_src)),
        }
    };

    init_info(&lhs);
    init_info(&rhs);
    mark_syntax(lhs.get(0).copied(), rhs.get(0).copied());

    let lhs_positions = change_positions(&lhs_src, &rhs_src, &lhs);
    let rhs_positions = change_positions(&rhs_src, &lhs_src, &rhs);

    let lhs_matched_lines = matching_lines(&lhs);

    let mut groups = visible_groups(&lhs_positions, &rhs_positions);
    if groups.is_empty() {
        if lang.is_some() {
            println!("No syntactic changes.");
        } else {
            println!("No changes.");
        }
        return;
    }

    for group in &mut groups {
        group.pad(3, lhs_src.max_line(), rhs_src.max_line());
    }
    groups = join_overlapping(groups);

    if env::var("INLINE").is_ok() {
        print!(
            "{}",
            inline::display(&lhs_src, &rhs_src, &lhs_positions, &rhs_positions, &groups)
        );
    } else {
        print!(
            "{}",
            side_by_side::display(
                &lhs_src,
                &rhs_src,
                &lhs_positions,
                &rhs_positions,
                &lhs_matched_lines,
                &groups
            )
        );
    }
    println!();
}
