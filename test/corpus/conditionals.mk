=======================================
Conditionals, ifeq, ifneq, ifdef, ifdef
=======================================
ifeq ("string $(sort 1 2 3)", 'string ${VAR}')
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
			arg0: (string
				string: (function_call
					(arguments
						argument: (text))))
			arg1: (string
				string: (variable_reference
					(word)))))
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
      arg0: (string)
      arg1: (string))))

========================================
Conditionals, double quote, double quote
========================================
ifeq "arg0" "arg1"
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (string)
      arg1: (string))))

========================================
Conditionals, double quote, single quote
========================================
ifeq "arg0" 'arg1'
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (string)
      arg1: (string))))

========================================
Conditionals, single quote, double quote
========================================
ifeq 'arg0' "arg1"
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (string)
      arg1: (string))))

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
      arg1: (word))
    (else_directive)))

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
    (elsif_directive
      condition: (ifeq_directive
        arg0: (word)
        arg1: (word)))))

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
    (elsif_directive
      condition: (ifeq_directive
        arg0: (word)
        arg1: (word)))
    (else_directive)))

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
    (elsif_directive
      condition: (ifeq_directive
        arg0: (word)
        arg1: (word)))
    (elsif_directive
      condition: (ifneq_directive
        arg0: (word)
        arg1: (word)))))

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
    (elsif_directive
      condition: (ifeq_directive
        arg0: (word)
        arg1: (word)))
    (elsif_directive
      condition: (ifneq_directive
        arg0: (word)
        arg1: (word)))
    (else_directive)))

================================
Conditionals, consequence, rules
================================
ifneq (,)
all:
	echo a
else
all:
	echo b
endif

---

(makefile
  (conditional
    condition: (ifneq_directive)
    consequence: (rule
      (targets
        (word))
      (recipe
        (recipe_line
          (shell_text))))
    (else_directive
      consequence: (rule
        (targets
          (word))
        (recipe
          (recipe_line
            (shell_text)))))))

===============================
Conditionals, in recipe
===============================
foo:
ifeq (x,y)
	echo a
else
	echo b
endif

----

(makefile
  (rule
    (targets
      (word))
    (recipe
      (conditional
        condition: (ifeq_directive
          arg0: (word)
          arg1: (word))
        consequence: (recipe_line
          (shell_text))
        (else_directive
          consequence: (recipe_line
            (shell_text)))))))

=======================================
Conditionals, rules, recipe, prec.right
=======================================
ifeq (a,b)
all:
	echo foo

	echo foo
endif

---

(makefile
  (conditional
    condition: (ifeq_directive
      arg0: (word)
      arg1: (word))
    consequence: (rule
      (targets
        (word))
      (recipe
        (recipe_line
          (shell_text))
        (recipe_line
          (shell_text))))))

=======================================
Conditionals, in recipe, in consequence
=======================================
ifneq (a,b)
all:
ifeq (a,b)
	echo foo
else
	echo bar
endif
endif

---

(makefile
  (conditional
    condition: (ifneq_directive
      arg0: (word)
      arg1: (word))
    consequence: (rule
      (targets
        (word))
      (recipe
        (conditional
          condition: (ifeq_directive
            arg0: (word)
            arg1: (word))
          consequence: (recipe_line
            (shell_text))
          (else_directive
            consequence: (recipe_line
              (shell_text))))))))

