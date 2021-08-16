# v1.2 (unreleased)

No changes yet.

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
