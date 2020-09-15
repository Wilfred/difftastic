(class_declaration
 name: [
        (identifier) @name
        ]
 ) @definition.class

(interface_declaration
 name: [
        (identifier) @name
        ]
 ) @definition.interface

(method_declaration
 name: [
        (identifier) @name
        ]
 ) @definition.method

(object_creation_expression
 type: (identifier) @name
 ) @reference.class
