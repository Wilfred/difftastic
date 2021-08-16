use std::ffi::OsStr;

use tree_sitter::{Language, Parser, TreeCursor};
use typed_arena::Arena;

use crate::{lines::NewlinePositions, syntax::Syntax};

extern "C" {
    fn tree_sitter_css() -> Language;
    fn tree_sitter_elisp() -> Language;
    fn tree_sitter_go() -> Language;
    fn tree_sitter_json() -> Language;
    fn tree_sitter_rust() -> Language;
}

pub fn supported(extension: &OsStr) -> bool {
    extension == "rs"
        || extension == "go"
        || extension == "css"
        || extension == "el"
        || extension == "json"
}

pub fn parse<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    extension: &OsStr,
) -> Vec<&'a Syntax<'a>> {
    let mut parser = Parser::new();

    let language = if extension == "rs" {
        unsafe { tree_sitter_rust() }
    } else if extension == "go" {
        unsafe { tree_sitter_go() }
    } else if extension == "css" {
        unsafe { tree_sitter_css() }
    } else if extension == "el" {
        unsafe { tree_sitter_elisp() }
    } else if extension == "json" {
        unsafe { tree_sitter_json() }
    } else {
        panic!("Unknown extension for tree-sitter parsers.")
    };
    parser
        .set_language(language)
        .expect("Incompatible tree-sitter version");

    let tree = parser.parse(src, None).unwrap();

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    syntax_from_cursor(arena, src, &nl_pos, &mut cursor)
}

fn syntax_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    loop {
        let node = cursor.node();

        if cursor.goto_first_child() {
            // This node has children, so treat it as a list.
            let children = syntax_from_cursor(arena, src, nl_pos, cursor);
            cursor.goto_parent();

            let open_position = nl_pos.from_offsets(node.start_byte(), node.start_byte());
            let close_position = nl_pos.from_offsets(node.end_byte(), node.end_byte());
            result.push(Syntax::new_list(
                arena,
                "",
                open_position,
                children,
                "",
                close_position,
            ))
        } else {
            let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
            let content = &src[node.start_byte()..node.end_byte()];

            if node.is_extra() {
                result.push(Syntax::new_comment(arena, position, content));
            } else {
                result.push(Syntax::new_atom(arena, position, content));
            }
        }

        if !cursor.goto_next_sibling() {
            break;
        }
    }

    result
}
