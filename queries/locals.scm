; See: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#local-variables

; Scopes       @local.scope
; -------------------------

[
  (global_function)
  (init_function)
  (bounced_function)
  (receive_function)
  (external_function)
  (storage_function)
  (block_statement)
] @local.scope

; Definitions  @local.definition
; ------------------------------

(global_constant
  name: (identifier) @local.definition)

(storage_constant
  name: (identifier) @local.definition)

(storage_variable
  name: (identifier) @local.definition)

(let_statement
  name: (identifier) @local.definition)

(parameter
  name: (identifier) @local.definition)

(foreach_statement
  key: (identifier) @local.definition
  value: (identifier) @local.definition)

; References   @local.reference
; -----------------------------

(self) @local.reference

(value_expression (identifier) @local.reference)

(lvalue (identifier) @local.reference)
