//! Load and configure parsers written with tree-sitter.

use std::collections::HashMap;
use std::collections::HashSet;

use crate::options::DiffOptions;
use crate::parse::guess_language as guess;
use tree_sitter as ts;
use typed_arena::Arena;

use crate::{
    lines::NewlinePositions,
    parse::syntax::{AtomKind, Syntax},
};

use super::syntax;
use super::syntax::MatchedPos;

/// A language may contain certain nodes that are in other languages
/// and should be parsed as such (e.g. HTML <script> nodes containing
/// JavaScript). This contains how to identify such nodes, and what
/// languages we should parse them as.
///
/// Note that we don't support sub-languages more than one layer deep.
pub struct TreeSitterSubLanguage {
    /// How to identify a node. The query must contain exactly one
    /// capture group (the name is arbitrary).
    query: ts::Query,

    /// What language parser to use (refers in turn to a TreeSitterConfig).
    parse_as: guess::Language,
}

/// Configuration for a tree-sitter parser.
pub struct TreeSitterConfig {
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

    /// Sub-languages in use, if any.
    sub_languages: Vec<TreeSitterSubLanguage>,
}

extern "C" {
    fn tree_sitter_ada() -> ts::Language;
    fn tree_sitter_bash() -> ts::Language;
    fn tree_sitter_c() -> ts::Language;
    fn tree_sitter_c_sharp() -> ts::Language;
    fn tree_sitter_clojure() -> ts::Language;
    fn tree_sitter_cmake() -> ts::Language;
    fn tree_sitter_cpp() -> ts::Language;
    fn tree_sitter_commonlisp() -> ts::Language;
    fn tree_sitter_css() -> ts::Language;
    fn tree_sitter_dart() -> ts::Language;
    fn tree_sitter_elisp() -> ts::Language;
    fn tree_sitter_elixir() -> ts::Language;
    fn tree_sitter_elm() -> ts::Language;
    fn tree_sitter_elvish() -> ts::Language;
    fn tree_sitter_erlang() -> ts::Language;
    fn tree_sitter_gleam() -> ts::Language;
    fn tree_sitter_go() -> ts::Language;
    fn tree_sitter_hare() -> ts::Language;
    fn tree_sitter_hack() -> ts::Language;
    fn tree_sitter_haskell() -> ts::Language;
    fn tree_sitter_hcl() -> ts::Language;
    fn tree_sitter_html() -> ts::Language;
    fn tree_sitter_janet_simple() -> ts::Language;
    fn tree_sitter_java() -> ts::Language;
    fn tree_sitter_javascript() -> ts::Language;
    fn tree_sitter_json() -> ts::Language;
    fn tree_sitter_julia() -> ts::Language;
    fn tree_sitter_kotlin() -> ts::Language;
    fn tree_sitter_lua() -> ts::Language;
    fn tree_sitter_make() -> ts::Language;
    fn tree_sitter_newick() -> ts::Language;
    fn tree_sitter_nix() -> ts::Language;
    fn tree_sitter_ocaml() -> ts::Language;
    fn tree_sitter_ocaml_interface() -> ts::Language;
    fn tree_sitter_pascal() -> ts::Language;
    fn tree_sitter_php() -> ts::Language;
    fn tree_sitter_perl() -> ts::Language;
    fn tree_sitter_python() -> ts::Language;
    fn tree_sitter_qmljs() -> ts::Language;
    fn tree_sitter_r() -> ts::Language;
    fn tree_sitter_racket() -> ts::Language;
    fn tree_sitter_ruby() -> ts::Language;
    fn tree_sitter_rust() -> ts::Language;
    fn tree_sitter_scala() -> ts::Language;
    fn tree_sitter_sql() -> ts::Language;
    fn tree_sitter_swift() -> ts::Language;
    fn tree_sitter_toml() -> ts::Language;
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
        Ada => {
            let language = unsafe { tree_sitter_ada() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_literal", "character_literal"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/ada.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Bash => {
            let language = unsafe { tree_sitter_bash() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "raw_string", "heredoc_body"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/bash.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        C => {
            let language = unsafe { tree_sitter_c() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_literal", "char_literal"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/c.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        CPlusPlus => {
            let language = unsafe { tree_sitter_cpp() };
            TreeSitterConfig {
                language,
                // The C++ grammar extends the C grammar, so the node
                // names are generally the same.
                atom_nodes: vec!["string_literal", "char_literal"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../../vendored_parsers/highlights/c.scm"),
                        include_str!("../../vendored_parsers/highlights/cpp.scm")
                    ),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Clojure => {
            let language = unsafe { tree_sitter_clojure() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["kwd_lit"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/clojure.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        CMake => {
            let language = unsafe { tree_sitter_cmake() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["argument"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")].into_iter().collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/cmake.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        CommonLisp => {
            let language = unsafe { tree_sitter_commonlisp() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["str_lit", "char_lit"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")],
                highlight_query: ts::Query::new(language, "").unwrap(),
                sub_languages: vec![],
            }
        }
        CSharp => {
            let language = unsafe { tree_sitter_c_sharp() };
            TreeSitterConfig {
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
                    include_str!("../../vendored_parsers/highlights/c-sharp.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Css => {
            let language = unsafe { tree_sitter_css() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["integer_value", "float_value", "color_value"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/css.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Dart => {
            let language = unsafe { tree_sitter_dart() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_literal", "script_tag"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/dart.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        EmacsLisp => {
            let language = unsafe { tree_sitter_elisp() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/elisp.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Elixir => {
            let language = unsafe { tree_sitter_elixir() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "heredoc"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("do", "end")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/elixir.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Elm => {
            let language = unsafe { tree_sitter_elm() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_constant_expr"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/elm.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Elvish => {
            let language = unsafe { tree_sitter_elvish() };
            TreeSitterConfig {
                language,
                atom_nodes: [].into(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("|", "|")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/elvish.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Erlang => {
            let language = unsafe { tree_sitter_erlang() };
            TreeSitterConfig {
                language,
                atom_nodes: [].into(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/erlang.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Gleam => {
            let language = unsafe { tree_sitter_gleam() };
            TreeSitterConfig {
                language,
                atom_nodes: ["string"].into(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/gleam.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Go => {
            let language = unsafe { tree_sitter_go() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["interpreted_string_literal", "raw_string_literal"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]"), ("(", ")")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/go.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Hack => {
            let language = unsafe { tree_sitter_hack() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["prefixed_string", "heredoc"].into_iter().collect(),
                delimiter_tokens: vec![("[", "]"), ("(", ")"), ("<", ">"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/hack.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Hare => {
            let language = unsafe { tree_sitter_hare() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_constant", "rune_constant"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("[", "]"), ("(", ")"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/hare.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Haskell => {
            let language = unsafe { tree_sitter_haskell() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("[", "]"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/haskell.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Hcl => {
            let language = unsafe { tree_sitter_hcl() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_lit", "heredoc_template"].into_iter().collect(),
                delimiter_tokens: vec![
                    ("[", "]"),
                    ("(", ")"),
                    ("{", "}"),
                    ("%{", "}"),
                    ("%{~", "~}"),
                    ("${", "}"),
                ],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/hcl.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Html => {
            let language = unsafe { tree_sitter_html() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![
                    "doctype",
                    "quoted_attribute_value",
                    "comment",
                    "raw_text",
                    "tag_name",
                    "text",
                ]
                .into_iter()
                .collect(),
                delimiter_tokens: vec![("<", ">"), ("<!", ">"), ("<!--", "-->")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/html.scm"),
                )
                .unwrap(),
                sub_languages: vec![
                    TreeSitterSubLanguage {
                        query: ts::Query::new(language, "(style_element (raw_text) @contents)")
                            .unwrap(),
                        parse_as: Css,
                    },
                    TreeSitterSubLanguage {
                        query: ts::Query::new(language, "(script_element (raw_text) @contents)")
                            .unwrap(),
                        parse_as: JavaScript,
                    },
                ],
            }
        }
        Janet => {
            let language = unsafe { tree_sitter_janet_simple() };
            TreeSitterConfig {
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
                    include_str!("../../vendored_parsers/highlights/janet_simple.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Java => {
            let language = unsafe { tree_sitter_java() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_literal"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/java.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        JavaScript | Jsx => {
            let language = unsafe { tree_sitter_javascript() };
            TreeSitterConfig {
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
                    include_str!("../../vendored_parsers/highlights/javascript.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Json => {
            let language = unsafe { tree_sitter_json() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/json.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Julia => {
            let language = unsafe { tree_sitter_julia() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![
                    "string_literal",
                    "prefixed_string_literal",
                    "command_literal",
                    "character_literal",
                ]
                .into_iter()
                .collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]"), ("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/julia.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Kotlin => {
            let language = unsafe { tree_sitter_kotlin() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["line_string_literal", "character_literal"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]"), ("<", ">")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/kotlin.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Lua => {
            let language = unsafe { tree_sitter_lua() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")]
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/lua.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Make => {
            let language = unsafe { tree_sitter_make() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["shell_text", "text"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")].into_iter().collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/make.scm"),
                )
                .unwrap(),
                sub_languages: vec![TreeSitterSubLanguage {
                    query: ts::Query::new(language, "(shell_function (shell_command) @contents)")
                        .unwrap(),
                    parse_as: Bash,
                }],
            }
        }
        Newick => {
            let language = unsafe { tree_sitter_newick() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/newick.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Nix => {
            let language = unsafe { tree_sitter_nix() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string_expression", "indented_string_expression"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]")].into_iter().collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/nix.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        OCaml => {
            let language = unsafe { tree_sitter_ocaml() };
            TreeSitterConfig {
                language,
                atom_nodes: OCAML_ATOM_NODES.iter().copied().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/ocaml.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        OCamlInterface => {
            let language = unsafe { tree_sitter_ocaml_interface() };
            TreeSitterConfig {
                language,
                atom_nodes: OCAML_ATOM_NODES.iter().copied().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/ocaml.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Pascal => {
            let language = unsafe { tree_sitter_pascal() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/pascal.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Perl => {
            let language = unsafe { tree_sitter_perl() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![
                    "string_single_quoted",
                    "string_double_quoted",
                    "comments",
                    "command_qx_quoted",
                    "patter_matcher_m",
                    "regex_pattern_qr",
                    "transliteration_tr_or_y",
                    "substitution_pattern_s",
                ]
                .into_iter()
                .collect(),
                delimiter_tokens: vec![("(", ")"), ("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/perl.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Php => {
            let language = unsafe { tree_sitter_php() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "encapsed_string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/php.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Python => {
            let language = unsafe { tree_sitter_python() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")"), ("[", "]"), ("{", "}")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/python.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Qml => {
            let language = unsafe { tree_sitter_qmljs() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "template_string", "regex"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../../vendored_parsers/highlights/javascript.scm"),
                        include_str!("../../vendored_parsers/highlights/typescript.scm"),
                        include_str!("../../vendored_parsers/highlights/qmljs.scm"),
                    ),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        R => {
            let language = unsafe { tree_sitter_r() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "special"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/r.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Racket => {
            let language = unsafe { tree_sitter_racket() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "byte_string", "regex", "here_string"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/racket.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Ruby => {
            let language = unsafe { tree_sitter_ruby() };
            TreeSitterConfig {
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
                    include_str!("../../vendored_parsers/highlights/ruby.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Rust => {
            let language = unsafe { tree_sitter_rust() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["char_literal", "string_literal"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("|", "|"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/rust.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Scala => {
            let language = unsafe { tree_sitter_scala() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "template_string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/scala.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Sql => {
            let language = unsafe { tree_sitter_sql() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "identifier"].into_iter().collect(),
                delimiter_tokens: vec![("(", ")")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/sql.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Swift => {
            let language = unsafe { tree_sitter_swift() };
            TreeSitterConfig {
                language,
                atom_nodes: ["line_string_literal"].into(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/swift.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Toml => {
            let language = unsafe { tree_sitter_toml() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "quoted_key"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("[", "]")],
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/toml.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Tsx => {
            let language = unsafe { tree_sitter_tsx() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "template_string"].into_iter().collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../../vendored_parsers/highlights/javascript.scm"),
                        include_str!("../../vendored_parsers/highlights/typescript.scm"),
                    ),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        TypeScript => {
            let language = unsafe { tree_sitter_typescript() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["string", "template_string", "regex", "predefined_type"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: vec![("{", "}"), ("(", ")"), ("[", "]"), ("<", ">")],
                highlight_query: ts::Query::new(
                    language,
                    concat!(
                        include_str!("../../vendored_parsers/highlights/javascript.scm"),
                        include_str!("../../vendored_parsers/highlights/typescript.scm"),
                    ),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Yaml => {
            let language = unsafe { tree_sitter_yaml() };
            TreeSitterConfig {
                language,
                atom_nodes: vec![
                    "string_scalar",
                    "double_quote_scalar",
                    "single_quote_scalar",
                    "block_scalar",
                ]
                .into_iter()
                .collect(),
                delimiter_tokens: (vec![("{", "}"), ("(", ")"), ("[", "]")]),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/yaml.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
        Zig => {
            let language = unsafe { tree_sitter_zig() };
            TreeSitterConfig {
                language,
                atom_nodes: vec!["STRINGLITERALSINGLE", "BUILTINIDENTIFIER"]
                    .into_iter()
                    .collect(),
                delimiter_tokens: (vec![("{", "}"), ("[", "]"), ("(", ")")])
                    .into_iter()
                    .collect(),
                highlight_query: ts::Query::new(
                    language,
                    include_str!("../../vendored_parsers/highlights/zig.scm"),
                )
                .unwrap(),
                sub_languages: vec![],
            }
        }
    }
}

/// Parse `src` with tree-sitter.
pub fn to_tree(src: &str, config: &TreeSitterConfig) -> tree_sitter::Tree {
    let mut parser = ts::Parser::new();
    parser
        .set_language(config.language)
        .expect("Incompatible tree-sitter version");

    parser.parse(src, None).unwrap()
}

#[derive(Debug)]
pub struct ExceededByteLimit(pub usize);

pub fn to_tree_with_limit(
    diff_options: &DiffOptions,
    config: &TreeSitterConfig,
    lhs_src: &str,
    rhs_src: &str,
) -> Result<(tree_sitter::Tree, tree_sitter::Tree), ExceededByteLimit> {
    if lhs_src.len() > diff_options.byte_limit || rhs_src.len() > diff_options.byte_limit {
        let num_bytes = std::cmp::max(lhs_src.len(), rhs_src.len());
        return Err(ExceededByteLimit(num_bytes));
    }

    Ok((to_tree(lhs_src, config), to_tree(rhs_src, config)))
}

/// Find any nodes that can be parsed as other languages (e.g. JavaScript embedded in HTML),
/// and return a map of their node IDs mapped to parsed trees. Every time we see such a node,
/// we will ignore it and recurse into the root node of the given tree instead.
pub fn parse_subtrees(
    src: &str,
    config: &TreeSitterConfig,
    tree: &tree_sitter::Tree,
) -> HashMap<usize, (tree_sitter::Tree, TreeSitterConfig, HighlightedNodeIds)> {
    let mut subtrees = HashMap::new();

    for language in &config.sub_languages {
        let mut query_cursor = tree_sitter::QueryCursor::new();
        for m in query_cursor.matches(&language.query, tree.root_node(), src.as_bytes()) {
            let node = m.nodes_for_capture_index(0).next().unwrap();
            if node.byte_range().is_empty() {
                continue;
            }

            let subconfig = from_language(language.parse_as);
            let mut parser = ts::Parser::new();
            parser
                .set_language(subconfig.language)
                .expect("Incompatible tree-sitter version");
            parser
                .set_included_ranges(&[node.range()])
                .expect("Incompatible tree-sitter version");

            let tree = parser.parse(src, None).unwrap();
            let sub_highlights = tree_highlights(&tree, src, &subconfig);

            subtrees.insert(node.id(), (tree, subconfig, sub_highlights));
        }
    }

    subtrees
}

/// Calculate which tree-sitter node IDs should have which syntax
/// highlighting.
fn tree_highlights(
    tree: &tree_sitter::Tree,
    src: &str,
    config: &TreeSitterConfig,
) -> HighlightedNodeIds {
    let mut keyword_ish_capture_ids: Vec<u32> = vec![];
    let mut string_capture_ids = vec![];
    let mut type_capture_ids = vec![];
    let mut comment_capture_ids = vec![];

    // Query names are often written with namespacing, so
    // highlights.scm might contain @constant or the more specific
    // @constant.builtin.
    //
    // We support e.g. arbitrary @constant.foo so we get the benefit
    // of all the relevant highlighting queries.
    let cn = config.highlight_query.capture_names();
    for (idx, name) in cn.iter().enumerate() {
        if name == "type"
            || name.starts_with("type.")
            || name.starts_with("storage.type.")
            || name.starts_with("keyword.type.")
            || name == "tag"
        {
            // TODO: this doesn't capture (type_ref) in Elm as that
            // applies to the parent node.
            type_capture_ids.push(idx as u32);
        } else if name == "keyword"
            || name.starts_with("keyword.")
            || name == "constant"
            || name.starts_with("constant.")
            || name == "operator"
            || name == "repeat"
            || name == "conditional"
            || name == "boolean"
            || name == "exception"
            || name == "include"
        {
            keyword_ish_capture_ids.push(idx as u32);
        }

        if name == "string"
            || name.starts_with("string.")
            || name == "character"
            || name.starts_with("character.")
        {
            string_capture_ids.push(idx as u32);
        }

        // Rust uses 'label' for lifetimes, and highglighting
        // lifetimes consistently with types seems reasonable.
        if name == "label" {
            type_capture_ids.push(idx as u32);
        }

        if name == "comment" {
            comment_capture_ids.push(idx as u32);
        }
    }

    let mut qc = ts::QueryCursor::new();
    let q_matches = qc.matches(&config.highlight_query, tree.root_node(), src.as_bytes());

    let mut comment_ids = HashSet::new();
    let mut keyword_ids = HashSet::new();
    let mut string_ids = HashSet::new();
    let mut type_ids = HashSet::new();
    for m in q_matches {
        for c in m.captures {
            if comment_capture_ids.contains(&c.index) {
                comment_ids.insert(c.node.id());
            } else if keyword_ish_capture_ids.contains(&c.index) {
                keyword_ids.insert(c.node.id());
            } else if string_capture_ids.contains(&c.index) {
                string_ids.insert(c.node.id());
            } else if type_capture_ids.contains(&c.index) {
                type_ids.insert(c.node.id());
            }
        }
    }

    HighlightedNodeIds {
        comment_ids,
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

pub fn comment_positions(
    tree: &tree_sitter::Tree,
    src: &str,
    config: &TreeSitterConfig,
) -> Vec<MatchedPos> {
    let arena = Arena::new();
    let ignore_comments = false;

    let (nodes, _err_count) = to_syntax(tree, src, &arena, config, ignore_comments);
    let positions = syntax::comment_positions(&nodes);

    positions
        .into_iter()
        .map(|pos| MatchedPos {
            kind: syntax::MatchKind::Ignored {
                highlight: syntax::TokenKind::Atom(AtomKind::Comment),
            },
            pos,
        })
        .collect()
}

#[derive(Debug)]
pub struct ExceededParseErrorLimit(pub usize);

pub fn to_syntax_with_limit<'a>(
    lhs_src: &str,
    rhs_src: &str,
    lhs_tree: &tree_sitter::Tree,
    rhs_tree: &tree_sitter::Tree,
    arena: &'a Arena<Syntax<'a>>,
    config: &TreeSitterConfig,
    diff_options: &DiffOptions,
) -> Result<(Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>), ExceededParseErrorLimit> {
    let (lhs_nodes, lhs_error_count) = to_syntax(
        lhs_tree,
        lhs_src,
        arena,
        config,
        diff_options.ignore_comments,
    );
    let (rhs_nodes, rhs_error_count) = to_syntax(
        rhs_tree,
        rhs_src,
        arena,
        config,
        diff_options.ignore_comments,
    );
    syntax::init_all_info(&lhs_nodes, &rhs_nodes);

    let error_count = lhs_error_count + rhs_error_count;
    if error_count > diff_options.parse_error_limit {
        return Err(ExceededParseErrorLimit(error_count));
    }

    Ok((lhs_nodes, rhs_nodes))
}

pub fn to_syntax<'a>(
    tree: &tree_sitter::Tree,
    src: &str,
    arena: &'a Arena<Syntax<'a>>,
    config: &TreeSitterConfig,
    ignore_comments: bool,
) -> (Vec<&'a Syntax<'a>>, usize) {
    // Don't return anything on an empty input. Most parsers return a
    // zero-width top-level AST node on empty files, which is
    // confusing and not useful for diffing.
    if src.trim().is_empty() {
        return (vec![], 0);
    }

    let highlights = tree_highlights(tree, src, config);

    // Parse sub-languages, if any, which will be used both for
    // highlighting and for more precise Syntax nodes where applicable.
    let subtrees = parse_subtrees(src, config, tree);

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    let mut error_count: usize = 0;
    if cursor.node().is_error() {
        error_count += 1;
    }

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    let nodes = all_syntaxes_from_cursor(
        arena,
        src,
        &nl_pos,
        &mut cursor,
        &mut error_count,
        config,
        &highlights,
        &subtrees,
        ignore_comments,
    );
    (nodes, error_count)
}

/// Parse `src` with tree-sitter and convert to difftastic Syntax.
pub fn parse<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    config: &TreeSitterConfig,
    ignore_comments: bool,
) -> Vec<&'a Syntax<'a>> {
    let tree = to_tree(src, config);
    let (nodes, _err_count) = to_syntax(&tree, src, arena, config, ignore_comments);
    nodes
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
    comment_ids: HashSet<usize>,
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
    error_count: &mut usize,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
    subtrees: &HashMap<usize, (tree_sitter::Tree, TreeSitterConfig, HighlightedNodeIds)>,
    ignore_comments: bool,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    loop {
        result.extend(syntax_from_cursor(
            arena,
            src,
            nl_pos,
            cursor,
            error_count,
            config,
            highlights,
            subtrees,
            ignore_comments,
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
    error_count: &mut usize,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
    subtrees: &HashMap<usize, (tree_sitter::Tree, TreeSitterConfig, HighlightedNodeIds)>,
    ignore_comments: bool,
) -> Option<&'a Syntax<'a>> {
    let node = cursor.node();

    // See if we should go into a sub-document instead (e.g. embedded JavaScript in HTML).
    if let Some((subtree, subconfig, subhighlights)) = subtrees.get(&node.id()) {
        let mut sub_cursor = subtree.walk();
        return syntax_from_cursor(
            arena,
            src,
            nl_pos,
            &mut sub_cursor,
            error_count,
            subconfig,
            subhighlights,
            &HashMap::new(),
            ignore_comments,
        );
    }

    if node.is_error() {
        *error_count += 1;

        // Treat error nodes as atoms, even if they have children.
        atom_from_cursor(arena, src, nl_pos, cursor, highlights, ignore_comments)
    } else if config.atom_nodes.contains(node.kind()) {
        // Treat nodes like string literals as atoms, regardless
        // of whether they have children.
        atom_from_cursor(arena, src, nl_pos, cursor, highlights, ignore_comments)
    } else if node.child_count() > 0 {
        Some(list_from_cursor(
            arena,
            src,
            nl_pos,
            cursor,
            error_count,
            config,
            highlights,
            subtrees,
            ignore_comments,
        ))
    } else {
        atom_from_cursor(arena, src, nl_pos, cursor, highlights, ignore_comments)
    }
}

/// Convert the tree-sitter node at `cursor` to a difftastic list
/// node.
fn list_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut ts::TreeCursor,
    error_count: &mut usize,
    config: &TreeSitterConfig,
    highlights: &HighlightedNodeIds,
    subtrees: &HashMap<usize, (tree_sitter::Tree, TreeSitterConfig, HighlightedNodeIds)>,
    ignore_comments: bool,
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
                arena,
                src,
                nl_pos,
                cursor,
                error_count,
                config,
                highlights,
                subtrees,
                ignore_comments,
            ));
        } else if node_i == i {
            inner_open_content = &src[node.start_byte()..node.end_byte()];
            inner_open_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i < j {
            between_delim.extend(syntax_from_cursor(
                arena,
                src,
                nl_pos,
                cursor,
                error_count,
                config,
                highlights,
                subtrees,
                ignore_comments,
            ));
        } else if node_i == j {
            inner_close_content = &src[node.start_byte()..node.end_byte()];
            inner_close_position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
        } else if node_i > j {
            after_delim.extend(syntax_from_cursor(
                arena,
                src,
                nl_pos,
                cursor,
                error_count,
                config,
                highlights,
                subtrees,
                ignore_comments,
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
    ignore_comments: bool,
) -> Option<&'a Syntax<'a>> {
    let node = cursor.node();
    let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
    let mut content = &src[node.start_byte()..node.end_byte()];

    // The C and C++ grammars have a '\n' node with the
    // preprocessor. This isn't useful for difftastic, because it's
    // not visible, but leads us to highlight unchanged lines that
    // happen to have preceding newline node.
    if node.kind() == "\n" {
        return None;
    }

    // JSX trims whitespace at the beginning and end of text nodes.
    // TODO: match the exact trimming behaviour used in React.
    //
    // https://reactjs.org/blog/2014/02/20/react-v0.9.html#jsx-whitespace
    // https://github.com/facebook/react/pull/480
    if node.kind() == "jsx_text" {
        content = content.trim();
    }

    let highlight = if node.is_error() {
        AtomKind::TreeSitterError
    } else if node.is_extra()
        || node.kind() == "comment"
        || highlights.comment_ids.contains(&node.id())
    {
        // 'extra' nodes in tree-sitter are comments. Most parsers use
        // 'comment' as their comment node name, but if they don't we
        // can still detect comments by looking at their syntax
        // highlighting.

        if ignore_comments {
            return None;
        }

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

    Some(Syntax::new_atom(arena, position, content, highlight))
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
        parse(&arena, ".foo {}", &css_config, false);
    }

    #[test]
    fn test_parse_empty_file() {
        let arena = Arena::new();
        let config = from_language(guess::Language::EmacsLisp);
        let res = parse(&arena, "", &config, false);

        let expected: Vec<&Syntax> = vec![];
        assert_eq!(res, expected);
    }

    /// Test that HTML with CSS inside it is parsed as such, instead of
    /// being left as a single atom.
    #[test]
    fn test_subtrees() {
        let arena = Arena::new();
        let config = from_language(guess::Language::Html);
        let res = parse(&arena, "<style>.a { color: red; }</style>", &config, false);

        match res[0] {
            Syntax::List {
                info: _,
                open_position: _,
                open_content: _,
                children,
                close_position: _,
                close_content: _,
                num_descendants: _,
            } => {
                // <style>, content, </style>.
                assert_eq!(children.len(), 3);
                match children[1] {
                    Syntax::Atom {
                        info: _,
                        position: _,
                        content: _,
                        kind: _,
                    } => {
                        panic!("Style contents is parsed as a single atom");
                    }
                    _ => {
                        // A list is what we want; it shows that the CSS was parsed
                        // into multiple tokens, so we do not check it further.
                    }
                }
            }
            _ => {
                panic!("Top level isn't a list");
            }
        };
    }
}
