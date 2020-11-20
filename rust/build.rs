use std::path::Path;

fn main() {
    let dir = Path::new("src");

    cc::Build::new()
        .cpp(true)
        .include(&dir)
        .file(dir.join("parser.c"))
        .file(dir.join("scanner.cc"))
        .flag_if_supported("-Wno-unused-but-set-variable")
        .compile("tree-sitter-parser");
}
