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
regex
===

#rx".*"
#px"[\\s]*"
#rx#".*"
#px#"[\\s]*"

---
(program
  (regex)
  (regex
    (escape_sequence))
  (regex)
  (regex
    (escape_sequence)))
