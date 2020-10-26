# tree-sitter-python

This crate provides a Python grammar for the [tree-sitter][] parsing library.
To use this crate, add it to the `[dependencies]` section of your `Cargo.toml`
file.  (Note that you will probably also need to depend on `tree-sitter` to use
the parsed result in any useful way.)

``` toml
[dependencies]
tree-sitter = "0.17"
tree-sitter-python = "0.16"
```

Typically, you will use the [parser][] function to create a tree-sitter
[Parser][] that is configured to use this grammar, and then use the parser to
parse some code:

``` rust
let code = indoc! {"
    def double(x):
        return x * 2
"};
let mut parser = tree_sitter_python::parser();
let parsed = parser.parse(code, None);
```

If you have any questions, please reach out to us in the [tree-sitter
discussions] page.

[Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
[Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
[parser]: fn.parser.html
[tree-sitter]: https://tree-sitter.github.io/
[tree-sitter discussions]: https://github.com/tree-sitter/tree-sitter/discussions
