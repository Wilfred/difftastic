# tree-sitter-php

This crate provides support of the PHP language for the [tree-sitter][] parsing library. To use this crate, add it to
the `[dependencies]` section of your
`Cargo.toml` file. As this crate is not (yet) published to the central registry, you will have to specify it as a git
dependency, currently we suggest using the `master` branch.

You will also need the [tree-sitter crate][] to do the actual parsing here.

``` toml
[dependencies]
tree-sitter = "0.19"
tree-sitter-php = { git = "https://github.com/tree-sitter/tree-sitter-php.git", branch = "master" }
```

To you the parser, you need to obtain an instance of a [`tree_sitter::Language`][Language] struct for php.
The `language()` function provides this.
Passing this struct to a [`tree_sitter::Parser`][Parser] will enable it to parse PHP.

``` rust
use tree_sitter::Parser;

fn main() {
    let code = r#"
    function double(int $x) {
        return $x * 2;
    }
"#;
    let mut parser = Parser::new();
    parser
        .set_language(tree_sitter_php::language())
        .expect("Error loading PHP parsing support");
    let parsed = parser.parse(code, None);
    println!("{:#?}", parsed);
}
```

If you have any questions, please reach out to us in the [tree-sitter discussions] page.

[Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html

[Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html

[tree-sitter]: https://tree-sitter.github.io/

[tree-sitter crate]: https://crates.io/crates/tree-sitter

[tree-sitter discussions]: https://github.com/tree-sitter/tree-sitter/discussions
