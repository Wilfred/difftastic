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
