# 解析代码

Difftastic uses
[tree-sitter](https://tree-sitter.github.io/tree-sitter/) to build a
parse tree. The parse tree is then converted to a simpler tree which
can be diffed.Difftastic会使用[tree-sitter](https://tree-sitter.github.io/tree-sitter/) 来建立一个语法树。然后，该语法树被转换为一个可以用来对比差异的简化版语法树。

## Parsing with Tree-sitter

Difftastic relies on tree-sitter to understand syntax. You can view
the parse tree that tree-sitter produces using the `--dump-ts`
flag.Difftastic依靠tree-sitter来理解语法。你可以使用`--dump-ts`来查看tree-sitter的语法树。

```
$ difft --dump-ts sample_files/javascript_simple_before.js | head
program (0, 0) - (7, 0)
  comment (0, 0) - (0, 8) "// hello"
  expression_statement (1, 0) - (1, 6)
    call_expression (1, 0) - (1, 5)
      identifier (1, 0) - (1, 3) "foo"
      arguments (1, 3) - (1, 5)
        ( (1, 3) - (1, 4) "("
        ) (1, 4) - (1, 5) ")"
    ; (1, 5) - (1, 6) ";"
  expression_statement (2, 0) - (2, 6)
```

## 简化的语法

Difftastic converts the tree-sitter parse tree to a simplified syntax
tree. The syntax tree is a uniform representation where everything is
either an atom (e.g. integer literals, comments, variable names) or a
list (consisting of the open delimiter, children and the close
delimiter).Difftastic将tree-sitter语法树转换为简化版的语法树。语法树是一种统一的表示方式，其中所有东西都是原子（例如，整数、注释、变量名）或者是一个列表（由开放分界符、子句和关闭分界符组成）以及分隔符。

The flag `--dump-syntax` will display the syntax tree generated for a
file.`--dump-syntax`将显示出当前文件所对应的语法树。

```
$ difft --dump-syntax sample_files/before.js
[
    Atom id:1 {
        content: "// hello",
        position: "0:0-8",
    },
    List id:2 {
        open_content: "",
        open_position: "1:0-0",
        children: [
          ...
```

### Conversion Process转换过程

The simple representation of the difftastic parse tree makes diffing
much easier. Converting the detailed tree-sitter parse tree is a
recursive tree walk, treating tree-sitter leaf nodes as atoms. There
are two exceptions.Difftastic语法树的简单表达方式使得差异分析变得更加容易。Difftastic是通过一种递归树的行走方式来将tree-sitter树进行简化，将tree-sitter的节点视作原子来处理。但有两个例外。

(1) Tree-sitter parse trees sometimes include unwanted structure. Some
grammars consider string literals to be a single token, whereas others
treat strings as a complex structure where the delimiters are
separate.Tree-sitter语法树有时会包括不需要的一些结构，有些语法会认为字符串是一种单一的字符，而有些则会将字符串视作为复杂的结构，此时的分隔符就会将字符串分割开。

`tree_sitter_parser.rs` uses `atom_nodes` to mark specific tree-sitter
node names as flat atoms even if the node has children.`tree-sitter_parser.rs`使用`atom_nodes`来标记特定的tree-sitter节点为平原子，即使该节点存在子节点。

(2) Tree-sitter parse trees include open and closing delimiters as
tokens. A list `[1]` will have a parse tree that includes `[` and `]`
as nodes.Tree-sitter分析树包括开放和关闭定界符作为其代码。列表`[1]`将有一个包括`[`和`]`的节点的语法树。

```
$ echo '[1]' > example.js
$ difft --dump-ts example.js
program (0, 0) - (1, 0)
  expression_statement (0, 0) - (0, 3)
    array (0, 0) - (0, 3)
      [ (0, 0) - (0, 1) "["
      number (0, 1) - (0, 2) "1"
      ] (0, 2) - (0, 3) "]"
```

`tree_sitter_parser.rs` uses `open_delimiter_tokens` to ensure that
`[` and `]` are used as delimiter content in the enclosing list,
rather than converitng them to atoms.`tree_sitter_parser.rs`使用`open_delimiter_tokens`来确保`[`和`]`被用作包围列表内容的分隔符，而不会将其转换为原子。

Difftastic can match up atoms that occur in different parts of the
simplified syntax tree. If e.g. a `[` is treated as an atom,
difftastic might match it with another `[` elsewhere. The resulting
diff would be unbalanced, highlighting different numbers of open and
close delimiters.Difftastic可以将出现简化语法树中不同部分的原子进行匹配。例如，如果一个`[`被当作一个原子，Difftastic可能会在其他地方将其与另一个`]`进行匹配。如果开放和关闭分界符的数量不同，最终的差异分析结果将会是不平衡的。

### Lossy Syntax Trees

The simplified syntax tree only stores node content and node
position. It does not store whitespace between nodes, and position is
largely ignored during diffing. 简化的语法树只存储节点内容与节点的位置，不会存储节点之间的空白，而且在差异分析的过程中，空格将会被忽略。
