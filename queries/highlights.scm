; CREDITS @stumash (stuart.mashaal@gmail.com)

(class_definition
  name: (identifier) @type.definition)

(enum_definition
  name: (identifier) @type.definition)

(object_definition
  name: (identifier) @type.definition)

(trait_definition
  name: (identifier) @type.definition)

(full_enum_case
  name: (identifier) @type.definition)

(simple_enum_case
  name: (identifier) @type.definition)

;; variables

(class_parameter 
  name: (identifier) @parameter)


(interpolation) @none

;; types

(type_definition
  name: (type_identifier) @type.definition)

(type_identifier) @type


;; val/var definitions/declarations

(val_definition
  pattern: (identifier) @variable)

(var_definition
  pattern: (identifier) @variable)

(val_declaration
  name: (identifier) @variable)

(var_declaration
  name: (identifier) @variable)

; method definition

(function_declaration
      name: (identifier) @method)

(function_definition
      name: (identifier) @method)

; imports

(import_declaration
  path: (identifier) @namespace)
((stable_identifier (identifier) @namespace))

((import_declaration
  path: (identifier) @type) (#lua-match? @type "^[A-Z]"))
((stable_identifier (identifier) @type) (#lua-match? @type "^[A-Z]"))

((import_selectors (identifier) @type) (#lua-match? @type "^[A-Z]"))

; method invocation


(call_expression
  function: (identifier) @function.call)

(call_expression
  function: (field_expression
    field: (identifier) @method.call))

((call_expression
   function: (identifier) @constructor)
 (#lua-match? @constructor "^[A-Z]"))

(generic_function
  function: (identifier) @function.call)

;; I think this is broken

; function definitions

(function_definition
  name: (identifier) @function)

(parameter
  name: (identifier) @parameter)

; expressions


(field_expression field: (identifier) @property)
(field_expression value: (identifier) @type
 (#lua-match? @type "^[A-Z]"))

(infix_expression operator: (identifier) @operator)
(infix_expression operator: (operator_identifier) @operator)
(infix_type operator: (operator_identifier) @operator)
(infix_type operator: (operator_identifier) @operator)

; literals

(boolean_literal) @boolean
(integer_literal) @number
(floating_point_literal) @float

[
  (symbol_literal)
  (string)
  (character_literal)
  (interpolated_string_expression)
] @string

(interpolation "$" @punctuation.special)

;; keywords

(opaque_modifier) @type.qualifier

[
  "case"
  "class"
  "enum"
  "extends"
  "derives"
  "finally"
;; `forSome` existential types not implemented yet
;; `macro` not implemented yet
  "object"
  "override"
  "package"
  "trait"
  "type"
  "val"
  "var"
  "with"
  "given"
  "end"
  "implicit"
] @keyword

[
  "abstract"
  "final"
  "using"
  "lazy"
  "private"
  "protected"
  "sealed"
] @type.qualifier

(null_literal) @constant.builtin

(wildcard) @parameter

(annotation) @attribute

;; special keywords

"new" @keyword.operator

[
  "else"
  "if"
  "match"
] @conditional

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
]  @punctuation.bracket

[
 "."
 ","
] @punctuation.delimiter

[
  "do"
  "for"
  "while"
  "yield"
] @repeat

"def" @keyword.function

[
 "=>"
 "<-"
 "@"
] @operator

"import" @include

[
  "try"
  "catch"
  "throw"
] @exception

"return" @keyword.return

(comment) @comment @spell

;; `case` is a conditional keyword in case_block

(case_block
  (case_clause ("case") @conditional))

((identifier) @constant (#lua-match? @constant "^[A-Z]"))
((identifier) @variable.builtin
 (#lua-match? @variable.builtin "^this$"))

(
  (identifier) @function.builtin
  (#lua-match? @function.builtin "^super$")
)
