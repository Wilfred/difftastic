; 3.2 Entity declaration {{{
(entity_header [
    (generic_map_aspect) @error.illegal.header.map_aspect.generic
    (port_map_aspect)    @error.illegal.header.map_aspect.port
  ])

(entity_header
  (port_clause    "port"    @error.order.header.clause)
  (generic_clause "generic" @error.order.header.clause))

(entity_header
  (port_clause)
  (port_clause) @error.repeated.header.clause.port)

(entity_header
  (generic_clause)
  (generic_clause) @error.repeated.header.clause.generic)

(entity_header [
    (generic_clause ")" @error.missing.semicolon .)
    (port_clause    ")" @error.missing.semicolon .)
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

(entity_declaration
  (concurrent_statement_part
    (process_statement
      (sequence_of_statements [
        (simple_waveform_assignment)
        (simple_force_assignment)
        (simple_release_assignment)
      ] @error.illegal.assignment.in_passive_process))
  ))

((entity_declaration
   name: (_) @_h
 at_end: (_) @error.misspeling.name @_t)
         (#not-eq? @_h @_t))
; }}}

