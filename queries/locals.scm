; Scopes
;-------

(let_binding) @local.scope

(class_binding) @local.scope

(class_function) @local.scope

(method_definition) @local.scope

(fun_expression) @local.scope

(match_case) @local.scope

(for_expression) @local.scope

; Definitions
;------------

(value_pattern) @local.definition

; References
;------------

(value_name) @local.reference
