; Keywords

"alias" @keyword
"and" @keyword
"begin" @keyword
"break" @keyword
"case" @keyword
"class" @keyword
"def" @keyword
"do" @keyword
"else" @keyword
"elsif" @keyword
"end" @keyword
"ensure" @keyword
"for" @keyword
"if" @keyword
"in" @keyword
"module" @keyword
"next" @keyword
"or" @keyword
"rescue" @keyword
"retry" @keyword
"return" @keyword
"then" @keyword
"unless" @keyword
"until" @keyword
"when" @keyword
"while" @keyword
"yield" @keyword

((identifier) @keyword
 (match? @keyword "^(private|protected|public)$"))

; Function calls

((identifier) @function.method.builtin
 (eq? @function.method.builtin "require"))

"defined?" @function.method.builtin

(call
  method: (identifier) @function.method)
(method_call
  method: (identifier) @function.method)
(call
  method: (constant) @function.method)
(method_call
  method: (constant) @function.method)

; Function definitions

(alias (identifier) @function.method)
(setter (identifier) @function.method)
(method name: (identifier) @function.method)
(method name: (constant) @function.method)
(singleton_method name: (identifier) @function.method)
(singleton_method name: (constant) @function.method)

; Identifiers

(class_variable) @property
(instance_variable) @property

((constant) @constant.builtin
 (match? @constant.builtin "^__(FILE|LINE|ENCODING)__$"))

((constant) @constant
 (match? @constant "^[A-Z\d_]+$"))

(constant) @constructor

(self) @variable.builtin
(super) @variable.builtin

(method_parameters (identifier) @variable.parameter)
(lambda_parameters (identifier) @variable.parameter)
(block_parameters (identifier) @variable.parameter)
(splat_parameter (identifier) @variable.parameter)
(hash_splat_parameter (identifier) @variable.parameter)
(optional_parameter (identifier) @variable.parameter)
(destructured_parameter (identifier) @variable.parameter)
(block_parameter (identifier) @variable.parameter)
(keyword_parameter (identifier) @variable.parameter)

((identifier) @function.method
 (is-not? local))
(identifier) @variable

; Literals

(string) @string
(bare_string) @string
(bare_symbol) @string.special.symbol
(subshell) @string
(heredoc_beginning) @string
(heredoc_body) @string
(symbol) @string.special.symbol
(regex) @string.special.regex
(escape_sequence) @escape
(integer) @number
(float) @number

(nil) @constant.builtin
(true) @constant.builtin
(false) @constant.builtin

(interpolation
  "#{" @punctuation.special
  "}" @punctuation.special) @embedded

(comment) @comment

; Operators

"=" @operator
"=>" @operator
"->" @operator

"," @punctuation.delimiter
";" @punctuation.delimiter
"." @punctuation.delimiter

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"%w(" @punctuation.bracket
"%i(" @punctuation.bracket
