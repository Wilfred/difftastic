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
// Good practice in general, but a necessary evil for Syntax. Its Hash
// implementation does not consider the mutable fields, so it is still
// correct.
#![allow(clippy::mutable_key_type)]

mod constants;
mod diff;
mod display;
mod exit_codes;
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
use crate::parse::guess_language::{LANG_EXTENSIONS, LANG_FILE_NAMES};
use crate::parse::syntax;
use diff::changes::ChangeMap;
use diff::dijkstra::ExceededGraphLimit;
use display::context::opposite_positions;
use exit_codes::{EXIT_FOUND_CHANGES, EXIT_SUCCESS};
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
use options::{DiffOptions, DisplayMode, DisplayOptions, FileArgument, Mode};
use owo_colors::OwoColorize;
use rayon::prelude::*;
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::Arc;
use std::{env, path::Path};
use summary::{DiffResult, FileContent, FileFormat};
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

            let language = language_override.or_else(|| guess(path, &src));
            match language {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let tree = tsp::to_tree(&src, &ts_lang);
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
            ignore_comments,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();

            let language = language_override.or_else(|| guess(path, &src));
            match language {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let arena = Arena::new();
                    let ast = tsp::parse(&arena, &src, &ts_lang, ignore_comments);
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
                println!("{}", name);

                let mut extensions: Vec<&str> = (*extensions).into();
                extensions.sort_unstable();

                for extension in extensions {
                    print!(" *.{}", extension);
                }

                for (file_language, known_file_names) in LANG_FILE_NAMES {
                    if file_language == language {
                        let mut known_file_names: Vec<&str> = (*known_file_names).into();
                        known_file_names.sort_unstable();

                        for known_file_name in known_file_names {
                            print!(" {}", known_file_name);
                        }
                    }
                }
                println!();
            }
        }
        Mode::Diff {
            diff_options,
            display_options,
            set_exit_code,
            language_override,
            lhs_path,
            rhs_path,
            display_path,
            old_path,
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

            let encountered_changes = Arc::new(AtomicBool::new(false));
            match (&lhs_path, &rhs_path) {
                (
                    options::FileArgument::NamedPath(lhs_path),
                    options::FileArgument::NamedPath(rhs_path),
                ) if lhs_path.is_dir() && rhs_path.is_dir() => {
                    let results = diff_directories(
                        lhs_path,
                        rhs_path,
                        &display_options,
                        &diff_options,
                        language_override,
                    )
                    .map(|diff_result| {
                        if diff_result.has_reportable_change() {
                            encountered_changes.store(true, Ordering::Relaxed);
                        }
                        diff_result
                    })
                    .collect::<Vec<_>>();

                    match display_options.display_mode {
                        DisplayMode::Inline
                        | DisplayMode::SideBySide
                        | DisplayMode::SideBySideShowBoth => {
                            for diff_result in results {
                                print_diff_result(&display_options, &diff_result);
                            }
                        }
                        DisplayMode::Json => display::json::print_directory(results),
                    }
                }
                _ => {
                    let diff_result = diff_file(
                        &display_path,
                        old_path,
                        &lhs_path,
                        &rhs_path,
                        &display_options,
                        &diff_options,
                        false,
                        language_override,
                    );
                    if diff_result.has_reportable_change() {
                        encountered_changes.store(true, Ordering::Relaxed);
                    }

                    match display_options.display_mode {
                        DisplayMode::Inline
                        | DisplayMode::SideBySide
                        | DisplayMode::SideBySideShowBoth => {
                            print_diff_result(&display_options, &diff_result);
                        }
                        DisplayMode::Json => display::json::print(&diff_result),
                    }
                }
            }

            let exit_code = if set_exit_code && encountered_changes.load(Ordering::Relaxed) {
                EXIT_FOUND_CHANGES
            } else {
                EXIT_SUCCESS
            };
            std::process::exit(exit_code);
        }
    };
}

fn format_num_bytes(num_bytes: usize) -> String {
    if num_bytes >= 1024 * 1024 * 1024 {
        let g = num_bytes as f64 / (1024.0 * 1024.0 * 1024.0);
        return format!("{}GiB", g.round());
    } else if num_bytes >= 1024 * 1024 {
        let m = num_bytes as f64 / (1024.0 * 1024.0);
        return format!("{}MiB", m.round());
    } else if num_bytes >= 1024 {
        let k = num_bytes as f64 / 1024.0;
        return format!("{}KiB", k.round());
    }

    format!("{}B", num_bytes)
}

/// Print a diff between two files.
fn diff_file(
    display_path: &str,
    old_path: Option<String>,
    lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    missing_as_empty: bool,
    language_override: Option<parse::guess_language::Language>,
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);
    diff_file_content(
        display_path,
        old_path,
        lhs_path,
        rhs_path,
        &lhs_bytes,
        &rhs_bytes,
        display_options,
        diff_options,
        language_override,
    )
}

fn check_only_text(
    file_format: &FileFormat,
    display_path: &str,
    old_path: Option<String>,
    lhs_src: &str,
    rhs_src: &str,
) -> DiffResult {
    let has_changes = lhs_src != rhs_src;

    DiffResult {
        display_path: display_path.to_string(),
        old_path,
        file_format: file_format.clone(),
        lhs_src: FileContent::Text(lhs_src.into()),
        rhs_src: FileContent::Text(rhs_src.into()),
        lhs_positions: vec![],
        rhs_positions: vec![],
        hunks: vec![],
        has_byte_changes: has_changes,
        has_syntactic_changes: has_changes,
    }
}

fn diff_file_content(
    display_path: &str,
    old_path: Option<String>,
    _lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    language_override: Option<parse::guess_language::Language>,
) -> DiffResult {
    let (lhs_src, rhs_src) = match (guess_content(lhs_bytes), guess_content(rhs_bytes)) {
        (ProbableFileKind::Binary, _) | (_, ProbableFileKind::Binary) => {
            return DiffResult {
                old_path,
                display_path: display_path.to_owned(),
                file_format: FileFormat::Binary,
                lhs_src: FileContent::Binary,
                rhs_src: FileContent::Binary,
                lhs_positions: vec![],
                rhs_positions: vec![],
                hunks: vec![],
                has_byte_changes: lhs_bytes != rhs_bytes,
                has_syntactic_changes: false,
            };
        }
        (ProbableFileKind::Text(lhs_src), ProbableFileKind::Text(rhs_src)) => (lhs_src, rhs_src),
    };

    let (guess_src, guess_path) = match rhs_path {
        FileArgument::NamedPath(path) => (&rhs_src, Path::new(path)),
        FileArgument::Stdin => (&rhs_src, Path::new(&display_path)),
        FileArgument::DevNull => (&lhs_src, Path::new(&display_path)),
    };

    let language = language_override.or_else(|| guess(guess_path, guess_src));
    let lang_config = language.map(tsp::from_language);

    if lhs_bytes == rhs_bytes {
        let file_format = match language {
            Some(language) => FileFormat::SupportedLanguage(language),
            None => FileFormat::PlainText,
        };

        // If the two files are completely identical, return early
        // rather than doing any more work.
        return DiffResult {
            old_path,
            display_path: display_path.to_string(),
            file_format,
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
            lhs_positions: vec![],
            rhs_positions: vec![],
            hunks: vec![],
            has_byte_changes: false,
            has_syntactic_changes: false,
        };
    }

    let (file_format, lhs_positions, rhs_positions) = match lang_config {
        None => {
            let file_format = FileFormat::PlainText;
            if diff_options.check_only {
                return check_only_text(&file_format, display_path, old_path, &lhs_src, &rhs_src);
            }

            let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
            let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
            (file_format, lhs_positions, rhs_positions)
        }
        Some(ts_lang) => {
            let arena = Arena::new();
            match tsp::to_tree_with_limit(diff_options, &ts_lang, &lhs_src, &rhs_src) {
                Ok((lhs_tree, rhs_tree)) => {
                    match tsp::to_syntax_with_limit(
                        &lhs_src,
                        &rhs_src,
                        &lhs_tree,
                        &rhs_tree,
                        &arena,
                        &ts_lang,
                        diff_options,
                    ) {
                        Ok((lhs, rhs)) => {
                            if diff_options.check_only {
                                let file_format = match language {
                                    Some(language) => FileFormat::SupportedLanguage(language),
                                    None => FileFormat::PlainText,
                                };

                                let has_syntactic_changes = lhs != rhs;
                                return DiffResult {
                                    old_path,
                                    display_path: display_path.to_string(),
                                    file_format,
                                    lhs_src: FileContent::Text(lhs_src),
                                    rhs_src: FileContent::Text(rhs_src),
                                    lhs_positions: vec![],
                                    rhs_positions: vec![],
                                    hunks: vec![],
                                    has_byte_changes: true,
                                    has_syntactic_changes,
                                };
                            }

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
                                    diff_options.graph_limit,
                                ) {
                                    Ok(()) => {}
                                    Err(ExceededGraphLimit {}) => {
                                        exceeded_graph_limit = true;
                                        break;
                                    }
                                }
                            }

                            if exceeded_graph_limit {
                                let lhs_positions =
                                    line_parser::change_positions(&lhs_src, &rhs_src);
                                let rhs_positions =
                                    line_parser::change_positions(&rhs_src, &lhs_src);
                                (
                                    FileFormat::TextFallback {
                                        reason: "exceeded DFT_GRAPH_LIMIT".into(),
                                    },
                                    lhs_positions,
                                    rhs_positions,
                                )
                            } else {
                                // TODO: Make this .expect() unnecessary.
                                let language = language.expect(
                                    "If we had a ts_lang, we must have guessed the language",
                                );
                                fix_all_sliders(language, &lhs, &mut change_map);
                                fix_all_sliders(language, &rhs, &mut change_map);

                                let mut lhs_positions = syntax::change_positions(&lhs, &change_map);
                                let mut rhs_positions = syntax::change_positions(&rhs, &change_map);

                                if diff_options.ignore_comments {
                                    let lhs_comments =
                                        tsp::comment_positions(&lhs_tree, &lhs_src, &ts_lang);
                                    lhs_positions.extend(lhs_comments);

                                    let rhs_comments =
                                        tsp::comment_positions(&rhs_tree, &rhs_src, &ts_lang);
                                    rhs_positions.extend(rhs_comments);
                                }

                                (
                                    FileFormat::SupportedLanguage(language),
                                    lhs_positions,
                                    rhs_positions,
                                )
                            }
                        }
                        Err(tsp::ExceededParseErrorLimit(error_count)) => {
                            let file_format = FileFormat::TextFallback {
                                reason: format!(
                                    "{} error{}, exceeded DFT_PARSE_ERROR_LIMIT",
                                    error_count,
                                    if error_count == 1 { "" } else { "s" }
                                ),
                            };

                            if diff_options.check_only {
                                return check_only_text(
                                    &file_format,
                                    display_path,
                                    old_path,
                                    &lhs_src,
                                    &rhs_src,
                                );
                            }

                            let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
                            let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
                            (file_format, lhs_positions, rhs_positions)
                        }
                    }
                }
                Err(tsp::ExceededByteLimit(num_bytes)) => {
                    let file_format = FileFormat::TextFallback {
                        reason: format!("{} exceeded DFT_BYTE_LIMIT", &format_num_bytes(num_bytes)),
                    };

                    if diff_options.check_only {
                        return check_only_text(
                            &file_format,
                            display_path,
                            old_path,
                            &lhs_src,
                            &rhs_src,
                        );
                    }

                    let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
                    let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
                    (file_format, lhs_positions, rhs_positions)
                }
            }
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
    let has_syntactic_changes = !hunks.is_empty();

    DiffResult {
        old_path,
        display_path: display_path.to_string(),
        file_format,
        lhs_src: FileContent::Text(lhs_src),
        rhs_src: FileContent::Text(rhs_src),
        lhs_positions,
        rhs_positions,
        hunks,
        has_byte_changes: true,
        has_syntactic_changes,
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
    diff_options: &DiffOptions,
    language_override: Option<parse::guess_language::Language>,
) -> impl IndexedParallelIterator<Item = DiffResult> + 'a {
    let diff_options = diff_options.clone();
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
            &rel_path.display().to_string(),
            None,
            &FileArgument::NamedPath(lhs_path),
            &FileArgument::NamedPath(rhs_path),
            &display_options,
            &diff_options,
            true,
            language_override,
        )
    })
}

fn print_diff_result(display_options: &DisplayOptions, summary: &DiffResult) {
    match (&summary.lhs_src, &summary.rhs_src) {
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            let hunks = &summary.hunks;

            if !summary.has_syntactic_changes {
                if display_options.print_unchanged {
                    println!(
                        "{}",
                        display::style::header(
                            &summary.display_path,
                            &summary.old_path,
                            1,
                            1,
                            &summary.file_format,
                            display_options
                        )
                    );
                    match summary.file_format {
                        _ if summary.lhs_src == summary.rhs_src => {
                            println!("No changes.\n");
                        }
                        FileFormat::SupportedLanguage(_) => {
                            println!("No syntactic changes.\n");
                        }
                        _ => {
                            println!("No changes.\n");
                        }
                    }
                }
                return;
            }

            if summary.has_syntactic_changes && hunks.is_empty() {
                println!(
                    "{}",
                    display::style::header(
                        &summary.display_path,
                        &summary.old_path,
                        1,
                        1,
                        &summary.file_format,
                        display_options
                    )
                );
                match summary.file_format {
                    FileFormat::SupportedLanguage(_) => {
                        println!("Has syntactic changes.\n");
                    }
                    _ => {
                        println!("Has changes.\n");
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
                        hunks,
                        &summary.display_path,
                        &summary.old_path,
                        &summary.file_format,
                    );
                }
                DisplayMode::SideBySide | DisplayMode::SideBySideShowBoth => {
                    display::side_by_side::print(
                        hunks,
                        display_options,
                        &summary.display_path,
                        &summary.old_path,
                        &summary.file_format,
                        lhs_src,
                        rhs_src,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                    );
                }
                DisplayMode::Json => unreachable!(),
            }
        }
        (FileContent::Binary, FileContent::Binary) => {
            if display_options.print_unchanged || summary.has_byte_changes {
                println!(
                    "{}",
                    display::style::header(
                        &summary.display_path,
                        &summary.old_path,
                        1,
                        1,
                        &FileFormat::Binary,
                        display_options
                    )
                );
                if summary.has_byte_changes {
                    println!("Binary contents changed.");
                } else {
                    println!("No changes.");
                }
            }
        }
        (FileContent::Text(_), FileContent::Binary)
        | (FileContent::Binary, FileContent::Text(_)) => {
            // We're diffing a binary file against a text file.
            println!(
                "{}",
                display::style::header(
                    &summary.display_path,
                    &summary.old_path,
                    1,
                    1,
                    &FileFormat::Binary,
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

    #[test]
    fn test_diff_identical_content() {
        let s = "foo";
        let res = diff_file_content(
            "foo.el",
            None,
            &FileArgument::from_path_argument(OsStr::new("foo.el")),
            &FileArgument::from_path_argument(OsStr::new("foo.el")),
            s.as_bytes(),
            s.as_bytes(),
            &DisplayOptions::default(),
            &DiffOptions::default(),
            None,
        );

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }

    #[test]
    fn test_num_bytes_small() {
        assert_eq!(&format_num_bytes(200), "200B");
    }

    #[test]
    fn test_num_bytes_kb() {
        assert_eq!(&format_num_bytes(10_000), "10KiB");
    }

    #[test]
    fn test_num_bytes_mb() {
        assert_eq!(&format_num_bytes(3_000_000), "3MiB");
    }
}
