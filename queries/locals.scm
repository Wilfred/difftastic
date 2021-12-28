; Definitions

(ui_binding
  name: (identifier) @property
  (#match? @property "^id$")
  value: (expression_statement (identifier) @local.definition))
