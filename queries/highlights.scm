; Methods

(function_type
  name: (identifier) @function.method)
(super) @function.builtin

; Annotations

(annotation
  name: (identifier) @attribute)
(marker_annotation
  name: (identifier) @attribute)

; Operators and Tokens

(template_substitution
  "${" @punctuation.special
  "}" @punctuation.special) @embedded

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "--"
  "-"
  "-="
  "&&"
  "+"
  "++"
  "+="
  "<"
  "<<"
  "="
  "=="
  "==="
  "=>"
  ">"
  ">>"
  "||"
  "@"
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket


; Types

(class_definition
  name: (identifier) @type)
(constructor_signature
  name: (identifier) @type)
(type_identifier
  (identifier) @type)
(scoped_identifier
  scope: (identifier) @type)
(function_signature
  name: (identifier) @function.method)
(enum_declaration
  name: (identifier) @type)
(enum_constant
  name: (identifier) @type)

((scoped_identifier
  scope: (identifier) @type
  name: (identifier) @type)
 (#match? @type "^[a-zA-Z]"))

(type_identifier) @type

; Variables

((identifier) @constant
 (#match? @constant "^_*[A-Z][A-Z\d_]+"))

(identifier) @variable

(this) @variable.builtin

; Literals

[
    (hex_integer_literal)
    (decimal_integer_literal)
    (octal_integer_literal)
    (decimal_floating_point_literal)
    (hex_floating_point_literal)

] @number

(symbol_literal) @string.special.symbol

(string_literal) @string
(true) @constant.builtin
(false) @constant.builtin
(null_literal) @constant.builtin

(comment) @comment

; Keywords

;; "abstract" @keyword
;; "assert" @keyword
;; "break" @keyword
;; "case" @keyword
;; "catch" @keyword
;; "on" @keyword
;; "class" @keyword
;; "continue" @keyword
;; "default" @keyword
;; "do" @keyword
;; "else" @keyword
;; "enum" @keyword
;; "export" @keyword
;; "extends" @keyword
;; "final" @keyword
;; "finally" @keyword
;; "for" @keyword
;; "if" @keyword
;; "implements" @keyword
;; "import" @keyword
;; "is" @keyword
;; "as" @keyword
;; "mixin" @keyword
;; "external" @keyword
;; "new" @keyword
;; "return" @keyword
;; "static" @keyword
;; "switch" @keyword
;; "throw" @keyword
;; ; "rethrow" @keyword
;; "try" @keyword
;; "while" @keyword

; Reserved words (cannot be used as identifiers)
 [
        "assert"
        "break"
        "case"
        "catch"
        "class"
        "const"
        "continue"
        "default"
        "do"
        "else"
        "enum"
        "extends"
  ;      "false"
        "final"
        "finally"
        "for"
        "if"
        "in"
        "is"
        "new"
  ;      "null"
        "rethrow"
        "return"
        "super"
        "switch"
  ;      "this"
        "throw"
  ;      "true"
        "try"
        "var"
        "void"
        "while"
        "with"
  ] @keyword

; Built in identifiers:

;; alone:

[
    "abstract"
    "as"
    "covariant"
    "deferred"
    "dynamic"
    "export"
    "external"
    "factory"
    "Function"
    "get"
    "implements"
    "import"
    "interface"
    "library"
    "operator"
    "mixin"
    "part"
    "set"
    "static"
    "typedef"
] @keyword

;; when used as an identifier:

((identifier) @variable.builtin
 (#match? @variable.builtin "^(abstract|as|covariant|deferred|dynamic|export|external|factory|Function|get|implements|import|interface|library|operator|mixin|part|set|static|typedef)$")
 (#is-not? local))
