// -*- coding: utf-8 -*-
// ------------------------------------------------------------------------------------------------
// Copyright © 2020, tree-sitter-python authors.
// See the LICENSE file in this repo for license details.
// ------------------------------------------------------------------------------------------------

//! This crate provides a Python grammar for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [parser][parser func] function to create a tree-sitter [Parser][]
//! that is configured to use this grammar, and then use the parser to parse some code:
//!
//! ```
//! # use indoc::indoc;
//! let code = indoc! {"
//!     def double(x):
//!         return x * 2
//! "};
//! let mut parser = tree_sitter_python::parser();
//! let parsed = parser.parse(code, None);
//! # assert!(parsed.is_some());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [parser func]: fn.parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;
use tree_sitter::Parser;

extern "C" {
    fn tree_sitter_python() -> Language;
}

/// Returns a new tree-sitter [Parser][] preconfigured to parse Python code.
///
/// [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
pub fn parser() -> Parser {
    let mut parser = Parser::new();
    parser
        .set_language(language())
        .expect("Error installing Python grammar");
    parser
}

/// Returns the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_python() }
}

/// The source of the Python tree-sitter grammar description.
pub const GRAMMAR: &'static str = include_str!("../../grammar.js");

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

#[cfg(test)]
mod tests {
    #[test]
    fn can_load_grammar() {
        let _parser = super::parser();
    }
}
