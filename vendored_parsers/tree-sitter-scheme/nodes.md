## Nodes

This page contains all visible nodes in yaml format.

```yaml
- comment
- block_comment # for example, #| something |#
- directive # for example, #!r6rs
- boolean
- character
- string
- escape_sequence # escape sequence in string, for example, \n in "abc\n"
- number
- symbol # identifier
- keyword # #:identifier

- list # things surrounded by () or [] or {}
- quote # '
- quasiquote # `
- syntax # #'
- quasisyntax #`
- unquote # ,
- unquote_splicing # ,@
- unsyntax # #,
- unsyntax_splicing # #,@

- vector
- byte_vector
```

