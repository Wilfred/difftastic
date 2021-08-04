(IDENTIFIER) @variable

"return" @keyword.return

"fn" @keyword.function


;field in top level decl, and in struct, union...
(ContainerField
  (IDENTIFIER) @field
)

;enum field is constant
((ContainerDeclType "enum")
  (ContainerField
    (IDENTIFIER) @constant)
)

[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

; const IDENTIFIER = struct/enum/union...
(VarDecl
  (IDENTIFIER) @type
    (SuffixExpr
      (ContainerDecl
      )
    )
)

; IDENTIFIER{}
constructor: (SuffixExpr (IDENTIFIER) @constructor)

;{.IDENTIFIER = 1}
(FieldInit (IDENTIFIER) @field)


; variable.IDENTIFIER
field: (SuffixOp (IDENTIFIER) @field)

; variable.IDENTIFIER()
function: (SuffixOp (IDENTIFIER) @function)

; function call
function: (IDENTIFIER) @function

; functionn decl
(FnProto
  (IDENTIFIER) @function
  (ParamDeclList
    (ParamDecl 
      (IDENTIFIER) @parameter
      (ParamType (SuffixExpr (IDENTIFIER) @type))
    )
  ) 
  (SuffixExpr (IDENTIFIER) @type) 
)

(BUILTINIDENTIFIER) @function.builtin

((BUILTINIDENTIFIER) @include
  (#any-of? @include "@import" "@cImport"))

(BuildinTypeExpr) @type.builtin

(INTEGER) @number

(FLOAT) @float

(STRINGLITERAL) @string

(CHAR_LITERAL) @character

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

[
"["
"]"
"("
")"
"{"
"}"
] @punctuation.bracket
