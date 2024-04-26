;; ----------------------------------------------------------------------------
;; Literals and comments

[
  (line_comment)
  (block_comment)
] @comment @spell

(xml_doc) @comment.doc @spell

(identifier) @variable (#set! "priority" 90)

;; ----------------------------------------------------------------------------
;; Punctuation

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "[|"
  "|]"
  ; "{|"
  ; "|}"
  "[<"
  ">]"
] @punctuation.bracket

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
  (infix_op)
  (prefix_op)
  ; TODO: split _indent_or_op
] @operator

(attribute) @attribute

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
  "return"
  "return!"
] @keyword.return

[
  "for"
  "while"
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
  (access_modifier)
] @keyword.modifier

[
  "let"
  "let!"
  "member"
] @keyword.function

[
  "enum"
  "type"
] @keyword.type

[
  "as"
  "assert"
  "begin"
  "default"
  "do"
  "do!"
  "done"
  "downcast"
  "downto"
  "end"
  "event"
  "field"
  "finally"
  "fun"
  "function"
  "get"
  "global"
  "inherit"
  "interface"
  "lazy"
  "new"
  "not"
  "null"
  "of"
  "param"
  "property"
  "set"
  "struct"
  "try"
  "upcast"
  "use"
  "use!"
  "val"
  "with"
  "yield"
  "yield!"
  "module"
  "namespace"
] @keyword

(bool) @boolean

(type) @variable

(const) @constant

(wildcard_pattern) @variable.parameter.builtin

(type_definition (_ (type_name (identifier) @type.definition))) @type

[
 (union_type_case)
 (rules (rule (identifier_pattern)))
] @type

(fsi_directive_decl (string) @module)

[
  (import_decl (long_identifier))
  (named_module (long_identifier))
  (namespace (long_identifier))
  (named_module
    name: (long_identifier) )
  (namespace
    name: (long_identifier) )
] @module


(dot_expression
  base: (long_identifier_or_op) @variable.member
  field: (long_identifier_or_op) @property)

(value_declaration_left (identifier_pattern) @variable)

(function_declaration_left
  (identifier)* @function
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

(call_expression (long_identifier_or_op (long_identifier))) @function.method.call
(application_expression (long_identifier_or_op (long_identifier))) @function.call

[
  (string)
  (triple_quoted_string)
] @string

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
