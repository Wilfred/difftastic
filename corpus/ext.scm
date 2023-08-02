===
list
===

{define x 1}

---
(program
  (list
    (symbol)
    (symbol)
    (number)))

===
keyword
===

#:abc
#:1abc

---
(program
  (keyword)
  (keyword))

===
character
===

#\bel
#\ls
#\nel
#\rubout
#\vt

---
(program
  (character)
  (character)
  (character)
  (character)
  (character))

===
string
===

"\. \'"

---
(program
  (string
    (escape_sequence)
    (escape_sequence)))
