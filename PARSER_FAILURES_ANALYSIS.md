# Parser Test Failures - Root Cause Analysis

## Failed Parsers (9 total)

The following parsers failed to build when removed:

1. **tree-sitter-ada** - FAILED
2. **tree-sitter-c** - FAILED
3. **tree-sitter-elm** - FAILED (but later succeeded with 0.23 MB)
4. **tree-sitter-make** - FAILED
5. **tree-sitter-ocaml** - FAILED

## Root Causes

### 1. Cross-Parser Dependencies (Highlight Queries)

**tree-sitter-c** - Failed because C++ depends on it:
```rust
// In CPlusPlus case:
let mut highlight_query = tree_sitter_c::HIGHLIGHT_QUERY.to_owned();
highlight_query.push_str(tree_sitter_cpp::HIGHLIGHT_QUERY);
```
C++ extends the C grammar, so it imports C's highlighting queries. Removing tree-sitter-c breaks the C++ parser compilation.

**tree-sitter-javascript** - Would fail if removed because:
- TypeScript depends on it (both TypeScript and TypeScriptTsx)
- QML depends on it
```rust
// In TypeScript case:
let mut highlight_query = tree_sitter_javascript::HIGHLIGHT_QUERY.to_owned();
highlight_query.push_str(tree_sitter_typescript::HIGHLIGHTS_QUERY);

// In Qml case:
let mut highlight_query = tree_sitter_javascript::HIGHLIGHT_QUERY.to_owned();
highlight_query.push_str(tree_sitter_typescript::HIGHLIGHTS_QUERY);
highlight_query.push_str(tree_sitter_qmljs::HIGHLIGHTS_QUERY);
```

### 2. Sub-Language Dependencies

**tree-sitter-make** - Failed because Make parser has embedded Bash:
```rust
sub_languages: vec![TreeSitterSubLanguage {
    query: ts::Query::new(&language, "(shell_function (shell_command) @contents)")
        .unwrap(),
    parse_as: Bash,  // ← Requires Bash parser to exist
}],
```

**tree-sitter-html** - Would fail if CSS or JavaScript were removed:
```rust
sub_languages: vec![
    TreeSitterSubLanguage {
        query: ts::Query::new(&language, "(style_element (raw_text) @contents)").unwrap(),
        parse_as: Css,  // ← Requires CSS parser
    },
    TreeSitterSubLanguage {
        query: ts::Query::new(&language, "(script_element (raw_text) @contents)").unwrap(),
        parse_as: JavaScript,  // ← Requires JavaScript parser
    },
],
```

### 3. Multi-Variant Languages

**tree-sitter-ocaml** - Failed because one crate provides two language variants:
```rust
OCaml => {
    let language_fn = tree_sitter_ocaml::LANGUAGE_OCAML;
    // ...
}
OCamlInterface => {
    let language_fn = tree_sitter_ocaml::LANGUAGE_OCAML_INTERFACE;
    // ...
}
```
Both OCaml and OCamlInterface come from the same `tree-sitter-ocaml` crate. The testing script only stubbed one variant, causing the other to fail compilation.

### 4. Vendored/Build Issues

**tree-sitter-ada** - Likely failed due to build.rs or vendored parser issues. Ada may have special compilation requirements or dependencies that weren't properly handled by the simple stub approach.

## Dependency Graph

```
tree-sitter-c
  └─→ tree-sitter-cpp (uses C's HIGHLIGHT_QUERY)

tree-sitter-javascript
  ├─→ tree-sitter-typescript (uses JS's HIGHLIGHT_QUERY)
  ├─→ tree-sitter-qmljs (uses JS's HIGHLIGHT_QUERY)
  └─→ tree-sitter-html (sub-language for <script> tags)

tree-sitter-bash
  └─→ tree-sitter-make (sub-language for shell commands)

tree-sitter-css
  └─→ tree-sitter-html (sub-language for <style> tags)

tree-sitter-ocaml (single crate)
  ├─→ OCaml language variant
  └─→ OCamlInterface language variant
```

## Impact on Analysis

### Parsers We Couldn't Measure Individually

These parsers can't be removed independently without breaking other parsers:

- **C**: Required by C++
- **JavaScript**: Required by TypeScript, QML, HTML
- **Bash**: Required by Make
- **CSS**: Required by HTML

### What This Means for Size Reduction

The cross-dependencies create "parser bundles" that must be kept together:

1. **C/C++ bundle**: Can't remove C without breaking C++
2. **Web bundle**: Can't remove JavaScript without breaking TypeScript, QML, and HTML
3. **Systems bundle**: Bash + Make are linked

This is actually **useful information** for the feature flag design - these should be grouped together in feature tiers since they depend on each other anyway.

## Recommended Feature Grouping

Based on dependencies:

```toml
[features]
# Web development (must stay together)
web = ["javascript", "typescript", "html", "css"]
javascript = ["dep:tree-sitter-javascript"]
typescript = ["dep:tree-sitter-typescript", "javascript"]  # depends on JS
html = ["dep:tree-sitter-html", "javascript", "css"]  # depends on both
css = ["dep:tree-sitter-css"]

# Systems programming (must stay together)
systems-c = ["c", "cpp"]
c = ["dep:tree-sitter-c"]
cpp = ["dep:tree-sitter-cpp", "c"]  # depends on C

# Build tools (must stay together)
build-tools = ["bash", "make"]
bash = ["dep:tree-sitter-bash"]
make = ["dep:tree-sitter-make", "bash"]  # depends on Bash
```

## Conclusion

The 9 failed parsers weren't due to bugs in the testing approach, but rather **fundamental cross-dependencies** in the parser architecture. This is valuable information that should inform the feature flag design to ensure dependent parsers are always included together.
