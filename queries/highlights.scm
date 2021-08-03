(IDENTIFIER) @variable

"return" @keyword.return

"fn" @keyword.function

(STRINGLITERAL) @string
(ContainerField
  (IDENTIFIER) @field
)
[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

(VarDecl
  (IDENTIFIER) @type
    (SuffixExpr
      (ContainerDecl
      )
    )
)
constructor: (SuffixExpr (IDENTIFIER) @constructor)

(FieldInit (IDENTIFIER) @field)

return_type: (SuffixExpr (IDENTIFIER) @type)

field: (SuffixOp (IDENTIFIER) @field)

function: (SuffixOp (IDENTIFIER) @function)

(BUILTINIDENTIFIER) @function.builtin

((BUILTINIDENTIFIER) @include
  (#any-of? @include "@import" "@cImport"))

(BuildinTypeExpr) @type.builtin

(INTEGER) @number

(FLOAT) @float

[
  "true"
  "false"
] @boolean

[
  "null" 
  "undefined"
] @constant.builtin

[
  "continue"
  "else"
  "if"
  "switch"
] @conditional

[
  "for"
  "while"
] @repeat
[
  "align"
  "allowzero"
  "and"
  "anyframe"
  "anytype"
  "asm"
  "await"
  "break"
  "callconv"
  "catch"
  "comptime"
  "const"
  "continue"
  "defer"
  "else"
  "enum"
  "errdefer"
  "error"
  "export"
  "extern"
  "for"
  "if"
  "inline"
  "noalias"
  "nosuspend"
  "noinline"
  "null"
  "opaque"
  "or"
  "orelse"
  "packed"
  "pub"
  "resume"
  "linksection"
  "struct"
  "suspend"
  "switch"
  "test"
  "threadlocal"
  "try"
  "undefined"
  "union"
  "unreachable"
  "usingnamespace"
  "var"
  "volatile"
  "while"
] @keyword

[
  "or"
  "and"
] @keyword.operator

((BitwiseOp) @keyword.operator
  (#any-of? @keyword.operator "orelse" "catch")
)

[
  (CompareOp)
  (BitwiseOp)
  (BitShiftOp)
  (AdditionOp)
  (MultiplyOp)
  (PrefixOp)
] @operator

[
  ";"
  "."
  ","
] @punctuation.delimiter
