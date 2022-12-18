//! Difftastic is a syntactic diff tool.
//!
//! For usage instructions and advice on contributing, see [the
//! manual](http://difftastic.wilfred.me.uk/).
//!

// This tends to trigger on larger tuples of simple types, and naming
// them would probably be worse for readability.
#![allow(clippy::type_complexity)]
// == "" is often clearer when dealing with strings.
#![allow(clippy::comparison_to_empty)]
// It's common to have pairs foo_lhs and foo_rhs, leading to double
// the number of arguments and triggering this lint.
#![allow(clippy::too_many_arguments)]
// Has false positives on else if chains that sometimes have the same
// body for readability.
#![allow(clippy::if_same_then_else)]
// Purely stylistic, and ignores whether there are explanatory
// comments in the if/else.
#![allow(clippy::bool_to_int_with_if)]

mod constants;
mod diff;
mod display;
mod files;
mod line_parser;
mod lines;
mod options;
mod parse;
mod positions;
mod summary;

#[macro_use]
extern crate log;

use crate::diff::{dijkstra, unchanged};
use crate::display::hunks::{matched_pos_to_hunks, merge_adjacent};
use crate::parse::guess_language::LANG_EXTENSIONS;
use crate::parse::syntax;
use diff::changes::ChangeMap;
use diff::dijkstra::ExceededGraphLimit;
use display::context::opposite_positions;
use files::{
    guess_content, read_files_or_die, read_or_die, relative_paths_in_either, ProbableFileKind,
};
use log::info;
use mimalloc::MiMalloc;
use parse::guess_language::{guess, language_name};

/// The global allocator used by difftastic.
///
/// Diffing allocates a large amount of memory, and `MiMalloc` performs
/// better.
#[global_allocator]
static GLOBAL: MiMalloc = MiMalloc;

use diff::sliders::fix_all_sliders;
use options::{DisplayMode, DisplayOptions, FileArgument, Mode, DEFAULT_TAB_WIDTH};
use owo_colors::OwoColorize;
use rayon::prelude::*;
use std::{env, path::Path};
use summary::{DiffResult, FileContent};
use syntax::init_next_prev;
use typed_arena::Arena;

use crate::{
    dijkstra::mark_syntax, lines::MaxLine, parse::syntax::init_all_info,
    parse::tree_sitter_parser as tsp,
};

extern crate pretty_env_logger;

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
    pretty_env_logger::init_timed();
    reset_sigpipe();

    match options::parse_args() {
        Mode::DumpTreeSitter {
            path,
            language_override,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();
            // TODO: Load display options rather than hard-coding.
            let src = replace_tabs(&src, DEFAULT_TAB_WIDTH);

            let language = language_override.or_else(|| guess(path, &src));
            match language {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let tree = tsp::parse_to_tree(&src, &ts_lang);
                    tsp::print_tree(&src, &tree);
                }
                None => {
                    eprintln!("No tree-sitter parser for file: {:?}", path);
                }
            }
        }
        Mode::DumpSyntax {
            path,
            language_override,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();
            // TODO: Load display options rather than hard-coding.
            let src = replace_tabs(&src, DEFAULT_TAB_WIDTH);

            let language = language_override.or_else(|| guess(path, &src));
            match language {
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
        Mode::ListLanguages { use_color } => {
            for (language, extensions) in LANG_EXTENSIONS {
                let mut name = language_name(*language).to_string();
                if use_color {
                    name = name.bold().to_string();
                }
                print!("{}", name);

                let mut extensions: Vec<&str> = (*extensions).into();
                extensions.sort_unstable();

                for extension in extensions {
                    print!(" .{}", extension);
                }
                println!();
            }
        }
        Mode::Diff {
            graph_limit,
            byte_limit,
            display_options,
            missing_as_empty,
            language_override,
            lhs_path,
            rhs_path,
            lhs_display_path,
            rhs_display_path,
        } => {
            if lhs_path == rhs_path {
                let is_dir = match &lhs_path {
                    FileArgument::NamedPath(path) => path.is_dir(),
                    _ => false,
                };

                eprintln!(
                    "warning: You've specified the same {} twice.\n",
                    if is_dir { "directory" } else { "file" }
                );
            }

            match (&lhs_path, &rhs_path) {
                (
                    options::FileArgument::NamedPath(lhs_path),
                    options::FileArgument::NamedPath(rhs_path),
                ) if lhs_path.is_dir() && rhs_path.is_dir() => {
                    // We want to diff files in the directory in
                    // parallel, but print the results serially (to
                    // prevent display interleaving).
                    // https://github.com/rayon-rs/rayon/issues/210#issuecomment-551319338
                    let (send, recv) = std::sync::mpsc::sync_channel(1);

                    let print_options = display_options.clone();
                    let printing_thread = std::thread::spawn(move || {
                        for diff_result in recv.into_iter() {
                            print_diff_result(&print_options, &diff_result);
                        }
                    });

                    diff_directories(
                        lhs_path,
                        rhs_path,
                        &display_options,
                        graph_limit,
                        byte_limit,
                        language_override,
                    )
                    .try_for_each_with(send, |s, diff_result| s.send(diff_result))
                    .expect("Receiver should be connected");

                    printing_thread
                        .join()
                        .expect("Printing thread should not panic");
                }
                _ => {
                    let diff_result = diff_file(
                        &lhs_display_path,
                        &rhs_display_path,
                        &lhs_path,
                        &rhs_path,
                        &display_options,
                        missing_as_empty,
                        graph_limit,
                        byte_limit,
                        language_override,
                    );
                    print_diff_result(&display_options, &diff_result);
                }
            }
        }
    };
}

/// Return a copy of `str` with all the tab characters replaced by
/// `tab_width` strings.
///
/// TODO: This break parsers that require tabs, such as Makefile
/// parsing. We shouldn't do this transform until after parsing.
fn replace_tabs(src: &str, tab_width: usize) -> String {
    let tab_as_spaces = " ".repeat(tab_width);
    src.replace('\t', &tab_as_spaces)
}

/// Print a diff between two files.
fn diff_file(
    lhs_display_path: &str,
    rhs_display_path: &str,
    lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    display_options: &DisplayOptions,
    missing_as_empty: bool,
    graph_limit: usize,
    byte_limit: usize,
    language_override: Option<parse::guess_language::Language>,
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);
    diff_file_content(
        lhs_display_path,
        rhs_display_path,
        lhs_path,
        rhs_path,
        &lhs_bytes,
        &rhs_bytes,
        &display_options,
        graph_limit,
        byte_limit,
        language_override,
    )
}

fn diff_file_content(
    lhs_display_path: &str,
    rhs_display_path: &str,
    _lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    display_options: &DisplayOptions,
    graph_limit: usize,
    byte_limit: usize,
    language_override: Option<parse::guess_language::Language>,
) -> DiffResult {
    let (mut lhs_src, mut rhs_src) = match (guess_content(lhs_bytes), guess_content(rhs_bytes)) {
        (ProbableFileKind::Binary, _) | (_, ProbableFileKind::Binary) => {
            let has_changes = lhs_bytes == rhs_bytes;
            return DiffResult {
                lhs_display_path: lhs_display_path.into(),
                rhs_display_path: rhs_display_path.into(),
                language: None,
                detected_language: None,
                lhs_src: FileContent::Binary,
                rhs_src: FileContent::Binary,
                lhs_positions: vec![],
                rhs_positions: vec![],
                hunks: vec![],
                has_same_bytes: has_changes,
            };
        }
        (ProbableFileKind::Text(lhs_src), ProbableFileKind::Text(rhs_src)) => (lhs_src, rhs_src),
    };

    // TODO: don't replace tab characters inside string literals.
    lhs_src = replace_tabs(&lhs_src, display_options.tab_width);
    rhs_src = replace_tabs(&rhs_src, display_options.tab_width);

    // Ignore the trailing newline, if present.
    // TODO: highlight if this has changes (#144).
    // TODO: factor out a string cleaning function.
    if lhs_src.ends_with('\n') {
        lhs_src.pop();
    }
    if rhs_src.ends_with('\n') {
        rhs_src.pop();
    }

    let (guess_src, guess_path) = match rhs_path {
        FileArgument::NamedPath(_) => (&rhs_src, Path::new(&rhs_display_path)),
        FileArgument::Stdin => (&rhs_src, Path::new(&lhs_display_path)),
        FileArgument::DevNull => (&lhs_src, Path::new(&lhs_display_path)),
    };

    let language = language_override.or_else(|| guess(guess_path, guess_src));
    let lang_config = language.map(tsp::from_language);

    if lhs_bytes == rhs_bytes {
        // If the two files are completely identical, return early
        // rather than doing any more work.
        return DiffResult {
            lhs_display_path: lhs_display_path.into(),
            rhs_display_path: rhs_display_path.into(),
            language: language.map(|l| language_name(l).into()),
            detected_language: language,
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
            lhs_positions: vec![],
            rhs_positions: vec![],
            hunks: vec![],
            has_same_bytes: true,
        };
    }

    let (lang_name, lhs_positions, rhs_positions) = match lang_config {
        _ if lhs_bytes.len() > byte_limit || rhs_bytes.len() > byte_limit => {
            let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
            let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
            (
                Some("Text (exceeded DFT_BYTE_LIMIT)".into()),
                lhs_positions,
                rhs_positions,
            )
        }
        Some(ts_lang) => {
            let arena = Arena::new();
            let lhs = tsp::parse(&arena, &lhs_src, &ts_lang);
            let rhs = tsp::parse(&arena, &rhs_src, &ts_lang);

            init_all_info(&lhs, &rhs);

            let mut change_map = ChangeMap::default();
            let possibly_changed = if env::var("DFT_DBG_KEEP_UNCHANGED").is_ok() {
                vec![(lhs.clone(), rhs.clone())]
            } else {
                unchanged::mark_unchanged(&lhs, &rhs, &mut change_map)
            };

            let mut exceeded_graph_limit = false;

            for (lhs_section_nodes, rhs_section_nodes) in possibly_changed {
                init_next_prev(&lhs_section_nodes);
                init_next_prev(&rhs_section_nodes);

                match mark_syntax(
                    lhs_section_nodes.get(0).copied(),
                    rhs_section_nodes.get(0).copied(),
                    &mut change_map,
                    graph_limit,
                ) {
                    Ok(()) => {}
                    Err(ExceededGraphLimit {}) => {
                        exceeded_graph_limit = true;
                        break;
                    }
                }
            }

            if exceeded_graph_limit {
                let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
                let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
                (
                    Some("Text (exceeded DFT_GRAPH_LIMIT)".into()),
                    lhs_positions,
                    rhs_positions,
                )
            } else {
                // TODO: Make this .expect() unnecessary.
                let language =
                    language.expect("If we had a ts_lang, we must have guessed the language");
                fix_all_sliders(language, &lhs, &mut change_map);
                fix_all_sliders(language, &rhs, &mut change_map);

                let lhs_positions = syntax::change_positions(&lhs, &change_map);
                let rhs_positions = syntax::change_positions(&rhs, &change_map);
                (
                    Some(language_name(language).into()),
                    lhs_positions,
                    rhs_positions,
                )
            }
        }
        None => {
            let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
            let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
            (None, lhs_positions, rhs_positions)
        }
    };

    let opposite_to_lhs = opposite_positions(&lhs_positions);
    let opposite_to_rhs = opposite_positions(&rhs_positions);

    let hunks = matched_pos_to_hunks(&lhs_positions, &rhs_positions);
    let hunks = merge_adjacent(
        &hunks,
        &opposite_to_lhs,
        &opposite_to_rhs,
        lhs_src.max_line(),
        rhs_src.max_line(),
        display_options.num_context_lines as usize,
    );
    DiffResult {
        lhs_display_path: lhs_display_path.into(),
        rhs_display_path: rhs_display_path.into(),
        language: lang_name,
        detected_language: language,
        lhs_src: FileContent::Text(lhs_src),
        rhs_src: FileContent::Text(rhs_src),
        lhs_positions,
        rhs_positions,
        hunks,
        has_same_bytes: false,
    }
}

/// Given two directories that contain the files, compare them
/// pairwise. Returns an iterator, so we can print results
/// incrementally.
///
/// When more than one file is modified, the hg extdiff extension passes directory
/// paths with the all the modified files.
fn diff_directories<'a>(
    lhs_dir: &'a Path,
    rhs_dir: &'a Path,
    display_options: &DisplayOptions,
    graph_limit: usize,
    byte_limit: usize,
    language_override: Option<parse::guess_language::Language>,
) -> impl ParallelIterator<Item = DiffResult> + 'a {
    let display_options = display_options.clone();

    // We greedily list all files in the directory, and then diff them
    // in parallel. This is assuming that diffing is slower than
    // enumerating files, so it benefits more from parallelism.
    let paths = relative_paths_in_either(lhs_dir, rhs_dir);

    paths.into_par_iter().map(move |rel_path| {
        info!("Relative path is {:?} inside {:?}", rel_path, lhs_dir);

        let lhs_path = Path::new(lhs_dir).join(&rel_path);
        let rhs_path = Path::new(rhs_dir).join(&rel_path);

        diff_file(
            &rel_path.to_string_lossy(),
            &rel_path.to_string_lossy(),
            &FileArgument::NamedPath(lhs_path),
            &FileArgument::NamedPath(rhs_path),
            &display_options,
            true,
            graph_limit,
            byte_limit,
            language_override,
        )
    })
}

fn print_diff_result(display_options: &DisplayOptions, summary: &DiffResult) {
    match (&summary.lhs_src, &summary.rhs_src) {
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            let hunks = &summary.hunks;

            let lang_name = summary.language.clone().unwrap_or_else(|| "Text".into());
            if hunks.is_empty() {
                if display_options.print_unchanged {
                    println!(
                        "{}",
                        display::style::header(
                            &summary.lhs_display_path,
                            &summary.rhs_display_path,
                            1,
                            1,
                            &lang_name,
                            display_options
                        )
                    );
                    if lang_name == "Text" || summary.lhs_src == summary.rhs_src {
                        // TODO: there are other Text names now, so
                        // they will hit the second case incorrectly.
                        println!("No changes.\n");
                    } else {
                        println!("No syntactic changes.\n");
                    }
                }
                return;
            }

            match display_options.display_mode {
                DisplayMode::Inline => {
                    display::inline::print(
                        lhs_src,
                        rhs_src,
                        display_options,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                        &hunks,
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        &lang_name,
                        summary.detected_language,
                    );
                }
                DisplayMode::SideBySide | DisplayMode::SideBySideShowBoth => {
                    display::side_by_side::print(
                        &hunks,
                        display_options,
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        &lang_name,
                        summary.detected_language,
                        lhs_src,
                        rhs_src,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                    );
                }
            }
        }
        (FileContent::Binary, FileContent::Binary) => {
            if display_options.print_unchanged || !summary.has_same_bytes {
                println!(
                    "{}",
                    display::style::header(
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        1,
                        1,
                        "binary",
                        display_options
                    )
                );
                if summary.has_same_bytes {
                    println!("No changes.");
                } else {
                    println!("Binary contents changed.");
                }
            }
        }
        (FileContent::Text(_), FileContent::Binary)
        | (FileContent::Binary, FileContent::Text(_)) => {
            // We're diffing a binary file against a text file.
            println!(
                "{}",
                display::style::header(
                    &summary.lhs_display_path,
                    &summary.rhs_display_path,
                    1,
                    1,
                    "binary",
                    display_options
                )
            );
            println!("Binary contents changed.");
        }
    }
}

#[cfg(test)]
mod tests {
    use std::ffi::OsStr;

    use super::*;
    use crate::{
        display::style::BackgroundColor,
        options::{DEFAULT_BYTE_LIMIT, DEFAULT_GRAPH_LIMIT},
    };

    #[test]
    fn test_diff_identical_content() {
        let display_options = DisplayOptions {
            background_color: BackgroundColor::Dark,
            use_color: false,
            display_mode: DisplayMode::SideBySide,
            print_unchanged: true,
            tab_width: 8,
            display_width: 80,
            num_context_lines: 3,
            in_vcs: false,
            syntax_highlight: true,
        };

        let s = "foo";
        let res = diff_file_content(
            "foo.el",
            "foo.el",
            &FileArgument::from_path_argument(OsStr::new("foo.el")),
            &FileArgument::from_path_argument(OsStr::new("foo.el")),
            s.as_bytes(),
            s.as_bytes(),
            &display_options,
            DEFAULT_GRAPH_LIMIT,
            DEFAULT_BYTE_LIMIT,
            None,
        );

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }
}
