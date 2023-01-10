=======================================
Variable, recursively expanded, setting
=======================================
v = foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text)))

==================================
Variable, simply expanded, setting
==================================
v := foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text)))

=========================================
Variable, simply expanded, POSIX, setting
=========================================
v ::= foo.o bar.o

---

(makefile
  (variable_assignment
     name: (word)
    value: (text)))

=======================
Variable, splitted line
=======================
var := foo\
       bar

---

(makefile
  (variable_assignment
     name: (word)
    value: (text)))

=======================
Variable, special chars
=======================
var := 'hello\
world'

---

(makefile
  (variable_assignment
     name: (word)
    value: (text)))

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

================================
Variable, VPATH, Linux delimiter
================================
VPATH = foo:../bar

---

(makefile
  (VPATH_assignment
    value: (paths (word) (word))))

==================================
Variable, VPATH, Windows delimiter
==================================
VPATH = foo;../bar

---

(makefile
  (VPATH_assignment
    value: (paths (word) (word))))

=================================
Variable, target/pattern-specific
=================================
%.o : v = foo

---

(makefile
  (variable_assignment
    target_or_pattern: (list (word))
     name: (word)
    value: (text)))

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
Variable, substitution reference I
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
Variable, substitution reference II
===============================================
v := $(foo:%.o=%.c)

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
Variable, VPATH, concatenation, var reference and text
===============================================
VPATH = foo/$(bar)

---

(makefile
  (VPATH_assignment
    value: (paths
      (concatenation
        (word)
        (variable_reference (word))))))

========================================================
Variable, concatenation, var reference and var reference
========================================================
VPATH = $(foo)$(bar)

---

(makefile
  (VPATH_assignment
    value: (paths
      (concatenation
        (variable_reference (word))
        (variable_reference (word))))))

==========================================
Variable, computed variable, concatenation
==========================================
VPATH := $($(foo)_$(bar))

---

(makefile
  (VPATH_assignment
    value: (paths
      (variable_reference
        (concatenation
          (variable_reference (word))
          (word)
          (variable_reference (word)))))))

==============================================
Variable, shell command (not shell assignment)
==============================================
v = echo "foo"  > bar
v = echo "foo" !> bar
v = echo "foo" 1> bar
v = echo "foo" &> bar

---

(makefile
  (variable_assignment
    name: (word)
    value: (text))
  (variable_assignment
    name: (word)
    value: (text))
  (variable_assignment
    name: (word)
    value: (text))
  (variable_assignment
    name: (word)
    value: (text)))
