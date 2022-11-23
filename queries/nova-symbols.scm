((module_def (module_declaration) . (module_fqn) @name) @subtree (#set! role package))

((struct_declaration (identifier) @name) @subtree (#set! role struct))
((enum_declaration (identifier) @name) @subtree (#set! role enum))
((enum_member (identifier) @name) (#set! role enum-member))

((class_declaration (identifier) @name) @subtree (#set! role class))
((constructor) @subtree (#set! role constructor))

((manifest_constant (identifier) @name) @subtree (#set! role constant))

((function_declaration (identifier) @name) @subtree (#set! role function-or-method))

((variable_declaration (declarator (identifier) @name) @subtree (#set! role variable)))

((union_declaration (identifier) @name) @subtree (#set! role union))

((alias_declaration (alias_initializer . (identifier) @name) @subtree (#set! role type)))
