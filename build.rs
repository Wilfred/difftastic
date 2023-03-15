// Clippy errors in this file should not stop build errors being
// reported elsewhere.
// https://github.com/rust-lang/rust-clippy/issues/9534
#![warn(clippy::all)]
// Has false positives on else if chains that sometimes have the same
// body for readability.
#![allow(clippy::if_same_then_else)]

use rayon::prelude::*;
use std::path::PathBuf;
use version_check as rustc;

struct TreeSitterParser {
    name: &'static str,
    src_dir: &'static str,
    extra_files: Vec<&'static str>,
}

impl TreeSitterParser {
    fn build(&self) {
        // In rustc 1.61+, we need to specify +whole-archive.
        // See https://github.com/rust-lang/rust/blob/1.61.0/RELEASES.md#compatibility-notes
        // and https://github.com/Wilfred/difftastic/issues/339.
        let rustc_supports_whole_archive = !rustc::is_max_version("1.60.0").unwrap_or(false);

        let dir = PathBuf::from(&self.src_dir);

        let mut c_files = vec!["parser.c"];
        let mut cpp_files = vec![];

        for file in &self.extra_files {
            if file.ends_with(".c") {
                c_files.push(file);
            } else {
                cpp_files.push(file);
            }
        }

        if !cpp_files.is_empty() {
            let mut cpp_build = cc::Build::new();
            cpp_build
                .include(&dir)
                .cpp(true)
                .flag_if_supported("-Wno-implicit-fallthrough")
                .flag_if_supported("-Wno-unused-parameter")
                .flag_if_supported("-Wno-ignored-qualifiers")
                // Ignore warning from tree-sitter-html.
                .flag_if_supported("-Wno-sign-compare")
                // Ignore warning from tree-sitter-ruby.
                .flag_if_supported("-Wno-parentheses")
                // Ignore warning from tree-sitter-ruby.
                .flag_if_supported("-Wno-unused-but-set-variable")
                // Workaround for: https://github.com/ganezdragon/tree-sitter-perl/issues/16
                // should be removed after fixed.
                .flag_if_supported("-Wno-return-type");

            if cfg!(windows) {
                cpp_build.flag("/std:c++14");
            } else {
                cpp_build.flag("--std=c++14");
            }

            for file in cpp_files {
                cpp_build.file(dir.join(file));
            }

            if rustc_supports_whole_archive {
                cpp_build.link_lib_modifier("+whole-archive");
            }

            cpp_build.compile(&format!("{}-cpp", self.name));
        }

        let mut build = cc::Build::new();
        if cfg!(target_env = "msvc") {
            build.flag("/utf-8");
        }
        build.include(&dir).warnings(false); // ignore unused parameter warnings
        for file in c_files {
            build.file(dir.join(file));
        }

        if rustc_supports_whole_archive {
            build.link_lib_modifier("+whole-archive");
        }

        build.compile(self.name);
    }
}

fn main() {
    let parsers = vec![
        TreeSitterParser {
            name: "tree-sitter-ada",
            src_dir: "vendored_parsers/tree-sitter-ada-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-bash",
            src_dir: "vendored_parsers/tree-sitter-bash-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-c",
            src_dir: "vendored_parsers/tree-sitter-c-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-cpp",
            src_dir: "vendored_parsers/tree-sitter-cpp-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-c-sharp",
            src_dir: "vendored_parsers/tree-sitter-c-sharp-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-clojure",
            src_dir: "vendored_parsers/tree-sitter-clojure-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-cmake",
            src_dir: "vendored_parsers/tree-sitter-cmake-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-commonlisp",
            src_dir: "vendored_parsers/tree-sitter-commonlisp-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-css",
            src_dir: "vendored_parsers/tree-sitter-css-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-dart",
            src_dir: "vendored_parsers/tree-sitter-dart-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-elisp",
            src_dir: "vendored_parsers/tree-sitter-elisp-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-elixir",
            src_dir: "vendored_parsers/tree-sitter-elixir-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-elm",
            src_dir: "vendored_parsers/tree-sitter-elm-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-elvish",
            src_dir: "vendored_parsers/tree-sitter-elvish-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-erlang",
            src_dir: "vendored_parsers/tree-sitter-erlang-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-gleam",
            src_dir: "vendored_parsers/tree-sitter-gleam-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-go",
            src_dir: "vendored_parsers/tree-sitter-go-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-hack",
            src_dir: "vendored_parsers/tree-sitter-hack-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-hare",
            src_dir: "vendored_parsers/tree-sitter-hare-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-haskell",
            src_dir: "vendored_parsers/tree-sitter-haskell-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-hcl",
            src_dir: "vendored_parsers/tree-sitter-hcl-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-html",
            src_dir: "vendored_parsers/tree-sitter-html-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-janet-simple",
            src_dir: "vendored_parsers/tree-sitter-janet-simple-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-java",
            src_dir: "vendored_parsers/tree-sitter-java-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-javascript",
            src_dir: "vendored_parsers/tree-sitter-javascript-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-json",
            src_dir: "vendored_parsers/tree-sitter-json-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-julia",
            src_dir: "vendored_parsers/tree-sitter-julia-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-kotlin",
            src_dir: "vendored_parsers/tree-sitter-kotlin-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-lua",
            src_dir: "vendored_parsers/tree-sitter-lua-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-make",
            src_dir: "vendored_parsers/tree-sitter-make-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-newick",
            src_dir: "vendored_parsers/tree-sitter-newick-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-nix",
            src_dir: "vendored_parsers/tree-sitter-nix-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml",
            src_dir: "vendored_parsers/tree-sitter-ocaml-src/ocaml/src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml-interface",
            src_dir: "vendored_parsers/tree-sitter-ocaml-src/interface/src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-pascal",
            src_dir: "vendored_parsers/tree-sitter-pascal-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-perl",
            src_dir: "vendored_parsers/tree-sitter-perl-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-php",
            src_dir: "vendored_parsers/tree-sitter-php-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-python",
            src_dir: "vendored_parsers/tree-sitter-python-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-qmljs",
            src_dir: "vendored_parsers/tree-sitter-qmljs-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-r",
            src_dir: "vendored_parsers/tree-sitter-r-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-racket",
            src_dir: "vendored_parsers/tree-sitter-racket-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-ruby",
            src_dir: "vendored_parsers/tree-sitter-ruby-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-rust",
            src_dir: "vendored_parsers/tree-sitter-rust-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-scala",
            src_dir: "vendored_parsers/tree-sitter-scala-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-sql",
            src_dir: "vendored_parsers/tree-sitter-sql-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-swift",
            src_dir: "vendored_parsers/tree-sitter-swift-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-toml",
            src_dir: "vendored_parsers/tree-sitter-toml-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-tsx",
            src_dir: "vendored_parsers/tree-sitter-typescript-src/tsx/src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-typescript",
            src_dir: "vendored_parsers/tree-sitter-typescript-src/typescript/src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-yaml",
            src_dir: "vendored_parsers/tree-sitter-yaml-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-zig",
            src_dir: "vendored_parsers/tree-sitter-zig-src",
            extra_files: vec![],
        },
    ];

    // Only rerun if relevant files in the vendored_parsers/ directory change.
    for parser in &parsers {
        println!("cargo:rerun-if-changed={}", parser.src_dir);
    }

    parsers.par_iter().for_each(|p| p.build());
}
