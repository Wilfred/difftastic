; Types

(class_identifier) @type

(primitive_type) @type.builtin

((class_identifier) @type.builtin
  (#match? @type.builtin "^L(android|com/android|dalvik|java|kotlinx)/"))

; Methods

(method_definition
  (method_signature (method_identifier) @method))

(expression
  (opcode) @_invoke
	(body
	  (full_method_signature
      (method_signature (method_identifier) @method.call)))
  (#lua-match? @_invoke "^invoke"))

(method_handle
  (full_method_signature
	(method_signature (method_identifier) @method.call)))

(custom_invoke
  . (identifier) @method.call
  (method_signature (method_identifier) @method.call))

(annotation_value
  (body
    (method_signature (method_identifier) @method.call)))

(annotation_value
  (body
    (full_method_signature
      (method_signature (method_identifier) @method.call))))

(field_definition
	(body
		(method_signature (method_identifier) @method.call)))

(field_definition
	(body
	  (full_method_signature
		  (method_signature (method_identifier) @method.call))))

((method_identifier) @constructor
  (#any-of? @constructor "<init>" "<clinit>"))

; Fields

[
  (field_identifier)
  (annotation_key)
] @field

; Variables

(variable) @variable.builtin

(local_directive
  (identifier) @variable)

; Parameters

(parameter) @parameter.builtin
(param_identifier) @parameter

; Labels

[
  (label)
  (jmp_label)
] @label

; Operators

(opcode) @keyword.operator

((opcode) @keyword.return
  (#lua-match? @keyword.return "^return"))

((opcode) @conditional
  (#match? @conditional "^(if|cmp)"))

((opcode) @exception
  (#lua-match? @exception "^throw"))

[
  "="
  ".."
] @operator

; Keywords

[
  ".class"
  ".super"
  ".source"
  ".implements"
  ".field"
  ".end field"
  ".annotation"
  ".end annotation"
  ".subannotation"
  ".end subannotation"
  ".param"
  ".end param"
  ".parameter"
  ".end parameter"
  ".line"
  ".locals"
  ".local"
  ".end local"
  ".restart local"
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
  (prologue_directive)
  (epilogue_directive)
] @keyword

[
  ".method"
  ".end method"
] @keyword.function

; Literals

(string) @string
(source_directive (string "\"" _ @text.uri "\""))
(escape_sequence) @string.escape

(character) @character

(number) @number

[
 (float)
 (NaN)
 (Infinity)
] @float

(boolean) @boolean

(null) @constant.builtin

; Misc

(annotation_visibility) @storageclass

(access_modifiers) @type.qualifier

(array_type
  "[" @punctuation.special)

["{" "}"] @punctuation.bracket

["(" ")"] @punctuation.bracket

[
  "->"
  ":"
  ","
  "@"
] @punctuation.delimiter

; Comments

(comment) @comment @spell

; Errors

(ERROR) @error
