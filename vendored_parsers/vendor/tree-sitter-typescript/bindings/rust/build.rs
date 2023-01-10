fn main() {
    let root_dir = std::path::Path::new(".");
    let typescript_dir = root_dir.join("typescript").join("src");
    let tsx_dir = root_dir.join("tsx").join("src");

    let mut config = cc::Build::new();
    config.include(&typescript_dir);
    config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable");

    for path in &[
        typescript_dir.join("parser.c"),
        typescript_dir.join("scanner.c"),
        tsx_dir.join("parser.c"),
        tsx_dir.join("scanner.c"),
    ] {
        config.file(&path);
        println!("cargo:rerun-if-changed={}", path.to_str().unwrap());
    }

    println!(
        "cargo:rerun-if-changed={}",
        root_dir.join("common").join("scanner.h").to_str().unwrap()
    );

    config.compile("parser-scanner");
}
