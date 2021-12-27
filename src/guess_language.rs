//! Guess which programming language a file is written in.

use std::{borrow::Borrow, ffi::OsStr, path::Path};

/// Languages supported by difftastic. Each language here has a
/// corresponding tree-sitter parser.
pub enum Language {
    Bash,
    C,
    Clojure,
    CommonLisp,
    CPlusPlus,
    CSharp,
    Css,
    Elixir,
    EmacsLisp,
    Go,
    Haskell,
    Java,
    JavaScript,
    Json,
    Jsx,
    OCaml,
    OCamlInterface,
    Python,
    Ruby,
    Rust,
    Tsx,
    TypeScript,
}

use Language::*;

pub fn guess(path: &Path) -> Option<Language> {
    match path.extension() {
        Some(extension) => from_extension(extension),
        None => None,
    }
}

fn from_extension(extension: &OsStr) -> Option<Language> {
    // TODO: find a nice way to extract name and extension information
    // from the package.json in these parsers.
    // TODO: consider using
    // https://github.com/github/linguist/blob/master/lib/linguist/languages.yml
    // as a source of extensions.
    // TODO: support files without extensions, such as .bashrc.
    match extension.to_string_lossy().borrow() {
        "bash" | "sh" => Some(Bash),
        "c" => Some(C),
        // Treat .h as C++ rather than C. This is an arbitrary choice,
        // but C++ is more widely used than C according to
        // https://madnight.github.io/githut/
        //
        // TODO: allow users to override the association between
        // extensions and parses.
        "cc" | "cpp" | "h" | "hh" | "hpp" | "cxx" => Some(CPlusPlus),
        "bb" | "boot" | "clj" | "cljc" | "clje" | "cljs" | "cljx" | "edn" | "joke" | "joker" => {
            Some(Clojure)
        }
        "cs" => Some(CSharp),
        "css" => Some(Css),
        "el" | ".emacs" => Some(EmacsLisp),
        "ex" | "exs" => Some(Elixir),
        "go" => Some(Go),
        "hs" => Some(Haskell),
        "java" => Some(Java),
        "cjs" | "js" | "mjs" => Some(JavaScript),
        "jsx" => Some(Jsx),
        "json" => Some(Json),
        "lisp" | "lsp" | "asd" => Some(CommonLisp),
        "ml" => Some(OCaml),
        "mli" => Some(OCamlInterface),
        "py" | "py3" | "pyi" | "TARGETS" | "BUCK" | "bzl" => Some(Python),
        "rb" | "spec" | "rake" => Some(Ruby),
        "rs" => Some(Rust),
        "ts" => Some(TypeScript),
        "tsx" => Some(Tsx),
        _ => None,
    }
}
