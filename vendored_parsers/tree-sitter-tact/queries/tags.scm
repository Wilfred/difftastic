; See: https://tree-sitter.github.io/tree-sitter/code-navigation-systems

; Class definitions         @definition.class
; -------------------------------------------

(
  (comment)* @doc
  .
  [
    (contract
      name: (identifier) @name)
    (message
      name: (type_identifier) @name)
    (struct
      name: (type_identifier) @name)
  ] @definition.class
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @definition.class)
)


; Function definitions      @definition.function
; ----------------------------------------------

(
  (comment)* @doc
  .
  [
    (native_function
      name: (identifier) @name)
    (global_function
      name: (identifier) @name)
  ] @definition.function
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @definition.function)
)


; Interface definitions     @definition.interface
; -----------------------------------------------

(
  (comment)* @doc
  .
  (trait
    name: (identifier) @name) @definition.interface
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @definition.interface)
)


; Method definitions        @definition.method
; --------------------------------------------

(
  (comment)* @doc
  .
  [
    (init_function "init" @name)
    (receive_function "receive" @name)
    (bounced_function "bounced" @name)
    (external_function "external" @name)
    (storage_function
      name: (identifier) @name)
  ] @definition.method
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @definition.method)
)


; Constant definitions      @definition.constant
; ----------------------------------------------

(
  (comment)* @doc
  .
  [
    (global_constant
      name: (identifier) @name)
    (storage_constant
      name: (identifier) @name)
  ] @definition.constant
  (#strip! @doc "^[\\s\\*/]+|^[\\s\\*/]$")
  (#select-adjacent! @doc @definition.constant)
)


; Function/method calls     @reference.call
; -----------------------------------------

(
  [
    (method_call_expression
      name: (identifier) @name)
    (static_call_expression
      name: (identifier) @name)
  ] @reference.call
)


; Class reference           @reference.class
; ------------------------------------------

(
  [
    (instance_expression
      name: (identifier) @name)
    (initOf
      name: (identifier) @name)
  ] @reference.class
)
