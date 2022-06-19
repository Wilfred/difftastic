fn main() {
    let root_dir = std::path::Path::new(".");
    let ocaml_dir = root_dir.join("ocaml").join("src");
    let interface_dir = root_dir.join("interface").join("src");

    let mut c_config = cc::Build::new();
    c_config.include(&ocaml_dir);
    c_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs");

    let mut cpp_config = cc::Build::new();
    cpp_config.cpp(true);
    cpp_config.include(&ocaml_dir);
    cpp_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable");

    for dir in &[ocaml_dir, interface_dir] {
        let parser_path = dir.join("parser.c");
        let scanner_path = dir.join("scanner.cc");
        c_config.file(&parser_path);
        cpp_config.file(&scanner_path);
        println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
        println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    }

    c_config.compile("parser");
    cpp_config.compile("scanner");
}
