; Properties

(ui_binding
  name: (identifier) @property)
(ui_binding
  name: (ui_qualified_id
         (identifier) @property))

(ui_property
  type: (identifier) @type
  name: (identifier) @property)

; Keywords

[
  "component"
  "on"
  "property"
  "readonly"
  "required"
  "signal"
] @keyword
