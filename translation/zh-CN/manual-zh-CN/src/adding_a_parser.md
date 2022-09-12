# Adding A Parser添加解析器

## Finding a parser寻找解析器

New parsers for difftastic must be reasonably complete and maintained.Difftastic的新解析器必须完整且合理地维护。

There are many tree-sitter parsers available, and the tree-sitter
website includes [a list of some well-known
parsers](https://tree-sitter.github.io/tree-sitter/#available-parsers).有许多解析器可用，网站包括[一些著名的解析器列表](https://tree-sitter.github.io/tree-sitter/#available-parsers)。

## Add the source code添加源码

Once you've found a parser, add it as a git subtree to
`vendor/`. We'll use
[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json) as
an example.一旦你找到一个解析器，需要将其作为git的subtree添加到`vendor/`中。我们会使用[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json)作为例子。

```
$ git subtree add --prefix=vendor/tree-sitter-json git@github.com:tree-sitter/tree-sitter-json.git master
```

## Configure the build配置编译过程

Cargo does not allow packages to include subdirectories that contain a
`Cargo.toml`. Add a symlink to the `src/` parser subdirectory.Cargo不允许软件包包含`Cargo.toml`。需要在`src/`解析器子目录中添加一个符号链接。

```
$ cd vendor
$ ln -s tree-sitter-json/src tree-sitter-json-src
```

You can now add the parser to build by including the directory in
`build.rs`. 现在你可以通过在`build.rs`中加入目录，并将解析器添加到构建中。

```
TreeSitterParser {
    name: "tree-sitter-json",
    src_dir: "vendor/tree-sitter-json-src",
    extra_files: vec![],
},
```

If your parser includes custom C or C++ files for lexing (e.g. a
`scanner.cc`), add them to `extra_files`.如果你的解析器包括用于语法的自定义C或C++文件（例如，一个`scanner.cc`），请将它添加到`extra_files`中。

## Configure parsing配置解析器

Add an entry to `tree_sitter_parser.rs` for your language.为你的语言在`tree_sitter_parser.rs`中增加一个条目。

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

`name` is the human-readable name shown in the UI.`name`是用户节目中显示的可读名称。

`atom_nodes` is a list of tree-sitter node names that should be
treated as atoms even though the nodes have children. This is common
for things like string literals or interpolated strings, where the
node might have children for the opening and closing quote.`atom_nodes`是一个树形节点名称的列表，这些节点应被视为原子。即使这些节点有子节点，也应被视为原子。这对于字符串表面之或插值字符串非常常见的，因为在这种情况下，节点可能有用来表示开头和结尾的引用号。

If you don't set `atom_nodes`, you may notice added/removed content
shown in white. This is usually a sign that child node should have its
parent treated as an atom.如果你没有设置`atom_nodes`，你可能会主要添加/删除的内容显示为白色。这通常表面了子节点的父节点应该被当作原子。

`delimiter_tokens` are delimiters that difftastic stores on
the enclosing list node. This allows difftastic to distinguish
delimiter tokens from other punctuation in the language.`delimiter_tokens`是Difftastic存储在闭包节点上的定界符。这使得Difftastic能够区分划线符号和语言中的其它标点符号。

If you don't set `delimiter_tokens`, difftastic will consider the
tokens in isolation, and may think that a `(` was added but the `)`
was unchanged.如果你不设置`delimiter_tokens`，Difftastic会单独考虑这些标记，并会认为是添加了`(`，但是`)`没有发生变化。

You can use `difft --dump-ts foo.json` to see the results of the
tree-sitter parser, and `difft --dump-syntax foo.json` to confirm that
you've set atoms and delimiters correctly.你可以使用`difft --dump-ts foo.json`来查看树状解析器的结果，并使用`difft --dump-syntax foo.json`来确认你已经正确设置了原子和定界符。

## Configure sliders配置滑动

Add an entry to `sliders.rs` for your language.请为你的语言在`sliders.rs`中添加入口。

## Configure language detection配置语言检测

Update `from_extension` in `guess_language.rs` to detect your new
language.更新`guess_language.rs`中的`from_extension`以检测新的语言。

```
"json" => Some(Json),
```

There may also file names or shebangs associated with your
language. [GitHub's linguist
definitions](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)
is a useful source of common file extensions.也可能有与你的语言相关的文件名或shebangs。[GitHub的语言定义](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)是针对常见文件扩展名的一个有用来源。

## Syntax highlighting (Optional)语法高亮（可选）

To add syntax highlighting for your language, you'll also need a symlink
to the `queries/highlights.scm` file, if available.要为你的语言添加语法高亮，如果有的话，你还需要在`queries/highlights.scm`文件一个符号链接。

```
$ cd vendor/highlights
$ ln -s ../tree-sitter-json/queries/highlights.scm json.scm
```

## Add a regression test添加一个回归测试

Finally, add a regression test for your language. This ensures that
the output for your test file doesn't change unexpectedly.最后，为你的语言添加一个回归测试，这样可以确保你的测试文件的输出不会意外改变。

Regression test files live in `sample_files/` and have the form
`foo_before.abc` and `foo_after.abc`.回归测试文件存在于`sample_files/`中，其形式为
`foo_before.abc`和`foo_after.abc`。

```
$ nano simple_before.json
$ nano simple_after.json
```

Run the regression test script and update the `.expected` file.运行回归测试脚本并更新`.expect`文件。

```
$ ./sample_files/compare_all.sh
$ cp sample_files/compare.result sample_files/compare.expected
```
