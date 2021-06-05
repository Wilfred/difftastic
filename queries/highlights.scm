(identifier) @variable
(string) @string
(number) @number

[
  (NULL)
  (TRUE)
  (FALSE)
] @constant.builtin

[
  "<"
  "<="
  "<>"
  "="
  ">"
  ">="
  "::"
] @operator

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  (type)
  (array_type)
] @type


[
  "CREATE TABLE"
  "CREATE TYPE"
  "CREATE DOMAIN"
  "CREATE"
  "INDEX"
  "UNIQUE"
  "SELECT"
  "WHERE"
  "FROM"
] @keyword
