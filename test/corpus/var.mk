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

==================================
Variable, splitted line
==================================
var := foo\
       bar

---

(makefile
  (variable_assignment
     name: (word)
    value: (text (word) (word))))

==================================
Variable, shell assignment
==================================
var != echo foo

---

(makefile
  (shell_assignment
     name: (word)
    value: (shell_text)))

==================================
Variable, shell assignment, split line
==================================
var != echo foo\
	bar

---

(makefile
  (shell_assignment
     name: (word)
    value: (shell_text)))

==================================
Variable, define directive
==================================
define two-lines
echo foo
echo bar
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

==================================
Variable, define directive, operator
==================================
define two-lines :=
echo foo
echo bar
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

=====================================
Variable, define directive, make code
=====================================
define rule =
foo: bar
	baz
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

=======================================
Variable, define directive, whitespace
======================================
 define  foo  = 
      bar
 endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

=======================================
Variable, define directive, NOT comments
======================================
define foo =
#comment
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

