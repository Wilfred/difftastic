; Special identifiers
;--------------------

((identifier) @constant
 (match? @constant "^[A-Z][A-Z_]+$"))

((shorthand_property_identifier) @constant
 (match? @constant "^[A-Z][A-Z_]+$"))

((identifier) @constructor
 (match? @constructor "^[A-Z]"))

((identifier) @variable.builtin
 (match? @variable.builtin "^(arguments|module|console|window|document)$")
 (is-not? local))

((identifier) @function.builtin
 (eq? @function.builtin "require")
 (is-not? local))

; Function and method definitions
;--------------------------------

(function
  name: (identifier) @function.definition)
(function_declaration
  name: (identifier) @function.definition)
(method_definition
  name: (property_identifier) @function.method.definition)

(pair
  key: (property_identifier) @function.method.definition
  value: (function))
(pair
  key: (property_identifier) @function.method.definition
  value: (arrow_function))

(assignment_expression
  left: (member_expression
    property: (property_identifier) @function.method.definition)
  right: (arrow_function))
(assignment_expression
  left: (member_expression
    property: (property_identifier) @function.method.definition)
  right: (function))

(variable_declarator
  name: (identifier) @function.definition
  value: (arrow_function))
(variable_declarator
  name: (identifier) @function.definition
  value: (function))

(assignment_expression
  left: (identifier) @function.definition
  right: (arrow_function))
(assignment_expression
  left: (identifier) @function.definition
  right: (function))

; Function and method calls
;--------------------------

(call_expression
  function: (identifier) @function.call)

(call_expression
  function: (member_expression
    property: (property_identifier) @function.method.call))

; Variables
;----------

(formal_parameters (identifier) @variable.parameter)

(identifier) @variable

; Properties
;-----------

(property_identifier) @property

; Literals
;---------

(this) @variable.builtin
(super) @variable.builtin

(true) @constant.builtin
(false) @constant.builtin
(comment) @comment
(string) @string
(regex) @string.special
(template_string) @string
(number) @number

; Punctuation
;------------

(template_substitution
  "${" @punctuation.special
  "}" @punctuation.special) @embedded

";" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter

"--" @operator
"-" @operator
"-=" @operator
"&&" @operator
"+" @operator
"++" @operator
"+=" @operator
"<" @operator
"<<" @operator
"=" @operator
"==" @operator
"===" @operator
"=>" @operator
">" @operator
">>" @operator
"||" @operator

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

; Keywords
;----------

"as" @keyword
"async" @keyword
"await" @keyword
"break" @keyword
"case" @keyword
"catch" @keyword
"class" @keyword
"const" @keyword
"continue" @keyword
"debugger" @keyword
"default" @keyword
"delete" @keyword
"else" @keyword
"export" @keyword
"extends" @keyword
"finally" @keyword
"for" @keyword
"from" @keyword
"function" @keyword
"get" @keyword
"if" @keyword
"import" @keyword
"in" @keyword
"instanceof" @keyword
"let" @keyword
"new" @keyword
"of" @keyword
"return" @keyword
"set" @keyword
"static" @keyword
"switch" @keyword
"target" @keyword
"throw" @keyword
"try" @keyword
"typeof" @keyword
"var" @keyword
"void" @keyword
"while" @keyword
"with" @keyword
"yield" @keyword
