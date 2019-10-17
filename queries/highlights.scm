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

"enum" @keyword
"export" @keyword
"interface" @keyword
"namespace" @keyword
"implements" @keyword
"private" @keyword
"public" @keyword
(readonly) @keyword
