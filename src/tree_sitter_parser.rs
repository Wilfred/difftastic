use std::{borrow::Borrow, collections::HashSet, ffi::OsStr};

use tree_sitter::{Language, Parser, TreeCursor};
use typed_arena::Arena;

use crate::{lines::NewlinePositions, syntax::Syntax};

pub struct TreeSitterConfig {
    pub name: String,
    pub language: Language,
    // Tree-sitter nodes that we treat as indivisible atoms. This is
    // particularly useful for strings, as some grammars use several
    // nodes for a single string literal. We don't want to say
    // e.g. the closing string delimiter moved, as it's confusing and
    // not well-balanced syntax.
    //
    // This is also useful for when tree-sitter nodes don't include
    // all the children in the source. This is known limitation of
    // tree-sitter, and occurs more often for complex string syntax.
    // https://github.com/tree-sitter/tree-sitter/issues/1156
    atom_nodes: HashSet<&'static str>,
}

extern "C" {
    fn tree_sitter_clojure() -> Language;
    fn tree_sitter_css() -> Language;
    fn tree_sitter_elisp() -> Language;
    fn tree_sitter_go() -> Language;
    fn tree_sitter_javascript() -> Language;
    fn tree_sitter_json() -> Language;
    fn tree_sitter_ocaml() -> Language;
    fn tree_sitter_ocaml_interface() -> Language;
    fn tree_sitter_rust() -> Language;
}

pub fn from_extension(extension: &OsStr) -> Option<TreeSitterConfig> {
    // TODO: find a nice way to extract this data from the
    // package.json in these parsers.
    match extension.to_string_lossy().borrow() {
        "clj" => Some(TreeSitterConfig {
            name: "Clojure".into(),
            language: unsafe { tree_sitter_clojure() },
            atom_nodes: (vec![]).into_iter().collect(),
        }),
        "css" => Some(TreeSitterConfig {
            name: "CSS".into(),
            language: unsafe { tree_sitter_css() },
            atom_nodes: (vec![]).into_iter().collect(),
        }),
        "el" => Some(TreeSitterConfig {
            name: "Emacs Lisp".into(),
            language: unsafe { tree_sitter_elisp() },
            atom_nodes: (vec![]).into_iter().collect(),
        }),
        "go" => Some(TreeSitterConfig {
            name: "Go".into(),
            language: unsafe { tree_sitter_go() },
            atom_nodes: (vec!["interpreted_string_literal", "raw_string_literal"])
                .into_iter()
                .collect(),
        }),
        "js" | "jsx" => Some(TreeSitterConfig {
            name: "JavaScript".into(),
            language: unsafe { tree_sitter_javascript() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
        }),
        "json" => Some(TreeSitterConfig {
            name: "JSON".into(),
            language: unsafe { tree_sitter_json() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
        }),
        "ml" => Some(TreeSitterConfig {
            name: "OCaml".into(),
            language: unsafe { tree_sitter_ocaml() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
        }),
        "mli" => Some(TreeSitterConfig {
            name: "OCaml Interface".into(),
            language: unsafe { tree_sitter_ocaml_interface() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
        }),
        "rs" => Some(TreeSitterConfig {
            name: "Rust".into(),
            language: unsafe { tree_sitter_rust() },
            atom_nodes: (vec!["char_literal", "string_literal"])
                .into_iter()
                .collect(),
        }),
        _ => None,
    }
}

pub fn parse<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    config: &TreeSitterConfig,
) -> Vec<&'a Syntax<'a>> {
    let mut parser = Parser::new();
    parser
        .set_language(config.language)
        .expect("Incompatible tree-sitter version");

    let tree = parser.parse(src, None).unwrap();

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    syntax_from_cursor(arena, src, &nl_pos, &mut cursor, config, false)
}

fn syntax_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    config: &TreeSitterConfig,
    skip_ends: bool,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    let mut is_first = true;
    loop {
        let node = cursor.node();

        if config.atom_nodes.contains(node.kind()) {
            // Treat nodes like string literals as atoms, regardless
            // of whether they have children.
            let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
            let content = &src[node.start_byte()..node.end_byte()];
            result.push(Syntax::new_atom(arena, position, content));
        } else if cursor.goto_first_child() {
            let has_delimiters = cursor.field_name() == Some("open");

            // This node has children, so treat it as a list.
            let children = syntax_from_cursor(arena, src, nl_pos, cursor, config, has_delimiters);
            cursor.goto_parent();

            let mut open_content = "";
            let mut open_position = nl_pos.from_offsets(node.start_byte(), node.start_byte());
            let mut close_content = "";
            let mut close_position = nl_pos.from_offsets(node.end_byte(), node.end_byte());

            if has_delimiters {
                cursor.goto_first_child();
                let first_child_node = cursor.node();
                while cursor.goto_next_sibling() {}
                let last_child_node = cursor.node();

                open_content = &src[first_child_node.start_byte()..first_child_node.end_byte()];
                open_position =
                    nl_pos.from_offsets(first_child_node.start_byte(), first_child_node.end_byte());

                close_content = &src[last_child_node.start_byte()..last_child_node.end_byte()];
                close_position =
                    nl_pos.from_offsets(last_child_node.start_byte(), last_child_node.end_byte());

                cursor.goto_parent();
            }

            result.push(Syntax::new_list(
                arena,
                open_content,
                open_position,
                children,
                close_content,
                close_position,
            ))
        } else {
            let skip_this = skip_ends && (is_first || is_last_sibling(cursor));

            if !skip_this {
                let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
                let content = &src[node.start_byte()..node.end_byte()];

                if node.is_extra() {
                    result.push(Syntax::new_comment(arena, position, content));
                } else {
                    result.push(Syntax::new_atom(arena, position, content));
                }
            }
        }
        is_first = false;

        if !cursor.goto_next_sibling() {
            break;
        }
    }

    result
}

fn is_last_sibling(cursor: &mut TreeCursor) -> bool {
    let node = cursor.node();
    node.next_sibling().is_none()
}
