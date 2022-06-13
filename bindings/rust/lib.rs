//! This crate provides markdown language support for the [tree-sitter][] parsing library.
//!
//! It contains two grammars: [`language`] to parse the block structure of markdown documents and
//! [`inline_language`] to parse inline content.
//!
//! It also supplies [`MarkdownParser`] as a convenience wrapper around the two grammars.
//! [`MarkdownParser::parse`] returns a [`MarkdownTree`] instread of a [`Tree`][Tree]. This struct
//! contains a block tree and an inline tree for each node in the block tree that has inline
//! content
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [Tree]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Tree.html
//! [tree-sitter]: https://tree-sitter.github.io/

use std::collections::HashMap;

use tree_sitter::{
    InputEdit, Language, LanguageError, Node, Parser, Query, QueryCursor, QueryError, Tree,
};

extern "C" {
    fn tree_sitter_markdown() -> Language;
    fn tree_sitter_markdown_inline() -> Language;
}

/// Get the tree-sitter [Language][] for the block grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_markdown() }
}

/// Get the tree-sitter [Language][] for the inline grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn inline_language() -> Language {
    unsafe { tree_sitter_markdown_inline() }
}

/// The content of the [`node-types.json`][] file for the block grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES_BLOCK: &str = include_str!("../../tree-sitter-markdown/src/node-types.json");

/// The content of the [`node-types.json`][] file for the inline grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES_INLINE: &str =
    include_str!("../../tree-sitter-markdown-inline/src/node-types.json");

/// The matches of this query are the ranges that should be passed to the inline grammar
pub const INLINE_INJECTION_QUERY: &str = "(_ (inline)+ @inline) @parent";

/// A parser that produces [`MarkdownTree`]s.
///
/// This is a convenience wrapper around [`language`] and [`inline_language`].
pub struct MarkdownParser {
    block_parser: Parser,
    inline_parser: Parser,
    inline_injection_query: Query,
    query_cursor: QueryCursor,
}

/// The error for creating a [`MarkdownParser`]
#[derive(Debug)]
pub enum Error {
    QueryError(QueryError),
    LanguageError(LanguageError),
}

impl From<QueryError> for Error {
    fn from(err: QueryError) -> Self {
        Self::QueryError(err)
    }
}

impl From<LanguageError> for Error {
    fn from(err: LanguageError) -> Self {
        Self::LanguageError(err)
    }
}

#[derive(Debug, Clone)]
pub struct MarkdownTree {
    block_tree: Tree,
    inline_trees: Vec<Tree>,
    inline_indices: HashMap<usize, usize>,
}

impl MarkdownTree {
    /// Edit the block tree and inline trees to keep them in sync with source code that has been
    /// edited.
    ///
    /// You must describe the edit both in terms of byte offsets and in terms of
    /// row/column coordinates.
    pub fn edit(&mut self, edit: &InputEdit) {
        self.block_tree.edit(edit);
        for inline_tree in self.inline_trees.iter_mut() {
            inline_tree.edit(edit);
        }
    }

    /// Returns the block tree for the parsed document
    pub fn block_tree(&self) -> &Tree {
        &self.block_tree
    }

    /// Returns the inline tree for the given parent node.
    ///
    /// Returns `None` if the given node does not have an associated inline tree. Either because
    /// nodes with the given type do not have inline content or because the inline content is empty
    ///
    /// Node types that can have inline content are:
    /// * `paragraph`
    /// * `atx_heading`
    pub fn inline_tree(&self, parent: &Node) -> Option<&Tree> {
        let index = *self.inline_indices.get(&parent.id())?;
        Some(&self.inline_trees[index])
    }
}

impl MarkdownParser {
    /// Creates a new parser
    ///
    /// # Errors
    ///
    /// This will return an error if either the block or the inline grammar or the injection query
    /// could not be loaded.
    ///
    /// See also [tree_sitter::Parser::set_language] and [tree_sitter::Query::new]
    pub fn new() -> Result<Self, Error> {
        let block_language = language();
        let inline_language = inline_language();
        let mut block_parser = Parser::new();
        block_parser.set_language(block_language)?;
        let mut inline_parser = Parser::new();
        inline_parser.set_language(inline_language)?;
        let inline_injection_query = Query::new(block_language, INLINE_INJECTION_QUERY)?;
        let query_cursor = QueryCursor::new();
        Ok(MarkdownParser {
            block_parser,
            inline_parser,
            inline_injection_query,
            query_cursor,
        })
    }

    /// Parse a slice of UTF8 text.
    ///
    /// # Arguments:
    /// * `text` The UTF8-encoded text to parse.
    /// * `old_tree` A previous syntax tree parsed from the same document.
    ///   If the text of the document has changed since `old_tree` was
    ///   created, then you must edit `old_tree` to match the new text using
    ///   [MarkdownTree::edit].
    ///
    /// Returns a [MarkdownTree] if parsing succeeded, or `None` if:
    ///  * The timeout set with [tree_sitter::Parser::set_timeout_micros] expired
    ///  * The cancellation flag set with [tree_sitter::Parser::set_cancellation_flag] was flipped
    pub fn parse(&mut self, text: &[u8], old_tree: Option<&MarkdownTree>) -> Option<MarkdownTree> {
        let MarkdownParser {
            block_parser,
            inline_parser,
            inline_injection_query,
            query_cursor,
        } = self;
        let block_tree = block_parser.parse(text, old_tree.map(|tree| &tree.block_tree))?;
        let inline_capture_index = inline_injection_query
            .capture_index_for_name("inline")
            .unwrap();
        let parent_capture_index = inline_injection_query
            .capture_index_for_name("parent")
            .unwrap();
        let (mut inline_trees, mut inline_indices) = if let Some(old_tree) = old_tree {
            let len = old_tree.inline_trees.len();
            (Vec::with_capacity(len), HashMap::with_capacity(len))
        } else {
            (Vec::new(), HashMap::new())
        };
        for (i, query_match) in query_cursor
            .matches(inline_injection_query, block_tree.root_node(), text)
            .enumerate()
        {
            let old_tree = old_tree.and_then(|old_tree| old_tree.inline_trees.get(i));
            let ranges = query_match
                .captures
                .iter()
                .filter_map(|capture| {
                    if capture.index == inline_capture_index {
                        Some(capture.node.range())
                    } else {
                        None
                    }
                })
                .collect::<Vec<_>>();
            let parent = query_match
                .captures
                .iter()
                .find(|capture| capture.index == parent_capture_index)
                .unwrap()
                .node;
            let parent_id = parent.id();
            inline_parser.set_included_ranges(&ranges).ok()?;
            let inline_tree = inline_parser.parse(
                text,
                old_tree
            )?;
            inline_trees.push(inline_tree);
            inline_indices.insert(parent_id, i);
        }
        inline_trees.shrink_to_fit();
        inline_indices.shrink_to_fit();
        Some(MarkdownTree {
            block_tree,
            inline_trees,
            inline_indices
        })
    }
}

#[cfg(test)]
mod tests {
    use tree_sitter::Point;

    use super::*;

    #[test]
    fn can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(language())
            .expect("Error loading markdown language");
        let mut inline_parser = tree_sitter::Parser::new();
        inline_parser
            .set_language(inline_language())
            .expect("Error loading markdown language");
    }

    #[test]
    fn inline_ranges() {
        let code = "# title\n\nInline [content].\n";
        let mut parser = MarkdownParser::new().unwrap();
        let mut tree = parser.parse(code.as_bytes(), None).unwrap();
        dbg!(&tree);

        let heading = tree.block_tree().root_node().child(0).unwrap();
        assert_eq!(heading.kind(), "atx_heading");
        let paragraph = tree
            .block_tree()
            .root_node()
            .child(1)
            .unwrap();
        assert_eq!(paragraph.kind(), "paragraph");
        let inline = paragraph.child(0).unwrap();
        assert_eq!(inline.kind(), "inline");
        assert_eq!(
            tree.inline_tree(&paragraph)
                .unwrap()
                .root_node()
                .child(0)
                .unwrap()
                .kind(),
            "shortcut_link"
        );

        let code = "# Title\n\nInline [content].\n";
        tree.edit(&InputEdit {
            start_byte: 2,
            old_end_byte: 3,
            new_end_byte: 3,
            start_position: Point { row: 0, column: 2 },
            old_end_position: Point { row: 0, column: 3 },
            new_end_position: Point { row: 0, column: 3 },
        });
        let tree = parser.parse(code.as_bytes(), Some(&tree)).unwrap();

        let heading = tree.block_tree().root_node().child(0).unwrap();
        assert_eq!(heading.kind(), "atx_heading");
        let paragraph = tree
            .block_tree()
            .root_node()
            .child(1)
            .unwrap();
        assert_eq!(paragraph.kind(), "paragraph");
        let inline = paragraph.child(0).unwrap();
        assert_eq!(inline.kind(), "inline");
        dbg!(tree.inline_tree(&paragraph));
        dbg!(tree.inline_tree(&paragraph).unwrap().root_node().child(1));
        assert_eq!(
            tree.inline_tree(&paragraph)
                .unwrap()
                .root_node()
                .child(0)
                .unwrap()
                .kind(),
            "shortcut_link"
        );
    }
}
