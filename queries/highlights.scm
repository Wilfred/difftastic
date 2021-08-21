[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

variable: (IDENTIFIER) @variable

variable_type_function: (IDENTIFIER) @variable

;; assume camelCase is a function
variable_type_function: (
  (IDENTIFIER) @function
  (#match? @function "^[a-z]+([A-Z][a-z0-9]+)+$")
)

;; assume TitleCase is a type
variable_type_function: (
  (IDENTIFIER) @type
  (#match? @type "^[A-Z]")
)

parameter: (IDENTIFIER) @parameter

field_member: (IDENTIFIER) @field

field_access: (IDENTIFIER) @field

;; assume TitleCase is a type
field_access: (
  (IDENTIFIER) @type
  (#match? @type "^[A-Z]")
)

field_access: (
  (IDENTIFIER) @function
  (#match? @function "^[a-z]+([A-Z][a-z0-9]+)+$")
)

function_call: (IDENTIFIER) @function
function: (IDENTIFIER) @function

; INFO: add this field improve 10ms and increase file size 400ks
exception: "!" @exception

;enum and tag union field is constant. const ~ 8ms
(
  (ContainerDeclType
    [
      (SuffixExpr)
      "enum"
    ]
  )
  (ContainerMembers
    (ContainerField (IDENTIFIER) @constant)?
  )
)

field_constant: (IDENTIFIER) @constant

(BUILTINIDENTIFIER) @function.builtin

((BUILTINIDENTIFIER) @include
  (#any-of? @include "@import" "@cImport"))

(INTEGER) @number

(FLOAT) @float

[
  (STRINGLITERAL)
  (STRINGLITERALSINGLE)
] @string

(CHAR_LITERAL) @character

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
(ERROR) @none
