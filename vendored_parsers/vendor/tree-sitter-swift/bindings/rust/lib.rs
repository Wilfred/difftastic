//! This crate provides swift language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(tree_sitter_swift::language()).expect("Error loading swift grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_swift() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_swift() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

// Uncomment these to include any queries that this grammar contains

pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");
pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");
pub const TAGS_QUERY: &'static str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    use anyhow::{anyhow, Result};

    #[test]
    fn test_can_load_grammar() -> Result<()> {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(super::language())?;

        Ok(())
    }

    #[test]
    fn test_can_parse_basic_file() -> Result<()> {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(super::language())?;

        let tree = parser.parse("_ = \"Hello!\"\n", None)
            .ok_or_else(|| anyhow!("Unable to parse!"))?;

        assert_eq!(
            "(source_file (assignment target: (directly_assignable_expression (simple_identifier)) result: (line_string_literal text: (line_str_text))))",
            tree.root_node().to_sexp(),
        );

        Ok(())
    }
}
