===
list
===

()
(1 2 3)
{1 2 3}
[1 2 3]
(1 (2) 3)
(1 . 3)
(1 . (3))
(1 . 2 . 3)

---
(program
  (list)
  (list
    (number)
    (number)
    (number))
  (list
    (number)
    (number)
    (number))
  (list
    (number)
    (number)
    (number))
  (list
    (number)
    (list
      (number))
    (number))
  (list
    (number)
    (dot)
    (number))
  (list
    (number)
    (dot)
    (list
      (number)))
  (list
    (number)
    (dot)
    (number)
    (dot)
    (number)))

===
vector
===

#(1 "apple" 3)
#3("apple" "banana")
#3()

---
(program
  (vector
    (list
      (number)
      (string)
      (number)))
  (vector
    (number)
    (list
      (string)
      (string)))
  (vector
    (number)
    (list)))

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

