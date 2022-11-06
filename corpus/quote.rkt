===
quote
===

'123
`(1 ,2)
#'123
#`123

---

(program
  (quote
    (number))
  (quasiquote
    (list
      (number)
      (unquote
        (number))))
  (syntax (number))
  (quasisyntax (number)))

===
unquote
===

,1
,@1
#,1
#,@1

---
(program
  (unquote (number))
  (unquote_splicing (number))
  (unsyntax (number))
  (unsyntax_splicing
    (number)))
