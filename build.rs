use std::path::PathBuf;

fn main() {
    let dir: PathBuf = ["vendor", "tree-sitter-rust", "src"].iter().collect();

    cc::Build::new()
        .include(&dir)
        .file(dir.join("parser.c"))
        .file(dir.join("scanner.c"))
        .warnings(false) // ignore unused parameter warnings
        .compile("tree-sitter-javascript");
}
