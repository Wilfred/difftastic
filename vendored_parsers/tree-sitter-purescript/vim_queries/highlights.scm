; ------------------------------------------------------------------------------
; Literals and comments

[
  (integer)
  (exp_negation)
] @number

(exp_literal
  (number)) @float

(char) @character

[
  (string)
  (triple_quote_string)
] @string

(comment) @comment @spell

; ------------------------------------------------------------------------------
; Punctuation

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
  (qualified_module) ; grabs the `.` (dot), ex: import System.IO
  "."
] @punctuation.delimiter


; ------------------------------------------------------------------------------
; Keywords, operators, includes

[
  "if"
  "then"
  "else"
  "case"
  "of"
] @conditional

[
  "import"
  "module"
] @include

[
  (operator)
  (constructor_operator)
  (type_operator)
  (all_names)
  "="
  "|"
  "::"
  "∷"
  "=>"
  "⇒"
  "<="
  "⇐"
  "->"
  "→"
  "<-"
  "←"
  "\\"
  "`"
  "@"
] @operator

(qualified_module
  (module) @constructor)

(module) @namespace

(qualified_type
  (module) @namespace)

(qualified_variable
  (module) @namespace)

(import
  (module) @namespace)

[
  (where)
  "let"
  "in"
  "class"
  "instance"
  "derive"
  "foreign"
  "data"
  "newtype"
  "type"
  "as"
  "hiding"
  "do"
  "ado"
  "forall"
  "∀"
  "infix"
  "infixl"
  "infixr"
] @keyword

(class_instance
  "else" @keyword)

(type_role_declaration
  "role" @keyword
  role: (type_role) @type.qualifier)

(hole) @character.special

; `_` wildcards in if-then-else and case-of expressions,
; as well as record updates and operator sections
(wildcard) @parameter

; ------------------------------------------------------------------------------
; Functions and variables

(variable) @variable
(exp_apply
  .
  (exp_name
    (variable) @function))

(exp_apply
  .
  (exp_name
    (qualified_variable
      (variable) @function)))

(row_field
  (field_name) @field)

(record_field
  (field_name) @field)

(record_field
  (field_pun) @field)

(record_accessor
  field: [ (variable)
           (string)
           (triple_quote_string)
         ] @variable.other.member)

(exp_record_access
  field: [ (variable)
           (string)
           (triple_quote_string)
         ] @variable.other.member)

(signature
  name: (variable) @type)

(kind_declaration
  (class_name) @type)

(function
  name: (variable) @function)

(foreign_import
  (variable) @function)

(class_instance
  (instance_name) @function)

(derive_declaration
  (instance_name) @function)

((variable) @boolean
  (#any-of? @boolean "true" "false"))

; The former one works for `tree-sitter highlight` but not in Helix/Kakoune.
; The latter two work in Helix (but not Kakoune) and are a good compromise between not highlighting anything at all
; as an operator and leaving it to the child nodes, and highlighting everything as an operator.
(exp_ticked
  (_) @operator)

(exp_ticked
  (exp_name
    (variable) @operator))

(exp_ticked
  (exp_name
    (qualified_variable
      (variable) @operator)))

; ------------------------------------------------------------------------------
; Types

(type) @type

(constructor) @constructor

