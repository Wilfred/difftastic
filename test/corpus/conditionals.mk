=======================================
Conditionals, ifeq, ifneq, ifdef, ifdef
=======================================
ifeq (arg0, arg1)
endif

ifneq (arg0, arg1)
endif

ifdef var
endif

ifndef var
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word)))
  (conditional
    condition: (ifneq_directive
      arg0: (word)
      arg1: (word)))
  (conditional
    condition: (ifdef_directive
      variable: (word)))
  (conditional
    condition: (ifndef_directive
      variable: (word))))

======================================
Conditionals, parenthesis, parenthesis
======================================
ifeq (arg0, arg1)
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

========================================
Conditionals, single quote, single quote
========================================
ifeq 'arg0' 'arg1'
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

========================================
Conditionals, double quote, double quote
========================================
ifeq "arg0" "arg1"
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

========================================
Conditionals, double quote, single quote
========================================
ifeq "arg0" 'arg1'
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

========================================
Conditionals, single quote, double quote
========================================
ifeq 'arg0' "arg1"
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

======================================
Conditionals, else
======================================
ifeq (arg0, arg1)
else
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))))

=============================
Conditionals, else if, single
=============================
ifeq (arg0, arg1)
else ifeq (arg0, arg1)
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifeq_directive
      arg0: (word)
      arg1: (word))))

===================================
Conditionals, else if, single, else
===================================
ifeq (arg0, arg1)
else ifeq (arg0, arg1)
else
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifeq_directive
      arg0: (word)
      arg1: (word))))

===============================
Conditionals, else if, multiple
===============================
ifeq (arg0, arg1)
else ifeq (arg0, arg1)
else ifneq (arg0, arg1)
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifneq_directive
      arg0: (word)
      arg1: (word))))

===============================
Conditionals, else if, multiple, else
===============================
ifeq (arg0, arg1)
else ifeq (arg0, arg1)
else ifneq (arg0, arg1)
else
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifeq_directive
      arg0: (word)
      arg1: (word))
    alternative: (ifneq_directive
      arg0: (word)
      arg1: (word))))
