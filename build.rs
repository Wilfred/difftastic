use std::path::PathBuf;

fn build(package_name: &str, package_dir: &str, extra_c_files: &[&str]) {
    let dir = PathBuf::from(package_dir);

    let mut build = cc::Build::new();
    build.include(&dir).warnings(false); // ignore unused parameter warnings

    build.file(dir.join("parser.c"));
    for c_file in extra_c_files {
        build.file(dir.join(c_file));
    }

    build.compile(package_name);
}

fn main() {
    build(
        "tree-sitter-css",
        "vendor/tree-sitter-css/src",
        &["scanner.c"],
    );
    build("tree-sitter-elisp", "vendor/tree-sitter-elisp/src", &[]);
    build("tree-sitter-go", "vendor/tree-sitter-go/src", &[]);
    build(
        "tree-sitter-javascript",
        "vendor/tree-sitter-javascript/src",
        &["scanner.c"],
    );
    build("tree-sitter-json", "vendor/tree-sitter-json/src", &[]);
    build(
        "tree-sitter-rust",
        "vendor/tree-sitter-rust/src",
        &["scanner.c"],
    );
}
