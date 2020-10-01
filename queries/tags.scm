(class_declaration
 name: (identifier) @name
 bases: (base_list (_) @name)
 ) @definition.class

(interface_declaration
 name: (identifier) @name
 bases: (base_list (_) @name)
 ) @definition.interface

(method_declaration
 name: (identifier) @name
 ) @definition.method

(object_creation_expression
 type: (identifier) @name
 ) @reference.class

(type_parameter_constraints_clause
 target: (identifier) @name
 ) @reference.class

(type_constraint
 type: (identifier) @name
 ) @reference.class

(invocation_expression
 function:
  (member_access_expression
    name: (identifier) @name
 )
) @reference.send

(namespace_declaration
 name: (identifier) @name
) @definition.module
