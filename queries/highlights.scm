; Function calls

(call_expression
  function: (identifier) @function)

(call_expression
  function: (selector_expression
    field: (field_identifier) @function.method))

; Function definitions

(function_declaration
  name: (identifier) @function)

(method_declaration
  name: (field_identifier) @function.method)

; Identifiers

(type_identifier) @type
(field_identifier) @property
(identifier) @variable

; Operators

"--" @operator
"-" @operator
"-=" @operator
":=" @operator
"!" @operator
"!=" @operator
"..." @operator
"*" @operator
"*" @operator
"*=" @operator
"/" @operator
"/=" @operator
"&" @operator
"&&" @operator
"&=" @operator
"%" @operator
"%=" @operator
"^" @operator
"^=" @operator
"+" @operator
"++" @operator
"+=" @operator
"<-" @operator
"<" @operator
"<<" @operator
"<<=" @operator
"<=" @operator
"=" @operator
"==" @operator
">" @operator
">=" @operator
">>" @operator
">>=" @operator
"|" @operator
"|=" @operator
"||" @operator

; Keywords

"break" @keyword
"case" @keyword
"chan" @keyword
"const" @keyword
"continue" @keyword
"default" @keyword
"defer" @keyword
"else" @keyword
"fallthrough" @keyword
"for" @keyword
"func" @keyword
"go" @keyword
"goto" @keyword
"if" @keyword
"import" @keyword
"interface" @keyword
"map" @keyword
"package" @keyword
"range" @keyword
"return" @keyword
"select" @keyword
"struct" @keyword
"switch" @keyword
"type" @keyword
"var" @keyword

; Literals

(interpreted_string_literal) @string
(raw_string_literal) @string
(rune_literal) @string
(escape_sequence) @escape

(int_literal) @number
(float_literal) @number
(imaginary_literal) @number

(true) @constant.builtin
(false) @constant.builtin
(nil) @constant.builtin

(comment) @comment
