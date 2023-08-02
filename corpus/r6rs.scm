===
boolean
===

#t
#f
#T
#F

---
(program
  (boolean)
  (boolean)
  (boolean)
  (boolean))

===
character
===

#\1
#\x
#\nul #\alarm #\backspace
#\tab #\linefeed #\newline
#\vtab #\page #\return #\esc
#\space #\delete
#\x0
#\xF
#\xFFAA00

---
(program
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character)
  (character))

===
string
===
";;; abcd"
"str\\\\"
"str\\"
"str\""
" ; abc ; "
" "
"
abc"
"\a\b\t\n\v\f\r\"\\\\
\\"

---
(program
  (string)
  (string
    (escape_sequence)
    (escape_sequence))
  (string
    (escape_sequence))
  (string
    (escape_sequence))
  (string)
  (string)
  (string)
  (string
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)))

===
directive
===

#!r6rs

---
(program
  (directive))

===
comment
===
; abc
#; (list)
#| comment |#
#|
|comment
|#
#| a #| b |# |#
#|#|#||##|x|#|##||#|#

---
(program
  (comment)
  (comment (list (symbol)))
  (block_comment)
  (block_comment)
  (block_comment
    (block_comment))
  (block_comment
    (block_comment
      (block_comment)
      (block_comment))
    (block_comment)))

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

===
number
===

#X01AF
100000|10
+nan.0
-inf.0
#E#D+10000.1098|100-1000i

---
(program
  (number)
  (number)
  (number)
  (number)
  (number))

