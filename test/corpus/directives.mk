================================================================================
Directive, include
================================================================================
include foo *.mk $(bar)

---

(makefile
  (include_directive
    (filenames
      (name)
      (filename
        left: (wildcard)
        right: (name))
      (variable_reference
        (variable)))))

================================================================================
Directive, vpath
================================================================================
vpath %.c foo/bar
vpath %.c foo:bar
vpath %.c
vpath

---

(makefile
  (vpath_directive
    (filename
      left: (pattern)
      right: (name))
    (directories
      (directory
        left: (name)
        right: (name))))
  (vpath_directive
    (filename
      left: (pattern)
      right: (name))
    (directories
      (name)
      (name)))
  (vpath_directive
    (filename
      left: (pattern)
      right: (name)))
  (vpath_directive))

================================================================================
Directive, undefine
================================================================================
undefine foo
override undefine CFLAGS

---

(makefile
  (undefine_directive
    variable: (name))
  (undefine_directive
    variable: (name)))

================================================================================
Directive, conditional I
================================================================================
ifdef $(foo)
bar = yes
endif

---

================================================================================
Directive, conditional II
================================================================================
ifeq ($(strip $(foo)),)
foo = yes
endif

---

