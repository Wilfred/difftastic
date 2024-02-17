; See: https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#indents

; indent.begin       ; indent children when matching this node
; ------------

[
  ; (..., ...)
  (parameter_list)
  (argument_list)

  ; {..., ...}
  (instance_argument_list)

  ; {...; ...}
  (message_body)
  (struct_body)
  (contract_body)
  (trait_body)
  (function_body)
  (block_statement)

  ; misc.
  (binary_expression)
  (ternary_expression)
  (return_statement)
  (static_call_expression)
  (method_call_expression)
] @indent.begin

; indent.branch      ; dedent itself when matching this node
; -------------

[
  "}"
  ")"
  ">"
] @indent.branch

; indent.end         ; marks the end of indented block
; ----------

[
  "}"
  ")"
  ">"
] @indent.end

; indent.auto        ; behaves like 'autoindent' buffer option
; -----------

[
  (comment)
  (ERROR)
] @indent.auto

; indent.align       ; behaves like python aligned/hanging indent
; indent.dedent      ; dedent children when matching this node
; indent.ignore      ; do not indent in this node
; indent.zero        ; sets this node at position 0 (no indent)
