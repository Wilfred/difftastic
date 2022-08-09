use rayon::prelude::*;
use std::path::PathBuf;

struct TreeSitterParser {
    name: &'static str,
    src_dir: &'static str,
    extra_files: Vec<&'static str>,
}

impl TreeSitterParser {
    fn build(&self) {
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
            cpp_build.compile(&format!("{}-cpp", self.name));
        }

        let mut build = cc::Build::new();
        build.include(&dir).warnings(false); // ignore unused parameter warnings
        for file in c_files {
            build.file(dir.join(file));
        }
        build.compile(self.name);
    }
}

fn main() {
    let parsers = vec![
        TreeSitterParser {
            name: "tree-sitter-bash",
            src_dir: "vendor/tree-sitter-bash-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-c",
            src_dir: "vendor/tree-sitter-c-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-cpp",
            src_dir: "vendor/tree-sitter-cpp-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-c-sharp",
            src_dir: "vendor/tree-sitter-c-sharp-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-clojure",
            src_dir: "vendor/tree-sitter-clojure-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-commonlisp",
            src_dir: "vendor/tree-sitter-commonlisp-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-css",
            src_dir: "vendor/tree-sitter-css-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-dart",
            src_dir: "vendor/tree-sitter-dart-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-elisp",
            src_dir: "vendor/tree-sitter-elisp-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-elixir",
            src_dir: "vendor/tree-sitter-elixir-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-elm",
            src_dir: "vendor/tree-sitter-elm-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-elvish",
            src_dir: "vendor/tree-sitter-elvish-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-gleam",
            src_dir: "vendor/tree-sitter-gleam-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-go",
            src_dir: "vendor/tree-sitter-go-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-hack",
            src_dir: "vendor/tree-sitter-hack-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-haskell",
            src_dir: "vendor/tree-sitter-haskell-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-hcl",
            src_dir: "vendor/tree-sitter-hcl-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-html",
            src_dir: "vendor/tree-sitter-html-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-janet-simple",
            src_dir: "vendor/tree-sitter-janet-simple-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-java",
            src_dir: "vendor/tree-sitter-java-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-javascript",
            src_dir: "vendor/tree-sitter-javascript-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-json",
            src_dir: "vendor/tree-sitter-json-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-julia",
            src_dir: "vendor/tree-sitter-julia-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-kotlin",
            src_dir: "vendor/tree-sitter-kotlin-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-lua",
            src_dir: "vendor/tree-sitter-lua-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-nix",
            src_dir: "vendor/tree-sitter-nix-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml",
            src_dir: "vendor/tree-sitter-ocaml-src/ocaml/src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml-interface",
            src_dir: "vendor/tree-sitter-ocaml-src/interface/src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-php",
            src_dir: "vendor/tree-sitter-php-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-perl",
            src_dir: "vendor/tree-sitter-perl-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-python",
            src_dir: "vendor/tree-sitter-python-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-ruby",
            src_dir: "vendor/tree-sitter-ruby-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-rust",
            src_dir: "vendor/tree-sitter-rust-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-scala",
            src_dir: "vendor/tree-sitter-scala-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-sql",
            src_dir: "vendor/tree-sitter-sql-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-swift",
            src_dir: "vendor/tree-sitter-swift-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-toml",
            src_dir: "vendor/tree-sitter-toml-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-tsx",
            src_dir: "vendor/tree-sitter-typescript-src/tsx/src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-typescript",
            src_dir: "vendor/tree-sitter-typescript-src/typescript/src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-yaml",
            src_dir: "vendor/tree-sitter-yaml-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-zig",
            src_dir: "vendor/tree-sitter-zig-src",
            extra_files: vec![],
        },
    ];

    // Only rerun if relevant files in the vendor/ directory change.
    println!("cargo:rerun-if-changed=vendor/highlights");
    for parser in &parsers {
        println!("cargo:rerun-if-changed={}", parser.src_dir);
    }

    parsers.par_iter().for_each(|p| p.build());
}
