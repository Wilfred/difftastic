===
graph
===

(#1=100 #1# #1#)
#0= (1 . #0#)

---

(program
  (list
    (graph
      (number))
    (graph)
    (graph))
  (graph
    (list
      (number)
      (dot)
      (graph))))


==========
structure
==========

#s(1 2)
#s{"abc" 2}

---

(program
  (structure
    (list
      (number)
      (number)))
  (structure
    (list
      (string)
      (number))))

===
hash table
===

#hash()
#hasheq()
#hash(("a" . 5))
#hasheq(("a" . 5) ("b" . 7))
#hasheqv(("a" . 5))

---

(program
  (hash
    (list))
  (hash
    (list))
  (hash
    (list
      (list
        (string)
        (dot)
        (number))))
  (hash
    (list
      (list
        (string)
        (dot)
        (number))
      (list
        (string)
        (dot)
        (number))))
  (hash
    (list
      (list
        (string)
        (dot)
        (number)))))


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

===
box
===

#&17
#&"str"
#& ()

---

(program
  (box
    (number))
  (box
    (string))
  (box
    (list)))
