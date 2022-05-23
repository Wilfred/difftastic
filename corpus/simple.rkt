===
string
===

"Apple"
"\x41pple"
"\"Apple\""
"\\"
#"Apple"

---
(program
  (string)
  (string
    (escape_sequence))
  (string
    (escape_sequence)
    (escape_sequence))
  (string
    (escape_sequence))
  (byte_string))

===
boolean
===

#t
#f
#true
#false

---
(program
  (boolean)
  (boolean)
  (boolean)
  (boolean))

===
number
===

-1
1/2
1.0
1+2i
1/2+3/4i
1.0+3.0e7i
2e5
#i5
#e2e5
#x2e5
#b101
+inf.t
-nan.t

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
  (number))
