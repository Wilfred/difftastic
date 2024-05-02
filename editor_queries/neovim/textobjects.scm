; See: https://github.com/nvim-treesitter/nvim-treesitter-textobjects#built-in-textobjects

; function.inner & outer
; ----------------------

; statis

(static_function
  body: (_)) @function.outer

(static_function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; init

(init_function
  body: (_)) @function.outer

(init_function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; bounced

(bounced_function
  body: (_)) @function.outer

(bounced_function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; receive

(receive_function
  body: (_)) @function.outer

(receive_function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; external

(external_function
  body: (_)) @function.outer

(external_function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; contract/trait function

(function
  body: (_)) @function.outer

(function
  body: (function_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "function.inner" @_start @_end))

; class.inner & outer
; -------------------

(struct
  body: (struct_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "class.inner" @_start @_end)) @class.outer

(message
  body: (message_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "class.inner" @_start @_end)) @class.outer

(contract
  body: (contract_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "class.inner" @_start @_end)) @class.outer

(trait
  body: (trait_body "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "class.inner" @_start @_end)) @class.outer

; attribute.inner & outer
; -----------------------

("@name"
  "("
  func_name: (func_identifier) @attribute.inner
  ")") @attribute.outer

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

(while_statement
  body: (block_statement "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "loop.inner" @_start @_end)) @loop.outer

(repeat_statement
  body: (block_statement "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "loop.inner" @_start @_end)) @loop.outer

(do_until_statement
  body: (block_statement "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "loop.inner" @_start @_end)) @loop.outer

(foreach_statement
  body: (block_statement "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "loop.inner" @_start @_end)) @loop.outer

; conditional.inner & outer
; -------------------------

(if_statement
  consequence: (block_statement "{" (_) @_start @_end (_)? @_end "}")
  (#make-range! "conditional.inner" @_start @_end)) @conditional.outer

(if_statement
  alternative: (else_clause (block_statement "{" (_) @_start @_end (_)? @_end "}"))
  (#make-range! "conditional.inner" @_start @_end)) @conditional.outer

(if_statement) @conditional.outer

; block.inner & outer
; -------------------

(_ (block_statement) @block.inner) @block.outer

; call.inner & outer
; ------------------

(method_call_expression
  arguments: (argument_list "(" (_) @_start (_)? @_end ")")
  (#make-range! "call.inner" @_start @_end)) @call.outer

(static_call_expression
  arguments: (argument_list "(" (_) @_start (_)? @_end ")")
  (#make-range! "call.inner" @_start @_end)) @call.outer

(instance_expression
  arguments: (instance_argument_list "{" (_) @_start (_)? @_end "}")
  (#make-range! "call.inner" @_start @_end)) @call.outer

((initOf
  name: (identifier) @_name
  arguments: (argument_list "(" (_) @_start (_)? @_end ")") @_args)
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

(parameter_list
  ((_) @parameter.inner . ","? @parameter.outer) @parameter.outer)

(argument_list
  ((_) @parameter.inner . ","? @parameter.outer) @parameter.outer)

(instance_argument_list
  ((_) @parameter.inner . ","? @parameter.outer) @parameter.outer)

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

(comment) @comment.inner
(comment)+ @comment.outer

; frame.inner & outer
; regex.inner & outer
; scopename.inner & outer
