; Methods

(function_type
  name: (identifier) @function.method)
(super) @function.builtin

; Annotations

(annotation
  name: (identifier) @attribute)
(marker_annotation
  name: (identifier) @attribute)

"@" @operator

; Types

(class_definition
  name: (identifier) @type)
(constructor_signature
  name: (identifier) @type)
(type_identifier
  (identifier) @type)
(scoped_identifier
  scope: (identifier) @type)
(function_signature
  name: (identifier) @function.method)
(enum_declaration
  name: (identifier) @type)
(enum_constant
  name: (identifier) @type)

((scoped_identifier
  scope: (identifier) @type
  name: (identifier) @type)
 (#match? @type "^[a-zA-Z]"))

(type_identifier) @type

; Variables

((identifier) @constant
 (#match? @constant "^_*[A-Z][A-Z\d_]+"))

(this) @variable.builtin

; Literals

(hex_integer_literal) @number
(decimal_integer_literal) @number
(octal_integer_literal) @number
(decimal_floating_point_literal) @number
(hex_floating_point_literal) @number
(string_literal) @string
(true) @constant.builtin
(false) @constant.builtin
(null_literal) @constant.builtin

(comment) @comment

; Keywords

"abstract" @keyword
"assert" @keyword
"break" @keyword
"case" @keyword
"catch" @keyword
"on" @keyword
"class" @keyword
"continue" @keyword
"default" @keyword
"do" @keyword
"else" @keyword
"enum" @keyword
"export" @keyword
"extends" @keyword
"final" @keyword
"finally" @keyword
"for" @keyword
"if" @keyword
"implements" @keyword
"import" @keyword
"is" @keyword
"as" @keyword
"mixin" @keyword
"external" @keyword
"new" @keyword
"return" @keyword
"static" @keyword
"switch" @keyword
"throw" @keyword
; "rethrow" @keyword
"try" @keyword
"while" @keyword