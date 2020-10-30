; highlights.scm

"function" @keyword

(call (identifier) @function.method)

; Literals

(integer) @number

(string) @string

(comment) @comment

(formal_parameters (identifier) @variable.parameter)

(identifier) @variable

; Operators
[
 "="
 "<-"
 "<<-"
 "->"
 ] @operator

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
 ] @punctuation.bracket

