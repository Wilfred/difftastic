======================================
Directive, export, variable assignment
======================================
export foo = bar

---

(makefile
  (export_directive
    (variable_assignment
      name: (word)
      value: (text
        (word)))))
