; Keywords
[
  "query"
  "mutation"
  "subscription"
  "fragment"
  "on"
  "type"
  "interface"
  "union"
  "enum"
  "input"
  "scalar"
  "schema"
  "extend"
  "implements"
  "directive"
  "repeatable"
] @keyword

; Literals
(string_value) @string
(int_value) @number
(float_value) @number
(boolean_value) @boolean
(null_value) @constant
(description) @string

; Comments
(comment) @comment

; Types
(named_type (name) @type)

; Variables
(name) @variable

; Directives
(directive "@" (name) @attribute)

; Punctuation
["!" "=" "|" "..." "$"] @operator
