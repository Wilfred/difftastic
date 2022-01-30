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
mod sliders;
mod style;
mod summary;
mod syntax;
mod tree_sitter_parser;
mod unchanged;

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
use clap::{crate_authors, crate_description, crate_version, App, AppSettings, Arg};
use sliders::fix_all_sliders;
use std::{env, path::Path};
use style::BackgroundColor;
use summary::DiffResult;
use syntax::init_next_prev;
use typed_arena::Arena;
use unchanged::skip_unchanged_at_ends;
use walkdir::WalkDir;

use crate::{
    dijkstra::mark_syntax,
    files::{is_probably_binary, read_or_die},
    line_parser as lp,
    lines::MaxLine,
    syntax::{change_positions, init_all_info},
    tree_sitter_parser as tsp,
};

extern crate pretty_env_logger;

/// Choose the display width: try to autodetect, or fall back to a
/// sensible default.
fn detect_display_width() -> usize {
    term_size::dimensions().map(|(w, _)| w).unwrap_or(80)
}

fn configure_color(color_output: ColorOutput) {
    let enable_color = match color_output {
        ColorOutput::Always => true,
        ColorOutput::Auto => {
            // Always enable colour if stdout is a TTY or if the git pager is active.
            // TODO: consider following the env parsing logic in git_config_bool
            // in config.c.
            atty::is(Stream::Stdout) || env::var("GIT_PAGER_IN_USE").is_ok()
        }
        ColorOutput::Never => false,
    };

    colored::control::set_override(enable_color);
}

enum ColorOutput {
    Always,
    Auto,
    Never,
}

enum Mode {
    Diff {
        background_color: BackgroundColor,
        color_output: ColorOutput,
        display_width: usize,
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

fn app() -> clap::App<'static> {
    App::new("Difftastic")
        .version(crate_version!())
        .about(crate_description!())
        .author(crate_authors!())
        .arg(
            Arg::new("dump-syntax")
                .long("dump-syntax")
                .takes_value(true)
                .value_name("PATH")
                .long_help(
                    "[DEBUG] Parse a single file with tree-sitter and display the difftastic syntax tree.",
                ),
        )
        .arg(
            Arg::new("dump-ts")
                .long("dump-ts")
                .takes_value(true)
                .value_name("PATH")
                .long_help(
                    "[DEBUG] Parse a single file with tree-sitter and display the tree-sitter parse tree.",
                ),
        )
        .arg(
            Arg::new("width")
                .long("width")
                .takes_value(true)
                .value_name("COLUMNS")
                .long_help("Use this many columns when calculating line wrapping. Overrides $DFT_WIDTH if present. If not specified, difftastic will detect the terminal width.")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("color").long("color")
                .possible_values(["always", "auto", "never"])
                .value_name("WHEN")
                .help("When to use color output.")
        )
        .arg(
            Arg::new("background").long("background")
                .possible_values(["dark", "light"])
                .help("Set the background color. Overrides $DFT_BACKGROUND if present. Difftastic will prefer brighter colours on dark backgrounds.")
        )
        .arg(
            Arg::new("paths")
                .value_name("PATHS")
                .multiple_values(true)
                .allow_invalid_utf8(true),
        )
        .setting(AppSettings::ArgRequiredElseHelp)
}

/// Parse CLI arguments passed to the binary.
fn parse_args() -> Mode {
    let matches = app().get_matches();

    if let Some(path) = matches.value_of("dump-syntax") {
        return Mode::DumpSyntax {
            path: path.to_string(),
        };
    }

    if let Some(path) = matches.value_of("dump-ts") {
        return Mode::DumpTreeSitter {
            path: path.to_string(),
        };
    }

    let args: Vec<_> = matches.values_of_lossy("paths").unwrap();
    info!("CLI arguments: {:?}", args);

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

    let display_width = if let Some(arg_width) = matches.value_of("width") {
        arg_width
            .parse::<usize>()
            .expect("Already validated by clap")
    } else {
        let env_width = if let Ok(env_width) = env::var("DFT_WIDTH") {
            env_width.parse::<usize>().ok()
        } else {
            None
        };
        env_width.unwrap_or_else(detect_display_width)
    };

    let color_output = if let Some(color_when) = matches.value_of("color") {
        if color_when == "always" {
            ColorOutput::Always
        } else if color_when == "never" {
            ColorOutput::Never
        } else {
            ColorOutput::Auto
        }
    } else {
        ColorOutput::Auto
    };

    let background_color = if let Some(background) = matches.value_of("background") {
        if background == "light" {
            BackgroundColor::Light
        } else {
            BackgroundColor::Dark
        }
    } else {
        if let Ok(background) = env::var("DFT_BACKGROUND") {
            if background == "light" {
                BackgroundColor::Light
            } else {
                BackgroundColor::Dark
            }
        } else {
            BackgroundColor::Dark
        }
    };

    Mode::Diff {
        background_color,
        color_output,
        display_width,
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
                    init_all_info(&ast, &[]);
                    println!("{:#?}", ast);
                }
                None => {
                    eprintln!("No tree-sitter parser for file: {:?}", path);
                }
            }
        }
        Mode::Diff {
            background_color,
            color_output,
            display_width,
            display_path,
            lhs_path,
            rhs_path,
            ..
        } => {
            configure_color(color_output);

            let lhs_path = Path::new(&lhs_path);
            let rhs_path = Path::new(&rhs_path);

            if lhs_path.is_dir() && rhs_path.is_dir() {
                for diff_result in diff_directories(lhs_path, rhs_path) {
                    print_diff_result(display_width, background_color, &diff_result);
                }
            } else {
                let diff_result = diff_file(&display_path, lhs_path, rhs_path);
                print_diff_result(display_width, background_color, &diff_result);
            }
        }
    };
}

/// Print a diff between two files.
fn diff_file(display_path: &str, lhs_path: &Path, rhs_path: &Path) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path);
    diff_file_content(display_path, &lhs_bytes, &rhs_bytes)
}

fn diff_file_content(display_path: &str, lhs_bytes: &[u8], rhs_bytes: &[u8]) -> DiffResult {
    if is_probably_binary(lhs_bytes) || is_probably_binary(rhs_bytes) {
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
    let lhs_src = String::from_utf8_lossy(lhs_bytes)
        .to_string()
        .replace("\t", "    ");
    let rhs_src = String::from_utf8_lossy(rhs_bytes)
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

    if lhs_bytes == rhs_bytes {
        return DiffResult {
            path: display_path.into(),
            language: ts_lang.map(|l| l.name.into()),
            binary: false,
            lhs_src: "".into(),
            rhs_src: "".into(),
            lhs_positions: vec![],
            rhs_positions: vec![],
        };
    }

    let (lang_name, lhs_positions, rhs_positions) = match ts_lang {
        Some(ts_lang) => {
            let arena = Arena::new();
            let lhs = tsp::parse(&arena, &lhs_src, &ts_lang);
            let rhs = tsp::parse(&arena, &rhs_src, &ts_lang);

            init_all_info(&lhs, &rhs);

            let (possibly_changed_lhs, possibly_changed_rhs) = skip_unchanged_at_ends(&lhs, &rhs);
            init_next_prev(&possibly_changed_lhs);
            init_next_prev(&possibly_changed_rhs);

            mark_syntax(
                possibly_changed_lhs.get(0).copied(),
                possibly_changed_rhs.get(0).copied(),
            );

            fix_all_sliders(&possibly_changed_lhs);
            fix_all_sliders(&possibly_changed_rhs);

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

        res.push(diff_file(&rel_path.to_string_lossy(), lhs_path, &rhs_path));
    }
    res
}

fn print_diff_result(display_width: usize, background: BackgroundColor, summary: &DiffResult) {
    if summary.binary {
        println!(
            "{}",
            style::header(&summary.path, 1, 1, "binary", background)
        );
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
        println!(
            "{}",
            style::header(&summary.path, 1, 1, &lang_name, background)
        );
        if lang_name == "text" {
            println!("No changes.\n");
        } else {
            println!("No syntactic changes.\n");
        }
        return;
    }

    if env::var("INLINE").is_ok() {
        println!(
            "{}",
            inline::display(
                &summary.lhs_src,
                &summary.rhs_src,
                &summary.lhs_positions,
                &summary.rhs_positions,
                &hunks,
                &summary.path,
                &lang_name,
                background
            )
        );
    } else {
        println!(
            "{}",
            side_by_side::display_hunks(
                &hunks,
                display_width,
                background,
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_diff_identical_content() {
        let s = "foo";
        let res = diff_file_content("foo.el", s.as_bytes(), s.as_bytes());

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
        assert!(!res.binary);
    }

    #[test]
    fn test_app() {
        app().debug_assert();
    }

    #[test]
    fn test_detect_display_width() {
        // Basic smoke test.
        assert!(detect_display_width() > 10);
    }
}
