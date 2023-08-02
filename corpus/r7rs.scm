===
boolean
===

#t #T
#f #F
#TruE
#FaLse

---
(program
  (boolean)
  (boolean)
  (boolean)
  (boolean)
  (boolean)
  (boolean))

===
character
===

#\.
#\1
#\alarm #\backspace #\delete #\escape
#\newline #\null #\return #\space #\tab
#\X09abcDEF

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
  (character))

===
string
===

" "
"\  
   123"
"\X09abcDEF;"
"\a\t \b \n \r"

---
(program
  (string)
  (string
    (escape_sequence))
  (string
    (escape_sequence))
  (string
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)
    (escape_sequence)))

===
directive
===

#!fold-case
#!no-fold-case

---
(program
  (directive)
  (directive))

===
comment
===

; cmt
#| #| 
|# |#

#; #;1 2

---
(program
  (comment)
  (block_comment
    (block_comment))
  (comment
    (comment
      (number))
    (number)))

===
quote
===

'sym
`(1 ,2 ,@3 . 4)

---
(program
  (quote (symbol))
  (quasiquote
    (list
      (number)
      (unquote
        (number))
      (unquote_splicing
        (number))
      (symbol)
      (number))))

===
number
===

1
0.0
#I#d+inf.0
#i#D10/99+99/1i
#i#D10/99-0123.0E+1i

---
(program
  (number)
  (number)
  (number)
  (number)
  (number))

===
symbol
===

a
Z
! $ % & * / : < = > ? ^ _ ~
+ -
++
--
+@
+!
+!.
+..!$
1+
123abc123
| abc |
|
#;abc
|
|\| \a\b\t\n\r\X0AF;|

---
(program
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol))
