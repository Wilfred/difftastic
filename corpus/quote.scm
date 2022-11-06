===
quote
===

'abc
`abc
#'abc
#`abc

---
(program
  (abbreviation (quote (symbol)))
  (abbreviation (quasiquote (symbol)))
  (abbreviation (syntax (symbol)))
  (abbreviation (quasisyntax (symbol))))

===
unquote
===

,abc
,@abc
#,abc
#,@abc

---
(program
  (abbreviation (unquote (symbol)))
  (abbreviation (unquote_splicing (symbol)))
  (abbreviation (unsyntax (symbol)))
  (abbreviation (unsyntax_splicing (symbol))))
