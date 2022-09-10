# Glossary词典

**Atom原子**: An atom is an item in difftastic's syntax tree structure
that has no children. It represents things like literals, variable
names, and comments. See also 'list'.原子是Difftastic语法树结构中的一个项目，没有子项。它代表着字面量、变量名以及注释。 另见'list'。

**Delimiter分隔符**: A paired piece of syntax. A list has an open delimiter
and a close delimiter, such as `[` and `]`. Delimiters may not be
punctuation (e.g. `begin` and `end`) and may be empty strings (e.g. infix
syntax converted to difftastic's syntax tree).即一个成对的语法。一个列表有一个开放定界符和一个封闭定界符，例如`[`和`]`。分隔符不可以是标点符号（例如，`begin`和`end`）以及空字符串（例如：infix语法转换为Difftastic的语法树）。

**LHS**: Left-hand side. Difftastic compares two items, and LHS refers
to the first item. See also 'RHS'.即Left-hand side。Difftastic会对比两个文件，而LHS是指第一个文件。另见'RHS'。

**List列表**: A list is an item in difftastic's syntax tree structure that
has an open delimiter, children, and a close delimiter. It represents
things like expressions and function definitions. See also 'atom'.列表是Difftastic语法树结构中的一个项目，它有一个开放定界符、子项和一个封闭定界符。它代表表达式和函数定义等东西。另见'atom'。

**Novel注意项**: An addition or a removal. Syntax is novel if it occurs
in only one of the two items being compared.一个增加或一个减少。如果语法只出现在被比较的两个项目中的一个，那么它就是一个注意项。

**RHS**: Right-hand side. Difftastic compares two items, and RHS
refers to the second item. See also 'LHS'.即Right-hand side。Difftastic会对比两个文件，而RHS是指第一个文件。另见'LHS'。

**Root根**: A syntax tree without a parent node. Roots represent
top-level definitions in the file being diffed.

**Syntax node**: An item in difftastic's syntax tree structure. Either
an atom or a list.一个没有父节点的语法树。根代表被差异的文件中的顶级定义。

**字符**: A small piece of syntax tracked by difftastic (e.g. `$x`,
`function` or `]`), for highlighting and aligned display. This is
either an atom or a non-empty delimiter.一小段由Difftastic跟踪的语法（例如`$x`,
`function` 或 `]`），用于高亮显示和对齐显示。它是原子或者是一个非空的分隔符。
