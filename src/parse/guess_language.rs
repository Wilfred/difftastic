//! Guess which programming language a file is written in.
//!
//! This is heavily based on GitHub's
//! [linguist](https://github.com/github/linguist/blob/master/docs/how-linguist-works.md),
//! particularly its
//! [languages.yml](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml).
//!
//! Difftastic does not reuse languages.yml directly. Linguist has a
//! larger set of language detection strategies.

use std::{borrow::Borrow, path::Path};

use lazy_static::lazy_static;
use regex::Regex;
use strum::{EnumIter, IntoEnumIterator};

/// Languages supported by difftastic. Each language here has a
/// corresponding tree-sitter parser.
#[derive(Debug, Clone, Copy, PartialEq, Eq, EnumIter)]
pub(crate) enum Language {
    Ada,
    Apex,
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
    FSharp,
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
    JavascriptJsx,
    Json,
    Julia,
    Kotlin,
    LaTeX,
    Lua,
    Make,
    Newick,
    Nix,
    ObjC,
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
    Scss,
    Solidity,
    Sql,
    Swift,
    Toml,
    TypeScript,
    TypeScriptTsx,
    Xml,
    Yaml,
    Zig,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub(crate) enum LanguageOverride {
    Language(Language),
    PlainText,
}

/// If there is a language called `name` (comparing case
/// insensitively), return it. Treat `"text"` as an additional option.
pub(crate) fn language_override_from_name(name: &str) -> Option<LanguageOverride> {
    let name = name.trim().to_lowercase();

    if name == "text" {
        return Some(LanguageOverride::PlainText);
    }

    for language in Language::iter() {
        let lang_name = language_name(language);
        if lang_name.to_lowercase() == name {
            return Some(LanguageOverride::Language(language));
        }
    }

    None
}

/// The language name shown to the user.
pub(crate) fn language_name(language: Language) -> &'static str {
    match language {
        Ada => "Ada",
        Apex => "Apex",
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
        FSharp => "F#",
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
        JavascriptJsx => "JavaScript JSX",
        Json => "JSON",
        Julia => "Julia",
        Kotlin => "Kotlin",
        LaTeX => "LaTeX",
        Lua => "Lua",
        Make => "Make",
        Newick => "Newick",
        Nix => "Nix",
        ObjC => "Objective-C",
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
        Scss => "SCSS",
        Solidity => "Solidity",
        Sql => "SQL",
        Swift => "Swift",
        Toml => "TOML",
        TypeScript => "TypeScript",
        TypeScriptTsx => "TypeScript TSX",
        Xml => "XML",
        Yaml => "YAML",
        Zig => "Zig",
    }
}

use Language::*;

/// File globs that identify languages based on the file path.
pub(crate) fn language_globs(language: Language) -> Vec<glob::Pattern> {
    let glob_strs: &'static [&'static str] = match language {
        Ada => &["*.ada", "*.adb", "*.ads"],
        Bash => &[
            "*.bash",
            "*.bats",
            "*.cgi",
            "*.command",
            "*.env",
            "*.fcgi",
            "*.ksh",
            "*.sh",
            "*.sh.in",
            "*.tmux",
            "*.tool",
            "*.zsh",
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
        Apex => &["*.cls", "*.apexc", "*.trigger"],
        C => &["*.c"],
        Clojure => &[
            "*.bb", "*.boot", "*.clj", "*.cljc", "*.clje", "*.cljs", "*.cljx", "*.edn", "*.joke",
            "*.joker",
        ],
        CMake => &["*.cmake", "*.cmake.in", "CMakeLists.txt"],
        CommonLisp => &["*.lisp", "*.lsp", "*.asd"],
        // Treat .h as C++ rather than C. This is an arbitrary choice, but
        // C++ is more widely used than C according to
        // https://madnight.github.io/githut/
        // Also, treating CUDA as C++
        CPlusPlus => &[
            "*.cc", "*.cpp", "*.h", "*.hh", "*.hpp", "*.ino", "*.cxx", "*.cu",
        ],
        CSharp => &["*.cs"],
        Css => &["*.css"],
        Dart => &["*.dart"],
        Elm => &["*.elm"],
        EmacsLisp => &["*.el", ".emacs", "_emacs", "Cask"],
        Elixir => &["*.ex", "*.exs"],
        Elvish => &["*.elv"],
        Erlang => &[
            "*.erl",
            "*.app.src",
            "*.es",
            "*.escript",
            "*.hrl",
            "*.xrl",
            "*.yrl",
            "Emakefile",
        ],
        FSharp => &["*.fs", "*.fsx", "*.fsi"],
        Gleam => &["*.gleam"],
        Go => &["*.go"],
        Hack => &["*.hack", "*.hck", "*.hhi"],
        Hare => &["*.ha"],
        Haskell => &["*.hs"],
        Hcl => &["*.hcl", "*.nomad", "*.tf", "*.tfvars", "*.workflow"],
        Html => &["*.html", "*.htm", "*.xhtml"],
        Janet => &["*.janet", "*.jdn"],
        Java => &["*.java"],
        JavaScript => &["*.cjs", "*.js", "*.mjs", "*.snap"],
        Json => &[
            "*.json",
            "*.avsc",
            "*.geojson",
            "*.gltf",
            "*.har",
            "*.ice",
            "*.JSON-tmLanguage",
            "*.jsonl",
            "*.mcmeta",
            "*.tfstate",
            "*.tfstate.backup",
            "*.topojson",
            "*.webapp",
            "*.webmanifest",
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
        JavascriptJsx => &["*.jsx"],
        Julia => &["*.jl"],
        Kotlin => &["*.kt", "*.ktm", "*.kts"],
        LaTeX => &["*.aux", "*.cls", "*.sty", "*.tex"],
        Lua => &["*.lua"],
        Make => &[
            "*.mak",
            "*.d",
            "*.make",
            "*.makefile",
            "*.mk",
            "*.mkfile",
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
        Newick => &["*.nhx", "*.nwk", "*.nh"],
        Nix => &["*.nix"],
        ObjC => &["*.m"],
        OCaml => &["*.ml"],
        OCamlInterface => &["*.mli"],
        Pascal => &["*.pas", "*.dfm", "*.dpr", "*.lpr", "*.pascal"],
        Perl => &["*.pm", "*.pl"],
        Php => &["*.php"],
        Python => &["*.py", "*.py3", "*.pyi", "*.bzl", "TARGETS", "BUCK", "DEPS"],
        Qml => &["*.qml"],
        R => &["*.R", "*.r", "*.rd", "*.rsx", ".Rprofile", "expr-dist"],
        Racket => &["*.rkt"],
        Ruby => &[
            "*.rb",
            "*.builder",
            "*.spec",
            "*.rake",
            "Gemfile",
            "Rakefile",
        ],
        Rust => &["*.rs"],
        Scala => &["*.scala", "*.sbt", "*.sc"],
        Scss => &["*.scss"],
        Solidity => &["*.sol"],
        Sql => &["*.sql", "*.pgsql"],
        Swift => &["*.swift"],
        Toml => &[
            "*.toml",
            "Cargo.lock",
            "Gopkg.lock",
            "Pipfile",
            "poetry.lock",
        ],
        TypeScript => &["*.ts"],
        TypeScriptTsx => &["*.tsx"],
        Xml => &[
            "*.ant",
            "*.csproj",
            "*.plist",
            "*.resx",
            "*.svg",
            "*.ui",
            "*.vbproj",
            "*.xaml",
            "*.xml",
            "*.xsd",
            "*.xsl",
            "*.xslt",
            "App.config",
            "nuget.config",
            "packages.config",
            ".classpath",
            ".cproject",
            ".project",
        ],
        Yaml => &["*.yaml", "*.yml"],
        Zig => &["*.zig"],
    };

    glob_strs
        .iter()
        .map(|name| {
            glob::Pattern::new(name).expect("Glob in difftastic source should be well-formed")
        })
        .collect()
}

fn looks_like_hacklang(path: &Path, src: &str) -> bool {
    if let Some(extension) = path.extension() {
        if extension == "php" && src.starts_with("<?hh") {
            return true;
        }
    }

    false
}

/// Use a heuristic to determine if a '.h' file looks like Objective-C.
/// We look for a line starting with '#import', '@interface' or '@protocol'
/// near the top of the file.  These keywords are not valid C or C++, so this
/// should not produce false positives.
fn looks_like_objc(path: &Path, src: &str) -> bool {
    if let Some(extension) = path.extension() {
        if extension == "h" {
            return src.lines().take(100).any(|line| {
                ["#import", "@interface", "@protocol"]
                    .iter()
                    .any(|keyword| line.starts_with(keyword))
            });
        }
    }

    false
}

pub(crate) fn guess(
    path: &Path,
    src: &str,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
) -> Option<Language> {
    if let Some(file_name) = path.file_name() {
        let file_name = file_name.to_string_lossy();
        for (lang_override, patterns) in overrides {
            for pattern in patterns {
                if pattern.matches(&file_name) {
                    match lang_override {
                        LanguageOverride::Language(lang) => return Some(*lang),
                        LanguageOverride::PlainText => {
                            return None;
                        }
                    }
                }
            }
        }
    }

    if let Some(lang) = from_emacs_mode_header(src) {
        return Some(lang);
    }
    if let Some(lang) = from_shebang(src) {
        return Some(lang);
    }
    if looks_like_hacklang(path, src) {
        return Some(Language::Hack);
    }
    if looks_like_objc(path, src) {
        return Some(Language::ObjC);
    }
    if let Some(lang) = from_glob(path) {
        return Some(lang);
    }

    None
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
        let lang = match mode_name.to_ascii_lowercase().trim() {
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
            "fsharp" => Some(FSharp),
            "gleam" => Some(Gleam),
            "go" => Some(Go),
            "haskell" => Some(Haskell),
            "hcl" => Some(Hcl),
            "html" => Some(Html),
            "janet" => Some(Janet),
            "java" => Some(Java),
            "js" | "js2" => Some(JavaScript),
            "lisp" => Some(CommonLisp),
            "nxml" => Some(Xml),
            "objc" => Some(ObjC),
            "perl" => Some(Perl),
            "python" => Some(Python),
            "racket" => Some(Racket),
            "rjsx" => Some(JavascriptJsx),
            "ruby" => Some(Ruby),
            "rust" => Some(Rust),
            "scala" => Some(Scala),
            "scss" => Some(Scss),
            "sh" => Some(Bash),
            "solidity" => Some(Solidity),
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

fn from_glob(path: &Path) -> Option<Language> {
    match path.file_name() {
        Some(name) => {
            let name = name.to_string_lossy().into_owned();
            for language in Language::iter() {
                for glob in language_globs(language) {
                    if glob.matches(&name) {
                        return Some(language);
                    }
                }
            }

            None
        }
        None => None,
    }
}

#[cfg(test)]
mod tests {
    use pretty_assertions::assert_eq;

    use super::*;

    #[test]
    fn test_guess_by_extension() {
        let path = Path::new("foo.el");
        assert_eq!(guess(path, "", &[]), Some(EmacsLisp));
    }

    #[test]
    fn test_guess_by_whole_name() {
        let path = Path::new("foo/.bashrc");
        assert_eq!(guess(path, "", &[]), Some(Bash));
    }

    #[test]
    fn test_guess_by_shebang() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "#!/bin/bash", &[]), Some(Bash));
    }

    #[test]
    fn test_guess_by_env_shebang() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "#!/usr/bin/env python", &[]), Some(Python));
    }

    #[test]
    fn test_guess_by_emacs_mode() {
        let path = Path::new("foo");
        assert_eq!(
            guess(path, "; -*- mode: Lisp; eval: (auto-fill-mode 1); -*-", &[]),
            Some(CommonLisp)
        );
    }

    #[test]
    fn test_guess_by_emacs_mode_second_line() {
        let path = Path::new("foo");
        assert_eq!(
            guess(path, "#!/bin/bash\n; -*- mode: Lisp; -*-", &[]),
            Some(CommonLisp)
        );
    }

    #[test]
    fn test_guess_by_emacs_mode_shorthand() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "(* -*- tuareg -*- *)", &[]), Some(OCaml));
    }

    #[test]
    fn test_guess_by_emacs_mode_shorthand_no_spaces() {
        let path = Path::new("foo");
        assert_eq!(guess(path, "# -*-python-*-", &[]), Some(Python));
    }

    #[test]
    fn test_guess_unknown() {
        let path = Path::new("jfkdlsjfkdsljfkdsljf");
        assert_eq!(guess(path, "", &[]), None);
    }

    #[test]
    fn test_guess_override() {
        let path = Path::new("foo.el");
        assert_eq!(
            guess(
                path,
                "",
                &[(
                    LanguageOverride::Language(Css),
                    vec![glob::Pattern::new("*.el").unwrap()],
                )]
            ),
            Some(Css)
        );
    }
}
