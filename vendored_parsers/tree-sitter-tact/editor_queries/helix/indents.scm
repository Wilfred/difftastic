; See: https://docs.helix-editor.com/guides/indent.html

; indent
; ------

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
  (ternary_expression)
  (binary_expression)
  (return_statement)
] @indent

; outdent
; -------

[
  "}"
  ")"
  ">"
] @outdent

; N/A or unused:
; --------------
; indent.always
; outdent.always
; align
; extend
; extend.prevent-once
