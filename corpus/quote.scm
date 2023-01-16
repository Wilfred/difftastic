===
quote
===

'abc
`abc
#'abc
#`abc

---
(program
  (quote (symbol))
  (quasiquote (symbol))
  (syntax (symbol))
  (quasisyntax (symbol)))

===
unquote
===

,abc
,@abc
#,abc
#,@abc

---
(program
  (unquote (symbol))
  (unquote_splicing (symbol))
  (unsyntax (symbol))
  (unsyntax_splicing (symbol)))
