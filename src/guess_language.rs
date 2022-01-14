//! Guess which programming language a file is written in.
//!
//! This is heavily based on GitHub's
//! [linguist](https://github.com/github/linguist/blob/master/docs/how-linguist-works.md),
//! particularly its
//! [languages.yml](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml).
//!
//! Difftastic does not reuse languages.yml directly, for
//! implementation simplicity and to avoid parsing very large files
//! (e.g. package.lock) that can't be handled in a reasonable time
//! yet.

use lazy_static::lazy_static;
use regex::Regex;
use std::{borrow::Borrow, ffi::OsStr, path::Path};

/// Languages supported by difftastic. Each language here has a
/// corresponding tree-sitter parser.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
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

pub fn guess(path: &Path, src: &str) -> Option<Language> {
    if let Some(lang) = from_shebang(src) {
        return Some(lang);
    }
    if let Some(lang) = from_name(path) {
        return Some(lang);
    }

    match path.extension() {
        Some(extension) => from_extension(extension),
        None => None,
    }
}

/// Try to guess the language based on a shebang present in the source.
fn from_shebang(src: &str) -> Option<Language> {
    lazy_static! {
        static ref RE: Regex = Regex::new(r"#!(?:/usr/bin/env )?([^ ]+)").unwrap();
    }
    if let Some(first_line) = src.lines().next() {
        if let Some(cap) = RE.captures(first_line) {
            let interpreter_path = Path::new(&cap[1]);
            if let Some(name) = interpreter_path.file_name() {
                match name.to_string_lossy().borrow() {
                    "bash" | "dash" | "sh" | "rc" | "zsh" => return Some(Bash),
                    "tcc" => return Some(C),
                    "lisp" | "sbc" | "ccl" | "clisp" | "ecl" => return Some(CommonLisp),
                    "elixir" => return Some(Elixir),
                    "runghc" | "runhaskell" | "runhugs" => return Some(Haskell),
                    "chakra" | "d8" | "gjs" | "js" | "node" | "nodejs" | "qjs" | "rhino" | "v8"
                    | "v8-shell" => return Some(JavaScript),
                    "ocaml" | "ocamlrun" | "ocamlscript" => return Some(OCaml),
                    "python" | "python2" | "python3" => return Some(Python),
                    "ruby" | "macruby" | "rake" | "jruby" | "rbx" => return Some(Ruby),
                    "deno" | "ts-node" => return Some(TypeScript),
                    _ => {}
                }
            }
        };
    }

    None
}

fn from_name(path: &Path) -> Option<Language> {
    match path.file_name() {
        Some(name) => match name.to_string_lossy().borrow() {
            ".bashrc" | ".bash_profile" | ".profile" => Some(Bash),
            ".emacs" | "_emacs" | "Cask" => Some(EmacsLisp),
            "TARGETS" | "BUCK" | "DEPS" => Some(Python),
            "Gemfile" | "Rakefile" => Some(Ruby),
            _ => None,
        },
        None => None,
    }
}

fn from_extension(extension: &OsStr) -> Option<Language> {
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
        "lisp" | "lsp" | "asd" => Some(CommonLisp),
        "cs" => Some(CSharp),
        "css" => Some(Css),
        "el" => Some(EmacsLisp),
        "ex" | "exs" => Some(Elixir),
        "go" => Some(Go),
        "hs" => Some(Haskell),
        "java" => Some(Java),
        "cjs" | "js" | "mjs" => Some(JavaScript),
        "jsx" => Some(Jsx),
        "json" => Some(Json),
        "ml" => Some(OCaml),
        "mli" => Some(OCamlInterface),
        "py" | "py3" | "pyi" | "bzl" => Some(Python),
        "rb" | "builder" | "spec" | "rake" => Some(Ruby),
        "rs" => Some(Rust),
        "ts" => Some(TypeScript),
        "tsx" => Some(Tsx),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn test_guess_by_extension() {
        let path = Path::new("foo.el");
        assert_eq!(guess(path, ""), Some(EmacsLisp));
    }

    #[test]
    fn test_guess_by_whole_name() {
        let path = Path::new("foo/.bashrc");
        assert_eq!(guess(path, ""), Some(Bash));
    }

    #[test]
    fn test_guess_by_shebang() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "#!/bin/bash"), Some(Bash));
    }

    #[test]
    fn test_guess_by_env_shebang() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "#!/usr/bin/env python"), Some(Python));
    }
}
