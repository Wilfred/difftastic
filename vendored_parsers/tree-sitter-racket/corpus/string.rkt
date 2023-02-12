===
string
===

"Apple"
"\x41pple"
"\"Apple\""
"\\"
#"Apple"
#<<EOF
(define (fib n)
  (if (< n 2) 1
    (+ (fib (- n 1))
       (fib (- n 2)))))
EOF
#<<one two three
one two three


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
  (byte_string)
  (here_string)
  (here_string))


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
