; See: https://github.com/nvim-treesitter/nvim-treesitter-textobjects#built-in-textobjects
; function.inner & outer
; ----------------------
; static
(static_function
  body: (_)) @function.outer

(static_function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; init
(init_function
  body: (_)) @function.outer

(init_function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; bounced
(bounced_function
  body: (_)) @function.outer

(bounced_function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; receive
(receive_function
  body: (_)) @function.outer

(receive_function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; external
(external_function
  body: (_)) @function.outer

(external_function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; contract/trait function
(function
  body: (_)) @function.outer

(function
  body: (function_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "function.inner" @_start @_end))

; class.inner & outer
; -------------------
(struct) @class.outer

(struct
  body: (struct_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "class.inner" @_start @_end))

(message) @class.outer

(message
  body: (message_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "class.inner" @_start @_end))

(contract) @class.outer

(contract
  body: (contract_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "class.inner" @_start @_end))

(trait) @class.outer

(trait
  body: (trait_body
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}")
  (#make-range! "class.inner" @_start @_end))

; attribute.inner & outer
; -----------------------
("@name"
  "("
  func_name: (func_identifier) @attribute.inner")") @attribute.outer

(contract_attributes
  ("@interface"
    "("
    (string) @attribute.inner
    ")") @attribute.outer)

(trait_attributes
  ("@interface"
    "("
    (string) @attribute.inner
    ")") @attribute.outer)

(trait_attributes
  ("@interface"
    "("
    (string) @attribute.inner
    ")") @attribute.outer)

; loop.inner & outer
; ------------------
(while_statement) @loop.outer

(while_statement
  body: (block_statement
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "loop.inner" @_start @_end)))

(repeat_statement) @loop.outer

(repeat_statement
  body: (block_statement
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "loop.inner" @_start @_end)))

(do_until_statement) @loop.outer

(do_until_statement
  body: (block_statement
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "loop.inner" @_start @_end)))

(foreach_statement) @loop.outer

(foreach_statement
  body: (block_statement
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "loop.inner" @_start @_end)))

; conditional.inner & outer
; -------------------------
(if_statement) @conditional.outer

(if_statement
  consequence: (block_statement
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "conditional.inner" @_start @_end)))

(if_statement
  alternative: (else_clause
    (block_statement
      .
      "{"
      .
      (_) @_start
      (_)? @_end
      .
      "}"
      (#make-range! "conditional.inner" @_start @_end))))

; block.inner & outer
; -------------------
(_
  (block_statement) @block.inner) @block.outer

; call.inner & outer
; ------------------
(method_call_expression) @call.outer

(method_call_expression
  arguments: (argument_list
    .
    "("
    .
    (_) @_start
    (_)? @_end
    .
    ")"
    (#make-range! "call.inner" @_start @_end)))

(static_call_expression) @call.outer

(static_call_expression
  arguments: (argument_list
    .
    "("
    .
    (_) @_start
    (_)? @_end
    .
    ")"
    (#make-range! "call.inner" @_start @_end)))

(instance_expression) @call.outer

(instance_expression
  arguments: (instance_argument_list
    .
    "{"
    .
    (_) @_start
    (_)? @_end
    .
    "}"
    (#make-range! "call.inner" @_start @_end)))

((initOf
  name: (identifier) @_name
  arguments: (argument_list
    .
    "("
    .
    (_) @_start
    (_)? @_end
    .
    ")") @_args)
  (#make-range! "call.outer" @_name @_args)
  (#make-range! "call.inner" @_start @_end))

; return.inner & outer
; --------------------
(return_statement
  (_) @return.inner) @return.outer

; number.inner
; ------------
(integer) @number.inner

; parameter.inner & outer
; -----------------------
; second and following
(parameter_list
  "," @_start
  .
  (_) @parameter.inner
  (#make-range! "parameter.outer" @_start @parameter.inner))

; first
(parameter_list
  .
  (_) @parameter.inner
  .
  ","? @_end
  (#make-range! "parameter.outer" @parameter.inner @_end))

; second and following
(argument_list
  "," @_start
  .
  (_) @parameter.inner
  (#make-range! "parameter.outer" @_start @parameter.inner))

; first
(argument_list
  .
  (_) @parameter.inner
  .
  ","? @_end
  (#make-range! "parameter.outer" @parameter.inner @_end))

; second and following
(instance_argument_list
  "," @_start
  .
  (_) @parameter.inner
  (#make-range! "parameter.outer" @_start @parameter.inner))

; first
(instance_argument_list
  .
  (_) @parameter.inner
  .
  ","? @_end
  (#make-range! "parameter.outer" @parameter.inner @_end))

; single parameter
(receive_function
  parameter: (_) @parameter.inner @parameter.outer)

(bounced_function
  parameter: (_) @parameter.inner @parameter.outer)

(external_function
  parameter: (_) @parameter.inner @parameter.outer)

; assignment.inner & outer w/ lhs & rhs
; -------------------------------------
(let_statement
  name: (_) @assignment.lhs
  value: (_) @assignment.inner @assignment.rhs) @assignment.outer

(constant
  name: (_) @assignment.lhs
  value: (_) @assignment.inner @assignment.rhs) @assignment.outer

(field
  name: (_) @assignment.lhs
  value: (_) @assignment.inner @assignment.rhs) @assignment.outer

; comment.inner & outer
; ---------------------
(comment) @comment.inner @comment.outer

; quantified captures aren't supported yet:
; (comment)+ @comment.outer
