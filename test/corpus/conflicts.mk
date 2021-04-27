=========================================
Define directive (whitespace after name)
=========================================
define two-lines 
echo foo
echo bar
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

============================================
Define directive (whitespace after operator)
============================================
define two-lines = 
echo foo
echo bar
endef

---

(makefile
  (define_directive
     name: (word)
    value: (raw_text)))

