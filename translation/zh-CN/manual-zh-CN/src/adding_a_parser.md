# Adding A Parser

## Finding a parser

New parsers for difftastic must be reasonably complete and maintained.

There are many tree-sitter parsers available, and the tree-sitter
website includes [a list of some well-known
parsers](https://tree-sitter.github.io/tree-sitter/#available-parsers).

## Add the source code

Once you've found a parser, add it as a git subtree to
`vendor/`. We'll use
[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json) as
an example.

```
$ git subtree add --prefix=vendor/tree-sitter-json git@github.com:tree-sitter/tree-sitter-json.git master
```

## Configure the build

Cargo does not allow packages to include subdirectories that contain a
`Cargo.toml`. Add a symlink to the `src/` parser subdirectory.

```
$ cd vendor
$ ln -s tree-sitter-json/src tree-sitter-json-src
```

You can now add the parser to build by including the directory in
`build.rs`. 

```
TreeSitterParser {
    name: "tree-sitter-json",
    src_dir: "vendor/tree-sitter-json-src",
    extra_files: vec![],
},
```

If your parser includes custom C or C++ files for lexing (e.g. a
`scanner.cc`), add them to `extra_files`.

## Configure parsing

Add an entry to `tree_sitter_parser.rs` for your language.

```
Json => {
    let language = unsafe { tree_sitter_json() };
    TreeSitterConfig {
        name: "JSON",
        language,
        atom_nodes: vec!["string"].into_iter().collect(),
        delimiter_tokens: vec![("{", "}"), ("[", "]")],
        highlight_query: ts::Query::new(
            language,
            include_str!("../vendor/highlights/json.scm"),
        )
        .unwrap(),
    }
}
```

`name` is the human-readable name shown in the UI.

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

## Configure sliders

Add an entry to `sliders.rs` for your language.

## Configure language detection

Update `from_extension` in `guess_language.rs` to detect your new
language.

```
"json" => Some(Json),
```

There may also file names or shebangs associated with your
language. [GitHub's linguist
definitions](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)
is a useful source of common file extensions.

## Syntax highlighting (Optional)

To add syntax highlighting for your language, you'll also need a symlink
to the `queries/highlights.scm` file, if available.

```
$ cd vendor/highlights
$ ln -s ../tree-sitter-json/queries/highlights.scm json.scm
```

## Add a regression test

Finally, add a regression test for your language. This ensures that
the output for your test file doesn't change unexpectedly.

Regression test files live in `sample_files/` and have the form
`foo_before.abc` and `foo_after.abc`.

```
$ nano simple_before.json
$ nano simple_after.json
```

Run the regression test script and update the `.expected` file.

```
$ ./sample_files/compare_all.sh
$ cp sample_files/compare.result sample_files/compare.expected
```
