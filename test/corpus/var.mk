=======================================
Variable, recursively expanded, setting
=======================================
v = foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text (word) (word))))

==================================
Variable, simply expanded, setting
==================================
v := foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text (word) (word))))

==================================
Variable, simply expanded, POSIX, setting
==================================
v ::= foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text (word) (word))))


