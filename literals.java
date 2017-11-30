=======
integer
=======

1234

---

(program (integer))

=======================
integer with underscore
=======================

1_234

---

(program (integer))

===========================
integer with decimal prefix
===========================

0d1_234

---

(program (integer))

===============================
integer with hexadecimal prefix
===============================

0xa_bcd_ef0_123_456_789

---

(program (integer))

=========================
integer with octal prefix
=========================

01234567
0o1234567

---

(program (integer) (integer))

==========================
integer with binary prefix
==========================

0b1_0

---

(program (integer))

=====
float
=====

1.234_5e678_90
1E30
1.0e+6
1.0e-6

---

(program (float) (float) (float) (float))

=====
complex
=====

-2i
+2i
1+1i
1-10i
10+3i
12-34i

---

(program (unary (complex)) (complex) (complex) (complex) (complex) (complex))

========
rational
========

2/3r

---

(program (binary (integer) (rational (integer))))

=======
boolean
=======

true
false

---

(program (true) (false))

===
nil
===

nil

---

(program (nil))
