; Properties

(ui_binding
  name: (identifier) @property)
(ui_binding
  name: (nested_identifier
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
