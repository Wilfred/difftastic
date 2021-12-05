//! Load and configure parsers written with tree-sitter.

use std::{borrow::Borrow, collections::HashSet, ffi::OsStr};

use tree_sitter::{Language, Parser, Query, QueryCursor, TreeCursor};
use typed_arena::Arena;

use crate::{
    lines::NewlinePositions,
    syntax::{AtomKind, Syntax},
};

/// Configuration for a tree-sitter parser.
pub struct TreeSitterConfig {
    /// The language name shown to the user.
    pub name: &'static str,

    /// The tree-sitter language parser.
    pub language: Language,

    /// Tree-sitter nodes that we treat as indivisible atoms.
    ///
    /// This is particularly useful for strings, as some grammars use
    /// several nodes for a single string literal. We don't want to
    /// say e.g. the closing string delimiter moved, as it's confusing
    /// and not well-balanced syntax.
    ///
    /// This is also useful for when tree-sitter nodes don't include
    /// all the children in the source. This is known limitation of
    /// tree-sitter, and occurs more often for complex string syntax.
    /// <https://github.com/tree-sitter/tree-sitter/issues/1156>
    atom_nodes: HashSet<&'static str>,

    /// We want to consider delimiter tokens as part of lists, not
    /// standalone atoms. Tree-sitter includes delimiter tokens, so
    /// mark which token pairs we consider to be delimiters.
    delimiter_tokens: Vec<(&'static str, &'static str)>,

    /// Tree-sitter queries used for syntax highlighting this
    /// language.
    highlight_queries: &'static str,
}

extern "C" {
    fn tree_sitter_bash() -> Language;
    fn tree_sitter_c() -> Language;
    fn tree_sitter_c_sharp() -> Language;
    fn tree_sitter_clojure() -> Language;
    fn tree_sitter_cpp() -> Language;
    fn tree_sitter_commonlisp() -> Language;
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
    fn tree_sitter_ruby() -> Language;
    fn tree_sitter_rust() -> Language;
    fn tree_sitter_tsx() -> Language;
    fn tree_sitter_typescript() -> Language;
}

pub fn from_extension(extension: &OsStr) -> Option<TreeSitterConfig> {
    // TODO: find a nice way to extract name and extension information
    // from the package.json in these parsers.
    // TODO: consider using
    // https://github.com/github/linguist/blob/master/lib/linguist/languages.yml
    // as a source of extensions.
    // TODO: support files without extensions, such as .bashrc.
    match extension.to_string_lossy().borrow() {
        "bash" | "sh" => Some(TreeSitterConfig {
            name: "Bash",
            language: unsafe { tree_sitter_bash() },
            atom_nodes: (vec!["string", "raw_string"]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")"), ("{", "}"), ("[", "]")]),
            highlight_queries: include_str!("../vendor/highlights/bash.scm"),
        }),
        "c" => Some(TreeSitterConfig {
            name: "C",
            language: unsafe { tree_sitter_c() },
            atom_nodes: (vec!["string_literal", "char_literal"])
                .into_iter()
                .collect(),
            delimiter_tokens: (vec![("(", ")"), ("{", "}"), ("[", "]")]),
            highlight_queries: include_str!("../vendor/highlights/c.scm"),
        }),
        // Treat .h as C++ rather than C. This is an arbitrary choice,
        // but C++ is more widely used than C according to
        // https://madnight.github.io/githut/
        //
        // TODO: allow users to override the association between
        // extensions and parses.
        "cc" | "cpp" | "h" | "hh" | "hpp" | "cxx" => Some(TreeSitterConfig {
            name: "C++",
            language: unsafe { tree_sitter_cpp() },
            // The C++ grammar extends the C grammar, so the node
            // names are generally the same.
            atom_nodes: (vec!["string_literal", "char_literal"])
                .into_iter()
                .collect(),
            delimiter_tokens: (vec![("(", ")"), ("{", "}"), ("[", "]")]),
            highlight_queries: concat!(
                include_str!("../vendor/highlights/c.scm"),
                include_str!("../vendor/highlights/cpp.scm")
            ),
        }),
        "bb" | "boot" | "clj" | "cljc" | "clje" | "cljs" | "cljx" | "edn" | "joke" | "joker" => {
            Some(TreeSitterConfig {
                name: "Clojure",
                language: unsafe { tree_sitter_clojure() },
                atom_nodes: (vec![]).into_iter().collect(),
                delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]")])
                    .into_iter()
                    .collect(),
                highlight_queries: "",
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
            delimiter_tokens: (vec![("{", "}"), ("(", ")")]),
            highlight_queries: include_str!("../vendor/highlights/c-sharp.scm"),
        }),
        "css" => Some(TreeSitterConfig {
            name: "CSS",
            language: unsafe { tree_sitter_css() },
            atom_nodes: (vec!["integer_value"]).into_iter().collect(),
            delimiter_tokens: (vec![("{", "}"), ("(", ")")]),
            highlight_queries: include_str!("../vendor/highlights/css.scm"),
        }),
        "el" | ".emacs" => Some(TreeSitterConfig {
            name: "Emacs Lisp",
            language: unsafe { tree_sitter_elisp() },
            atom_nodes: (vec![]).into_iter().collect(),
            delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]")])
                .into_iter()
                .collect(),
            highlight_queries: include_str!("../vendor/highlights/elisp.scm"),
        }),
        "ex" | "exs" => Some(TreeSitterConfig {
            name: "Elixir",
            language: unsafe { tree_sitter_elixir() },
            atom_nodes: (vec!["string", "heredoc"]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")"), ("{", "}"), ("do", "end")])
                .into_iter()
                .collect(),
            highlight_queries: include_str!("../vendor/highlights/elixir.scm"),
        }),
        "go" => Some(TreeSitterConfig {
            name: "Go",
            language: unsafe { tree_sitter_go() },
            atom_nodes: (vec!["interpreted_string_literal", "raw_string_literal"])
                .into_iter()
                .collect(),
            delimiter_tokens: (vec![("{", "}"), ("[", "]"), ("(", ")")])
                .into_iter()
                .collect(),
            highlight_queries: include_str!("../vendor/highlights/go.scm"),
        }),
        "hs" => Some(TreeSitterConfig {
            name: "Haskell",
            language: unsafe { tree_sitter_haskell() },
            atom_nodes: (vec![]).into_iter().collect(),
            delimiter_tokens: (vec![("[", "]"), ("(", ")")]),
            highlight_queries: include_str!("../vendor/highlights/haskell.scm"),
        }),
        "java" => Some(TreeSitterConfig {
            name: "Java",
            language: unsafe { tree_sitter_java() },
            atom_nodes: (vec![]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")"), ("{", "}")]),
            highlight_queries: include_str!("../vendor/highlights/java.scm"),
        }),
        "cjs" | "js" | "jsx" | "mjs" => Some(TreeSitterConfig {
            name: "JavaScript",
            language: unsafe { tree_sitter_javascript() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            delimiter_tokens: (vec![
                ("[", "]"),
                ("(", ")"),
                ("{", "}"),
                // We may see a standalone < token in an expression
                // like 1 < 2, but we should never see both a < and a
                // > at the same level in JSX.
                ("<", ">"),
            ]),
            highlight_queries: include_str!("../vendor/highlights/javascript.scm"),
        }),
        "json" => Some(TreeSitterConfig {
            name: "JSON",
            language: unsafe { tree_sitter_json() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            delimiter_tokens: (vec![("{", "}"), ("[", "]")]),
            highlight_queries: include_str!("../vendor/highlights/json.scm"),
        }),
        "lisp" | "lsp" | "asd" => Some(TreeSitterConfig {
            name: "Common Lisp",
            language: unsafe { tree_sitter_commonlisp() },
            atom_nodes: (vec!["str_lit"]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")")]),
            highlight_queries: "",
        }),
        "ml" => Some(TreeSitterConfig {
            name: "OCaml",
            language: unsafe { tree_sitter_ocaml() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
            // TODO: begin/end and object/end.
            delimiter_tokens: (vec![("(", ")"), ("[", "]"), ("{", "}")]),
            highlight_queries: include_str!("../vendor/highlights/ocaml.scm"),
        }),
        "mli" => Some(TreeSitterConfig {
            name: "OCaml Interface",
            language: unsafe { tree_sitter_ocaml_interface() },
            atom_nodes: (vec!["character", "string"]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")"), ("[", "]"), ("{", "}")]),
            highlight_queries: include_str!("../vendor/highlights/ocaml.scm"),
        }),
        "py" | "py3" | "pyi" | "TARGETS" | "BUCK" | "bzl" => Some(TreeSitterConfig {
            name: "Python",
            language: unsafe { tree_sitter_python() },
            atom_nodes: (vec!["string"]).into_iter().collect(),
            delimiter_tokens: (vec![("(", ")"), ("[", "]"), ("{", "}")]),
            highlight_queries: include_str!("../vendor/highlights/python.scm"),
        }),
        "rb" | "spec" | "rake" => Some(TreeSitterConfig {
            name: "Ruby",
            language: unsafe { tree_sitter_ruby() },
            atom_nodes: (vec!["string", "heredoc_body", "regex"])
                .into_iter()
                .collect(),
            delimiter_tokens: (vec![
                ("{", "}"),
                ("(", ")"),
                ("[", "]"),
                ("|", "|"),
                ("def", "end"),
                ("begin", "end"),
                ("class", "end"),
            ]),
            highlight_queries: include_str!("../vendor/highlights/ruby.scm"),
        }),
        "rs" => Some(TreeSitterConfig {
            name: "Rust",
            language: unsafe { tree_sitter_rust() },
            atom_nodes: (vec!["char_literal", "string_literal"])
                .into_iter()
                .collect(),
            delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]"), ("|", "|")]),
            highlight_queries: include_str!("../vendor/highlights/rust.scm"),
        }),
        "ts" => Some(TreeSitterConfig {
            name: "TypeScript",
            language: unsafe { tree_sitter_typescript() },
            atom_nodes: (vec!["string", "template_string"]).into_iter().collect(),
            delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")]),
            highlight_queries: include_str!("../vendor/highlights/typescript.scm"),
        }),
        "tsx" => Some(TreeSitterConfig {
            name: "TypeScript TSX",
            language: unsafe { tree_sitter_tsx() },
            atom_nodes: (vec!["string", "template_string"]).into_iter().collect(),
            delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")]),
            highlight_queries: include_str!("../vendor/highlights/typescript.scm"),
        }),
        _ => None,
    }
}

/// Parse `src` with tree-sitter.
pub fn parse_to_tree(src: &str, config: &TreeSitterConfig) -> (tree_sitter::Tree, HashSet<usize>) {
    let mut parser = Parser::new();
    parser
        .set_language(config.language)
        .expect("Incompatible tree-sitter version");

    let tree = parser.parse(src, None).unwrap();

    let query = Query::new(config.language, config.highlight_queries).unwrap();

    let mut node_keyword_ids = HashSet::new();

    let mut keyword_ish_ids = vec![];
    if let Some(idx) = query.capture_index_for_name("keyword") {
        keyword_ish_ids.push(idx);
    }
    if let Some(idx) = query.capture_index_for_name("operator") {
        keyword_ish_ids.push(idx);
    }
    if let Some(idx) = query.capture_index_for_name("constant") {
        keyword_ish_ids.push(idx);
    }

    let mut qc = QueryCursor::new();
    let q_matches = qc.matches(&query, tree.root_node(), src.as_bytes());

    for m in q_matches {
        for c in m.captures {
            if keyword_ish_ids.contains(&c.index) {
                node_keyword_ids.insert(c.node.id());
            }
        }
    }

    (tree, node_keyword_ids)
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
    let (tree, keyword_ids) = parse_to_tree(src, config);

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    all_syntaxes_from_cursor(arena, src, &nl_pos, &mut cursor, config, &keyword_ids)
}

fn child_tokens<'a>(src: &'a str, cursor: &mut TreeCursor) -> Vec<Option<&'a str>> {
    let mut tokens = vec![];

    cursor.goto_first_child();
    loop {
        let node = cursor.node();

        // We're only interested in tree-sitter nodes that are plain tokens,
        // not lists or comments.
        if node.child_count() > 1 || node.is_extra() {
            tokens.push(None);
        } else {
            tokens.push(Some(&src[node.start_byte()..node.end_byte()]));
        }

        if !cursor.goto_next_sibling() {
            break;
        }
    }
    cursor.goto_parent();

    tokens
}

/// Are any of the children of the node at `cursor` delimiters? Return
/// their indexes if so.
fn find_delim_positions(
    src: &str,
    cursor: &mut TreeCursor,
    lang_delims: &[(&str, &str)],
) -> Option<(usize, usize)> {
    let tokens = child_tokens(src, cursor);

    for (i, token) in tokens.iter().enumerate() {
        for (open_delim, close_delim) in lang_delims {
            if *token == Some(open_delim) {
                for (j, token) in tokens.iter().skip(i + 1).enumerate() {
                    if *token == Some(close_delim) {
                        return Some((i, i + 1 + j));
                    }
                }
            }
        }
    }

    None
}

/// Convert all the tree-sitter nodes at this level to difftastic
/// syntax nodes.
///
/// `cursor` should be pointing at the first tree-sitter node in a level.
fn all_syntaxes_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    config: &TreeSitterConfig,
    keyword_ids: &HashSet<usize>,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    loop {
        result.push(syntax_from_cursor(
            arena,
            src,
            nl_pos,
            cursor,
            config,
            keyword_ids,
        ));

        if !cursor.goto_next_sibling() {
            break;
        }
    }

    result
}

/// Convert the tree-sitter node at `cursor` to a difftastic syntax
/// node.
fn syntax_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    config: &TreeSitterConfig,
    keyword_ids: &HashSet<usize>,
) -> &'a Syntax<'a> {
    let node = cursor.node();

    if node.is_error() {
        let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        let content = &src[node.start_byte()..node.end_byte()];

        warn!("Tree-sitter syntax error at {:?}: {}", position.get(0), content);
    }

    if config.atom_nodes.contains(node.kind()) {
        // Treat nodes like string literals as atoms, regardless
        // of whether they have children.
        atom_from_cursor(arena, src, nl_pos, cursor, keyword_ids)
    } else if node.child_count() > 0 {
        list_from_cursor(arena, src, nl_pos, cursor, config, keyword_ids)
    } else {
        atom_from_cursor(arena, src, nl_pos, cursor, keyword_ids)
    }
}

/// Convert the tree-sitter node at `cursor` to a difftastic list
/// node.
fn list_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    config: &TreeSitterConfig,
    keyword_ids: &HashSet<usize>,
) -> &'a Syntax<'a> {
    let root_node = cursor.node();

    // We may not have an enclosing delimiter for this list. Use "" as
    // the delimiter text and the start/end of this node as the
    // delimiter positions.
    let outer_open_content = "";
    let outer_open_position = nl_pos.from_offsets(root_node.start_byte(), root_node.start_byte());
    let outer_close_content = "";
    let outer_close_position = nl_pos.from_offsets(root_node.end_byte(), root_node.end_byte());

    let (i, j) = match find_delim_positions(src, cursor, &config.delimiter_tokens) {
        Some((i, j)) => (i as isize, j as isize),
        None => (-1, root_node.child_count() as isize),
    };

    let mut inner_open_content = outer_open_content;
    let mut inner_open_position = outer_open_position.clone();
    let mut inner_close_content = outer_close_content;
    let mut inner_close_position = outer_close_position.clone();

    // Tree-sitter trees include the delimiter tokens, so `(x)` is
    // parsed as:
    //
    // "(" "x" ")"
    //
    // However, there's no guarantee that the first token is a
    // delimiter. For example, the C parser treats `foo[0]` as:
    //
    // "foo" "[" "0" "]"
    //
    // Store the syntax nodes before, between and after the
    // delimiters, so we can construct lists.
    let mut before_delim = vec![];
    let mut between_delim = vec![];
    let mut after_delim = vec![];

    let mut node_i = 0;
    cursor.goto_first_child();
    loop {
        let node = cursor.node();
        if node_i < i {
            before_delim.push(syntax_from_cursor(
                arena,
                src,
                nl_pos,
                cursor,
                config,
                keyword_ids,
            ));
        } else if node_i == i {
            inner_open_content = &src[node.start_byte()..node.end_byte()];
            inner_open_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i < j {
            between_delim.push(syntax_from_cursor(
                arena,
                src,
                nl_pos,
                cursor,
                config,
                keyword_ids,
            ));
        } else if node_i == j {
            inner_close_content = &src[node.start_byte()..node.end_byte()];
            inner_close_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i > j {
            after_delim.push(syntax_from_cursor(
                arena,
                src,
                nl_pos,
                cursor,
                config,
                keyword_ids,
            ));
        }

        if !cursor.goto_next_sibling() {
            break;
        }
        node_i += 1;
    }
    cursor.goto_parent();

    let inner_list = Syntax::new_list(
        arena,
        inner_open_content,
        inner_open_position,
        between_delim,
        inner_close_content,
        inner_close_position,
    );

    if before_delim.is_empty() && after_delim.is_empty() {
        // The common case "(" "x" ")", so we don't need the outer list.
        inner_list
    } else {
        // Wrap the inner list in an additional list that includes the
        // syntax nodes before and after the delimiters.
        //
        // "foo" "[" "0" "]" // tree-sitter nodes
        //
        // (List "foo" (List "0")) // difftastic syntax nodes
        let mut children = before_delim;
        children.push(inner_list);
        children.append(&mut after_delim);

        Syntax::new_list(
            arena,
            outer_open_content,
            outer_open_position,
            children,
            outer_close_content,
            outer_close_position,
        )
    }
}

/// Convert the tree-sitter node at `cursor` to a difftastic atom.
fn atom_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    keyword_ids: &HashSet<usize>,
) -> &'a Syntax<'a> {
    let node = cursor.node();
    let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
    let content = &src[node.start_byte()..node.end_byte()];

    let highlight = if node.is_extra() {
        AtomKind::Comment
    } else if keyword_ids.contains(&node.id()) {
        AtomKind::Keyword
    } else {
        AtomKind::Normal
    };

    Syntax::new_atom(arena, position, content, highlight)
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
