; See: https://github.com/nvim-treesitter/nvim-treesitter-context/blob/master/CONTRIBUTING.md
; storage types
; -------------
(struct
  body: (_
    (_) @context.end)) @context

(message
  body: (_
    (_) @context.end)) @context

(contract
  body: (_
    (_) @context.end)) @context

(trait
  body: (_
    (_) @context.end)) @context

; functions
; ---------
(global_function
  body: (_
    (_) @context.end)) @context

(init_function
  body: (_
    (_) @context.end)) @context

(receive_function
  body: (_
    (_) @context.end)) @context

(external_function
  body: (_
    (_) @context.end)) @context

(bounced_function
  body: (_
    (_) @context.end)) @context

(storage_function
  body: (_
    (_) @context.end)) @context

; statements
; ----------
(if_statement
  consequence: (_
    (_) @context.end)) @context

(else_clause
  (_
    (_) @context.end)) @context

(try_statement
  body: (_
    (_) @context.end)) @context

(catch_clause
  body: (_
    (_) @context.end)) @context

(while_statement
  body: (_
    (_) @context.end)) @context

(repeat_statement
  body: (_
    (_) @context.end)) @context

(do_until_statement
  body: (_
    (_) @context.end)) @context

(foreach_statement
  body: (_
    (_) @context.end)) @context

[
  (return_statement)
  (expression_statement)
] @context

; expressions
; -----------
(method_call_expression
  arguments: (_
    (_) @context.end)) @context

(static_call_expression
  arguments: (_
    (_) @context.end)) @context

(instance_expression
  arguments: (_
    (_) @context.end)) @context

(initOf
  arguments: (_
    (_) @context.end)) @context
