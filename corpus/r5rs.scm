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

#\SpAcE
#\NewLiNe
#\1
#\x

---
(program
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
  (string))

===
comment
===

; abc

---
(program
  (comment))

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

1
1.0
+1
-1
#d1
#b010101011
#B010101011
#o7
-i
-1i
1-2i
1e12312
#b#e-1######/1########-1#######/1########i
#e-1010#######/1#########

---
(program
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number))
