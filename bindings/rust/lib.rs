//! This crate provides OCaml and OCaml Interface grammars for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language_ocaml][language func] function to add this grammar to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//!   module M = struct
//!     let x = x
//!   end
//! "#;
//! let mut parser = Parser::new();
//! parser
//!     .set_language(tree_sitter_ocaml::language_ocaml())
//!     .expect("Error loading ocaml grammar");
//! let parsed = parser.parse(code, None).unwrap();
//! let root = parsed.root_node();
//! assert!(!root.has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language_ocaml.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_ocaml() -> Language;
    fn tree_sitter_ocaml_interface() -> Language;
}

/// Returns the tree-sitter [Language][] for this OCaml.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_ocaml() -> Language {
    unsafe { tree_sitter_ocaml() }
}

/// Returns the tree-sitter [Language][] for TSX.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_ocaml_interface() -> Language {
    unsafe { tree_sitter_ocaml_interface() }
}

/// The syntax highlighting query for this language.
pub const HIGHLIGHT_QUERY: &str = include_str!("../../queries/highlights.scm");

/// The local-variable syntax highlighting query for this language.
pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");

/// The symbol tagging query for this language.
pub const TAGGING_QUERY: &str = include_str!("../../queries/tags.scm");

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const OCAML_NODE_TYPES: &str = include_str!("../../ocaml/src/node-types.json");
pub const INTERFACE_NODE_TYPES: &str = include_str!("../../interface/src/node-types.json");
