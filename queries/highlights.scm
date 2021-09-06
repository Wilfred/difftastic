[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

[
  variable: (IDENTIFIER)
  variable_type_function: (IDENTIFIER)
] @variable

parameter: (IDENTIFIER) @parameter

[
  field_member: (IDENTIFIER)
  field_access: (IDENTIFIER)
] @field

;; assume TitleCase is a type
(
  [
    variable_type_function: (IDENTIFIER)
    field_access: (IDENTIFIER)
    parameter: (IDENTIFIER)
  ] @type
  (#match? @type "^[A-Z]([a-z]+[A-Za-z0-9]*)*$")
)
;; assume camelCase is a function
(
  [
    variable_type_function: (IDENTIFIER)
    field_access: (IDENTIFIER)
    parameter: (IDENTIFIER)
  ] @function
  (#match? @function "^[a-z]+([A-Z][a-z0-9]*)+$")
)

;; assume all CAPS_1 is a constant
(
  [
    variable_type_function: (IDENTIFIER)
    field_access: (IDENTIFIER)
  ] @constant
  (#match? @constant "^[A-Z][A-Z_0-9]+$")
)

[
  function_call: (IDENTIFIER)
  function: (IDENTIFIER)
] @function

exception: "!" @exception

(
  (IDENTIFIER) @variable.builtin
  (#eq? @variable.builtin "_")
)

(PtrTypeStart "c" @variable.builtin)

(
  (ContainerDeclType
    [
      (ErrorUnionExpr)
      "enum"
    ]
  )
  (ContainerField (IDENTIFIER) @constant)
)

field_constant: (IDENTIFIER) @constant

(BUILTINIDENTIFIER) @function.builtin

((BUILTINIDENTIFIER) @include
  (#any-of? @include "@import" "@cImport"))

(INTEGER) @number

(FLOAT) @float

[
  (LINESTRING)
  (STRINGLITERALSINGLE)
] @string

(CHAR_LITERAL) @character
(EscapeSequence) @string.escape
(FormatSequence) @string.special

[
  "allowzero"
  "volatile"
  "anytype"
  "anyframe"
  (BuildinTypeExpr)
] @type.builtin

(BreakLabel (IDENTIFIER) @label)
(BlockLabel (IDENTIFIER) @label)

[
  "true"
  "false"
] @boolean

[
  "undefined"
  "unreachable"
  "null"
] @constant.builtin

[
  "else"
  "if"
  "switch"
] @conditional

[
  "for"
  "while"
] @repeat

[
  "or"
  "and"
  "orelse"
] @keyword.operator

[
  "struct"
  "enum"
  "union"
  "error"
  "packed"
  "opaque"
] @keyword

[
  "try"
  "error"
  "catch"
] @exception

; VarDecl
[
  "const"
  "var"
  "comptime"
  "threadlocal"
  "fn"
] @keyword.function

[
  "test"
  "pub"
  "usingnamespace"
] @keyword

[
  "return"
  "break"
  "continue"
] @keyword.return

; Macro
[
  "defer"
  "errdefer"
  "async"
  "nosuspend"
  "await"
  "suspend"
  "resume"
  "export"
  "extern"
] @function.macro

; PrecProc
[
  "inline"
  "noinline"
  "asm"
  "callconv"
  "noalias"
] @attribute

[
  "linksection"
  "align" 
] @function.builtin

[
  (CompareOp)
  (BitwiseOp)
  (BitShiftOp)
  (AdditionOp)
  (MultiplyOp)
  (PrefixOp)
  "*"
  "**"
  "->"
  "=>"
  ".?"
  ".*"
  "="
  "?"
] @operator

[
  ";"
  "."
  ","
  ":"
] @punctuation.delimiter

[
  ".."
  "..."
] @punctuation.special

[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
  (Payload "|")
  (PtrPayload "|")
  (PtrIndexPayload "|")
] @punctuation.bracket

; Error
(ERROR) @error
