; locals.scm

(method_declaration) @local.scope
(do_statement) @local.scope

(method_declaration
  (formal_parameters (formal_parameter (identifier) @local.definition)))

(variable_declarator . (identifier) @local.definition)

(enum_declaration
  name: (identifier) @local.definition)
(enum_constant
        name: (identifier) @local.definition)

(identifier) @local.reference
