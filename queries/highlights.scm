; highlights.scm


; Literals

(integer) @number

(float) @float

(complex) @number

(string) @string
(string (escape_sequence) @string.escape)

(comment) @comment

(identifier) @variable

(formal_parameters (identifier) @parameter)

; Operators
[
 "="
 "<-"
 "<<-"
 "->>"
 "->"
] @operator

(unary operator: [
  "-"
  "+"
  "!"
  "~"
] @operator)

(binary operator: [
  "-"
  "+"
  "*"
  "/"
  "^"
  "<"
  ">"
  "<="
  ">="
  "=="
  "!="
  "||"
  "|"
  "&&"
  "&"
  ":"
  "~"
] @operator)

[
  "|>"
  (special)
] @operator

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

(dollar "$" @operator)

(subset2
  "[[" @punctuation.bracket
  "]]" @punctuation.bracket)

[
 "in"
 (dots)
 (break)
 (next)
 (inf)
] @keyword

[
  (nan)
  (na)
  (null)
] @type.builtin

[
  "if"
  "else"
] @conditional

[
  "while"
  "repeat"
  "for"
] @repeat

[
  (true)
  (false)
] @boolean

"function" @keyword.function

(call function: (identifier) @function)
(call arguments:
 (arguments
  name: (identifier) @parameter ))

(lambda_function "\\" @operator)

(namespace_get function: (identifier) @method)
(namespace_get_internal function: (identifier) @method)

(namespace_get namespace: (identifier) @namespace
 "::" @operator)
(namespace_get_internal namespace: (identifier) @namespace
 ":::" @operator)

; Error
(ERROR) @error
