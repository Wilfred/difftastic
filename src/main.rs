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

use options::{configure_color, Mode};
use sliders::fix_all_sliders;
use std::{env, path::Path};
use style::BackgroundColor;
use summary::{DiffResult, FileContent};
use syntax::init_next_prev;
use typed_arena::Arena;
use unchanged::skip_unchanged;
use walkdir::WalkDir;

use crate::{
    dijkstra::mark_syntax,
    files::{is_probably_binary, read_or_die},
    lines::MaxLine,
    syntax::init_all_info,
    tree_sitter_parser as tsp,
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
    pretty_env_logger::init();
    reset_sigpipe();

    match options::parse_args() {
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
            node_limit,
            print_unchanged,
            missing_as_empty,
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
                for diff_result in
                    diff_directories(lhs_path, rhs_path, missing_as_empty, node_limit)
                {
                    print_diff_result(
                        display_width,
                        background_color,
                        print_unchanged,
                        &diff_result,
                    );
                }
            } else {
                let diff_result = diff_file(
                    &display_path,
                    lhs_path,
                    rhs_path,
                    missing_as_empty,
                    node_limit,
                );
                print_diff_result(
                    display_width,
                    background_color,
                    print_unchanged,
                    &diff_result,
                );
            }
        }
    };
}

/// Print a diff between two files.
fn diff_file(
    display_path: &str,
    lhs_path: &Path,
    rhs_path: &Path,
    missing_as_empty: bool,
    node_limit: u32,
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);
    diff_file_content(display_path, &lhs_bytes, &rhs_bytes, node_limit)
}

fn diff_file_content(
    display_path: &str,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    node_limit: u32,
) -> DiffResult {
    if is_probably_binary(lhs_bytes) || is_probably_binary(rhs_bytes) {
        return DiffResult {
            path: display_path.into(),
            language: None,
            lhs_src: FileContent::Binary(lhs_bytes.to_vec()),
            rhs_src: FileContent::Binary(rhs_bytes.to_vec()),
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

    // Take the larger of the two files when guessing the
    // language. This is useful when we've added or removed a whole
    // file.
    let guess_src = if lhs_src.len() > rhs_src.len() {
        &lhs_src
    } else {
        &rhs_src
    };
    let ts_lang = guess(path, guess_src).map(tsp::from_language);

    if lhs_bytes == rhs_bytes {
        // If the two files are completely identical, return early
        // rather than doing any more work.
        return DiffResult {
            path: display_path.into(),
            language: ts_lang.map(|l| l.name.into()),
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
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

            let (possibly_changed_lhs, possibly_changed_rhs) = skip_unchanged(&lhs, &rhs);

            let possibly_changed_num =
                num_nodes(&possibly_changed_lhs) + num_nodes(&possibly_changed_rhs);
            if possibly_changed_num > node_limit {
                let lhs_positions = line_parser::change_positions(&lhs_src, &rhs_src);
                let rhs_positions = line_parser::change_positions(&rhs_src, &lhs_src);
                (
                    Some("Text (exceeded DFT_NODE_LIMIT)".into()),
                    lhs_positions,
                    rhs_positions,
                )
            } else {
                init_next_prev(&possibly_changed_lhs);
                init_next_prev(&possibly_changed_rhs);

                mark_syntax(
                    possibly_changed_lhs.get(0).copied(),
                    possibly_changed_rhs.get(0).copied(),
                );

                fix_all_sliders(&possibly_changed_lhs);
                fix_all_sliders(&possibly_changed_rhs);

                let lhs_positions = syntax::change_positions(&lhs);
                let rhs_positions = syntax::change_positions(&rhs);
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
        path: display_path.into(),
        language: lang_name,
        lhs_src: FileContent::Text(lhs_src),
        rhs_src: FileContent::Text(rhs_src),
        lhs_positions,
        rhs_positions,
    }
}

/// Given two directories that contain the files, compare them
/// pairwise.
///
/// When more than one file is modified, the hg extdiff extension passes directory
/// paths with the all the modified files.
fn diff_directories(
    lhs_dir: &Path,
    rhs_dir: &Path,
    missing_as_empty: bool,
    node_limit: u32,
) -> Vec<DiffResult> {
    let mut res = vec![];
    for entry in WalkDir::new(lhs_dir).into_iter().filter_map(Result::ok) {
        let lhs_path = entry.path();
        if lhs_path.is_dir() {
            continue;
        }

        info!("LHS path is {:?} inside {:?}", lhs_path, lhs_dir);

        let rel_path = lhs_path.strip_prefix(lhs_dir).unwrap();
        let rhs_path = Path::new(rhs_dir).join(rel_path);

        res.push(diff_file(
            &rel_path.to_string_lossy(),
            lhs_path,
            &rhs_path,
            missing_as_empty,
            node_limit,
        ));
    }
    res
}

fn print_diff_result(
    display_width: usize,
    background: BackgroundColor,
    print_unchanged: bool,
    summary: &DiffResult,
) {
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
                if print_unchanged {
                    println!(
                        "{}",
                        style::header(&summary.path, 1, 1, &lang_name, background)
                    );
                    if lang_name == "Text" {
                        println!("No changes.\n");
                    } else {
                        println!("No syntactic changes.\n");
                    }
                }
                return;
            }

            if env::var("INLINE").is_ok() {
                println!(
                    "{}",
                    inline::display(
                        lhs_src,
                        rhs_src,
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
                        lhs_src,
                        rhs_src,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                    )
                );
            }
        }
        (FileContent::Binary(lhs_bytes), FileContent::Binary(rhs_bytes)) => {
            let changed = lhs_bytes != rhs_bytes;
            if print_unchanged || changed {
                println!(
                    "{}",
                    style::header(&summary.path, 1, 1, "binary", background)
                );
                if changed {
                    println!("Binary contents changed.")
                } else {
                    println!("No changes.")
                }
            }
        }
        (_, FileContent::Binary(_)) | (FileContent::Binary(_), _) => {
            // We're diffing a binary file against a text file.
            println!(
                "{}",
                style::header(&summary.path, 1, 1, "binary", background)
            );
            println!("Binary contents changed.")
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

#[cfg(test)]
mod tests {
    use super::*;
    use crate::options::DEFAULT_NODE_LIMIT;

    #[test]
    fn test_diff_identical_content() {
        let s = "foo";
        let res = diff_file_content("foo.el", s.as_bytes(), s.as_bytes(), DEFAULT_NODE_LIMIT);

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }
}
