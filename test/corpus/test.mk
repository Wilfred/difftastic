=======================================
Directive, private, variable assignment
=======================================
private foo = bar

---

(makefile
  (export_directive
    (variable_assignment
      name: (word)
      value: (text
        (word)))))
