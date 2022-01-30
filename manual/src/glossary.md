# Glossary

**Atom**: An atom is an item in difftastic's syntax tree structure
that has no children. It represents things like literals, variable
names, and comments. See also 'list'.

**Delimiter**: A paired piece of syntax. A list has an open delimiter
and a close delimiter, such as `[` and `]`. Delimiters may not be
punctuation (e.g. `begin` and `end`) and may be empty strings (e.g. infix
syntax converted to difftastic's syntax tree).

**LHS**: Left-hand side. Difftastic compares two items, and LHS refers
to the first item. See also 'RHS'.

**List**: A list is an item in difftastic's syntax tree structure that
has an open delimiter, children, and a close delimiter. It represents
things like expressions and function definitions. See also 'atom'.

**Novel**: An addition or a removal. Syntax is novel if it occurs
in only one of the two items being compared.

**RHS**: Right-hand side. Difftastic compares two items, and RHS
refers to the second item. See also 'LHS'.

**Root**: A syntax tree without a parent node. Roots represent
top-level definitions in the file being diffed.

**Syntax node**: An item in difftastic's syntax tree structure. Either
an atom or a list.

**Token**: A small piece of syntax tracked by difftastic (e.g. `$x`,
`function` or `]`), for highlighting and aligned display. This is
either an atom or a non-empty delimiter.
