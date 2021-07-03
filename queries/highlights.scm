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
  "::"
  "<"
  "<="
  "<>"
  "="
  ">"
  ">="
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
  "AS"
  "CREATE DOMAIN"
  "CREATE FUNCTION"
  "CREATE TABLE"
  "CREATE TYPE"
  "CREATE"
  "FROM"
  "GROUP BY"
  "INDEX"
  "INSERT"
  "INTO"
  "LANGUAGE"
  "ORDER BY"
  "RETURNS"
  "SELECT"
  "SET"
  "UNIQUE"
  "UPDATE"
  "VALUES"
  "WHERE"
] @keyword
