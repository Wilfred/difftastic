==================
Line comment
==================

// solo
---
(source_file (comment))

==================
Multiple line comments
==================

// here one
// here two
# line
// here three

---
(source_file (comment) (comment) (directive) (comment))

==================
Block comment
==================
/* one */
# line
---
(source_file (comment) (directive) )

==================
Nesting comment
==================
/+ one +/
/+ two // here +/
# line
/+ nested /+ something +/ here +/
---
(source_file (comment) (comment) (directive) (comment))
