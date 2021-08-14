[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

(IDENTIFIER) @variable

; functionn decl
(FnProto
  (IDENTIFIER) @function
  (SuffixExpr (IDENTIFIER) @type)?
  ("!")? @exception
)

(ParamDecl
  (IDENTIFIER)? @parameter
  (ParamType (SuffixExpr (IDENTIFIER) @type))?
)

;struct, enum, union
(ContainerDecl
  [
    ;method decl
    (FnProto (IDENTIFIER) @method)

    ;field decl
    (ContainerField
      (IDENTIFIER) @field
      (SuffixExpr (IDENTIFIER) @type)?
    )

    ; const u = union { this_is_function: fn () void };
    ; INFO: field become a function if type is a function?
    (ContainerField
      (IDENTIFIER) @function
      (SuffixExpr (FnProto))
    )
  ]
)

;enum and tag union field is constant
(
  (ContainerDeclType
    [
      (SuffixExpr (IDENTIFIER) @type)
      "enum"
    ]
  )
  (ContainerField (IDENTIFIER) @constant)?
)

;error field is a constant
(ErrorSetDecl (IDENTIFIER) @constant)

; INFO: .IDENTIFIER and error.IDENTIFIER is a constant?
(SuffixExpr
  "error"?
  "."
  .
  (IDENTIFIER) @constant
)

;const IDENTIFIER = 1;
(VarDecl
  "const"
  (IDENTIFIER) @constant
)

; const IDENTIFIER = struct/enum/union...
(VarDecl
  (IDENTIFIER) @type
  (SuffixExpr (ContainerDecl))
)

(VarDecl
  (IDENTIFIER) @exception
  (SuffixExpr (ErrorSetDecl))
)

; INFO: const/var fn_no_comma = fn (i32, i32) void;
; INFO: should this be a function, type, constant or variable?
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
  (SuffixOp (IDENTIFIER) @function)
  .
  (FnCallArguments)
)

; func()
(
  ((IDENTIFIER) @function)
  .
  (FnCallArguments)
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
; Error
(ERROR) @error
