;; Keywords

[
 "goto"
 "in"
 "local"
 "return"
  "and"
  "not"
  "or"
  "function"
  "if"
  "elseif"
  "else"
  "then"
  "for"
  "do"
  "end"
  "repeat"
  "until"
  "while"
] @keyword

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "^"
  "#"
  "=="
  "~="
  "<="
  ">="
  "<"
  ">"
  "="
  "&"
  "~"
  "|"
  "<<"
  ">>"
  "//"
  ".."
] @operator

;; Variables

(identifier) @variable

((identifier) @variable.builtin
 (#match? @variable.builtin "self"))

;; Constants

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_0-9]*$"))

(nil) @constant.builtin

[
  (false)
  (true)
] @boolean

;; Others

(comment) @comment

(number) @number

(string) @string

;; Error
(ERROR) @error
