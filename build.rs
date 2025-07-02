// Clippy errors in this file should not stop build errors being
// reported elsewhere.
// https://github.com/rust-lang/rust-clippy/issues/9534
#![warn(clippy::all)]
// Has false positives on else if chains that sometimes have the same
// body for readability.
#![allow(clippy::if_same_then_else)]

use std::{path::PathBuf, process::Command};

use rayon::prelude::*;
use version_check as rustc;

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
                .std("c++14")
                .flag_if_supported("-Wno-implicit-fallthrough")
                .flag_if_supported("-Wno-unused-parameter")
                .flag_if_supported("-Wno-ignored-qualifiers")
                .link_lib_modifier("+whole-archive");

            for file in cpp_files {
                cpp_build.file(dir.join(file));
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

        build.link_lib_modifier("+whole-archive");

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
            name: "tree-sitter-clojure",
            src_dir: "vendored_parsers/tree-sitter-clojure-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-cmake",
            src_dir: "vendored_parsers/tree-sitter-cmake-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-dart",
            src_dir: "vendored_parsers/tree-sitter-dart-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-devicetree",
            src_dir: "vendored_parsers/tree-sitter-devicetree-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-elisp",
            src_dir: "vendored_parsers/tree-sitter-elisp-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-elm",
            src_dir: "vendored_parsers/tree-sitter-elm-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-elvish",
            src_dir: "vendored_parsers/tree-sitter-elvish-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-gleam",
            src_dir: "vendored_parsers/tree-sitter-gleam-src",
            extra_files: vec!["scanner.c"],
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
            name: "tree-sitter-hcl",
            src_dir: "vendored_parsers/tree-sitter-hcl-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-janet-simple",
            src_dir: "vendored_parsers/tree-sitter-janet-simple-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-kotlin",
            src_dir: "vendored_parsers/tree-sitter-kotlin-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-latex",
            src_dir: "vendored_parsers/tree-sitter-latex-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-newick",
            src_dir: "vendored_parsers/tree-sitter-newick-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-perl",
            src_dir: "vendored_parsers/tree-sitter-perl-src",
            extra_files: vec!["scanner.c"],
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
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-scheme",
            src_dir: "vendored_parsers/tree-sitter-scheme-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-scss",
            src_dir: "vendored_parsers/tree-sitter-scss-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-sfapex",
            src_dir: "vendored_parsers/tree-sitter-sfapex-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-smali",
            src_dir: "vendored_parsers/tree-sitter-smali-src",
            extra_files: vec!["scanner.c"],
        },
        TreeSitterParser {
            name: "tree-sitter-solidity",
            src_dir: "vendored_parsers/tree-sitter-solidity-src",
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-sql",
            src_dir: "vendored_parsers/tree-sitter-sql-src",
            extra_files: vec!["scanner.cc"],
        },
        TreeSitterParser {
            name: "tree-sitter-vhdl",
            src_dir: "vendored_parsers/tree-sitter-vhdl-src",
            extra_files: vec![],
        },
    ];

    // Only rerun if relevant files in the vendored_parsers/ directory change.
    for parser in &parsers {
        println!("cargo:rerun-if-changed={}", parser.src_dir);
    }

    parsers.par_iter().for_each(|p| p.build());
    commit_info();

    if let Some((version, _, _)) = rustc::triple() {
        println!("cargo:rustc-env=DFT_RUSTC_VERSION={}", version);
    }
}

fn commit_info() {
    if !PathBuf::from(".git").exists() {
        return;
    }

    let output = match Command::new("git")
        .arg("log")
        .arg("-1")
        .arg("--date=short")
        .arg("--format=%H %h %cd")
        .output()
    {
        Ok(output) if output.status.success() => output,
        _ => return,
    };
    let stdout = String::from_utf8(output.stdout).unwrap();
    let mut parts = stdout.split_whitespace();
    let mut next = || parts.next().unwrap();
    let _commit_hash = next();
    println!("cargo:rustc-env=DFT_COMMIT_SHORT_HASH={}", next());
    println!("cargo:rustc-env=DFT_COMMIT_DATE={}", next())
}
