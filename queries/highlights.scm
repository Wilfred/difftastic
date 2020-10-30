; highlights.scm

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

[
 "while"
 "if"
 "else"
 "function"
 "repeat"
 "for"
 "in"
 (dots)
 (true)
 (false)
 (break)
 (next)
 (inf)
 (nan)
 (na)
 (null)
] @keyword
