//! Load and configure parsers written with tree-sitter.

use std::collections::HashSet;

use crate::guess_language as guess;
use tree_sitter as ts;
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
    pub language: ts::Language,

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

    /// Tree-sitter query used for syntax highlighting this
    /// language.
    highlight_query: ts::Query,
}

extern "C" {
    fn tree_sitter_bash() -> ts::Language;
    fn tree_sitter_c() -> ts::Language;
    fn tree_sitter_c_sharp() -> ts::Language;
    fn tree_sitter_clojure() -> ts::Language;
    fn tree_sitter_cpp() -> ts::Language;
    fn tree_sitter_commonlisp() -> ts::Language;
    fn tree_sitter_css() -> ts::Language;
    fn tree_sitter_dart() -> ts::Language;
    fn tree_sitter_elisp() -> ts::Language;
    fn tree_sitter_elixir() -> ts::Language;
    fn tree_sitter_gleam() -> ts::Language;
    fn tree_sitter_elm() -> ts::Language;
    fn tree_sitter_go() -> ts::Language;
    fn tree_sitter_haskell() -> ts::Language;
    fn tree_sitter_janet_simple() -> ts::Language;
    fn tree_sitter_java() -> ts::Language;
    fn tree_sitter_javascript() -> ts::Language;
    fn tree_sitter_json() -> ts::Language;
    fn tree_sitter_lua() -> ts::Language;
    fn tree_sitter_nix() -> ts::Language;
    fn tree_sitter_ocaml() -> ts::Language;
    fn tree_sitter_ocaml_interface() -> ts::Language;
    fn tree_sitter_php() -> ts::Language;
    fn tree_sitter_python() -> ts::Language;
    fn tree_sitter_ruby() -> ts::Language;
    fn tree_sitter_rust() -> ts::Language;
    fn tree_sitter_scala() -> ts::Language;
    fn tree_sitter_tsx() -> ts::Language;
    fn tree_sitter_typescript() -> ts::Language;
    fn tree_sitter_yaml() -> ts::Language;
    fn tree_sitter_zig() -> ts::Language;
}

// TODO: begin/end and object/end.
const OCAML_ATOM_NODES: [&str; 6] = [
    "character",
    "string",
    "quoted_string",
    "tag",
    "type_variable",
    "attribute_id",
];

pub fn from_language(language: guess::Language) -> TreeSitterConfig {
    use guess::Language::*;
    match language {
        Bash => {
            let language = unsafe { tree_sitter_bash() };
            TreeSitterConfig {
                name: "Bash",
                language,
                atom_nodes: vec!["string", "raw_string", "heredoc_body"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/bash.scm"),
                )
                .unwrap(),
            }
        }
        C => {
            let language = unsafe { tree_sitter_c() };
            TreeSitterConfig {
                name: "C",
                language,
                atom_nodes: vec!["string_literal", "char_literal"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/c.scm"),
                )
                .unwrap(),
            }
        }
        CPlusPlus => {
            let language = unsafe { tree_sitter_cpp() };
            TreeSitterConfig {
                name: "C++",
                language,
                // The C++ grammar extends the C grammar, so the node
                // names are generally the same.
                atom_nodes: vec!["string_literal", "char_literal"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../vendor/highlights/c.scm"),
                        include_str!("../vendor/highlights/cpp.scm")
                    ),
                )
                .unwrap(),
            }
        }
        Clojure => {
            let language = unsafe { tree_sitter_clojure() };
            TreeSitterConfig {
                name: "Clojure",
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/clojure.scm"),
                )
                .unwrap(),
            }
        }
        CommonLisp => {
            let language = unsafe { tree_sitter_commonlisp() };
            TreeSitterConfig {
                name: "Common Lisp",
                language,
                atom_nodes: vec!["str_lit", "char_lit"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")],
                highlight_query: ts::Query::new(language, "").unwrap(),
            }
        }
        CSharp => {
            let language = unsafe { tree_sitter_c_sharp() };
            TreeSitterConfig {
                name: "C#",
                language,
                atom_nodes: vec![
                    "string_literal",
                    "verbatim_string_literal",
                    "character_literal",
                ]
                .into_iter()
                .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/c-sharp.scm"),
                )
                .unwrap(),
            }
        }
        Css => {
            let language = unsafe { tree_sitter_css() };
            TreeSitterConfig {
                name: "CSS",
                language,
                atom_nodes: vec!["integer_value", "float_value"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/css.scm"),
                )
                .unwrap(),
            }
        }
        Dart => {
            let language = unsafe { tree_sitter_dart() };
            TreeSitterConfig {
                name: "Dart",
                language,
                atom_nodes: vec!["string_literal", "script_tag"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/dart.scm"),
                )
                .unwrap(),
            }
        }
        EmacsLisp => {
            let language = unsafe { tree_sitter_elisp() };
            TreeSitterConfig {
                name: "Emacs Lisp",
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/elisp.scm"),
                )
                .unwrap(),
            }
        }
        Elixir => {
            let language = unsafe { tree_sitter_elixir() };
            TreeSitterConfig {
                name: "Elixir",
                language,
                atom_nodes: vec!["string", "heredoc"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("do", "end")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/elixir.scm"),
                )
                .unwrap(),
            }
        }
        Gleam => {
            let language = unsafe { tree_sitter_gleam() };
            TreeSitterConfig {
                name: "Gleam",
                language,
                atom_nodes: ["string"].into(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/gleam.scm"),
                )
                .unwrap(),
            }
        }
        Elm => {
            let language = unsafe { tree_sitter_elm() };
            TreeSitterConfig {
                name: "Elm",
                language,
                atom_nodes: vec!["string_constant_expr"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/elm.scm"),
                )
                .unwrap(),
            }
        }
        Go => {
            let language = unsafe { tree_sitter_go() };
            TreeSitterConfig {
                name: "Go",
                language,
                atom_nodes: vec!["interpreted_string_literal", "raw_string_literal"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]"), ("(", ")")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/go.scm"),
                )
                .unwrap(),
            }
        }
        Haskell => {
            let language = unsafe { tree_sitter_haskell() };
            TreeSitterConfig {
                name: "Haskell",
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("[", "]"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/haskell.scm"),
                )
                .unwrap(),
            }
        }
        JanetSimple => {
            let language = unsafe { tree_sitter_janet_simple() };
            TreeSitterConfig {
                name: "Janet",
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![
                    ("@{", "}"),
                    ("@(", ")"),
                    ("@[", "]"),
                    ("{", "}"),
                    ("(", ")"),
                    ("[", "]"),
                ]
                .into_iter()
                .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/janet_simple.scm"),
                )
                .unwrap(),
            }
        }
        Java => {
            let language = unsafe { tree_sitter_java() };
            TreeSitterConfig {
                name: "Java",
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/java.scm"),
                )
                .unwrap(),
            }
        }
        JavaScript | Jsx => {
            let language = unsafe { tree_sitter_javascript() };
            TreeSitterConfig {
                name: "JavaScript",
                language,
                atom_nodes: vec!["string", "template_string", "regex"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![
                    ("[", "]"),
                    ("(", ")"),
                    ("{", "}"),
                    // We may see a standalone < token in an expression
                    // like 1 < 2, but we should never see both a < and a
                    // > at the same level in JSX.
                    ("<", ">"),
                ],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/javascript.scm"),
                )
                .unwrap(),
            }
        }
        Json => {
            let language = unsafe { tree_sitter_json() };
            TreeSitterConfig {
                name: "JSON",
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/json.scm"),
                )
                .unwrap(),
            }
        }
        Lua => {
            let language = unsafe { tree_sitter_lua() };
            TreeSitterConfig {
                name: "Lua",
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/lua.scm"),
                )
                .unwrap(),
            }
        }
        Nix => {
            let language = unsafe { tree_sitter_nix() };
            TreeSitterConfig {
                name: "Nix",
                language,
                atom_nodes: vec!["string_expression", "indented_string_expression"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]")].into_iter().collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/nix.scm"),
                )
                .unwrap(),
            }
        }
        OCaml => {
            let language = unsafe { tree_sitter_ocaml() };
            TreeSitterConfig {
                name: "OCaml",
                language,
                atom_nodes: OCAML_ATOM_NODES.iter().copied().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/ocaml.scm"),
                )
                .unwrap(),
            }
        }
        OCamlInterface => {
            let language = unsafe { tree_sitter_ocaml_interface() };
            TreeSitterConfig {
                name: "OCaml Interface",
                language,
                atom_nodes: OCAML_ATOM_NODES.iter().copied().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/ocaml.scm"),
                )
                .unwrap(),
            }
        }
        Php => {
            let language = unsafe { tree_sitter_php() };
            TreeSitterConfig {
                name: "PHP",
                language,
                atom_nodes: vec!["string", "encapsed_string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/php.scm"),
                )
                .unwrap(),
            }
        }
        Python => {
            let language = unsafe { tree_sitter_python() };
            TreeSitterConfig {
                name: "Python",
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/python.scm"),
                )
                .unwrap(),
            }
        }
        Ruby => {
            let language = unsafe { tree_sitter_ruby() };
            TreeSitterConfig {
                name: "Ruby",
                language,
                atom_nodes: vec!["string", "heredoc_body", "regex"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![
                    ("{", "}"),
                    ("(", ")"),
                    ("[", "]"),
                    ("|", "|"),
                    ("def", "end"),
                    ("begin", "end"),
                    ("class", "end"),
                ],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/ruby.scm"),
                )
                .unwrap(),
            }
        }
        Rust => {
            let language = unsafe { tree_sitter_rust() };
            TreeSitterConfig {
                name: "Rust",
                language,
                atom_nodes: vec!["char_literal", "string_literal"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("|", "|"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/rust.scm"),
                )
                .unwrap(),
            }
        }
        Scala => {
            let language = unsafe { tree_sitter_scala() };
            TreeSitterConfig {
                name: "Scala",
                language,
                atom_nodes: vec!["string", "template_string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/scala.scm"),
                )
                .unwrap(),
            }
        }
        TypeScript => {
            let language = unsafe { tree_sitter_typescript() };
            TreeSitterConfig {
                name: "TypeScript",
                language,
                atom_nodes: vec!["string", "template_string", "regex"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../vendor/highlights/javascript.scm"),
                        include_str!("../vendor/highlights/typescript.scm"),
                    ),
                )
                .unwrap(),
            }
        }
        Tsx => {
            let language = unsafe { tree_sitter_tsx() };
            TreeSitterConfig {
                name: "TypeScript TSX",
                language,
                atom_nodes: vec!["string", "template_string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../vendor/highlights/javascript.scm"),
                        include_str!("../vendor/highlights/typescript.scm"),
                    ),
                )
                .unwrap(),
            }
        }
        Yaml => {
            let language = unsafe { tree_sitter_yaml() };
            TreeSitterConfig {
                name: "YAML",
                language,
                atom_nodes: (vec![
                    "string_scalar",
                    "double_quote_scalar",
                    "single_quote_scalar",
                ])
                .into_iter()
                .collect(),
                delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]")]),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/yaml.scm"),
                )
                .unwrap(),
            }
        }
        Zig => {
            let language = unsafe { tree_sitter_zig() };
            TreeSitterConfig {
                name: "Zig",
                language,
                atom_nodes: vec!["STRINGLITERALSINGLE", "BUILTINIDENTIFIER"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: (vec![("{", "}"), ("[", "]"), ("(", ")")])
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../vendor/highlights/zig.scm"),
                )
                .unwrap(),
            }
        }
    }
}

/// Parse `src` with tree-sitter.
pub fn parse_to_tree(src: &str, config: &TreeSitterConfig) -> tree_sitter::Tree {
    let mut parser = ts::Parser::new();
    parser
        .set_language(config.language)
        .expect("Incompatible tree-sitter version");

    parser.parse(src, None).unwrap()
}

/// Calculate which tree-sitter node IDs should have which syntax
/// highlighting.
fn tree_highlights(
    tree: &tree_sitter::Tree,
    src: &str,
    config: &TreeSitterConfig,
) -> HighlightedNodeIds {
    let mut keyword_ish_capture_ids = vec![];
    if let Some(idx) = config.highlight_query.capture_index_for_name("keyword") {
        keyword_ish_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("operator") {
        keyword_ish_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("constant") {
        keyword_ish_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("boolean") {
        keyword_ish_capture_ids.push(idx);
    }
    if let Some(idx) = config
        .highlight_query
        .capture_index_for_name("constant.builtin")
    {
        keyword_ish_capture_ids.push(idx);
    }

    let mut string_capture_ids = vec![];
    if let Some(idx) = config.highlight_query.capture_index_for_name("string") {
        string_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("character") {
        string_capture_ids.push(idx);
    }

    let mut type_capture_ids = vec![];
    if let Some(idx) = config.highlight_query.capture_index_for_name("type") {
        type_capture_ids.push(idx);
    }
    if let Some(idx) = config
        .highlight_query
        .capture_index_for_name("type.builtin")
    {
        type_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("label") {
        // Rust uses 'label' for lifetimes, and highglighting
        // lifetimes consistently with types seems reasonable.
        type_capture_ids.push(idx);
    }
    if let Some(idx) = config.highlight_query.capture_index_for_name("tag") {
        type_capture_ids.push(idx);
    }

    let mut qc = ts::QueryCursor::new();
    let q_matches = qc.matches(&config.highlight_query, tree.root_node(), src.as_bytes());

    let mut keyword_ids = HashSet::new();
    let mut string_ids = HashSet::new();
    let mut type_ids = HashSet::new();
    for m in q_matches {
        for c in m.captures {
            if keyword_ish_capture_ids.contains(&c.index) {
                keyword_ids.insert(c.node.id());
            } else if string_capture_ids.contains(&c.index) {
                string_ids.insert(c.node.id());
            } else if type_capture_ids.contains(&c.index) {
                type_ids.insert(c.node.id());
            }
        }
    }

    HighlightedNodeIds {
        keyword_ids,
        string_ids,
        type_ids,
    }
}

pub fn print_tree(src: &str, tree: &tree_sitter::Tree) {
    let mut cursor = tree.walk();
    print_cursor(src, &mut cursor, 0);
}

fn print_cursor(src: &str, cursor: &mut ts::TreeCursor, depth: usize) {
    loop {
        let node = cursor.node();
        node.end_position();

        let formatted_node = format!(
            "{} {} - {}",
            node.kind().replace('\n', "\\n"),
            node.start_position(),
            node.end_position()
        );

        if node.child_count() == 0 {
            let node_src = &src[node.start_byte()..node.end_byte()];
            println!("{}{} {:?}", "  ".repeat(depth), formatted_node, node_src);
        } else {
            println!("{}{}", "  ".repeat(depth), formatted_node,);
        }

        if cursor.goto_first_child() {
            print_cursor(src, cursor, depth + 1);
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
    // Don't return anything on an empty input. Most parsers return a
    // zero-width top-level AST node on empty files, which is
    // confusing and not useful for diffing.
    if src.trim().is_empty() {
        return vec![];
    }

    let tree = parse_to_tree(src, config);
    let highlights = tree_highlights(&tree, src, config);

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    all_syntaxes_from_cursor(arena, src, &nl_pos, &mut cursor, config, &highlights)
}

fn child_tokens<'a>(src: &'a str, cursor: &mut ts::TreeCursor) -> Vec<Option<&'a str>> {
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
    cursor: &mut ts::TreeCursor,
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

pub struct HighlightedNodeIds {
    keyword_ids: HashSet<usize>,
    string_ids: HashSet<usize>,
    type_ids: HashSet<usize>,
}

/// Convert all the tree-sitter nodes at this level to difftastic
/// syntax nodes.
///
/// `cursor` should be pointing at the first tree-sitter node in a level.
fn all_syntaxes_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut ts::TreeCursor,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    loop {
        result.extend(syntax_from_cursor(
            arena, src, nl_pos, cursor, config, highlights,
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
    cursor: &mut ts::TreeCursor,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
) -> Vec<&'a Syntax<'a>> {
    let node = cursor.node();

    if node.is_error() {
        let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        let content = &src[node.start_byte()..node.end_byte()];

        warn!(
            "Tree-sitter syntax error at {:?}: {}",
            position.get(0),
            content
        );
    }

    if config.atom_nodes.contains(node.kind()) {
        // Treat nodes like string literals as atoms, regardless
        // of whether they have children.
        atom_from_cursor(arena, src, nl_pos, cursor, highlights)
    } else if node.child_count() > 0 {
        vec![list_from_cursor(
            arena, src, nl_pos, cursor, config, highlights,
        )]
    } else {
        atom_from_cursor(arena, src, nl_pos, cursor, highlights)
    }
}

/// Convert the tree-sitter node at `cursor` to a difftastic list
/// node.
fn list_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut ts::TreeCursor,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
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
            before_delim.extend(syntax_from_cursor(
                arena, src, nl_pos, cursor, config, highlights,
            ));
        } else if node_i == i {
            inner_open_content = &src[node.start_byte()..node.end_byte()];
            inner_open_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i < j {
            between_delim.extend(syntax_from_cursor(
                arena, src, nl_pos, cursor, config, highlights,
            ));
        } else if node_i == j {
            inner_close_content = &src[node.start_byte()..node.end_byte()];
            inner_close_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i > j {
            after_delim.extend(syntax_from_cursor(
                arena, src, nl_pos, cursor, config, highlights,
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
    cursor: &mut ts::TreeCursor,
    highlights: &HighlightedNodeIds,
) -> Vec<&'a Syntax<'a>> {
    let node = cursor.node();
    let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
    let mut content = &src[node.start_byte()..node.end_byte()];

    // The C and C++ grammars have a '\n' node with the
    // preprocessor. This isn't useful for difftastic, because it's
    // not visible, but leads us to highlight unchanged lines that
    // happen to have preceding newline node.
    if node.kind() == "\n" {
        return vec![];
    }

    // JSX trims whitespace at the beginning and end of text nodes.
    // TODO: match the exact trimming behaviour used in React.
    //
    // https://reactjs.org/blog/2014/02/20/react-v0.9.html#jsx-whitespace
    // https://github.com/facebook/react/pull/480
    if node.kind() == "jsx_text" {
        content = content.trim();
    }

    let highlight = if node.is_extra() || node.kind() == "comment" {
        AtomKind::Comment
    } else if highlights.keyword_ids.contains(&node.id()) {
        AtomKind::Keyword
    } else if highlights.string_ids.contains(&node.id()) {
        AtomKind::String
    } else if highlights.type_ids.contains(&node.id()) {
        AtomKind::Type
    } else {
        AtomKind::Normal
    };

    vec![Syntax::new_atom(arena, position, content, highlight)]
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
        let css_config = from_language(guess::Language::Css);
        parse(&arena, ".foo {}", &css_config);
    }

    #[test]
    fn test_parse_empty_file() {
        let arena = Arena::new();
        let config = from_language(guess::Language::EmacsLisp);
        let res = parse(&arena, "", &config);

        let expected: Vec<&Syntax> = vec![];
        assert_eq!(res, expected);
    }
}
