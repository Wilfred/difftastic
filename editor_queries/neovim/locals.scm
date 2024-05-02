; NOTE: The following queries are NOT used for highlighting, unlike in Tree-sitter or Helix. These are more like tags.scm.
; See: https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#locals
; ------------------------------------------------------------------------------------------
; Scopes       @local.scope
; -------------------------
[
  (static_function)
  (init_function)
  (bounced_function)
  (receive_function)
  (external_function)
  (function)
  (block_statement)
] @local.scope

; Definitions  @local.definition
; ------------------------------
; variables
(let_statement
  name: (identifier) @local.definition.var)

; constants
(constant
  name: (identifier) @local.definition.constant)

; functions
(static_function
  name: (identifier) @local.definition.function
  (#set! definition.var.scope parent))

; methods (functions off of contracts and traits)
(init_function
  name: (identifier) @local.definition.method
  (#set! definition.var.scope parent))

(bounced_function
  name: (identifier) @local.definition.method
  (#set! definition.var.scope parent))

(receive_function
  name: (identifier) @local.definition.method
  (#set! definition.var.scope parent))

(external_function
  name: (identifier) @local.definition.method
  (#set! definition.var.scope parent))

(function
  name: (identifier) @local.definition.method
  (#set! definition.var.scope parent))

; parameters
(parameter
  name: (identifier) @local.definition.parameter)

; user-defined types (structs and messages)
(type_identifier) @local.definition.type

; fields (and properties)
(field
  name: (identifier) @local.definition.field)

; imports
(import_statement
  (string) @local.definition.import)

; References   @local.reference
; -----------------------------
(self) @local.reference

(value_expression
  (identifier) @local.reference)

(lvalue
  (identifier) @local.reference)
