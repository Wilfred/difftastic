(string) @string
(number) @number
(comment) @comment

(function_call
    function: (identifier) @function)

(identifier) @variable

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
  "CREATE FUNCTION"
  "CREATE"
  "INDEX"
  "UNIQUE"
  "SELECT"
  "WHERE"
  "FROM"
  "AS"
  "RETURNS"
  "LANGUAGE"
  "GROUP BY"
  "ORDER BY"
] @keyword
