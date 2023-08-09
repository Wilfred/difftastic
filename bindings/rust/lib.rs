//! This crate provides XML and DTD grammars for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language_xml][language func] function to add this grammar to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//!     <?xml version="1.0" encoding="UTF-8"?>
//!     <note>
//!     <to>Tove</to>
//!     <from>Jani</from>
//!     <heading>Reminder</heading>
//!     <body>Don't forget me this weekend!</body>
//!     </note>
//! "#;
//! let mut parser = Parser::new();
//! parser
//!     .set_language(tree_sitter_xml::language_xml())
//!     .expect("Error loading XML grammar");
//! let parsed = parser.parse(code, None).unwrap();
//! let root = parsed.root_node();
//! assert!(!root.has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language_xml.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_dtd() -> Language;
    fn tree_sitter_xml() -> Language;
}

/// Returns the tree-sitter [Language][] for DTD.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_dtd() -> Language {
    unsafe { tree_sitter_dtd() }
}

/// Returns the tree-sitter [Language][] for XML.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_xml() -> Language {
    unsafe { tree_sitter_xml() }
}

/// The syntax highlighting query for this language.
pub const XML_HIGHLIGHT_QUERY: &str = include_str!("../../tree-sitter-xml/queries/highlights.scm");
pub const DTD_HIGHLIGHT_QUERY: &str = include_str!("../../tree-sitter-dtd/queries/highlights.scm");

/// The local-variable syntax highlighting query for this language.
// pub const LOCALS_QUERY: &str = include_str!("../../tree-sitter-xml/queries/locals.scm");

/// The symbol tagging query for this language.
// pub const TAGGING_QUERY: &str = include_str!("../../tree-sitter-xml/queries/tags.scm");

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const XML_NODE_TYPES: &str = include_str!("../../tree-sitter-xml/src/node-types.json");
pub const DTD_NODE_TYPES: &str = include_str!("../../tree-sitter-dtd/src/node-types.json");
