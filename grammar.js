const PREC = { // {{{
    // VHDL EXPRESSION
    REDUCTION            : 28,
    FACTOR               : 27,
    TERM                 : 26,
    SIGN                 : 25,
    SIMPLE_EXPRESSION    : 24,
    SHIFT_EXPRESSION     : 23,
    RELATION             : 22,
    LOGICAL              : 21,
    // PSL EXPRESSION
    PSL_UNION            : 20,
    PSL_CLOCK            : 19,
    PSL_SERE_REPEAT      : 18,
    PSL_SERE_WITHIN      : 17,
    PSL_SERE_AND         : 16,
    PSL_SERE_OR          : 15,
    PSL_FUSION           : 14,
    PSL_CONCAT           : 13,
    PSL_TERMINATION      : 12,
    PSL_OCURRENCE        : 11,
    PSL_BOUNDING         : 10,
    PSL_SEQ_IMPLICATION  : 9,
    PSL_BOOL_IMPLICATION : 8,
    PSL_INVARIANCE       : 7,

    CONSTANT_INTERFACE   : 3,
    VARIABLE_INTERFACE   : 2,
    SIGNAL_INTERFACE     : 1,
    ILLEGAL_INTERFACE    : -3,
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
// BACKSLASH and QUOTATION_MARK are intentionally
// missing. They have to be manullay added to the
// regex in places where they are needed
const SPECIAL_CHARACTER = '!'   +  // 0x21
                          //QUOTATION_MARK + // 0x22
                          '#-@' +  // 0x23 to 0x40
                          '\\['  + // 0x5B
                          //BACKSLASH + // 0x5C
                          '\\]-`'+ // 0x5D to 0x60
                          '\\{-~'+ // 0x7B to 0x7E
                          '¡-¿' +  // 0xA1 to 0xBF
                          '×'   +  // 0xD7
                          '÷'   ;  // 0xF7

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

const INTEGER = '[0-9](_?[0-9])*';

const STRING = [
 '\"(['+GRAPHIC_CHARACTER+BACKSLASH+']|'+DOUBLE_QUOTATION_MARK+')*\"'
];

const BIT_STRING_LITERAL = [
    '('+INTEGER+')?([uUsS]?[bBoOxX]|d)'+STRING
];

const BASED_LITERAL = [
    '['+EXTENDED_DIGIT+'](_?'+'['+EXTENDED_DIGIT+']'+')*'
];

const EXPONENT = [
    '[eE][\-\+]?'+INTEGER
];

const INTEGER_DECIMAL = [
    INTEGER+'('+EXPONENT+')?'
];

const REAL_DECIMAL = [
    INTEGER+'\\.'+INTEGER+'('+EXPONENT+')?'
];

const BASED_INTEGER = [
    INTEGER+'#'+BASED_LITERAL+'#'+'('+EXPONENT+')?'
];

const BASED_REAL = [
    INTEGER+'#'+BASED_LITERAL+'\\.'+BASED_LITERAL+'#'+'('+EXPONENT+')?'
];

// NOTE: Using regex to define the operators reduces the size of
// parser.c substancially

// nand, nor, and, or, xor, xnor
const LOGICAL_OPERATORS = [
    '[nN]?([aA][nN][dD]|[oO][rR])|[xX][nN]?[oO][rR]'
];

// ?>= ?>= ?> 
//  >=  >=  > 
// ?<= ?<= ?< 
//  <=  <=  < 
// ?/=  ?=
//  /=   =
const RELATION_OPERATORS = [
    '\\??([<>]=?|\\??\\\/?=)'
];

// sll sla srl sra ror rol
const SHIFT_OPERATORS = [
    '[sS][lLrR][lLaA]|[rR][oO][lLrR]'
];

// subset of commonly used named predefined character
const PREDEFINED_CHARACTER = [
'ht', 'vt', 'cr', 'lf', 'ff', 'nul', 'del',
];
// }}}

module.exports = grammar({
    name: 'vhdl',

    word: $ => $.identifier,

extras: $ => [ // {{{
    $.comment,
    new RegExp('['+SPACE_CHARACTER+FORMAT_EFFECTOR+']'),
], // }}}

inline: $ => [ // {{{
    $._subprogram_specification,               //  4.2.1
    $._subprogram_instantiation_declaration,   //  4.4
    $._scalar_type_definition,                 //  5.2
    $._composite_type_definition,              //  5.3
    $._array_type_definition,                  //  5.3.2
    $._index_constraint,                       //  5.3.2
    $._element_subtype_indication,             //  5.3.2
    $._discrete_range,                         //  5.3.2
    $._type_declaration,                       //  6.2
    $._type_definition,                        //  6.2
    $._constraint,                             //  6.3
    $._interface_package_generic_map_aspect,   //  6.5.5
    $._formal_designator,                      //  6.5.7
    $._generic_association_list,               //  6.5.7.2
    $._port_association_list,                  //  6.5.7.3
    $._attribute_designator,                   //  8.6
    $._external_name,                          //  8.7
    $._external_pathname,                      //  8.7
    $._literal,                                //  9.3.2
    $._enumeration_literal,                    //  5.5.2
    $._positional_element_association,         //  9.3.3
    $._numeric_literal,                        //  9.3.2
    $._concurrent_signal_assignment_statement, // 11.6
    $._instantiated_unit,                      // 11.7
    $._generate_parameter_specification,       // 11.8
    $._generate_statement,                     // 11.8
    $._abstract_literal,                       // 15.5

    $._PSL_vunit_item,                         // PSL 7.2
    $._HDL_module_name,                        // PSL 7.2

    $._boolean,                                // A.4.4

    // headers (aliases)
    $._entity_header,                          // 3.2
    $._subprogram_header,                      // 4.2.2
    $._package_header,                         // 4.7
    $._component_header,                       // 6.8
    $._block_header,                           // 11.2

    // expressions (for documentation purpose)
    $._file_open_kind_expression,              //  6.4.2.4
    $._file_logical_name,                      //  6.4.2.4
    $._sensitivity_clause,                     // 10.2
    $._condition_clause,                       // 10.2
    $._timeout_clause,                         // 10.2
    $._guard_condition,                        // 11.2
    $._severity,                               // TODO
    $._string_expression,                      // TODO

    // identifier aliases
    $._architecture_identifier,                //  3.3
    $._package_simple_name,                    //  4.8
    $._object_simple_name,                     //  8.8
    $._name_or_label,                          //  8.8
    $._simple_name,                            //  9
    $._loop_label,                             // 10.10
    $._generate_statement_label,               // 11.8
    $._label,                                  // 11.8
    $._end_label,                              // 11.8
    $._logical_name,                           // 13.2

    // name aliases
    $._uninstantiated_name,                    //  8
    $._entity_name,                            //  3.2
    $._subprogram_name,                        //  4.2.1
    $._type_mark,                              //  6.3
    $._alias_denotator,                        //  6.6
    $._component_name,                         //  6.8
    $._entity_tag,                             //  7.2
    $._prefix,                                 //  8
    $._suffix,                                 //  8.3
    $._signal_name,                            // 10.2
], // }}}

conflicts: $ => [ // {{{
    [$._declarative_item, $._primary_unit],
    [$._declarative_item, $._secondary_unit],
    [$._declarative_item, $._context_item],

    [$.procedure_instantiation_declaration, $.procedure_specification],
    [$.function_instantiation_declaration,  $.pure_function_specification],

    [$._illegal_interface_declaration, $._generic_interface_declaration],
    [$._illegal_interface_declaration, $._port_interface_declaration],
    [$._illegal_interface_declaration, $._procedure_interface_declaration],
    [$._illegal_interface_declaration, $._function_interface_declaration],

    [$.interface_constant_declaration,
     $.interface_signal_declaration,
     $.interface_variable_declaration],

    [$.interface_constant_declaration,
     $.interface_signal_declaration],

    [$._constant_mode,
     $._variable_mode,
     $._signal_mode],

    [$._constant_mode,
     $._signal_mode ],

    [$.generate_statement_body],
    [$.if_generate],
    [$.elsif_generate],
    [$.else_generate],
    [$.case_generate_alternative],

    [$.generic_clause],
    [$.generic_map_aspect],
    [$.port_clause],
    [$.port_map_aspect],

    [$._name, $.component_declaration],
    [$._name, $.subtype_indication],
    [$._name, $.subtype_indication, $.physical_literal],
    [$._name, $.record_element_resolution],

    [$.index_constraint, $.actual_designator],

    [$.parenthesized_expression, $._HDL_or_PSL_expression]
], // }}}

rules: {

    design_file: $ => repeat1(choice(
        $._labeled_concurrent_statement,
        $._labeled_sequential_statement,
        $._declarative_item,
        $.design_unit
    )),

    // 3.2 Entity declarations {{{
    entity_declaration: $ => seq(
        caseInsensitive('entity'),
        $.identifier,
        caseInsensitive('is'),
        optional($._entity_header),
        optional($.entity_declarative_part),
        optional(seq(
            'begin',
            optional($._entity_statement_part)
        )),
        caseInsensitive('end'),
        optional(caseInsensitive('entity')),
        optional($._end_simple_name),
        ';'
    ),

    entity_declarative_part: $ => repeat1(
        $._declarative_item
    ),

    _entity_statement_part: $ => alias(
        $.sequence_of_statements,
        $.entity_statement_part
    ),

    _entity_header: $ => alias(
        $._header,
        $.entity_header
    ),

    _entity_name: $ => field(
        'entity_name',
        choice(
            $._simple_name,
            $.selected_name
        ),
    ),
    // }}}

    // 3.3 Architecture bodies {{{
    architecture_body: $ => seq(
        caseInsensitive('architecture'),
        $.identifier,
        caseInsensitive('of'),
        $._entity_name,
        caseInsensitive('is'),
        optional($.architecture_declarative_part),
        caseInsensitive('begin'),
        optional($._architecture_statement_part),
        caseInsensitive('end'),
        optional(caseInsensitive('architecture')),
        optional($._end_simple_name),
        ';'
    ),

    architecture_declarative_part: $ => repeat1(
        $._declarative_item
    ),

    _architecture_statement_part: $ => alias(
        $._concurrent_statement_part,
        $.architecture_statement_part
    ),

    _architecture_identifier: $ => alias(
        $.identifier,
        $.architecture_identifier
    ),
    // }}}

    // 3.4 Configuration declarations {{{
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
        caseInsensitive('procedure'),
        $._designator,
        optional($._subprogram_header),
        optional($.formal_procedure_parameter_clause),
    ),

    pure_function_specification: $ => seq(
        optional(caseInsensitive('pure')),
        caseInsensitive('function'),
        $._designator,
        optional($._subprogram_header),
        optional($.formal_function_parameter_clause),
        // LINT: return Shall be presented
        optional($.return)
    ),

    impure_function_specification: $ => seq(
        caseInsensitive('impure'),
        caseInsensitive('function'),
        $._designator,
        optional($._subprogram_header),
        optional($.formal_function_parameter_clause),
        // LINT: return Shall be presented
        optional($.return)
    ),

    return: $ => seq(
        caseInsensitive('return'),
        $._type_mark,
    ),

    // LINT:
    // (subprogram_header (_ (semicolon)) ERROR
    _subprogram_header: $ => alias(
        $._header,
        $.subprogram_header
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

    _operator_symbol: $ => alias(
        $.string_literal,
        $.operator_symbol
    ),

    _subprogram_name: $ => field(
        'subprogram_name',
        $._name
    ),
    // }}}

    // 4.2.2.1 Formal parameter list {{{
    // ref formal_parameter_list
    formal_procedure_parameter_clause: $ => seq(
        optional(caseInsensitive('parameter')),
        '(',
        $._procedure_parameter_list,
        ')',
    ),

    formal_function_parameter_clause: $ => seq(
        optional(caseInsensitive('parameter')),
        '(',
        $._function_parameter_list,
        ')',
    ),
    // }}}

    // 4.3 Subprogram bodies {{{
    // LINT: function shall have a return statement
    //       procedure shall not have a return statement
    //       when end_designator is presented, it 
    //       shall be equal to designator
    subprogram_body: $ => seq(
        $._subprogram_specification,
        caseInsensitive('is'),
        optional($.subprogram_declarative_part),
        caseInsensitive('begin'),
        optional($._subprogram_statement_part),
        caseInsensitive('end'),
        optional($.subprogram_kind),
        optional($._end_designator),
        ';'
    ),

    subprogram_kind: $ => choice(
        caseInsensitive('procedure'),
        caseInsensitive('function')
    ),

    subprogram_declarative_part: $ => repeat1(
        $._declarative_item
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
        caseInsensitive('function'),
        $._designator,
        caseInsensitive('is'),
        caseInsensitive('new'),
        $._uninstantiated_name,
        optional($.signature),
        optional($.generic_map_aspect),
        ';'
    ),

    procedure_instantiation_declaration: $ => seq(
        caseInsensitive('procedure'),
        $._designator,
        caseInsensitive('is'),
        caseInsensitive('new'),
        $._uninstantiated_name,
        optional($.signature),
        optional($.generic_map_aspect),
        ';'
    ),
    // }}}

    // 4.5.3 Signatures {{{
    // LINT whitespace before signature shouldn't be allowed
    signature: $ => seq(
        '[',
        optional(seq(
            $._type_mark,
            repeat(seq(
                ',', $._type_mark
            )),
        )),
        optional($.return),
        ']'
    ),
    // }}}

    // 4.7 Package declarations {{{
    package_declaration: $ => seq(
        caseInsensitive('package'),
        $.identifier,
        caseInsensitive('is'),
        optional($._package_header),
        optional($.package_declarative_part),
        caseInsensitive('end'),
        optional(caseInsensitive('package')),
        optional(field('end_name',$._simple_name)),
        ';'
    ),

    _package_header: $ => alias(
        $._header,
        $.package_header
    ),

    package_declarative_part: $ => repeat1(
        $._declarative_item
    ),
    // }}}

    // 4.8 Package bodies {{{
    package_body: $ => seq(
        caseInsensitive('package'),
        caseInsensitive('body'),
        $._package_simple_name,
        caseInsensitive('is'),
        optional($.package_body_declarative_part),
        caseInsensitive('end'),
        optional(seq(
            caseInsensitive('package'),
            caseInsensitive('body'),
        )),
        optional($._end_simple_name),
        ';'
    ),

    package_body_declarative_part: $ => repeat1(
        $._declarative_item
    ),

    _package_simple_name: $ => alias(
        $.identifier,
        $.package_simple_name
    ),
    // }}}

    // 4.9 Package instantiation Declarations {{{
    package_instantiation_declaration: $ => seq(
        caseInsensitive('package'),
        $.identifier,
        caseInsensitive('is'),
        caseInsensitive('new'),
        $._uninstantiated_name,
        optional($.generic_map_aspect),
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
        caseInsensitive('range'),
        $._range
    ),

    _range: $ => choice(
        $.ascending_range,
        $.descending_range,
        alias(
            $._range_attribute_name,
            $.attribute_name
        ),
        alias(
            $._range_attribute_ambiguous_name,
            $.ambiguous_name
        ),
    ),

    _range_attribute_name: $ => prec(1,seq(
        $._prefix,
        $.range_attribute_designator,
    )),

    _range_attribute_ambiguous_name: $ => prec(1,seq(
        field('prefix',
            alias(
                $._range_attribute_name,
                $.attribute_name
            )
        ),
        '(',
        $.association_list,
        ')'
    )),

    ascending_range: $ => seq(
        field('low',$._simple_expression),
        caseInsensitive('to'),
        field('high',$._simple_expression),
    ),

    descending_range: $ => seq(
        field('high',$._simple_expression),
        caseInsensitive('downto'),
        field('low',$._simple_expression),
    ),
    // }}}

    // 5.2.2 Enumeration types {{{
    enumeration_type_definition: $ => seq(
        '(',
        $._enumeration_literal,
        repeat(seq(
            ',', $._enumeration_literal
        )),
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
        caseInsensitive('units'),
        $._primary_unit_declaration,
        repeat($.secondary_unit_declaration),
        caseInsensitive('end'),
        caseInsensitive('units'),
        optional($._end_simple_name)
    ),

    _primary_unit_declaration: $ => seq(
        field('primary_unit_name', $.identifier),
        ';'
    ),

    secondary_unit_declaration: $ => seq(
        field('secondary_unit_name', $.identifier),
        '=',
        $.physical_literal,
        ';'
    ),

    physical_literal: $ => prec(-1,seq(
        optional(
            field('coefficient', $._abstract_literal)
        ),
        field('unit_name', choice(
            $._simple_name,
            $.selected_name
        ))
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
        caseInsensitive('array'),
        '(',
        $.index_subtype_definition,
        repeat(seq(
            ',', $.index_subtype_definition
        )),
        ')',
        caseInsensitive('of'),
        $._element_subtype_indication
    ),

    constrained_array_definition: $ => seq(
        caseInsensitive('array'),
        '(',
        $.index_constraint,
        ')',
        caseInsensitive('of'),
        $._element_subtype_indication
    ),

    _element_subtype_indication: $ => alias(
        $.subtype_indication,
        $.element_subtype_indication
    ),

    index_subtype_definition: $ => seq(
        $._type_mark,
        caseInsensitive('range'),
        '<>'
    ),

    array_constraint: $ => prec.right(1,seq(
        $._index_constraint,
        optional($._array_element_constraint)
    )),

    _array_element_constraint: $ => alias(
        $._element_constraint,
        $.array_element_constraint
    ),

    _index_constraint: $ => seq(
        '(',
        choice(
            $.index_constraint,
            $.open
        ),
        ')'
    ),

    index_constraint: $ => seq(
        $._discrete_range,
        repeat(seq(
            ',', $._discrete_range
        )),
    ),

    // LINT: open is only allowed
    // in array constraint
    _discrete_range: $ => field(
        'discrete_range',
        choice(
            $.subtype_indication,
            $._range,
        )
    ),
    // }}}

    // 5.3.3 Record types {{{
    record_type_definition: $ => seq(
        caseInsensitive('record'),
        repeat1($.element_declaration),
        caseInsensitive('end'),
        caseInsensitive('record'),
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
        $.record_element_constraint,
        repeat(seq(
            ',',
            $.record_element_constraint,
        )),
        ')'
    ),

    identifier_list: $ => seq(
        $.identifier,
        repeat(seq(
            ',', $.identifier
        ))
    ),

    record_element_constraint: $ => seq(
        $._record_element_simple_name,
        $._element_constraint
    ),

    _record_element_simple_name: $ => prec(2,alias(
        $.identifier,
        $.record_element_simple_name
    )),
    // }}}

    // 5.4 Access types {{{
    access_type_definition: $ => seq(
        caseInsensitive('access'),
        $.subtype_indication
    ),
    // }}}

    // 5.5 File types {{{
    file_type_definition: $ => seq(
        caseInsensitive('file'),
        caseInsensitive('of'),
        $._type_mark
    ),
    // }}}

    // 5.4.2 Incomplete type declaration {{{
    incomplete_type_declaration: $ => seq(
        caseInsensitive('type'),
        $.identifier,
        ';'
    ),
    // }}}

    // 6. Declarations {{{
    _declarative_item: $ => choice(
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
        //$.configuration_specification,
        //$.disconnection_specification,
        $.use_clause,
        //$.group_template_declaration,
        //$.group_declaration,
        //
        $._PSL_declaration
    ),
    // }}}

    // 6.2 Type declarations {{{
    _type_declaration: $ => choice(
        $.full_type_declaration,
        $.incomplete_type_declaration,
    ),

    full_type_declaration: $ => seq(
        caseInsensitive('type'),
        $.identifier,
        caseInsensitive('is'),
        $._type_definition,
        ';'
    ),

    _type_definition: $ => choice(
        $._scalar_type_definition,
        $._composite_type_definition,
        $.access_type_definition,
        $.file_type_definition,
        //$.protected_type_definition
    ),
    // }}}

    // 6.3 Subtype declaration {{{
    subtype_declaration: $ => seq(
        caseInsensitive('subtype'),
        $.identifier,
        caseInsensitive('is'),
        $.subtype_indication,
        ';'
    ),

    subtype_indication: $ => prec.dynamic(-1,seq(
        optional($._resolution_indication),
        $._type_mark,
        optional($._constraint)
    )),

    _resolution_indication: $ => prec(-2,choice(
        field(
            'resolution_function_name',
            choice(
                $._simple_name,
                $.selected_name
            )
        ),
        seq(
            '(',
            $._element_resolution,
            ')'
        )
    )),

    _element_resolution: $ => choice(
        $.array_element_resolution,
        $.record_resolution
    ),

    record_resolution: $ => seq(
        $.record_element_resolution,
        repeat(seq(
            ',',
            $.record_element_resolution
        ))
    ),

    record_element_resolution: $ => seq(
        $._simple_name,
        $._resolution_indication
    ),

    array_element_resolution: $ => $._resolution_indication,

    _type_mark: $ => field('type_mark', choice(
        $._simple_name,
        $.selected_name,
        $.attribute_name,
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
        caseInsensitive('constant'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        $._default_expression,
        ';'
    ),

    deferred_constant_declaration: $ => seq(
        caseInsensitive('constant'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        ';'
    ),
    // }}}

    // 6.4.2.3 Signal declarations {{{
    signal_declaration: $ => seq(
        caseInsensitive('signal'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($.signal_kind),
        optional($._default_expression),
        ';'
    ),

    signal_kind: $ => choice(
        $.register,
        $.bus
    ),

    register: $ => caseInsensitive('register'),
    bus: $ => caseInsensitive('bus'),
    // }}}

    // 6.4.2.4 Variable declarations {{{
    variable_declaration: $ => seq(
        caseInsensitive('variable'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($._default_expression),
        ';'
    ),

    shared_variable_declaration: $ => seq(
        caseInsensitive('shared'),
        caseInsensitive('variable'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($._default_expression),
        ';'
    ),
    // }}}

    // 6.4.2.4 Variable declarations {{{
    file_declaration: $ => seq(
        caseInsensitive('file'),
        $.identifier_list,
        ':',
        $.subtype_indication,
        optional($.file_open_information),
        ';'
    ),

    file_open_information: $ => seq(
        optional(seq(
            caseInsensitive('open'),
            $._file_open_kind_expression,
        )),
        caseInsensitive('is'),
        $._file_logical_name
    ),

    _file_open_kind_expression: $ => field(
        'file_open_kind',
        $._expression
    ),

    _file_logical_name: $ => field(
        'file_logical_name',
        $._string_expression
    ),
    // }}}

    // 6.5.3 Interface type declarations {{{
    interface_type_declaration: $ => seq(
        caseInsensitive('type'),
        $.identifier
    ),
    // }}}

    // 6.5.4 Interface subprogram declarations {{{
    interface_subprogram_declaration: $ => seq(
        $._subprogram_specification,
        optional(seq(
            caseInsensitive('is'),
            $.interface_subprogram_default
        ))
    ),

    interface_subprogram_default: $ => choice(
        $._subprogram_name,
        $._same
    ),

    _same: $ => alias(
        '<>',
        $.same
    ),
    // }}}

    // 6.5.6.2 Generic clauses {{{
    // LINT: semicolon shall always be presented on generic claus
    generic_clause: $ => seq(
        caseInsensitive('generic'),
        '(',
        $.generic_interface_list,
        ')',
        optional($.semicolon)
    ),
    // }}}

    // 6.5.6.3 Port clauses {{{
    // LINT: semicolon shall always be presented on port_clause
    port_clause: $ => seq(
        caseInsensitive('port'),
        '(',
        $.port_interface_list,
        ')',
        optional($.semicolon)
    ),
    // }}}

    // 6.5.7 Association lists {{{
    association_list: $ => seq(
        $._association_element,
        repeat(seq(
            ',', $._association_element
        ))
    ),

    _association_element: $ => choice(
        $.named_association_element,
        $.positional_association_element
    ),

    named_association_element: $ => seq(
        $.formal_part,
        '=>',
        $.actual_part
    ),

    positional_association_element: $ => $.actual_part,

    formal_part: $ => choice(
        $._formal_designator,
        $.ambiguous_name,
    ),

    _formal_designator: $ => alias(
        $.identifier,
        $.formal_designator
    ),

    actual_part: $ => choice(
        $.actual_designator
    ),

    actual_designator: $ => choice(
        $._expression,
        $.subtype_indication,
        $.open
    ),

    open: $ => caseInsensitive('open'),
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
        $._illegal_interface_declaration,
    ),

    // See 6.5.2 and 4.2.2.1
    _function_interface_declaration: $ => choice(
        $.interface_constant_declaration,
        $.interface_signal_declaration,
        $.interface_file_declaration,
        $._illegal_interface_declaration
    ),

    _procedure_interface_declaration: $ => choice(
        $.interface_constant_declaration,
        $.interface_signal_declaration,
        $.interface_variable_declaration,
        $.interface_file_declaration,
        $._illegal_interface_declaration
    ),
    // }}}

    // 6.5.2 Interface object declarations {{{
    interface_constant_declaration: $ => prec.dynamic(
        PREC.CONSTANT_INTERFACE,
        seq(
            optional(alias(
                caseInsensitive('constant'),
                $.object_class
            )),
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
            optional(alias(
                caseInsensitive('signal'),
                $.object_class
            )),
            $.identifier_list,
            ':',
            optional(alias($._signal_mode, $.mode)),
            $.subtype_indication,
            // LINT, only bus allowed
            optional($.signal_kind),
            optional($._default_expression)
        )
    ),

    interface_variable_declaration: $ => prec.dynamic(
        PREC.VARIABLE_INTERFACE,
        seq(
            optional(alias(
                caseInsensitive('variable'),
                $.object_class
            )),
            $.identifier_list,
            ':',
            optional(alias($._variable_mode, $.mode)),
            $.subtype_indication,
            optional($._default_expression)
        )
    ),

    interface_file_declaration: $ => seq(
        caseInsensitive('file'),
        $.identifier_list,
        ':',
        $.subtype_indication
    ),

    in: $ => caseInsensitive('in'),
    out: $ => caseInsensitive('out'),
    inout: $ => caseInsensitive('inout'),
    buffer: $ => caseInsensitive('buffer'),
    linkage: $ => caseInsensitive('linkage'),

    _constant_mode: $ => choice(
        prec.dynamic( 1,$.in),
        prec.dynamic(-3,$.out),
        prec.dynamic(-3,$.inout),
        prec.dynamic(-3,$.buffer),
        prec.dynamic(-3,$.linkage),
    ),

    _variable_mode: $ => choice(
        prec.dynamic( 1,$.in),
        prec.dynamic( 1,$.out),
        prec.dynamic( 1,$.inout),
        prec.dynamic(-2,$.buffer),
        prec.dynamic(-2,$.linkage),
    ),

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

    // 6.5.5 Interface package declarations {{{
    interface_package_declaration: $ => seq(
        caseInsensitive('package'),
        $.identifier,
        caseInsensitive('is'),
        caseInsensitive('new'),
        $._uninstantiated_name,
        $._interface_package_generic_map_aspect
    ),

    _interface_package_generic_map_aspect: $ => alias(
        $.generic_map_aspect,
        $.interface_package_generic_map_aspect
    ),
    // }}}

    // 6.5.7.2 Generic map aspects {{{
    generic_map_aspect: $ => seq(
        caseInsensitive('generic'),
        caseInsensitive('map'),
        '(',
        choice(
            $._generic_association_list,
            $.default,
            $._any
        ),
        ')',
        optional($.semicolon),
    ),

    default: $ => caseInsensitive('default'),

    _any: $ => alias(
        '<>',
        $.any
    ),

    _generic_association_list: $ => alias(
        prec.dynamic(1, $.association_list),
        $.generic_association_list
    ),

    // }}}

    // 6.5.7.3 Port map aspects {{{
    port_map_aspect: $ => seq(
        caseInsensitive('port'),
        caseInsensitive('map'),
        '(',
        choice(
            $._port_association_list,
        ),
        ')',
        optional($.semicolon)
    ),

    _port_association_list: $ => alias(
        $.association_list,
        $.port_association_list
    ),
    // }}}

    // 6.5.6.1 Interface lists {{{
    generic_interface_list: $ => seq(
        $._generic_interface_declaration,
        repeat(seq(
            ';', $._generic_interface_declaration
        ))
    ),

    port_interface_list: $ => seq(
        $._port_interface_declaration,
        repeat(seq(
            ';', $._port_interface_declaration
        ))
    ),

    _procedure_parameter_list: $ => seq(
        $._procedure_interface_declaration,
        repeat(seq(
            ';', $._procedure_interface_declaration
        ))
    ),

    _function_parameter_list: $ => seq(
        $._function_interface_declaration,
        repeat(seq(
            ';', $._function_interface_declaration
        ))
    ),
    // }}}

    // HEADER {{{
    // Check if semicolon shall or shall not be present on
    // highlight file
    semicolon : $ => token(';'),

    _header: $ => choice(
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
    // }}}

    // 6.6 Alias declarations {{{
    alias_declaration: $ => seq(
        caseInsensitive('alias'),
        $._alias_designator,
        optional(seq(
            ':',
            $.subtype_indication
        )),
        caseInsensitive('is'),
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
        caseInsensitive('attribute'),
        $.identifier,
        ':',
        $._type_mark,
        ';'
    ),
    // }}}

    // 6.8 Component declarations {{{
    component_declaration: $ => seq(
        caseInsensitive('component'),
        $.identifier,
        optional(caseInsensitive('is')),
        optional($._component_header),
        caseInsensitive('end'),
        caseInsensitive('component'),
        optional($._end_simple_name),
        ';'
    ),

    _component_header: $ => alias(
        $._header,
        $.component_header
    ),

    _component_name: $ => field(
        'component_name',
        $._name
    ),
    // }}}

    // 7.2 Specifications {{{
    attribute_specification: $ => seq(
        caseInsensitive('attribute'),
        alias(
            $.identifier,
            $.attribute_designator
        ),
        caseInsensitive('of'),
        $.entity_specification,
        caseInsensitive('is'),
        $._expression,
        ';'
    ),

    entity_specification: $ => seq(
        $.entity_name_list,
        ':',
        $.entity_class
    ),

    entity_class: $ => choice(
      caseInsensitive('entity'),
      caseInsensitive('architecture'),
      caseInsensitive('configuration'),
      caseInsensitive('procedure'),
      caseInsensitive('function'),
      caseInsensitive('package'),
      caseInsensitive('type'),
      caseInsensitive('subtype'),
      caseInsensitive('constant'),
      caseInsensitive('signal'),
      caseInsensitive('variable'),
      caseInsensitive('component'),
      caseInsensitive('label'),
      caseInsensitive('literal'),
      caseInsensitive('units'),
      caseInsensitive('group'),
      caseInsensitive('file'),
      caseInsensitive('property'),
      caseInsensitive('sequence'),
    ),

    entity_name_list: $ => choice(
        seq(
            $.entity_designator,
            repeat(seq(
                ',', $.entity_designator
            ))
        ),
        $.others,
        $.all
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

    // 8 Names {{{
    _name: $ => choice(
        $._simple_name,
        $._operator_symbol,
        $.character_literal,
        $.selected_name,
        $.attribute_name,
        $._external_name,
        $.ambiguous_name,
    ),

    _uninstantiated_name: $ => field(
        'uninstantiated',
        $._simple_name,
        $._operator_symbol,
        $.selected_name,
    ),

    _prefix: $ => field(
        'prefix',
        $._name
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

    _suffix: $ => field(
        'suffix',
        choice(
            $._simple_name,
            $.character_literal,
            $._operator_symbol,
            $.all
        )
    ),

    all: $ => caseInsensitive('all'),
    // }}}

    // 8.4-5 Ambiguous names {{{
    // LINT: operator symbol and PSL built ins
    //       shall have positional association list
    ambiguous_name: $ => seq(
        $._prefix,
        '(',
        optional(choice(
            prec.dynamic(
                -1,
                $.index_constraint
            ),
            $.association_list,
        )),
        ')'
    ),
    // }}}

    // 8.6 Attribute names {{{
    attribute_name: $ => seq(
        $._prefix,
        optional($.signature),
        $._attribute_designator
    ),

    _attribute_designator: $ => choice(
        $.range_attribute_designator,
        $.attribute_designator
    ),

    range_attribute_designator: $ => token.immediate(
        new RegExp ('\'([rR][eE][vV][eE][rR][sS][eE]_)?[rR][aA][nN][gG][eE]')
    ),

    attribute_designator: $ => token.immediate(
        new RegExp ('\''+IDENTIFIER)
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
        caseInsensitive('constant'),
        $._external_pathname,
        ':',
        $.subtype_indication,
        '>>'
    ),

    external_signal_name: $ => seq(
        '<<',
        caseInsensitive('signal'),
        $._external_pathname,
        ':',
        $.subtype_indication,
        '>>'
    ),

    external_variable_name: $ => seq(
        '<<',
        caseInsensitive('variable'),
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

    package_pathname: $ => seq(
        '@',
        $._logical_name,
        '.',
        $._package_simple_name,
        '.',
        repeat(seq(
            $._package_simple_name, '.'
        )),
        $._object_simple_name
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
        $._object_simple_name
    ),

    pathname_element: $ => choice(
        $._name_or_label,
        alias(
            $._generate_statement_element,
            $.ambiguous_name
        )
    ),

    _generate_statement_element: $ => seq(
        field('prefix', $._generate_statement_label),
        '(',
        $.association_list,
        ')'
    ),

    _object_simple_name: $ => alias(
        $.identifier,
        $.object_simple_name
    ),

    _name_or_label: $ => alias(
        $.identifier,
        $.name_or_label
    ),
    // }}}

    // 9 Expressions {{{
    // LINT: errors _string_expression shall be detected with linting
    _string_expression: $ => $._expression,

    _severity: $ => $._expression,

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
        caseInsensitive('intertial'),
        $._expression
    ),

    _simple_expression: $ => choice(
        $._expression,
    ),

    _expression: $ => choice(
        $.condition,
        $.logical_expression,
        $.relation,
        $.shift_expression,
        $.simple_expression,
        $.concatenation,
        $.sign,
        $.term,
        $.factor,
        $.exponentiation,
        $.reduction,
        $._primary,
    ),

    // VHDL operations {{{
    condition: $ => seq(
        '??', $._primary
    ),

    logical_expression: $ => prec.left(
        PREC.LOGICAL,
        seq(
            field('left', $._expression),
            field('operator', new RegExp (LOGICAL_OPERATORS)),
            field('right', $._expression),
        )
    ),

    relation: $ => prec.left(
        PREC.RELATION,
        seq(
            field('left', $._expression),
            field('operator', new RegExp (RELATION_OPERATORS)),
            field('right', $._expression)
        )
    ),

    shift_expression: $ => prec.left(
        PREC.SHIFT_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator', new RegExp (SHIFT_OPERATORS)),
            field('right',$._expression)
        )
    ),

    concatenation: $ => prec.left(
        PREC.SIMPLE_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator','&'),
            field('right',$._expression),
        )
    ),

    simple_expression: $ => prec.left(
        PREC.SIMPLE_EXPRESSION,
        seq(
            field('left',$._expression),
            field('operator', choice('+','-')),
            field('right',$._expression),
        )
    ),

    //// LINT: Sign is only allowed on left
    sign: $ => prec(
        PREC.SIGN,
        seq(
            field('operator',choice('-','+')),
            field('argument',$._expression)
        )
    ),

    term: $ => prec.left(
        PREC.TERM,
        seq(
            field('left',$._expression),
            field('operator',choice(
                '*',
                '/',
                caseInsensitive('rem'),
                caseInsensitive('mod')
            )),
            field('right',$._expression),
        )
    ),

    factor: $ => prec.left(
        PREC.FACTOR,
        seq(
            field('operator', choice(
                caseInsensitive('abs'),
                caseInsensitive('not')
            )),
            field('argument',$._primary)
        )
    ),

    exponentiation: $ => prec.left(
        PREC.FACTOR,
        seq(
            field('left',$._primary),
            field('operator','**'),
            field('right',$._primary)
        )
    ),

    reduction: $ => prec.left(
        PREC.REDUCTION,
        seq(
            field('operator', new RegExp (LOGICAL_OPERATORS)),
            field('argument',$._primary)
        )
    ),
    // }}}
    // }}}

    // 9.1 Expressions - Primaries {{{
    _primary: $ => prec(3,choice(
        $._literal,
        $._name,
        $.qualified_expression,
        $.allocator,
        $.parenthesized_expression,
        $.aggregate,
    )),

    parenthesized_expression: $ => seq(
        '(',
        $._expression,
        ')'
    ),
    // }}}

    // 9.3.2 Literals {{{
    _literal: $ => choice(
        $._numeric_literal,
        $.character_literal,
        $.severity_level,
        $.string_literal,
        $.bit_string_literal,
        $.null,
        $.infinite // PSL literal
    ),

    severity_level: $ => token(choice(
        caseInsensitive('error'),
        caseInsensitive('note'),
        caseInsensitive('warning'),
        caseInsensitive('failure')
    )),

    null: $ => caseInsensitive('null'),

    infinite: $ => caseInsensitive('inf'),

    _numeric_literal: $ => choice(
        $._abstract_literal,
        $.physical_literal
    ),
    // }}}

    // 9.3.3 Aggregates {{{
    aggregate: $ => choice(
        seq(
            '(',
            $._positional_element_association,
            repeat1(seq(
                ',', $._element_association
            )),
            ')'
        ),
        seq(
            '(',
            $.named_element_association,
            repeat(seq(
                ',', $._element_association
            )),
            ')'
        ),
    ),

    _element_association: $ => choice(
        $.named_element_association,
        $._positional_element_association,
    ),

    named_element_association: $ => seq(
        $.choices,
        '=>',
        $._expression
    ),

    choices: $ => seq(
        $._choice,
        repeat(seq(
            '|', $._choice
        ))
    ),

    // NOTE
    // (_choice (simple_name))
    // shall be (_name (simple_name))
    // shall not be (discrete_range (subtype_indication (simple_name)))
    _choice: $ => choice(
        $._simple_expression,
        field('discrete_range',$._range),
        $.others,
    ),

    others: $ => caseInsensitive('others'),

    _positional_element_association: $ => alias(
        $._expression,
        $.positional_element_association
    ),
    // }}}

    // 9.3.5 Qualified expression {{{
    qualified_expression: $ => seq(
        $._type_mark,
        token.immediate('\''),
        choice(
            $.aggregate,
            $.parenthesized_expression
        )
    ),
    // }}}

    // 9.3.7 Allocators {{{
    allocator: $ => seq(
        caseInsensitive('new'),
        choice(
            $.subtype_indication,
            $.qualified_expression
        )
    ),
    // }}}

    // 10.1 Sequential statements {{{
    sequence_of_statements: $ => repeat1(
        $._labeled_sequential_statement
    ),

    _labeled_sequential_statement: $ => seq(
        optional($._label),
        $._sequential_statement,
    ),

    // LINT: PSL directive is only allowed on entity_statement_part
    _sequential_statement: $ => choice(
        $.wait_statement,
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
        $._PSL_directive
    ),
    // }}}

    // 10.2 Wait statement {{{
    wait_statement: $ => seq(
        caseInsensitive('wait'),
        optional($._sensitivity_clause),
        optional($._condition_clause),
        optional($._timeout_clause),
        ';'
    ),

    _sensitivity_clause: $ => seq(
        caseInsensitive('on'),
        field(
            'on',
            $.sensitivity_list
        )
    ),

    _condition_clause: $ => seq(
        caseInsensitive('until'),
        field(
            'until',
            $._expression
        )
    ),

    _timeout_clause: $ => seq(
        caseInsensitive('for'),
        field(
            'for',
            $._expression
        )
    ),

    sensitivity_list: $ => seq(
        $._signal_name,
        repeat(seq(
            ',', $._signal_name
        ))
    ),

    // LINT: all shall be on process_sensitivity_list only
    _signal_name: $ => 
    choice(
        $.all,
        field(
            'signal_name',
            $._name
        ),
    ),
    // }}}

    // 10.4 Report statement {{{
    report_statement: $ => seq(
        caseInsensitive('report'),
        field('report', $._string_expression),
        optional(seq(
            caseInsensitive('severity'),
            field('severity', $._severity)
        )),
        ';'
    ),
    // }}}

    // 10.5 Signal assignment statement {{{
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
        $._target,
        '<=',
        optional($.delay_mechanism),
        $._waveform,
        ';'
    ),

    simple_force_assignment: $ => seq(
        $._target,
        '<=',
        caseInsensitive('force'),
        optional($.force_mode),
        field('value',$._expression),
        ';'
    ),

    simple_release_assignment: $ => seq(
        $._target,
        '<=',
        caseInsensitive('release'),
        optional($.force_mode),
        ';'
    ),

    force_mode: $ => choice(
        alias(caseInsensitive('in'),$.in),
        alias(caseInsensitive('out'),$.out)
    ),

    delay_mechanism: $ => choice(
        $.transport,
        $.reject,
        $.inertial
    ),

    transport: $ => caseInsensitive('transport'),

    reject: $ => seq(
        caseInsensitive('reject'),
        field('pulse_limit', $._expression),
        caseInsensitive('inertial')
    ),

    inertial: $ => caseInsensitive('inertial'),

    _target: $ => field(
        'target',
        choice(
            $._name,
            $.aggregate
        )
    ),

    _waveform: $ => choice(
        $.unaffected,
        seq(
            $.waveform_element,
            repeat(seq(
                ',', $.waveform_element,
            ))
        )
    ),

    unaffected: $ => caseInsensitive('unaffected'),

    waveform_element: $ => seq(
        field('value', $._expression),
        optional(seq(
            caseInsensitive('after'),
            field('after', $._expression)
        ))
    ),
    // }}}

    // 10.5.3 Conditonal signal assignments {{{
    _conditional_signal_assignment: $ => choice(
        $.conditional_waveform_assignment,
        $.conditional_force_assignment
    ),

    conditional_waveform_assignment: $ => seq(
        $._target,
        '<=',
        optional($.delay_mechanism),
        $.conditional_waveforms,
        ';'
    ),

    conditional_waveforms: $ => seq(
        $._waveform,
        caseInsensitive('when'),
        $._condition,
        repeat($.alternative_conditional_waveform),
    ),

    // LINT: condition must be present in all but last but last repetition
    alternative_conditional_waveform: $ => seq(
        caseInsensitive('else'),
        $._waveform,
        optional(seq(
            caseInsensitive('when'),
            $._condition,
        ))
    ),

    conditional_force_assignment: $ => seq(
        $._target,
        '<=',
        caseInsensitive('force'),
        optional($.force_mode),
        $.conditional_expressions,
        ';'
    ),

    conditional_expressions: $ => seq(
        field('value',$._expression),
        caseInsensitive('when'),
        $._condition,
        repeat($.alternative_conditional_expression),
    ),

    // LINT: condition must be present in all but last but last repetition
    alternative_conditional_expression: $ => seq(
        caseInsensitive('else'),
        field('value',$._expression),
        optional(seq(
            caseInsensitive('when'),
            $._condition,
        ))
    ),

    _when: $ => field(
        'when',
        $._expression,
    ),
    // }}}

    // 10.5.4 Selected signal assignments {{{
    _selected_signal_assignment: $ => choice(
        $.selected_waveform_assignment,
        $.selected_force_assignment
    ),

    selected_waveform_assignment: $ => seq(
        caseInsensitive('with'),
        field('expression',$._expression),
        caseInsensitive('select'),
        optional('?'),
        $._target,
        '<=',
        optional($.delay_mechanism),
        $.selected_waveforms,
        ';'
    ),

    selected_waveforms: $ => seq(
        $._waveform,
        caseInsensitive('when'),
        $.choices,
        repeat($.alternative_selected_expressions)
    ),

    alternative_selected_expressions: $ => seq(
        ',',
        $._waveform,
        caseInsensitive('when'),
        $.choices
    ),

    selected_force_assignment: $ => seq(
        caseInsensitive('with'),
        field('expression',$._expression),
        caseInsensitive('select'),
        optional('?'),
        $._target,
        '<=',
        caseInsensitive('force'),
        optional($.force_mode),
        $.selected_expressions,
        ';'
    ),

    selected_expressions: $ => seq(
        field('value',$._expression),
        caseInsensitive('when'),
        $.choices,
        repeat($.alternative_selected_expressions)
    ),

    alternative_selected_expressions: $ => seq(
        ',',
        $._expression,
        caseInsensitive('when'),
        $.choices
    ),
    // }}}

    // 10.6 Variable assignment statement {{{
    _variable_assignment_statement: $ => choice(
        $.simple_variable_assignment,
        $.conditional_variable_assignment,
        $.selected_variable_assignment
    ),
    // }}}

    // 10.6.2 Simple variable assignments {{{
    simple_variable_assignment: $ => seq(
        $._target,
        ':=',
        field('value', $._expression),
        ';'
    ),
    // }}}

    // 10.6.3 Conditional variable assignments {{{
    conditional_variable_assignment: $ => seq(
        $._target,
        ':=',
        $.conditional_expressions,
        ';'
    ),
    // }}}

    // 10.6.4 Selected variable assignments {{{
    selected_variable_assignment: $ => seq(
        caseInsensitive('with'),
        field('expression',$._expression),
        caseInsensitive('select'),
        optional('?'),
        $._target,
        ':=',
        $.selected_expressions,
        ';'
    ),
    // }}}

    // 10.7 Procedure call statement {{{
    procedure_call_statement: $ => seq(
        $._name,
        ';'
    ),
    // }}}

    // 10.8 If statement {{{
    if_statement: $ => seq(
        caseInsensitive('if'),
        $._condition,
        caseInsensitive('then'),
        optional($.sequence_of_statements),
        repeat($.elsif),
        optional($.else),
        caseInsensitive('end'),
        caseInsensitive('if'),
        optional($._end_label),
        ';'
    ),

    elsif: $ => seq(
        caseInsensitive('elsif'),
        $._condition,
        caseInsensitive('then'),
        optional($.sequence_of_statements)
    ),

    else: $ => seq(
        caseInsensitive('else'),
        optional($.sequence_of_statements)
    ),

    _condition: $ => alias(
        $._expression,
        $.condition
    ),
    // }}}

    // 10.9 Case statement {{{
    // LINT: matching case statement
    case_statement: $ => seq(
        caseInsensitive('case'),
        optional('?'),
        field('discrete_type',$._expression),
        caseInsensitive('is'),
        repeat1($.case_statement_alternative),
        caseInsensitive('end'),
        caseInsensitive('case'),
        optional('?'),
        optional($._end_label),
        ';'
    ),

    case_statement_alternative: $ => seq(
        caseInsensitive('when'),
        $.choices,
        '=>',
        optional($.sequence_of_statements)
    ),
    // }}}

    // 10.10 Loop statement {{{
    loop_statement: $ => seq(
        optional($._iteration_scheme),
        caseInsensitive('loop'),
        optional($.sequence_of_statements),
        caseInsensitive('end'),
        caseInsensitive('loop'),
        optional($._end_label),
        ';'
    ),

    _iteration_scheme: $ => choice(
        $.while_loop,
        $.for_loop
    ),

    while_loop: $ => seq(
        caseInsensitive('while'),
        $._condition
    ),

    for_loop: $ => seq(
        caseInsensitive('for'),
        $.parameter_specification
    ),

    parameter_specification: $ => seq(
        $.identifier,
        caseInsensitive('in'),
        $._discrete_range
    ),

    _loop_label: $ => alias(
        $.identifier,
        $.loop_label
    ),
    // }}}

    // 10.11 Next statement {{{
    next_statement: $ => seq(
        caseInsensitive('next'),
        optional($._loop_label),
        optional(seq(
            caseInsensitive('when'),
            $._when
        )),
        ';'
    ),
    // }}}

    // 10.12 Exit statement {{{
    exit_statement: $ => seq(
        caseInsensitive('exit'),
        optional($._loop_label),
        optional(seq(
            caseInsensitive('when'),
            $._when
        )),
        ';'
    ),
    // }}}

    // 10.13 Return statement {{{
    return_statement: $ => seq(
        caseInsensitive('return'),
        optional($._expression),
        ';'
    ),
    // }}}

    // 10.14 Null statement {{{
    null_statement: $ => seq(
        caseInsensitive("null"),
        ';'
    ),
    // }}}

    // 11.1 Concurrent statements {{{
    // separate the labeled rule
    _concurrent_statement_part: $ => repeat1(
        $._labeled_concurrent_statement
    ),

    _labeled_concurrent_statement: $ => seq(
        optional($._label),
        choice(
            $._postponed_concurrent_statement,
            $._concurrent_statement,
        )
    ),

    _concurrent_statement: $ => prec(1,choice(
        $.block_statement,
        $.process_statement,
        $.concurrent_procedure_call_statement,
        $._concurrent_signal_assignment_statement,
        $.component_instantiation_statement,
        $._generate_statement,
        $._PSL_directive,
    )),

    _postponed_concurrent_statement: $ => seq(
        caseInsensitive('postponed'),
        choice(
            alias(
                $.process_statement,
                $.postponed_process_statement
            ),
            alias(
                $.concurrent_procedure_call_statement,
                $.postponed_concurrent_procedure_call_statement
            ),
            alias(
                $.PSL_assertion_directive,
                $.postponed_concurrent_assertion_statement
            ),
            alias(
                $.concurrent_simple_signal_assignment,
                $.postponed_concurrent_simple_signal_assignment
            ),
            alias(
                $.concurrent_conditional_signal_assignment,
                $.postponed_concurrent_conditional_signal_assignment
            ),
            alias(
                $.concurrent_selected_signal_assignment,
                $.postponed_concurrent_selected_signal_assignment
            ),
            // TODO illegal
        )
    ),

    postponed: $ => caseInsensitive('postponed'),
    // }}}

    // 11.2 Block statement {{{
    // LINT: Label shall be presented
    block_statement: $ => seq(
        caseInsensitive('block'),
        optional(seq(
            '(', $._guard_condition, ')'
        )),
        optional(caseInsensitive('is')),
        optional($._block_header),
        optional($.block_declarative_part),
        caseInsensitive('begin'),
        optional($._block_statement_part),
        caseInsensitive('end'),
        caseInsensitive('block'),
        optional($._end_label),
        ';'
    ),

    _guard_condition: $ => field(
        'guard_condition',
        $._expression
    ),

    _block_header: $ => alias(
        $._header,
        $.block_header
    ),

    block_declarative_part: $ => repeat1(
        $._declarative_item
    ),

    _block_statement_part: $ => alias(
        $._concurrent_statement_part,
        $.block_statement_part
    ),
    // }}}

    // 11.3 Process statement {{{
    process_statement: $ => seq(
        caseInsensitive('process'),
        optional(seq(
            '(', $._process_sensitivity_list, ')'
        )),
        optional(caseInsensitive('is')),
        optional($.process_declarative_part),
        caseInsensitive('begin'),
        optional($._process_statement_part),
        caseInsensitive('end'),
        optional($.postponed),
        caseInsensitive('process'),
        optional($._end_label),
        ';'
    ),

    _process_sensitivity_list: $ => alias(
        $.sensitivity_list,
        $.process_sensitivity_list
    ),

    process_declarative_part: $ => repeat1(
        $._declarative_item
    ),

    _process_statement_part: $ => alias(
        $.sequence_of_statements,
        $.process_statement_part
    ),
    // }}}

    // 11.4 Concurrent procedure call statements {{{
    concurrent_procedure_call_statement: $ => prec(1,seq(
        $._name,
        ';'
    )),
    // }}}

    // 11.6 Concurrent signal assignment statements {{{
    _concurrent_signal_assignment_statement: $ => choice(
         $.concurrent_simple_signal_assignment,
         $.concurrent_conditional_signal_assignment,
         $.concurrent_selected_signal_assignment
    ),

    concurrent_simple_signal_assignment: $ => prec(1,seq(
        $._target,
        '<=',
        optional($.guarded),
        optional($.delay_mechanism),
        $._waveform,
        ';'
    )),

    concurrent_conditional_signal_assignment: $ => prec(1,seq(
        $._target,
        '<=',
        optional($.guarded),
        optional($.delay_mechanism),
        $.conditional_waveforms,
        ';'
    )),

    concurrent_selected_signal_assignment: $ => prec(1,seq(
        caseInsensitive('with'),
        field('expression',$._expression),
        caseInsensitive('select'),
        optional('?'),
        $._target,
        '<=',
        optional($.guarded),
        optional($.delay_mechanism),
        $.selected_waveforms,
        ';'
    )),

    guarded: $ => caseInsensitive('guarded'),
    // }}}

    // 11.7 Component instantiation statements {{{
    component_instantiation_statement: $ => seq(
        $._instantiated_unit,
        optional($.generic_map_aspect),
        optional($.port_map_aspect),
        ';'
    ),

    _instantiated_unit: $ => choice(
        $.component_instantiation,
        $.entity_instantiation,
        $.configuration_instantiation
    ),

    component_instantiation: $ => seq(
        optional(caseInsensitive('component')),
        $._component_name
    ),

    entity_instantiation: $ => prec(1,seq(
        caseInsensitive('entity'),
        $._entity_name,
        optional(seq(
            '(',
            $._architecture_identifier,
            ')'
        ))
    )),

    configuration_instantiation: $ => seq(
        caseInsensitive('configuration'),
        $._name
    ),
    // }}}

    // 11.8 Generate statement {{{
    _generate_statement: $ => choice(
        $.for_generate_statement,
        $.if_generate_statement,
        $.case_generate_statement
    ),

    for_generate_statement: $ => seq(
        caseInsensitive('for'),
        $._generate_parameter_specification,
        caseInsensitive('generate'),
        optional($.generate_statement_body),
        caseInsensitive('end'),
        caseInsensitive('generate'),
        optional($._end_label),
        ';'
    ),

    _generate_parameter_specification: $ => alias(
        $.parameter_specification,
        $.generate_parameter_specification
    ),

    if_generate_statement: $ => seq(
        $.if_generate,
        repeat($.elsif_generate),
        optional($.else_generate),
        caseInsensitive('end'),
        caseInsensitive('generate'),
        optional($._end_label),
        ';'
    ),

    if_generate: $ => seq(
        caseInsensitive('if'),
        optional($._label),
        $._condition,
        caseInsensitive('generate'),
        optional($.generate_statement_body),
    ),

    elsif_generate: $ => seq(
        caseInsensitive('elsif'),
        optional($._label),
        $._condition,
        caseInsensitive('generate'),
        optional($.generate_statement_body)
    ),

    else_generate: $ => seq(
        caseInsensitive('else'),
        optional($._label),
        caseInsensitive('generate'),
        optional($.generate_statement_body)
    ),

    case_generate_statement: $ => seq(
        caseInsensitive('case'),
        $._expression,
        caseInsensitive('generate'),
        repeat1($.case_generate_alternative),
        caseInsensitive('end'),
        caseInsensitive('generate'),
        optional($._end_label),
        ';'
    ),

    case_generate_alternative: $ => seq(
        caseInsensitive('when'),
        optional($._label),
        $.choices,
        '=>',
        optional($.generate_statement_body)
    ),

    generate_statement_body: $ => choice(
        // with begin
        seq(
            optional($.block_declarative_part),
            caseInsensitive('begin'),
            repeat($._concurrent_statement_part),
            optional(seq(
                caseInsensitive('end'),
                optional($._end_label),
                ';'
            )),
        ),
        // with end
        seq(
            optional(seq(
                optional($.block_declarative_part),
                caseInsensitive('begin'),
            )),
            repeat($._concurrent_statement_part),
            caseInsensitive('end'),
            optional($._end_label),
            ';'
        ),
        // without both
        repeat1($._concurrent_statement_part),
    ),

    _label: $ => seq(
        alias($.identifier, $.label),
        ':'
    ),

    _end_label: $ => field(
        'at_end',
        alias($.identifier, $.label),
    ),

    _generate_statement_label: $ => alias(
        $.identifier,
        $.generate_statement_label
    ),
    // }}}

    // 13.1 Design units {{{
    design_unit: $ => seq(
        repeat($._context_item),
        $._library_unit
    ),

    _library_unit: $ => choice(
        $._primary_unit,
        $._secondary_unit
    ),

    _primary_unit: $ => choice(
        $.entity_declaration,
        //$.configuration_declaration,
        $.package_declaration,
        $.package_instantiation_declaration,
        $.context_declaration,
        $.PSL_verification_unit,
    ),

    _secondary_unit: $ => choice(
        $.architecture_body,
        $.package_body
    ),
    // }}}

    // 12.4 Use clauses {{{
    use_clause: $ => seq(
        caseInsensitive('use'),
        $.selected_name,
        repeat(seq(
            ',', $.selected_name
        )),
        ';'
    ),
    // }}}

    // 13.2 Design libraries {{{
    library_clause: $ => seq(
        caseInsensitive('library'),
        $.logical_name_list,
        ';'
    ),

    logical_name_list: $ => seq(
        $._logical_name,
        repeat(seq(
            ',', $._logical_name
        ))
    ),

    _logical_name: $ => alias(
        $.identifier,
        $.logical_name
    ),
    // }}}

    // 13.2 Context declarations {{{
    context_declaration: $ => seq(
        caseInsensitive('context'),
        $.identifier,
        caseInsensitive('is'),
        $.context_clause,
        caseInsensitive('end'),
        optional(caseInsensitive('context')),
        optional($._end_simple_name),
        ';'
    ),
    // }}}

    // 13.4 Context clauses {{{
    context_clause: $ => repeat1(
        $._context_item
    ),

    _context_item: $ => choice(
        $.library_clause,
        $.use_clause,
        $.context_reference
    ),

    context_reference: $ => seq(
        caseInsensitive('context'),
        $.selected_name,
        repeat(seq(
            ',', $.selected_name
        )),
        ';'
    ),
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
    integer: $ => new RegExp (INTEGER),

    _integer_immed: $ => alias(
        token.immediate(new RegExp (INTEGER)),
        $.integer
    ),

    integer_decimal: $ => new RegExp (INTEGER_DECIMAL),

    real_decimal: $ => new RegExp (REAL_DECIMAL),
    // }}}

    // 15.6 Character literal {{{
    character_literal: $ => choice(
        ...PREDEFINED_CHARACTER.map(c => token(caseInsensitive(c))),
        seq(
            '\'',
            token.immediate(
                new RegExp ('['+GRAPHIC_CHARACTER+QUOTATION_MARK+BACKSLASH+']')
            ),
            token.immediate('\'')
        ),
    ),
    // }}}

    // 15.5.3 Based literals {{{
    based_integer: $ => new RegExp (BASED_INTEGER),
    based_real: $ => new RegExp (BASED_REAL),
    // }}}

    // 15.4 Identifiers {{{
    identifier: $ => token(new RegExp (IDENTIFIER)),
    // }}}

    // 15.7 String literal {{{
    string_literal: $ => new RegExp (STRING),
    // }}}

    // 15.8 Bit string literals {{{
    bit_string_literal: $ => new RegExp (BIT_STRING_LITERAL),
    // }}}

    // 15.9 Comments {{{
    comment: $ => token(choice(
        seq('--', new RegExp('[^'+VT+CR+LF+FF+']*')),
        // TODO: Multi line comment
    )),
    /// }}}

    // LINT: check if the identifier is compatible with _PSL_identifier
    _PSL_identifier: $ => alias(
        $.identifier,
        $.PSL_identifier
    ),

    // PSL 7.2 Verification units {{{
    PSL_verification_unit: $ => seq(
        $.PSL_VUnit_header,
        $.PSL_VUnit_body,
    ),

    PSL_VUnit_header: $ => seq(
        field('type', alias($.identifier, $.keywoard)),
        $._PSL_identifier,
        optional(seq(
            '(',
            $.hierarchical_hdl_name,
            ')'
        )),
    ),

    hierarchical_hdl_name: $ => seq(
        $._HDL_module_name,
        repeat(seq(
            choice('.','/'),
            field('instance_name',$._simple_name)
        ))
    ),

    _HDL_module_name: $ => seq(
        field('entity_name',$._simple_name),
        optional(seq(
            '(',
            field('architecture_identifier',$._simple_name),
            ')',
        ))
    ),

    PSL_VUnit_body: $ => seq(
        '{',
        repeat($.vunit_inherit_specification),
        repeat($._PSL_vunit_item),
        '}',
    ),

    vunit_inherit_specification: $ => seq(
        caseInsensitive('inherited'),
        field('vunit_name', $._PSL_identifier),
        repeat(seq(
            ',',
            field('vunit_name', $._PSL_identifier)
        )),
        ';'
    ),

    _PSL_vunit_item: $ => choice(
        $._declarative_item,
        $._labeled_concurrent_statement,
    ),
    // }}}

    // A.4.2 PSL declarations {{{
    _PSL_declaration: $ => choice(
        $.PSL_property_declaration,
        $.PSL_sequence_declaration,
        $.PSL_endpoint_declaration,
        $.PSL_clock_declaration
    ),

    PSL_property_declaration: $ => seq(
        caseInsensitive('property'),
        $._PSL_identifier,
        optional($.PSL_formal_parameter_list),
        caseInsensitive('is'),
        $._PSL_property,
        ';'
    ),

    PSL_formal_parameter_list: $ => seq(
        $._PSL_formal_parameter,
        repeat(seq(
            ';',
            $._PSL_formal_parameter,
        )),
    ),

    _PSL_formal_parameter: $ => seq(
        $.param_type,
        $._PSL_identifier,
        repeat(seq(
            ',',
            $._PSL_identifier
        ))
    ),

    param_type: $ => choice(
        caseInsensitive('const'),
        caseInsensitive('boolean'),
        caseInsensitive('property'),
        caseInsensitive('sequence')
    ),

    PSL_sequence_declaration: $ => seq(
        caseInsensitive('sequence'),
        $._PSL_identifier,
        optional($.PSL_formal_parameter_list),
        caseInsensitive('is'),
        $._PSL_sequence,
        ';'
    ),

    PSL_endpoint_declaration: $ => seq(
        caseInsensitive('endpoint'),
        $._PSL_identifier,
        optional($.PSL_formal_parameter_list),
        caseInsensitive('is'),
        $._PSL_sequence,
        ';'
    ),

    PSL_clock_declaration: $ => seq(
        caseInsensitive('default'),
        caseInsensitive('clock'),
        caseInsensitive('is'),
        field('clock', 
            choice(
                $._primary,
                seq(
                    '(',
                    $._HDL_or_PSL_expression,
                    ')'
                ),
            )
        ),
        ';'
    ),
    // }}}

    // A.4.3 PSL directives {{{
    _PSL_directive: $ => choice(
        $.PSL_assertion_directive,
        $.PSL_assumption_directive,
        $.PSL_restriction_directive,
        $.PSL_coverage_directive,
        $.PSL_fairness_directive
    ),


    // LINT: If property is presented,
    //       report and severity shall not be present
    PSL_assertion_directive: $ => seq(
        caseInsensitive('assert'),
        field('property', $._PSL_property),
        optional(seq(
            caseInsensitive('report'),
            field('report', $._string_expression)
        )),
        optional(seq(
            caseInsensitive('severity'),
            field('severity', $._severity)
        )),
        ';'
    ),

    // LINT: report shall only be presente when assume_guarantee
    PSL_assumption_directive: $ => seq(
        caseInsensitive('assume'),
        optional(token.immediate(caseInsensitive('_guarantee')),
        ),
        field('property', $._PSL_property),
        optional(seq(
            caseInsensitive('report'),
            field('report', $._string_expression)
        )),
        ';'
    ),

    // LINT: report shall only be presente when restrict_guarantee
    PSL_restriction_directive: $ => seq(
        caseInsensitive('restrict'),
        optional(token.immediate(caseInsensitive('_guarantee'))),
        $._PSL_sequence,
        optional(seq(
            caseInsensitive('report'),
            field('report', $._string_expression)
        )),
        ';'
    ),

    PSL_coverage_directive: $ => seq(
        caseInsensitive('cover'),
        $._PSL_sequence,
        optional(seq(
            caseInsensitive('report'),
            field('report', $._string_expression)
        )),
        ';'
    ),

    // LINT: non-strong fairness shall have only one expression
    PSL_fairness_directive: $ => seq(
        caseInsensitive('strong'),
        caseInsensitive('fairness'),
        $._HDL_or_PSL_expression,
        optional(seq(
            ',',
            $._HDL_or_PSL_expression,
        )),
        ';'
    ),
    // }}}

    // A.4.4 PSL properties {{{
    _PSL_property: $ => choice(
        $.replicator,
        $._PSL_fl_property,
    ),

    replicator: $ => seq(
        caseInsensitive('forall'),
        $._PSL_identifier,
        optional($._index_range),
        caseInsensitive('in'),
        $.value_set,
        ':',
        $._PSL_property
    ),

    // non parenthesized range shall be ascending range
    _index_range: $ => choice(
        $._range,
        seq(
            '(',
            $._range,
            ')',
        )
    ),

    // LINT: (_value_range (_range) shall be ascending_range
    value_set: $ => choice(
        seq(
            '{',
            $._value_range,
            repeat(seq(
                ',',
                $._value_range
            )),
            '}'
        ),
        $._boolean
    ),

    _boolean: $ => alias(
        caseInsensitive('boolean'),
        $.boolean
    ),

    _value_range: $ => field('value_range',choice(
        $._HDL_or_PSL_expression,
        $._range
    )),

    // PSL 6.2.1 FL properties {{{
    _PSL_fl_property: $ => choice(
        $._HDL_or_PSL_expression,
        $.parenthesized_fl_property,
        $.sequential_property,
        $.clocked_property,
        $.termination_property,
        $.implication_property,
        $.invariance_property,
        $.ocurrence_property,
        $.bounding_property,
        $.extended_ocurrence_property,
        $.extended_ocurrence_property_all,
        $.extended_event_ocurrence_property,
        $.extended_event_ocurrence_property_all,
        $.suffix_implication_property
    ),

    sequential_property: $ => seq(
        $._PSL_sequence,
        optional('!')
    ),

    parenthesized_fl_property: $ => prec(1,seq(
        '(',
        $._PSL_fl_property,
        ')'
    )),

    clocked_property: $ => prec.left(
        PREC.PSL_CLOCK,
        seq(
            field('property',$._PSL_fl_property),
            '@',
            field('clock',$._HDL_or_PSL_expression),
        )
    ),

    termination_property: $ => prec.left(
        PREC.PSL_TERMINATION,
        seq(
            field('property',$._PSL_fl_property),
            field('operator',caseInsensitive('abort')),
            $._boolean_expression,
        )
    ),

    implication_property: $ => prec.right(
        PREC.PSL_BOOL_IMPLICATION,
        seq(
            field('left',$._PSL_fl_property),
            field('operator',choice('->','<->')),
            field('right',$._PSL_fl_property),
        )
    ),

    invariance_property: $ => prec.right(
        PREC.PSL_INVARIANCE,
        seq(
            field('operator', choice(
                caseInsensitive('always'),
                caseInsensitive('never'),
            )),
            field('property',$._PSL_fl_property),
        )
    ),

    ocurrence_property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator', choice(
                caseInsensitive('next'),
                caseInsensitive('next!'),
                caseInsensitive('eventually!'),
            )),
            field('property',$._PSL_fl_property),
        )
    ),

    bounding_property: $ => prec.right(
        PREC.PSL_BOUNDING,
        seq(
            field('left', $._PSL_fl_property),
            field('operator', choice(
                caseInsensitive('until!'),
                caseInsensitive('until'),
                caseInsensitive('until!_'),
                caseInsensitive('until_'),
                caseInsensitive('before!'),
                caseInsensitive('before'),
                caseInsensitive('before!_'),
                caseInsensitive('before_'),
            )),
            field('right', $._PSL_fl_property)
        )
    ),

    // LINT: number shall be a integer static non-negative value
    extended_ocurrence_property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator', choice(
                caseInsensitive('next'),
                caseInsensitive('next!'),
            )),
            '[',
            field('number',$._HDL_or_PSL_expression),
            ']',
            $.parenthesized_fl_property,
        )
    ),

    extended_ocurrence_property_all: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator', choice(
                caseInsensitive('next_a'),
                caseInsensitive('next_a!'),
            )),
            '[',
            field('finite_range',optional($._range)),
            ']',
            $.parenthesized_fl_property,
        )
    ),

    extended_event_ocurrence_property: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator', choice(
                caseInsensitive('next_event'),
                caseInsensitive('next_event!'),
            )),
            '(',
            $._boolean_expression,
            ')',
            optional(seq(
                '[',
                field('positive_number',$._HDL_or_PSL_expression),
                ']'
            )),
            $.parenthesized_fl_property,
        )
    ),

    extended_event_ocurrence_property_all: $ => prec.right(
        PREC.PSL_OCURRENCE,
        seq(
            field('operator', choice(
                caseInsensitive('next_event_a'),
                caseInsensitive('next_event_e'),
                caseInsensitive('next_event_a!'),
                caseInsensitive('next_event_e!'),
            )),
            '(',
            $._boolean_expression,
            ')',
            '[',
            field('finite_positive_range',$._range),
            ']',
            $.parenthesized_fl_property,
        )
    ),

    // TODO
    suffix_implication_property: $ => prec.right(
        PREC.PSL_SEQ_IMPLICATION,
        choice(
            seq(
                repeat($._PSL_sequence),
                $.parenthesized_fl_property,
            ),
            seq(
                $._PSL_sequence,
                field('operator',choice('|->','|=>')),
                field('property',$._PSL_fl_property),
            ),
        )
    ),
    // }}}

    // }}}

    // A.4.5 SERE {{{
    _PSL_SERE: $ => prec(1,choice(
        $._HDL_or_PSL_expression,
        $._PSL_sequence,
        $.fusion_SERE,
        $.concatenation_SERE,
        $._compound_SERE
    )),

    fusion_SERE: $ => prec.left(
        PREC.PSL_FUSION,
        seq(
            field('left',$._PSL_SERE),
            field('operator', ':'),
            field('right',$._PSL_SERE)
        )
    ),

    concatenation_SERE: $ => prec.left(
        PREC.PSL_CONCAT,
        seq(
            field('left',$._PSL_SERE),
            field('operator', ';'),
            field('right',$._PSL_SERE)
        )
    ),

    _compound_SERE: $ => prec(-1,choice(
        $.repeated_SERE,
        $.braced_SERE,
        $.clocked_SERE,
        $.disjunction_SERE,
        $.conjunction_SERE,
        $.within_SERE,
    )),

    disjunction_SERE: $ => prec.left(
        PREC.PSL_SERE_OR,
        seq(
            field('left',$._compound_SERE),
            '|',
            field('right',$._compound_SERE),
        )
    ),

    conjunction_SERE: $ => prec.left(
        PREC.PSL_SERE_AND,
        seq(
            field('left',$._compound_SERE),
            field('operator',choice('&','&&')),
            field('right',$._compound_SERE),
        )
    ),

    within_SERE: $ => prec.left(
        PREC.PSL_SERE_WITHIN,
        seq(
            field('left',$._compound_SERE),
            field('operator',caseInsensitive('within')),
            field('right',$._compound_SERE),
        )
    ),
    // }}}

    // A.4.6 Sequences {{{
    _PSL_sequence: $ => field('sequence',choice(
        prec(-1,$.ambiguous_name),
        $.repeated_SERE,
        $.braced_SERE,
        $.clocked_SERE,
    )),

    repeated_SERE: $ => prec.left(
        PREC.PSL_SERE_REPEAT,
        choice(
            seq(
                $._boolean_expression,
                '[',
                choice(
                    seq(field('operator','*'),  optional($._count)),
                    seq(field('operator','->'), optional($._count)),
                    seq(field('operator','+')),
                    seq(field('operator','='), $._count),
                ),
                ']'
            ),
            seq(
                optional($._PSL_sequence),
                '[',
                choice(
                    seq(field('operator','*'), optional($._count)),
                    seq(field('operator','+')),
                ),
                ']'
            ),
        )),

    braced_SERE: $ => seq(
        '{',
        $._PSL_SERE,
        '}',
    ),

    clocked_SERE: $ => prec.left(PREC.PSL_CLOCK,seq(
        $.braced_SERE,
        '@',
        $._HDL_or_PSL_expression
    )),

    // LINT: _range shall be ascending_range
    _count: $ => field(
        'count',
        choice(
            $._HDL_or_PSL_expression,
            $._range
        )
    ),
    // }}}

    // A.4.7 Forms of expression {{{
    _boolean_expression: $ => field(
        'condition',
        $._HDL_or_PSL_expression
    ),

    _HDL_or_PSL_expression: $ => choice(
        $._expression,
        $._PSL_expression,
        $.union_expression,
        //$.endpoint_instance,
    ),

    _PSL_expression: $ => choice(
        $.implication_expression,
    ),

    implication_expression: $ => prec.right(
        PREC.PSL_BOOL_IMPLICATION,
        seq(
            field('left', $._HDL_or_PSL_expression),
            field('operator',choice('->','<->')),
            field('right', $._HDL_or_PSL_expression),
        )
    ),

    union_expression: $ => prec.left(PREC.PSL_UNION,seq(
        field('left', $._HDL_or_PSL_expression),
        field('operator',caseInsensitive('union')),
        field('right', $._HDL_or_PSL_expression),
    )),
    // }}}

},

    
    supertypes: $ => [ // {{{
        $._PSL_directive,
        $._PSL_declaration,
        $._PSL_fl_property,
        $._PSL_sequence,
        $._PSL_property,
        $._PSL_SERE,
        $._sequential_statement,
        $._concurrent_statement,
        $._declarative_item,
        $._name
    ] // }}}

})

function caseInsensitive(keyword) {
    //return token(keyword)
    return token(prec(1,new RegExp(keyword
        .split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
    )))
}
