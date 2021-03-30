; 3.2 Entity declaration {{{
(entity_header [
    (generic_map_aspect) @error.illegal.map_aspect.generic
    (port_map_aspect)    @error.illegal.map_aspect.port
  ])

(entity_header
  (port_clause)
  (generic_clause) @error.order.generic_after_port)

(entity_header
  (port_clause)
  (port_clause) @error.repeated.clause.port)

(entity_header
  (generic_clause)
  (generic_clause) @error.repeated.clause.generic)

(entity_header [
    (generic_clause ")" @error.missing.semicolon.after_clause .)
    (port_clause    ")" @error.missing.semicolon.after_clause .)
  ])

(entity_declaration
  (declarative_part [
    (variable_declaration)
    (component_declaration)
    (configuration_specification)
  ] @error.illegal.declaration))

(entity_declaration
  (concurrent_statement_part [
    (block_statement)
    (component_instantiation_statement)
    (simple_concurrent_signal_assignment)
    (conditional_concurrent_signal_assignment)
    (selected_concurrent_signal_assignment)
    (for_generate_statement)
    (if_generate_statement)
    (case_generate_statement)
    (PSL_Property_Declaration)
    (PSL_Sequence_Declaration)
    (PSL_Clock_Declaration)
  ] @error.illegal.statement))

;; tree-sitter-cli
;; NOTE: Only simple cases
(entity_declaration
  (concurrent_statement_part
    (process_statement
      (sequence_of_statements [
        (simple_waveform_assignment)
        (simple_force_assignment)
        (simple_release_assignment)
      ] @error.illegal.assignment.in_passive_process))
  ))

;; nvim-tree-sitter
((simple_waveform_assignment)
 (#has-ancestor?
    @error.illegal.assignment.in_passive_process
    entity_declaration))

;; nvim-tree-sitter
((simple_force_assignment)
 (#has-ancestor?
    @error.illegal.assignment.in_passive_process
    entity_declaration))

;; nvim-tree-sitter
((simple_release_assignment)
 (#has-ancestor?
    @error.illegal.assignment.in_passive_process
    entity_declaration))

((entity_declaration
   name: (_) @_h
 at_end: (_) @error.misspeling.name @_t)
         (#not-eq? @_h @_t))
; }}}
; 3.3 Architecture bodies {{{
(architecture_body
  (declarative_part
    (variable_declaration) @error.illegal.declaration))

((architecture_body
   name: (_) @_h
 at_end: (_) @error.misspeling.name @_t)
         (#not-eq? @_h @_t))
; }}}
; 4.2 Subprogram declaration {{{
(procedure_declaration
  ["pure" "impure"] @error.unexpected.purity)

(procedure_declaration
  designator: (operator_symbol) @error.illegal.designator.operator_symbol)

(procedure_declaration
  (return) @error.unexpected.return)

;;
(function_declaration
  designator: (_) . (function_parameter_clause)? . ";" @error.missing.return)

;;
(subprogram_header [
    (port_clause)     @error.illegal.clause.port
    (port_map_aspect) @error.illegal.map_aspect.port
  ])

(subprogram_header
  (generic_clause)
  (generic_clause) @error.repeated.clause.generic)

(subprogram_header
  (generic_map_aspect)
  (generic_map_aspect) @error.repeated.map_aspect.generic)

; FIXME
; Negation rule not supported yet (tree-sitter version v0.19.4)
;(subprogram_header
; . !(generic_clause)*
; .  (generic_map_aspect  ["generic" "map"] @error.missing.clause.generic)
; . !(generic_clause)*)

; WORKARROUND
; Only single common case
(subprogram_header
. (generic_map_aspect) @error.missing.clause.generic
. )

(subprogram_header
  (generic_map_aspect)
  (generic_clause) @error.order.clause_after_map_aspect)

(subprogram_header [
    (generic_clause     (semicolon) @error.unexpected.semicolon.after_clause     .)
    (generic_map_aspect (semicolon) @error.unexpected.semicolon.after_map_aspect .)
  ])
; }}}
; 4.2 Subprogram bodies {{{
(procedure_body
  ["pure" "impure"] @error.unexpected.purity)

(procedure_body
  designator: (operator_symbol) @error.illegal.designator.operator_symbol)

(procedure_body
  at_end: (operator_symbol) @error.illegal.designator.operator_symbol)

(procedure_body
  (return) @error.unexpected.return)

(procedure_body
  (declarative_part [
    (incomplete_type_declaration)
    (signal_declaration)
    (component_declaration)
    (configuration_specification)
    (disconnection_specification)
    (PSL_Assert_Directive)
    (PSL_Assume_Directive)
    (PSL_Assume_Guarantee_Directive)
    (PSL_Restrict_Directive)
    (PSL_Restrict_Guarantee_Directive)
    (PSL_Cover_Directive)
    (PSL_Fairness_Directive)
    (PSL_Strong_Fairness_Directive)
    (PSL_Property_Declaration)
    (PSL_Sequence_Declaration)
    (PSL_Clock_Declaration)
  ] @error.illegal.declaration))

(procedure_body
  (declarative_part
    (shared_variable_declaration "shared" @error.unexpected.shared)))

(procedure_body
          "procedure"
  at_end: "function"  @error.misspeling.subprogram_kind)

((procedure_body
 designator: (_) @_h
     at_end: (_) @error.misspeling.designator @_t)
             (#not-eq? @_h @_t))
;;
(function_body
  designator: (_) . (function_parameter_clause)? . "is" @error.missing.return)

(function_body
  at_end: ["pure" "impure"] @error.unexpected.purity.at_end)

(function_body
  (declarative_part [
    (signal_declaration)
    (component_declaration)
    (configuration_specification)
    (disconnection_specification)
    (PSL_Assert_Directive)
    (PSL_Assume_Directive)
    (PSL_Assume_Guarantee_Directive)
    (PSL_Restrict_Directive)
    (PSL_Restrict_Guarantee_Directive)
    (PSL_Cover_Directive)
    (PSL_Fairness_Directive)
    (PSL_Strong_Fairness_Directive)
    (PSL_Property_Declaration)
    (PSL_Sequence_Declaration)
    (PSL_Clock_Declaration)
  ] @error.illegal.declaration))

(function_body
  (declarative_part
    (shared_variable_declaration "shared" @error.unexpected.shared)))

(function_body
          "function"
  at_end: "procedure" @error.misspeling.subprogram_kind)

((function_body
 designator: (_) @_h
     at_end: (_) @error.misspeling.designator @_t)
             (#not-eq? @_h @_t))
; }}}
; 4.3 Subprogram instantiation {{{
(procedure_instantiation_declaration
  ["pure" "impure"] @error.unexpected.purity)

(procedure_instantiation_declaration
  designator: (operator_symbol) @error.illegal.designator.operator_symbol)

(procedure_instantiation_declaration
  (signature (return) @error.unexpected.return))

;;
(function_instantiation_declaration
  (signature (type_mark) ("," (type_mark))* . "]" @error.missing.return))

;;
(subprogram_map_aspect [
    (generic_clause)  @error.illegal.clause.generic
    (port_clause)     @error.illegal.clause.port
    (port_map_aspect) @error.illegal.map_aspect.port
  ])

(subprogram_map_aspect
  (generic_map_aspect)
  (generic_map_aspect) @error.repeated.map_aspect.generic)

(subprogram_map_aspect
  (generic_map_aspect (semicolon) @error.unexpected.semicolon.after_map_aspect .))
; }}}
; 4.2.2.1 Formal parameter list {{{
(procedure_parameter_clause [
    (signal_interface_declaration    (mode ["buffer" "linkage"]) @error.illegal.mode)
    (variable_interface_declaration  (mode ["buffer" "linkage"]) @error.illegal.mode)
    (signal_interface_declaration  (default_expression) @error.illegal.default_expression)
    (type_interface_declaration)      @error.illegal.interface.type
    (procedure_interface_declaration) @error.illegal.interface.procedure
    (function_interface_declaration)  @error.illegal.interface.function
    (package_interface_declaration)   @error.illegal.interface.package
  ])

(function_parameter_clause [
    (signal_interface_declaration    (mode ["out" "inout" "buffer" "linkage"]) @error.illegal.mode)
    (signal_interface_declaration  (default_expression) @error.illegal.default_expression)
    (variable_interface_declaration)  @error.illegal.interface.variable
    (file_interface_declaration)      @error.illegal.interface.file
    (type_interface_declaration)      @error.illegal.interface.type
    (procedure_interface_declaration) @error.illegal.interface.procedure
    (function_interface_declaration)  @error.illegal.interface.function
    (package_interface_declaration)   @error.illegal.interface.package
  ])
; }}}
; 4.5 Subprogram overloading {{{
((operator_symbol) @error.illegal.operator_symbol
  (#not-match? @error.illegal.operator_symbol "^\"(and|or|nand|nor|xnor|s[rl]l|s[rl]a|ro[rl]|mod|rem|abs|not|\\+|\\-|&|\\?\\?|\\??[<>/]?=|\\??[<>]|\\*\\??)\"$"))
; }}}
; 4.5.3 Signatures {{{
(signature
  "[" . "]" @error.missing.type_mark)

(return
  "," @error.unexpected.comma)
; }}}
; 4.7 Package declarations {{{
(package_header [
    (port_clause)     @error.illegal.clause.port
    (port_map_aspect) @error.illegal.map_aspect.port
  ])

(package_header
  (generic_clause)
  (generic_clause) @error.repeated.clause.generic)

(package_header
  (generic_map_aspect)
  (generic_map_aspect) @error.repeated.map_aspect.generic)

; FIXME
; Negation rule not supported yet (tree-sitter version v0.19.4)
;(package_header
; . !(generic_clause)*
; .  (generic_map_aspect) @error.missing.clause.generic
; . !(generic_clause)*)

; WORKARROUND
; Only common case
(package_header
. (generic_map_aspect) @error.missing.clause.generic
. )

(package_header
  (generic_map_aspect)
  (generic_clause) @error.order.clause_after_map_aspect)

(package_header [
    (generic_clause     ")" @error.missing.semicolon.after_clause     .)
    (generic_map_aspect ")" @error.missing.semicolon.after_map_aspect .)
  ])

(package_declaration
  (declarative_part [
    (procedure_body)
    (function_body)
    (configuration_specification)
  ] @error.illegal.declaration))

(package_declaration
  (declarative_part
    (full_type_declaration
      (protected_type_body) @error.illegal.declaration)))

(procedure_body
  (declarative_part
    (package_declaration
      (declarative_part [
        (signal_declaration)
        (disconnection_specification)
        (PSL_Property_Declaration)
        (PSL_Sequence_Declaration)
        (PSL_Clock_Declaration)
      ] @error.illegal.declaration))))

(procedure_body
  (declarative_part
    (package_declaration
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(function_body
  (declarative_part
    (package_declaration
      (declarative_part [
        (signal_declaration)
        (disconnection_specification)
        (PSL_Property_Declaration)
        (PSL_Sequence_Declaration)
        (PSL_Clock_Declaration)
      ] @error.illegal.declaration))))

(function_body
  (declarative_part
    (package_declaration
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(process_statement
  (declarative_part
    (package_declaration
      (declarative_part [
        (signal_declaration)
        (disconnection_specification)
        (PSL_Property_Declaration)
        (PSL_Sequence_Declaration)
        (PSL_Clock_Declaration)
      ] @error.illegal.declaration))))

(process_statement
  (declarative_part
    (package_declaration
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(full_type_declaration
  (protected_type_body
    (declarative_part
      (package_declaration
        (declarative_part [
          (signal_declaration)
          (disconnection_specification)
          (PSL_Property_Declaration)
          (PSL_Sequence_Declaration)
          (PSL_Clock_Declaration)
        ] @error.illegal.declaration)))))

(full_type_declaration
  (protected_type_body
    (declarative_part
      (package_declaration
        (declarative_part
          (shared_variable_declaration "shared" @error.unexpected.shared))))))

((package_declaration
   name: (_) @_h
 at_end: (_) @error.misspeling.name @_t)
         (#not-eq? @_h @_t))
; }}}
; 4.8 Package bodies {{{
(package_body
  (declarative_part [
    (signal_declaration)
    (component_declaration)
    (configuration_specification)
    (disconnection_specification)
    (PSL_Assert_Directive)
    (PSL_Assume_Directive)
    (PSL_Assume_Guarantee_Directive)
    (PSL_Restrict_Directive)
    (PSL_Restrict_Guarantee_Directive)
    (PSL_Cover_Directive)
    (PSL_Fairness_Directive)
    (PSL_Strong_Fairness_Directive)
    (PSL_Property_Declaration)
    (PSL_Sequence_Declaration)
    (PSL_Clock_Declaration)
  ] @error.illegal.declaration))

(procedure_body
  (declarative_part
    (package_body
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(function_body
  (declarative_part
    (package_body
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(process_statement
  (declarative_part
    (package_body
      (declarative_part
        (shared_variable_declaration "shared" @error.unexpected.shared)))))

(full_type_declaration
  (protected_type_body
    (declarative_part
      (package_body
        (declarative_part
          (shared_variable_declaration "shared" @error.unexpected.shared))))))

((package_body
 package: (_) @_h
  at_end: (_) @error.misspeling.name @_t)
          (#not-eq? @_h @_t))
; }}}
; 4.9 Package instantiation declarations {{{
(package_map_aspect [
    (generic_clause)  @error.illegal.clause.generic
    (port_clause)     @error.illegal.clause.port
    (port_map_aspect) @error.illegal.map_aspect.port
  ])

(package_map_aspect
  (generic_map_aspect)
  (generic_map_aspect) @error.repeated.map_aspect.generic)

(package_map_aspect
  (generic_map_aspect (semicolon) @error.unexpected.semicolon.after_map_aspect .))
; }}}
; 5.2 Scalar types {{{
(ascending_range
   low: (simple_expression (integer_decimal))
  high: (simple_expression (real_decimal))) @error.illegal.range

(ascending_range
   low: (simple_expression (real_decimal))
  high: (simple_expression (integer_decimal))) @error.illegal.range

(descending_range
   high: (simple_expression (integer_decimal))
    low: (simple_expression (real_decimal))) @error.illegal.range

(descending_range
   high: (simple_expression (real_decimal))
    low: (simple_expression (integer_decimal))) @error.illegal.range
; }}}
; 5.2.2 Enumeration types {{{
((enumeration_type_definition
  literal: (_) @_a
  literal: (_) @error.repeated.enumerator @_b)
 (#eq? @_a @_b))
; }}}
; 5.2.4 Physical types {{{
((physical_type_definition
  (primary_unit_declaration
    name: (_) @_p)
  (secondary_unit_declaration
    name: (_) @error.repeated.unit @_s))
 (#eq? @_p @_s))

((physical_type_definition
  (secondary_unit_declaration
    name: (_) @_a)
  (secondary_unit_declaration
    name: (_) @error.repeated.unit @_b))
 (#eq? @_a @_b))

(secondary_unit_declaration
  (physical_literal [ (real_decimal) (based_real) ] @error.illegal.floating_point))

((full_type_declaration
  name: (_) @_h
  (physical_type_definition
    at_end: (_) @error.misspeling.name @_t))
 (#not-eq? @_h @_t))
; }}}
; 5.3.2 Array types {{{
(index_constraint
  (subtype_indication
    (resolution_function) @error.unexpected.resolution_function))

(parameter_specification
  (subtype_indication
    (resolution_function) @error.unexpected.resolution_function))

(full_type_declaration
  name: (_) @_t
  (constrained_array_definition
    (subtype_indication
      (type_mark (_) @error.repeated.type @_e)))
    (#eq? @_t @_e))

(full_type_declaration
  name: (_) @_t
  (unbounded_array_definition
    (subtype_indication
      (type_mark (_) @error.repeated.type @_e)))
    (#eq? @_t @_e))
; }}}
; 5.3.2.3 Predefined array types {{{
; Predefine array types shall be one dimensional
(subtype_indication
  (type_mark
    (simple_name) @_t
    (#match? @_t "^(string|(boolean|bit|integer|real|time)_vector)$"))
  (array_constraint
    (index_constraint
        (_)
        (_) @error.illegal.discrete_range)))

; String subtypes shall be indexed by positive numbers
(subtype_indication
  (type_mark
    (simple_name) @_t
    (#eq? @_t "string"))
  (array_constraint
    (index_constraint
      (_
        (simple_expression
          (integer_decimal
            (integer) @error.illegal.index.zero @_l
            (#eq? @_l "0")))))))

(subtype_indication
  (type_mark
    (simple_name) @_t
    (#eq? @_t "string"))
  (array_constraint
    (index_constraint
      (_
        (simple_expression
          (sign) @error.illegal.index.negative)))))

; Others predefined array types are indexed by natural numbers
(subtype_indication
  (type_mark
    (simple_name) @_t
    (#match? @_t "^(boolean|bit|integer|real|time)_vector$"))
  (array_constraint
    (index_constraint
      (_
        (simple_expression
          (sign) @error.illegal.index.negative)))))
; }}}
; 5.3.3 Record types {{{
((identifier_list
  (_) @_a
  (_) @error.repeated.identifier @_b)
 (#eq? @_a @_b))

(record_type_definition
  (element_declaration
    (identifier_list (_) @_a))
  (element_declaration
    (identifier_list (_) @error.repeated.identifier @_b))
 (#eq? @_a @_b))

((full_type_declaration
  name: (_) @_h
  (record_type_definition
    at_end: (_) @error.misspeling.name @_t))
 (#not-eq? @_h @_t))
; }}}

