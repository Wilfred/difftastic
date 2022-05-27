===
comment
===
;1
; comment
#| a |#
#| #| a |# 1 |#
#;1
#!/bin/sh
#! /bin/sh

---

(program
  (comment)
  (comment)
  (block_comment)
  (block_comment
    (block_comment))
  (sexp_comment
    (number))
  (comment)
  (comment))
