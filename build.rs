use std::path::PathBuf;

fn build(package_name: &str, package_dir: &str, extra_files: &[&str]) {
    let dir = PathBuf::from(package_dir);

    let mut c_files = vec!["parser.c"];
    let mut cpp_files = vec![];

    for file in extra_files {
        if file.ends_with(".c") {
            c_files.push(file);
        } else {
            cpp_files.push(file);
        }
    }

    if !cpp_files.is_empty() {
        let mut cpp_build = cc::Build::new();
        cpp_build.include(&dir).cpp(true);
        for file in cpp_files {
            cpp_build.file(dir.join(file));
        }
        cpp_build.compile(&format!("{}-cpp", package_name));
    }

    let mut build = cc::Build::new();
    build.include(&dir).warnings(false); // ignore unused parameter warnings
    for file in c_files {
        build.file(dir.join(file));
    }
    build.compile(package_name);
}

fn main() {
    // Only rerun if files in the vendor/ directory change.
    println!("cargo:rerun-if-changed=vendor");

    build("tree-sitter-clojure", "vendor/tree-sitter-clojure-src", &[]);
    build(
        "tree-sitter-css",
        "vendor/tree-sitter-css-src",
        &["scanner.c"],
    );
    build("tree-sitter-elisp", "vendor/tree-sitter-elisp-src", &[]);
    build("tree-sitter-go", "vendor/tree-sitter-go-src", &[]);
    build(
        "tree-sitter-javascript",
        "vendor/tree-sitter-javascript-src",
        &["scanner.c"],
    );
    build("tree-sitter-json", "vendor/tree-sitter-json-src", &[]);
    build(
        "tree-sitter-ocaml",
        "vendor/tree-sitter-ocaml-src/ocaml/src",
        &["scanner.cc"],
    );
    build(
        "tree-sitter-ocaml-interface",
        "vendor/tree-sitter-ocaml-src/interface/src",
        &["scanner.cc"],
    );
    build(
        "tree-sitter-rust",
        "vendor/tree-sitter-rust-src",
        &["scanner.c"],
    );
}
