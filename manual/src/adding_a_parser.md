# Adding A Parser

## Finding a parser

New parsers for difftastic must be reasonably complete and maintained.

There are many tree-sitter parsers available, and the tree-sitter
website includes [a list of some well-known
parsers](https://tree-sitter.github.io/tree-sitter/#available-parsers).

## Add the source code

Ideally, the parser should be available as a Rust crate on crates.io.
If that's the case, add it to `Cargo.toml` in the alphabetically sorted list
of parser dependencies. For instance:
```
tree-sitter-json = "0.24.8"
```
Otherwise, it is possible to [vendor the parser in difftastic's source code](./parser_vendoring.md),
but this should only be used as a last resort.

## Configure parsing

Add an entry to `tree_sitter_parser.rs` for your language.

```rust
Json => {
    let language_fn = tree_sitter_json::LANGUAGE;
    let language = tree_sitter::Language::new(language_fn);

    TreeSitterConfig {
        language,
        atom_nodes: vec!["string"].into_iter().collect(),
        delimiter_tokens: vec![("{", "}"), ("[", "]")],
        highlight_query: ts::Query::new(language, tree_sitter_json::HIGHLIGHTS_QUERY)
            .unwrap(),
        sub_languages: vec![],
    }
}
```

If the Rust crate does not include a `HIGHLIGHTS_QUERY`, then you need to include 
it from a file instead, with
```
include_str!("../../vendored_parsers/highlights/json.scm")
```
Many parser repositories include a highlights query in the repository without
exposing it in the Rust crate. In that case you can include it as
`vendored_parsers/highlights/json.scm` in the repository.

`atom_nodes` is a list of tree-sitter node names that should be
treated as atoms even though the nodes have children. This is common
for things like string literals or interpolated strings, where the
node might have children for the opening and closing quote.

If you don't set `atom_nodes`, you may notice added/removed content
shown in white. This is usually a sign that child node should have its
parent treated as an atom.

`delimiter_tokens` are delimiters that difftastic stores on
the enclosing list node. This allows difftastic to distinguish
delimiter tokens from other punctuation in the language.

If you don't set `delimiter_tokens`, difftastic will consider the
tokens in isolation, and may think that a `(` was added but the `)`
was unchanged.

You can use `difft --dump-ts foo.json` to see the results of the
tree-sitter parser, and `difft --dump-syntax foo.json` to confirm that
you've set atoms and delimiters correctly.

`sub-languages` is empty for most languages: see the code documentation for details.

## Configure language detection

Update `language_name` in `guess_language.rs` to detect your new
language. Insert a match arm like:

```
Json => "json",
```

There may also file names or shebangs associated with your language; configure those
by adapting the `language_globs`, `from_emacs_mode_header` and `from_shebang` functions
in that file.
[GitHub's linguist definitions](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)
are a useful source of common file extensions.

## Syntax highlighting (Optional)

To add syntax highlighting for your language, you'll also need a symlink
to the `queries/highlights.scm` file, if available.

```
$ cd vendored_parsers/highlights
$ ln -s ../tree-sitter-json/queries/highlights.scm json.scm
```

## Test It

Search GitHub for a popular repository in your target language
([example
search](https://github.com/search?l=&o=desc&q=stars%3A%3E100+language%3AJSON&s=stars&type=repositories))
and confirm that git history looks sensible with difftastic.

## Add a regression test

Finally, add a regression test for your language. This ensures that
the output for your test file doesn't change unexpectedly.

Regression test files live in `sample_files/` and have the form
`foo_1.abc` and `foo_2.abc`.

```
$ nano simple_1.json
$ nano simple_2.json
```

Run the regression test script and update the `.expected` file.

```
$ ./sample_files/compare_all.sh
$ cp sample_files/compare.result sample_files/compare.expected
```

## Maintenance

To update a parser that is already imported, use `git subtree pull`.

```
$ git subtree pull --prefix=vendored_parsers/tree-sitter-json git@github.com:tree-sitter/tree-sitter-json.git master
```
