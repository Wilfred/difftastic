; Method definitions

(
  (comment)* @doc
  [
    (method
      name: (_) @name) @method
    (singleton_method
      name: (_) @name) @method
  ]
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @method)
)

; Class definitions

(
  (comment)* @doc
  (class
    name: [
      (constant) @name
      (scope_resolution
        name: (_) @name)
    ]) @class
  (#strip! @doc "^#\\s*")
  (#select-adjacent! @doc @class)
)

; Calls

(method_call
  method: [
    (identifier) @name
    (call method: (identifier) @name)
  ]) @call

(call method: (identifier) @name) @call

(
  (identifier) @name @call
  (#is-not? local)
)
