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

; variable.IDENTIFIER
field: (SuffixOp (IDENTIFIER) @field)

; function call
function: [
  ; variable.function() 
  (SuffixOp (IDENTIFIER) @function)

  ; function()
  (IDENTIFIER) @function

  ; comptime doTest();
  (SuffixExpr (IDENTIFIER) @function)
]

; functionn decl
(FnProto
  (IDENTIFIER) @function
  (SuffixExpr (IDENTIFIER) @type)?
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

(BUILTINIDENTIFIER) @function.builtin

((BUILTINIDENTIFIER) @include
  (#any-of? @include "@import" "@cImport"))

(BuildinTypeExpr) @type.builtin

(INTEGER) @number

(FLOAT) @float

[
  (STRINGLITERAL)
  
  ;BUG: don't know why STRINGLITERAL incluce STRINGLITERALSINGLE,
  ;BUG: STRINGLITERALSINGLE not show in extern "c" var b: c_int;
  (STRINGLITERALSINGLE)
] @string

(CHAR_LITERAL) @character

[
  "true"
  "false"
] @boolean

"null" @keyword.null

[
  "undefined"
  "unreachable"
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
  (BitwiseOp "orelse")
] @keyword.operator

[
  "struct"
  "enum"
  "union"
  "error"
  "packed"
  "opaque"
] @keyword.structure

"error" @keyword.exception

; VarDecl
[
  "const"
  "var"
  "comptime"
  "threadlocal"
] @keyword.vardecl

"fn" @keyword.function

[
  "try"
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
] @keyword.macro

; PrecProc
[
  (BitwiseOp "orelse")
  "inline"
  "noinline"
  "asm"
  "callconv"
  "noalias"
] @keyword.preproc

"align" @function.builtin

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
