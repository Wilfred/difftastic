[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

(IDENTIFIER) @variable

(ParamDecl (IDENTIFIER) @parameter)

(ParamType 
  [
    (SuffixExpr (IDENTIFIER) @type)
    (SuffixExpr (IDENTIFIER) @variable (SuffixOp))
  ]
)

;; assume TitleCase is a type
((IDENTIFIER) @type
 (#match? @type "^[A-Z][A-Z_a-z-0-9]*$")
)

;; assume camelCase is a function
((IDENTIFIER) @function
 (#match? @function "^[a-z]+([A-Z][a-z0-9]+)+$")
)

(PrimaryFunctionCall
  (IDENTIFIER) @function
)

;; INFO: Should this be a method
(SuffixOpFunctionCall
  (SuffixOp
    (IDENTIFIER) @function
  )
)

; Struct, enum, union and Top level decl
(ContainerMembers
  [
    (FnProto
      (IDENTIFIER) @function
      ("!")? @exception
    )
    (ContainerField
      (IDENTIFIER) @field
    )
  ]
)

;enum and tag union field is constant
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

;error field is a constant
(ErrorSetDecl (IDENTIFIER) @constant)

; INFO: .IDENTIFIER and error.IDENTIFIER is a constant?
(SuffixExpr
  "error"?
  "."
  .
  (IDENTIFIER) @constant
)

; const IDENTIFIER = struct/enum/union/fn/error
(VarDecl
  (IDENTIFIER) @type
  (SuffixExpr 
    [
      (ContainerDecl)
      (FnProto)
      (ErrorSetDecl)
    ]
  )
)

type: (SuffixExpr (IDENTIFIER) @type)

;{.IDENTIFIER = 1}
(FieldInit (IDENTIFIER) @field)

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
