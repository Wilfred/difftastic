(
    (comment)* @doc
    (function_declaration
        name: (identifier) @name) @function
    (#strip! @doc "^//\\s*")
    (#set-adjacent! @doc @function)
)

(
    (comment)* @doc
    (method_declaration
        name: (field_identifier) @name) @method
    (#strip! @doc "^//\\s*")
    (#set-adjacent! @doc @method)
)

(call_expression
    function: (identifier) @name) @call

(call_expression
    function: (selector_expression
        field: (field_identifier) @name)) @call

(call_expression
    function: (parenthesized_expression
        (identifier) @name)) @call

(call_expression
    function: (parenthesized_expression
        (selector_expression
            field: (field_identifier) @name))) @call
