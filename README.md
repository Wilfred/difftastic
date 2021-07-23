tree-sitter-r
===========================

[![Build Status](https://github.com/jimhester/tree-sitter-r/workflows/build/badge.svg)](https://github.com/jimhester/tree-sitter-r/actions?query=workflow%3Abuild)

R grammar for [tree-sitter][].

[tree-sitter]: https://github.com/tree-sitter/tree-sitter

# Rust bindings

This grammar is available as a Rust crate. It is not yet published on crates.io, but you can still use it in your project by adding it as a `git` dependency in your `Cargo.toml`,

```toml
tree-sitter-r = { git = "https://github.com/r-lib/tree-sitter-r" }
```

# References

* [The R Draft Spec](https://cran.r-project.org/doc/manuals/r-release/R-lang.pdf)
* [gram.y](https://github.com/wch/r-source/blob/trunk/src/main/gram.y)
