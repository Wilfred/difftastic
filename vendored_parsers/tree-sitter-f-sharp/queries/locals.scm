(identifier) @local.reference

[
  (namespace)
  (named_module)
  (function_or_value_defn)
] @local.scope

(value_declaration_left
  .
  [
   (_ (identifier) @local.definition.var)
   (_ (_ (identifier) @local.definition.var))
   (_ (_ (_ (identifier) @local.definition.var)))
   (_ (_ (_ (_ (identifier) @local.definition.var))))
   (_ (_ (_ (_ (_ (identifier) @local.definition.var)))))
   (_ (_ (_ (_ (_ (_ (identifier) @local.definition.var))))))
  ])

(function_declaration_left
  .
  ((_) @local.definition.function
   (#set! "definition.function.scope" "parent"))
  ((argument_patterns
    [
     (_ (identifier) @local.definition.parameter)
     (_ (_ (identifier) @local.definition.parameter))
     (_ (_ (_ (identifier) @local.definition.parameter)))
     (_ (_ (_ (_ (identifier) @local.definition.parameter))))
     (_ (_ (_ (_ (_ (identifier) @local.definition.parameter)))))
     (_ (_ (_ (_ (_ (_ (identifier) @local.definition.parameter))))))
    ])
  ))
