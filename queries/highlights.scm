;; ----------------------------------------------------------------------------
;; Literals and comments

(integer) @number
(exp_negation) @number
(exp_literal (float)) @float
(char) @character
(string) @string

(con_unit) @symbol  ; unit, as in ()

(comment) @comment


;; ----------------------------------------------------------------------------
;; Punctuation

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  (comma)
  ";"
] @punctuation.delimiter


;; ----------------------------------------------------------------------------
;; Keywords, operators, includes

[
  "forall"
  "∀"
] @repeat

(pragma) @constant.macro

[
  "if"
  "then"
  "else"
  "case"
  "of"
] @conditional

[
  "import"
  "qualified"
  "module"
] @include

[
  (operator)
  (constructor_operator)
  (type_operator)
  (tycon_arrow)
  (qualified_module)  ; grabs the `.` (dot), ex: import System.IO
  (all_names)
  (wildcard)
  "="
  "|"
  "::"
  "=>"
  "->"
  "<-"
  "\\"
  "`"
  "@"
] @operator

(qualified_module (module) @constructor)
(qualified_type (module) @namespace)
(qualified_variable (module) @namespace)
(import (module) @namespace)

[
  (where)
  "let"
  "in"
  "class"
  "instance"
  "data"
  "newtype"
  "family"
  "type"
  "as"
  "hiding"
  "deriving"
  "via"
  "stock"
  "anyclass"
  "do"
  "mdo"
  "rec"
] @keyword


;; ----------------------------------------------------------------------------
;; Functions and variables

(signature name: (variable) @type)
(function name: (variable) @function)

(variable) @variable
"_" @variable.special

(exp_infix (variable) @operator)  ; consider infix functions as operators

("@" @namespace)  ; "as" pattern operator, e.g. x@Constructor


;; ----------------------------------------------------------------------------
;; Types

(type) @type

(constructor) @constructor

; True or False
((constructor) @_bool (#match? @_bool "(True|False)")) @boolean
