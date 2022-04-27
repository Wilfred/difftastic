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

mod context;
mod dijkstra;
pub mod files;
mod graph;
pub mod guess_language;
mod hunks;
mod inline;
mod line_parser;
mod lines;
mod myers_diff;
pub mod option_types;
mod positions;
mod side_by_side;
mod sliders;
pub mod style;
pub mod summary;
pub mod syntax;
pub mod tree_sitter_parser;
mod unchanged;

#[macro_use]
extern crate log;

use crate::hunks::{matched_pos_to_hunks, merge_adjacent};
use context::opposite_positions;
use guess_language::guess;
use log::info;
use mimalloc::MiMalloc;
use option_types::DisplayMode;

/// The global allocator used by difftastic.
///
/// Diffing allocates a large amount of memory, and `MiMalloc` performs
/// better.
#[global_allocator]
static GLOBAL: MiMalloc = MiMalloc;

use sliders::fix_all_sliders;
use std::{env, path::Path};
use style::BackgroundColor;
pub use summary::{DiffResult, FileContent};
use syntax::{init_next_prev, Syntax};
use typed_arena::Arena;

use crate::{
    dijkstra::mark_syntax, files::is_probably_binary, lines::MaxLine, syntax::init_all_info,
    tree_sitter_parser as tsp,
};

extern crate pretty_env_logger;

pub fn diff_file_content(
    display_path: &str,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    node_limit: u32,
    byte_limit: usize,
    language_override: Option<guess_language::Language>,
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
    let mut lhs_src = String::from_utf8_lossy(lhs_bytes)
        .to_string()
        .replace('\t', "    ");
    let mut rhs_src = String::from_utf8_lossy(rhs_bytes)
        .to_string()
        .replace('\t', "    ");

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
    let path = Path::new(&display_path);

    // Take the larger of the two files when guessing the
    // language. This is useful when we've added or removed a whole
    // file.
    let guess_src = if lhs_src.len() > rhs_src.len() {
        &lhs_src
    } else {
        &rhs_src
    };
    let ts_lang = language_override
        .or_else(|| guess(path, guess_src))
        .map(tsp::from_language);

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

            let possibly_changed = if env::var("DFT_DBG_KEEP_UNCHANGED").is_ok() {
                vec![(lhs.clone(), rhs.clone())]
            } else {
                unchanged::mark_unchanged(&lhs, &rhs)
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
                    );

                    fix_all_sliders(&lhs_section_nodes);
                    fix_all_sliders(&rhs_section_nodes);
                }

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

// TODO: factor out a DiffOptions struct.
pub fn print_diff_result(
    display_width: usize,
    use_color: bool,
    display_mode: DisplayMode,
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
                        style::header(&summary.path, 1, 1, &lang_name, use_color, background)
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

            match display_mode {
                DisplayMode::Inline => {
                    inline::print(
                        lhs_src,
                        rhs_src,
                        &summary.lhs_positions,
                        &summary.rhs_positions,
                        &hunks,
                        &summary.path,
                        &lang_name,
                        use_color,
                        background,
                    );
                }
                DisplayMode::SideBySide | DisplayMode::SideBySideShowBoth => {
                    side_by_side::print(
                        &hunks,
                        display_width,
                        use_color,
                        display_mode,
                        background,
                        &summary.path,
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
            if print_unchanged || changed {
                println!(
                    "{}",
                    style::header(&summary.path, 1, 1, "binary", use_color, background)
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
                style::header(&summary.path, 1, 1, "binary", use_color, background)
            );
            println!("Binary contents changed.");
        }
    }
}

/// What is the total number of nodes in `roots`?
fn num_nodes(roots: &[&Syntax]) -> u32 {
    roots
        .iter()
        .map(|n| {
            1 + match n {
                Syntax::List {
                    num_descendants, ..
                } => *num_descendants,
                Syntax::Atom { .. } => 0,
            }
        })
        .sum()
}

fn max_num_nodes(roots_vec: &[(Vec<&Syntax>, Vec<&Syntax>)]) -> u32 {
    roots_vec
        .iter()
        .map(|(lhs, rhs)| num_nodes(lhs) + num_nodes(rhs))
        .max()
        .unwrap_or(0)
}
