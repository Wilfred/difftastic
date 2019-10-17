; Scopes
;-------

(statement_block) @local.scope
(function) @local.scope
(arrow_function) @local.scope
(function_declaration) @local.scope
(method_definition) @local.scope

; Definitions
;------------

(formal_parameters
  (identifier) @local.definition)

(formal_parameters
  (object_pattern
    (identifier) @local.definition))

(formal_parameters
  (object_pattern
    (shorthand_property_identifier) @local.definition))

(formal_parameters
  (array_pattern
    (identifier) @local.definition))

(variable_declarator
  name: (identifier) @local.definition)

; References
;------------

(identifier) @local.reference
