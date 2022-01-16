; Comments
(module_comment) @comment
(statement_comment) @comment
(comment) @comment

; Constants
(constant
  name: (identifier) @constant)

; Modules
(module) @module
(import alias: (identifier) @module)
(remote_type_identifier
  module: (identifier) @module)

((function_call
   function: (field_access
     record: (identifier) @module
     field: (label) @function))
 (#is-not? local))

((binary_expression
   operator: "|>"
   right: (field_access
     record: (identifier) @module
     field: (label) @function))
 (#is-not? local))

; Functions
(unqualified_import (identifier) @function)
(function
  name: (identifier) @function)
(public_function
  name: (identifier) @function)
(external_function
  name: (identifier) @function)
(public_external_function
  name: (identifier) @function)
(function_parameter
  name: (identifier) @variable.parameter)
((function_call
   function: (identifier) @function)
 (#is-not? local))
((binary_expression
   operator: "|>"
   right: (identifier) @function)
 (#is-not? local))

; "Properties"
; Assumed to be intended to refer to a name for a field; something that comes
; before ":" or after "."
; e.g. record field names, tuple indices, names for named arguments, etc
(label) @property
(tuple_access
  index: (integer) @property)

; Type names
(remote_type_identifier) @type
(type_identifier) @type

; Literals
(string) @string
(integer) @number
(float) @number

; Variables
(identifier) @variable
(discard) @comment.unused

; Operators
(binary_expression
  operator: _ @operator)

; Keywords
[
  "as"
  "assert"
  "case"
  "const"
  "external"
  "pub"
  "fn"
  "if"
  "import"
  "let"
  "opaque"
  "pub"
  "todo"
  "try"
  "type"
] @keyword

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket
[
  "."
  ","
  ;; Controversial -- maybe some are operators?
  ":"
  "#"
  "="
  "->"
  ".."
] @punctuation.delimiter
