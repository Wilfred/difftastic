============================
if statements
============================

if (x)
  y;

---

(program
  (statement
    (if_then_statement 
      (ambiguous_name (identifier)) (ambiguous_name (identifier)))))

============================
if statements with braces
============================

if (x) {
  y;
}

---

============================
if statements with assignment without braces
============================

if (x = 3)
  y = 2;

---

============================
if statements with assignment with braces
============================
if (x = 3) {
  y = 2;
}
