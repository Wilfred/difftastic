//! Difftastic is a syntactic diff tool.
//!
//! For usage instructions and advice on contributing, see [the
//! manual](http://difftastic.wilfred.me.uk/).
//!

// This tends to trigger on larger tuples of simple types, and naming
// them would probably be worse for readability.
#![allow(clippy::type_complexity)]

mod context;
mod dijkstra;
mod files;
mod graph;
mod guess_language;
mod hunks;
mod inline;
mod line_parser;
mod lines;
mod positions;
mod side_by_side;
mod style;
mod summary;
mod syntax;
mod tree_sitter_parser;

#[macro_use]
extern crate log;

use crate::hunks::{matched_pos_to_hunks, merge_adjacent};
use context::opposite_positions;
use files::read_files_or_die;
use guess_language::guess;
use log::info;
use mimalloc::MiMalloc;

/// The global allocator used by difftastic.
///
/// Diffing allocates a large amount of memory, and MiMalloc performs
/// better.
#[global_allocator]
static GLOBAL: MiMalloc = MiMalloc;

use atty::Stream;
use clap::{crate_version, App, AppSettings, Arg};
use std::{env, path::Path};
use summary::DiffResult;
use typed_arena::Arena;
use walkdir::WalkDir;

use crate::{
    dijkstra::mark_syntax,
    files::{is_probably_binary, read_or_die},
    line_parser as lp,
    lines::MaxLine,
    syntax::{change_positions, init_info},
    tree_sitter_parser as tsp,
};

extern crate pretty_env_logger;

fn configure_color() {
    if atty::is(Stream::Stdout) || env::var("GIT_PAGER_IN_USE").is_ok() {
        // Always enable colour if stdout is a TTY or if the git pager is active.
        // TODO: provide a way to disable this.
        // TODO: consider following the env parsing logic in git_config_bool
        // in config.c.
        colored::control::set_override(true);
    }
}

enum Mode {
    Diff {
        display_path: String,
        lhs_path: String,
        rhs_path: String,
    },
    DumpTreeSitter {
        path: String,
    },
    DumpSyntax {
        path: String,
    },
}

/// Parse CLI arguments passed to the binary.
fn parse_args() -> Mode {
    let matches =
        App::new("Difftastic")
            .version(crate_version!())
            .about("A syntax aware diff.")
            .author("Wilfred Hughes")
            .arg(Arg::with_name("dump-syntax").long("dump-syntax").help(
                "Parse a single file with tree-sitter and display the difftastic syntax tree.",
            ))
            .arg(Arg::with_name("dump-ts").long("dump-ts").help(
                "Parse a single file with tree-sitter and display the tree-sitter parse tree.",
            ))
            .arg(Arg::with_name("positional_args").multiple(true))
            .setting(AppSettings::ArgRequiredElseHelp)
            .get_matches();

    let args: Vec<_> = matches.values_of_lossy("positional_args").unwrap();
    info!("CLI arguments: {:?}", args);

    if matches.is_present("dump-syntax") {
        if args.len() == 1 {
            return Mode::DumpSyntax {
                path: args[0].clone(),
            };
        } else {
            // TODO: delegate this parsing to clap.
            panic!(
                "Error: --dump-syntax takes one argument, but got: {}",
                args.len()
            );
        }
    }

    if matches.is_present("dump-ts") {
        if args.len() == 1 {
            return Mode::DumpTreeSitter {
                path: args[0].clone(),
            };
        } else {
            // TODO: delegate this parsing to clap.
            panic!(
                "Error: --dump-ts takes one argument, but got: {}",
                args.len()
            );
        }
    }

    // TODO: document these different ways of calling difftastic.
    let (display_path, lhs_path, rhs_path) = match &args[..] {
        [lhs_path, rhs_path] => (
            rhs_path.to_string(),
            lhs_path.to_string(),
            rhs_path.to_string(),
        ),
        [display_path, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_string(),
                lhs_tmp_file.to_string(),
                rhs_tmp_file.to_string(),
            )
        }
        [_old_name, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode, new_name, _similarity] =>
        {
            // Rename file.
            // TODO: mention old name as well as diffing.
            // TODO: where does git document these 9 arguments?
            (
                new_name.to_string(),
                lhs_tmp_file.to_string(),
                rhs_tmp_file.to_string(),
            )
        }
        _ => panic!(
            "Unexpected number of arguments, got {}: {:?}",
            args.len(),
            args
        ),
    };

    Mode::Diff {
        display_path,
        lhs_path,
        rhs_path,
    }
}

/// Terminate the process if we get SIGPIPE.
#[cfg(unix)]
fn reset_sigpipe() {
    unsafe {
        libc::signal(libc::SIGPIPE, libc::SIG_DFL);
    }
}

#[cfg(not(unix))]
fn reset_sigpipe() {
    // Do nothing.
}

/// The entrypoint.
fn main() {
    pretty_env_logger::init();

    reset_sigpipe();
    configure_color();

    match parse_args() {
        Mode::DumpTreeSitter { path } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();
            match guess(path, &src) {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let (tree, _) = tsp::parse_to_tree(&src, &ts_lang);
                    tsp::print_tree(&src, &tree);
                }
                None => {
                    eprintln!("No tree-sitter parser for file: {:?}", path);
                }
            }
        }
        Mode::DumpSyntax { path } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();

            match guess(path, &src) {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let arena = Arena::new();
                    let ast = tsp::parse(&arena, &src, &ts_lang);
                    init_info(&ast, &[]);
                    println!("{:#?}", ast);
                }
                None => {
                    eprintln!("No tree-sitter parser for file: {:?}", path);
                }
            }
        }
        Mode::Diff {
            display_path,
            lhs_path,
            rhs_path,
        } => {
            let lhs_path = Path::new(&lhs_path);
            let rhs_path = Path::new(&rhs_path);

            if lhs_path.is_dir() && rhs_path.is_dir() {
                for diff_result in diff_directories(lhs_path, rhs_path) {
                    print_diff_result(&diff_result);
                }
            } else {
                let diff_result = diff_file(&display_path, lhs_path, rhs_path);
                print_diff_result(&diff_result);
            }
        }
    };
}

/// Print a diff between two files.
fn diff_file(display_path: &str, lhs_path: &Path, rhs_path: &Path) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path);

    let lhs_binary = is_probably_binary(&lhs_bytes);
    let rhs_binary = is_probably_binary(&rhs_bytes);
    if lhs_binary || rhs_binary {
        return DiffResult {
            path: display_path.into(),
            language: None,
            binary: true,
            lhs_src: "".into(),
            rhs_src: "".into(),
            lhs_positions: vec![],
            rhs_positions: vec![],
        };
    }

    // TODO: don't replace tab characters inside string literals.
    let lhs_src = String::from_utf8_lossy(&lhs_bytes)
        .to_string()
        .replace("\t", "    ");
    let rhs_src = String::from_utf8_lossy(&rhs_bytes)
        .to_string()
        .replace("\t", "    ");

    // TODO: take a Path directly instead.
    let path = Path::new(&display_path);

    // Take the longer of the two files when guessing language. This
    // is useful when we've added or removed a whole file.
    let guess_src = if lhs_src.len() > rhs_src.len() {
        &lhs_src
    } else {
        &rhs_src
    };
    let ts_lang = guess(path, guess_src).map(tsp::from_language);

    let (lang_name, lhs_positions, rhs_positions) = match ts_lang {
        Some(ts_lang) => {
            let arena = Arena::new();
            let lhs = tsp::parse(&arena, &lhs_src, &ts_lang);
            let rhs = tsp::parse(&arena, &rhs_src, &ts_lang);

            init_info(&lhs, &rhs);
            mark_syntax(lhs.get(0).copied(), rhs.get(0).copied());

            let lhs_positions = change_positions(&lhs_src, &rhs_src, &lhs);
            let rhs_positions = change_positions(&rhs_src, &lhs_src, &rhs);
            (Some(ts_lang.name.into()), lhs_positions, rhs_positions)
        }
        None => {
            let lhs_positions = lp::change_positions(&lhs_src, &rhs_src);
            let rhs_positions = lp::change_positions(&rhs_src, &lhs_src);
            (None, lhs_positions, rhs_positions)
        }
    };

    DiffResult {
        path: display_path.into(),
        language: lang_name,
        binary: false,
        lhs_src,
        rhs_src,
        lhs_positions,
        rhs_positions,
    }
}

/// Given two directories that contain the files, compare them
/// pairwise.
///
/// When more than one file is modified, the hg extdiff extension passes directory
/// paths with the all the modified files.
fn diff_directories(lhs_dir: &Path, rhs_dir: &Path) -> Vec<DiffResult> {
    let mut res = vec![];
    for entry in WalkDir::new(lhs_dir).into_iter().filter_map(Result::ok) {
        let lhs_path = entry.path();
        if lhs_path.is_dir() {
            continue;
        }

        info!("LHS path is {:?} inside {:?}", lhs_path, lhs_dir);

        let rel_path = lhs_path.strip_prefix(lhs_dir).unwrap();
        let rhs_path = Path::new(rhs_dir).join(rel_path);

        res.push(diff_file(&rel_path.to_string_lossy(), &lhs_path, &rhs_path));
    }
    res
}

fn print_diff_result(summary: &DiffResult) {
    if summary.binary {
        println!("{}", style::header(&summary.path, 1, 1, "binary"));
        return;
    }

    let opposite_to_lhs = opposite_positions(&summary.lhs_positions);
    let opposite_to_rhs = opposite_positions(&summary.rhs_positions);

    let hunks = matched_pos_to_hunks(&summary.lhs_positions, &summary.rhs_positions);
    let hunks = merge_adjacent(
        &hunks,
        &opposite_to_lhs,
        &opposite_to_rhs,
        summary.lhs_src.max_line(),
        summary.rhs_src.max_line(),
    );

    let lang_name = summary.language.clone().unwrap_or_else(|| "text".into());
    if hunks.is_empty() {
        println!("{}", style::header(&summary.path, 1, 1, &lang_name));
        if lang_name == "text" {
            println!("No changes.\n");
        } else {
            println!("No syntactic changes.\n");
        }
        return;
    }

    if env::var("INLINE").is_ok() {
        println!("{}", style::header(&summary.path, 1, 1, &lang_name));

        println!(
            "{}",
            inline::display(
                &summary.lhs_src,
                &summary.rhs_src,
                &summary.lhs_positions,
                &summary.rhs_positions,
                &hunks
            )
        );
    } else {
        println!(
            "{}",
            side_by_side::display_hunks(
                &hunks,
                &summary.path,
                &lang_name,
                &summary.lhs_src,
                &summary.rhs_src,
                &summary.lhs_positions,
                &summary.rhs_positions,
            )
        );
    }
}
