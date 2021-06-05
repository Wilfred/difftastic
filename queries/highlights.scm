; (identifier) @variable FIXME this overrides function call pattern
(string) @string
(number) @number
(comment) @comment

(function_call
    function: (identifier) @function)

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
  "AS"
  "GROUP BY"
  "ORDER BY"
] @keyword
