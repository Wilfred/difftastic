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
const EXTENDED_DIGIT = DIGIT+LETTER;

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
    '([uUsS]?[bBoOxX]|d)'+QUOTATION_MARK
];

const POSITIVE_EXPONENT = [
    '[eE]\\+?'+INTEGER
];

const NEGATIVE_EXPONENT = [
    '[eE]\-'+INTEGER
];

const RANGE_ATTRIBUTE = [
    '\\\'([rR][eE][vV][eE][rR][sS][eE]_)?[rR][aA][nN][gG][eE]'
];
// }}}

module.exports = grammar({
    name: 'vhdl',

    word: $ => $.identifier,

    extras: $ => [ // {{{
        $.comment,
        $.tool_directive,
        new RegExp('['+SPACE_CHARACTER+FORMAT_EFFECTOR+']'),
    ], // }}}

    inline: $ => [ // {{{
        $._generate_specification,               // 3.4
        $._subprogram_specification,             // 4.2.1
        $._designator,                           // 4.2.1
        $._subprogram_instantiation_declaration, // 4.4
        $._scalar_type_definition,               // 5.2.1
        $._numeric_type_definition,              // 5.2.1
        $._coefficient,                          // 5.2.4
        $._unit,                                 // 5.2.4
        $._discrete_range,                       // 5.3.2
        $._object_declaration,                   // 6
        $._constraint,                           // 6.3
        $._element_constraint,                   // 6.3
        $._type_mark,                            // 6.3
        $._resolution_indication,                // 6.3
        $._resolution_function,                  // 6.3
        $._generic_interface_declaration,        // 6.5
        $._port_interface_declaration,           // 6.5
        $._procedure_interface_declaration,      // 6.5
        $._function_interface_declaration,       // 6.5
        $._illegal_interface_declaration,        // 6.5.2
        $._formal_part,                          // 6.5.7
        $._actual_part,                          // 6.5.7
        $._group_template,                       // 6.10
        $._group_constituent,                    // 6.10
        $._configuration_specification,          // 7.3
        $._entity_aspect,                        // 7.3.2
        $._configuration_aspect,                 // 7.3.2
        $._name,                                 // 8
        $._prefix,                               // 8.3
        $._simple_name_or_label,                 // 8.7
        $._external_pathname,                    // 8.7
        $._primary,                              // 9
        $._literal,                              // 9.3.2
        $._numeric_literal,                      // 9.3.2
        $._value,                                // 9.3.3
        $._function_name,                        // 9.3.4
        $._condition,                            // 10.3
        $._conditional_signal_assignment,        // 10.5.4
        $._selected_signal_assignment,           // 10.5.4
        $._signal_assignment_statement,          // 11.5
        $._concurrent_signal_assignment,         // 11.6
        $._instantiated_unit,                    // 11.7
        $._generate_statement,                   // 11.8
        $._library_unit,                         // 13.1
        $._context_item,                         // 13.1
        $._abstract_literal,                     // 15.8
        $._base_specifier,                       // 15.8
        $._base_specifier_immed,                 // 15.8

        $._PSL_Identifier,                       // PSL
        $._PSL_Boolean,                          // PSL 5
        $._PSL_Any_Type,                         // PSL 5
        $._PSL_Boolean_no_field,                 // PSL 5
        $._PSL_FL_Property,                      // PSL 6.2
        $._PSL_Value,                            // PSL 5
        $._PSL_SERE,                             // PSL 6.1.1
        // TODO: prec left or right
        $._PSL_Property,                         // PSL 6.2
        $._PSL_Verification_Unit,                // PSL 7.2
        $._PSL_Extended_Ocurrence_FL_Property_Count_Specification,
        $._PSL_Extended_Ocurrence_FL_Property_Until_Specification,
    ], // }}}

    conflicts: $ => [ // {{{
        // function_call (positional_association_element)
        // ambiguous_name (expression_list)
        //
        // _name '(' _expression ')'
        //
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
        [$.parenthesized_resolution, $._expression, $.subtype_indication],

        // '('  _name '(' open  • ')' ...
        //
        // function call:
        //      `assert (fun (fun (open)))`
        // subtype indication
        //      `assert new rec (elem (open));`
        //
        [$.positional_association_element, $.index_constraint],

        [$.procedure_specification, $.procedure_instantiation_declaration],

        [$.subtype_indication],
        [$.subtype_indication, $._expression],
        [$.subtype_indication, $.record_element_resolution],

        [$.generic_clause],
        [$.generic_map_aspect],
        [$._generic_interface_list],
        [$.port_clause],
        [$.port_map_aspect],
        [$._port_interface_list],
        [$.binding_indication],

        [$._procedure_parameter_list],
        [$._function_parameter_list],

        [$._constant_mode,
         $._signal_mode,
         $._variable_mode],

        [$.interface_constant_declaration,
         $.interface_signal_declaration,
         $.interface_variable_declaration],

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

        // `assert forall i in boolean: p(i)`
        [$.PSL_Property_Replicator],
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
         optional($.entity_declarative_part),
         optional(seq(
             'begin',
             optional($.sequence_of_statements)
         )),
         reservedWord('end'),
         optional(reservedWord('entity')),
         optional($._end_simple_name),
         ';'
     ),

     entity_declarative_part: $ => repeat1(
         $._declaration
     ),

     _entity_name: $ => prec(1,field(
         'entity',
         choice(
             $._simple_name,
             $.selected_name
         ),
     )),
     // }}}

     // 3.3 Architecture bodies {{{
     architecture_body: $ => seq(
         reservedWord('architecture'),
         $.identifier,
         reservedWord('of'),
         $._entity_name,
         reservedWord('is'),
         optional($.architecture_declarative_part),
         reservedWord('begin'),
         optional($.architecture_statement_part),
         reservedWord('end'),
         optional(reservedWord('architecture')),
         optional($._end_simple_name),
         ';'
     ),

     architecture_declarative_part: $ => repeat1(
         $._declaration
     ),

     architecture_statement_part: $ => repeat1(
         $._concurrent_statement
     ),
     // }}}

     // 3.4 Configuration declarations {{{
     configuration_declaration: $ => seq(
         reservedWord('configuration'),
         $.identifier,
         reservedWord('of'),
         $._entity_name,
         reservedWord('is'),
         optional($.configuration_declarative_part),
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

     configuration_declarative_part: $ => prec.left(repeat1(
         $._declaration
     )),

     _configuration_name: $ => field(
         'configuration',
         $._name
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
         $._generate_statement_label,
         '(',
         $._generate_specification,
         ')'
     ),

     _generate_statement_label: $ => field(
         'generate_statement_label',
         $._simple_name
     ),

     _generate_specification: $ => prec(1,field(
         'generate_specification',
         choice(
             $._expression,
             $._range,
             $._simple_name_or_label
         )
     )),

     _configuration_item: $ => choice(
         $.block_configuration,
         $.component_configuration
     ),
     // }}}

     // 3.4.3 Component Configuration {{{
     component_configuration: $ => seq(
         reservedWord('for'),
         $.component_specification,
         optional(seq($.binding_indication, ';')),
         repeat(seq(
             $.verification_unit_binding_indication,
             ';'
         )),
         optional($.block_configuration),
         reservedWord('end'),
         reservedWord('for'),
         ';'
     ),
     // }}}

     // 4.2.1 Subprogram declarations {{{
     subprogram_declaration: $ => seq(
         $._subprogram_specification, ';'
     ),

     _subprogram_specification: $ => choice(
         $.procedure_specification,
         $.pure_function_specification,
         $.impure_function_specification
     ),

     procedure_specification: $ => seq(
         field(
             'header_keyword',
             reservedWord('procedure'),
         ),
         $._designator,
         optional($.header),
         optional($.formal_procedure_parameter_clause),
     ),

     pure_function_specification: $ => seq(
         optional(reservedWord('pure')),
         field(
             'header_keyword',
             reservedWord('function'),
         ),
         $._designator,
         optional($.header),
         optional($.formal_function_parameter_clause),
         $.return
     ),

     impure_function_specification: $ => seq(
         reservedWord('impure'),
         field(
             'header_keyword',
             reservedWord('function'),
         ),
         $._designator,
         optional($.header),
         optional($.formal_function_parameter_clause),
         $.return
     ),

     return: $ => seq(
         reservedWord('return'),
         $._type_mark,
     ),

     _end_designator: $ => field(
         'at_end',
         choice(
             $._end_simple_name,
             $._operator_symbol
         )
     ),

     _designator: $ => field(
         'designator',
         choice(
             $.identifier,
             $._operator_symbol,
         ),
     ),
     // }}}

     // 4.2.2.1 Formal parameter list {{{
     // ref formal_parameter_list
     formal_procedure_parameter_clause: $ => seq(
         optional(reservedWord('parameter')),
         '(',
         $._procedure_parameter_list,
         ')',
     ),

     formal_function_parameter_clause: $ => seq(
         optional(reservedWord('parameter')),
         '(',
         $._function_parameter_list,
         ')',
     ),
     // }}}

     // 4.3 Subprogram bodies {{{
     subprogram_body: $ => seq(
         $._subprogram_specification,
         reservedWord('is'),
         optional($.subprogram_declarative_part),
         reservedWord('begin'),
         optional($._subprogram_statement_part),
         reservedWord('end'),
         optional($._subprogram_kind),
         optional($._end_designator),
         ';'
     ),

    _subprogram_kind: $ => field(
        'footer_keyword',
        choice(
            reservedWord('procedure'),
            reservedWord('function')
        ),
    ),

     subprogram_declarative_part: $ => repeat1(
         $._declaration
     ),

     _subprogram_statement_part: $ => alias(
         $.sequence_of_statements,
         $.subprogram_statement_part
     ),
     // }}}

     // 4.4 Subprogram instantiation declaration {{{
     _subprogram_instantiation_declaration: $ => choice(
         $.function_instantiation_declaration,
         $.procedure_instantiation_declaration
     ),

     function_instantiation_declaration: $ => seq(
         reservedWord('function'),
         $._designator,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_subprogram,
         optional($.signature),
         optional($.generic_map_aspect),
         ';'
     ),

     procedure_instantiation_declaration: $ => seq(
         reservedWord('procedure'),
         $._designator,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_subprogram,
         optional($.signature),
         optional($.generic_map_aspect),
         ';'
     ),

     _uninstantiated_subprogram: $ => field(
         'uninstantiated_subprogram',
         $._name,
     ),
     // }}}

     // 4.7 Package declarations {{{
     package_declaration: $ => seq(
         reservedWord('package'),
         $.identifier,
         reservedWord('is'),
         optional($.header),
         optional($.package_declarative_part),
         reservedWord('end'),
         optional(reservedWord('package')),
         optional($._end_simple_name),
         ';'
     ),

     package_declarative_part: $ => repeat1(
         $._declaration
     ),
     // }}}

     // 4.8 Package bodies {{{
     package_body: $ => seq(
         reservedWord('package'),
         reservedWord('body'),
         $._package_name,
         reservedWord('is'),
         optional($.package_body_declarative_part),
         reservedWord('end'),
         optional(seq(
             reservedWord('package'),
             reservedWord('body'),
         )),
         optional($._end_simple_name),
         ';'
     ),

     _package_name: $ => field(
         'package',
         $._simple_name
     ),

     package_body_declarative_part: $ => repeat1(
         $._declaration
     ),
     // }}}

     // 4.9 Package instantiation Declarations {{{
     package_instantiation_declaration: $ => seq(
         reservedWord('package'),
         $.identifier,
         reservedWord('is'),
         reservedWord('new'),
         $._uninstantiated_package,
         optional($.generic_map_aspect),
         ';'
     ),

     _uninstantiated_package: $ => field(
         'uninstantiated_package',
         $._name
     ),

     // }}}

     // 4.5.3 Signatures {{{
     signature: $ => seq(
         '[',
         sepBy(',',$._type_mark),
         optional($.return),
         ']',
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
         $.range_attribute_name,
         $.range_attribute_function_call
     ),

     range_attribute_name: $ => seq(
         $._prefix,
         $.range_attribute_designator,
     ),

     range_attribute_function_call: $ => seq(
         field('function_call', $.range_attribute_name),
         '(',
         $.association_list,
         ')'
     ),

     ascending_range: $ => seq(
         field('low',$._expression),
         reservedWord('to'),
         field('high',$._expression),
     ),

     descending_range: $ => seq(
         field('high',$._expression),
         reservedWord('downto'),
         field('low',$._expression),
     ),
     // }}}

     // 5.2.2 Enumeration types {{{
     enumeration_type_definition: $ => seq(
         '(',
         sepBy1(',',$._enumeration_literal),
         ')'
     ),

     _enumeration_literal: $ => field(
         'enumerator',
         choice(
             $.character_literal,
             $.identifier
         )
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
         $._coefficient,
         $._unit,
     )),

     _coefficient: $ => field(
         'coefficient',
         $._abstract_literal
     ),

     _unit: $ => prec(-1,field(
         'unit',
         $._name
     )),
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
         $._element_subtype_indication
     ),

     constrained_array_definition: $ => seq(
         reservedWord('array'),
         $.index_constraint,
         reservedWord('of'),
         $._element_subtype_indication
     ),

     _element_subtype_indication: $ => alias(
         $.subtype_indication,
         $.element_subtype_indication
     ),

     index_subtype_definition: $ => seq(
         $._type_mark,
         reservedWord('range'),
         field('range', $._any)
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
             $.open
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
         repeat1($.element_declaration),
         reservedWord('end'),
         reservedWord('record'),
         optional($._end_simple_name)
     ),

     element_declaration: $ => seq(
         $.identifier_list,
         ':',
         $._element_subtype_indication,
         ';'
     ),

     record_constraint: $ => seq(
         '(',
         sepBy1(',',$.record_element_constraint),
         ')'
     ),

     record_element_constraint: $ => prec(1,seq(
         field('record_element', $._simple_name),
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
        $._type_mark
    ),
    // }}}

    // 5.6.2 Protected type declarations {{{
    protected_type_declaration: $ => seq(
        reservedWord('protected'),
        optional($.protected_type_declarative_part),
        reservedWord('end'),
        reservedWord('protected'),
        optional($._end_simple_name),
    ),

    protected_type_declarative_part: $ => repeat1(
        $._declaration
    ),
    // }}}

    // 5.6.2 Protected type bodies {{{
    protected_type_body: $ => seq(
        reservedWord('protected'),
        reservedWord('body'),
        optional($.protected_type_body_declarative_part),
        reservedWord('end'),
        reservedWord('protected'),
        reservedWord('body'),
        optional($._end_simple_name),
    ),

    protected_type_body_declarative_part: $ => repeat1(
        $._declaration
    ),
    // }}}

    // 6. Declarations {{{
    _declaration: $ => prec(1,choice(
        $.subprogram_declaration,
        $.subprogram_body,
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

    subtype_indication: $ => prec.dynamic(-1,seq(
        optional($._resolution_indication),
        $._type_mark,
        optional($._constraint)
    )),

    _resolution_indication: $ => choice(
        $._resolution_function,
        $.record_resolution,
        $.parenthesized_resolution,
    ),

    _resolution_function: $ => prec.dynamic(2,field(
        'resolution_function',
        choice(
            $._simple_name,
            $.selected_name
        )
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

    record_element_resolution: $ => seq(
        field('record_element',$._simple_name),
        $._resolution_indication
    ),

    _type_mark: $ => field(
        'type_mark',
        choice(
            $._simple_name,
            $.selected_name,
            //prec.dynamic(-1, $.attribute_name)
        )
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
        $.deferred_constant_declaration,
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
        $._default_expression,
        ';'
    ),

    deferred_constant_declaration: $ => seq(
        reservedWord('constant'),
        $.identifier_list,
        ':',
        $.subtype_indication,
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
        optional($._default_expression),
        ';'
    ),

    signal_kind: $ => choice(
        $._register,
        $._bus
    ),

    _register: $ => alias(reservedWord('register'), $.register),
    _bus:      $ => alias(reservedWord('bus'), $.bus),
    // }}}

    // 6.4.2.4 Variable declarations {{{
    variable_declaration: $ => seq(
        reservedWord('variable'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($._default_expression),
        ';'
    ),

    shared_variable_declaration: $ => seq(
        reservedWord('shared'),
        reservedWord('variable'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($._default_expression),
        ';'
    ),
    // }}}

    // 6.4.2.4 Variable declarations {{{
    file_declaration: $ => seq(
        reservedWord('file'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($.file_open_information),
        ';'
    ),

    file_open_information: $ => seq(
        optional($._file_open_kind),
        reservedWord('is'),
        field('file_logical', $._file_logical_name)
    ),

    _file_open_kind: $ => seq(
        reservedWord('open'),
        field('file_open_kind', $._expression)
    ),

    _file_logical_name: $ =>  $._expression,
    // }}}

    // 6.5 Interface declarations {{{
    _generic_interface_declaration: $ => choice(
        $.interface_constant_declaration,
        $.interface_type_declaration,
        $.interface_subprogram_declaration,
        $.interface_package_declaration,
        $._illegal_interface_declaration
    ),

    _port_interface_declaration: $ => choice(
        $.interface_signal_declaration,
        $._illegal_interface_declaration
    ),

    // See 6.5.2 and 4.2.2.1
    _procedure_interface_declaration: $ => choice(
        $.interface_constant_declaration,
        $.interface_signal_declaration,
        $.interface_variable_declaration,
        $.interface_file_declaration,
        $._illegal_interface_declaration
    ),

    _function_interface_declaration: $ => choice(
        $.interface_constant_declaration,
        $.interface_signal_declaration,
        $.interface_file_declaration,
        $._illegal_interface_declaration
    ),
    // }}}

    // 6.5.2 Interface object declarations {{{
    interface_constant_declaration: $ => prec.dynamic(
        PREC.CONSTANT_INTERFACE,
        seq(
            optional(field('kind',reservedWord('constant'))),
            $.identifier_list,
            ':',
            optional(alias($._constant_mode, $.mode)),
            $.subtype_indication,
            optional($._default_expression)
        )
    ),

    interface_signal_declaration: $ => prec.dynamic(
        PREC.SIGNAL_INTERFACE,
        seq(
            optional(field('kind',reservedWord('signal'))),
            $.identifier_list,
            ':',
            optional(alias($._signal_mode, $.mode)),
            $.subtype_indication,
            optional($.signal_kind),
            optional($._default_expression)
        )
    ),

    interface_variable_declaration: $ => prec.dynamic(
        PREC.VARIABLE_INTERFACE,
        seq(
            optional(field('kind',reservedWord('variable'))),
            $.identifier_list,
            ':',
            optional(alias($._variable_mode, $.mode)),
            $.subtype_indication,
            optional($._default_expression)
        )
    ),

    interface_file_declaration: $ => seq(
        field('kind',reservedWord('file')),
        $.identifier_list,
        ':',
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
        field(
            'ILLEGAL',
            choice(
                $.interface_constant_declaration,
                $.interface_signal_declaration,
                $.interface_variable_declaration,
                $.interface_file_declaration,
                $.interface_type_declaration,
                $.interface_subprogram_declaration,
                $.interface_package_declaration
            )
        )
    ),
    // }}}

    // 6.5.3 Interface type declarations {{{
    interface_type_declaration: $ => seq(
        field('kind',reservedWord('type')),
        $.identifier
    ),
    // }}}

    // 6.5.4 Interface subprogram declarations {{{
    interface_subprogram_declaration: $ => seq(
        $._subprogram_specification,
        optional(seq(
            reservedWord('is'),
            $.interface_subprogram_default
        ))
    ),

    interface_subprogram_default: $ => choice(
        field(
            'subprogram',
            choice(
                $._simple_name,
                $.selected_name,
                $.character_literal,
                $._operator_symbol
            )
        ),
        $._same
    ),

    _same: $ => alias('<>', $.same),
    // }}}

    // 6.5.5 Interface package declarations {{{
    interface_package_declaration: $ => seq(
        reservedWord('package'),
        $.identifier,
        reservedWord('is'),
        reservedWord('new'),
        $._uninstantiated_package,
        $.generic_map_aspect
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
        $._generic_interface_list,
        ')',
        optional($._semicolon)
    ),

    _semicolon: $ => alias(';', $.semicolon),
    // }}}

    // 6.5.6.3 Port clauses {{{
    port_clause: $ => seq(
        reservedWord('port'),
        '(',
        $._port_interface_list,
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
        $._name,
    ),

    _actual_part: $ => field(
        'actual_part',
        choice(
            $._expression,
            $.subtype_indication,
            prec.dynamic(2, $.open),
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
        choice(
            $._generic_association_list,
            $._default,
            $._any
        ),
        ')',
        optional($._semicolon),
    ),

    _default: $ => alias(reservedWord('default'), $.default),
    _any:     $ => alias('<>', $.any),

    _generic_association_list: $ => alias(
        $.association_list,
        $.generic_association_list
    ),
    // }}}

    // 6.5.7.3 Port map aspects {{{
    port_map_aspect: $ => seq(
        reservedWord('port'),
        reservedWord('map'),
        '(',
        $._port_association_list,
        ')',
        optional($._semicolon)
    ),

    _port_association_list: $ => alias(
        $.association_list,
        $.port_association_list
    ),
    // }}}

    // HEADER and MAP_ASPECTS {{{
    // Check if semicolon shall or shall not be present on
    // highlight file
    header: $ => choice(
        seq(
            $.generic_clause,
            optional($.generic_map_aspect),
            optional(seq(
                $.port_clause,
                optional($.port_map_aspect),
            )),
        ),
        seq(
            $.port_clause,
            optional($.port_map_aspect),
        ),
    ),

    _map_aspects: $ => choice(
        $.port_map_aspect,
        seq(
            $.generic_map_aspect,
            optional($.port_map_aspect)
        )
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
        'alias_denotator',
        $._name
    ),

    _alias_designator: $ => field(
        'alias_designator',
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
        $._type_mark,
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
        alias(
            $.identifier,
            $.attribute_designator
        ),
        reservedWord('of'),
        $.entity_specification,
        reservedWord('is'),
        $._expression,
        ';'
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

    entity_name_list: $ => choice(
        sepBy1(',', $.entity_designator),
        $._others,
        $._all
    ),

    entity_designator: $ => seq(
        $._entity_tag,
        optional($.signature)
    ),

    _entity_tag: $ => field(
        'entity_tag',
        choice(
            $._simple_name,
            $.character_literal,
            $._operator_symbol
        )
    ),
    // }}}

    // 7.3 Configuration specification {{{
    _configuration_specification: $ => choice(
        $.simple_configuration_specification,
        $.compound_configuration_specification
    ),

    simple_configuration_specification: $ => prec.right(seq(
        reservedWord('for'),
        $.component_specification,
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
        $.component_specification,
        optional($.binding_indication),
        ';',
        sepBy1(';', $.verification_unit_binding_indication),
        ';',
        reservedWord('end'),
        reservedWord('for'),
        ';'
    ),

    component_specification: $ => seq(
        $.instantiation_list,
        ':',
        $._component_name
    ),

    instantiation_list: $ => choice(
        sepBy1(',',$._instantiated_label),
        $._others,
        $._all
    ),

    _instantiated_label: $ => field(
        'instantiation_label',
        $._simple_name
    ),

    _component_name: $ => field(
        'component',
        $._name
    ),
    // }}}

    // 7.3.2 Binding indication {{{
    binding_indication: $ => choice(
        $._map_aspects,
        seq(
            reservedWord('use'),
            choice(
                $._entity_aspect,
                $._configuration_aspect,
                $.open
            ),
            optional($._semicolon),
            optional($._map_aspects),
        ),
    ),

    _entity_aspect: $ => seq(
        reservedWord('entity'),
        $._entity_name,
        optional(seq(
            '(',
            $._architecture_name,
            ')',
        ))
    ),

    _architecture_name: $ => field(
        'architecture',
        $._simple_name
    ),

    _configuration_aspect: $ => seq(
        reservedWord('configuration'),
        $._configuration_name
    ),
    // }}}

    // 7.3.4 Verification unit binding indication {{{
    verification_unit_binding_indication: $ => seq(
        reservedWord('use'),
        reservedWord('vunit'),
        $.verification_unit_list
    ),

    verification_unit_list: $ => seq(
        $._name,
        repeat(seq(
            ',', $._name
        ))
    ),
    // }}}

    // 7.4 Disconnection specification {{{
    disconnection_specification: $ => seq(
        reservedWord('disconnect'),
        $.guarded_signal_specification,
        reservedWord('after'),
        $._after,
        ';'
    ),

    guarded_signal_specification: $ => seq(
        $.signal_list,
        ':',
        $._type_mark,
    ),

    signal_list: $ => choice(
        sepBy1(',', $._signal_name),
        $._others,
        $._all
    ),

    _signal_name: $ => field(
        'signal',
        $._name
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
        $._external_name,
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
            $._simple_name,
            $.selected_name,
            $.ambiguous_name,
            $.slice_name,
            $._external_name,
            $.function_call
        )
    ),

    _suffix: $ => field(
        'suffix',
        choice(
            $._simple_name,
            $.character_literal,
            $._operator_symbol,
            $._all
        ),
    ),

    _operator_symbol: $ => alias(
        $.string_literal,
        $.operator_symbol
    ),

    _all: $ => alias(
        reservedWord('all'),
        $.all
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
    attribute_name: $ => prec(-2,seq(
        $._prefix,
        optional($.signature),
        $.attribute_designator
    )),

    range_attribute_designator: $ => reserved(RANGE_ATTRIBUTE),

    attribute_designator: $ => token(
        delimiter(new RegExp ('\''+IDENTIFIER))
    ),
    // }}}

    // 8.7 External names {{{
    _external_name: $ => choice(
        $.external_constant_name,
        $.external_signal_name,
        $.external_variable_name
    ),

    external_constant_name: $ => seq(
        '<<',
        reservedWord('constant'),
        $._external_pathname,
        ':',
        $.subtype_indication,
        '>>'
    ),

    external_signal_name: $ => seq(
        '<<',
        reservedWord('signal'),
        $._external_pathname,
        ':',
        $.subtype_indication,
        '>>'
    ),

    external_variable_name: $ => seq(
        '<<',
        reservedWord('variable'),
        $._external_pathname,
        ':',
        $.subtype_indication,
        '>>'
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
        '.', $.partial_pathname
    ),

    relative_pathname: $ => seq(
        repeat('^.'),
        $.partial_pathname
    ),

    partial_pathname: $ => seq(
        repeat(seq(
            $.pathname_element, '.'
        )),
        $._object_name
    ),

    pathname_element: $ => choice(
        $._simple_name_or_label,
        $.generate_statement_element,
    ),

    _simple_name_or_label: $ => field(
        'simple_name_or_label',
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

    //_condition_expression: $ => choice(
    //    $.condition,
    //    $.logical_expression,
    //    $.relation,
    //    $.reduction,
    //    $.factor,
    //    $._primary
    //),

    //_simple_expression: $ => choice(
    //    $.shift_expression,
    //    $.simple_expression,
    //    $.sign,
    //    $.term,
    //    $.factor,
    //    $.exponentiation,
    //    $._primary
    //),

    //_string_expression: $ => choice(
    //    $.concatenation,
    //    $._primary
    //),

    //_severity_expression: $ => choice(
    //    $._primary
    //),

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

    _default_expression: $ => seq(
        ':=',
        field(
            'default_expression',
            choice(
                $._expression,
                $.inertial_expression,
            )
        )
    ),

    inertial_expression: $ => seq(
        reservedWord('inertial'),
        $._time_expression
    ),

    _time_expression: $ => field(
        'time',
        $._expression
    ),

    // 9.1 Operations {{{
    condition: $ => seq(
        delimiter('??'),
        $._primary
    ),

    relation: $ => prec.left(
        PREC.RELATION,
        seq(
            field('left', $._expression),
            field('operator', choice(
                delimiter('>='),  delimiter('>='),  delimiter('>'),
                delimiter('<='),  delimiter('<='),  delimiter('<'),
                delimiter('/='),  delimiter('='),
                delimiter('?>='), delimiter('?>='), delimiter('?>'),
                delimiter('?<='), delimiter('?<='), delimiter('?<'),
                delimiter('?/='), delimiter('?='),
            )),
            field('right', $._expression)
        )
    ),

    logical_expression: $ => prec.left(
        PREC.LOGICAL,
        seq(
            field('left', $._expression),
            field('operator', choice(
                reservedWord('and'),
                reservedWord('or'),
                reservedWord('xor'),
                reservedWord('nand'),
                reservedWord('nor'),
                reservedWord('xnor'),
            )),
            field('right', $._expression),
        )
    ),

    shift_expression: $ => prec.left(
        PREC.SHIFT_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator', choice(
                reservedWord('sll'),
                reservedWord('srl'),
                reservedWord('sla'),
                reservedWord('sra'),
                reservedWord('rol'),
                reservedWord('ror'),
            )),
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
            field('operator', choice(
                delimiter('+'),
                delimiter('-'),
            )),
            field('right',$._expression),
        )
    ),

    sign: $ => prec.left(
        PREC.SIGN,
        seq(
            field('operator', choice(
                delimiter('+'),
                delimiter('-'),
            )),
            field('argument',$._expression),
        )
    ),

    term: $ => prec.left(
        PREC.TERM,
        seq(
            field('left',$._expression),
            field('operator',choice(
                delimiter('*'),
                delimiter('/'),
                reservedWord('rem'),
                reservedWord('mod')
            )),
            field('right',$._expression),
        )
    ),

    factor: $ => prec.left(
        PREC.FACTOR,
        seq(
            field('operator', choice(
                reservedWord('abs'),
                reservedWord('not')
            )),
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
            field('operator',choice(
                reservedWord('and'),
                reservedWord('or'),
                reservedWord('xor'),
                reservedWord('nand'),
                reservedWord('nor'),
                reservedWord('xnor'),
            )),
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
        sepBy1(',', $.element_asociation),
        ')'
    )),

    element_asociation: $ => prec(-1,seq(
        optional(seq(
            $.choices,
            delimiter('=>'),
        )),
        $._value
    )),

    _value: $ => field(
        'value',
        $._expression
    ),

    choices: $ => sepBy1('|', field('choice',$._choice)),

    _choice: $ => choice(
        $._expression,
        $._discrete_range,
        $._others
    ),

    _others: $ => alias(
        reservedWord('others'),
        $.others
    ),
    // }}}

    // 9.3.4 Function call {{{
    function_call: $ => seq(
        $._function_name,
        '(',
        $.association_list,
        ')'
    ),

    _function_name: $ => field(
        'function_name',
        choice(
            $._simple_name,
            $._operator_symbol,
            $.selected_name,
            $.attribute_name,
        ),
    ),
    // }}}

    // 9.3.5 Qualified expressions {{{
    qualified_expression: $ => seq(
        $._type_mark,
        token.immediate('\''),
        token.immediate('('),
        sepBy1(',', $.element_asociation),
        ')'
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
        optional($._sensitivity_clause),
        optional($._condition_clause),
        optional($._timeout_clause),
        ';'
    ),

    _sensitivity_clause: $ => seq(
        reservedWord('on'),
        field('on', $.sensitivity_list)
    ),

    _condition_clause: $ => seq(
        reservedWord('until'),
        $._until
    ),

    _until: $ => field(
        'until',
        $._expression
    ),

    _timeout_clause: $ => seq(
        reservedWord('for'),
        $._time_expression
    ),

    sensitivity_list: $ => sepBy1(',', $._simple_name),
    // }}}

    // 10.3 Assertion statement {{{
    assertion_statement: $ => prec(1,seq(
        optional($.label),
        optional($._postponed),
        reservedWord('assert'),
        $._condition,
        optional($._report),
        optional(seq(
            reservedWord('severity'),
            field('severity', $._expression)
        )),
        ';'
    )),

    _condition: $ => field(
        'condition',
        $._expression
    ),
    // }}}

    // 10.4 Report statement {{{
    report_statement: $ => seq(
        optional($.label),
        $._report,
        optional(seq(
            reservedWord('severity'),
            field('severity', $._expression)
        )),
        ';'
    ),

    _report: $ => seq(
        reservedWord('report'),
        field('report', $._expression),
    ),
    // }}}

    // 10.5 Signal assignments {{{
    _signal_assignment_statement: $ => choice(
        $._simple_signal_assignment,
        $._conditional_signal_assignment,
        $.guarded_conditional_signal_assignment,
        $._selected_signal_assignment,
        $.guarded_selected_signal_assignment,
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
        optional($._delay_mechanism),
        $.waveforms,
        ';'
    ),

    simple_force_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        reservedWord('force'),
        optional($.force_mode),
        $._value,
        ';'
    ),

    simple_release_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        reservedWord('release'),
        optional($.force_mode),
        ';'
    ),

    force_mode: $ => choice(
        $.in,
        $.out
    ),

    _delay_mechanism: $ => choice(
        $.transport,
        $.inertial,
    ),

    transport: $ => reservedWord('transport'),

    inertial: $ => seq(
        optional(seq(
            reservedWord('reject'),
            field('pulse_limit', $._expression),
        )),
        reservedWord('inertial')
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
        optional(seq(
            reservedWord('after'),
            $._after
        ))
    ),

    _after: $ => field('after', $._expression),
    // }}}

    // 10.5.3 Conditonal signal assignments {{{
    _conditional_signal_assignment: $ => choice(
        $.conditional_waveform_assignment,
        $.conditional_force_assignment
    ),

    conditional_waveform_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        optional($._delay_mechanism),
        $.conditional_waveforms,
        ';'
    ),

    conditional_waveforms: $ => seq(
        $.waveforms,
        reservedWord('when'),
        $._condition,
        repeat($.alternative_conditional_waveform),
    ),

    alternative_conditional_waveform: $ => seq(
        reservedWord('else'),
        $.waveforms,
        optional(seq(
            reservedWord('when'),
            $._condition,
        ))
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
        reservedWord('when'),
        $._condition,
        repeat($.alternative_conditional_expression),
    ),

    alternative_conditional_expression: $ => seq(
        reservedWord('else'),
        $._value,
        optional(seq(
            reservedWord('when'),
            $._condition,
        ))
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
        choice(
            reservedWord('select'),
            reserved(caseInsensitive('select') + '\\?'),
        ),
        $._target,
        '<=',
        optional($._delay_mechanism),
        $.selected_waveforms,
        ';'
    ),

    selected_force_assignment: $ => seq(
        optional($.label),
        reservedWord('with'),
        $._with,
        choice(
            reservedWord('select'),
            reserved(caseInsensitive('select') + '\\?'),
        ),
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
        repeat($.alternative_selected_expressions)
    ),

    alternative_selected_expressions: $ => seq(
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
        choice(
            reservedWord('select'),
            reserved(caseInsensitive('select') + '\\?'),
        ),
        $._target,
        ':=',
        $.selected_expressions,
        ';'
    ),
    // }}}

    // 10.7 Procedure call statement {{{
    procedure_call_statement: $ => prec(1,seq(
        optional($.label),
        optional($._postponed),
        $._name,
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
        optional($._label_footer),
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
        field(
            'header_keyword',
            choice(
                reservedWord('case'),
                reserved(caseInsensitive('case') + '\\?'),
            ),
        ),
        $._case_expression,
        reservedWord('is'),
        repeat($.case_statement_alternative),
        reservedWord('end'),
        field(
            'footer_keyword',
            choice(
                reservedWord('case'),
                reserved(caseInsensitive('case') + '\\?'),
            ),
        ),
        optional($._label_footer),
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
        optional($._label_footer),
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
        optional(seq(
            reservedWord('when'),
            $._condition
        )),
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
        optional(seq(
            reservedWord('when'),
            $._condition
        )),
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
        optional($.block_declarative_part),
        reservedWord('begin'),
        optional($.block_statement_part),
        reservedWord('end'),
        reservedWord('block'),
        optional($._label_footer),
        ';'
    ),

    _guard: $ => field(
        'guard',
        $._expression
    ),

    block_declarative_part: $ => repeat1(
        $._declaration
    ),

    block_statement_part: $ => repeat1(
        $._concurrent_statement
    ),
    // }}}

    // 11.3 Process statement {{{
    process_statement: $ => seq(
        optional($.label),
        optional(field('header_postponed',$._postponed)),
        reservedWord('process'),
        optional(seq(
            '(',
            $._process_sensitivity_list,
            ')'
        )),
        optional(reservedWord('is')),
        optional($.process_declarative_part),
        reservedWord('begin'),
        optional($._process_statement_part),
        reservedWord('end'),
        optional(field('footer_postponed',$._postponed)),
        reservedWord('process'),
        optional($._label_footer),
        ';'
    ),

    _postponed: $ => alias(
        reservedWord('postponed'),
        $.posponed
    ),

    _process_sensitivity_list: $ => alias(
        $.signal_list,
        $.process_sensitivity_list
    ),

    process_declarative_part: $ => repeat1(
        $._declaration
    ),

    _process_statement_part: $ => alias(
        $.sequence_of_statements,
        $.process_statement_part
    ),
    // }}}

    // 11.6 Concurrent signal assignments {{{
    _concurrent_signal_assignment: $ => prec(1,choice(
        $.simple_waveform_assignment,
        $.conditional_waveform_assignment,
        $.selected_waveform_assignment,
        $.guarded_simple_signal_assignment,
        $.guarded_conditional_signal_assignment,
        $.guarded_selected_signal_assignment
    )),

    guarded_simple_signal_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        reservedWord('guarded'),
        optional($._delay_mechanism),
        $.waveforms,
        ';'
    ),

    guarded_conditional_signal_assignment: $ => seq(
        optional($.label),
        $._target,
        '<=',
        reservedWord('guarded'),
        optional($._delay_mechanism),
        $.conditional_waveforms,
        ';'
    ),

    guarded_selected_signal_assignment: $ => seq(
        optional($.label),
        reservedWord('with'),
        $._with,
        choice(
            reservedWord('select'),
            reserved(caseInsensitive('select') + '\\?'),
        ),
        $._target,
        '<=',
        reservedWord('guarded'),
        optional($._delay_mechanism),
        $.selected_waveforms,
        ';'
    ),
    // }}}

    // 11.7 Component instantiation statements {{{
    component_instantiation_statement: $ => seq(
        optional($.label),
        $._instantiated_unit,
        optional($._map_aspects),
        ';'
    ),

    _instantiated_unit: $ => choice(
        $.component_instantiation,
        $.entity_instantiation,
        $.configuration_instantiation
    ),

    component_instantiation: $ => seq(
        optional(reservedWord('component')),
        $._component_name
    ),

    entity_instantiation: $ => prec(1,seq(
        reservedWord('entity'),
        $._entity_name,
        optional(seq(
            '(',
            $._architecture_name,
            ')'
        ))
    )),

    configuration_instantiation: $ => seq(
        reservedWord('configuration'),
        $._configuration_name
    ),
    // }}}

    // 11.8 Generate statement {{{
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
        optional($._label_footer),
        ';'
    ),

    if_generate_statement: $ => seq(
        optional($.label),
        $.if_generate,
        repeat($.elsif_generate),
        optional($.else_generate),
        reservedWord('end'),
        reservedWord('generate'),
        optional($._label_footer),
        ';'
    ),

    if_generate: $ => seq(
        reservedWord('if'),
        optional($._alternative_label),
        $._condition,
        reservedWord('generate'),
        optional($.generate_statement_body),
    ),

    elsif_generate: $ => seq(
        reservedWord('elsif'),
        optional($._alternative_label),
        $._condition,
        reservedWord('generate'),
        optional($.generate_statement_body)
    ),

    else_generate: $ => seq(
        reservedWord('else'),
        optional($._alternative_label),
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
        optional($._label_footer),
        ';'
    ),

    _case_expression: $ => field(
        'expression',
        $._expression
    ),

    case_generate_alternative: $ => seq(
        reservedWord('when'),
        optional($._alternative_label),
        $.choices,
        delimiter('=>'),
        optional($.generate_statement_body)
    ),

    generate_statement_body: $ => choice(
        // with begin
        seq(
            optional($.block_declarative_part),
            reservedWord('begin'),
            repeat($._concurrent_statement),
            optional(seq(
                reservedWord('end'),
                optional($._label_footer),
                ';'
            )),
        ),
        // with end
        seq(
            optional(seq(
                optional($.block_declarative_part),
                reservedWord('begin'),
            )),
            repeat($._concurrent_statement),
            reservedWord('end'),
            optional($._label_footer),
            ';'
        ),
        // without both
        repeat1($._concurrent_statement),
    ),

    label: $ => seq(
        $.identifier,
        ':'
    ),

    _label_footer: $ => field(
        'footer_label',
        $._simple_name
    ),

    _alternative_label: $ => seq(
        field(
            'alternative_label',
            $.identifier
        ),
        ':'
    ),
    // }}}

    // 12.4 Use clauses {{{
    use_clause: $ => seq(
        reservedWord('use'),
        sepBy1(',',$.selected_name),
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


    _logical_name: $ => field(
        'logical_name',
        $.identifier
    ),
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
        $._context_list,
        ';'
    ),

    _context_list: $ => sepBy1(',', $._context_name),

    _context_name: $ => field(
        'context',
        $.selected_name
    ),
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
        $._integer_immed,
        optional($._exponent)
    ),

    integer: $ => token(new RegExp (INTEGER)),

    _integer_immed: $ => alias(
        token.immediate(new RegExp (INTEGER)),
        $.integer
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
    based_integer: $ => seq(
        alias($.integer, $.base),
        token.immediate('#'),
        $.based_literal,
        token.immediate('#'),
        optional($._exponent),
    ),

    based_real: $ => seq(
        alias($.integer, $.base),
        token.immediate('#'),
        $.based_literal,
        token.immediate('.'),
        $.based_literal,
        token.immediate('#'),
        optional($._exponent),
    ),

    based_literal: $ => seq(
        choice(
            token.immediate(prec(3,new RegExp ('['+EXTENDED_DIGIT+']'))),
            alias(
                token.immediate(prec(3,new RegExp (UNDERLINE+'+'))),
                $.based_literal_error
            )
        ),
        repeat(choice(
            token.immediate(prec(3,new RegExp (UNDERLINE+'?['+EXTENDED_DIGIT+']'))),
            alias(
                token.immediate(prec(3,new RegExp (UNDERLINE+UNDERLINE+'+'))),
                $.based_literal_error
            )
        )),
    ),
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
    bit_string_literal: $ => choice(
        seq(
            $._length,
            $._base_specifier_immed,
            optional($.bit_value),
            token.immediate('"'),
        ),
        seq(
            $._base_specifier,
            optional($.bit_value),
            token.immediate('"'),
        ),
    ),

    _length: $ => field(
        'length',
        $.integer
    ),

    _base_specifier: $ => field(
        'base_specifier',
        seq(token(new RegExp (BASE_SPECIFIER))),
    ),

    _base_specifier_immed: $ => field(
        'base_specifier',
        seq(token.immediate(new RegExp (BASE_SPECIFIER))),
    ),

    bit_value: $ => seq(
        choice(
            token.immediate(prec(3,new RegExp ('['+GRAPHIC_CHARACTER+BACKSLASH+']'))),
            alias(
                token.immediate(prec(3,new RegExp (UNDERLINE+'+'))),
                $.bit_value_error
            )
        ),
        repeat(choice(
            token.immediate(prec(3,new RegExp (UNDERLINE+'?['+GRAPHIC_CHARACTER+BACKSLASH+']'))),
            alias(
                token.immediate(prec(3,new RegExp (UNDERLINE+UNDERLINE+'+'))),
                $.bit_value_error
            )
        )),
    ),
    // }}}

    // 15.9 Comments {{{
    comment: $ => seq(
        token(prec(2,new RegExp('--.*['+VT+CR+LF+FF+']')))
    ),
    // }}}

    // 15.11 Tool directives {{{
    tool_directive: $ => token(prec(2,new RegExp('`[^'+VT+CR+LF+FF+']*'))),
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
            field('operator', choice(
                delimiter('->'),
                delimiter('<->'),
            )),
            field('right',$._PSL_Boolean_no_field),
        )
    ),
    // }}}

    // PSL 5.2.3 Built-in functions {{{
    PSL_Built_In_Function_Call: $ => prec(2,choice(
        seq(
            alias(
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
                $.PSL_Built_In_Function_Name
            ),
            '(',
            sepBy1(',', prec(1,choice($._PSL_Any_Type, $.PSL_Value_Set))),
            ')',
        ),
        seq(
            alias(
                reservedWord('ended'),
                $.PSL_Built_In_Function_Name
            ),
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
            field(
                'operator',
                choice(
                    delimiter('*'),
                    delimiter('+'),
                    delimiter('='),
                    delimiter('->')
                )
            ),
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

    // Favor VHDL expressions whenever possible
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
            field('operator', choice(
                delimiter('->'),
                delimiter('<->'),
            )),
            field('right', $._PSL_FL_Property),
        )
    ),

    PSL_Logical_FL_Property: $ => prec.left(
        PREC.LOGICAL,
        seq(
            field('left', $._PSL_FL_Property),
            field('operator',choice(
                reservedWord('and'),
                reservedWord('or'),
            )),
            field('right', $._PSL_FL_Property),
        )
    ),

    PSL_Factor_FL_Property: $ => prec.left(
        PREC.TERM,
        seq(
            field('operator', reservedWord('not')),
            field('argument', $._PSL_FL_Property)
        )
    ),

    // PSL 6.2.1.4 Extended next FL properties {{{
    PSL_Extended_Ocurrence_FL_Property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field(
                'operator',
                choice(
                    reservedWord('next'),
                    reservedWord('next_a'),
                    reservedWord('next_e'),
                    reservedWord('next_event'),
                    reservedWord('next_event_a'),
                    reservedWord('next_event_e'),
                    reservedWord('eventually'),
                )
            ),
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
            field('operator',choice(
                reservedWord('abort'),
                reservedWord('async_abort'),
                reservedWord('sync_abort'),
            )),
            $._PSL_Boolean,
        )
    ),

    PSL_Bounding_FL_Property: $ => prec.right(
        PREC.PSL_BOUNDING,
        seq(
            field('left', $._PSL_FL_Property),
            field('operator', token(prec(1,seq(
                choice(
                    new RegExp (caseInsensitive('before')),
                    new RegExp (caseInsensitive('until')),
                ),
                optional('!'),
                optional('_'),
            )))),
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
                field('operator',choice(
                    delimiter('|->'),
                    delimiter('|=>'),
                )),
                field('Property',$._PSL_FL_Property),
            )
        )
    ),

    PSL_Parameterized_Property: $ => seq(
        reservedWord('for'),
        $.PSL_Parameters_Definition,
        ':',
        field(
            'operation',
            choice(
                reservedWord('and'),
                reservedWord('or'),
            )
        ),
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
                prec.dynamic(99,$.PSL_Property_Instance),
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

    // 6.3 Property and sequence declarations {{{
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

    // 6.3.3 Instantiation {{{
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
        optional($._report),
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

    // 7.2 Verification units {{{
    _PSL_Verification_Unit: $ => choice(
        $.PSL_VUnit,
        $.PSL_VProp,
        $.PSL_VMode
    ),

    PSL_VUnit: $ => seq(
        reservedWord('vunit'),
        $._PSL_Identifier,
        $._PSL_Verification_Unit_Body
    ),

    PSL_VProp: $ => seq(
        reservedWord('vprop'),
        $._PSL_Identifier,
        $._PSL_Verification_Unit_Body
    ),

    PSL_VMode: $ => seq(
        reservedWord('vmode'),
        $._PSL_Identifier,
        $._PSL_Verification_Unit_Body
    ),

    _PSL_Verification_Unit_Body: $ => seq(
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
        $.PSL_HDL_Module_NAME,
        repeat(seq(
            choice(
                delimiter('.'),
                delimiter('/')
            ),
            $._simple_name
        ))
    ),

    PSL_HDL_Module_NAME: $ => seq(
        $._entity_name,
        optional(seq(
            '(',
            $._architecture_name,
            ')',
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
        $._declaration,
        $._sequential_statement,
        $._concurrent_statement,
        $._PSL_Verification_Unit,
        $._PSL_Declaration,
        $._PSL_Directive
    ]

})

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
