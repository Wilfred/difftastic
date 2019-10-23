; Types

(type_identifier) @type
(predefined_type) @type.builtin
((identifier) @type
 (match? @type "^[A-Z]"))

(type_arguments
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

; Variables

(required_parameter (identifier) @variable.parameter)
(optional_parameter (identifier) @variable.parameter)

; Keywords

"abstract" @keyword
"declare" @keyword
"enum" @keyword
"export" @keyword
"implements" @keyword
"interface" @keyword
"keyof" @keyword
"namespace" @keyword
"private" @keyword
"protected" @keyword
"public" @keyword
"type" @keyword
(readonly) @keyword
