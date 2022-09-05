==================
Directive, include
==================
 include foo *.mk
-include foo *.mk
sinclude foo *.mk

---

(makefile
  (include_directive
    filenames: (list (word) (word)))
  (include_directive
    filenames: (list (word) (word)))
  (include_directive
    filenames: (list (word) (word))))

================
Directive, vpath
================
vpath
vpath %.p
vpath %.p ../foo

---

(makefile
  (vpath_directive)
  (vpath_directive
        pattern: (word))
  (vpath_directive
        pattern: (word)
    directories: (paths (word))))

================================
Directive, vpath, list delimiter
================================
vpath % foo:bar

---

(makefile
  (vpath_directive
    pattern: (word)
    directories: (paths (word) (word))))

======================
Directive, export, all
======================
export

---

(makefile
  (export_directive))

================================
Directive, export, variable name
================================
export foo bar

---

(makefile
  (export_directive
    variables: (list (word) (word))))

======================================
Directive, export, variable assignment
======================================
export foo = bar

---

(makefile
  (export_directive
    (variable_assignment
       name: (word)
      value: (text))))

========================
Directive, unexport, all
========================
unexport

---

(makefile
  (unexport_directive))

==================================
Directive, unexport, variable name
==================================
unexport foo bar

---

(makefile
  (unexport_directive
    variables: (list (word) (word))))

========================================
Directive, override, variable assignment
========================================
override v = foo

---

(makefile
  (override_directive
    (variable_assignment
       name: (word)
      value: (text))))

========================================
Directive, override, variable definition
========================================
override define foo =
endef

---

(makefile
  (override_directive
    (define_directive
      name: (word))))

=============================
Directive, override, undefine
=============================
override undefine foo

---

(makefile
  (override_directive
    (undefine_directive
      variable: (word))))

===================
Directive, undefine
===================
undefine foo

---

(makefile
  (undefine_directive
    variable: (word)))

=======================================
Directive, private, variable assignment
=======================================
private foo = bar

---

(makefile
  (private_directive
    (variable_assignment
       name: (word)
      value: (text))))

================================================================
Directive, private, variable assignment, target/pattern-specific
================================================================
%.o : CFLAGS = -O

---

(makefile
  (variable_assignment
    target_or_pattern: (list (word))
    name: (word)
    value: (text)))
