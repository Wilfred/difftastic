[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

(IDENTIFIER) @variable

;field in top level decl, and in struct, union...
(ContainerField
  (IDENTIFIER) @field
  (SuffixExpr (IDENTIFIER) @type)?
)

; INFO: field become a function if type is a function?
; const u = union { this_is_function: fn () void };
(ContainerField
  (IDENTIFIER) @function
  (SuffixExpr (FnProto))
)

;enum and tag union field is constant
(
  [
    ; union(Tag){}
    (ContainerDeclType (SuffixExpr (IDENTIFIER) @type))

    ; enum{}
    (ContainerDeclType "enum")
  ]
  (ContainerField (IDENTIFIER) @constant)?
)

; INFO: .IDENTIFIER is a field?
(SuffixExpr 
  "."
  (IDENTIFIER) @field
)

; error.OutOfMemory;
(SuffixExpr 
  "error"
  "."
  (IDENTIFIER) @constant
)

(VarDecl
  (IDENTIFIER) @type
  [
    ; const IDENTIFIER = struct/enum/union...
    (SuffixExpr (ContainerDecl))

    ; const A = u8;
    (SuffixExpr (BuildinTypeExpr))
  ]
)

; const fn_no_comma = fn (i32, i32) void;
(VarDecl
  (IDENTIFIER) @function
  (SuffixExpr (FnProto))
)

; var x: IDENTIFIER
type: (SuffixExpr (IDENTIFIER) @type)

; IDENTIFIER{}
constructor: (SuffixExpr (IDENTIFIER) @constructor)

;{.IDENTIFIER = 1}
(FieldInit (IDENTIFIER) @field)

; var.field
(SuffixOp (IDENTIFIER) @field)

; var.func().func().field
( 
  (SuffixOp
    (IDENTIFIER) @function
  )
  .
  (FnCallArguments)
)
; func()
( 
  (
    (IDENTIFIER) @function
  )
  .
  (FnCallArguments)
)

; functionn decl
(FnProto
  (IDENTIFIER) @function
  (SuffixExpr (IDENTIFIER) @type)?
  ("!")? @exception
)

(ParamDecl 
  (ParamType (SuffixExpr (IDENTIFIER) @parameter))
)

(ParamDecl 
  (IDENTIFIER) @parameter
  ":"
  [
    (ParamType (SuffixExpr (IDENTIFIER) @type))
    (ParamType)
  ]
)

(SwitchItem 
  (SuffixExpr
    "."
    .
    (IDENTIFIER) @constant
  )
)

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
