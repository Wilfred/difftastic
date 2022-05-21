;; Method and Function declarations
(contract_declaration (_
    (function_definition
        function_name: (identifier) @name) @definition.method))

(source_file
    (function_definition
        function_name: (identifier) @name) @definition.function)

;; Contract, struct, enum and interface declarations
(contract_declaration
  name: (identifier) @name) @definition.class

(interface_declaration
  name: (identifier) @name) @definition.interface

(library_declaration
  name: (identifier) @name) @definition.interface

(struct_declaration struct_name: (identifier) @name) @definition.class
(enum_declaration enum_type_name: (identifier) @name) @definition.class

;; Function calls
(call_expression (identifier) @name ) @reference.call

(call_expression 
    (member_expression 
        property: (property_identifier) @name )) @reference.call


;; Inheritance

(inheritance_specifier
    ancestor: (user_defined_type (identifier) @name . )) @reference.class
    

;; Imports ( note that unknown is not standardised )
(import_directive 
  import_name: (identifier) @name ) @reference.unknown

(import_directive 
  import_origin: (identifier) @name ) @reference.unknown