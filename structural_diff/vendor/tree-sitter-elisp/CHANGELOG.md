# v1.3 (unreleased)

Don't error on quoted forms that look like function definitions (such
as `'(defun foo)`).

# v1.2

Added some basic syntax highlighting support ("queries" in tree-sitter
terms).

Function definitions are now handled separately from other
s-expressions. Added highlighting and tags table queries for function
definitions.

Macros are also handled separately to other s-expressions. They are
treated the same as functions for highlighting and tags tables.

Special forms are now parsed and highlighted separately from
s-expressions.

Added highlighting for `nil` and `t`.

# v1.1

Added support for more special read syntax.

Added support for bytecode literals.

Linefeed characters (commonly used as section delimiters) are now treated
as whitespace rather than parse errors.

Fixed handling of string literals with newline escaping:

```
"foo\
bar"
```

Fixed handling escaped characters and non-ASCII character in symbols.

# v1.0

Initial release.
