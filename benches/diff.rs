//! Benchmarks for parsing and diffing files, the two phases that
//! dominate difftastic's runtime.
//!
//! These are run on every pull request by CodSpeed, see
//! .github/workflows/codspeed.yml.
//!
//! Difftastic is a binary crate, so its internals aren't visible to a
//! separate benchmark crate. Include the source files directly
//! instead, so we can benchmark internal functions.

// Benchmarks only use a small part of difftastic, but the whole
// source tree is compiled here.
#![allow(dead_code)]
#![allow(unused_imports)]
// These are also allowed in main.rs, see the comments there.
#![allow(renamed_and_removed_lints)]
#![allow(clippy::type_complexity)]
#![allow(clippy::comparison_to_empty)]
#![allow(clippy::too_many_arguments)]
#![allow(clippy::if_same_then_else)]
#![allow(clippy::mutable_key_type)]
#![allow(unknown_lints)]
#![allow(clippy::manual_unwrap_or_default)]
#![allow(clippy::implicit_saturating_sub)]
#![allow(clippy::needless_as_bytes)]

#[macro_use]
extern crate log;

#[path = "../src/conflicts.rs"]
mod conflicts;
#[path = "../src/constants.rs"]
mod constants;
#[path = "../src/diff/mod.rs"]
mod diff;
#[path = "../src/display/mod.rs"]
mod display;
#[path = "../src/exit_codes.rs"]
mod exit_codes;
#[path = "../src/files.rs"]
mod files;
#[path = "../src/gitattributes.rs"]
mod gitattributes;
#[path = "../src/hash.rs"]
mod hash;
#[path = "../src/line_parser.rs"]
mod line_parser;
#[path = "../src/lines.rs"]
mod lines;
#[path = "../src/options.rs"]
mod options;
#[path = "../src/parse/mod.rs"]
mod parse;
#[path = "../src/summary.rs"]
mod summary;
#[path = "../src/version.rs"]
mod version;
#[path = "../src/words.rs"]
mod words;

use std::path::Path;

// Some modules use the path `crate::syntax`, which main.rs makes
// available with this import.
use crate::parse::syntax;

use divan::Bencher;
use typed_arena::Arena;

use crate::diff::changes::ChangeMap;
use crate::diff::shortest_path::mark_syntax;
use crate::diff::sliders::fix_all_sliders;
use crate::diff::unchanged::mark_unchanged;
use crate::options::DiffOptions;
use crate::parse::guess_language::{guess, Language};
use crate::parse::syntax::{init_next_prev, Syntax};
use crate::parse::tree_sitter_parser::{self as tsp, TreeSitterConfig};

fn main() {
    divan::main();
}

/// The file pairs benchmarked, covering a range of languages and file
/// sizes. `"slow.rs"` means the files `sample_files/slow_1.rs` and
/// `sample_files/slow_2.rs`.
const CASES: &[&str] = &["b2_math.h", "javascript.js", "slow.rs", "typing.ml"];

struct Case {
    /// The path of the right hand side file, used for guessing the
    /// language.
    path: String,
    lhs_src: String,
    rhs_src: String,
    language: Language,
    config: &'static TreeSitterConfig,
}

impl Case {
    fn read(name: &str) -> Self {
        let (stem, extension) = name
            .rsplit_once('.')
            .unwrap_or_else(|| panic!("Benchmark case {} should have an extension", name));

        let lhs_path = format!("sample_files/{}_1.{}", stem, extension);
        let rhs_path = format!("sample_files/{}_2.{}", stem, extension);

        let lhs_src = std::fs::read_to_string(&lhs_path)
            .unwrap_or_else(|e| panic!("Could not read {}: {}", lhs_path, e));
        let rhs_src = std::fs::read_to_string(&rhs_path)
            .unwrap_or_else(|e| panic!("Could not read {}: {}", rhs_path, e));

        let language = guess(Path::new(&rhs_path), &rhs_src, &[])
            .unwrap_or_else(|| panic!("Could not guess the language of {}", rhs_path));

        Self {
            path: rhs_path,
            lhs_src,
            rhs_src,
            language,
            config: tsp::from_language(language),
        }
    }

    /// Parse both files into difftastic's syntax tree representation.
    fn parse<'a>(
        &self,
        arena: &'a Arena<Syntax<'a>>,
        diff_options: &DiffOptions,
    ) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>) {
        let (lhs_tree, rhs_tree) = match tsp::to_tree_with_limit(
            diff_options,
            self.config,
            &self.lhs_src,
            &self.rhs_src,
        ) {
            Ok(trees) => trees,
            Err(_) => panic!("Exceeded the byte limit on {}", self.path),
        };

        match tsp::to_syntax_with_limit(
            &self.lhs_src,
            &self.rhs_src,
            &lhs_tree,
            &rhs_tree,
            arena,
            self.config,
            diff_options,
        ) {
            Ok(syntax) => syntax,
            Err(_) => panic!("Exceeded the parse error limit on {}", self.path),
        }
    }
}

/// Benchmark parsing with tree-sitter, and converting the tree-sitter
/// tree to difftastic's own syntax tree.
#[divan::bench(args = CASES)]
fn parse(bencher: Bencher, name: &str) {
    let case = Case::read(name);
    let diff_options = DiffOptions::default();

    bencher.bench_local(|| {
        let arena = Arena::new();
        let (lhs, rhs) = case.parse(&arena, &diff_options);
        divan::black_box((lhs.len(), rhs.len()));
    });
}

/// Benchmark diffing two already parsed files: finding unchanged
/// nodes, running the graph search on the sections that changed, then
/// correcting sliders.
#[divan::bench(args = CASES)]
fn diff(bencher: Bencher, name: &str) {
    let case = Case::read(name);
    let diff_options = DiffOptions::default();

    let arena = Arena::new();
    let (lhs, rhs) = case.parse(&arena, &diff_options);

    bencher.bench_local(|| {
        let mut change_map = ChangeMap::default();

        for (lhs_section_nodes, rhs_section_nodes) in mark_unchanged(&lhs, &rhs, &mut change_map) {
            init_next_prev(&lhs_section_nodes);
            init_next_prev(&rhs_section_nodes);

            if mark_syntax(
                lhs_section_nodes.first().copied(),
                rhs_section_nodes.first().copied(),
                &mut change_map,
                diff_options.graph_limit,
            )
            .is_err()
            {
                panic!("Exceeded the graph limit on {}", case.path);
            }
        }

        fix_all_sliders(case.language, &lhs, &mut change_map);
        fix_all_sliders(case.language, &rhs, &mut change_map);
    });
}
