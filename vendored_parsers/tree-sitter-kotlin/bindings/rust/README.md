# Kotlin Grammar for Tree-Sitter

This crate provides a Kotlin grammar for the [tree-sitter](https://tree-sitter.github.io/tree-sitter/) parsing library. To use this crate, add it to the `[dependencies]` section of your `Cargo.toml` file:

```toml
tree-sitter = "0.20"
tree-sitter-kotlin = "0.3.2"
```

Typically, you will use the `language` function to add this grammar to a tree-sitter [`Parser`](https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html), and then use the parser to parse some code:

```rust
let code = r#"
  data class Point(
    val x: Int,
    val y: Int
  )
"#;
let mut parser = Parser::new();
parser.set_language(tree_sitter_kotlin::language()).expect("Error loading Kotlin grammar");
let parsed = parser.parse(code, None);
```
