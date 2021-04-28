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

=======================================
Variable, VPATH
======================================
VPATH = foo:../bar

---

(makefile
  (VPATH_assignment
    value: (paths (word) (word))))


=================================
Variable, target/pattern-specific
================================
%.o : v = foo

---

(makefile
  (variable_assignment
    target_or_pattern: (list (word))
     name: (word)
    value: (text (word))))

=====================
Variable, empty value
=====================
v = 

---

(makefile
  (variable_assignment
    name: (word)))

=====================
Variable, reference
=====================
v = $(v) ${v}

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (variable_reference (word))
      (variable_reference (word)))))

==============================
Variable, reference, nested
==============================
v = $($(v)) $(${v}) ${${v}} ${$(v)}

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (variable_reference
        (variable_reference (word)))
      (variable_reference
        (variable_reference (word)))
      (variable_reference
        (variable_reference (word)))
      (variable_reference
        (variable_reference (word))))))

===============================================
Variable, substitution reference
===============================================
v := $(foo:.o=.c)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (substitution_reference
               text: (word)
            pattern: (word)
        replacement: (word)))))

===============================================
Variable, concatenation, var reference and text
===============================================
v = foo/$(bar)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (concatenation
        (word)
        (variable_reference (word))))))

========================================================
Variable, concatenation, var reference and var reference
========================================================
v = $(foo)$(bar)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (concatenation
        (variable_reference (word))
        (variable_reference (word))))))

==========================================
Variable, computed variable, concatenation
==========================================
v := $($(foo)_$(bar))

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (variable_reference
        (concatenation
          (variable_reference (word))
          (word)
          (variable_reference (word)))))))
