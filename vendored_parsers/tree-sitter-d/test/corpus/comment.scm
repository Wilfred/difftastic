==================
Line comment
==================

// solo
---

(source_file
  (comment))

==================
Multiple line comments
==================

// here one
// here two
# line
// here three

---

(source_file
  (comment)
  (comment)
  (directive)
  (comment))

==================
Block comment
==================
/* one */
# line
---

(source_file
  (comment)
  (directive))

==================
Nesting comment
==================
/+ one +/
/+ two // here +/
# line
/+ nested /+ something +/ here +/
---

(source_file
  (comment)
  (comment)
  (directive)
  (comment))

==================
Embedded comments in string
==================
enum x = "this // is /* not */ a // comment";
enum y = "// is /* not */ a // comment";
enum z = "/// is /* not */ a // comment";
enum w = "/+ is /* not */ a // comment+/";
---

(source_file
  (manifest_constant
    (enum)
    (manifest_declarator
      (identifier)
      (string_literal
        (quoted_string))))
  (manifest_constant
    (enum)
    (manifest_declarator
      (identifier)
      (string_literal
        (quoted_string))))
  (manifest_constant
    (enum)
    (manifest_declarator
      (identifier)
      (string_literal
        (quoted_string))))
  (manifest_constant
    (enum)
    (manifest_declarator
      (identifier)
      (string_literal
        (quoted_string)))))
