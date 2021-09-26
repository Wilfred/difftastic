use rayon::prelude::*;
use std::path::PathBuf;

struct TreeSitterParser {
    name: String,
    src_dir: String,
    extra_files: Vec<String>,
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
                .flag("--std=c++14")
                .flag("-Wno-unused-parameter")
                .flag("-Wno-ignored-qualifiers");
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
        build.compile(&self.name);
    }
}

fn main() {
    // Only rerun if files in the vendor/ directory change.
    // TODO: use specific source directories instead.
    println!("cargo:rerun-if-changed=vendor");

    let parsers = vec![
        TreeSitterParser {
            name: "tree-sitter-c".into(),
            src_dir: "vendor/tree-sitter-c-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-cpp".into(),
            src_dir: "vendor/tree-sitter-cpp-src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-c-sharp".into(),
            src_dir: "vendor/tree-sitter-c-sharp-src".into(),
            extra_files: vec!["scanner.c".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-clojure".into(),
            src_dir: "vendor/tree-sitter-clojure-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-css".into(),
            src_dir: "vendor/tree-sitter-css-src".into(),
            extra_files: vec!["scanner.c".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-elisp".into(),
            src_dir: "vendor/tree-sitter-elisp-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-elixir".into(),
            src_dir: "vendor/tree-sitter-elixir-src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-go".into(),
            src_dir: "vendor/tree-sitter-go-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-haskell".into(),
            src_dir: "vendor/tree-sitter-haskell-src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-java".into(),
            src_dir: "vendor/tree-sitter-java-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-javascript".into(),
            src_dir: "vendor/tree-sitter-javascript-src".into(),
            extra_files: vec!["scanner.c".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-json".into(),
            src_dir: "vendor/tree-sitter-json-src".into(),
            extra_files: vec![],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml".into(),
            src_dir: "vendor/tree-sitter-ocaml-src/ocaml/src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-ocaml-interface".into(),
            src_dir: "vendor/tree-sitter-ocaml-src/interface/src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-python".into(),
            src_dir: "vendor/tree-sitter-python-src".into(),
            extra_files: vec!["scanner.cc".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-rust".into(),
            src_dir: "vendor/tree-sitter-rust-src".into(),
            extra_files: vec!["scanner.c".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-tsx".into(),
            src_dir: "vendor/tree-sitter-typescript-src/tsx/src".into(),
            extra_files: vec!["scanner.c".into()],
        },
        TreeSitterParser {
            name: "tree-sitter-typescript".into(),
            src_dir: "vendor/tree-sitter-typescript-src/typescript/src".into(),
            extra_files: vec!["scanner.c".into()],
        },
    ];

    parsers.par_iter().for_each(|p| p.build());
}
