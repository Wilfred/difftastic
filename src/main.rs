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

mod options;

#[macro_use]
extern crate log;

use log::info;

use difftastic::{
    diff_file_content,
    files::{read_files_or_die, read_or_die},
    guess_language,
    guess_language::guess,
    option_types::Mode,
    print_diff_result,
    summary::DiffResult,
    syntax::init_all_info,
    tree_sitter_parser as tsp,
};
use options::should_use_color;
use std::path::Path;
use typed_arena::Arena;
use walkdir::WalkDir;

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
            print_unchanged,
            missing_as_empty,
            display_mode,
            background_color,
            color_output,
            display_width,
            display_path,
            language_override,
            lhs_path,
            rhs_path,
            ..
        } => {
            let use_color = should_use_color(color_output);

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
                for diff_result in diff_directories(
                    lhs_path,
                    rhs_path,
                    missing_as_empty,
                    node_limit,
                    byte_limit,
                    language_override,
                ) {
                    print_diff_result(
                        display_width,
                        use_color,
                        display_mode,
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
                    byte_limit,
                    language_override,
                );
                print_diff_result(
                    display_width,
                    use_color,
                    display_mode,
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
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
) -> DiffResult {
    let (lhs_bytes, rhs_bytes) = read_files_or_die(lhs_path, rhs_path, missing_as_empty);
    diff_file_content(
        display_path,
        &lhs_bytes,
        &rhs_bytes,
        node_limit,
        byte_limit,
        language_override,
    )
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
    missing_as_empty: bool,
    node_limit: u32,
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
) -> impl Iterator<Item = DiffResult> + 'a {
    WalkDir::new(lhs_dir)
        .into_iter()
        .filter_map(Result::ok)
        .map(|entry| entry.into_path())
        .filter(|lhs_path| !lhs_path.is_dir())
        .map(move |lhs_path| {
            info!("LHS path is {:?} inside {:?}", lhs_path, lhs_dir);

            let rel_path = lhs_path.strip_prefix(lhs_dir).unwrap();
            let rhs_path = Path::new(rhs_dir).join(rel_path);

            diff_file(
                &rel_path.to_string_lossy(),
                &lhs_path,
                &rhs_path,
                missing_as_empty,
                node_limit,
                byte_limit,
                language_override,
            )
        })
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::options::{DEFAULT_BYTE_LIMIT, DEFAULT_NODE_LIMIT};

    #[test]
    fn test_diff_identical_content() {
        let s = "foo";
        let res = diff_file_content(
            "foo.el",
            s.as_bytes(),
            s.as_bytes(),
            DEFAULT_NODE_LIMIT,
            DEFAULT_BYTE_LIMIT,
            None,
        );

        assert_eq!(res.lhs_positions, vec![]);
        assert_eq!(res.rhs_positions, vec![]);
    }
}
