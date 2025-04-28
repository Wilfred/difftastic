# Glossary

**Atom**: An atom is an item in difftastic's syntax tree structure
that has no children. It represents things like literals, variable
names, and comments. See also 'list'.

**Delimiter**: A paired piece of syntax. A list has an open delimiter
and a close delimiter, such as `[` and `]`. Delimiters may not be
punctuation (e.g. `begin` and `end`) and may be empty strings (e.g. infix
syntax converted to difftastic's syntax tree).

**Hunk**: A group of lines displayed together in the diff
output. Increasing the number of context lines increases the size of
the hunk.

**LHS**: Left-hand side. Difftastic compares two items, and LHS refers
to the first item. See also 'RHS'.

**Line-oriented**: A traditional diff that compares which lines have
been added or removed, unlike difftastic. For example, GNU diff or the
diffs displayed on GitHub.

**List**: A list is an item in difftastic's syntax tree structure that
has an open delimiter, children, and a close delimiter. It represents
things like expressions and function definitions. See also 'atom'.

**Novel**: An addition or a removal. Syntax is novel if it occurs
in only one of the two items being compared.

**RHS**: Right-hand side. Difftastic compares two items, and RHS
refers to the second item. See also 'LHS'.

**Root**: A syntax tree without a parent node. Roots represent
top-level definitions in the file being diffed.

**Slider**: A diffing situation where there are multiple minimal diffs
possible, due to adjacent content. It is possible to 'slide' to
produce better results in this situation. See [the discussion in Tricky
Cases](./tricky_cases.html#sliders-flat).

**Syntax node**: An item in difftastic's syntax tree structure. Either
an atom or a list.

**Token**: A small piece of syntax tracked by difftastic (e.g. `$x`,
`function` or `]`), for highlighting and aligned display. This is
either an atom or a non-empty delimiter.
