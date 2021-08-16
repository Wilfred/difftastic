# v1.1 (unreleased)

Added support for dotted lists.

Added support for more special read syntax.

Linefeed characters (commonly used as section delimiters) are now treated
as whitespace rather than parse errors.

Fixed handling of string literals with newline escaping:

```
"foo\
bar"
```

# v1.0

Initial release.
