(comment) @comment
(identifier) @variable
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(pair
  key: (expression (literal (identifier) @member)))

"break" @keyword
"continue" @keyword
"else" @keyword
"for" @keyword
"if" @keyword
"goto" @keyword
"in" @keyword
"return" @keyword
"static" @keyword
"switch" @keyword
"while" @keyword
"do" @keyword
"set" @keyword

"#define" @keyword
"#undef" @keyword
"#elif" @keyword
"#else" @keyword
"#endif" @keyword
"#if" @keyword
"#ifdef" @keyword
"#ifndef" @keyword
"#include" @keyword
"#warn" @keyword
"#error" @keyword
"spawn" @keyword

"new" @keyword

(preproc_message) @string

(preproc_ifdef
  name: (identifier) @keyword)

(preproc_def
 name: (identifier) @keyword) 

(preproc_undef
 name: (identifier) @keyword) 

(preproc_defproc
  name: (identifier) @keyword)

(preproc_call_expression
  directive: (identifier) @function.special)

(interpolation
  "[" @punctuation.special
  "]" @punctuation.special) @embedded

[
  "="
  "-"
  "*"
  "/"
  "+"
  "%"
  "%%"
  "|"
  "&"
  "^"
  "<<"
  ">>"
  "<"
  "<="
  ">="
  ">"
  "=="
  "<>"
  "~="
  "~!"
  ":="
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
  "&&="
  "||="
  "%%="
] @operator

"?." @delimiter
"." @delimiter

[
 (string_start)
 (string_content)
 (string_end)
] @string

(file_literal) @string
(null) @keyword
(number_literal) @number
(builtin_const) @keyword
(builtin_macro) @keyword


(primitive_type 
  (identifier) @type)

(primitive_type) @type
(var_keyword) @keyword
(proc_keyword) @keyword

(var_definition
  name: (identifier) @variable)

(proc_definition
  name: (identifier) @function)

(proc_override
  name: (identifier) @function)

(proc_parameter
  name: (identifier) @variable)

(call_expression
  name: (identifier) @function)

(field_proc_expression
  proc: (identifier) @function)

(field_expression
 field: (identifier) @property) 

(type_proc_override
  name: (identifier) @function)
