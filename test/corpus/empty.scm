==================
Empty file
==================

---

(source_file)

==================
End of file
==================

__EOF__

module is.not.included;
---

(source_file
  (end_file))

======
EOF in string
======

string s = "__EOF__";
---

(source_file
  (variable_declaration
    (type
      (string))
    (declarator
      (identifier)
      (string_literal
        (quoted_string)))))
