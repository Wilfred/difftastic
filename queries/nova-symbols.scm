((module_def (module_declaration (module_fqn) @name)) @subtree (#set! role package))

((struct_declaration (struct) . (identifier) @name) @subtree (#set! role struct))
((enum_declaration (enum) . (identifier) @name) @subtree (#set! role enum))

((class_declaration (class) . (identifier) @name) @subtree (#set! role class))
((constructor (this) @name) @subtree (#set! role constructor))
((destructor (this) @name) @subtree (#set! role destructor))
((postblit (this) @name) @subtree (#set! role constructor))

((manifest_constant (enum) . (identifier) @name) @subtree (#set! role constant))

((function_declaration (identifier) @name) @subtree (#set! role function-or-method))

((aggregate_body (variable_declaration (declarator (identifier) @name) @subtree (#set! role property))))

((union_declaration (union) . (identifier) @name) @subtree (#set! role union))

((alias_declaration (alias_initializer . (identifier) @name) @subtree (#set! role type)))

((anonymous_enum_declaration ((enum_member . (identifier) @name) @subtree (#set! role constant))))

((enum_declaration ((enum_member . (identifier) @name) @subtree (#set! role enum-member))))
