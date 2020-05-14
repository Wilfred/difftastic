(
  (comment)* @doc
  (method_definition
    name: (property_identifier) @name) @method
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @method)
)

(

  (comment)* @doc
  (class
    name: (identifier) @name) @class
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @class)
)

(
  (comment)* @doc
  (class_declaration
    name: (identifier) @name) @class
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @class)
)


(
  (comment)+? @doc
  (lexical_declaration
    (variable_declarator
      name: (identifier) @name
      value: (arrow_function)) @function)
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @function)
)

(
  (comment)* @doc
  (lexical_declaration
    (variable_declarator
      name: (identifier) @name
      value: (function)) @function)
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @function)
)

(call_expression
  function: (identifier) @name) @call

(call_expression
  function: (member_expression
    property: (property_identifier) @name)) @call

