const PREC = { // {{{
    // VHDL EXPRESSION
    REDUCTION               : 28,
    FACTOR                  : 27,
    TERM                    : 26,
    SIGN                    : 25,
    SIMPLE_EXPRESSION       : 24,
    SHIFT_EXPRESSION        : 23,
    RELATION                : 22,
    LOGICAL                 : 21,
    // PSL EXPRESSION
    PSL_UNION               : 20,
    PSL_CLOCK               : 19,
    PSL_SERE_REPEAT         : 18,
    PSL_SERE_WITHIN         : 17,
    PSL_SERE_AND            : 16,
    PSL_SERE_OR             : 15,
    PSL_FUSION              : 14,
    PSL_CONCAT              : 13,
    PSL_TERMINATION         : 12,
    PSL_OCURRENCE           : 11,
    PSL_BOUNDING            : 10,
    PSL_SEQ_IMPLICATION     : 9,
    PSL_LOGICAL_IMPLICATION : 8,
    PSL_INVARIANCE          : 7,
    // INTERFACES
    CONSTANT_INTERFACE      : 3,
    VARIABLE_INTERFACE      : 2,
    SIGNAL_INTERFACE        : 1,
    ILLEGAL_INTERFACE       : -3,
};
// }}}
// Character set {{{
const UPPER_CASE_LETTER = 'A-ZÀ-ÖØ-Þ';
const LOWER_CASE_LETTER = 'a-zß-öø-ÿ';
const DIGIT = '0-9';
const HEX_DIGIT = 'a-fA-F';

// named characters
const BACKSLASH = '\\\\';
const QUOTATION_MARK = '"';
const DOUBLE_BACKSLASH = BACKSLASH+BACKSLASH;
const DOUBLE_QUOTATION_MARK = QUOTATION_MARK+QUOTATION_MARK;
const HT = '\t'; // HORIZONTAL TAB
const VT = '\v'; // VERTICAL TAB
const CR = '\r'; // CARRIAGE RETURN
const LF = '\n'; // LINE FEED
const FF = '\f'; // FORM FEED
const FORMAT_EFFECTOR = HT+VT+CR+LF+FF;
const SPACE = ' ';
const NBSP = ' ';
const SPACE_CHARACTER = SPACE+NBSP;
const UNDERLINE = '_';

// *special_character* includes both
// *special character* and *others special character*
// BACKSLASH, QUOTATION_MARK and UNDERLINE are intentionally missing.
// They shall be added to the regex expression where allowed
const SPECIAL_CHARACTER = '!'              + // 0x21
                          //QUOTATION_MARK + // 0x22
                          '#-@'            + // 0x23 to 0x40
                          '\\['            + // 0x5B
                          //BACKSLASH      + // 0x5C
                          '\\]^'           + // 0x5D to 0x5E
                          //UNDERLINE      + // 0x5F
                          '`'              + // 0x60
                          '\\{-~'          + // 0x7B to 0x7E
                          '¡-¿'            + // 0xA1 to 0xBF
                          '×'              + // 0xD7
                          '÷';               // 0xF7

const LETTER = UPPER_CASE_LETTER+LOWER_CASE_LETTER;
const LETTER_OR_DIGIT = LETTER+DIGIT;
const EXTENDED_DIGIT = DIGIT+HEX_DIGIT;

const GRAPHIC_CHARACTER = [
    UPPER_CASE_LETTER+
    LOWER_CASE_LETTER+
    DIGIT+
    SPACE_CHARACTER+
    SPECIAL_CHARACTER
];

const BASIC_IDENTIFIER = [
    '['+LETTER+ ']'+
    '('+UNDERLINE+'?'+'['+LETTER_OR_DIGIT+']'+')*'
];

const EXTENDED_IDENTIFIER = [
    BACKSLASH+
    '('+DOUBLE_BACKSLASH+'|'+'['+GRAPHIC_CHARACTER+QUOTATION_MARK+']'+')+'+
    BACKSLASH
];

const IDENTIFIER = [ BASIC_IDENTIFIER+'|'+EXTENDED_IDENTIFIER ];

const INTEGER = [
    '['+DIGIT+']'+
    '('+UNDERLINE+'?'+'['+DIGIT+']'+')*'
];

const BASE_SPECIFIER = [
    ['[uUsS]?[bB]', '[0-1]'],
    ['[uUsS]?[oO]', '[0-7]'],
    ['[dD]',        '[0-9]'],
    ['[uUsS]?[xX]', '[0-9a-fA-F]'],
];

const POSITIVE_EXPONENT = [
    '[eE]\\+?'+INTEGER
];

const NEGATIVE_EXPONENT = [
    '[eE]\-'+INTEGER
];

const RANGE_ATTRIBUTE = [
    '(' + caseInsensitive('reverse') + '_)?' + caseInsensitive('range')
];
// }}}
// Predefined names {{{
const FILE_OPEN_KIND = [
    '(' + caseInsensitive('read')    +
    '|' + caseInsensitive('write')   +
    '|' + caseInsensitive('append')  + ')_' + caseInsensitive('mode')
];

const ATTRIBUTES_OF_TYPE = [
   '(' +  caseInsensitive('base')       +
   '|' +  caseInsensitive('ascending')  +
    // functions
   '|' +  caseInsensitive('image')   + 
   '|' +  caseInsensitive('value')   +
   '|' +  caseInsensitive('pos')     +
   '|' +  caseInsensitive('val')     +
   '|' +  caseInsensitive('succ')    +
   '|' +  caseInsensitive('pred')    +
   '|' +  caseInsensitive('leftof')  +
   '|' +  caseInsensitive('rightof') + ')'
];

const ATTRIBUTES_OF_OBJECT = [
   caseInsensitive('subtype')
];

const ATTRIBUTES_OF_ARRAY = [
   '(' +  caseInsensitive('range')         +
   '|' +  caseInsensitive('reverse_range') +
   '|' +  caseInsensitive('length')        +
   '|' +  caseInsensitive('ascending')     + ')'
];

const ATTRIBUTES_OF_TYPE_OR_ARRAY = [
   '(' +  caseInsensitive('left')   +
   '|' +  caseInsensitive('right')  +
   '|' +  caseInsensitive('high')   +
   '|' +  caseInsensitive('low')    + ')'
];

const ATTRIBUTES_OF_ARRAY_OBJECT = [
   caseInsensitive('element')
];

const ATTRIBUTES_OF_SIGNAL = [
   '(' +  caseInsensitive('delayed')       +
   '|' +  caseInsensitive('stable')        +
   '|' +  caseInsensitive('quiet')         +
   '|' +  caseInsensitive('transaction')   +
   '|' +  caseInsensitive('event')         +
   '|' +  caseInsensitive('active')        +
   '|' +  caseInsensitive('last_event')    +
   '|' +  caseInsensitive('last_active')   +
   '|' +  caseInsensitive('last_value')    +
   '|' +  caseInsensitive('driving_value') + ')'
];

const ATTRIBUTES_OF_NAMED_ENTITY = [
   '(' +  caseInsensitive('simple_name')   +
   '|' +  caseInsensitive('instance_name') +
   '|' +  caseInsensitive('path_name')     + ')'
];


// }}}
// Operators {{{
const LOGICAL_OPERATORS = [
    '[nN]?([aA][nN][dD]|[oO][rR])|[xX][nN]?[oO][rR]'
];

const RELATIONAL_OPERATORS = [
    '[<>]=?|/?='
];

const SHIFT_OPERATORS = [
    '[sS][rRlL][lLaA]|[rR][oO][rRlL]'
];

const PLUS_MINUS = [
    '\\+|\\-'
];

const MULTIPLYING_OPERATORS = [
    '\\*|/|[rR][eE][mM]|[mM][oO][dD]'
];

const MISCELLANEOUS_OPERATORS = [
    '[nN][oO][tT]|[aA][bB][sS]'
];

const PSL_TERMINATION_OPERATORS = [
    '([aA]?[sS][yY][nN][cC]_)?[aA][bB][oO][rR][tT]'
];

const PSL_REPEAT_SERE_OPERATORS = [
    '\\+|\\->?|\\*|='
];

const PSL_LOGICAL_IMPLICATION_OPERATOR = [
    '<?\\->'
];

const PSL_SUFFIX_IMPLICATION_OPERATOR = [
    '\\|[=\\-]>'
];
// }}}

module.exports = grammar({
    name: 'vhdl',

    word: $ => $.identifier,

    extras: $ => [ // {{{
        $.comment,
        $.tool_directive,
        new RegExp('['+SPACE_CHARACTER+FORMAT_EFFECTOR+']'), // separators
    ], // }}}
    inline: $ => [ // {{{
        $._entity_name,                          // 3.2
        $._generate_specification,               // 3.4
        $._configuration_item,                   // 3.4.2
        $._block_specification,                  // 3.4.2
        $._designator,                           // 4.2.1
        $._subprogram_declaration,               // 4.2.1
        $._subprogram_kind,                      // 4.3
        $._subprogram_body,                      // 4.3
        $._subprogram_instantiation_declaration, // 4.4
        $._uninstantiated_name,                  // 4.4
        $._package_name,                         // 4.8
        $._range_attribute_name,                 // 5.2.1
        $._scalar_type_definition,               // 5.2.1
        $._numeric_type_definition,              // 5.2.1
        $._unit,                                 // 5.2.4
        $._discrete_range,                       // 5.3.2
        $._object_declaration,                   // 6
        $._constraint,                           // 6.3
        $._element_constraint,                   // 6.3
        $._resolution_indication,                // 6.3
        $._file_logical_name,                    // 6.4.2.5
        $._generic_interface_declaration,        // 6.5
        $._port_interface_declaration,           // 6.5
        $._procedure_interface_declaration,      // 6.5
        $._function_interface_declaration,       // 6.5
        $._alias_denotator,                      // 6.6
        $._illegal_interface_declaration,        // 6.5.2
        $._subprogram_interface_declaration,     // 6.5.4
        $._formal_part,                          // 6.5.7
        $._actual_part,                          // 6.5.7
        $._generic_interface_list,               // 6.5.6.1
        $._port_interface_list,                  // 6.5.6.1
        $._procedure_parameter_list,             // 6.5.6.1
        $._function_parameter_list,              // 6.5.6.1
        $._clause,                               // HEADER
        $._group_template,                       // 6.10
        $._group_constituent,                    // 6.10
        $._configuration_specification,          // 7.3
        $._component_name,                       // 7.3
        $._component_specification,              // 7.3
        $._name,                                 // 8
        $._prefix,                               // 8.3
        $._suffix,                               // 8.3
        $._range_attribute_designator,           // 8.6
        $._attribute_designator,                 // 8.6
        $._external_object_name,                 // 8.7
        $._expanded_name,                        // 8.7
        $._object_name,                          // 8.7
        $._name_or_label,                        // 8.7
        $._external_pathname,                    // 8.7
        $._primary,                              // 9
        $._time_expression,                      // 9.1
        $._simple_expression,                    // 9.1
        $._literal,                              // 9.3.2
        $._numeric_literal,                      // 9.3.2
        $._element_association,                  // 9.3.3
        $._value,                                // 9.3.3
        $._choice,                               // 9.3.3
        $._function_name,                        // 9.3.4
        $._signal_name,                          // 10.2
        $._condition,                            // 10.3
        $._conditional_signal_assignment,        // 10.5.4
        $._selected_signal_assignment,           // 10.5.4
        $._iteration_scheme,                     // 10.10
        $._signal_assignment_statement,          // 11.5
        $._concurrent_signal_assignment,         // 11.6
        $._instantiated_unit,                    // 11.7
        $._generate_statement,                   // 11.8
        $._library_unit,                         // 13.1
        $._context_item,                         // 13.1
        $._logical_name,                         // 13.2
        $._context_list,                         // 13.4
        $._digit,                                // 15.5.2
        $._digit_immed,                          // 15.5.2
        $._abstract_literal,                     // 15.5
        // modes
        $.in,                                    // 6.5.2
        $.out,                                   // 6.5.2
        $.inout,                                 // 6.5.2
        $.buffer,                                // 6.5.2
        $.linkage,                               // 6.5.2 
        // PSL
        $._PSL_Identifier,                       // PSL
        $._PSL_Parameter_Specification,          // PSL 6.3
        $._PSL_Boolean,                          // PSL 5
        $._PSL_Any_Type,                         // PSL 5
        $._PSL_Boolean_no_field,                 // PSL 5
        $._PSL_FL_Property,                      // PSL 6.2
        $._PSL_Value,                            // PSL 5
        $._PSL_SERE,                             // PSL 6.1.1
        $._PSL_Property,                         // PSL 6.2
        $._PSL_Verification_Unit,                // PSL 7.2
        $._PSL_VUnit_Item,                       // PSL 7.2
        $._PSL_HDL_Module_NAME,                  // PSL 7.2
        $._PSL_Extended_Ocurrence_FL_Property_Count_Specification,
        $._PSL_Extended_Ocurrence_FL_Property_Until_Specification,
    ], // }}}
    conflicts: $ => [ // {{{

        [$._procedure_specification, $.procedure_instantiation_declaration],
        [$._function_specification,  $.function_instantiation_declaration],

        // Leading zeros on base of based literals and integer
        // '0'  '0'  •  '0'
        [$.integer, $.base2 , $.base3 , $.base4 , $.base5 , $.base6 ,
                    $.base7 , $.base8 , $.base9 , $.base10, $.base11,
                    $.base12, $.base13, $.base14, $.base15, $.base16 ],

        // '0'  '1'  •  '0'
        [$.integer, $.base10],
        [$.integer, $.base11],
        [$.integer, $.base12],
        [$.integer, $.base13],
        [$.integer, $.base14],
        [$.integer, $.base15],
        [$.integer, $.base16],

        // function_call (positional_association_element)
        // ambiguous_name (expression_list)
        //
        // _name '(' _expression ')'
        //
        // `foo ('+')`   -> function_call (see _actual_part)
        // `foo ("str")` -> function_call (see _actual_part)
        [$.expression_list, $.positional_association_element],

        // `assert foo (bar, '+')`
        // `assert foo (bar, true)`
        // `assert foo (bar, "str")`
        [$.positional_association_element, $._expression],
        [$.named_association_element     , $._expression],

        // `(id (discrete_range))`
        // slice name:
        //      `assert (arr (id'range))`
        //  subtype indication
        //      `assert new rec (elem (id'range));`
        [$.index_constraint, $.slice_name],

        // subtype_indication (resolution function)
        // parenthesized_expression
        //      
        // '(' '(' _name  • ')' ...
        //
        [$.parenthesized_resolution, $._expression],
        [$.parenthesized_resolution, $._expression, $.type_mark],

        [$.resolution_function, $._expression],
        [$.resolution_function, $.record_element_resolution],
        [$.resolution_function, $._expression, $.type_mark],
        [$.resolution_function, $.type_mark],

        [$.type_mark, $.ambiguous_name, $.slice_name],
        [$.type_mark, $._expression],
        [$.type_mark, $._expression, $._entity_instantiation],
        [$.type_mark, $._expression, $.PSL_Hierarchical_HDL_Name],
        [$.type_mark, $.subtype_indication],
        [$.type_mark, $.record_element_resolution],
        [$.type_mark, $.ambiguous_name, $.slice_name, $.function_call],
        [$.type_mark, $.ambiguous_name, $.slice_name, $.record_element_resolution, $.type_mark, $.function_call],

        // Attribute name conflicts
        [$.attribute_name, $.type_mark],
        [$.attribute_name, $._expression ],
        [$.attribute_name, $.condition],
        [$.attribute_name, $.range_attribute_name, $.type_mark],

        // '('  _name '(' open  • ')' ...
        //
        // function call:
        //      `assert (fun (fun (open)))`
        // subtype indication
        //      `assert new rec (elem (open));`
        //
        [$.positional_association_element, $.index_constraint],

        [$.subtype_indication],
        [$.subtype_indication, $._expression],
        [$.subtype_indication, $.record_element_resolution],

        [$._expression, $.ascending_range],
        [$._expression, $.descending_range],

        [$.generic_clause],
        [$.generic_map_aspect],
        [$._generic_interface_list],
        [$.port_clause],
        [$.port_map_aspect],
        [$._port_interface_list],
        [$.binding_indication],

        [$.procedure_parameter_clause],
        [$.function_parameter_clause],

        [$._constant_mode,
         $._signal_mode,
         $._variable_mode],

        [$.constant_interface_declaration,
         $.signal_interface_declaration,
         $.variable_interface_declaration],

        // Generate statement body
        // see corpus/declarations/generate.txt
        // If generate - Generate body - If
        [$.if_generate],
        [$.else_generate],
        [$.elsif_generate],
        [$.elsif_generate],
        [$.generate_statement_body],
        [$.case_generate_alternative],

        // PSL
        // 'assert' _expression 'and' _expression
        [$.logical_expression, $.PSL_Logical_FL_Property],

        [$.parenthesized_expression, $.PSL_Parenthesized_FL_Property],
        [$.parenthesized_expression, $.PSL_Extended_Ocurrence_FL_Property],

        // `assert id
        // `restrict id;`
        [$._PSL_Property_Name, $._PSL_Sequence_Name, $._simple_name],
        [$._PSL_Sequence_Name, $._simple_name],

        // vhdl: `assert 1+1;`
        // vhdl: `assert (id -> id);`
        [$.PSL_Implication_FL_Property, $.PSL_Expression],
        [$.PSL_Actual_Parameter],

        // `property p (property p2) is p2;`
        [$.PSL_Property_Declaration],
    ], // }}}

    rules: {

     design_file: $ => repeat1(choice(
         $._declaration,
         $._sequential_statement,
         $._concurrent_statement,
         $.design_unit
     )),

     // 3.2 Entity declarations {{{
     entity_declaration: $ => seq(
         reservedWord('entity'),
         $.identifier,
         reservedWord('is'),
         optional($.header),
         optional($.declarative_part),
         optional(seq(
             'begin',
             optional($.sequence_of_statements)
         )),
         reservedWord('end'),
         optional(reservedWord('entity')),
         optional($._end_simple_name),
         ';'
     ),

     _entity_name: $ => field('entity', $._simple_name),
     // }}}
     // 3.3 Architecture bodies {{{
     architecture_body: $ => seq(
         reservedWord('architecture'),
         $.identifier,
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
         $.identifier,
         reservedWord('of'),
         $._entity_name,
         reservedWord('is'),
         optional($.declarative_part),
         repeat(seq(
             $.verification_unit_binding_indication,
             ';'
         )),
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

     generate_statement_element: $ => seq(
         field('label',$._simple_name),
         '(',
         $._generate_specification,
         ')'
     ),

     _generate_specification: $ => prec(1,field(
         'specification',
         choice(
             $._expression,
             $._range,
             $._name_or_label
         )
     )),

     _configuration_item: $ => choice(
         $.block_configuration,
         $.component_configuration
     ),
     // }}}
     // 3.4.3 Component configuration {{{
     component_configuration: $ => seq(
         reservedWord('for'),
         $._component_specification,
         optional(seq(
             $.binding_indication,
             $._semicolon
         )),
         repeat(seq(
             $.verification_unit_binding_indication,
             $._semicolon
         )),
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

    _procedure_specification_header: $ => seq(
        optional(choice(
             reservedWord('pure'),
             reservedWord('impure')
         )),
         reservedWord('procedure'),
         $._designator,
    ),

     _procedure_specification: $ => seq(
         $._procedure_specification_header,
         optional(alias($.header, $.subprogram_header)),
         optional($.procedure_parameter_clause),
         optional($.return)
     ),

    _function_specification_header: $ => seq(
        optional(choice(
             reservedWord('pure'),
             reservedWord('impure')
         )),
         reservedWord('function'),
         $._designator,
    ),

     _function_specification: $ => seq(
         $._function_specification_header,
         optional(alias($.header, $.subprogram_header)),
         optional($.function_parameter_clause),
         optional($.return)
     ),

     return: $ => seq(
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

     _designator: $ => choice(
         $.identifier,
         $._operator_symbol,
     ),
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

     _subprogram_kind: $ => seq(
         optional(choice(
             reservedWord('pure'),
             reservedWord('impure')
         )),
         choice(
             reservedWord('procedure'),
             reservedWord('function')
         ),
     ),
     // }}}
     // 4.4 Subprogram instantiation declarations {{{
     _subprogram_instantiation_declaration: $ => choice(
         $.procedure_instantiation_declaration,
         $.function_instantiation_declaration
     ),

     procedure_instantiation_declaration: $ => seq(
         $._procedure_specification_header,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_name,
         optional($.signature),
         optional(alias($.header, $.subprogram_instantiation_map_aspect)),
         ';'
     ),

     function_instantiation_declaration: $ => seq(
         $._function_specification_header,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_name,
         optional($.signature),
         optional(alias($.header, $.subprogram_instantiation_map_aspect)),
         ';'
     ),

    _uninstantiated_name: $ => choice(
        $._expanded_name,
        $._simple_name
    ),
     // }}}
     // 4.5.3 Signatures {{{
     signature: $ => seq(
         '[',
             sepBy1(',',choice($.type_mark,$.return)),
         ']'
     ),
     // }}}
     // 4.7 Package declarations {{{
     package_declaration: $ => seq(
         reservedWord('package'),
         $.identifier,
         reservedWord('is'),
         optional($.header),
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

     _package_name: $ => field('package',$._simple_name),
     // }}}
     // 4.9 Package instantiation declarations {{{
     package_instantiation_declaration: $ => seq(
         reservedWord('package'),
         $.identifier,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_name,
         optional(alias($.header, $.map_aspect)),
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
         $._range_attribute_function_call
     ),

     _range_attribute_name: $ => alias(
        $.range_attribute_name,
        $.attribute_name
     ),

     range_attribute_name: $ => seq(
         $._prefix,
         $._range_attribute_designator,
     ),

    _range_attribute_function_call: $ => alias(
        $.range_attribute_function_call,
        $.function_call
    ),

     range_attribute_function_call: $ => seq(
         field('function', $._range_attribute_name),
         '(',
         $.association_list,
         ')'
     ),

     ascending_range: $ => seq(
         field('low',$._simple_expression),
         reservedWord('to'),
         field('high',$._simple_expression),
     ),

     descending_range: $ => seq(
         field('high',$._simple_expression),
         reservedWord('downto'),
         field('low',$._simple_expression),
     ),
     // }}}
     // 5.2.2 Enumeration types {{{
     enumeration_type_definition: $ => seq(
         '(',
         sepBy1(',',$._enumeration_literal),
         ')'
     ),

     _enumeration_literal: $ => choice(
          $.character_literal,
          $.identifier
     ),
     // }}}
     // 5.2.4 Physical types {{{
     physical_type_definition: $ => seq(
         $.range_constraint,
         reservedWord('units'),
         $.primary_unit_declaration,
         repeat($.secondary_unit_declaration),
         reservedWord('end'),
         reservedWord('units'),
         optional($._end_simple_name)
     ),

     primary_unit_declaration: $ => seq(
         $.identifier,
         ';'
     ),

     secondary_unit_declaration: $ => seq(
         $.identifier,
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

     physical_literal: $ => prec(-1,seq(
         $._abstract_literal,
         $._unit,
     )),

     _unit: $ => prec(-1,
         $._simple_name
     ),
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
         $.subtype_indication
     ),

     constrained_array_definition: $ => seq(
         reservedWord('array'),
         $.index_constraint,
         reservedWord('of'),
         $.subtype_indication
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
             sepBy1(',',$._discrete_range),
             prec.dynamic(99,$.open)
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
         sepBy1(',',$.record_element_constraint),
         ')'
     ),

     record_element_constraint: $ => prec(1,seq(
         field('record_element',$._simple_name),
         $._element_constraint
     )),

    identifier_list: $ => sepBy1(',', $.identifier),
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
        $.identifier,
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

    _declaration: $ => prec(1,choice(
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
        $._configuration_specification,
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
        $.identifier,
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
        $.identifier,
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

    resolution_function: $ => choice(
        $._simple_name,
        $._expanded_name
    ),

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

    record_element_resolution: $ => seq(
         field('record_element',$._simple_name),
        $._resolution_indication
    ),

    type_mark: $ => choice(
        $._simple_name,
        $._expanded_name,
        //$.attribute_name
    ),

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
            $.file_open_kind
        )),
        reservedWord('is'),
        $._file_logical_name
    ),

    file_open_kind: $ => choice(
        operator(FILE_OPEN_KIND)
    ),

    _file_logical_name: $ =>  field(
        'file_name',
        $._expression
    ),
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
        optional(alias($._signal_mode, $.mode)),
        $.subtype_indication
    ),

    in     : $ => reservedWord('in'),
    out    : $ => reservedWord('out'),
    inout  : $ => reservedWord('inout'),
    buffer : $ => reservedWord('buffer'),
    linkage: $ => reservedWord('linkage'),

    // DO NOT INLINE
    _constant_mode: $ => choice(
        prec.dynamic( 1,$.in),
        prec.dynamic(-3,$.out),
        prec.dynamic(-3,$.inout),
        prec.dynamic(-3,$.buffer),
        prec.dynamic(-3,$.linkage),
    ),

    // DO NOT INLINE
    _variable_mode: $ => choice(
        prec.dynamic( 1,$.in),
        prec.dynamic( 1,$.out),
        prec.dynamic( 1,$.inout),
        prec.dynamic(-2,$.buffer),
        prec.dynamic(-2,$.linkage),
    ),

    // DO NOT INLINE
    _signal_mode: $ => choice(
        prec.dynamic( 1,$.in),
        prec.dynamic( 1,$.out),
        prec.dynamic( 1,$.inout),
        prec.dynamic( 1,$.buffer),
        prec.dynamic( 1,$.linkage),
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
        $.identifier
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
        field('subprogram', choice(
            $._simple_name,
            $._expanded_name,
            $.character_literal,
            $._operator_symbol,
        )),
        alias('<>', $.same),
    ),
    // }}}
    // 6.5.5 Interface package declarations {{{
    package_interface_declaration: $ => seq(
        reservedWord('package'),
        $.identifier,
        reservedWord('is'),
        reservedWord('new'),
        $._uninstantiated_name,
        optional(alias($.header, $.map_aspect)),
    ),
    // }}}
    // 6.5.6.1 Interface lists {{{
    _generic_interface_list:    $ => sepBy1(';', $._generic_interface_declaration),
    _port_interface_list:       $ => sepBy1(';', $._port_interface_declaration),
    _procedure_parameter_list:  $ => sepBy1(';', $._procedure_interface_declaration),
    _function_parameter_list:   $ => sepBy1(';', $._function_interface_declaration),
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
            $.subtype_indication,
            prec.dynamic(99,$.open),
            // used to resolve conflicts
            // between ambiguous_name and
            // function_call
            // _name '(' character_literal ')'
            // _name '(' string_literal ')'
            // are not ambiguous_name
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
    _any:    $ => alias('<>', $.any),
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
    header: $ => seq(
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

    _alias_denotator: $ => field(
        'denotator',
        choice(
            $._expanded_name,
            $._simple_name,
            $.character_literal,
            $._operator_symbol
        )
    ),

    _alias_designator: $ => field(
        'designator',
        choice(
            $.identifier,
            $.character_literal,
            $._operator_symbol
        )
    ),
    // }}}
    // 6.7 Attribute declarations {{{
    attribute_declaration: $ => seq(
        reservedWord('attribute'),
        $.identifier,
        ':',
        $.type_mark,
        ';'
    ),
    // }}}
    // 6.8 Component declarations {{{
    component_declaration: $ => prec(1,seq(
        reservedWord('component'),
        $.identifier,
        optional(reservedWord('is')),
        optional($.header),
        reservedWord('end'),
        reservedWord('component'),
        optional($._end_simple_name),
        ';'
    )),
    // }}}
    // 6.9 Group template declarations {{{
    group_template_declaration: $ => seq(
        reservedWord('group'),
        $.identifier,
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
        $.identifier,
        ':',
        $._group_template,
        '(',
        $.group_constituent_list,
        ')',
        ';'
    ),

    group_constituent_list: $ => prec(1,sepBy1(',', $._group_constituent)),

    _group_constituent: $ => field(
        'group_constituent',
        choice(
            $._simple_name,
            $.selected_name,
            $.character_literal
        )
    ),

    _group_template: $ => field(
        'group_template',
        choice(
            $._simple_name,
            $.selected_name
        )
    ),
    // }}}
    // 7.2 Specifications {{{
    attribute_specification: $ => seq(
        reservedWord('attribute'),
        $._simple_name,
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
    _configuration_specification: $ => alias(
        choice(
            $.simple_configuration_specification,
            $.compound_configuration_specification
        ),
        $.configuration_specification
    ),

    simple_configuration_specification: $ => prec.right(seq(
        reservedWord('for'),
        $._component_specification,
        optional($.binding_indication),
        ';',
        optional(seq(
            reservedWord('end'),
            reservedWord('for'),
            ';'
        ))
    )),

    compound_configuration_specification: $ => seq(
        reservedWord('for'),
        $._component_specification,
        optional($.binding_indication),
        ';',
        sepBy1(';', $.verification_unit_binding_indication),
        ';',
        reservedWord('end'),
        reservedWord('for'),
        ';'
    ),

    _component_specification: $ => seq(
        $.instantiation_list,
        ':',
        $._component_name
    ),

    instantiation_list: $ => choice(
        sepBy1(',',field('label',$._simple_name)),
        $.others,
        $.all
    ),

    all: $ => reservedWord('all'),

    _component_name: $ => field(
        'component',
        $._simple_name
    ),
    // }}}
    // 7.3.2 Binding indication {{{
    binding_indication: $ => choice(
        alias($.header, $.map_aspect),
        seq(
            reservedWord('use'),
            $.entity_aspect,
            optional(alias($.header, $.map_aspect)),
        ),
    ),

    entity_aspect: $ => choice(
        $._entity_instantiation,
        $._configuration_instantiation,
        $.open
    ),
    // }}}
    // 7.3.4 Verification unit binding indication {{{
    verification_unit_binding_indication: $ => seq(
        reservedWord('use'),
        reservedWord('vunit'),
        $.verification_unit_list
    ),

    verification_unit_list: $ => sepBy1(
        ',',
        field('verification_unit', choice(
            $._simple_name,
            $._expanded_name
        ))
    ),
    // }}}
    // 7.4 Disconnection specification {{{
    disconnection_specification: $ => seq(
        reservedWord('disconnect'),
        $.guarded_signal_specification,
        $.after,
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

    _simple_name: $ => alias(
        $.identifier,
        $.simple_name
    ),

    _end_simple_name: $ => field(
        'at_end',
        $._simple_name
    ),
    // }}}
    // 8.3 Selected names {{{
    selected_name: $ => seq(
        $._prefix,
        token.immediate('.'),
        $._suffix
    ),

    _prefix: $ => field(
        'prefix',
        choice(
            // LINT char literal
            $._name,
            $.function_call
        )
    ),

    _suffix: $ => field(
        'suffix',
        choice(
            $._simple_name,
            $.character_literal,
            $._operator_symbol,
            $.all
        ),
    ),

    _operator_symbol: $ => alias(
        $.string_literal,
        $.operator_symbol
    ),

    _expanded_name: $ => alias(
        $.selected_name,
        $.expanded_name
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
        $._prefix,
        '(',
        $.expression_list,
        ')'
    ),

    expression_list: $ => sepBy1(',', field('expression',$._expression)),
    // }}}
    // 8.5 Slice name {{{
    slice_name: $ => seq(
        $._prefix,
        '(',
        $._range,
        ')'
    ),
    // }}}
    // 8.6 Attribute names {{{
    attribute_name: $ => prec(1,seq(
        $._prefix,
        optional($.signature),
        $._attribute_designator
    )),

    _range_attribute_designator: $ => seq(
        token('\''),
        field('designator', alias(reserved(RANGE_ATTRIBUTE),$.attribute_of_array))
    ),

    _attribute_designator: $ => seq(
        token('\''),
        field('designator',choice(
            $._simple_name,
            $.attribute_of_type,
            $.attribute_of_object,
            $.attribute_of_array,
            $.attribute_of_type_or_array,
            $.attribute_of_array_object,
            $.attribute_of_signal,
            $.attribute_of_named_entity
        ))
    ),

    attribute_of_type:          $ => reserved(ATTRIBUTES_OF_TYPE),
    attribute_of_object:        $ => reserved(ATTRIBUTES_OF_OBJECT),
    attribute_of_array:         $ => reserved(ATTRIBUTES_OF_ARRAY),
    attribute_of_type_or_array: $ => reserved(ATTRIBUTES_OF_TYPE_OR_ARRAY),
    attribute_of_array_object:  $ => reserved(ATTRIBUTES_OF_ARRAY_OBJECT),
    attribute_of_signal:        $ => reserved(ATTRIBUTES_OF_SIGNAL),
    attribute_of_named_entity:  $ => reserved(ATTRIBUTES_OF_NAMED_ENTITY),
    
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

    _object_name:  $ => field(
        'object',
        $._simple_name
    ),

    package_pathname: $ => seq(
        '@',
        $._logical_name,
        '.',
        sepBy1('.', $._package_name),
        '.',
        $._object_name
    ),

    absolute_pathname:$ => seq(
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
        $._object_name
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
    _expression: $ => choice(
        $.condition,
        $.logical_expression,
        $.relation,
        $.shift_expression,
        $.concatenation,
        $.simple_expression,
        $.sign,
        $.term,
        $.factor,
        $.exponentiation,
        $.reduction,
        $._primary
    ),

    _primary: $ => choice(
        $._name,
        $._literal,
        $.aggregate,
        $.qualified_expression,
        $.allocator,
        $.parenthesized_expression,
        $.function_call,
    ),

    parenthesized_expression: $ => seq(
        '(',
        $._expression,
        ')'
    ),

    default_expression: $ => seq(
        ':=',
        choice(
            $._expression,
            $.inertial_expression,
        )
    ),

    inertial_expression: $ => seq(
        reservedWord('inertial'),
        $._expression
    ),

    // 9.1 Operations {{{
    _time_expression: $ => $._expression,

    condition: $ => seq(
        field('operator',delimiter('??')),
        $._primary
    ),

    relation: $ => prec.left(
        PREC.RELATION,
        seq(
            field('left', $._expression),
            choice(
                field('operator', operator(RELATIONAL_OPERATORS)),
                seq(
                    delimiter('?'),
                    field('operator', operator_immed(RELATIONAL_OPERATORS)),
                ),
            ),
            field('right', $._expression)
        )
    ),

    logical_expression: $ => prec.left(
        PREC.LOGICAL,
        seq(
            field('left', $._expression),
            field('operator', operator(LOGICAL_OPERATORS)),
            field('right', $._expression),
        )
    ),

    shift_expression: $ => prec.left(
        PREC.SHIFT_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator', operator(SHIFT_OPERATORS)),
            field('right',$._expression)
        )
    ),

    concatenation: $ => prec.left(
        PREC.SIMPLE_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator',delimiter('&')),
            field('right',$._expression),
        )
    ),

    simple_expression: $ => prec.left(
        PREC.SIMPLE_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator', operator(PLUS_MINUS)),
            field('right',$._expression),
        )
    ),

    sign: $ => prec.left(
        PREC.SIGN,
        seq(
            field('operator', operator(PLUS_MINUS)),
            field('argument',$._expression),
        )
    ),

    term: $ => prec.left(
        PREC.TERM,
        seq(
            field('left',$._expression),
            field('operator', operator(MULTIPLYING_OPERATORS)),
            field('right',$._expression),
        )
    ),

    factor: $ => prec.left(
        PREC.FACTOR,
        seq(
            field('operator', operator(MISCELLANEOUS_OPERATORS)),
            field('argument',$._primary)
        )
    ),

    exponentiation: $ => prec.left(
        PREC.FACTOR,
        seq(
            field('left',$._primary),
            field('operator',delimiter('**')),
            field('right',$._primary)
        )
    ),

    reduction: $ => prec.left(
        PREC.REDUCTION,
        seq(
            field('operator', operator(LOGICAL_OPERATORS)),
            field('argument',$._primary)
        )
    ),
    // }}}
    /// }}}
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
    aggregate: $ => prec(-1,seq(
        '(',
        $.element_association_list,
        ')'
    )),

    element_association_list: $ => choice(
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

    named_element_association: $ => prec(-1,seq(
        $.choices,
        delimiter('=>'),
        $._value
    )),

    _value: $ => field(
        'value',
        $._expression
    ),

    choices: $ => sepBy1('|', $._choice),

    _choice: $ => choice(
        $._simple_expression,
        $._range,
        $.others
    ),

    others: $ => reservedWord('others'),

    _simple_expression: $ => $._expression,
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
            $.parenthesized_expression
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

    _sequential_statement: $ => choice(
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
    ),
    // }}}
    // 10.2 Wait statement {{{
    wait_statement: $ => seq(
        optional($.label),
        reservedWord('wait'),
        optional($.sensitivity_clause),
        optional($.condition_clause),
        optional($.timeout_clause),
        ';'
    ),

    sensitivity_clause: $ => seq(
        reservedWord('on'),
        $.sensitivity_list
    ),

    condition_clause: $ => seq(
        reservedWord('until'),
        $._condition
    ),

    timeout_clause: $ => seq(
        reservedWord('for'),
        $._time_expression
    ),

    sensitivity_list: $ => choice(
        $.all,
        sepBy1(',', $._signal_name),
    ),

    _signal_name: $ => field('signal',$._name),
    // }}}
    // 10.3 Assertion statement {{{
    assertion_statement: $ => prec(1,seq(
        optional($.label),
        optional(reservedWord('postponed')),
        reservedWord('assert'),
        $._condition,
        optional($.report),
        optional($.severity),
        ';'
    )),

    _condition: $ => $._expression,
    // }}}
    // 10.4 Report statement {{{
    report_statement: $ => seq(
        optional($.label),
        $.report,
        optional($.severity),
        ';'
    ),

    report: $ => seq(
        reservedWord('report'),
         $._expression,
    ),

    severity: $ => seq(
        reservedWord('severity'),
         $._expression
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
        $._value,
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
        reservedWord('in'),
        reservedWord('out'),
    ),

    delay_mechanism: $ => choice(
        $.transport,
        $.inertial,
    ),

    transport: $ => reservedWord('transport'),

    inertial: $ => seq(
        optional($.reject),
        reservedWord('inertial')
    ),

    reject: $ => seq(
        reservedWord('reject'),
        $._time_expression,
    ),

    _target: $ => field(
        'target',
        choice(
            $._name,
            $.aggregate
        ),
    ),

    waveforms: $ => choice(
        $._unaffected,
        sepBy1(',', $.waveform_element)
    ),

    _unaffected: $ => alias(
        reservedWord('unaffected'),
        $.unaffected
    ),

    waveform_element: $ => seq(
        $._value,
        optional($.after)
    ),

    after: $ => seq(
        reservedWord('after'),
        $._time_expression
    ),
    // }}}
    // 10.5.3 Conditional signal assignments {{{
    _conditional_signal_assignment: $ => choice(
        $.conditional_waveform_assignment,
        $.conditional_force_assignment
    ),

    conditional_waveform_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        optional(reservedWord('guarded')),
        optional($.delay_mechanism),
        $.conditional_waveforms,
        ';'
    ),

    when_clause: $ => seq(
        reservedWord('when'),
        $._condition,
    ),

    conditional_waveforms: $ => seq(
        $.waveforms,
        $.when_clause,
        repeat($.alternative_conditional_waveforms),
    ),

    alternative_conditional_waveforms: $ => seq(
        reservedWord('else'),
        $.waveforms,
        optional($.when_clause)
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
        $.when_clause,
        repeat($.alternative_conditional_expressions),
    ),

    alternative_conditional_expressions: $ => seq(
        reservedWord('else'),
        $._value,
        optional($.when_clause)
    ),
    // }}}
    // 10.5.4 Selected signal assignments {{{
    _selected_signal_assignment: $ => choice(
        $.selected_waveform_assignment,
        $.selected_force_assignment
    ),

    _with: $ => field('with', $._expression),

    selected_waveform_assignment: $ => seq(
        optional($.label),
        reservedWord('with'),
        $._with,
        reservedWord('select'),
        optional(delimiter('?')),
        $._target,
        '<=',
        optional(reservedWord('guarded')),
        optional($.delay_mechanism),
        optional($.selected_waveforms),
        ';'
    ),

    selected_force_assignment: $ => seq(
        optional($.label),
        reservedWord('with'),
        $._with,
        reservedWord('select'),
        optional(delimiter('?')),
        $._target,
        '<=',
        reservedWord('force'),
        optional($.force_mode),
        optional($.selected_expressions),
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
    simple_variable_assignment: $ => seq(
        optional($.label),
        $._target,
        ':=',
        $._value,
        ';'
    ),
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
        $._with,
        reservedWord('select'),
        optional(delimiter('?')),
        $._target,
        ':=',
        $.selected_expressions,
        ';'
    ),
    // }}}
    // 10.7 Procedure call statement {{{
    procedure_call_statement: $ => prec(1,seq(
        optional($.label),
        optional(reservedWord('postponed')),
        field('procedure',$._name),
        '(',
        $.association_list,
        ')',
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
        $._case_expression,
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
        $.identifier,
        reservedWord('in'),
        $._discrete_range
    ),
    // }}}
    // 10.11 Next statement {{{
    next_statement: $ => seq(
        optional($.label),
        reservedWord('next'),
        optional($._loop_label),
        optional($.when_clause),
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
        optional($.when_clause),
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

    _concurrent_statement: $ => prec(2,choice(
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
        optional($.header),
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
        $._expression
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
    _concurrent_signal_assignment: $ => prec(1,choice(
        $.simple_waveform_assignment,
        $.conditional_waveform_assignment,
        $.selected_waveform_assignment,
    )),
    // }}}
    // 11.7 Component instantiation statements {{{
    component_instantiation_statement: $ => seq(
        optional($.label),
        $._instantiated_unit,
        optional(alias($.header, $.map_aspect)),
        ';'
    ),

    _instantiated_unit: $ => choice(
        $._entity_instantiation,
        $._configuration_instantiation,
        $._component_instantiation
    ),

    _entity_instantiation: $ => seq(
        reservedWord('entity'),
        field(
            'entity',
            choice(
                $._simple_name,
                $._expanded_name
            ),
        ),
        optional(seq(
            '(',
            field(
                'architecture',
                $._simple_name
            ),
            ')'
        ))
    ),

    _configuration_instantiation: $ => seq(
        reservedWord('configuration'),
        field(
            'configuration',
            choice(
                $._simple_name,
                $._expanded_name
            ),
        ),
    ),

    _component_instantiation: $ => seq(
        optional(reservedWord('component')),
        field(
            'component',
            choice(
                $._simple_name,
                $._expanded_name
            ),
        ),
    ),
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
        $._case_expression,
        reservedWord('generate'),
        repeat($.case_generate_alternative),
        reservedWord('end'),
        reservedWord('generate'),
        optional($._end_simple_name),
        ';'
    ),

    _case_expression: $ => field(
        'expression',
        $._expression
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
        $.identifier,
        ':'
    ),
    // }}}
    // 12.4 Use clauses {{{
    use_clause: $ => seq(
        reservedWord('use'),
        sepBy1(',',$._expanded_name),
        ';'
    ),
    // }}}
    // 13.1 Design units {{{
    design_unit: $ => seq(
        optional($.context_clause),
        $._library_unit
    ),

    _library_unit: $ => choice(
        $._primary_unit,
        $._secondary_unit
    ),

    _primary_unit: $ => choice(
        $.entity_declaration,
        $.configuration_declaration,
        $.package_declaration,
        $.package_instantiation_declaration,
        $.context_declaration,
        $._PSL_Verification_Unit,
    ),

    _secondary_unit: $ => choice(
        $.architecture_body,
        $.package_body
    ),
    // }}}
    // 13.2 Design libraries {{{
    library_clause: $ => seq(
        reservedWord('library'),
        $.logical_name_list,
        ';'
    ),

    logical_name_list: $ => sepBy1(',', $._logical_name),

    _logical_name: $ => field('library', $._simple_name),
    // }}}
    // 13.3 Context declarations {{{
    context_declaration: $ => seq(
        reservedWord('context'),
        $.identifier,
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

    _context_item: $ => choice(
        $.library_clause,
        $.use_clause,
        $.context_reference
    ),

    context_reference: $ => seq(
        reservedWord('context'),
        $.context_list,
        ';'
    ),

    context_list: $ => sepBy1(',', $._expanded_name),
    // }}}
    // 15.4 Identifiers {{{
    identifier: $ => new RegExp (IDENTIFIER),
    // }}}
    // 15.5 Abstract literals {{{
    _abstract_literal: $ => choice(
        $.integer_decimal,
        $.real_decimal,
        $.based_integer,
        $.based_real
    ),
    // }}}
    // 15.5.2 Decimal literals {{{
    integer_decimal: $ => seq(
        $.integer,
        optional($._exponent)
    ),

    real_decimal: $ => seq(
        $.integer,
        token.immediate('.'),
        alias($._integer_immed, $.integer),
        optional($._exponent)
    ),

    separator: $ => token.immediate(UNDERLINE),

    _digit:       $ => choice(...[...'0123456789'].map(c => token(c))),
    _digit_immed: $ => choice(...[...'0123456789'].map(c => token.immediate(c))),

    integer: $ => seq(
        $._digit,
        repeat(seq(
            optional($.separator),
            $._digit_immed
        ))
    ),

    _integer_immed: $ => seq(
        $._digit_immed,
        repeat(seq(
            optional($.separator),
            $._digit_immed
        ))
    ),

    _exponent: $ => choice(
        $.positive_exponent,
        $.negative_exponent
    ),

    positive_exponent: $ => seq(
        token.immediate(prec(1,new RegExp (POSITIVE_EXPONENT))),
    ),

    negative_exponent: $ => seq(
        token.immediate(prec(1,new RegExp (NEGATIVE_EXPONENT))),
    ),
    // }}}
    // 15.5.3 Based literals {{{
    // If you know javascript and can implement this more elegantly,
    // I'd happly accept a PR. (just make sure all test are passing)
    based_integer: $ => seq(
        choice(
            based_integer_gen($, $.base2 , $.extended_digit_base2),
            based_integer_gen($, $.base3 , $.extended_digit_base3),
            based_integer_gen($, $.base4 , $.extended_digit_base4),
            based_integer_gen($, $.base5 , $.extended_digit_base5),
            based_integer_gen($, $.base6 , $.extended_digit_base6),
            based_integer_gen($, $.base7 , $.extended_digit_base7),
            based_integer_gen($, $.base8 , $.extended_digit_base8),
            based_integer_gen($, $.base9 , $.extended_digit_base9),
            based_integer_gen($, $.base10, $.extended_digit_base10),
            based_integer_gen($, $.base11, $.extended_digit_base11),
            based_integer_gen($, $.base12, $.extended_digit_base12),
            based_integer_gen($, $.base13, $.extended_digit_base13),
            based_integer_gen($, $.base14, $.extended_digit_base14),
            based_integer_gen($, $.base15, $.extended_digit_base15),
            based_integer_gen($, $.base16, $.extended_digit_base16),
        ),
        optional($._exponent)
    ),

    based_real: $ => seq(
        choice(
            based_real_gen($, $.base2 , $.extended_digit_base2),
            based_real_gen($, $.base3 , $.extended_digit_base3),
            based_real_gen($, $.base4 , $.extended_digit_base4),
            based_real_gen($, $.base5 , $.extended_digit_base5),
            based_real_gen($, $.base6 , $.extended_digit_base6),
            based_real_gen($, $.base7 , $.extended_digit_base7),
            based_real_gen($, $.base8 , $.extended_digit_base8),
            based_real_gen($, $.base9 , $.extended_digit_base9),
            based_real_gen($, $.base10, $.extended_digit_base10),
            based_real_gen($, $.base11, $.extended_digit_base11),
            based_real_gen($, $.base12, $.extended_digit_base12),
            based_real_gen($, $.base13, $.extended_digit_base13),
            based_real_gen($, $.base14, $.extended_digit_base14),
            based_real_gen($, $.base15, $.extended_digit_base15),
            based_real_gen($, $.base16, $.extended_digit_base16),
        ),
        optional($._exponent)
    ),

    // DO NOT INLINE
    base2 : $ => base_gen('2'),
    base3 : $ => base_gen('3'),
    base4 : $ => base_gen('4'),
    base5 : $ => base_gen('5'),
    base6 : $ => base_gen('6'),
    base7 : $ => base_gen('7'),
    base8 : $ => base_gen('8'),
    base9 : $ => base_gen('9'),
    base10: $ => base_gen('10'),
    base11: $ => base_gen('11'),
    base12: $ => base_gen('12'),
    base13: $ => base_gen('13'),
    base14: $ => base_gen('14'),
    base15: $ => base_gen('15'),
    base16: $ => base_gen('16'),

    // DO NOT INLINE
    extended_digit_base2 : $ => extended_digit($,'0-1'),
    extended_digit_base3 : $ => extended_digit($,'0-2'),
    extended_digit_base4 : $ => extended_digit($,'0-3'),
    extended_digit_base5 : $ => extended_digit($,'0-4'),
    extended_digit_base6 : $ => extended_digit($,'0-5'),
    extended_digit_base7 : $ => extended_digit($,'0-6'),
    extended_digit_base8 : $ => extended_digit($,'0-7'),
    extended_digit_base9 : $ => extended_digit($,'0-8'),
    extended_digit_base10: $ => extended_digit($,'0-9'),
    extended_digit_base11: $ => extended_digit($,'0-9aA'),
    extended_digit_base12: $ => extended_digit($,'0-9a-bA-B'),
    extended_digit_base13: $ => extended_digit($,'0-9a-cA-C'),
    extended_digit_base14: $ => extended_digit($,'0-9a-dA-D'),
    extended_digit_base15: $ => extended_digit($,'0-9a-eA-E'),
    extended_digit_base16: $ => extended_digit($,'0-9a-fA-F'),
    // }}}
    // 15.6 Character literal {{{
    character_literal: $ => choice(
        seq(
            '\'',
            token.immediate(
                new RegExp ('['+GRAPHIC_CHARACTER+QUOTATION_MARK+BACKSLASH+UNDERLINE+']')
            ),
            token.immediate('\'')
        ),
    ),
    // }}}
    // 15.7 String literal {{{
    string_literal: $ => seq(
        '"',
        repeat(choice(
            token.immediate(prec(3,new RegExp ('['+GRAPHIC_CHARACTER+BACKSLASH+UNDERLINE+']'))),
            $.escape_sequence
        )),
        token.immediate('"'),
    ),

    escape_sequence: $ => token.immediate(prec(3,DOUBLE_QUOTATION_MARK)),
    // }}}
    // 15.8 Bit string literals {{{
    // If you know javascript and can implement this more elegantly,
    // I'd happly accept a PR. (just make sure all test are passing)

    //bit_string_literal: $ => choice(
    //    ...BASE_SPECIFIER.map(bit_string_literal_gen)
    //),

    bit_string_literal: $ => choice(
        bit_string_literal_gen($, '[uUsS]?[bB]', $._binary_bit_value),
        bit_string_literal_gen($, '[uUsS]?[oO]', $._octal_bit_value),
        bit_string_literal_gen($, '[dD]'       , $._decimal_bit_value),
        bit_string_literal_gen($, '[uUsS]?[xX]', $._hexadecimal_bit_value),
    ),

    unresolved: $ => token.immediate(prec(-1,new RegExp ('[^'+UNDERLINE+SPACE_CHARACTER+FORMAT_EFFECTOR+'"]'))),

    dont_care: $ => token.immediate(prec(3,'-')),

    // DO NOT INLINE
    _binary_bit_value:      $ => bit_value_gen($, '[0-1]'),
    _octal_bit_value:       $ => bit_value_gen($, '[0-7]'),
    _decimal_bit_value:     $ => bit_value_gen($, '[0-9]'),
    _hexadecimal_bit_value: $ => bit_value_gen($, '[0-9a-fA-F]'),
    // }}}
    // 15.9 Comments {{{
    comment: $ => seq(
        token(prec(2,'--')),
        token(prec(2,new RegExp('[^'+VT+CR+LF+FF+']*')))
    ),
    // }}}
    // 15.11 Tool directives {{{
    tool_directive: $ => seq(
        delimiter('`'),
        new RegExp('[^'+VT+CR+LF+FF+']*')
    ),
    // }}}
    // PSL 5. Boolean layer {{{
    _PSL_Identifier: $ => alias(
        $.identifier,
        $.PSL_Identifier
    ),

    _PSL_Any_Type: $ => choice(
        $._expression,
        $.PSL_Expression,
        $.PSL_Built_In_Function_Call,
        //$.PSL_Union_Expression,
    ),

    _PSL_Boolean: $ => field(
        'Boolean',
        $._PSL_Boolean_no_field
    ),

    _PSL_Boolean_no_field: $ => choice(
        $._expression,
        $.PSL_Expression,
        $.PSL_Built_In_Function_Call
    ),

    _PSL_Number: $ => choice(
        $._expression,
        $.PSL_Built_In_Function_Call
    ),

    _PSL_Value: $ => field(
        'Value',
        $._PSL_Any_Type
    ),

    _PSL_Clock_Expression: $ => choice(
        $._expression,
        $.PSL_Built_In_Function_Call
    ),

    PSL_Expression: $ => prec.right(
        PREC.PSL_LOGICAL_IMPLICATION,
        seq(
            field('left',$._PSL_Boolean_no_field),
            field('operator', operator(PSL_LOGICAL_IMPLICATION_OPERATOR)),
            field('right',$._PSL_Boolean_no_field),
        )
    ),
    // }}}
    // PSL 5.2.3 Built-in functions {{{
    PSL_Built_In_Function_Call: $ => prec(2,choice(
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
            sepBy1(',', prec(1,choice($._PSL_Any_Type, $.PSL_Value_Set))),
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
        $.PSL_SERE_Concatenation,
        $.PSL_SERE_Fusion,
        $._PSL_Compound_SERE,
    ),

    PSL_SERE_Concatenation: $ => prec.left(
        PREC.PSL_CONCAT,
        seq(
            field('left',$._PSL_SERE),
            field('operator', delimiter(';')),
            field('right',$._PSL_SERE)
        )
    ),

    PSL_SERE_Fusion: $ => prec.left(
        PREC.PSL_FUSION,
        seq(
            field('left',$._PSL_SERE),
            field('operator', delimiter(':')),
            field('right',$._PSL_SERE)
        )
    ),
    // }}}
    // PSL 6.1.1.2 Compound SEREs {{{
    _PSL_Compound_SERE: $ => prec(1,choice(
        $.PSL_Repeated_SERE,
        $.PSL_Braced_SERE,
        $.PSL_Clocked_SERE,
        $.PSL_SERE_Or,
        $.PSL_SERE_And,
        $.PSL_SERE_Within,
        $.PSL_Parameterized_SERE,
    )),

    PSL_SERE_Or: $ => prec.left(
        PREC.PSL_SERE_OR,
        seq(
            field('left',$._PSL_Compound_SERE),
            delimiter('|'),
            field('right',$._PSL_Compound_SERE)
        )
    ),

    PSL_SERE_And: $ => prec.left(
        PREC.PSL_SERE_AND,
        seq(
            field('left',$._PSL_Compound_SERE),
            field('operator',choice(
                delimiter('&'),
                delimiter('&&')
            )),
            field('right',$._PSL_Compound_SERE),
        )
    ),

    PSL_SERE_Within: $ => prec.left(
        PREC.PSL_SERE_WITHIN,
        seq(
            field('left',$._PSL_Compound_SERE),
            field('operator',reservedWord('within')),
            field('right',$._PSL_Compound_SERE),
        )
    ),

    PSL_Parameterized_SERE: $ => seq(
        reservedWord('for'),
        $.PSL_Parameters_Definition,
        ':',
        field('operator', choice(
            delimiter('&'),
            delimiter('&&'),
            delimiter('|'),
        )),
        '{',
        $._PSL_SERE,
        '}'
    ),

    PSL_Parameters_Definition: $ => sepBy1(',', $.PSL_Parameter_Specification),

    PSL_Parameter_Specification: $ => seq(
        $._PSL_Identifier,
        optional($._PSL_Index_Range),
        reservedWord('in'),
        $.PSL_Value_Set
    ),
    // }}}
    // PSL 6.1.2 Sequences {{{
    _PSL_Sequence: $ => field(
        'Sequence',
        choice(
            $.PSL_Sequence_Instance,
            $.PSL_Repeated_SERE,
            $.PSL_Braced_SERE,
            $.PSL_Clocked_SERE
        ),
    ),

    PSL_Repeated_SERE: $ => prec.left(
        PREC.PSL_SERE_REPEAT,
        seq(
            optional(choice(
                $._PSL_Boolean,
                $._PSL_Sequence,
            )),
            '[',
            field('operator', operator(PSL_REPEAT_SERE_OPERATORS)),
            optional($._PSL_Count),
            ']',
        ),
    ),

    _PSL_Count: $ => field(
        'Count',
        choice(
            $._PSL_Number,
            $._PSL_Range
        ),
    ),

    _PSL_Range: $ => $._range,

    PSL_Braced_SERE: $ => prec.right(seq(
        '{',
        $._PSL_SERE,
        '}'
    )),

    PSL_Clocked_SERE: $ => prec.left(
        PREC.PSL_CLOCK,
        seq(
            '{',
            field('SERE',$._PSL_SERE),
            '}',
            '@',
            field('Clock', $._PSL_Clock_Expression),
        )
    ),
    // }}}
    // PSL 6.2 Properties {{{
    _PSL_Property: $ => seq(field(
        'Property',
        choice(
            $.PSL_Property_Replicator,
            $._PSL_FL_Property
        )
    )),

    _PSL_FL_Property: $ => prec.dynamic(-1,choice(
        $.PSL_Property_Instance,
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
        $._PSL_Boolean_no_field
    )),

    PSL_Parenthesized_FL_Property: $ => seq(
        '(',
        $._PSL_FL_Property,
        ')',
    ),

    PSL_Sequential_FL_Property: $ => prec.left(-1,seq(
        $._PSL_Sequence,
        optional('!')
    )),

    PSL_Clocked_FL_Property: $ => prec.left(
        PREC.PSL_CLOCK,
        seq(
            field('Property', $._PSL_FL_Property),
            '@',
            field('Clock', $._PSL_Clock_Expression)
        )
    ),

    PSL_Invariant_FL_Property: $ => prec.right(
        PREC.PSL_INVARIANCE,
        seq(
            field('operator', seq(
                choice(
                    reservedWord('always'),
                    reservedWord('never'),
                ),
            )),
            field('argument',$._PSL_FL_Property),
        )
    ),

    PSL_Ocurrence_FL_Property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator',choice(
                reservedWord('next'),
                reservedWord('eventually'),
            )),
            optional(token.immediate('!')),
            field('argument',$._PSL_FL_Property),
        ),
    ),


    PSL_Implication_FL_Property: $ => prec.right(
        PREC.PSL_LOGICAL_IMPLICATION,
        seq(
            field('left', $._PSL_FL_Property),
            field('operator', operator(PSL_LOGICAL_IMPLICATION_OPERATOR)),
            field('right', $._PSL_FL_Property),
        )
    ),

    PSL_Logical_FL_Property: $ => prec.left(
        PREC.LOGICAL,
        seq(
            field('left', $._PSL_FL_Property),
            // LINT: only `and` and `or` logical operators are allowed
            field('operator', operator(LOGICAL_OPERATORS)),
            field('right', $._PSL_FL_Property),
        )
    ),

    PSL_Factor_FL_Property: $ => prec.left(
        PREC.TERM,
        seq(
            // LINT: abs is not allowed
            field('operator', operator(MISCELLANEOUS_OPERATORS)),
            field('argument', $._PSL_FL_Property)
        )
    ),

    // PSL 6.2.1.4 Extended next FL properties {{{
    PSL_Extended_Ocurrence_FL_Property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field( 'operator', choice(
                reservedWord('next'),
                reservedWord('next_e'),
                reservedWord('next_a'),
                reservedWord('next_event'),
                reservedWord('next_event_e'),
                reservedWord('next_event_a'),
                reservedWord('eventually'),
            )),
            optional(token.immediate('!')),
            choice(
                $._PSL_Extended_Ocurrence_FL_Property_Count_Specification,
                $._PSL_Extended_Ocurrence_FL_Property_Until_Specification,
            ),
            '(',
            field('Property',$._PSL_FL_Property),
            ')'
        )
    ),

    _PSL_Extended_Ocurrence_FL_Property_Count_Specification: $ => seq(
        '[',
        $._PSL_Count,
        ']'
    ),

    _PSL_Extended_Ocurrence_FL_Property_Until_Specification: $ => seq(
        '(',
        $._PSL_Boolean,
        ')',
        optional(seq(
            '[',
            $._PSL_Count,
            ']'
        )),
    ),
    // }}}

    PSL_Termination_FL_Property: $ => prec.left(
        PREC.PSL_TERMINATION,
        seq(
            field('Property',$._PSL_FL_Property),
            field('operator', operator(PSL_TERMINATION_OPERATORS)),
            $._PSL_Boolean,
        )
    ),

    PSL_Bounding_FL_Property: $ => prec.right(
        PREC.PSL_BOUNDING,
        seq(
            field('left', $._PSL_FL_Property),
            field('operator', seq(
                choice(
                    reservedWord('before'),
                    reservedWord('until')
                ),
                optional(token.immediate('!')),
                optional(token.immediate('_')),
            )),
            field('right', $._PSL_FL_Property)
        )
    ),

    PSL_Suffix_Implication_FL_Property: $ => prec.right(
        PREC.PSL_SEQ_IMPLICATION,
        choice(
            seq(
                '{',
                field('SERE',$._PSL_SERE),
                '}',
                '(',
                field('Property',$._PSL_FL_Property),
                ')'
            ),
            seq(
                $._PSL_Sequence,
                field('operator', operator(PSL_SUFFIX_IMPLICATION_OPERATOR)),
                field('Property',$._PSL_FL_Property),
            )
        )
    ),

    PSL_Parameterized_Property: $ => seq(
        reservedWord('for'),
        $.PSL_Parameters_Definition,
        ':',
        field('operator', operator(LOGICAL_OPERATORS)),
        '(',
        $._PSL_FL_Property,
        ')'
    ),
    // }}}
    // PSL 6.2.3 Replicated properties {{{
    PSL_Property_Replicator: $ => seq(
        reservedWord('forall'),
        $.PSL_Parameter_Specification,
        ':',
        field(
            'Property',
            choice(
                prec.dynamic(-1,$.PSL_Property_Instance),
                $._PSL_Property
            ),
        ),
    ),

    _PSL_Index_Range: $ => field(
        'Index_Range',
        seq(
            '(',
            $._PSL_Range,
            ')'
        ),
    ),

    PSL_Value_Set: $ => choice(
        $._boolean,
        seq(
            '{',
            $._PSL_Value_Range,
            repeat(seq(
                ',', $._PSL_Value_Range
            )),
            '}',
        ),
    ),

    _boolean: $ => alias(
        reservedWord('boolean'),
        $.boolean
    ),

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
        field(
            'Property',
            choice(
                prec.dynamic(3,$.PSL_Property_Instance),
                $._PSL_Property,
            )
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

    PSL_Formal_Parameter_List: $ => seq(
        $.PSL_Formal_Parameter,
        repeat(seq(
            ';', $.PSL_Formal_Parameter
        ))
    ),

    PSL_Formal_Parameter: $ => seq(
        $._PSL_Parameter_Specification,
        sepBy1(',',$._PSL_Identifier)
    ),

    _PSL_Parameter_Specification: $ => choice(
        $.PSL_Constant_Parameter_Specification,
        $.PSL_Temporal_Parameter_Specification,
    ),

    PSL_Constant_Parameter_Specification: $ => choice(
        reservedWord('const'),
        seq(
            optional(reservedWord('const')),
            field(
                'Value_Parameter',
                choice(
                    $.PSL_HDL_Type,
                    $.PSL_Type_Class
                )
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
    PSL_Sequence_Instance: $ => prec.dynamic(-2,seq(
        $._PSL_Sequence_Name,
        optional(seq(
            '(',
            $.PSL_Actual_Parameter_List,
            ')'
        ))
    )),

    _PSL_Sequence_Name: $ => field(
        'Sequence_Name',
        $._PSL_Identifier
    ),

    PSL_Property_Instance: $ => prec.dynamic(-1,seq(
        $._PSL_Property_Name,
        optional(seq(
            '(',
            $.PSL_Actual_Parameter_List,
            ')'
        ))
    )),

    _PSL_Property_Name: $ => field(
        'Property_Name',
        $._PSL_Identifier
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

    PSL_Assert_Directive: $ => seq(
        optional($.label),
        reservedWord('assert'),
        $._PSL_Property,
        optional($.report),
        ';'
    ),

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
        optional($.report),
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
        optional($.report),
        ';'
    ),

    PSL_Cover_Directive: $ => seq(
        optional($.label),
        reservedWord('cover'),
        $._PSL_Sequence,
        optional($.report),
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

    PSL_Hierarchical_HDL_Name: $ => prec(1,seq(
        $._PSL_HDL_Module_NAME,
        optional(seq(
            choice(
                token.immediate('.'),
                token.immediate('/'),
            ),
            field(
                'instance',
                $._simple_name
            )
        ))
    )),

    _PSL_HDL_Module_NAME: $ => seq(
        field(
            'entity',
            choice(
                $._simple_name,
                $._expanded_name
            )
        ),
        optional(seq(
            '(',
            field('architecture',$._simple_name),
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
        $._sequential_statement,
        $._concurrent_statement,
        $._PSL_Verification_Unit,
        $._PSL_Declaration,
        $._PSL_Directive
    ]

})

function based_integer_gen($, base, digits) {
    return seq(
        alias(base, $.base),
        token.immediate('#'),
        alias(digits, $.based_literal),
        token.immediate('#'),
    )
}

function based_real_gen($, base, digits) {
    return seq(
        alias(base, $.base),
        token.immediate('#'),
        alias(digits, $.based_literal),
        token.immediate('.'),
        alias(digits, $.based_literal),
        token.immediate('#'),
    )
}

function extended_digit($, interval) {
    const valid   = token.immediate(new RegExp('['+interval+']'));
    const invalid = token.immediate(new RegExp('[^'+interval+'#]'));

    const err = alias(invalid, $.illegal);

    return seq(
        choice(valid, err),
        repeat(seq(
            optional($.separator),
            choice(valid, err),
        ))
    )
}

function base_gen(base) {
    const [head, ...tail] = base;

    return choice(
        seq(
            head,
         ...tail.map(c => token.immediate(c))
        ),
        seq(
            '0',
            repeat(token.immediate('0')),
            token.immediate(head),
         ...tail.map(c => token.immediate(c))
        )
    )
}

function bit_value_gen($, interval) {
    return seq(
        choice(
            token.immediate(new RegExp (interval)),
            $.unresolved,
            $.dont_care
        ),
        repeat(seq(
            optional($.separator),
            choice(
                token.immediate(new RegExp(interval)),
                $.unresolved,
                $.dont_care
            )
        ))
    )
}

function bit_string_literal_gen($, specifier, bitval) {
    return seq(
            choice(
                alias(token(new RegExp(specifier+'"')), $.base_specifier),
                seq(
                    alias($.integer, $.length),
                    alias(token.immediate(new RegExp(specifier+'"')), $.base_specifier),
                ),
            ),
            optional(alias(bitval, $.bit_value)),
            token.immediate('"')
        )
}

function operator(opset) {
    return alias(token(prec(2,new RegExp(opset))), "")
}

function operator_immed(opset) {
    return alias(token.immediate(prec(2,new RegExp(opset))), "")
}

function delimiter(delim) {
    return token(prec(2,delim))
}

function reservedWord(word) {
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(2,new RegExp (regex)))
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
