(identifier) @variable
(self) @variable.builtin
(super) @variable.builtin
(strong) @variable.builtin
(weak) @variable.builtin
(nonatomic) @variable.builtin
(atomic) @variable.builtin
(direct) @variable.builtin
(readwrite) @variable.builtin
(readonly) @variable.builtin
(copy) @variable.builtin
(assign) @variable.builtin
(class) @variable.builtin
(getter) @variable.builtin
(setter) @variable.builtin
(nonnull) @variable.builtin
(nullable) @variable.builtin
(null_resettable) @variable.builtin
(unsafe_unretained) @variable.builtin
(null_unspecified) @variable.builtin

[
  "in"
  "@interface"
  "@protocol"
  "@property"
  "@end"
  "@implementation"
  "@autoreleasepool"
  "@synchronized"
  "@class"
  "@synthesize"
  "@dynamic"
  "@defs"
  "@try"
  "@catch"
  "@finally"
  "@throw"
  "@selector"
  "@encode"
  (private)
  (public)
  (protected)
  (package)
  (optional)
  (required)
  "NS_ENUM"
  "NS_ERROR_ENUM"
  "NS_OPTIONS"
  "in"
  "out"
  "inout"
  "bycopy"
  "byref"
  "oneway"
  "_Nullable"
  "_Nonnull"
  "_Nullable_result"
  "_Null_unspecified"
  "__autoreleasing"
  "__nullable"
  "__nonnull"
  "__strong"
  "__weak"
  "__bridge"
  "__bridge_transfer"
  "__bridge_retained"
  "__unsafe_unretained"
  "__block"
  "__kindof"
  "__unused"
  "_Complex"
  "__complex"
  "IBOutlet"
  "IBInspectable"
  "NS_VALID_UNTIL_END_OF_SCOPE"
  "@compatibility_alias"
  "@available"
  "const"
  "default"
  "enum"
  "extern"
  "inline"
  "static"
  "struct"
  "typedef"
  "typeof"
  "__typeof"
  "__typeof__"
  "_Atomic"
  "union"
  "volatile"
  "goto"
  "register"
  "__covariant"
  "__contravariant"
  "__GENERICS"
] @keyword

"sizeof" @keyword.operator
"return" @keyword.return

[
  "while"
  "for"
  "do"
  "continue"
  "break"
] @repeat

[
 "if"
 "else"
 "case"
 "switch"
] @conditional



"#define" @constant.macro
[
  "#if"
  "#ifdef"
  "#ifndef"
  "#else"
  "#elif"
  "#endif"
  (preproc_directive)
] @keyword

"#include" @include
"#import" @include
"@import" @include

[
  "="

  "-"
  "*"
  "/"
  "+"
  "%"

  "~"
  "|"
  "&"
  "^"
  "<<"
  ">>"

  "->"

  "<"
  "<="
  ">="
  ">"
  "=="
  "!="

  "!"
  "&&"
  "||"

  "-="
  "+="
  "*="
  "/="
  "%="
  "|="
  "&="
  "^="
  ">>="
  "<<="
  "--"
  "++"
  "@"
] @operator

[
 (true)
 (false)
 "YES"
 "NO"
] @boolean

[ "." ";" ":" "," ] @punctuation.delimiter

"..." @punctuation.special

(conditional_expression [ "?" ":" ] @conditional)


[ "(" ")" "[" "]" "{" "}"] @punctuation.bracket

(string_literal) @string
(string_expression) @string
(system_lib_string) @string
(escape_sequence) @string.escape

(null) @constant.builtin
(nil) @constant.builtin
(number_literal) @number
(number_expression) @number
(char_literal) @character

[
 (preproc_arg)
 (preproc_defined)
]  @function.macro

(((field_expression
     (field_identifier) @property)) @_parent
 (#not-has-parent? @_parent template_method function_declarator call_expression))

(((field_identifier) @property)
 (#has-ancestor? @property field_declaration)
 (#not-has-ancestor? @property function_declarator))

(property_declaration 
  (pointer_declarator
    (identifier)) @property)

(property_declaration
  (primitive_type)
  (identifier) @property)

(property_declaration
  (id)
  (identifier) @property)

(statement_identifier) @label

[
 (id)
 (Class)
 (Method)
 (IMP)
 (SEL)
 (auto)
 (type_identifier)
 (primitive_type)
 (sized_type_specifier)
 (type_descriptor)
] @type

(declaration (type_qualifier) @type)
(cast_expression type: (type_descriptor) @type)
(sizeof_expression value: (parenthesized_expression (identifier) @type))

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z0-9_$]+$"))

;; Preproc def / undef
(preproc_def
  name: (_) @constant)
(preproc_call
  directive: (preproc_directive) @_u
  argument: (_) @constant
  (#eq? @_u "#undef"))

(call_expression
  function: (identifier) @function)
(call_expression
  function: (field_expression
    field: (field_identifier) @function))
(function_declarator
  declarator: (identifier) @function)
(preproc_function_def
  name: (identifier) @function.macro)

(comment) @comment

;; Parameters
(parameter_declaration
  declarator: (identifier) @parameter)

(parameter_declaration
  declarator: (pointer_declarator) @parameter)

(preproc_params
  (identifier)) @parameter

[
  "__attribute__"
  "_Nonnull"
  "__cdecl"
  "__clrcall"
  "__stdcall"
  "__fastcall"
  "__thiscall"
  "__vectorcall"
  "_unaligned"
  "__unaligned"
  "__declspec"
] @attribute

(ERROR) @error