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

mod changes;
mod constants;
mod context;
mod bfs;
mod files;
mod graph;
mod guess_language;
mod hunks;
mod inline;
mod line_parser;
mod lines;
mod myers_diff;
mod options;
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
use changes::ChangeMap;
use context::opposite_positions;
use files::{is_probably_binary, read_files_or_die, read_or_die, relative_paths_in_either};
use guess_language::guess;
use log::info;
use mimalloc::MiMalloc;

/// The global allocator used by difftastic.
///
/// Diffing allocates a large amount of memory, and `MiMalloc` performs
/// better.
#[global_allocator]
static GLOBAL: MiMalloc = MiMalloc;

use options::{DisplayMode, DisplayOptions, Mode};
use rayon::prelude::*;
use sliders::fix_all_sliders;
use std::{env, path::Path};
use summary::{DiffResult, FileContent};
use syntax::init_next_prev;
use typed_arena::Arena;

use crate::{
    bfs::mark_syntax, lines::MaxLine, syntax::init_all_info, tree_sitter_parser as tsp,
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
        Mode::Diff {
            node_limit,
            byte_limit,
            display_options,
            missing_as_empty,
            language_override,
            lhs_path,
            rhs_path,
            lhs_display_path,
            rhs_display_path,
        } => {
            let lhs_path = Path::new(&lhs_path);
            let rhs_path = Path::new(&rhs_path);

            if lhs_path == rhs_path {
                eprintln!(
                    "warning: You've specified the same {} twice.\n",
                    if lhs_path.is_dir() {
                        "directory"
                    } else {
                        "file"
                    }
                );
            }

            if lhs_path.is_dir() && rhs_path.is_dir() {
                diff_directories(
                    lhs_path,
                    rhs_path,
                    &display_options,
                    node_limit,
                    byte_limit,
                    language_override,
                )
                .for_each(|diff_result| {
                    print_diff_result(&display_options, &diff_result);
                });
            } else {
                let diff_result = diff_file(
                    &lhs_display_path,
                    &rhs_display_path,
                    lhs_path,
                    rhs_path,
                    &display_options,
                    missing_as_empty,
                    node_limit,
                    byte_limit,
                    language_override,
                );
                print_diff_result(&display_options, &diff_result);
            }
        }
    };
}

/// Print a diff between two files.
fn diff_file(
    lhs_display_path: &str,
    rhs_display_path: &str,
    lhs_path: &Path,
    rhs_path: &Path,
    display_options: &DisplayOptions,
    missing_as_empty: bool,
    node_limit: u32,
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);
    diff_file_content(
        lhs_display_path,
        rhs_display_path,
        &lhs_bytes,
        &rhs_bytes,
        display_options.tab_width,
        node_limit,
        byte_limit,
        language_override,
    )
}

fn diff_file_content(
    lhs_display_path: &str,
    rhs_display_path: &str,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    tab_width: usize,
    node_limit: u32,
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
) -> DiffResult {
    if is_probably_binary(lhs_bytes) || is_probably_binary(rhs_bytes) {
        return DiffResult {
            lhs_display_path: lhs_display_path.into(),
            rhs_display_path: rhs_display_path.into(),
            language: None,
            lhs_src: FileContent::Binary(lhs_bytes.to_vec()),
            rhs_src: FileContent::Binary(rhs_bytes.to_vec()),
            lhs_positions: vec![],
            rhs_positions: vec![],
        };
    }

    // TODO: don't replace tab characters inside string literals.
    let tab_as_spaces = " ".repeat(tab_width);
    let mut lhs_src = String::from_utf8_lossy(lhs_bytes)
        .to_string()
        .replace('\t', &tab_as_spaces);
    let mut rhs_src = String::from_utf8_lossy(rhs_bytes)
        .to_string()
        .replace('\t', &tab_as_spaces);

    // Ignore the trailing newline, if present.
    // TODO: highlight if this has changes (#144).
    // TODO: factor out a string cleaning function.
    if lhs_src.ends_with('\n') {
        lhs_src.pop();
    }
    if rhs_src.ends_with('\n') {
        rhs_src.pop();
    }

    // TODO: take a Path directly instead.
    let guess_path = Path::new(&rhs_display_path);

    // Take the larger of the two files when guessing the
    // language. This is useful when we've added or removed a whole
    // file.
    let guess_src = if lhs_src.len() > rhs_src.len() {
        &lhs_src
    } else {
        &rhs_src
    };
    let language = language_override.or_else(|| guess(guess_path, guess_src));
    let lang_config = language.map(tsp::from_language);

    if lhs_bytes == rhs_bytes {
        // If the two files are completely identical, return early
        // rather than doing any more work.
        return DiffResult {
            lhs_display_path: lhs_display_path.into(),
            rhs_display_path: rhs_display_path.into(),
            language: lang_config.map(|l| l.name.into()),
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
            lhs_positions: vec![],
            rhs_positions: vec![],
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

            let possibly_changed_max = max_num_nodes(&possibly_changed);
            if possibly_changed_max > node_limit {
                info!(
                    "Found {} nodes, exceeding the limit {}",
                    possibly_changed_max, node_limit
                );

                let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
                let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
                (
                    Some("Text (exceeded DFT_NODE_LIMIT)".into()),
                    lhs_positions,
                    rhs_positions,
                )
            } else {
                for (lhs_section_nodes, rhs_section_nodes) in possibly_changed {
                    init_next_prev(&lhs_section_nodes);
                    init_next_prev(&rhs_section_nodes);

                    mark_syntax(
                        lhs_section_nodes.get(0).copied(),
                        rhs_section_nodes.get(0).copied(),
                        &mut change_map,
                    );

                    let language = language.unwrap();
                    fix_all_sliders(language, &lhs_section_nodes, &mut change_map);
                    fix_all_sliders(language, &rhs_section_nodes, &mut change_map);
                }

                let lhs_positions = syntax::change_positions(&lhs, &change_map);
                let rhs_positions = syntax::change_positions(&rhs, &change_map);
                (Some(ts_lang.name.into()), lhs_positions, rhs_positions)
            }
        }
        None => {
            let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
            let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
            (None, lhs_positions, rhs_positions)
        }
    };

    DiffResult {
        lhs_display_path: lhs_display_path.into(),
        rhs_display_path: rhs_display_path.into(),
        language: lang_name,
        lhs_src: FileContent::Text(lhs_src),
        rhs_src: FileContent::Text(rhs_src),
        lhs_positions,
        rhs_positions,
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
    node_limit: u32,
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
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
            &rel_path.to_string_lossy(), // todo
            &lhs_path,
            &rhs_path,
            &display_options,
            true,
            node_limit,
            byte_limit,
            language_override,
        )
    })
}

fn print_diff_result(display_options: &DisplayOptions, summary: &DiffResult) {
    match (&summary.lhs_src, &summary.rhs_src) {
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            let opposite_to_lhs = opposite_positions(&summary.lhs_positions);
            let opposite_to_rhs = opposite_positions(&summary.rhs_positions);

            let hunks = matched_pos_to_hunks(&summary.lhs_positions, &summary.rhs_positions);
            let hunks = merge_adjacent(
                &hunks,
                &opposite_to_lhs,
                &opposite_to_rhs,
                lhs_src.max_line(),
                rhs_src.max_line(),
            );

            let lang_name = summary.language.clone().unwrap_or_else(|| "Text".into());
            if hunks.is_empty() {
                if display_options.print_unchanged {
                    println!(
                        "{}",
                        style::header(
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
                    inline::print(
                        lhs_src,
                        rhs_src,
                        display_options,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                        &hunks,
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        &lang_name,
                    );
                }
                DisplayMode::SideBySide | DisplayMode::SideBySideShowBoth => {
                    side_by_side::print(
                        &hunks,
                        display_options,
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        &lang_name,
                        lhs_src,
                        rhs_src,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                    );
                }
            }
        }
        (FileContent::Binary(lhs_bytes), FileContent::Binary(rhs_bytes)) => {
            let changed = lhs_bytes != rhs_bytes;
            if display_options.print_unchanged || changed {
                println!(
                    "{}",
                    style::header(
                        &summary.lhs_display_path,
                        &summary.rhs_display_path,
                        1,
                        1,
                        "binary",
                        display_options
                    )
                );
                if changed {
                    println!("Binary contents changed.");
                } else {
                    println!("No changes.");
                }
            }
        }
        (_, FileContent::Binary(_)) | (FileContent::Binary(_), _) => {
            // We're diffing a binary file against a text file.
            println!(
                "{}",
                style::header(
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

/// What is the total number of nodes in `roots`?
fn num_nodes(roots: &[&syntax::Syntax]) -> u32 {
    roots
        .iter()
        .map(|n| {
            1 + match n {
                syntax::Syntax::List {
                    num_descendants, ..
                } => *num_descendants,
                syntax::Syntax::Atom { .. } => 0,
            }
        })
        .sum()
}

fn max_num_nodes(roots_vec: &[(Vec<&syntax::Syntax>, Vec<&syntax::Syntax>)]) -> u32 {
    roots_vec
        .iter()
        .map(|(lhs, rhs)| num_nodes(lhs) + num_nodes(rhs))
        .max()
        .unwrap_or(0)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::options::{DEFAULT_BYTE_LIMIT, DEFAULT_NODE_LIMIT, DEFAULT_TAB_WIDTH};

    #[test]
    fn test_diff_identical_content() {
        let s = "foo";
        let res = diff_file_content(
            "foo.el",
            "foo.el",
            s.as_bytes(),
            s.as_bytes(),
            DEFAULT_TAB_WIDTH,
            DEFAULT_NODE_LIMIT,
            DEFAULT_BYTE_LIMIT,
            None,
        );

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }
}
