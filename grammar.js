const PREC = {
  CONSTANT_INTERFACE: 3,
  VARIABLE_INTERFACE: 2,
  SIGNAL_INTERFACE: 1,
  ILLEGAL_INTERFACE: -3,
};

// 15.2 Character set
const RANGE_ATTRIBUTE_DESIGNATOR = [
  'range',
  'reverse_range'
];

const PREDEFINED_ATTRIBUTE_DESIGNATOR = [
  'base',
  'left',
  'right',
  'high',
  'low',
  'image',
  'pos',
  'val',
  'succ',
  'pred',
  'leftof',
  'rightof',
  'subtype',
  'length',
  'ascending',
  'descending',
  'element',
  'delayed',
  'stable',
  'quiet',
  'transaction',
  'event',
  'active',
  'last_event',
  'last_active',
  'last_value',
  'driving',
  'driving_value',
  'simple_name',
  'instance_name',
  'path_name',
];

const PREDEFINED_ATTRIBUTE_DESIGNATOR_WITH_EXPRESSION = [
  'image',
  'value',
  'pos',
  'val',
  'succ',
  'pred',
  'leftof',
  'rightof',
  'left',
  'right',
  'high',
  'low',
  'length',
  'ascending',
  'delayed',
  'stable',
  'quiet'
];

const EXPONENT = seq(
  choice('e','E'),
  optional(choice('+','-')),
  repeat(/[0-9_]/),
);

module.exports = grammar({
  name: 'vhdl',

  word: $ => $.basic_identifier,

  extras: $ => [ // {{{
    $.comment,
    $.tool_directive,
    /\s/,
  ], // }}}
  inline: $ => [ // {{{
    $._entity_name, // 3.2
    $._generate_specification, // 3.4
    $._configuration_item, // 3.4.2
    $._block_specification, // 3.4.2
    $._designator, // 4.2.1
    $._subprogram_declaration, // 4.2.1
    $._subprogram_kind, // 4.3
    $._subprogram_body, // 4.3
    $._subprogram_instantiation_declaration, // 4.4
    $._uninstantiated_name, // 4.4
    $._package_name, // 4.8
    $._scalar_type_definition, // 5.2.1
    $._range, // 5.2.1
    $._range_attribute_name, // 5.2.1
    $._numeric_type_definition, // 5.2.1
    $._unit, // 5.2.4
    $._discrete_range, // 5.3.2
    $._object_declaration, // 6
    $._constraint, // 6.3
    $._element_constraint, // 6.3
    $._resolution_indication, // 6.3
    $._generic_interface_declaration, // 6.5
    $._port_interface_declaration, // 6.5
    $._procedure_interface_declaration, // 6.5
    $._function_interface_declaration, // 6.5
    $._alias_denotator, // 6.6
    $._illegal_interface_declaration, // 6.5.2
    $._subprogram_interface_declaration, // 6.5.4
    $._formal_part, // 6.5.7
    $._actual_part, // 6.5.7
    $._generic_interface_list, // 6.5.6.1
    $._port_interface_list, // 6.5.6.1
    $._procedure_parameter_list, // 6.5.6.1
    $._function_parameter_list, // 6.5.6.1
    $._clause, // HEADER
    $._group_template, // 6.10
    $._group_constituent, // 6.10
    $._component_name, // 7.3
    $._name, // 8
    $._range_attribute_designator, // 8.6
    $._external_object_name, // 8.7
    $._name_or_label, // 8.7
    $._external_pathname, // 8.7
    $._expression, // 9.1
    $._condition, // 9.1
    $._simple_expression, // 9.1
    $._string_expression, // 9.1
    $._severity_expression, // 9.1
    $._file_open_kind, // 9.1
    $._time_expression, // 9.1
    $._literal, // 9.3.2
    $._numeric_literal, // 9.3.2
    $._element_association, // 9.3.3
    $._value, // 9.3.3
    $._choice, // 9.3.3
    $._function_name, // 9.3.4
    $._signal_name, // 10.2
    $._sensitivity_clause, // 10.2
    $._condition_clause, // 10.2
    $._timeout_clause, // 10.2
    $._signal_assignment_statement, // 10.5
    $._simple_signal_assignment, // 10.5.2
    $._conditional_signal_assignment, // 10.5.3
    $._selected_signal_assignment, // 10.5.4
    $._variable_assignment_statement, // 10.6
    $._iteration_scheme, // 10.10
    $._concurrent_signal_assignment, // 11.6
    $._generate_statement, // 11.8
    $._library_unit, // 13.1
    $._digit, // 15.5.2
    $._digit_immed, // 15.5.2
    $._identifier, // 14.4
    $._abstract_literal, // 15.5
    // PSL
    $._PSL_Identifier, // PSL
    $._PSL_Boolean, // PSL 5
    $._PSL_Any_Type, // PSL 5
    $._PSL_Clock_Expression, // PSL 5.3
    $._PSL_Value, // PSL 5
    $._PSL_FL_Property, // PSL 6.2
    $._PSL_Property, // PSL 6.2
    $._PSL_HDL_Module_NAME, // PSL 7.2
  ], // }}}
  conflicts: $ => [ // {{{
    // 'procedure'  _identifier  •  'is'  …
    //
    // procedure_declaration:
    //      procedure foo is begin end procedure;
    // procedure_declaration:
    //      procedure foo is new bar;
    [$._procedure_specification, $.procedure_instantiation_declaration],
    [$._function_specification , $.function_instantiation_declaration ],
    // NOTE: This conflict can be solved inlining the rules, but there
    // is a large penalty on the generated parser size (that is already
    // quite large)

    // function_call (positional_association_element)
    // ambiguous_name (expression_list)
    //
    // _name '(' _expression ')'
    //
    // `foo ('+')`   -> function_call (see _actual_part)
    // `foo ("str")` -> function_call (see _actual_part)
    [$.positional_association_element, $.expression_list],
    [$.positional_association_element, $.group_constituent_list, $._primary],

    // `(id (discrete_range))`
    // slice name:
    //      `assert (arr (id'range))`
    //  subtype indication
    //      `assert new rec (elem (id'range));`
    [$.index_constraint, $.slice_name],

    // '(' _simple_name '(' _simple_name  •  ')'  …
    // resolution_function:
    //      assert new subtype_st (resolve_fun type_t);
    //                             ^^^^^^^^^^^
    // type_mark:
    //      assert new subtype_st (type_t object'range);
    //                             ^^^^^^
    // Unsure when _expression is used
    [$.resolution_function, $.type_mark, $._primary],

    // type_mark is ambiguos with simple_name in many contexts
    [$.type_mark, $._primary],
    [$.type_mark, $._primary, $.entity_instantiation],
    [$.type_mark, $._primary, $.PSL_Hierarchical_HDL_Name],
    [$.type_mark, $.function_call],
    [$.type_mark, $.ambiguous_name, $.function_call],
    [$.type_mark, $.ambiguous_name, $.function_call, $.slice_name],
    [$.type_mark, $.ambiguous_name, $.function_call, $.slice_name, $.record_element_resolution, $.type_mark],

    // _simple_name  •  '''  …
    //
    // attribute_name:
    //      `assert foo'bar;`
    // qualified_expression:
    //      `assert foo'(bar);`
    [$.attribute_name, $.type_mark],
    [$.attribute_name, $._primary],

    [$._predefined_designator, $._predefined_designator_with_expression],

    // '('  _simple_name  •  '''  …
    //
    // type_mark:
    //      assert (foo'(bar), ...);
    // attribute_name:
    //      assert (foo'bar, ...);
    // range_attribute_name
    //      assert (foo'range, ...);
    [$.attribute_name, $.range_attribute_name, $.type_mark],

    // '('  _name '(' open  • ')' ...
    //
    // function call:
    //      `assert (fun (fun (open)))`
    // subtype indication
    //      `assert new rec (elem (open));`
    //
    [$.positional_association_element, $.index_constraint],
    [$.positional_association_element, $._primary],
    [$.named_association_element, $._primary],

    // 6.2
    // map clauses and map aspects shall or shall not be
    // followed by semicolon depending on the context
    [$.generic_clause],
    [$.port_clause],
    [$.procedure_parameter_clause],
    [$.function_parameter_clause],
    [$.generic_map_aspect],
    [$.port_map_aspect],

    // interfaces declarations defaults depends on context
    // see corpus/interface_lists/
    [$.constant_interface_declaration,
      $.signal_interface_declaration,
      $.variable_interface_declaration ],

    [$._constant_mode, $._signal_mode, $._variable_mode],

    // Generate statement body
    // see corpus/declarations/generate.txt
    // If generate - Generate body - If
    [$.if_generate],
    [$.else_generate],
    [$.elsif_generate],
    [$.elsif_generate],
    [$.generate_statement_body],
    [$.case_generate_alternative],

    // `assert id
    // `restrict id;`
    [$.PSL_Instance, $._simple_name],
    [$._PSL_Property_Instance, $._PSL_Sequence_Instance, $._PSL_Ambiguous_Instance],
    [$._PSL_Property_Instance, $._PSL_Sequence_Instance],

    [$.PSL_Property_Replicator],
    [$.PSL_Property_Declaration],

    // assert '{' ... '}' 
    [$._PSL_Compound_SERE, $._PSL_Sequence],

    [$.configuration_specification],
  ], // }}}
  precedences: () => [ // {{{
    // Top level precedence
    // Used when declarations and/or statements are outside of sequential
    // statements, library unit or context clause.
    // Use case: snippets of code on web (eg. declarative part w/o body)
    [ 'declaration'          , 'primary_unit'        ],
    [ 'declaration'          , 'secondary_unit'      ],
    [ 'declaration'          , 'context_item'        ],
    [ 'concurrent_statement' , 'sequential_statement'],
    [ 'concurrent_statement' , 'declaration'         ],
    // Component declarations vs component instantiation
    [ 'component_declaration', 'simple_name'         ],
    // This following relation is ambiguos. Usually procedure_call_statement,
    // but component_instantiation is also legal.
    [ 'procedure_call', 'component_instantiation' ],
    // Expanded name
    // Subtype indication
    [ 'record_element_constraint' , 'type_mark'           ],
    [ 'record_element_resolution' , 'resolution_function' ],
    [ 'type_mark'                 , 'resolution_function' ],
    [ 'primary'                   , 'resolution_function' ],
    // Physical literal
    [ 'primary'                   , 'physical_literal'    ],
    [ 'attribute_name'            , 'physical_literal'    ],
    // Group constituent
    [ 'group_constituent_list'    , 'primary'             ],
    [ 'group_constituent_list'    , 'type_mark'           ],
    // Generate statatement element
    [ 'generate_statement_element', 'primary'             ],
    // Incomplete selected assignment
    // Assertion
    // NOTE
    // VHDL LRM states that ambiguos VHDL/PSL assertions shall
    // be parsed as VHDL assertion
    [ 'vhdl_assertion', 'psl_assertion' ],
    // VHDL operands precedence
    [
      'range',
      'exponentiation',
      'factor',
      'term',
      'sign',
      'simple_expression',
      'shift_expression',
      'relation',
      'logical_expression',
      'reduction',
      'condition',
    ],
    // PSL operands precedence
    [
      'union',
      'clocked',
      'SERE_repetition',
      'sequence_within',
      'sequence_and',
      'sequence_or',
      'sequence_fusion',
      'sequence_concatenation',
      'termination_property',
      'occurrence_property',
      'bounding_property',
      'sequence_implication',
      'property_implication',
      'invariant_property',
    ],
    [
      // "next" "(" ... ")" is psl function
      'psl_function_call',
      'parenthesized_boolean',
      'parenthesized_expression',
      'occurrence_property',
      'parenthesized_property',
    ],
    // Conflicts between VHDL expression and PSL expression
    [ 'logical_expression', 'logical_property' ],
    [ 'factor'            , 'property_factor'  ],
    // PSL Expression implication has the same precedence as
    // VHDL expressions, therefore property_implication shall
    // have lower precedence than implication.
    [ 'implication', 'property_implication' ],
  ], // }}}

  rules: {

    design_file: $ => repeat(choice(
      $._declaration,
      $._sequential_statement,
      $._concurrent_statement,
      $.design_unit
    )),

    // 3.2 Entity declarations {{{
    entity_declaration: $ => seq(
      reservedWord('entity'),
      field('name',$._identifier),
      reservedWord('is'),
      optional(alias($._header,$.entity_header)),
      optional($.declarative_part),
      optional(seq(
        reservedWord('begin'),
        optional($.concurrent_statement_part)
      )),
      reservedWord('end'),
      optional(reservedWord('entity')),
      optional($._end_simple_name),
      ';'
    ),

    _entity_name: $ => field('entity', choice(
      $._simple_name,
      $.selected_name
    )),
    // }}}
    // 3.3 Architecture bodies {{{
    architecture_body: $ => seq(
      reservedWord('architecture'),
      field('name',$._identifier),
      reservedWord('of'),
      $._entity_name,
      reservedWord('is'),
      optional($.declarative_part),
      reservedWord('begin'),
      optional($.concurrent_statement_part),
      reservedWord('end'),
      optional(reservedWord('architecture')),
      optional($._end_simple_name),
      ';'
    ),
    // }}}
    // 3.4 Configuration declarations {{{
    configuration_declaration: $ => seq(
      reservedWord('configuration'),
      field('name',$._identifier),
      reservedWord('of'),
      $._entity_name,
      reservedWord('is'),
      // TODO
      // Allow any sequence of declarative_item,
      // verification_unit_binding_indication and block_configuration
      // and use highlight query to highlight the errors
      optional($.declarative_part),
      repeat($.verification_unit_binding_indication),
      optional($.block_configuration),
      reservedWord('end'),
      optional(reservedWord('configuration')),
      optional($._end_simple_name),
      ';'
    ),
    // }}}
    // 3.4.2 Block configuration {{{
    block_configuration: $ => seq(
      reservedWord('for'),
      $._block_specification,
      repeat($.use_clause),
      repeat($._configuration_item),
      reservedWord('end'),
      reservedWord('for'),
      ';'
    ),

    _block_specification: $ => alias(
      $.pathname_element,
      $.block_specification
    ),

    generate_statement_element: $ => prec('generate_statement_element',seq(
      field('label', $._simple_name),
      '(',
      $._generate_specification,
      ')'
    )),

    _generate_specification: $ => field(
      'specification',
      choice(
        $._expression,
        $._range,
        $._name_or_label
      )
    ),

    _configuration_item: $ => choice(
      $.block_configuration,
      $.component_configuration
    ),
    // }}}
    // 3.4.3 Component configuration {{{
    component_configuration: $ => seq(
      reservedWord('for'),
      $._component_specification,
      optional($.binding_indication),
      repeat($.verification_unit_binding_indication),
      optional($.block_configuration),
      reservedWord('end'),
      reservedWord('for'),
      ';'
    ),
    // }}}
    // 4.2.1 Subprogram declarations {{{
    _subprogram_declaration: $ => choice(
      $.procedure_declaration,
      $.function_declaration,
    ),

    procedure_declaration: $ => seq(
      $._procedure_specification,
      ';'
    ),

    function_declaration: $ => seq(
      $._function_specification,
      ';'
    ),

    _procedure_specification: $ => seq(
      optional(choice(
        reservedWord('pure'),
        reservedWord('impure')
      )),
      reservedWord('procedure'),
      $._designator,
      optional(alias($._header,$.subprogram_header)),
      optional($.procedure_parameter_clause),
      optional($.return)
    ),

    _function_specification: $ => seq(
      optional(choice(
        reservedWord('pure'),
        reservedWord('impure')
      )),
      reservedWord('function'),
      $._designator,
      optional(alias($._header,$.subprogram_header)),
      optional($.function_parameter_clause),
      optional($.return)
    ),

    return: $ => seq(
      optional(','), // LINT: unexpected comma
      reservedWord('return'),
      $.type_mark,
    ),

    _end_designator: $ => field(
      'at_end',
      choice(
        $._end_simple_name,
        $._operator_symbol
      )
    ),

    _designator: $ => field('designator',choice(
      $._identifier,
      $._operator_symbol,
    )),
    // }}}
    // 4.2.2.1 Formal parameter list {{{
    // ref formal_parameter_list
    procedure_parameter_clause: $ => seq(
      optional(reservedWord('parameter')),
      '(',
      optional($._procedure_parameter_list),
      ')',
    ),

    function_parameter_clause: $ => seq(
      optional(reservedWord('parameter')),
      '(',
      optional($._function_parameter_list),
      ')',
    ),
    // }}}
    // 4.3 Subprogram bodies {{{
    _subprogram_body: $ => choice(
      $.procedure_body,
      $.function_body
    ),

    procedure_body: $ => seq(
      $._procedure_specification,
      reservedWord('is'),
      optional($.declarative_part),
      reservedWord('begin'),
      optional($.sequence_of_statements),
      reservedWord('end'),
      optional($._subprogram_kind),
      optional($._end_designator),
      ';'
    ),

    function_body: $ => seq(
      $._function_specification,
      reservedWord('is'),
      optional($.declarative_part),
      reservedWord('begin'),
      optional($.sequence_of_statements),
      reservedWord('end'),
      optional($._subprogram_kind),
      optional($._end_designator),
      ';'
    ),

    _subprogram_kind: $ => field('at_end',seq(
      optional(choice(
        reservedWord('pure'),
        reservedWord('impure')
      )),
      choice(
        reservedWord('procedure'),
        reservedWord('function')
      ),
    )),
    // }}}
    // 4.4 Subprogram instantiation declarations {{{
    _subprogram_instantiation_declaration: $ => choice(
      $.procedure_instantiation_declaration,
      $.function_instantiation_declaration
    ),

    // LINT
    // Procedure shall not have purity
    procedure_instantiation_declaration: $ => seq(
      optional(choice(
        reservedWord('pure'),
        reservedWord('impure')
      )),
      reservedWord('procedure'),
      $._designator,
      reservedWord('is'),
      reservedWord('new'),
      $._uninstantiated_name,
      optional($.signature),
      optional(alias($._header,$.subprogram_map_aspect)),
      ';'
    ),

    function_instantiation_declaration: $ => seq(
      optional(choice(
        reservedWord('pure'),
        reservedWord('impure')
      )),
      reservedWord('function'),
      $._designator,
      reservedWord('is'),
      reservedWord('new'),
      $._uninstantiated_name,
      optional($.signature),
      optional(alias($._header,$.subprogram_map_aspect)),
      ';'
    ),

    _uninstantiated_name: $ => field('uninstantiated', choice(
      $.selected_name,
      $._simple_name
    )),
    // }}}
    // 4.5.3 Signatures {{{
    signature: $ => seq(
      '[',
      sepBy(',', $.type_mark),
      optional($.return),
      ']'
    ),
    // }}}
    // 4.7 Package declarations {{{
    package_declaration: $ => seq(
      reservedWord('package'),
      field('name',$._identifier),
      reservedWord('is'),
      optional(alias($._header,$.package_header)),
      optional($.declarative_part),
      reservedWord('end'),
      optional(reservedWord('package')),
      optional($._end_simple_name),
      ';'
    ),
    // }}}
    // 4.8 Package bodies {{{
    package_body: $ => seq(
      reservedWord('package'),
      reservedWord('body'),
      $._package_name,
      reservedWord('is'),
      optional($.declarative_part),
      reservedWord('end'),
      optional(seq(
        reservedWord('package'),
        reservedWord('body'),
      )),
      optional($._end_simple_name),
      ';'
    ),

    _package_name: $ => field('package', $._simple_name),
    // }}}
    // 4.9 Package instantiation declarations {{{
    package_instantiation_declaration: $ => seq(
      reservedWord('package'),
      field('name',$._identifier),
      reservedWord('is'),
      reservedWord('new'),
      $._uninstantiated_name,
      optional(alias($._header,$.package_map_aspect)),
      ';'
    ),
    // }}}
    // 5.2.1 Scalar types {{{
    _scalar_type_definition: $ => choice(
      $.enumeration_type_definition,
      $._numeric_type_definition,
      $.physical_type_definition
    ),

    _numeric_type_definition: $ => alias(
      $.range_constraint,
      $.numeric_type_definition
    ),

    range_constraint: $ => seq(
      reservedWord('range'),
      $._range
    ),

    _range: $ => choice(
      $.ascending_range,
      $.descending_range,
      $._range_attribute_name,
    ),

    _range_attribute_name: $ => alias(
      $.range_attribute_name,
      $.attribute_name
    ),

    range_attribute_name: $ => seq(
      field('prefix', choice(
        $._simple_name,
        $.selected_name,
        $.ambiguous_name,
        $.attribute_name,
        $._external_object_name,
      )),
      $._range_attribute_designator,
    ),

    ascending_range: $ => prec('range',seq(
      field('low', $._simple_expression),
      reservedWord('to'),
      field('high', $._simple_expression),
    )),

    descending_range: $ => prec('range',seq(
      field('high', $._simple_expression),
      reservedWord('downto'),
      field('low', $._simple_expression),
    )),
    // }}}
    // 5.2.2 Enumeration types {{{
    enumeration_type_definition: $ => seq(
      '(',
      sepBy1(',', $._enumeration_literal),
      ')'
    ),

    _enumeration_literal: $ => field('literal',choice(
      $.character_literal,
      $._identifier
    )),
    // }}}
    // 5.2.4 Physical types {{{
    physical_type_definition: $ => seq(
      $.range_constraint,
      reservedWord('units'),
      optional(seq(
        $.primary_unit_declaration,
        repeat($.secondary_unit_declaration),
      )),
      reservedWord('end'),
      reservedWord('units'),
      optional($._end_simple_name)
    ),

    primary_unit_declaration: $ => seq(
      field('name',$._identifier),
      ';'
    ),

    secondary_unit_declaration: $ => seq(
      field('name',$._identifier),
      '=',
      choice(
        $.physical_literal,
        alias(
          $._physical_literal,
          $.physical_literal
        ),
      ),
      ';'
    ),

    _physical_literal: $ => seq(
      $._unit
    ),

    physical_literal: $ => prec('physical_literal', seq(
      $._abstract_literal,
      $._unit,
    )),

    _unit: $ => field('unit', prec('physical_literal',choice(
      $._simple_name,
      $.selected_name
    ))),
    // }}}
    // 5.3 Composite types {{{
    _composite_type_definition: $ => choice(
      $._array_type_definition,
      $.record_type_definition
    ),
    // }}}
    // 5.3.2 Array types {{{
    _array_type_definition: $ => choice(
      $.unbounded_array_definition,
      $.constrained_array_definition
    ),

    unbounded_array_definition: $ => seq(
      reservedWord('array'),
      '(',
      sepBy1(',', $.index_subtype_definition),
      ')',
      reservedWord('of'),
      field('element',$.subtype_indication)
    ),

    constrained_array_definition: $ => seq(
      reservedWord('array'),
      $.index_constraint,
      reservedWord('of'),
      field('element',$.subtype_indication)
    ),

    index_subtype_definition: $ => seq(
      $.type_mark,
      reservedWord('range'),
      $._any
    ),

    array_constraint: $ => seq(
      $.index_constraint,
      optional($._array_element_constraint)
    ),

    _array_element_constraint: $ => alias(
      $._element_constraint,
      $.array_element_constraint
    ),

    index_constraint: $ => seq(
      '(',
      choice(
        sepBy1(',', $._discrete_range),
        prec.dynamic(99, $.open)
      ),
      ')',
    ),

    _discrete_range: $ => choice(
      $.subtype_indication,
      $._range,
    ),

    open: $ => reservedWord('open'),
    // }}}
    // 5.3.3 Record types {{{
    record_type_definition: $ => seq(
      reservedWord('record'),
      repeat($.element_declaration),
      reservedWord('end'),
      reservedWord('record'),
      optional($._end_simple_name)
    ),

    element_declaration: $ => seq(
      $.identifier_list,
      ':',
      $.subtype_indication,
      ';'
    ),

    record_constraint: $ => seq(
      '(',
      sepBy1(',', $.record_element_constraint),
      ')'
    ),

    record_element_constraint: $ => prec('record_element_constraint', seq(
      field('element', $._simple_name),
      $._element_constraint
    )),

    identifier_list: $ => sepBy1(',', $._identifier),
    // }}}
    // 5.4 Access types {{{
    access_type_definition: $ => seq(
      reservedWord('access'),
      $.subtype_indication
    ),
    // }}}
    // 5.4.2 Incomplete type declaration {{{
    incomplete_type_declaration: $ => seq(
      reservedWord('type'),
      field('name',$._identifier),
      ';'
    ),
    // }}}
    // 5.5 File types {{{
    file_type_definition: $ => seq(
      reservedWord('file'),
      reservedWord('of'),
      $.type_mark
    ),
    // }}}
    // 5.6.2 Protected type declarations {{{
    protected_type_declaration: $ => seq(
      reservedWord('protected'),
      optional($.declarative_part),
      reservedWord('end'),
      reservedWord('protected'),
      optional($._end_simple_name),
    ),
    // }}}
    // 5.6.2 Protected type bodies {{{
    protected_type_body: $ => seq(
      reservedWord('protected'),
      reservedWord('body'),
      optional($.declarative_part),
      reservedWord('end'),
      reservedWord('protected'),
      reservedWord('body'),
      optional($._end_simple_name),
    ),
    // }}}
    // 6. Declarations {{{
    declarative_part: $ => prec.left(repeat1(
      $._declaration
    )),

    _declaration: $ => prec('declaration',choice(
      $._subprogram_declaration,
      $._subprogram_body,
      $._subprogram_instantiation_declaration,
      $.package_declaration,
      $.package_body,
      $.package_instantiation_declaration,
      $._type_declaration,
      $.subtype_declaration,
      $._object_declaration,
      $.alias_declaration,
      $.component_declaration,
      $.attribute_declaration,
      $.attribute_specification,
      $.configuration_specification,
      $.disconnection_specification,
      $.use_clause,
      $.group_template_declaration,
      $.group_declaration,
      $._PSL_Directive,
      $._PSL_Declaration
    )),
    // }}}
    // 6.2 Type declarations {{{
    _type_declaration: $ => choice(
      $.full_type_declaration,
      $.incomplete_type_declaration,
    ),

    full_type_declaration: $ => seq(
      reservedWord('type'),
      field('name',$._identifier),
      reservedWord('is'),
      $._type_definition,
      ';'
    ),

    _type_definition: $ => choice(
      $._scalar_type_definition,
      $._composite_type_definition,
      $.access_type_definition,
      $.file_type_definition,
      $.protected_type_declaration,
      $.protected_type_body
    ),
    // }}}
    // 6.3 Subtype declaration {{{
    subtype_declaration: $ => seq(
      reservedWord('subtype'),
      field('name',$._identifier),
      reservedWord('is'),
      $.subtype_indication,
      ';'
    ),

    subtype_indication: $ => seq(
      optional($._resolution_indication),
      $.type_mark,
      optional($._constraint)
    ),

    _resolution_indication: $ => choice(
      $.resolution_function,
      $.record_resolution,
      $.parenthesized_resolution,
    ),

    resolution_function: $ => prec('resolution_function', choice(
      $._simple_name,
      $.selected_name
    )),

    parenthesized_resolution: $ => seq(
      '(',
      $._resolution_indication,
      ')'
    ),

    record_resolution: $ => seq(
      '(',
      sepBy1(',', $.record_element_resolution),
      ')'
    ),

    record_element_resolution: $ => prec('record_element_resolution', seq(
      field('element', $._simple_name),
      $._resolution_indication
    )),

    type_mark: $ => prec('type_mark',choice(
      $._simple_name,
      $.selected_name,
      $.attribute_name
    )),

    _constraint: $ => choice(
      $.range_constraint,
      $.array_constraint,
      $.record_constraint
    ),

    _element_constraint: $ => choice(
      $.array_constraint,
      $.record_constraint
    ),
    // }}}
    // 6.4.2 Object declarations {{{
    _object_declaration: $ => choice(
      $.constant_declaration,
      $.signal_declaration,
      $.variable_declaration,
      $.shared_variable_declaration,
      $.file_declaration,
    ),
    // }}}
    // 6.4.2 Constant declarations {{{
    constant_declaration: $ => seq(
      reservedWord('constant'),
      $.identifier_list,
      ':',
      $.subtype_indication,
      optional($.default_expression),
      ';'
    ),
    // }}}
    // 6.4.2.3 Signal declarations {{{
    signal_declaration: $ => seq(
      reservedWord('signal'),
      $.identifier_list,
      ':',
      $.subtype_indication,
      optional($.signal_kind),
      optional($.default_expression),
      ';'
    ),

    signal_kind: $ => choice(
      reservedWord('register'),
      reservedWord('bus')
    ),
    // }}}
    // 6.4.2.4 Variable declarations {{{
    variable_declaration: $ => seq(
      reservedWord('variable'),
      $.identifier_list,
      ':',
      $.subtype_indication,
      optional($.default_expression),
      ';'
    ),

    shared_variable_declaration: $ => seq(
      reservedWord('shared'),
      reservedWord('variable'),
      $.identifier_list,
      ':',
      $.subtype_indication,
      optional($.default_expression),
      ';'
    ),
    // }}}
    // 6.4.2.5 File declarations {{{
    file_declaration: $ => seq(
      reservedWord('file'),
      $.identifier_list,
      ':',
      $.subtype_indication,
      optional($.file_open_information),
      ';'
    ),

    file_open_information: $ => seq(
      optional(seq(
        reservedWord('open'),
        $._file_open_kind
      )),
      reservedWord('is'),
      $._file_logical_name
    ),

    _file_logical_name: $ => $._string_expression,
    // }}}
    // 6.5 Interface declarations {{{
    _generic_interface_declaration: $ => choice(
      $.constant_interface_declaration,
      $.type_interface_declaration,
      $._subprogram_interface_declaration,
      $.package_interface_declaration,
      $._illegal_interface_declaration
    ),

    _port_interface_declaration: $ => choice(
      $.signal_interface_declaration,
      $._illegal_interface_declaration
    ),

    // See 6.5.2 and 4.2.2.1
    _procedure_interface_declaration: $ => choice(
      $.constant_interface_declaration,
      $.signal_interface_declaration,
      $.variable_interface_declaration,
      $.file_interface_declaration,
      $._illegal_interface_declaration
    ),

    _function_interface_declaration: $ => choice(
      $.constant_interface_declaration,
      $.signal_interface_declaration,
      $.file_interface_declaration,
      $._illegal_interface_declaration
    ),
    // }}}
    // 6.5.2 Interface object declarations {{{
    constant_interface_declaration: $ => prec.dynamic(
      PREC.CONSTANT_INTERFACE,
      seq(
        optional(reservedWord('constant')),
        $.identifier_list,
        ':',
        optional(alias($._constant_mode, $.mode)),
        $.subtype_indication,
        optional($.default_expression)
      )
    ),

    signal_interface_declaration: $ => prec.dynamic(
      PREC.SIGNAL_INTERFACE,
      seq(
        optional(reservedWord('signal')),
        $.identifier_list,
        ':',
        optional(alias($._signal_mode, $.mode)),
        $.subtype_indication,
        optional($.signal_kind),
        optional($.default_expression)
      )
    ),

    variable_interface_declaration: $ => prec.dynamic(
      PREC.VARIABLE_INTERFACE,
      seq(
        optional(reservedWord('variable')),
        $.identifier_list,
        ':',
        optional(alias($._variable_mode, $.mode)),
        $.subtype_indication,
        optional($.default_expression)
      )
    ),

    file_interface_declaration: $ => seq(
      reservedWord('file'),
      $.identifier_list,
      ':',
      optional(alias($._signal_mode, $.mode)), // ILLEGAL, LINT
      $.subtype_indication,
      optional($.default_expression) // ILLEGAL, LINT
    ),

    // DO NOT LINE
    _in: $ => reservedWord('in'),
    _out: $ => reservedWord('out'),
    _inout: $ => reservedWord('inout'),
    _buffer: $ => reservedWord('buffer'),
    _linkage: $ => reservedWord('linkage'),

    // DO NOT INLINE
    _constant_mode: $ => choice(
      prec.dynamic( 1, $._in),
      prec.dynamic(-3, $._out),
      prec.dynamic(-3, $._inout),
      prec.dynamic(-3, $._buffer),
      prec.dynamic(-3, $._linkage),
    ),

    // DO NOT INLINE
    _variable_mode: $ => choice(
      prec.dynamic( 1, $._in),
      prec.dynamic( 1, $._out),
      prec.dynamic( 1, $._inout),
      prec.dynamic(-2, $._buffer),
      prec.dynamic(-2, $._linkage),
    ),

    // DO NOT INLINE
    _signal_mode: $ => choice(
      prec.dynamic(1, $._in),
      prec.dynamic(1, $._out),
      prec.dynamic(1, $._inout),
      prec.dynamic(1, $._buffer),
      prec.dynamic(1, $._linkage),
    ),

    _illegal_interface_declaration: $ => prec.dynamic(
      PREC.ILLEGAL_INTERFACE,
      choice(
        $.constant_interface_declaration,
        $.signal_interface_declaration,
        $.variable_interface_declaration,
        $.file_interface_declaration,
        $.type_interface_declaration,
        $._subprogram_interface_declaration,
        $.package_interface_declaration
      )
    ),
    // }}}
    // 6.5.3 Interface type declarations {{{
    type_interface_declaration: $ => seq(
      reservedWord('type'),
      field('name',$._identifier),
    ),
    // }}}
    // 6.5.4 Interface subprogram declarations {{{
    _subprogram_interface_declaration: $ => choice(
      $.procedure_interface_declaration,
      $.function_interface_declaration
    ),

    procedure_interface_declaration: $ => seq(
      $._procedure_specification,
      optional(seq(
        reservedWord('is'),
        $.interface_subprogram_default
      ))
    ),

    function_interface_declaration: $ => seq(
      $._function_specification,
      optional(seq(
        reservedWord('is'),
        $.interface_subprogram_default
      ))
    ),

    interface_subprogram_default: $ => choice(
      $._simple_name,
      $.selected_name,
      $._operator_symbol,
      alias('<>', $.same),
    ),
    // }}}
    // 6.5.5 Interface package declarations {{{
    package_interface_declaration: $ => seq(
      reservedWord('package'),
      field('name',$._identifier),
      reservedWord('is'),
      reservedWord('new'),
      $._uninstantiated_name,
      optional(alias($._header,$.package_map_aspect)),
    ),
    // }}}
    // 6.5.6.1 Interface lists {{{
    // LINT: Semicolon after last declaration
    _generic_interface_list: $ => seq(
      sepBy1(';', $._generic_interface_declaration),
    ),

    _port_interface_list: $ => seq(
      sepBy1(';', $._port_interface_declaration),
    ),

    _procedure_parameter_list: $ => seq(
      sepBy1(';', $._procedure_interface_declaration),
    ),

    _function_parameter_list: $ => seq(
      sepBy1(';', $._function_interface_declaration),
    ),
    // }}}
    // 6.5.6.2 Generic clauses {{{
    generic_clause: $ => seq(
      reservedWord('generic'),
      '(',
      optional($._generic_interface_list),
      ')',
      optional($._semicolon)
    ),

    _semicolon: $ => alias(';', $.semicolon),
    // }}}
    // 6.5.6.3 Port clauses {{{
    port_clause: $ => seq(
      reservedWord('port'),
      '(',
      optional($._port_interface_list),
      ')',
      optional($._semicolon)
    ),
    // }}}
    // 6.5.7 Association lists {{{
    // LINT: NAMED association element shall NOT be followed by
    //       POSITIONAL association element.
    // NOTE: The correct ordering is deliberatedly not enforced
    //       by the parser. Tree-sitter does not support custom
    //       error recovery yet.
    //       the query.
    // NOTE: Having different rules for positional and named
    //       association simplifies writing queries.

    association_list: $ => sepBy1(',', $._association_element),

    _association_element: $ => choice(
      $.positional_association_element,
      $.named_association_element
    ),

    positional_association_element: $ => seq(
      $._actual_part
    ),

    named_association_element: $ => seq(
      $._formal_part,
      delimiter('=>'),
      $._actual_part
    ),

    _formal_part: $ => field(
      'formal_part',
      choice(
        $._name,
        $.others
      ),
    ),

    _actual_part: $ => field(
      'actual_part',
      choice(
        $._expression,
        $.inertial_expression,
        prec.dynamic(-1, $.subtype_indication),
        prec.dynamic(99, $.open),
        // used to resolve conflicts
        // between ambiguous_name and function_call:
        //   _name '(' character_literal ')'
        //   _name '(' string_literal ')'
        prec.dynamic(2, $.character_literal),
        prec.dynamic(2, $.string_literal),
      ),
    ),
    // }}}
    // 6.5.7.2 Generic map aspects {{{
    generic_map_aspect: $ => seq(
      reservedWord('generic'),
      reservedWord('map'),
      '(',
      optional(choice(
        $.association_list,
        $.default,
        $._any
      )),
      ')',
      optional($._semicolon),
    ),

    default: $ => reservedWord('default'),
    _any: $ => alias('<>', $.any),
    // }}}
    // 6.5.7.3 Port map aspects {{{
    port_map_aspect: $ => seq(
      reservedWord('port'),
      reservedWord('map'),
      '(',
      optional($.association_list),
      ')',
      optional($._semicolon)
    ),
    // }}}
    // HEADER and MAP_ASPECTS {{{
    _header: $ => seq(
      $._clause,
      optional($._clause),
      optional($._clause),
      optional($._clause),
    ),

    _clause: $ => choice(
      $.generic_clause,
      $.generic_map_aspect,
      $.port_clause,
      $.port_map_aspect,
    ),
    // }}}
    // 6.6 Alias declarations {{{
    alias_declaration: $ => seq(
      reservedWord('alias'),
      $._alias_designator,
      optional(seq(
        ':',
        $.subtype_indication
      )),
      reservedWord('is'),
      $._alias_denotator,
      optional($.signature),
      ';'
    ),

    _alias_designator: $ => field(
      'designator',
      choice(
        $._identifier,
        $.character_literal,
        $._operator_symbol
      )
    ),

    _alias_denotator: $ => field(
      'denotator',
      choice(
        $._simple_name,
        $.character_literal,
        $.selected_name,
        $.ambiguous_name,
        $.slice_name,
        $.attribute_name,
        $._external_object_name,
      )
    ),

    _operator_symbol: $ => alias(
      $.string_literal,
      $.operator_symbol
    ),
    // }}}
    // 6.7 Attribute declarations {{{
    attribute_declaration: $ => seq(
      reservedWord('attribute'),
      field('name',$._identifier),
      ':',
      $.type_mark,
      ';'
    ),
    // }}}
    // 6.8 Component declarations {{{
    component_declaration: $ => prec('component_declaration',seq(
      reservedWord('component'),
      field('name',$._identifier),
      optional(reservedWord('is')),
      optional(alias($._header,$.component_header)),
      reservedWord('end'),
      reservedWord('component'),
      optional($._end_simple_name),
      ';'
    )),
    // }}}
    // 6.9 Group template declarations {{{
    group_template_declaration: $ => seq(
      reservedWord('group'),
      field('name',$._identifier),
      reservedWord('is'),
      '(',
      $.entity_class_entry_list,
      ')',
      ';'
    ),

    entity_class_entry_list: $ => sepBy1(',', $.entity_class_entry),

    entity_class_entry: $ => seq(
      $.entity_class,
      optional($._any)
    ),
    // }}}
    // 6.10 Group declarations {{{
    group_declaration: $ => seq(
      reservedWord('group'),
      field('name',$._identifier),
      ':',
      $._group_template,
      '(',
      $.group_constituent_list,
      ')',
      ';'
    ),

    group_constituent_list: $ => prec(
      'group_constituent_list',
      sepBy1(',', $._group_constituent),
    ),

    _group_constituent: $ => choice(
      $._simple_name,
      $.selected_name,
      $.character_literal
    ),

    _group_template: $ => field(
      'template',
      choice(
        $._simple_name,
        $.selected_name
      )
    ),
    // }}}
    // 7.2 Specifications {{{
    attribute_specification: $ => seq(
      reservedWord('attribute'),
      field('name',$._simple_name),
      reservedWord('of'),
      $.entity_specification,
      reservedWord('is'),
      $._expression,
      ';'
    ),

    entity_name_list: $ => choice(
      sepBy1(',', $.entity_designator),
      $.others,
      $.all
    ),

    entity_specification: $ => seq(
      $.entity_name_list,
      ':',
      $.entity_class
    ),

    entity_class: $ => choice(
      reservedWord('entity'),
      reservedWord('architecture'),
      reservedWord('configuration'),
      reservedWord('procedure'),
      reservedWord('function'),
      reservedWord('package'),
      reservedWord('type'),
      reservedWord('subtype'),
      reservedWord('constant'),
      reservedWord('signal'),
      reservedWord('variable'),
      reservedWord('component'),
      reservedWord('label'),
      reservedWord('literal'),
      reservedWord('units'),
      reservedWord('group'),
      reservedWord('file'),
      reservedWord('property'),
      reservedWord('sequence'),
    ),

    entity_designator: $ => seq(
      $._entity_tag,
      optional($.signature)
    ),

    _entity_tag: $ => choice(
      $._simple_name,
      $.character_literal,
      $._operator_symbol
    ),
    // }}}
    // 7.3 Configuration specification {{{
    configuration_specification: $ => prec.right(seq(
      reservedWord('for'),
      // not-optional, used to improve error recovery
      optional(seq(
        $._component_specification,
        $.binding_indication,
        optional(seq(
          repeat($.verification_unit_binding_indication),
          reservedWord('end'),
          reservedWord('for'),
          ';'
        ))
      ))
    )),

    _component_specification: $ => seq(
      $.instantiation_list,
      ':',
      $._component_name
    ),

    instantiation_list: $ => choice(
      sepBy1(',', $._simple_name),
      $.others,
      $.all
    ),

    all: $ => reservedWord('all'),

    // TODO: Does it allow expanded name?
    _component_name: $ => field(
      'component',
      $._simple_name
    ),
    // }}}
    // 7.3.2 Binding indication {{{
    binding_indication: $ => seq(
      optional(seq(
        reservedWord('use'),
        $._entity_aspect,
      )),
      optional($._header),
      ';'
    ),

    // LINT: component_instantiation shall not be present in
    // binding indication
    _entity_aspect: $ => choice(
      $.entity_instantiation,
      $.configuration_instantiation,
      $.component_instantiation,
      $.open
    ),
    // }}}
    // 7.3.4 Verification unit binding indication {{{
    verification_unit_binding_indication: $ => seq(
      reservedWord('use'),
      reservedWord('vunit'),
      $.verification_unit_list,
      ';'
    ),

    verification_unit_list: $ => sepBy1(
      ',',
      choice(
        $._simple_name,
        $.selected_name,
      )
    ),
    // }}}
    // 7.4 Disconnection specification {{{
    disconnection_specification: $ => seq(
      reservedWord('disconnect'),
      $.guarded_signal_specification,
      $._after,
      ';'
    ),

    guarded_signal_specification: $ => seq(
      $.signal_list,
      ':',
      $.type_mark,
    ),

    signal_list: $ => choice(
      sepBy1(',', $._signal_name),
      $.others,
      $.all
    ),
    // }}}
    // 8 Names {{{
    _name: $ => choice(
      $._simple_name,
      $.character_literal,
      $.selected_name,
      $.ambiguous_name,
      $.slice_name,
      $.attribute_name,
      $._external_object_name,
    ),

    _simple_name: $ => prec('simple_name',choice(
      alias($.basic_identifier, $.simple_name),
      alias($.extended_identifier, $.extended_simple_name)
    )),

    _end_simple_name: $ => field(
      'at_end',
      $._simple_name
    ),
    // }}}
    // 8.3 Selected names {{{
    // LINT
    // Only expanded names shall have character_literal and operator_symbol
    // as suffix
    selected_name: $ => seq(
      field('prefix', choice(
        $._simple_name,
        $.selected_name,
        $.ambiguous_name,
        $.slice_name,
        $._external_object_name,
      )),
      token.immediate('.'),
      field('suffix', choice(
        $._simple_name,
        $.character_literal,
        $._operator_symbol,
        $.all // allowed on access value
      )),
    ),
    // }}}
    // 8.4 Indexed name (Ambiguos name) {{{
    // foo (bar)
    // - function call
    // - type conversion
    // - slice name
    // - indexed name
    // foo (bar, baz)
    // - function call
    // - indexed name
    // prefix (foo)
    // - slice name
    // - indexed name
    ambiguous_name: $ => seq(
      field('prefix', choice(
        $._simple_name,
        $.selected_name,
        $.ambiguous_name,
        $.function_call
      )),
      '(',
      $.expression_list,
      ')'
    ),

    expression_list: $ => sepBy1(',', $._expression),
    // }}}
    // 8.5 Slice name {{{
    slice_name: $ => seq(
      field('prefix', choice(
        $._simple_name,
        $.ambiguous_name,
        $.selected_name,
        $.slice_name,
        $.function_call,
      )),
      '(',
      $._range,
      ')'
    ),
    // }}}
    // 8.6 Attribute names {{{
    attribute_name: $ => prec('attribute_name',seq(
      field('prefix', choice(
        $._simple_name,
        $.selected_name,
        $.ambiguous_name, // indexed_name allowed
        $.attribute_name,
        $.function_call,
        $._external_object_name,
      )),
      optional($.signature),
      choice(
        $._attribute_designator,
        $._predefined_attribute_designator,
        $._predefined_attribute_designator_with_expression,
      ),
    )),


    _attribute_designator: $ => seq(
      token('\''),
      field('designator', $._simple_name),
    ),

    _predefined_attribute_designator: $ => prec.dynamic(1, seq(
      token('\''),
      field('designator', alias($._predefined_designator, $.predefined_designator)),
    )),

    // Only predefined attributes shall have expression
    _predefined_attribute_designator_with_expression: $ => prec.dynamic(2, prec.right(seq(
      token('\''),
      field('designator', alias($._predefined_designator_with_expression, $.predefined_designator)),
      '(',
      $._expression,
      ')'
    ))),

    _range_attribute_designator: $ => seq(
      token('\''),
      field('designator', alias($._range_designator, $.predefined_designator)),
      optional(seq(
        '(',
        $._expression,
        ')',
      ))
    ),

    // DO NOT INLINE
    _predefined_designator: $ => choice(
      ...PREDEFINED_ATTRIBUTE_DESIGNATOR.map(attr => reservedWord(attr))
    ),

    // DO NOT INLINE
    _predefined_designator_with_expression: $ => choice(
      ...PREDEFINED_ATTRIBUTE_DESIGNATOR_WITH_EXPRESSION.map(attr => reservedWord(attr))
    ),

    // DO NOT INLINE
    _range_designator: $ => choice(
      ...RANGE_ATTRIBUTE_DESIGNATOR.map(attr => reservedWord(attr))
    ),
    // }}}
    // 8.7 External names {{{
    _external_object_name: $ => choice(
      $.external_constant_name,
      $.external_signal_name,
      $.external_variable_name
    ),

    external_constant_name: $ => seq(
      delimiter('<<'),
      reservedWord('constant'),
      $._external_pathname,
      ':',
      $.subtype_indication,
      delimiter('>>')
    ),

    external_signal_name: $ => seq(
      delimiter('<<'),
      reservedWord('signal'),
      $._external_pathname,
      ':',
      $.subtype_indication,
      delimiter('>>')
    ),

    external_variable_name: $ => seq(
      delimiter('<<'),
      reservedWord('variable'),
      $._external_pathname,
      ':',
      $.subtype_indication,
      delimiter('>>')
    ),

    _external_pathname: $ => choice(
      $.package_pathname,
      $.absolute_pathname,
      $.relative_pathname
    ),

    package_pathname: $ => seq(
      '@',
      field('library', $._simple_name),
      '.',
      sepBy1('.', field('package',$._simple_name)),
      '.',
      field('object', $._simple_name),
    ),

    absolute_pathname: $ => seq(
      '.', $._partial_pathname
    ),

    relative_pathname: $ => seq(
      repeat('^.'),
      $._partial_pathname
    ),

    _partial_pathname: $ => seq(
      repeat(seq(
        $.pathname_element, '.'
      )),
      field('object', $._simple_name),
    ),

    pathname_element: $ => choice(
      $._name_or_label,
      $.generate_statement_element,
    ),

    _name_or_label: $ => field(
      'name_or_label',
      $._simple_name
    ),
    // }}}
    // 9. Expressions {{{
    _expr: $ => choice(
      $._unary_expression,
      $._binary_expression,
      $._primary
    ),

    _unary_expression: $ => choice(
      $.condition,
      $.reduction,
      $.sign,
      $.factor
    ),

    _binary_expression: $ => choice(
      $.logical_expression,
      $.relation,
      $.shift_expression,
      $.simple_expression,
      $.concatenation,
      $.term,
      $.exponentiation,
    ),

    _primary: $ => prec('primary',choice(
      $._name,
      $._literal,
      $.aggregate,
      $.qualified_expression,
      $.allocator,
      $.parenthesized_expression,
      $.function_call,
    )),

    // Named expressions
    _expression: $ => alias(
      $._expr,
      $.expression
    ),

    _condition: $ => alias(
      $._expr,
      $.conditional_expression
    ),

    _simple_expression: $ => alias(
      $._expr,
      $.simple_expression
    ),

    _time_expression: $ => alias(
      $._expr,
      $.time_expression
    ),

    _string_expression: $ => alias(
      $._expr,
      $.string_expression
    ),

    _severity_expression: $ => alias(
      $._primary,
      $.severity_expression
    ),

    _file_open_kind: $ => alias(
      $._primary,
      $.file_open_kind
    ),

    // Special expressions
    default_expression: $ => seq(
      ':=',
      $._expr,
    ),

    inertial_expression: $ => seq(
      reservedWord('inertial'),
      $._expr
    ),

    parenthesized_expression: $ => prec('parenthesized_expression',seq(
      '(',
      $._expr,
      ')'
    )),

    // Unary expressions
    // LINT: condition shall not have expression as parent
    condition: $ => prec('condition', seq(
      field('operator', delimiter('??')),
      $._expr
    )),

    // LINT: reduction shall not have expression as parent
    reduction: $ => prec('reduction', seq(
      field('operator', choice(...['and', 'or', 'xor', 'nand', 'nor', 'xnor'].map(op => reservedWord(op)))),
      $._expr
    )),

    // LINT: factor shall not have SOME expression as parent
    factor: $ => prec.right('factor', seq(
      field('operator', choice(...['not', 'abs'].map(op => reservedWord(op)))),
      $._expr
    )),

    // LINT: sign shall not have SOME expression as parent
    sign: $ => prec('sign', seq(
      field('operator', choice(...['+', '-'].map(op => delimiter(op)))),
      $._expr
    )),

    // Binary expressions
    // LINT: nor and nand are non associative
    // LINT: other operators are only associative with themselves
    logical_expression: $ => prec.right('logical_expression',seq(
      $._expr,
      choice(
        // associative operators
        repeat1(prec.left('logical_expression',seq(field('operator', reservedWord('and' )), $._expr))),
        repeat1(prec.left('logical_expression',seq(field('operator', reservedWord('or'  )), $._expr))),
        repeat1(prec.left('logical_expression',seq(field('operator', reservedWord('xor' )), $._expr))),
        repeat1(prec.left('logical_expression',seq(field('operator', reservedWord('xnor')), $._expr))),
        // non associative operators
        seq(prec.left('logical_expression',seq(field('operator', reservedWord('nand')), $._expr))),
        seq(prec.left('logical_expression',seq(field('operator', reservedWord('nor' )), $._expr))),
      ),
    )),

    // LINT: relations are not associative
    relation: $ => prec.right('relation', seq(
      $._expr,
      field('operator', choice(...['<', '>', '=', '<=', '>=', '/=', '?<', '?>', '?=', '?<=', '?>=', '?/='].map(op => delimiter(op)))),
      $._expr
    )),

    // LINT: shift expressions are not associative
    shift_expression: $ => prec.right('shift_expression', seq(
      $._expr,
      field('operator', choice(...['sll', 'srl', 'sla', 'sra', 'rol', 'ror'].map(op => reservedWord(op)))),
      $._expr,
    )),

    // LINT: operand shall not be sign
    simple_expression: $ => prec.right('simple_expression', seq(
      $._expr,
      repeat1(prec.left('simple_expression',seq(
        field('operator', choice(
          ...['+', '-'].map(op => delimiter(op))
        )),
        $._expr
      ))),
    )),

    concatenation: $ => prec.right('simple_expression', seq(
      $._expr,
      repeat1(prec.left('simple_expression',seq(
        field('operator', delimiter('&')),
        $._expr
      ))),
    )),

    term: $ => prec.right('term', seq(
      $._expr,
      choice(
        repeat1(prec.left('term',seq(
          field('operator', choice(
            ...['*', '/'].map(op => delimiter(op)),
            ...['rem', 'mod'].map(op => reservedWord(op)),
          )),
          $._expr
        ))),
      )
    )),

    // LINT: exponentiation are not associative
    exponentiation: $ => prec.left('exponentiation', seq(
      $._expr,
      field('operator', choice(...['**'].map(op => delimiter(op)))),
      $._expr
    )),
    // }}}
    // 9.3.2 Literals {{{
    _literal: $ => choice(
      $._numeric_literal,
      $.string_literal,
      $.bit_string_literal,
      $.null,
      $.character_literal,
    ),

    _numeric_literal: $ => choice(
      $._abstract_literal,
      $.physical_literal
    ),

    null: $ => reservedWord('null'),
    // }}}
    // 9.3.3 Aggregates {{{
    aggregate: $ => prec(-1, seq(
      '(',
      $._element_association_list,
      ')'
    )),

    _element_association_list: $ => choice(
      $.named_element_association,
      seq(
        $._element_association,
        ',',
        sepBy1(',', $._element_association),
      ),
    ),

    _element_association: $ => choice(
      $.positional_element_association,
      $.named_element_association,
    ),

    positional_element_association: $ => seq(
      $._value
    ),

    named_element_association: $ => prec(-1, seq(
      $.choices,
      delimiter('=>'),
      $._value
    )),

    _value: $ => $._expression,

    choices: $ => sepBy1('|', $._choice),

    _choice: $ => choice(
      $._simple_expression,
      $._range,
      $.others
    ),

    others: $ => reservedWord('others'),
    // }}}
    // 9.3.4 Function call {{{
    function_call: $ => seq(
      $._function_name,
      '(',
      $.association_list,
      ')'
    ),

    _function_name: $ => field(
      'function',
      choice(
        $._simple_name,
        $._operator_symbol,
        $.selected_name,
        $.attribute_name,
      )
    ),
    // }}}
    // 9.3.5 Qualified expressions {{{
    qualified_expression: $ => seq(
      $.type_mark,
      token('\''),
      choice(
        $.aggregate,
        alias($.parenthesized_expression,$.expression),
      ),
    ),
    // }}}
    // 9.3.7 Allocators {{{
    allocator: $ => seq(
      reservedWord('new'),
      choice(
        $.subtype_indication,
        $.qualified_expression
      )
    ),
    // }}}
    // 10.1 Sequential statements {{{
    sequence_of_statements: $ => repeat1(
      $._sequential_statement
    ),

    _sequential_statement: $ => prec('sequential_statement',choice(
      $.process_statement,
      $.wait_statement,
      $.assertion_statement,
      $.report_statement,
      $._signal_assignment_statement,
      $._variable_assignment_statement,
      $.procedure_call_statement,
      $.if_statement,
      $.case_statement,
      $.loop_statement,
      $.next_statement,
      $.exit_statement,
      $.return_statement,
      $.null_statement,
      $._PSL_Directive,
      $._PSL_Declaration,
    )),
    // }}}
    // 10.2 Wait statement {{{
    wait_statement: $ => seq(
      optional($.label),
      reservedWord('wait'),
      optional($._sensitivity_clause),
      optional($._condition_clause),
      optional($._timeout_clause),
      ';'
    ),

    _sensitivity_clause: $ => seq(
      reservedWord('on'),
      $.sensitivity_list
    ),

    _condition_clause: $ => seq(
      reservedWord('until'),
      $._condition
    ),

    _timeout_clause: $ => seq(
      reservedWord('for'),
      $._time_expression
    ),

    // LINT
    // all is not allowed on sensitivy clause
    sensitivity_list: $ => choice(
      $.all,
      sepBy1(',', $._signal_name),
    ),

    _signal_name: $ => $._name,
    // }}}
    // 10.3 Assertion statement {{{
    assertion_statement: $ => prec('vhdl_assertion',seq(
      optional($.label),
      optional(reservedWord('postponed')),
      reservedWord('assert'),
      $._condition,
      optional($._report),
      optional($._severity),
      ';'
    )),
    // }}}
    // 10.4 Report statement {{{
    report_statement: $ => seq(
      optional($.label),
      $._report,
      optional($._severity),
      ';'
    ),

    _report: $ => seq(
      reservedWord('report'),
      $._string_expression
    ),

    _severity: $ => seq(
      reservedWord('severity'),
      $._severity_expression
    ),
    // }}}
    // 10.5 Signal assignments {{{
    _signal_assignment_statement: $ => choice(
      $._simple_signal_assignment,
      $._conditional_signal_assignment,
      $._selected_signal_assignment,
    ),
    // }}}
    // 10.5.2 Simple signal assignments {{{
    _simple_signal_assignment: $ => choice(
      $.simple_waveform_assignment,
      $.simple_force_assignment,
      $.simple_release_assignment
    ),

    simple_waveform_assignment: $ => seq(
      optional($.label),
      $._target,
      '<=',
      optional(reservedWord('guarded')),
      optional($.delay_mechanism),
      $.waveforms,
      ';'
    ),

    simple_force_assignment: $ => seq(
      optional($.label),
      $._target,
      '<=',
      optional(reservedWord('guarded')),
      reservedWord('force'),
      optional($.force_mode),
      optional($._value),
      ';'
    ),

    simple_release_assignment: $ => seq(
      optional($.label),
      $._target,
      '<=',
      optional(reservedWord('guarded')),
      reservedWord('release'),
      optional($.force_mode),
      ';'
    ),

    force_mode: $ => choice(
      $._in,
      $._out
    ),

    delay_mechanism: $ => choice(
      $.transport,
      $.inertial,
    ),

    transport: $ => reservedWord('transport'),

    inertial: $ => seq(
      optional($._reject),
      reservedWord('inertial')
    ),

    _reject: $ => seq(
      reservedWord('reject'),
      field('reject', $._time_expression),
    ),

    _target: $ => field(
      'target',
      choice(
        $._name,
        $.aggregate
      ),
    ),

    waveforms: $ => choice(
      $.unaffected,
      sepBy1(',', $.waveform_element)
    ),

    unaffected: $ => reservedWord('unaffected'),

    waveform_element: $ => seq(
      $._value,
      optional($._after)
    ),

    _after: $ => seq(
      reservedWord('after'),
      $._time_expression
    ),
    // }}}
    // 10.5.3 Conditional signal assignments {{{
    _conditional_signal_assignment: $ => choice(
      $.conditional_waveform_assignment,
      $.conditional_force_assignment
    ),

    conditional_waveform_assignment: $ => prec(1,seq(
      optional($.label),
      $._target,
      '<=',
      optional(reservedWord('guarded')),
      optional($.delay_mechanism),
      $.conditional_waveforms,
      ';'
    )),

    _when_clause: $ => seq(
      reservedWord('when'),
      $._condition
    ),

    conditional_waveforms: $ => seq(
      $.waveforms,
      $._when_clause,
      repeat($.alternative_conditional_waveforms),
    ),

    alternative_conditional_waveforms: $ => seq(
      reservedWord('else'),
      $.waveforms,
      optional($._when_clause)
    ),

    conditional_force_assignment: $ => seq(
      $._target,
      '<=',
      reservedWord('force'),
      optional($.force_mode),
      $.conditional_expressions,
      ';'
    ),

    conditional_expressions: $ => seq(
      $._value,
      $._when_clause,
      repeat($.alternative_conditional_expressions),
    ),

    alternative_conditional_expressions: $ => seq(
      reservedWord('else'),
      $._value,
      optional($._when_clause)
    ),
    // }}}
    // 10.5.4 Selected signal assignments {{{
    _selected_signal_assignment: $ => choice(
      $.selected_waveform_assignment,
      $.selected_force_assignment
    ),

    selected_waveform_assignment: $ => seq(
      optional($.label),
      reservedWord('with'),
      $._expression,
      reservedWord('select'),
      optional(delimiter('?')),
      $._target,
      '<=',
      optional(reservedWord('guarded')),
      optional($.delay_mechanism),
      $.selected_waveforms,
      ';'
    ),

    selected_force_assignment: $ => seq(
      optional($.label),
      reservedWord('with'),
      $._expression,
      reservedWord('select'),
      optional(delimiter('?')),
      $._target,
      '<=',
      reservedWord('force'),
      optional($.force_mode),
      $.selected_expressions,
      ';'
    ),

    selected_waveforms: $ => seq(
      $.waveforms,
      reservedWord('when'),
      $.choices,
      repeat($.alternative_selected_waveforms)
    ),

    alternative_selected_waveforms: $ => seq(
      ',',
      $.waveforms,
      reservedWord('when'),
      $.choices,
    ),

    selected_expressions: $ => seq(
      $._value,
      reservedWord('when'),
      $.choices,
      repeat($.alternative_selected_expressions)
    ),

    alternative_selected_expressions: $ => seq(
      ',',
      $._value,
      reservedWord('when'),
      $.choices,
    ),
    // }}}
    // 10.6 Variable assignments {{{
    _variable_assignment_statement: $ => choice(
      $.simple_variable_assignment,
      $.conditional_variable_assignment,
      $.selected_variable_assignment,
    ),
    // }}}
    // 10.6.2 Simple variable assignments {{{
    simple_variable_assignment: $ => prec(1,seq(
      optional($.label),
      $._target,
      ':=',
      $._value,
      ';'
    )),
    // }}}
    // 10.6.3 Conditional variable assignments {{{
    conditional_variable_assignment: $ => seq(
      optional($.label),
      $._target,
      ':=',
      $.conditional_expressions,
      ';'
    ),
    // }}}
    // 10.6.4 Selected variable assignments {{{
    selected_variable_assignment: $ => seq(
      optional($.label),
      reservedWord('with'),
      $._expression,
      reservedWord('select'),
      optional(delimiter('?')),
      $._target,
      ':=',
      $.selected_expressions,
      ';'
    ),
    // }}}
    // 10.7 Procedure call statement {{{
    procedure_call_statement: $ => prec('procedure_call', seq(
      optional($.label),
      optional(reservedWord('postponed')),
      field('procedure', choice(
        $._simple_name,
        $.selected_name
      )),
      optional(seq(
        '(',
        $.association_list,
        ')',
      )),
      ';'
    )),
    // }}}
    // 10.8 If statement {{{
    if_statement: $ => seq(
      optional($.label),
      $.if,
      repeat($.elsif),
      optional($.else),
      reservedWord('end'),
      reservedWord('if'),
      optional($._end_simple_name),
      ';'
    ),

    if: $ => seq(
      reservedWord('if'),
      $._condition,
      reservedWord('then'),
      optional($.sequence_of_statements),
    ),

    elsif: $ => seq(
      reservedWord('elsif'),
      $._condition,
      reservedWord('then'),
      optional($.sequence_of_statements)
    ),

    else: $ => seq(
      reservedWord('else'),
      optional($.sequence_of_statements)
    ),
    // }}}
    // 10.9 Case statement {{{
    case_statement: $ => seq(
      optional($.label),
      reservedWord('case'),
      optional(delimiter('?')),
      $._expression,
      reservedWord('is'),
      repeat($.case_statement_alternative),
      reservedWord('end'),
      reservedWord('case'),
      optional(delimiter('?')),
      optional($._end_simple_name),
      ';'
    ),

    case_statement_alternative: $ => seq(
      reservedWord('when'),
      $.choices,
      delimiter('=>'),
      optional($.sequence_of_statements)
    ),
    // }}}
    // 10.10 Loop statement {{{
    loop_statement: $ => seq(
      optional($.label),
      optional($._iteration_scheme),
      reservedWord('loop'),
      optional($.sequence_of_statements),
      reservedWord('end'),
      reservedWord('loop'),
      optional($._end_simple_name),
      ';'
    ),

    _iteration_scheme: $ => choice(
      $.while_loop,
      $.for_loop
    ),

    while_loop: $ => seq(
      reservedWord('while'),
      $._condition,
    ),

    for_loop: $ => seq(
      reservedWord('for'),
      $.parameter_specification
    ),

    parameter_specification: $ => seq(
      field('name',$._identifier),
      reservedWord('in'),
      $._discrete_range
    ),
    // }}}
    // 10.11 Next statement {{{
    next_statement: $ => seq(
      optional($.label),
      reservedWord('next'),
      optional($._loop_label),
      optional($._when_clause),
      ';'
    ),

    _loop_label: $ => field(
      'loop_label',
      $._simple_name
    ),
    // }}}
    // 10.12 Exit statement {{{
    exit_statement: $ => seq(
      optional($.label),
      reservedWord('exit'),
      optional($._loop_label),
      optional($._when_clause),
      ';'
    ),
    // }}}
    // 10.13 Return statement {{{
    return_statement: $ => seq(
      optional($.label),
      reservedWord('return'),
      optional($._expression),
      ';'
    ),
    // }}}
    // 10.14 Null statement {{{
    null_statement: $ => seq(
      optional($.label),
      reservedWord('null'),
      ';'
    ),
    // }}}
    // 11 Concurrent statements {{{
    concurrent_statement_part: $ => repeat1(
      $._concurrent_statement
    ),

    _concurrent_statement: $ => prec('concurrent_statement', choice(
      $.block_statement,
      $.process_statement,
      $.component_instantiation_statement,
      $.procedure_call_statement,
      $.assertion_statement,
      $._concurrent_signal_assignment,
      $._generate_statement,
      $._PSL_Directive,
      $._PSL_Declaration
    )),
    // }}}
    // 11.2 Block statement {{{
    block_statement: $ => seq(
      optional($.label),
      reservedWord('block'),
      optional(seq(
        '(',
        $._guard,
        ')'
      )),
      optional(reservedWord('is')),
      optional(alias($._header,$.block_header)),
      optional($.declarative_part),
      reservedWord('begin'),
      optional($.concurrent_statement_part),
      reservedWord('end'),
      reservedWord('block'),
      optional($._end_simple_name),
      ';'
    ),

    _guard: $ => field(
      'guard',
      $._condition
    ),
    // }}}
    // 11.3 Process statement {{{
    process_statement: $ => seq(
      optional($.label),
      optional(reservedWord('postponed')),
      reservedWord('process'),
      optional(seq(
        '(',
        $.sensitivity_list,
        ')'
      )),
      optional(reservedWord('is')),
      optional($.declarative_part),
      reservedWord('begin'),
      optional($.sequence_of_statements),
      reservedWord('end'),
      optional(reservedWord('postponed')),
      reservedWord('process'),
      optional($._end_simple_name),
      ';'
    ),
    // }}}
    // 11.6 Concurrent signal assignments {{{
    _concurrent_signal_assignment: $ => choice(
      alias(
        $.simple_waveform_assignment,
        $.simple_concurrent_signal_assignment
      ),
      alias(
        $.conditional_waveform_assignment,
        $.conditional_concurrent_signal_assignment
      ),
      alias(
        $.selected_waveform_assignment,
        $.selected_concurrent_signal_assignment
      )
    ),
    // }}}
    // 11.7 Component instantiation statements {{{
    // LINT entity aspect shall not be open
    component_instantiation_statement: $ => seq(
      optional($.label),
      $._entity_aspect,
      optional(alias($._header,$.component_map_aspect)),
      ';'
    ),

    entity_instantiation: $ => seq(
      reservedWord('entity'),
      field('entity', choice(
        $._simple_name,
        $.selected_name,
      )),
      optional(seq(
        '(',
        field('architecture',$._simple_name),
        ')'
      ))
    ),

    configuration_instantiation: $ => seq(
      reservedWord('configuration'),
      field('configuration', choice(
        $._simple_name,
        $.selected_name,
      ))
    ),

    component_instantiation: $ => prec('component_instantiation',seq(
      optional(reservedWord('component')),
      field('component', choice(
        $._simple_name,
        $.selected_name,
      )),
    )),
    // }}}
    // 11.8 Generate statements {{{
    _generate_statement: $ => choice(
      $.for_generate_statement,
      $.if_generate_statement,
      $.case_generate_statement,
    ),

    for_generate_statement: $ => seq(
      optional($.label),
      reservedWord('for'),
      $.parameter_specification,
      reservedWord('generate'),
      optional($.generate_statement_body),
      reservedWord('end'),
      reservedWord('generate'),
      optional($._end_simple_name),
      ';'
    ),

    if_generate_statement: $ => seq(
      optional($.label),
      $.if_generate,
      repeat($.elsif_generate),
      optional($.else_generate),
      reservedWord('end'),
      reservedWord('generate'),
      optional($._end_simple_name),
      ';'
    ),

    if_generate: $ => seq(
      reservedWord('if'),
      optional($.label),
      $._condition,
      reservedWord('generate'),
      optional($.generate_statement_body),
    ),

    elsif_generate: $ => seq(
      reservedWord('elsif'),
      optional($.label),
      $._condition,
      reservedWord('generate'),
      optional($.generate_statement_body)
    ),

    else_generate: $ => seq(
      reservedWord('else'),
      optional($.label),
      reservedWord('generate'),
      optional($.generate_statement_body)
    ),

    case_generate_statement: $ => seq(
      optional($.label),
      reservedWord('case'),
      $._expression,
      reservedWord('generate'),
      repeat($.case_generate_alternative),
      reservedWord('end'),
      reservedWord('generate'),
      optional($._end_simple_name),
      ';'
    ),

    case_generate_alternative: $ => seq(
      reservedWord('when'),
      optional($.label),
      $.choices,
      delimiter('=>'),
      optional($.generate_statement_body)
    ),

    generate_statement_body: $ => choice(
      // with begin
      seq(
        optional($.declarative_part),
        reservedWord('begin'),
        repeat($._concurrent_statement),
        optional(seq(
          reservedWord('end'),
          optional($._end_simple_name),
          ';'
        )),
      ),
      // with end
      seq(
        optional(seq(
          optional($.declarative_part),
          reservedWord('begin'),
        )),
        repeat($._concurrent_statement),
        reservedWord('end'),
        optional($._end_simple_name),
        ';'
      ),
      // without both
      repeat1($._concurrent_statement),
    ),

    label: $ => seq(
      $._identifier,
      ':'
    ),
    // }}}
    // 12.4 Use clauses {{{
    use_clause: $ => seq(
      reservedWord('use'),
      sepBy1(',', $.selected_name),
      ';'
    ),
    // }}}
    // 13.1 Design units {{{
    design_unit: $ => prec.right(choice(
      $.context_clause,
      seq(
        optional($.context_clause),
        $._library_unit
      ),
    )),

    _library_unit: $ => choice(
      $._primary_unit,
      $._secondary_unit
    ),

    _primary_unit: $ => prec('primary_unit',choice(
      $.entity_declaration,
      $.configuration_declaration,
      $.package_declaration,
      $.package_instantiation_declaration,
      $.context_declaration,
      $._PSL_Verification_Unit,
    )),

    _secondary_unit: $ => prec('secondary_unit',choice(
      $.architecture_body,
      $.package_body
    )),
    // }}}
    // 13.2 Design libraries {{{
    library_clause: $ => seq(
      reservedWord('library'),
      $.logical_name_list,
      ';'
    ),

    logical_name_list: $ => sepBy1(',', field('library',$._simple_name)),
    // }}}
    // 13.3 Context declarations {{{
    context_declaration: $ => seq(
      reservedWord('context'),
      field('name',$._identifier),
      reservedWord('is'),
      optional($.context_clause),
      reservedWord('end'),
      optional(reservedWord('context')),
      optional($._end_simple_name),
      ';'
    ),
    // }}}
    // 13.4 Context clauses {{{
    context_clause: $ => prec.right(repeat1(
      $._context_item
    )),

    _context_item: $ => prec('context_item',choice(
      $.library_clause,
      $.use_clause,
      $.context_reference
    )),

    context_reference: $ => seq(
      reservedWord('context'),
      $.context_list,
      ';'
    ),

    context_list: $ => sepBy1(',', $.selected_name),
    // }}}
    // 15.3 Separators {{{
    // }}}
    // 15.4 Identifiers {{{
    _identifier: $ => choice(
      alias($.basic_identifier, $.identifier),
      $.extended_identifier
    ),

    basic_identifier: $ => token(seq(
      /[a-zA-Z]/,
      repeat(seq(
        optional('_'),
        /[a-zA-Z0-9]/
      ))
    )),

    extended_identifier: $ => token(seq(
      '\\',
      /(\\\\|[^\r\n\\])*/,
      '\\',
    )),
    // }}}
    // 15.5 Abstract literals
    _abstract_literal: $ => choice(
      $.integer_decimal,
      $.real_decimal,
      $.based_integer,
      $.based_real
    ),

    // 15.5.2 Decimal literals
    integer_decimal: $ => token(seq(
      repeat1(/[0-9_]/),
      optional(EXPONENT)
    )),

    real_decimal: $ => token(seq(
      repeat1(/[0-9_]/),
      '.',
      // not optional.
      // optional used here to highlight incomplete code
      optional(seq(
        repeat1(/[0-9_]/),
        optional(EXPONENT)
      ))
    )),

    // 15.5.3 Based literals
    // TODO: Write another grammar to parse the values
    based_integer: $ => token(seq(
      repeat('0'),
      choice(/[0-9]/,/1[0-6]/),
      '#',
      /[0-9a-fA-F_]*/,
      '#',
      optional(EXPONENT)
    )),

    based_real: $ => token(seq(
      repeat('0'),
      choice(/[0-9]/,/1[0-6]/),
      '#',
      /[0-9a-fA-F_]*/,
      '.',
      /[0-9a-fA-F_]*/,
      '#',
      optional(EXPONENT)
    )),

    // 15.6 Character literal
    character_literal: $ => choice(
      // Longest token has higher precedence
      // the second alternative can't be matched.
      // But, when the code is incomplete, tree-sitter will know
      // there is only a "'" missing and will recovery from the
      // error.
      seq(/'.'/),
      seq(/'[^;,)\r\n]/,"'"), // error recovery
    ),

    // 15.7 String literal
    string_literal: $ => choice(
      // same trick used on character_literal
      seq(/"(""|[^"\r\n])*"/),
      seq(/"(""|[^";,)\r\n])*/,'"'),
    ),

    // 15.8 Bit string literals
    bit_string_literal: $ => choice(
      seq(/[0-9]*[uUsS]?[bBoOxX]"[^" \r\n]*"/),
      seq(/[0-9]*[uUsS]?[bBoOxX]"[^" ;,)\r\n]*/,'"'),
      seq(/[0-9]*[dD]"[^" \r\n]*"/),
      seq(/[0-9]*[dD]"[^" ;,)\r\n]*/,'"'),
    ),

    // 15.9 Comments
    comment: $ => token(choice(
      prec(2,/--.*/),
      prec(2,seq( // from tree-sitter-c
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ))
    )),

    // 15.11 Tool directives
    tool_directive: $ => token(/`.*/),

    // PSL
    // PSL 5. Boolean layer {{{
    _PSL_Identifier: $ => alias(
      $._identifier,
      $.PSL_Identifier
    ),

    _PSL_Any_Type: $ => prec(1,choice(
      alias($._expr, $.PSL_Any_Type),
      $.PSL_Expression,
      $.PSL_Built_In_Function_Call,
      $.PSL_Union_Expression,
    )),

    _PSL_Boolean: $ => choice(
      alias($._expr, $.PSL_Boolean),
      $.PSL_Expression,
      $.PSL_Built_In_Function_Call
    ),

    PSL_Parenthesized_Boolean: $ => seq(
      '(',
      $._PSL_Boolean,
      ')'
    ),

    _PSL_Number: $ => choice(
      alias($._expr, $.PSL_Number),
      $.PSL_Built_In_Function_Call
    ),

    _PSL_Value: $ => $._PSL_Any_Type,

    PSL_Expression: $ => prec.right('implication', seq(
      $._PSL_Boolean,
      field('operator', choice(...['->', '<->'].map(op => delimiter(op)))),
      $._PSL_Boolean,
    )),
    // }}}
    // PSL 5.2.3 Built-in functions {{{
    PSL_Built_In_Function_Call: $ => prec('psl_function_call', choice(
      seq(
        choice(
          reservedWord('prev'),
          reservedWord('next'),
          reservedWord('stable'),
          reservedWord('rose'),
          reservedWord('fell'),
          reservedWord('isunknown'),
          reservedWord('countones'),
          reservedWord('onehot'),
          reservedWord('onehot0'),
          reservedWord('nondet'),
          reservedWord('nondet_vector'),
        ),
        '(',
        sepBy1(',', choice($._PSL_Any_Type, $.PSL_Value_Set)),
        ')',
      ),
      seq(
        reservedWord('ended'),
        '(',
        $._PSL_Sequence,
        ')',
      )
    )),
    // }}}
    // PSL 5.3 Clock expressions {{{
    _PSL_Clock_Expression: $ => choice(
      $._condition,
      $.PSL_Built_In_Function_Call
    ),
    // }}}
    // PSL 5.3 Union expressions {{{
    PSL_Union_Expression: $ => prec.left('union', seq(
      $._PSL_Any_Type,
      field('operator', reservedWord('union')),
      $._PSL_Any_Type,
    )),
    // }}}
    // PSL 5.4 Default clock declaration {{{
    _PSL_Declaration: $ => choice(
      $.PSL_Property_Declaration,
      $.PSL_Sequence_Declaration,
      $.PSL_Clock_Declaration
    ),

    PSL_Clock_Declaration: $ => seq(
      reservedWord('default'),
      reservedWord('clock'),
      reservedWord('is'),
      $._PSL_Clock_Expression,
      ';'
    ),
    // }}}
    // PSL 6.1.1 Sequential Extended Regular Expressions (SEREs) {{{
    _PSL_SERE: $ => choice(
      $._PSL_Boolean,
      $._PSL_Sequence,
      $.PSL_Simple_SERE,
      $._PSL_Compound_SERE,
    ),

    PSL_Simple_SERE: $ => choice(
      $._PSL_Fusion_SERE,
      $._PSL_Concat_SERE,
    ),

    _PSL_Fusion_SERE: $ => prec.right('sequence_fusion', seq(
      $._PSL_SERE,
      repeat1(prec.left(seq(
        field('operator', delimiter(':')),
        $._PSL_SERE,
      ))),
    )),

    _PSL_Concat_SERE: $ => prec.right('sequence_concatenation', seq(
      $._PSL_SERE,
      repeat1(prec.left(seq(
        field('operator', delimiter(';')),
        $._PSL_SERE,
      ))),
    )),
    // }}}
    // PSL 6.1.1.2 Compound SEREs {{{
    _PSL_Compound_SERE: $ => prec.dynamic(1, choice(
      $.PSL_Repeated_SERE,
      $.PSL_Braced_SERE,
      $.PSL_Clocked_SERE,
      alias(
        choice(
          $.PSL_Compound_SERE_And,
          $.PSL_Compound_SERE_Within
        ),
        $.PSL_Compound_SERE,
      ),
      $.PSL_Parameterized_SERE,
    )),

    PSL_Compound_SERE_Or: $ => prec.right('sequence_or', seq(
      $._PSL_Compound_SERE,
      repeat1(prec.left(seq(
        field('operator', delimiter('|')),
        $._PSL_Compound_SERE,
      )))
    )),

    PSL_Compound_SERE_And: $ => prec.right('sequence_and', seq(
      $._PSL_Compound_SERE,
      repeat1(prec.left(seq(
        field('operator', choice(...['&', '&&'].map(op => delimiter(op)))),
        $._PSL_Compound_SERE,
      )))
    )),

    PSL_Compound_SERE_Within: $ => prec.right('sequence_within', seq(
      $._PSL_Compound_SERE,
      repeat1(prec.left(seq(
        field('operator', reservedWord('within')),
        $._PSL_Compound_SERE,
      )))
    )),

    PSL_Parameterized_SERE: $ => seq(
      reservedWord('for'),
      $.PSL_Parameters_Definition,
      ':',
      field('operator', choice(...['|', '&', '&&'].map(op => delimiter(op)))),
      '{',
      field('SERE', $._PSL_SERE),
      '}'
    ),

    PSL_Parameters_Definition: $ => sepBy1(',', $.PSL_Parameter_Specification),

    PSL_Parameter_Specification: $ => seq(
      $._PSL_Identifier,
      optional($.PSL_Index_Range),
      reservedWord('in'),
      $.PSL_Value_Set
    ),
    // }}}
    // PSL 6.1.2 Sequences {{{
    _PSL_Sequence: $ => choice(
      $._PSL_Sequence_Instance,
      $.PSL_Repeated_SERE,
      $.PSL_Braced_SERE,
      $.PSL_Clocked_SERE
    ),

    PSL_Repeated_SERE: $ => prec.left(
      'SERE_repetition',
      seq(
        optional(choice(
          $._PSL_Boolean,
          $._PSL_Sequence,
        )),
        $.PSL_Count,
      ),
    ),

    PSL_Count: $ => seq(
      '[',
      optional(field('operator',
        choice(...['+', '*', '=', '->'].map(op => token.immediate(prec(3, (op)))))
      )),
      optional(choice(
        $._PSL_Number,
        $._PSL_Range
      )),
      ']',
    ),

    _PSL_Range: $ => $._range,

    PSL_Braced_SERE: $ => prec.right(seq(
      '{',
      $._PSL_SERE,
      '}'
    )),

    PSL_Clocked_SERE: $ => prec.left(
      'clocked',
      seq(
        '{',
        $._PSL_SERE,
        '}',
        '@',
        $._PSL_Clock_Expression,
      )
    ),
    // }}}
    // PSL 6.2 Properties {{{
    _PSL_Property: $ => choice(
      $.PSL_Property_Replicator,
      $._PSL_FL_Property,
      $._PSL_Ambiguous_Instance,
    ),

    _PSL_FL_Property: $ => choice(
      $._PSL_Property_Instance,
      $.PSL_Parenthesized_FL_Property,
      $.PSL_Sequential_FL_Property,
      $.PSL_Clocked_FL_Property,
      $.PSL_Invariant_FL_Property,
      $.PSL_Ocurrence_FL_Property,
      $.PSL_Extended_Ocurrence_FL_Property,
      $.PSL_Termination_FL_Property,
      $.PSL_Bounding_FL_Property,
      $.PSL_Suffix_Implication_FL_Property,
      $.PSL_Parameterized_Property,
      $.PSL_Implication_FL_Property,
      $.PSL_Logical_FL_Property,
      $.PSL_Factor_FL_Property,
      $._PSL_Boolean
    ),

    PSL_Parenthesized_FL_Property: $ => prec('parenthesized_property',seq(
      '(',
      $._PSL_FL_Property,
      ')',
    )),

    PSL_Sequential_FL_Property: $ => prec.left(-1, seq(
      $._PSL_Sequence,
      optional('!')
    )),

    PSL_Clocked_FL_Property: $ => prec.right('clocked', seq(
      $._PSL_FL_Property,
      repeat1(prec.left('clocked',seq(
        field('operator', delimiter('@')),
        $._PSL_Clock_Expression
      ))),
    )),

    PSL_Invariant_FL_Property: $ => prec.right('invariant_property', seq(
      field('operator', choice(...['always', 'never'].map(op => reservedWord(op)))),
      $._PSL_FL_Property
    )),

    PSL_Ocurrence_FL_Property: $ => prec.right('occurrence_property', seq(
      field('operator', seq(
        choice(...['next', 'eventually'].map(op => reservedWord(op))),
        optional(token.immediate('!'))
      )),
      $._PSL_FL_Property
    )),

    PSL_Implication_FL_Property: $ => prec.right('property_implication', seq(
      $._PSL_FL_Property,
      repeat1(prec.left('property_implication',seq(
        field('operator', choice(...['->', '<->'].map(op => delimiter(op)))),
        $._PSL_FL_Property,
      ))),
    )),

    PSL_Logical_FL_Property: $ => prec.right('logical_property', seq(
      $._PSL_FL_Property,
      repeat1(prec.left('logical_property',seq(
        field('operator', choice(...['and', 'or'].map(op => reservedWord(op)))),
        $._PSL_FL_Property,
      ))),
    )),

    PSL_Factor_FL_Property: $ => prec.left('property_factor', seq(
      field('operator', reservedWord('not')),
      $._PSL_FL_Property,
    )),

    PSL_Extended_Ocurrence_FL_Property: $ => prec.right('occurrence_property', seq(
      field('operator', seq(
        choice(...[
          'eventually',
          'next',
          'next_a',
          'next_e',
          'next_event',
          'next_event_a',
          'next_event_e'
        ].map(op => reservedWord(op))),
        optional(token.immediate('!'))
      )),
      $._PSL_Extended_Ocurrence_argument,
    )),

    _PSL_Extended_Ocurrence_argument: $ => seq(
      choice(
        $._PSL_Extended_Ocurrence_FL_Property_Count_Specification,
        $._PSL_Extended_Ocurrence_FL_Property_Until_Specification,
      ),
      '(',
      field('Property', $._PSL_FL_Property),
      ')',
    ),

    _PSL_Extended_Ocurrence_FL_Property_Count_Specification: $ => seq(
      $.PSL_Count,
    ),

    _PSL_Extended_Ocurrence_FL_Property_Until_Specification: $ => prec('parenthesized_boolean',seq(
      '(',
      field('Boolean', $._PSL_Boolean),
      ')',
      optional($.PSL_Count),
    )),

    PSL_Termination_FL_Property: $ => prec.left('termination_property', seq(
      $._PSL_FL_Property,
      field('operator', choice(...['async_abort', 'sync_abort', 'abort'].map(op => reservedWord(op)))),
      $._PSL_Boolean
    )),

    PSL_Bounding_FL_Property: $ => prec.right('bounding_property', seq(
      $._PSL_FL_Property,
      field('operator', seq(
        choice(...['until', 'before'].map(op => reservedWord(op))),
        optional(token.immediate('!')),
        optional(token.immediate('_'))
      )),
      $._PSL_FL_Property,
    )),

    PSL_Suffix_Implication_FL_Property: $ => choice(
      prec.right(seq(
        '{',
        field('SERE', $._PSL_SERE),
        '}',
        '(',
        field('Property', $._PSL_FL_Property),
        ')',
      )),
      prec.right('sequence_implication', choice(
        ...['|=>', '|->'].map(op => {
          return seq(
            field('Sequence', $._PSL_Sequence),
            field('operator', delimiter(op)),
            field('Property', $._PSL_FL_Property),
          )
        })
      )),
    ),

    PSL_Parameterized_Property: $ => seq(
      reservedWord('for'),
      $.PSL_Parameters_Definition,
      ':',
      field('operator', choice(...['and', 'or'].map(op => reservedWord(op)))),
      '(',
      $._PSL_FL_Property,
      ')',
    ),
    // }}}
    // PSL 6.2.3 Replicated properties {{{
    PSL_Property_Replicator: $ => seq(
      reservedWord('forall'),
      $.PSL_Parameter_Specification,
      ':',
      field('Property',
        choice(
          prec.dynamic(3,$._PSL_Property_Instance),
          $._PSL_Property
        )
      )
    ),

    PSL_Index_Range: $ => seq(
      '(',
      $._PSL_Range,
      ')'
    ),

    PSL_Value_Set: $ => choice(
      $.boolean,
      seq(
        '{',
        $._PSL_Value_Range,
        repeat(seq(
          ',', $._PSL_Value_Range
        )),
        '}',
      ),
    ),

    boolean: $ => reservedWord('boolean'),

    _PSL_Value_Range: $ => choice(
      $._PSL_Value,
      $._PSL_Range
    ),
    // }}}
    // PSL 6.3 Property and sequence declarations {{{
    PSL_Property_Declaration: $ => seq(
      reservedWord('property'),
      $._PSL_Identifier,
      optional(seq(
        '(',
        $.PSL_Formal_Parameter_List,
        ')',
      )),
      reservedWord('is'),
      choice(
        prec.dynamic(3, $._PSL_Property_Instance),
        $._PSL_Property,
      ),
      ';'
    ),

    PSL_Sequence_Declaration: $ => seq(
      reservedWord('sequence'),
      $._PSL_Identifier,
      optional(seq(
        '(',
        $.PSL_Formal_Parameter_List,
        ')',
      )),
      reservedWord('is'),
      $._PSL_Sequence,
      ';'
    ),

    PSL_Formal_Parameter_List: $ => sepBy1(';', $.PSL_Formal_Parameter),

    PSL_Formal_Parameter: $ => seq(
      $._PSL_Parameter_Specification,
      sepBy1(',', $._PSL_Identifier)
    ),

    _PSL_Parameter_Specification: $ => choice(
      $.PSL_Constant_Parameter_Specification,
      $.PSL_Temporal_Parameter_Specification,
    ),

    PSL_Constant_Parameter_Specification: $ => choice(
      reservedWord('const'),
      seq(
        optional(reservedWord('const')),
        choice(
          $.PSL_HDL_Type,
          $.PSL_Type_Class
        )
      ),
    ),

    PSL_Temporal_Parameter_Specification: $ => choice(
      reservedWord('sequence'),
      reservedWord('property'),
    ),

    PSL_HDL_Type: $ => seq(
      reservedWord('hdltype'),
      $.subtype_indication
    ),

    PSL_Type_Class: $ => choice(
      reservedWord('boolean'),
      reservedWord('bit'),
      reservedWord('bit_vector'),
      reservedWord('numeric'),
      reservedWord('string'),
    ),
    // }}}
    // PSL 6.3.3 Instantiation {{{
    PSL_Instance: $ => seq(
      $._PSL_Identifier,
      optional(seq(
        '(',
        $.PSL_Actual_Parameter_List,
        ')'
      ))
    ),

    _PSL_Ambiguous_Instance: $ => prec.dynamic(-1,seq(
      alias($.PSL_Instance, $.PSL_Ambiguous_Instance)
    )),

    _PSL_Sequence_Instance: $ => prec.dynamic(-2, 
      alias($.PSL_Instance, $.PSL_Sequence_Instance)
    ),

    _PSL_Property_Instance: $ => prec.dynamic(-2, 
      alias($.PSL_Instance, $.PSL_Property_Instance)
    ),

    PSL_Actual_Parameter_List: $ => sepBy1(',', $.PSL_Actual_Parameter),

    PSL_Actual_Parameter: $ => choice(
      $._PSL_Any_Type,
      $._PSL_Sequence,
      $._PSL_Property
    ),
    // }}}
    // PSL 7.1 Verification directives {{{
    _PSL_Directive: $ => choice(
      $.PSL_Assert_Directive,
      $.PSL_Assume_Directive,
      $.PSL_Assume_Guarantee_Directive,
      $.PSL_Restrict_Directive,
      $.PSL_Restrict_Guarantee_Directive,
      $.PSL_Cover_Directive,
      $.PSL_Fairness_Directive,
      $.PSL_Strong_Fairness_Directive,
    ),

    PSL_Assert_Directive: $ => prec('psl_assertion',seq(
      optional($.label),
      reservedWord('assert'),
      $._PSL_Property,
      optional($._report),
      ';'
    )),

    PSL_Assume_Directive: $ => seq(
      optional($.label),
      reservedWord('assume'),
      $._PSL_Property,
      ';'
    ),

    PSL_Assume_Guarantee_Directive: $ => seq(
      optional($.label),
      reservedWord('assume_guarantee'),
      $._PSL_Property,
      optional($._report),
      ';'
    ),

    PSL_Restrict_Directive: $ => seq(
      optional($.label),
      reservedWord('restrict'),
      $._PSL_Sequence,
      ';'
    ),

    PSL_Restrict_Guarantee_Directive: $ => seq(
      optional($.label),
      reservedWord('restrict_guarantee'),
      $._PSL_Sequence,
      optional($._report),
      ';'
    ),

    PSL_Cover_Directive: $ => seq(
      optional($.label),
      reservedWord('cover'),
      $._PSL_Sequence,
      optional($._report),
      ';'
    ),

    PSL_Fairness_Directive: $ => seq(
      optional($.label),
      reservedWord('fairness'),
      $._PSL_Boolean,
      ';'
    ),

    PSL_Strong_Fairness_Directive: $ => seq(
      optional($.label),
      reservedWord('strong'),
      reservedWord('fairness'),
      $._PSL_Boolean,
      ',',
      $._PSL_Boolean,
      ';'
    ),
    // }}}
    // PSL 7.2 Verification units {{{
    _PSL_Verification_Unit: $ => choice(
      $.PSL_VUnit,
      $.PSL_VProp,
      $.PSL_VMode
    ),

    PSL_VUnit: $ => seq(
      reservedWord('vunit'),
      $._PSL_Identifier,
      $.PSL_Verification_Unit_Body
    ),

    PSL_VProp: $ => seq(
      reservedWord('vprop'),
      $._PSL_Identifier,
      $.PSL_Verification_Unit_Body
    ),

    PSL_VMode: $ => seq(
      reservedWord('vmode'),
      $._PSL_Identifier,
      $.PSL_Verification_Unit_Body
    ),

    PSL_Verification_Unit_Body: $ => seq(
      optional(seq(
        '(',
        $.PSL_Hierarchical_HDL_Name,
        ')'
      )),
      '{',
      repeat($.PSL_Inherit_Spec),
      repeat($._PSL_VUnit_Item),
      '}'
    ),

    PSL_Hierarchical_HDL_Name: $ => seq(
      $._PSL_HDL_Module_NAME,
      repeat(seq(
        choice(
          token.immediate('.'),
          token.immediate('/'),
        ),
        field('instance', $._simple_name)
      ))
    ),

    _PSL_HDL_Module_NAME: $ => seq(
      field('entity', $._simple_name),
      optional(seq(
        '(',
        field('architecture', $._simple_name),
        ')'
      ))
    ),

    PSL_Inherit_Spec: $ => seq(
      reservedWord('inherit'),
      sepBy1(',', $._name),
      ';'
    ),

    _PSL_VUnit_Item: $ => choice(
      $._declaration,
      $._concurrent_statement
    ),
    // }}}

  },
  supertype: $ => [
    $._primary_unit,
    $._secondary_unit,
    $._context_item,
    $._sequential_statement,
    $._concurrent_statement,
    $._PSL_Verification_Unit,
    $._PSL_Declaration,
    $._PSL_Directive
  ]

})

// Helper functions {{{
function binary_expression(prec, operands, optable) {
  return choice(...optable.map(([operator, precedence, tokenize]) => {
    return prec(precedence, seq(
      field('left', operands),
      field('operator', tokenize(operator)),
      field('right', operands)
    ))
  }))
}

function unary_expression(prec, operand, optable) {
  return choice(...optable.map(([operator, precedence, tokenize]) => {
    return prec(precedence, seq(
      field('operator', tokenize(operator)),
      field('argument', operand)
    ))
  }))
}

function delimiter(delim, precedence = 2) {
  return token(prec(precedence, delim))
}

function reservedWord(word) {
  //return word
  return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
  return token(prec(2, new RegExp(regex)))
}

function caseInsensitive(word) {
  return word.split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
}

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
// }}}
