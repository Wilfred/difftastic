;; Annotations

"@" @operator

;; Types

(class_definition
  name: (identifier) @type)
(trait_definition
  name: (identifier) @type)
(object_definition
  name: (identifier) @type)

(type_identifier) @type

;; Variables

((identifier) @constant
 (#match? @constant "^_*[A-Z][A-Z\\d_]+$"))

(identifier) @variable

;; Literals

[
  (integer_literal)
  (floating_point_literal)
] @number

[
  (character_literal)
  (string)
] @string

[
  (boolean_literal)
  (null_literal)
] @constant.builtin

(comment) @comment

(opaque_modifier) @keyword

;; Keywords

[
  "abstract"
  "case"
  "catch"
  "class"
  "def"
  "do"
  "else"
  "extends"
  "final"
  "finally"
  "for"
  "if"
  "implicit"
  "import"
  "lazy"
  "match"
  "new"
  "object"
  "override"
  "package"
  "private"
  "protected"
  "return"
  "sealed"
  "throw"
  "trait"
  "try"
  "while"
  "with"
] @keyword
