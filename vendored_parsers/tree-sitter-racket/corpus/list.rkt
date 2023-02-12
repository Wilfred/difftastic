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
    (decimal)
    (list
      (string)
      (string)))
  (vector
    (decimal)
    (list)))


