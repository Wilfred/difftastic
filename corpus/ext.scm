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
