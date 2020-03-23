; Method definitions

(
  (comment)* @doc
  (method
    name: (*) @name) @method
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @method)
)

(
  (comment)* @doc
  (singleton_method
    name: (*) @name) @method
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @method)
)

; Class definitions

(
  (comment)* @doc
  (class
    name: (constant) @name) @class
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @class)
)

(
  (comment)* @doc
  (class
    name: (scope_resolution
      name: (*) @name)) @class
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @class)
)

; Calls

(method_call
  method: (identifier) @name) @call
(method_call
  method: (call method: (identifier) @name)) @call
(call
  method: (identifier) @name) @call

(
  (identifier) @name @call
  (#is-not? local)
)
