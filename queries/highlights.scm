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
"or" @keyword
"rescue" @keyword
; "retry" @keyword
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

(call
  method: (identifier) @function)
(method_call
  method: (identifier) @function)

; Function definitions

(alias (identifier) @function)
(setter (identifier) @function)
(method name: (identifier) @function)
(singleton_method name: (identifier) @function)

; Identifiers

(class_variable) @property
(instance_variable) @property

((constant) @constant.builtin
 (match? @constant.builtin "^__(FILE|LINE|ENCODING)__$"))

((constant) @constant
 (match? @constant "^[A-Z_]+$"))

(constant) @constructor

(self) @variable.builtin
(super) @variable.builtin
(identifier) @variable

; Literals

(string) @string
(bare_string) @string
(subshell) @string
(heredoc_beginning) @string
(heredoc_body) @string
(symbol) @string.special
(regex) @string.special
(escape_sequence) @escape

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
