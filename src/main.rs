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
// Good practice in general, but a necessary evil for Syntax. Its Hash
// implementation does not consider the mutable fields, so it is still
// correct.
#![allow(clippy::mutable_key_type)]
// It's sometimes more readable to explicitly create a vec than to use
// the Default trait.
#![allow(clippy::manual_unwrap_or_default)]
// I find the explicit arithmetic clearer sometimes.
#![allow(clippy::implicit_saturating_sub)]
// .to_owned() is more explicit on string references.
#![warn(clippy::str_to_string)]
// .to_string() on a String is clearer as .clone().
#![warn(clippy::string_to_string)]
// Debugging features shouldn't be in checked-in code.
#![warn(clippy::todo)]
#![warn(clippy::dbg_macro)]

mod conflicts;
mod constants;
mod diff;
mod display;
mod exit_codes;
mod files;
mod hash;
mod line_parser;
mod lines;
mod options;
mod parse;
mod summary;
mod version;
mod words;

#[macro_use]
extern crate log;

use display::style::print_warning;
use log::info;
use options::FilePermissions;
use options::USAGE;

use crate::conflicts::apply_conflict_markers;
use crate::conflicts::START_LHS_MARKER;
use crate::diff::changes::ChangeMap;
use crate::diff::dijkstra::ExceededGraphLimit;
use crate::diff::{dijkstra, unchanged};
use crate::display::context::opposite_positions;
use crate::display::hunks::{matched_pos_to_hunks, merge_adjacent};
use crate::exit_codes::EXIT_BAD_ARGUMENTS;
use crate::exit_codes::{EXIT_FOUND_CHANGES, EXIT_SUCCESS};
use crate::files::{
    guess_content, read_file_or_die, read_files_or_die, read_or_die, relative_paths_in_either,
    ProbableFileKind,
};
use crate::parse::guess_language::language_globs;
use crate::parse::guess_language::{guess, language_name, Language, LanguageOverride};
use crate::parse::syntax;

/// The global allocator used by difftastic.
///
/// Diffing allocates a large amount of memory, and both Jemalloc and
/// MiMalloc perform better than the system allocator.
///
/// Some versions of MiMalloc (specifically libmimalloc-sys greater
/// than 0.1.24) handle very large, mostly unused allocations
/// badly. This makes large line-oriented diffs very slow, as
/// discussed in #297.
///
/// MiMalloc is generally faster than Jemalloc, but older versions of
/// MiMalloc don't compile on GCC 15+, so use Jemalloc for now. See
/// #805.
///
/// For reference, Jemalloc uses 10-20% more time (although up to 33%
/// more instructions) when testing on sample files.
#[cfg(not(target_env = "msvc"))]
use tikv_jemallocator::Jemalloc;

#[cfg(not(target_env = "msvc"))]
#[global_allocator]
static GLOBAL: Jemalloc = Jemalloc;

use std::path::Path;
use std::{env, thread};

use humansize::{format_size, FormatSizeOptions, BINARY};
use owo_colors::OwoColorize;
use rayon::prelude::*;
use strum::IntoEnumIterator;
use typed_arena::Arena;

use crate::diff::sliders::fix_all_sliders;
use crate::options::{DiffOptions, DisplayMode, DisplayOptions, FileArgument, Mode};
use crate::summary::{DiffResult, FileContent, FileFormat};
use crate::syntax::init_next_prev;
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
    pretty_env_logger::try_init_timed_custom_env("DFT_LOG")
        .expect("The logger has not been previously initialized");
    reset_sigpipe();

    match options::parse_args() {
        Mode::DumpTreeSitter {
            path,
            language_overrides,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();

            let language = guess(path, &src, &language_overrides);
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
            ignore_comments,
            language_overrides,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();

            let language = guess(path, &src, &language_overrides);
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
        Mode::DumpSyntaxDot {
            path,
            ignore_comments,
            language_overrides,
        } => {
            let path = Path::new(&path);
            let bytes = read_or_die(path);
            let src = String::from_utf8_lossy(&bytes).to_string();

            let language = guess(path, &src, &language_overrides);
            match language {
                Some(lang) => {
                    let ts_lang = tsp::from_language(lang);
                    let arena = Arena::new();
                    let ast = tsp::parse(&arena, &src, &ts_lang, ignore_comments);
                    init_all_info(&ast, &[]);
                    syntax::print_as_dot(&ast);
                }
                None => {
                    eprintln!("No tree-sitter parser for file: {:?}", path);
                }
            }
        }
        Mode::ListLanguages {
            use_color,
            language_overrides,
        } => {
            for (lang_override, globs) in language_overrides {
                let mut name = match lang_override {
                    LanguageOverride::Language(lang) => language_name(lang),
                    LanguageOverride::PlainText => "Text",
                }
                .to_owned();
                if use_color {
                    name = name.bold().to_string();
                }
                println!("{} (from override)", name);
                for glob in globs {
                    print!(" {}", glob.as_str());
                }
                println!();
            }

            for language in Language::iter() {
                let mut name = language_name(language).to_owned();
                if use_color {
                    name = name.bold().to_string();
                }
                println!("{}", name);

                for glob in language_globs(language) {
                    print!(" {}", glob.as_str());
                }
                println!();
            }
        }
        Mode::DiffFromConflicts {
            display_path,
            path,
            diff_options,
            display_options,
            set_exit_code,
            language_overrides,
            binary_overrides,
        } => {
            let diff_result = diff_conflicts_file(
                &display_path,
                &path,
                &display_options,
                &diff_options,
                &language_overrides,
                &binary_overrides,
            );

            print_diff_result(&display_options, &diff_result);

            let exit_code = if set_exit_code && diff_result.has_reportable_change() {
                EXIT_FOUND_CHANGES
            } else {
                EXIT_SUCCESS
            };
            std::process::exit(exit_code);
        }
        Mode::Diff {
            diff_options,
            display_options,
            set_exit_code,
            language_overrides,
            binary_overrides,
            lhs_path,
            rhs_path,
            lhs_permissions,
            rhs_permissions,
            display_path,
            renamed,
        } => {
            if lhs_path == rhs_path {
                let is_dir = match &lhs_path {
                    FileArgument::NamedPath(path) => path.is_dir(),
                    _ => false,
                };

                print_warning(
                    &format!(
                        "You've specified the same {} twice.",
                        if is_dir { "directory" } else { "file" }
                    ),
                    &display_options,
                );
            }

            let mut encountered_changes = false;
            match (&lhs_path, &rhs_path) {
                (
                    options::FileArgument::NamedPath(lhs_path),
                    options::FileArgument::NamedPath(rhs_path),
                ) if lhs_path.is_dir() && rhs_path.is_dir() => {
                    // Diffs in parallel when iterating this iterator.
                    let diff_iter = diff_directories(
                        lhs_path,
                        rhs_path,
                        &display_options,
                        &diff_options,
                        &language_overrides,
                        &binary_overrides,
                    );

                    if matches!(display_options.display_mode, DisplayMode::Json) {
                        let results: Vec<_> = diff_iter.collect();
                        encountered_changes = results
                            .iter()
                            .any(|diff_result| diff_result.has_reportable_change());
                        display::json::print_directory(results, display_options.print_unchanged);
                    } else if display_options.sort_paths {
                        let mut result: Vec<DiffResult> = diff_iter.collect();
                        result.sort_unstable_by(|a, b| a.display_path.cmp(&b.display_path));
                        for diff_result in result {
                            print_diff_result(&display_options, &diff_result);

                            if diff_result.has_reportable_change() {
                                encountered_changes = true;
                            }
                        }
                    } else {
                        // We want to diff files in the directory in
                        // parallel, but print the results serially
                        // (to prevent display interleaving).
                        // https://github.com/rayon-rs/rayon/issues/210#issuecomment-551319338
                        thread::scope(|s| {
                            let (send, recv) = std::sync::mpsc::sync_channel(1);

                            s.spawn(move || {
                                diff_iter
                                    .try_for_each_with(send, |s, diff_result| s.send(diff_result))
                                    .expect("Receiver should be connected")
                            });

                            for diff_result in recv.into_iter() {
                                print_diff_result(&display_options, &diff_result);

                                if diff_result.has_reportable_change() {
                                    encountered_changes = true;
                                }
                            }
                        });
                    }
                }
                _ => {
                    let diff_result = diff_file(
                        &display_path,
                        renamed,
                        &lhs_path,
                        &rhs_path,
                        lhs_permissions.as_ref(),
                        rhs_permissions.as_ref(),
                        &display_options,
                        &diff_options,
                        false,
                        &language_overrides,
                        &binary_overrides,
                    );
                    if diff_result.has_reportable_change() {
                        encountered_changes = true;
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

            let exit_code = if set_exit_code && encountered_changes {
                EXIT_FOUND_CHANGES
            } else {
                EXIT_SUCCESS
            };
            std::process::exit(exit_code);
        }
    };
}

/// Print a diff between two files.
fn diff_file(
    display_path: &str,
    renamed: Option<String>,
    lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_permissions: Option<&FilePermissions>,
    rhs_permissions: Option<&FilePermissions>,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    missing_as_empty: bool,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
    binary_overrides: &[glob::Pattern],
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);

    // Override here? Separate option or part of existing --override arg?

    let (mut lhs_src, mut rhs_src) = match (
        guess_content(&lhs_bytes, lhs_path, binary_overrides),
        guess_content(&rhs_bytes, rhs_path, binary_overrides),
    ) {
        (ProbableFileKind::Binary, _) | (_, ProbableFileKind::Binary) => {
            let has_byte_changes = if lhs_bytes == rhs_bytes {
                None
            } else {
                Some((lhs_bytes.len(), rhs_bytes.len()))
            };
            return DiffResult {
                extra_info: renamed,
                display_path: display_path.to_owned(),
                file_format: FileFormat::Binary,
                lhs_src: FileContent::Binary,
                rhs_src: FileContent::Binary,
                lhs_positions: vec![],
                rhs_positions: vec![],
                hunks: vec![],
                has_byte_changes,
                has_syntactic_changes: false,
            };
        }
        (ProbableFileKind::Text(lhs_src), ProbableFileKind::Text(rhs_src)) => (lhs_src, rhs_src),
    };

    if diff_options.strip_cr {
        lhs_src.retain(|c| c != '\r');
        rhs_src.retain(|c| c != '\r');
    }

    // Ensure that lhs_src and rhs_src both have trailing
    // newlines.
    //
    // This is important when textually diffing files that don't have
    // a trailing newline, e.g. "foo\n\bar\n" versus "foo". We want to
    // consider `foo` to be unchanged in this case.
    //
    // Theoretically a tree-sitter parser could change its AST due to
    // the additional trailing newline, but it seems vanishingly
    // unlikely.
    if !lhs_src.is_empty() && !lhs_src.ends_with('\n') {
        lhs_src.push('\n');
    }
    if !rhs_src.is_empty() && !rhs_src.ends_with('\n') {
        rhs_src.push('\n');
    }

    let mut extra_info = renamed;
    if let (Some(lhs_perms), Some(rhs_perms)) = (lhs_permissions, rhs_permissions) {
        if lhs_perms != rhs_perms {
            let msg = format!(
                "File permissions changed from {} to {}.",
                lhs_perms, rhs_perms
            );

            if let Some(extra_info) = &mut extra_info {
                extra_info.push('\n');
                extra_info.push_str(&msg);
            } else {
                extra_info = Some(msg);
            }
        }
    }

    diff_file_content(
        display_path,
        extra_info,
        lhs_path,
        rhs_path,
        &lhs_src,
        &rhs_src,
        display_options,
        diff_options,
        overrides,
    )
}

fn diff_conflicts_file(
    display_path: &str,
    path: &FileArgument,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
    binary_overrides: &[glob::Pattern],
) -> DiffResult {
    let bytes = read_file_or_die(path);
    let mut src = match guess_content(&bytes, path, binary_overrides) {
        ProbableFileKind::Text(src) => src,
        ProbableFileKind::Binary => {
            eprintln!("error: Expected a text file with conflict markers, got a binary file.");
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    };

    if diff_options.strip_cr {
        src.retain(|c| c != '\r');
    }

    let conflict_files = match apply_conflict_markers(&src) {
        Ok(cf) => cf,
        Err(msg) => {
            eprintln!("error: {}", msg);
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    };

    if conflict_files.num_conflicts == 0 {
        eprintln!(
            "error: Difftastic requires two paths, or a single file with conflict markers {}.\n",
            START_LHS_MARKER,
        );

        eprintln!("USAGE:\n\n    {}\n", USAGE);
        eprintln!("For more information try --help");
        std::process::exit(EXIT_BAD_ARGUMENTS);
    }

    let lhs_name = match conflict_files.lhs_name {
        Some(name) => format!("'{}'", name),
        None => "the left file".to_owned(),
    };
    let rhs_name = match conflict_files.rhs_name {
        Some(name) => format!("'{}'", name),
        None => "the right file".to_owned(),
    };

    let extra_info = format!(
        "Showing the result of replacing every conflict in {} with {}.",
        lhs_name, rhs_name
    );

    diff_file_content(
        display_path,
        Some(extra_info),
        path,
        path,
        &conflict_files.lhs_content,
        &conflict_files.rhs_content,
        display_options,
        diff_options,
        overrides,
    )
}

fn check_only_text(
    file_format: &FileFormat,
    display_path: &str,
    extra_info: Option<String>,
    lhs_src: &str,
    rhs_src: &str,
) -> DiffResult {
    let has_byte_changes = if lhs_src == rhs_src {
        None
    } else {
        Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
    };

    DiffResult {
        display_path: display_path.to_owned(),
        extra_info,
        file_format: file_format.clone(),
        lhs_src: FileContent::Text(lhs_src.into()),
        rhs_src: FileContent::Text(rhs_src.into()),
        lhs_positions: vec![],
        rhs_positions: vec![],
        hunks: vec![],
        has_byte_changes,
        has_syntactic_changes: lhs_src != rhs_src,
    }
}

fn diff_file_content(
    display_path: &str,
    extra_info: Option<String>,
    _lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
) -> DiffResult {
    let guess_src = match rhs_path {
        FileArgument::DevNull => &lhs_src,
        _ => &rhs_src,
    };

    let language = guess(Path::new(display_path), guess_src, overrides);
    let lang_config = language.map(|lang| (lang, tsp::from_language(lang)));

    if lhs_src == rhs_src {
        let file_format = match language {
            Some(language) => FileFormat::SupportedLanguage(language),
            None => FileFormat::PlainText,
        };

        // If the two files are byte-for-byte identical, return early
        // rather than doing any more work.
        return DiffResult {
            extra_info,
            display_path: display_path.to_owned(),
            file_format,
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
            lhs_positions: vec![],
            rhs_positions: vec![],
            hunks: vec![],
            has_byte_changes: None,
            has_syntactic_changes: false,
        };
    }

    let (file_format, lhs_positions, rhs_positions) = match lang_config {
        None => {
            let file_format = FileFormat::PlainText;
            if diff_options.check_only {
                return check_only_text(&file_format, display_path, extra_info, lhs_src, rhs_src);
            }

            let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
            let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
            (file_format, lhs_positions, rhs_positions)
        }
        Some((language, lang_config)) => {
            let arena = Arena::new();
            match tsp::to_tree_with_limit(diff_options, &lang_config, lhs_src, rhs_src) {
                Ok((lhs_tree, rhs_tree)) => {
                    match tsp::to_syntax_with_limit(
                        lhs_src,
                        rhs_src,
                        &lhs_tree,
                        &rhs_tree,
                        &arena,
                        &lang_config,
                        diff_options,
                    ) {
                        Ok((lhs, rhs)) => {
                            if diff_options.check_only {
                                let has_syntactic_changes = lhs != rhs;

                                let has_byte_changes = if lhs_src == rhs_src {
                                    None
                                } else {
                                    Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
                                };

                                return DiffResult {
                                    extra_info,
                                    display_path: display_path.to_owned(),
                                    file_format: FileFormat::SupportedLanguage(language),
                                    lhs_src: FileContent::Text(lhs_src.to_owned()),
                                    rhs_src: FileContent::Text(rhs_src.to_owned()),
                                    lhs_positions: vec![],
                                    rhs_positions: vec![],
                                    hunks: vec![],
                                    has_byte_changes,
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
                                    lhs_section_nodes.first().copied(),
                                    rhs_section_nodes.first().copied(),
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
                                let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                                let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
                                (
                                    FileFormat::TextFallback {
                                        reason: "exceeded DFT_GRAPH_LIMIT".into(),
                                    },
                                    lhs_positions,
                                    rhs_positions,
                                )
                            } else {
                                fix_all_sliders(language, &lhs, &mut change_map);
                                fix_all_sliders(language, &rhs, &mut change_map);

                                let mut lhs_positions = syntax::change_positions(&lhs, &change_map);
                                let mut rhs_positions = syntax::change_positions(&rhs, &change_map);

                                if diff_options.ignore_comments {
                                    let lhs_comments =
                                        tsp::comment_positions(&lhs_tree, lhs_src, &lang_config);
                                    lhs_positions.extend(lhs_comments);

                                    let rhs_comments =
                                        tsp::comment_positions(&rhs_tree, rhs_src, &lang_config);
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
                                    "{} {} parse error{}, exceeded DFT_PARSE_ERROR_LIMIT",
                                    error_count,
                                    language_name(language),
                                    if error_count == 1 { "" } else { "s" }
                                ),
                            };

                            if diff_options.check_only {
                                return check_only_text(
                                    &file_format,
                                    display_path,
                                    extra_info,
                                    lhs_src,
                                    rhs_src,
                                );
                            }

                            let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                            let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
                            (file_format, lhs_positions, rhs_positions)
                        }
                    }
                }
                Err(tsp::ExceededByteLimit(num_bytes)) => {
                    let format_options = FormatSizeOptions::from(BINARY).decimal_places(1);
                    let file_format = FileFormat::TextFallback {
                        reason: format!(
                            "{} exceeded DFT_BYTE_LIMIT",
                            &format_size(num_bytes, format_options)
                        ),
                    };

                    if diff_options.check_only {
                        return check_only_text(
                            &file_format,
                            display_path,
                            extra_info,
                            lhs_src,
                            rhs_src,
                        );
                    }

                    let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                    let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
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

    let has_byte_changes = if lhs_src == rhs_src {
        None
    } else {
        Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
    };

    DiffResult {
        extra_info,
        display_path: display_path.to_owned(),
        file_format,
        lhs_src: FileContent::Text(lhs_src.to_owned()),
        rhs_src: FileContent::Text(rhs_src.to_owned()),
        lhs_positions,
        rhs_positions,
        hunks,
        has_byte_changes,
        has_syntactic_changes,
    }
}

/// Given two directories that contain the files, compare them
/// pairwise. Returns an iterator, so we can print results
/// incrementally.
///
/// When more than one file is modified, the hg extdiff extension passes directory
/// paths with all the modified files.
fn diff_directories<'a>(
    lhs_dir: &'a Path,
    rhs_dir: &'a Path,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
    binary_overrides: &[glob::Pattern],
) -> impl ParallelIterator<Item = DiffResult> + 'a {
    let diff_options = diff_options.clone();
    let display_options = display_options.clone();
    let overrides: Vec<_> = overrides.into();
    let binary_overrides: Vec<_> = binary_overrides.into();

    // We greedily list all files in the directory, and then diff them
    // in parallel. This is assuming that diffing is slower than
    // enumerating files, so it benefits more from parallelism.
    let paths = relative_paths_in_either(lhs_dir, rhs_dir);

    paths.into_par_iter().map(move |rel_path| {
        info!("Relative path is {:?} inside {:?}", rel_path, lhs_dir);

        let lhs_path = FileArgument::NamedPath(Path::new(lhs_dir).join(&rel_path));
        let rhs_path = FileArgument::NamedPath(Path::new(rhs_dir).join(&rel_path));

        diff_file(
            &rel_path.display().to_string(),
            None,
            &lhs_path,
            &rhs_path,
            lhs_path.permissions().as_ref(),
            rhs_path.permissions().as_ref(),
            &display_options,
            &diff_options,
            true,
            &overrides,
            &binary_overrides,
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
                            summary.extra_info.as_ref(),
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
                        summary.extra_info.as_ref(),
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
                        &summary.extra_info,
                        &summary.file_format,
                    );
                }
                DisplayMode::SideBySide | DisplayMode::SideBySideShowBoth => {
                    display::side_by_side::print(
                        hunks,
                        display_options,
                        &summary.display_path,
                        summary.extra_info.as_ref(),
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
            if display_options.print_unchanged || summary.has_byte_changes.is_some() {
                println!(
                    "{}",
                    display::style::header(
                        &summary.display_path,
                        summary.extra_info.as_ref(),
                        1,
                        1,
                        &FileFormat::Binary,
                        display_options
                    )
                );

                match summary.has_byte_changes {
                    Some((lhs_len, rhs_len)) => {
                        let format_options = FormatSizeOptions::from(BINARY).decimal_places(1);
                        println!(
                            "Binary contents changed (old: {}, new: {}).\n",
                            &format_size(lhs_len, format_options),
                            &format_size(rhs_len, format_options),
                        )
                    }
                    None => println!("No changes.\n"),
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
                    summary.extra_info.as_ref(),
                    1,
                    1,
                    &FileFormat::Binary,
                    display_options
                )
            );
            println!("Binary contents changed.\n");
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
            s,
            s,
            &DisplayOptions::default(),
            &DiffOptions::default(),
            &[],
        );

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }
}
