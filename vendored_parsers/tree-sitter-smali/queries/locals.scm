[
  (class_directive)
  (expression)
  (annotation_directive)
  (array_data_directive)
  (method_definition)
  (packed_switch_directive)
  (sparse_switch_directive)
  (subannotation_directive)
] @scope

[
  (identifier)
  (class_identifier)
  (label)
  (jmp_label)
] @reference

(enum_reference
  (field_identifier) @definition.enum)

((field_definition
  (access_modifiers) @_mod
  (field_identifier) @definition.enum)
  (#eq? @_mod "enum"))

(field_definition
  (field_identifier) @definition.field
  (field_type) @definition.associated)

(annotation_key) @definition.field

(method_definition
  (method_signature (method_identifier) @definition.method))

(param_identifier) @definition.parameter

(annotation_directive
  (class_identifier) @definition.type)

(class_directive
  (class_identifier) @definition.type)
