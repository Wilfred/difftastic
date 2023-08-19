fn main() {
    let src_dir = std::path::Path::new("src");
    let mut config = cc::Build::new();
    config.include(&src_dir);
    config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs");
    let parser_path = src_dir.join("parser.c");
    let scanner_path = src_dir.join("scanner.c");
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
    println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    config.file(&parser_path);
    config.file(&scanner_path);
    config.compile("parser-scanner");
}
