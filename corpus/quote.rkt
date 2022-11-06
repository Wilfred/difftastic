===
quote
===

'123
`(1 ,2)
,@1

---

(program
  (quote
    (number))
  (quasiquote
    (list
      (number)
      (unquote
        (number))))
  (unquote_splicing
    (number)))
