# 添加解析器

## 寻找解析器

Difftastic的新解析器必须完整且合理地维护。

有许多解析器可用，网站包括[一些著名的解析器列表](https://tree-sitter.github.io/tree-sitter/#available-parsers)。

## 添加源码

一旦你找到一个解析器，需要将其作为git的subtree添加到`vendored_parsers/`中。我们会使用[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json)作为例子。

```
$ git subtree add --prefix=vendored_parsers/tree-sitter-json git@github.com:tree-sitter/tree-sitter-json.git master
```

## 配置编译过程

Cargo不允许软件包包含`Cargo.toml`。需要在`src/`解析器子目录中添加一个符号链接。

```
$ cd vendor
$ ln -s tree-sitter-json/src tree-sitter-json-src
```

现在你可以通过在`build.rs`中加入目录，并将解析器添加到构建中。

```
TreeSitterParser {
    name: "tree-sitter-json",
    src_dir: "vendored_parsers/tree-sitter-json-src",
    extra_files: vec![],
},
```

如果你的解析器包括用于语法的自定义C或C++文件（例如，一个`scanner.cc`），请将它添加到`extra_files`中。

## 配置解析器

为你的语言在`tree_sitter_parser.rs`中增加一个条目。

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
            include_str!("../vendored_parsers/highlights/json.scm"),
        )
        .unwrap(),
    }
}
```

`name`是用户节目中显示的可读名称。

`atom_nodes`是一个树形节点名称的列表，这些节点应被视为原子。即使这些节点有子节点，也应被视为原子。这对于字符串表面之或插值字符串非常常见的，因为在这种情况下，节点可能有用来表示开头和结尾的引用号。

如果你没有设置`atom_nodes`，你可能会主要添加/删除的内容显示为白色。这通常表面了子节点的父节点应该被当作原子。

`delimiter_tokens`是Difftastic存储在闭包节点上的定界符。这使得Difftastic能够区分划线符号和语言中的其它标点符号。

如果你不设置`delimiter_tokens`，Difftastic会单独考虑这些标记，并会认为是添加了`(`，但是`)`没有发生变化。

你可以使用`difft --dump-ts foo.json`来查看树状解析器的结果，并使用`difft --dump-syntax foo.json`来确认你已经正确设置了原子和定界符。

## 配置滑块

请为你的语言在`sliders.rs`中添加入口。

## 配置语言检测

更新`guess_language.rs`中的`from_extension`以检测新的语言。

```
"json" => Some(Json),
```

也可能有与你的语言相关的文件名或shebangs。[GitHub的语言定义](https://github.com/github/linguist/blob/master/lib/linguist/languages.yml)是针对常见文件扩展名的一个有用来源。

## 语法高亮（可选）

要为你的语言添加语法高亮，如果有的话，你还需要在`queries/highlights.scm`文件一个符号链接。

```
$ cd vendored_parsers/highlights
$ ln -s ../tree-sitter-json/queries/highlights.scm json.scm
```

## 添加一个回归测试

最后，为你的语言添加一个回归测试，这样可以确保你的测试文件的输出不会意外改变。

回归测试文件存在于`sample_files/`中，其形式为
`foo_1.abc`和`foo_2.abc`。

```
$ nano simple_1.json
$ nano simple_2.json
```

运行回归测试脚本并更新`.expect`文件。

```
$ ./sample_files/compare_all.sh
$ cp sample_files/compare.result sample_files/compare.expected
```
