; SPDX-FileCopyrightText: 2023 Leorize <leorize+oss@disroot.org>
; SPDX-License-Identifier: MPL-2.0

; Punctuations
[ "." ";" "," ":" ] @punctuation.delimiter
[ "(" ")" "[" "]" "{" "}" "{." ".}" ] @punctuation.bracket

; Special
(blank_identifier) @variable.builtin

; Calls
(call
  function: [
    (identifier) @function.call
    (dot_expression
      right: (identifier) @function.call)
  ])
(generalized_string
  function: [
    (identifier) @function.call
    (dot_expression
      right: (identifier) @function.call)
  ])

; Declarations
(exported_symbol "*" @type.qualifier)
(_ "=" @punctuation.delimiter [body: (_) value: (_)])
(proc_declaration name: (_) @function)
(func_declaration name: (_) @function)
(converter_declaration name: (_) @function)
(method_declaration name: (_) @method)
(template_declaration name: (_) @function.macro)
(macro_declaration name: (_) @function.macro)
(parameter_declaration
  (symbol_declaration_list
    (symbol_declaration name: (_) @parameter)))
(symbol_declaration name: (_) @variable)
(_
  [
    type: [
      (type_expression (identifier))
      (type_expression (accent_quoted (identifier)))
    ] @type
    return_type: [
      (type_expression (identifier))
      (type_expression (accent_quoted (identifier)))
    ] @type
  ])

; Exceptions
[
  "try"
  "except"
  "finally"
  "raise"
] @exception

(except_branch values: (expression_list
  [
    (identifier) @type
    (infix_expression
      left: (identifier) @type
      operator: "as"
      right: (identifier) @variable)
  ]))

; Expressions
(dot_expression
  right: (identifier) @field)

; Literal/comments
[
  (comment)
  (block_comment)
] @comment

[
  (documentation_comment)
  (block_documentation_comment)
] @comment.documentation

(interpreted_string_literal) @string
(long_string_literal) @string
(raw_string_literal) @string
(generalized_string) @string
(char_literal) @character
(escape_sequence) @string.escape
(integer_literal) @number
(float_literal) @float
(custom_numeric_literal) @number
(nil_literal) @constant.builtin

; Keyword
[
  "if"
  "when"
  "case"
  "elif"
  "else"
] @conditional

(of_branch "of" @conditional)

[
  "import"
  "include"
  "export"
] @include

(import_from_statement "from" @include)
(except_clause "except" @include)

[
  "for"
  "while"
  "continue"
  "break"
] @repeat

(for "in" @repeat)

[
  "macro"
  "template"
  "const"
  "let"
  "var"
  "asm"
  "bind"
  "block"
  "concept"
  "defer"
  "discard"
  "distinct"
  "do"
  "enum"
  "mixin"
  "nil"
  "object"
  "out"
  "ptr"
  "ref"
  "static"
  "tuple"
  "type"
] @keyword

[
  "proc"
  "func"
  "method"
  "converter"
  "iterator"
] @keyword.function

[
  "and"
  "or"
  "xor"
  "not"
  "div"
  "mod"
  "shl"
  "shr"
  "from"
  "as"
  "of"
  "in"
  "notin"
  "is"
  "isnot"
  "cast"
] @keyword.operator

[
  "return"
  "yield"
] @keyword.return

; Operators
(infix_expression operator: _ @operator)
(prefix_expression operator: _ @operator)
[
  "="
] @operator
