[
  (container_doc_comment)
  (doc_comment)
  (line_comment)
] @comment

(IDENTIFIER) @variable

; var.field
(SuffixOp (IDENTIFIER) @field)

(ParamDecl
  (IDENTIFIER)? @parameter
  [
    (ParamType (SuffixExpr (IDENTIFIER) @type))
    (ParamType (SuffixExpr (IDENTIFIER) @variable (SuffixOp)))
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

;; INFO: Should this be a method
; var.func().func().field
(SuffixExpr
  (SuffixOp (IDENTIFIER) @function)
  .
  (FnCallArguments)
)

; Top level decl is a functionn
(source_file
  (ContainerMembers
    (FnProto
      (IDENTIFIER) @function
    )
  )
)

;; Return type in method/function decl
(FnProto
  (SuffixExpr (IDENTIFIER) @type)?
  ("!")? @exception
)

;struct, enum, union
(ContainerDecl
  (ContainerMembers
    [
      ;function decl inside container is a method
      (FnProto (IDENTIFIER) @method)

      ;field decl
      (ContainerField
        (IDENTIFIER) @field
        (SuffixExpr (IDENTIFIER) @type)?
      )
    ]
  )
)

;enum and tag union field is constant
(
  (ContainerDeclType
    [
      (SuffixExpr (IDENTIFIER) @type)
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

;const IDENTIFIER = error{}
(VarDecl
  (IDENTIFIER) @exception
  (SuffixExpr (ErrorSetDecl))
)

; INFO: const/var fn_no_comma = fn (i32, i32) void;
; INFO: should this be a function, type or variable?
(VarDecl
  (IDENTIFIER) @type
  (SuffixExpr (FnProto))
)

; var x: IDENTIFIER
type: (SuffixExpr (IDENTIFIER) @type)


;{.IDENTIFIER = 1}
(FieldInit (IDENTIFIER) @field)

; INFO: IDENTIFIER{} constructor or type
(
  (SuffixExpr (IDENTIFIER) @constructor)
  .
  (InitList)
)

; func()
(SuffixExpr
  (IDENTIFIER) @function
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
