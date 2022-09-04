======================================
Shell function (AKA command expansion)
======================================
v = $(shell echo *.ls)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command)))))

==========================
Shell function, line split
==========================
v = $(shell echo foo\
	bar\
baz)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command)))))

=================================================
Shell function, line split, condensate whitespace
=================================================
v = $(shell echo foo$\
	bar)

v = $(shell echo foo$ bar)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command
          (variable_reference
            (word))))))
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command
          (variable_reference
            (word)))))))

======================================
Shell function, escaped delimiter '\)'
======================================
v = $(shell echo "\(foo\)")

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command)))))

======================================
Shell function, escaped dolar signal
======================================
v = $(shell echo $$PWD)

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command
          (escape))))))

==================================
Shell function, variable reference
==================================
v = $(shell echo $(foo) ${bar})

---

(makefile
  (variable_assignment
    name: (word)
    value: (text
      (shell_function
        (shell_command
          (variable_reference (word))
          (variable_reference (word)))))))


======================================
Shell assignment (AKA command expansion)
======================================
v != echo *.ls

---

(makefile
  (shell_assignment
     name: (word)
    value: (shell_command)))

============================
Shell assignment, line split
============================
v != echo foo\
	bar\
baz

---

(makefile
  (shell_assignment
    name: (word)
    value: (shell_command)))

===================================================
Shell assignment, line split, condensate whitespace
===================================================


========================================
Shell assignment, escaped delimiter '\)'
========================================

======================================
Shell assignment, escaped dolar signal
======================================

====================================
Shell assignment, variable reference
====================================

