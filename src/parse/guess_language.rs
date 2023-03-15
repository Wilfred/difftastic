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
    Ada,
    Bash,
    C,
    Clojure,
    CMake,
    CommonLisp,
    CPlusPlus,
    CSharp,
    Css,
    Dart,
    Elixir,
    Elm,
    Elvish,
    EmacsLisp,
    Erlang,
    Gleam,
    Go,
    Hack,
    Hare,
    Haskell,
    Hcl,
    Html,
    Janet,
    Java,
    JavaScript,
    Json,
    Julia,
    Jsx,
    Kotlin,
    Lua,
    Make,
    Newick,
    Nix,
    OCaml,
    OCamlInterface,
    Pascal,
    Perl,
    Php,
    Python,
    Qml,
    R,
    Racket,
    Ruby,
    Rust,
    Scala,
    Sql,
    Swift,
    Toml,
    Tsx,
    TypeScript,
    Yaml,
    Zig,
}

/// The language name shown to the user.
pub fn language_name(language: Language) -> &'static str {
    match language {
        Ada => "Ada",
        Bash => "Bash",
        C => "C",
        Clojure => "Clojure",
        CMake => "CMake",
        CommonLisp => "Common Lisp",
        CPlusPlus => "C++",
        CSharp => "C#",
        Css => "CSS",
        Dart => "Dart",
        Elixir => "Elixir",
        Elm => "Elm",
        Elvish => "Elvish",
        EmacsLisp => "Emacs Lisp",
        Erlang => "Erlang",
        Gleam => "Gleam",
        Go => "Go",
        Hack => "Hack",
        Hare => "Hare",
        Haskell => "Haskell",
        Hcl => "HCL",
        Html => "HTML",
        Janet => "Janet",
        Java => "Java",
        JavaScript => "JavaScript",
        Json => "JSON",
        Julia => "Julia",
        Jsx => "JavaScript JSX",
        Kotlin => "Kotlin",
        Lua => "Lua",
        Make => "Make",
        Newick => "Newick",
        Nix => "Nix",
        OCaml => "OCaml",
        OCamlInterface => "OCaml Interface",
        Pascal => "Pascal",
        Perl => "Perl",
        Php => "PHP",
        Python => "Python",
        Qml => "QML",
        R => "R",
        Racket => "Racket",
        Ruby => "Ruby",
        Rust => "Rust",
        Scala => "Scala",
        Sql => "SQL",
        Swift => "Swift",
        Toml => "TOML",
        Tsx => "TypeScript TSX",
        TypeScript => "TypeScript",
        Yaml => "YAML",
        Zig => "Zig",
    }
}

use Language::*;

/// Which file extensions are associated with which languages.
pub const LANG_EXTENSIONS: &[(Language, &[&str])] = &[
    (Ada, &["ada", "adb", "ads"]),
    (
        Bash,
        &[
            "sh", "bash", "bats", "cgi", "command", "env", "fcgi", "ksh", "sh.in", "tmux", "tool",
            "zsh",
        ],
    ),
    (C, &["c"]),
    (
        Clojure,
        &[
            "bb", "boot", "clj", "cljc", "clje", "cljs", "cljx", "edn", "joke", "joker",
        ],
    ),
    (CMake, &["cmake", "cmake.in"]),
    (CommonLisp, &["lisp", "lsp", "asd"]),
    // Treat .h as C++ rather than C. This is an arbitrary choice, but
    // C++ is more widely used than C according to
    // https://madnight.github.io/githut/
    (CPlusPlus, &["cc", "cpp", "h", "hh", "hpp", "ino", "cxx"]),
    (CSharp, &["cs"]),
    (Css, &["css"]),
    (Dart, &["dart"]),
    (Elm, &["elm"]),
    (EmacsLisp, &["el"]),
    (Elixir, &["ex", "exs"]),
    (Elvish, &["elv"]),
    // TODO: confirm that we support multiple extensions for files
    // like foo.app.src.
    (
        Erlang,
        &["erl", "app.src", "es", "escript", "hrl", "xrl", "yrl"],
    ),
    (Gleam, &["gleam"]),
    (Go, &["go"]),
    (Hack, &["hack", "hck", "hhi"]),
    (Hare, &["ha"]),
    (Haskell, &["hs"]),
    (Hcl, &["hcl", "nomad", "tf", "tfvars", "workflow"]),
    (Html, &["html", "htm", "xhtml"]),
    (Janet, &["janet", "jdn"]),
    (Java, &["java"]),
    (JavaScript, &["cjs", "js", "mjs"]),
    (
        Json,
        &[
            "json",
            "avsc",
            "geojson",
            "gltf",
            "har",
            "ice",
            "JSON-tmLanguage",
            "jsonl",
            "mcmeta",
            "tfstate",
            "tfstate.backup",
            "topojson",
            "webapp",
            "webmanifest",
        ],
    ),
    (Jsx, &["jsx"]),
    (Julia, &["jl"]),
    (Kotlin, &["kt", "ktm", "kts"]),
    (Lua, &["lua"]),
    (Make, &["mak", "d", "make", "makefile", "mk", "mkfile"]),
    (Newick, &["nhx", "nwk", "nh"]),
    (Nix, &["nix"]),
    (OCaml, &["ml"]),
    (OCamlInterface, &["mli"]),
    (Pascal, &["pas", "dfm", "dpr", "lpr", "pascal"]),
    (Perl, &["pm", "pl"]),
    (Php, &["php"]),
    (Python, &["py", "py3", "pyi", "bzl"]),
    (Qml, &["qml"]),
    (R, &["R", "r", "rd", "rsx"]),
    (Racket, &["rkt"]),
    (Ruby, &["rb", "builder", "spec", "rake"]),
    (Rust, &["rs"]),
    (Scala, &["scala", "sbt", "sc"]),
    (Sql, &["sql", "pgsql"]),
    (Swift, &["swift"]),
    (Toml, &["toml"]),
    (TypeScript, &["ts"]),
    (Tsx, &["tsx"]),
    (Yaml, &["yaml", "yml"]),
    (Zig, &["zig"]),
];

/// Which file names are associated with which languages.
pub const LANG_FILE_NAMES: &[(Language, &[&str])] = &[
    (
        Bash,
        &[
            ".bash_aliases",
            ".bash_history",
            ".bash_logout",
            ".bash_profile",
            ".bashrc",
            ".cshrc",
            ".env",
            ".env.example",
            ".flaskenv",
            ".kshrc",
            ".login",
            ".profile",
            ".zlogin",
            ".zlogout",
            ".zprofile",
            ".zshenv",
            ".zshrc",
            "9fs",
            "PKGBUILD",
            "bash_aliases",
            "bash_logout",
            "bash_profile",
            "bashrc",
            "cshrc",
            "gradlew",
            "kshrc",
            "login",
            "man",
            "profile",
            "zlogin",
            "zlogout",
            "zprofile",
            "zshenv",
            "zshrc",
        ],
    ),
    (CMake, &["CMakeLists.txt"]),
    (EmacsLisp, &[".emacs", "_emacs", "Cask"]),
    (Erlang, &["Emakefile"]),
    (
        Json,
        &[
            ".arcconfig",
            ".auto-changelog",
            ".c8rc",
            ".htmlhintrc",
            ".imgbotconfig",
            ".nycrc",
            ".tern-config",
            ".tern-project",
            ".watchmanconfig",
            "Pipfile.lock",
            "composer.lock",
            "mcmod.info",
        ],
    ),
    (
        Make,
        &[
            "BSDmakefile",
            "GNUmakefile",
            "Kbuild",
            "Makefile",
            "Makefile.am",
            "Makefile.boot",
            "Makefile.frag",
            "Makefile.in",
            "Makefile.inc",
            "Makefile.wat",
            "makefile",
            "makefile.sco",
            "mkfile",
        ],
    ),
    (Python, &["TARGETS", "BUCK", "DEPS"]),
    (R, &[".Rprofile", "expr-dist"]),
    (Ruby, &["Gemfile", "Rakefile"]),
    (
        Toml,
        &["Cargo.lock", "Gopkg.lock", "Pipfile", "poetry.lock"],
    ),
];

pub fn guess(path: &Path, src: &str) -> Option<Language> {
    if let Some(lang) = from_emacs_mode_header(src) {
        return Some(lang);
    }
    if let Some(lang) = from_shebang(src) {
        return Some(lang);
    }
    if let Some(lang) = from_name(path) {
        return Some(lang);
    }

    match path.extension() {
        Some(extension) => match from_extension(extension) {
            Some(Language::Php) if src.starts_with("<?hh") => None,
            language => language,
        },
        None => None,
    }
}

/// Try to guess the language based on an Emacs mode comment at the
/// beginning of the file.
///
/// <https://www.gnu.org/software/emacs/manual/html_node/emacs/Choosing-Modes.html>
/// <https://www.gnu.org/software/emacs/manual/html_node/emacs/Specifying-File-Variables.html>
fn from_emacs_mode_header(src: &str) -> Option<Language> {
    lazy_static! {
        static ref MODE_RE: Regex = Regex::new(r"-\*-.*mode:([^;]+?);.*-\*-").unwrap();
        static ref SHORTHAND_RE: Regex = Regex::new(r"-\*-(.+)-\*-").unwrap();
    }

    // Emacs allows the mode header to occur on the second line if the
    // first line is a shebang.
    for line in src.lines().take(2) {
        let mode_name: String = match (MODE_RE.captures(line), SHORTHAND_RE.captures(line)) {
            (Some(cap), _) | (_, Some(cap)) => cap[1].into(),
            _ => "".into(),
        };
        let lang = match mode_name.to_ascii_lowercase().trim().borrow() {
            "ada" => Some(Ada),
            "c" => Some(C),
            "clojure" => Some(Clojure),
            "csharp" => Some(CSharp),
            "css" => Some(Css),
            "dart" => Some(Dart),
            "c++" => Some(CPlusPlus),
            "elixir" => Some(Elixir),
            "elm" => Some(Elm),
            "elvish" => Some(Elvish),
            "emacs-lisp" => Some(EmacsLisp),
            "gleam" => Some(Gleam),
            "go" => Some(Go),
            "haskell" => Some(Haskell),
            "hcl" => Some(Hcl),
            "html" => Some(Html),
            "janet" => Some(Janet),
            "java" => Some(Java),
            "js" | "js2" => Some(JavaScript),
            "lisp" => Some(CommonLisp),
            "perl" => Some(Perl),
            "python" => Some(Python),
            "racket" => Some(Racket),
            "rjsx" => Some(Jsx),
            "ruby" => Some(Ruby),
            "rust" => Some(Rust),
            "scala" => Some(Scala),
            "sh" => Some(Bash),
            "sql" => Some(Sql),
            "swift" => Some(Swift),
            "toml" => Some(Toml),
            "tuareg" => Some(OCaml),
            "typescript" => Some(TypeScript),
            "yaml" => Some(Yaml),
            "zig" => Some(Zig),
            _ => None,
        };
        if lang.is_some() {
            return lang;
        }
    }

    None
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
                    "ash" | "bash" | "dash" | "ksh" | "mksh" | "pdksh" | "rc" | "sh" | "zsh" => {
                        return Some(Bash)
                    }
                    "tcc" => return Some(C),
                    "lisp" | "sbc" | "ccl" | "clisp" | "ecl" => return Some(CommonLisp),
                    "elixir" => return Some(Elixir),
                    "elvish" => return Some(Elvish),
                    "escript" => return Some(Erlang),
                    "hhvm" => return Some(Hack),
                    "runghc" | "runhaskell" | "runhugs" => return Some(Haskell),
                    "chakra" | "d8" | "gjs" | "js" | "node" | "nodejs" | "qjs" | "rhino" | "v8"
                    | "v8-shell" => return Some(JavaScript),
                    "ocaml" | "ocamlrun" | "ocamlscript" => return Some(OCaml),
                    "perl" => return Some(Perl),
                    "python" | "python2" | "python3" => return Some(Python),
                    "Rscript" => return Some(R),
                    "ruby" | "macruby" | "rake" | "jruby" | "rbx" => return Some(Ruby),
                    "swift" => return Some(Swift),
                    "deno" | "ts-node" => return Some(TypeScript),
                    _ => {}
                }
            }
        }

        // Hack can use <?hh in files with a .php extension.
        if first_line.starts_with("<?hh") {
            return Some(Hack);
        }
    }

    None
}

fn from_name(path: &Path) -> Option<Language> {
    match path.file_name() {
        Some(name) => {
            let name = name.to_string_lossy().into_owned();
            for (language, known_file_names) in LANG_FILE_NAMES {
                for known_file_name in *known_file_names {
                    if &name == known_file_name {
                        return Some(*language);
                    }
                }
            }

            None
        }
        None => None,
    }
}

pub fn from_extension(current_extension: &OsStr) -> Option<Language> {
    let current_extension = current_extension.to_string_lossy();

    for (language, extensions) in LANG_EXTENSIONS {
        for extension in *extensions {
            if &*current_extension == *extension {
                return Some(*language);
            }
        }
    }
    None
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

    #[test]
    fn test_guess_by_emacs_mode() {
        let path = Path::new("foo");
        assert_eq!(
            guess(path, "; -*- mode: Lisp; eval: (auto-fill-mode 1); -*-"),
            Some(CommonLisp)
        );
    }

    #[test]
    fn test_guess_by_emacs_mode_second_line() {
        let path = Path::new("foo");
        assert_eq!(
            guess(path, "#!/bin/bash\n; -*- mode: Lisp; -*-"),
            Some(CommonLisp)
        );
    }

    #[test]
    fn test_guess_by_emacs_mode_shorthand() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "(* -*- tuareg -*- *)"), Some(OCaml));
    }

    #[test]
    fn test_guess_by_emacs_mode_shorthand_no_spaces() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "# -*-python-*-"), Some(Python));
    }

    #[test]
    fn test_guess_unknown() {
        let path = Path::new("jfkdlsjfkdsljfkdsljf");
        assert_eq!(guess(path, ""), None);
    }
}
