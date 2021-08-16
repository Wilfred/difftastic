use std::path::PathBuf;

fn build(package_name: &str, has_scanner: bool) {
    let dir: PathBuf = ["vendor", package_name, "src"].iter().collect();

    let mut build = cc::Build::new();

    build.include(&dir).warnings(false); // ignore unused parameter warnings

    build.file(dir.join("parser.c"));
    if has_scanner {
        build.file(dir.join("scanner.c"));
    }

    build.compile(package_name);
}

fn main() {
    build("tree-sitter-css", true);
    build("tree-sitter-go", false);
    build("tree-sitter-rust", true);
}
