
(ql.foo:quickload "cl-project")
(defun add (a b)
    (+ a b ))

(add 8 9)

(defun foo (instruction)
  (etypecase instruction
    (number instruction)
    (cons (car instruction))
    (t instruction)))

;(foo '(0 . 1))

