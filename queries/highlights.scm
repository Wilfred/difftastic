; Types

(class_identifier) @type

(primitive_type) @type.builtin

(array_type
  "[" @punctuation.bracket)

; Methods

(method_declaration
  (method_identifier) @method)

(statement
  (opcode) @_invoke
  (full_method_identifier
    (method_identifier) @method.call)
  (#lua-match? @_invoke "^invoke"))

(method_identifier
  "<init>(" @constructor)

(method_identifier
  "<clinit>(" @constructor)

; Fields

(field_identifier) @field

; Parameters

(parameter) @parameter

; Variables

(variable) @variable.builtin

; Labels

(label) @label

; Operators

(opcode) @keyword.operator

((opcode) @keyword.return
 (#lua-match? @keyword.return "^return"))

"=" @operator

; Keywords

[
  ".class"
  ".super"
  ".source"
  ".implements"
  ".field"
  ".annotation"
  ".subannotation"
  ".param"
  ".line"
  ".locals"
  ".registers"
  ".catch"
  ".catchall"
  ".packed-switch"
  ".end packed-switch"
  ".sparse-switch"
  ".end sparse-switch"
  ".array-data"
  ".end array-data"
  ".enum"
] @keyword

[
  (end_field)
  (end_annotation)
  (end_subannotation)
  (end_param)
] @keyword

[
  ".method"
  (end_method)
] @keyword.function

; Literals

(string_literal) @string

(number_literal) @number

(boolean_literal) @boolean

(character_literal) @character

(null_literal) @constant.builtin

; Misc

(annotation_visibility) @attribute

(access_modifiers) @type.qualifier

["{" "}"] @punctuation.bracket

"->" @punctuation.delimiter

; Comments

(comment) @comment @spell
