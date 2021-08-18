;; Special forms
[
  "and"
  "catch"
  "cond"
  "condition-case"
  "defconst"
  "defvar"
  "function"
  "if"
  "interactive"
  "lambda"
  "let"
  "let*"
  "or"
  "prog1"
  "prog2"
  "progn"
  "quote"
  "save-current-buffer"
  "save-excursion"
  "save-restriction"
  "setq"
  "setq-default"
  "unwind-protect"
  "while"
] @keyword

;; Function definitions
[
 "defun"
 "defsubst"
 ] @keyword
(function_definition name: (symbol) @function)

(comment) @comment

(integer) @number
(float) @number
(char) @number

(string) @string

[
  "("
  ")"
  "#["
  "["
  "]"
] @punctuation.bracket

;; Highlight nil and t as constants, unlike other symbols
[
  "nil"
  "t"
] @constant
