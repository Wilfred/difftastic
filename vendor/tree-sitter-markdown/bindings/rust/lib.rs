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

use tree_sitter::{InputEdit, Language, Node, Parser, Query, QueryCursor, Range, Tree};

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

pub const HIGHLIGHT_QUERY_BLOCK: &str =
    include_str!("../../tree-sitter-markdown/queries/highlights.scm");
pub const INJECTION_QUERY_BLOCK: &str =
    include_str!("../../tree-sitter-markdown/queries/injections.scm");
pub const HIGHLIGHT_QUERY_INLINE: &str =
    include_str!("../../tree-sitter-markdown-inline/queries/highlights.scm");
pub const INJECTION_QUERY_INLINE: &str =
    include_str!("../../tree-sitter-markdown-inline/queries/injections.scm");

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
pub const INLINE_INJECTION_QUERY: &str = "(inline) @inline";

/// A parser that produces [`MarkdownTree`]s.
///
/// This is a convenience wrapper around [`language`] and [`inline_language`].
pub struct MarkdownParser {
    parser: Parser,
    block_language: Language,
    inline_language: Language,
    inline_injection_query: Query,
    query_cursor: QueryCursor,
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

    /// Returns the inline tree for the given inline node.
    ///
    /// Returns `None` if the given node does not have an associated inline tree. Either because
    /// the nodes type is not `inline` or because the inline content is empty.
    pub fn inline_tree(&self, parent: &Node) -> Option<&Tree> {
        let index = *self.inline_indices.get(&parent.id())?;
        Some(&self.inline_trees[index])
    }
}

impl Default for MarkdownParser {
    fn default() -> Self {
        let block_language = language();
        let inline_language = inline_language();
        let parser = Parser::new();
        let inline_injection_query = Query::new(block_language, INLINE_INJECTION_QUERY)
            .expect("Could not load injection query");
        let query_cursor = QueryCursor::new();
        MarkdownParser {
            parser,
            block_language,
            inline_language,
            inline_injection_query,
            query_cursor,
        }
    }
}

impl MarkdownParser {
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
            parser,
            block_language,
            inline_language,
            inline_injection_query,
            query_cursor,
        } = self;
        parser
            .set_included_ranges(&[])
            .expect("Can not set included ranges to whole document");
        parser
            .set_language(*block_language)
            .expect("Could not load block grammar");
        let block_tree = parser.parse(text, old_tree.map(|tree| &tree.block_tree))?;
        let (mut inline_trees, mut inline_indices) = if let Some(old_tree) = old_tree {
            let len = old_tree.inline_trees.len();
            (Vec::with_capacity(len), HashMap::with_capacity(len))
        } else {
            (Vec::new(), HashMap::new())
        };
        let mut tree_cursor = block_tree.walk();
        parser
            .set_language(*inline_language)
            .expect("Could not load inline grammar");
        for (i, capture) in query_cursor
            .matches(inline_injection_query, block_tree.root_node(), text)
            .flat_map(|query_match| query_match.captures)
            .enumerate()
        {
            let mut range = capture.node.range();
            let children_iter = capture.node.named_children(&mut tree_cursor);
            let mut ranges = Vec::with_capacity(children_iter.size_hint().0 + 1);
            for child in children_iter {
                let child_range = child.range();
                ranges.push(Range {
                    start_byte: range.start_byte,
                    start_point: range.start_point,
                    end_byte: child_range.start_byte,
                    end_point: child_range.start_point,
                });
                range.start_byte = child_range.end_byte;
                range.start_point = child_range.end_point;
            }
            ranges.push(range);
            parser.set_included_ranges(&ranges).ok()?;
            let inline_tree = parser.parse(
                text,
                old_tree.and_then(|old_tree| old_tree.inline_trees.get(i)),
            )?;
            inline_trees.push(inline_tree);
            inline_indices.insert(capture.node.id(), i);
        }
        drop(tree_cursor);
        inline_trees.shrink_to_fit();
        inline_indices.shrink_to_fit();
        Some(MarkdownTree {
            block_tree,
            inline_trees,
            inline_indices,
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
        let mut parser = MarkdownParser::default();
        let mut tree = parser.parse(code.as_bytes(), None).unwrap();
        dbg!(&tree);

        let section = tree.block_tree().root_node().child(0).unwrap();
        assert_eq!(section.kind(), "section");
        let heading = section.child(0).unwrap();
        assert_eq!(heading.kind(), "atx_heading");
        let paragraph = section.child(1).unwrap();
        assert_eq!(paragraph.kind(), "paragraph");
        let inline = paragraph.child(0).unwrap();
        assert_eq!(inline.kind(), "inline");
        assert_eq!(
            tree.inline_tree(&inline)
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

        let section = tree.block_tree().root_node().child(0).unwrap();
        assert_eq!(section.kind(), "section");
        let heading = section.child(0).unwrap();
        assert_eq!(heading.kind(), "atx_heading");
        let paragraph = section.child(1).unwrap();
        assert_eq!(paragraph.kind(), "paragraph");
        let inline = paragraph.child(0).unwrap();
        assert_eq!(inline.kind(), "inline");
        assert_eq!(
            tree.inline_tree(&inline)
                .unwrap()
                .root_node()
                .named_child(0)
                .unwrap()
                .kind(),
            "shortcut_link"
        );
    }
}
