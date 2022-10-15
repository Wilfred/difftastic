;; attempting to match concepts represented here:
;; https://code.visualstudio.com/api/language-extensions/semantic-highlight-guide

[
  "["
  "]"
  "{"
  "}"
  "?"
  ";"
] @punctuation

;; Methods

(method_declaration
  name: (identifier) @method)
(method_declaration
  type: (type_identifier) @type)

(method_invocation
  name: (identifier) @method)
(argument_list
  (identifier) @variable)
(super) @function.defaultLibrary

(explicit_constructor_invocation
  arguments: (argument_list
    (identifier) @variable ))

;; Annotations

(annotation
  name: (identifier) @decorator)

"@" @operator

(annotation_key_value
  (identifier) @variable)


;; Types

(interface_declaration
  name: (identifier) @interface)
(class_declaration
  name: (identifier) @class)
(class_declaration
  (superclass) @class)
(enum_declaration
  name: (identifier) @enum)
(enum_constant
  name: (identifier) @enumMember)

(interfaces
  (type_list
    (type_identifier) @interface ))

(local_variable_declaration
  (type_identifier) @type )

( expression_statement (_ (identifier)) @variable)

(type_arguments "<" @punctuation)
(type_arguments ">" @punctuation)

; (identifier) @variable

((field_access
  object: (identifier) @type)) ;; don't know what type of thing it is

(generic_type
  (type_identifier) @type)
(type_arguments (type_identifier) @type)

(field_access
  field: (identifier) @property)

((scoped_identifier
  scope: (identifier) @type)
 (#match? @type "^[A-Z]"))
((method_invocation
  object: (identifier) @type)
 (#match? @type "^[A-Z]"))


(field_declaration
  type: (type_identifier) @type)

(method_declaration
  (formal_parameters
    (formal_parameter
      name: (identifier) @parameter)))

(formal_parameter
  type: (type_identifier) @type
  (identifier) @variable)

(enhanced_for_statement
  type: (type_identifier) @type
  name: (identifier) @variable )

(enhanced_for_statement
  value: (identifier) @variable)

(enhanced_for_statement
  name: (identifier) @variable)

(object_creation_expression
  type: (type_identifier) @type)

(array_creation_expression
  type: (type_identifier) @type)

(array_type
  element: (type_identifier) @type)

(catch_formal_parameter
  (type_identifier) @type
  name: (identifier) @variable)

(return_statement
  (identifier) @variable)

(local_variable_declaration
  (variable_declarator
    name: (identifier) @variable ))

(for_statement
  condition: (binary_expression
    (identifier) @variable))

(for_statement
  update: (update_expression
    (identifier) @variable))

(constructor_declaration
  name: (identifier) @class)

(dml_type) @function.defaultLibrary

(bound_apex_expression
  (identifier) @variable)

(assignment_operator) @operator

(update_expression ["++" "--"] @operator)

(instanceof_expression
  left: (identifier) @variable
  right: (type_identifier) @type )

(cast_expression
  type: (type_identifier) @type
  value: (identifier) @variable)

(switch_expression
  condition: (identifier) @variable)

(switch_label
  (type_identifier) @type
  (identifier) @variable )

(switch_rule
  (switch_label
    (identifier) @enumMember ))

(trigger_declaration
  name: (identifier) @type
  object: (identifier) @type
  (trigger_event) @keyword
  ("," (trigger_event) @keyword)*)

(binary_expression
  operator: [
    ">"
    "<"
    ">="
    "<="
    "=="
    "==="
    "!="
    "!=="
    "&&"
    "||"
    "+"
    "-"
    "*"
    "/"
    "&"
    "|"
    "^"
    "%"
    "<<"
    ">>"
    ">>>"] @operator)

(binary_expression
  (identifier) @variable)

(unary_expression
  operator: [
    "+"
    "-"
    "!"
    "~"
  ]) @operator

(map_initializer "=>" @operator)

[
  (boolean_type)
  (void_type)
] @type.defaultLibrary

; Variables

(field_declaration
  (modifiers (modifier ["final" "static"])(modifier ["final" "static"]))
  (variable_declarator
    name: (identifier) @variable.readonly))

(variable_declarator
  (identifier) @property)

;; because itendifying it when declared doesn't carry to use
;; leans on the convention that "screaming snake case" is a const
((identifier) @variable.readonly
  (#match? @variable.readonly "^_*[A-Z][A-Z\\d_]+$"))


(this) @variable.defaultLibrary

; Literals

[
  (int)
] @number

[
  (string_literal)
] @string

[
  (line_comment)
  (block_comment)
] @comment

;; ;; Keywords

[
  "abstract"
  "break"
  "catch"
  "class"
  "continue"
  "default"
  "do"
  "else"
  "enum"
  "extends"
  "final"
  "finally"
  "for"
  "get"
  "global"
  "if"
  "implements"
  "instanceof"
  "interface"
  "new"
  "on"
  "private"
  "protected"
  "public"
  "return"
  "set"
  "static"
  "switch"
  "testMethod"
  "throw"
  "transient"
  "try"
  "trigger"
  "virtual"
  "when"
  "while"
  "with_sharing"
  "without_sharing"
  "inherited_sharing"
] @keyword

(assignment_expression
  left: (identifier) @variable)

; (type_identifier) @type ;; not respecting precedence...
;; I don't love this but couldn't break them up right now
;; can't figure out how to let that be special without conflicting
;; in the grammar
"System.runAs" @method.defaultLibrary

(scoped_type_identifier
  (type_identifier) @type)