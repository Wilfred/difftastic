; Methods

(method_declaration
  name: (identifier) @function.method)
(method_invocation
  name: (identifier) @function.method)
(super) @function.builtin

; Annotations

(annotation
  name: (identifier) @attribute)
(marker_annotation
  name: (identifier) @attribute)

"@" @operator

; Types

(interface_declaration
  name: (identifier) @type)
(class_declaration
  name: (identifier) @type)
(enum_declaration
  name: (identifier) @type)

((field_access
  object: (identifier) @type)
 (#match? @type "^[A-Z]"))
((scoped_identifier
  scope: (identifier) @type)
 (#match? @type "^[A-Z]"))

(constructor_declaration
  name: (identifier) @type)

(type_identifier) @type
(boolean_type) @type.builtin
(integral_type) @type.builtin
(floating_point_type) @type.builtin
(floating_point_type) @type.builtin
(void_type) @type.builtin

; Variables

((identifier) @constant
 (#match? @constant "^_*[A-Z][A-Z\d_]+"))

(identifier) @variable

(this) @variable.builtin

; Literals

(hex_integer_literal) @number
(decimal_integer_literal) @number
(octal_integer_literal) @number
(decimal_floating_point_literal) @number
(hex_floating_point_literal) @number
(character_literal) @string
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
"class" @keyword
"continue" @keyword
"default" @keyword
"do" @keyword
"else" @keyword
"enum" @keyword
"exports" @keyword
"extends" @keyword
"final" @keyword
"finally" @keyword
"for" @keyword
"if" @keyword
"implements" @keyword
"import" @keyword
"instanceof" @keyword
"interface" @keyword
"module" @keyword
"native" @keyword
"new" @keyword
"open" @keyword
"opens" @keyword
"package" @keyword
"private" @keyword
"protected" @keyword
"provides" @keyword
"public" @keyword
"requires" @keyword
"return" @keyword
"static" @keyword
"strictfp" @keyword
"switch" @keyword
"synchronized" @keyword
"throw" @keyword
"throws" @keyword
"to" @keyword
"transient" @keyword
"transitive" @keyword
"try" @keyword
"uses" @keyword
"volatile" @keyword
"while" @keyword
"with" @keyword
