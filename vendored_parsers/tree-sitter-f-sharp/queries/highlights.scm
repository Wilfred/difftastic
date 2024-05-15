;; ----------------------------------------------------------------------------
;; Literals and comments

[
  (line_comment)
  (block_comment)
] @comment @spell

(xml_doc) @comment.documentation @spell

((identifier) @variable
 (#set! "priority" 90))

((identifier_pattern (long_identifier (identifier) @character.special))
 (#match? @character.special "^\_.*")
 (#set! "priority" 90))

(const) @constant

;; ----------------------------------------------------------------------------
;; Punctuation

(wildcard_pattern) @character.special

(type_definition (_ (type_name (identifier) @type.definition)))

(type) @type

(member_signature
  .
  (identifier) @function.member
  (curried_spec
    (arguments_spec
      "*"* @operator
      (argument_spec
        (argument_name_spec
          "?"* @character.special
          name: (_) @variable.parameter)
        (_) @type))))

[
  (union_type_case)
  (rules
    (rule
      (identifier_pattern
        (long_identifier)
        .
        (long_identifier) @variable)))
] @type

(fsi_directive_decl . (string) @module)

(import_decl . (_) @module)
(named_module
  name: (_) @module)
(namespace
  name: (_) @module)
(module_defn
  .
  (_) @module)

(field_initializer
  field: (_) @property)

(record_fields
  (record_field
    .
    (identifier) @property))

(dot_expression
  base: (_) @variable
  field: (_) @variable.member)

(value_declaration_left . (_) @variable)

(function_declaration_left
  . (_) @function
  [
    (argument_patterns)
    (argument_patterns (long_identifier (identifier)))
  ] @variable.parameter)

(member_defn
  (method_or_prop_defn
    (property_or_ident
      instance: (identifier) @variable.parameter.builtin
      method: (identifier) @variable.member)
    args: _ @variable.parameter))

(application_expression) @function.call

(compiler_directive_decl
  .
  (_) @keyword.directive.define) @keyword.directive

[
  (string)
  (triple_quoted_string)
] @spell @string

[
  (int)
  (int16)
  (int32)
  (int64)
] @number

[
  (float)
  (decimal)
] @number.float

(bool) @boolean

(attribute) @attribute

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "[|"
  "|]"
  "{|"
  "|}"
  "[<"
  ">]"
] @punctuation.bracket

(format_string_eval
  [
    "{"
    "}"
  ] @punctuation.special)

[
  ","
  ";"
] @punctuation.delimiter

[
  "|"
  "="
  ">"
  "<"
  "-"
  "~"
  "->"
  (infix_op)
  (prefix_op)
] @operator

[
  "if"
  "then"
  "else"
  "elif"
  "when"
  "match"
  "match!"
  "and"
  "or"
  "&&"
  "||"
  "then"
] @keyword.conditional

[
  "and"
  "or"
  "not"
  "upcast"
  "downcast"
] @keyword.operator

[
  "return"
  "return!"
  "yield"
  "yield!"
] @keyword.return

[
  "for"
  "while"
  "downto"
  "to"
] @keyword.repeat


[
  "open"
  "#r"
  "#load"
] @keyword.import

[
  "abstract"
  "delegate"
  "static"
  "inline"
  "mutable"
  "override"
  "rec"
  "global"
  (access_modifier)
] @keyword.modifier

[
  "let"
  "let!"
  "use"
  "use!"
  "member"
] @keyword.function

[
  "enum"
  "type"
  "inherit"
  "interface"
] @keyword.type

[
  "try"
  "with"
  "finally"
] @keyword.exception

[
  "as"
  "assert"
  "begin"
  "end"
  "done"
  "default"
  "in"
  "do"
  "do!"
  "event"
  "field"
  "fun"
  "function"
  "get"
  "set"
  "lazy"
  "new"
  "null"
  "of"
  "param"
  "property"
  "struct"
  "val"
  "module"
  "namespace"
] @keyword

(long_identifier
  (identifier)* @module
  .
  (identifier))
