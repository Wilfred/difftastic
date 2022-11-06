## Nodes

This page contains all visible nodes in yaml format.

```yml
- comment # comments
- block_comment
- sexp_comment
- extension # #lang or #reader
- lang_name # language name in extension
- dot # .

- boolean
- string
- escape_sequence # escape sequence in string
- here_string
- byte_string
- character
- number
- symbol
- decimal # [0-9]+ used for graph reference or vector length in literal

- keyword # for example, #:abc
- regex
- box
- graph
- structure
- hash # hash table
- quote # '
- quasiquote # `
- syntax # #'
- quasisyntax # #`
- unquote # ,
- unquote_splicing # ,@
- unsyntax # #,
- unsyntax_splicing # #,@

- list
- vector
```

