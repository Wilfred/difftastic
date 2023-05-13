# tree-sitter-smali

This crate provides a Smali grammar for the [tree-sitter][] parsing library. To
use this crate, add it to the `[dependencies]` section of your `Cargo.toml`
file. (Note that you will probably also need to depend on the
[`tree-sitter`][tree-sitter crate] crate to use the parsed result in any useful
way.)

```toml
[dependencies]
tree-sitter = "~0.20.3"
tree-sitter-smali = "1.0.0"
```

Typically, you will use the [language][language func] function to add this
grammar to a tree-sitter [Parser][], and then use the parser to parse some code:

```rust
let code = r#"
.class public Lmain;

.super Ljava/lang/Object;

.source "main.java"

.implements Lsome/interface;
.implements Lsome/other/interface;

.field public static aStaticFieldWithoutAnInitializer:I

.field public static methodStaticField:Ljava/lang/reflect/Method; = Lbaksmali/test/class;->testMethod(ILjava/lang/String;)Ljava/lang/String;

.method public constructor <init>()V
    .registers 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
    return-void
.end method

"#;
let mut parser = Parser::new();
parser.set_language(tree_sitter_smali::language()).expect("Error loading Smali grammar");
let parsed = parser.parse(code, None);
```

If you have any questions, please reach out to us in the [tree-sitter
discussions] page.

[language func]: https://docs.rs/tree-sitter-smali/*/tree_sitter_smali/fn.language.html
[parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
[tree-sitter]: https://tree-sitter.github.io/
[tree-sitter crate]: https://crates.io/crates/tree-sitter
[tree-sitter discussions]: https://github.com/tree-sitter/tree-sitter/discussions
