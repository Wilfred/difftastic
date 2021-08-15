use std::path::PathBuf;

fn build(package_name: &str) {
    let dir: PathBuf = ["vendor", package_name, "src"].iter().collect();

    cc::Build::new()
        .include(&dir)
        .file(dir.join("parser.c"))
        .file(dir.join("scanner.c"))
        .warnings(false) // ignore unused parameter warnings
        .compile(package_name);
}

fn main() {
    build("tree-sitter-rust");
}
