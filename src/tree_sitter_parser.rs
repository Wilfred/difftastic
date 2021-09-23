//! Parse code with tree-sitter language implementations.

use std::{borrow::Borrow, collections::HashSet, ffi::OsStr};

use tree_sitter::{Language, Parser, TreeCursor};
use typed_arena::Arena;

use crate::{lines::NewlinePositions, syntax::Syntax};

pub struct TreeSitterConfig {
    pub name: &'static str,
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
    open_delimiter_tokens: HashSet<&'static str>,
}

extern "C" {
    fn tree_sitter_c() -> Language;
    fn tree_sitter_c_sharp() -> Language;
    fn tree_sitter_clojure() -> Language;
    fn tree_sitter_cpp() -> Language;
    fn tree_sitter_css() -> Language;
    fn tree_sitter_elisp() -> Language;
    fn tree_sitter_elixir() -> Language;
    fn tree_sitter_go() -> Language;
    fn tree_sitter_haskell() -> Language;
    fn tree_sitter_java() -> Language;
    fn tree_sitter_javascript() -> Language;
    fn tree_sitter_json() -> Language;
    fn tree_sitter_ocaml() -> Language;
    fn tree_sitter_ocaml_interface() -> Language;
    fn tree_sitter_python() -> Language;
    fn tree_sitter_rust() -> Language;
    fn tree_sitter_tsx() -> Language;
    fn tree_sitter_typescript() -> Language;
}

pub fn from_extension(extension: &OsStr) -> Option<TreeSitterConfig> {
    // TODO: find a nice way to extract name and extension information
    // from the package.json in these parsers.
    match extension.to_string_lossy().borrow() {
        "c" => Some(TreeSitterConfig {
            name: "C",
            language: unsafe { tree_sitter_c() },
            atom_nodes: (vec!["string_literal", "char_literal"])
                .into_iter()
                .collect(),
            // TODO: Handle array_declarator where [ is the second token.
            open_delimiter_tokens: (vec!["(", "{"]).into_iter().collect(),
        }),
        // Treat .h as C++ rather than C. This is an arbitrary choice,
        // but C++ is more widely used than C according to
        // https://madnight.github.io/githut/
        //
        // TODO: allow users to override the association between
        // extensions and parses.
        "cc" | "cpp" | "h" | "hpp" => Some(TreeSitterConfig {
            name: "C++",
            language: unsafe { tree_sitter_cpp() },
            // The C++ grammar extends the C grammar, so the node
            // names are generally the same.
            atom_nodes: (vec!["string_literal", "char_literal"])
                .into_iter()
                .collect(),
            open_delimiter_tokens: (vec!["(", "{"]).into_iter().collect(),
        }),
        "bb" | "boot" | "clj" | "cljc" | "clje" | "cljs" | "cljx" | "edn" | "joke" | "joker" => {
            Some(TreeSitterConfig {
                name: "Clojure",
                language: unsafe { tree_sitter_clojure() },
                atom_nodes: (vec![]).into_iter().collect(),
                open_delimiter_tokens: (vec!["{", "(", "["]).into_iter().collect(),
            })
        }
        "cs" => Some(TreeSitterConfig {
            name: "C#",
            language: unsafe { tree_sitter_c_sharp() },
            atom_nodes: (vec![
                "string_literal",
                "verbatim_string_literal",
                "character_literal",
            ])
            .into_iter()
            .collect(),
            // TODO: If statements have ( as the second item.
            open_delimiter_tokens: (vec!["{", "("]).into_iter().collect(),
        }),
        "css" => Some(TreeSitterConfig {
            name: "CSS",
            language: unsafe { tree_sitter_css() },
            atom_nodes: (vec!["integer_value"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["{", "("]).into_iter().collect(),
        }),
        "el" => Some(TreeSitterConfig {
            name: "Emacs Lisp",
            language: unsafe { tree_sitter_elisp() },
            atom_nodes: (vec![]).into_iter().collect(),
            open_delimiter_tokens: (vec!["{", "(", "["]).into_iter().collect(),
        }),
        "ex" | "exs" => Some(TreeSitterConfig {
            name: "Elixir",
            language: unsafe { tree_sitter_elixir() },
            atom_nodes: (vec!["string", "heredoc"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["(", "{", "do"]).into_iter().collect(),
        }),
        "go" => Some(TreeSitterConfig {
            name: "Go",
            language: unsafe { tree_sitter_go() },
            atom_nodes: (vec!["interpreted_string_literal", "raw_string_literal"])
                .into_iter()
                .collect(),
            open_delimiter_tokens: (vec!["{", "[", "("]).into_iter().collect(),
        }),
        "hs" => Some(TreeSitterConfig {
            name: "Haskell",
            language: unsafe { tree_sitter_haskell() },
            atom_nodes: (vec![]).into_iter().collect(),
            open_delimiter_tokens: (vec!["[", "("]).into_iter().collect(),
        }),
        "java" => Some(TreeSitterConfig {
            name: "Java",
            language: unsafe { tree_sitter_java() },
            atom_nodes: (vec![]).into_iter().collect(),
            open_delimiter_tokens: (vec!["(", "{"]).into_iter().collect(),
        }),
        "js" | "jsx" => Some(TreeSitterConfig {
            name: "JavaScript",
            language: unsafe { tree_sitter_javascript() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            open_delimiter_tokens: (vec![
                "[", "(", "{",
                // This is only correct because < cannot occur as the
                // first token in tree-sitter node unless we're in JSX.
                "<",
            ])
            .into_iter()
            .collect(),
        }),
        "json" => Some(TreeSitterConfig {
            name: "JSON",
            language: unsafe { tree_sitter_json() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["{", "["]).into_iter().collect(),
        }),
        "ml" => Some(TreeSitterConfig {
            name: "OCaml",
            language: unsafe { tree_sitter_ocaml() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["(", "[", "{"]).into_iter().collect(),
        }),
        "mli" => Some(TreeSitterConfig {
            name: "OCaml Interface",
            language: unsafe { tree_sitter_ocaml_interface() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["(", "[", "{"]).into_iter().collect(),
        }),
        "py" => Some(TreeSitterConfig {
            name: "Python",
            language: unsafe { tree_sitter_python() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["(", "[", "{"]).into_iter().collect(),
        }),
        "rs" => Some(TreeSitterConfig {
            name: "Rust",
            language: unsafe { tree_sitter_rust() },
            atom_nodes: (vec!["char_literal", "string_literal"])
                .into_iter()
                .collect(),
            open_delimiter_tokens: (vec!["{", "(", "[", "|"]).into_iter().collect(),
        }),
        "ts" => Some(TreeSitterConfig {
            name: "TypeScript",
            language: unsafe { tree_sitter_typescript() },
            atom_nodes: (vec!["string", "template_string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["{", "(", "[", "<"]).into_iter().collect(),
        }),
        "tsx" => Some(TreeSitterConfig {
            name: "TypeScript TSX",
            language: unsafe { tree_sitter_tsx() },
            atom_nodes: (vec!["string", "template_string"]).into_iter().collect(),
            open_delimiter_tokens: (vec!["{", "(", "[", "<"]).into_iter().collect(),
        }),
        _ => None,
    }
}

/// Parse `src` with tree-sitter.
pub fn parse_to_tree(src: &str, config: &TreeSitterConfig) -> tree_sitter::Tree {
    let mut parser = Parser::new();
    parser
        .set_language(config.language)
        .expect("Incompatible tree-sitter version");

    parser.parse(src, None).unwrap()
}

pub fn print_tree(tree: &tree_sitter::Tree) {
    let mut cursor = tree.walk();
    print_cursor(&mut cursor, 0);
}

fn print_cursor(cursor: &mut TreeCursor, depth: usize) {
    loop {
        let node = cursor.node();
        println!("{}{:#?}", "  ".repeat(depth), node);

        if cursor.goto_first_child() {
            print_cursor(cursor, depth + 1);
            cursor.goto_parent();
        }

        if !cursor.goto_next_sibling() {
            break;
        }
    }
}

/// Parse `src` with tree-sitter and convert to difftastic Syntax.
pub fn parse<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    config: &TreeSitterConfig,
) -> Vec<&'a Syntax<'a>> {
    let tree = parse_to_tree(src, config);

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
            let child_node = cursor.node();
            let child_content = &src[child_node.start_byte()..child_node.end_byte()];
            // TODO: consider open delimiters that aren't the first child.
            // TODO: find the close delimiter rather than assuming it's last.
            let has_delimiters = config.open_delimiter_tokens.contains(child_content);

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

#[cfg(test)]
mod tests {
    use super::*;

    /// Simple smoke test for tree-sitter parsing. Having a test also
    /// ensures that this file has its coverage measured.
    /// <https://github.com/mozilla/grcov/issues/617>
    #[test]
    fn test_parse() {
        let arena = Arena::new();
        let css_config = from_extension(OsStr::new("css")).unwrap();
        parse(&arena, ".foo {}", &css_config);
    }
}
