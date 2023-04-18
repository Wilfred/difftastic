[
  (annotation_directive)
  (array_data_directive)
  (field_definition)
  (method_definition)
  (packed_switch_directive)
  (param_directive)
  (parameter_directive)
  (sparse_switch_directive)
  (subannotation_directive)
  (list)
] @indent.begin

[
  ".end annotation"
  ".end array-data"
  ".end field"
  ".end method"
  ".end packed-switch"
  ".end param"
  ".end parameter"
  ".end sparse-switch"
  ".end subannotation"
  "}"
] @indent.end

[ "{" "}" ] @indent.branch

[
  (ERROR)
  (comment)
] @indent.auto
