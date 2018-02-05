============================
if statements
============================

if (x)
  y;

---

(program
  (if_then_statement
      (ambiguous_name (identifier)) (ambiguous_name (identifier))))

============================
if statements with braces
============================

if (x) {
  y;
}

---

(program
  (if_then_statement
    (ambiguous_name (identifier)) (block (ambiguous_name (identifier)))))

============================
if statements with assignment without braces
============================

if (x = 3)
  y = 2;

---

(program (if_then_statement (assignment_expression (lhs (ambiguous_name (identifier))) (integer_literal (decimal_integer_literal))) (assignment_expression (lhs (ambiguous_name (identifier))) (integer_literal (decimal_integer_literal)))))

============================
if statements with assignment with braces
============================

if (x = 3) {
  y = 2;
}

===
if statement without braces and one assignment in the then
===

if (x)
  y = 3;

---
