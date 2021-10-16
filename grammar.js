/*
 * MIT License
 *
 * Copyright (c) 2021 alex-pinkus
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

const PREC = {
  NAVIGATION: 13,
  MULTIPLICATIVE: 12,
  ADDITIVE: 11,
  INFIX: 9,
  NIL_COALESCING: 8,
  CHECK: 7,
  PREFIX: 7,
  COMPARISON: 6,
  POSTFIX: 6,
  CAPTURE_LIST_ITEM: 6,
  EQUALITY: 5,
  CONJUNCTION: 4,
  DISJUNCTION: 3,
  RANGE: 2,
  ASSIGNMENT: 1,
  BLOCK: 1,
  COMMENT: -1,
  LAMBDA_LITERAL: -1,
};

const DEC_DIGITS = token(sep1(/[0-9]+/, /_+/));
const HEX_DIGITS = token(sep1(/[0-9a-fA-F]+/, /_+/));
const OCT_DIGITS = token(sep1(/[0-7]+/, /_+/));
const BIN_DIGITS = token(sep1(/[01]+/, /_+/));
const REAL_EXPONENT = token(seq(/[eE]/, optional(/[+-]/), DEC_DIGITS));
const LEXICAL_IDENTIFIER = /[a-zA-Z_][a-zA-Z_0-9]*/;
const CUSTOM_OPERATORS = token(
  choice(
    // https://docs.swift.org/swift-book/ReferenceManual/LexicalStructure.html#ID418
    // This supports a subset of the operators that Swift does but I'm really not concerned about the esoteric ones.
    // Someone who wants unicode support can add it. What this does do is:
    // * Avoid the reserved operators by saying that certain characters are only available if you don't start with them.
    // * Entirely forbid `<` as the last char because it creates ambiguity with type arguments
    /[\\<>&?=][\/=\-+!*%<>&|^?~\.]*[\/=\-+!*%>&|^?~]+/,
    /[\-+!*%|^~]+[\/=\-+!*%<>&|^?~]*[\/=\-+!*%>&|^?~]+/,
    /[\-+!*%|^~\.]+[\/=\-+!*%<>&|^?~\.]*[\/=\-+!*%>&|^?~\.]+/,
    /[\/]+[=\-+!*%<>&|^?~]*[=\-+!*%>&|^?~]+/,
    /[\/]+[=\-+!*%<>&|^?~\.]*[=\-+!*%>&|^?~\.]+/
  )
);

// XXX need custom scanner for:
// * Custom operators and `<` for type arguments

module.exports = grammar({
  name: "swift",

  conflicts: ($) => [
    // @Type(... could either be an annotation constructor invocation or an annotated expression
    [$.attribute],

    // Is `foo { ... }` a constructor invocation or function invocation?
    [$._simple_user_type, $._expression],

    // To support nested types A.B not being interpreted as `(navigation_expression ... (type_identifier)) (navigation_suffix)`
    [$.user_type],

    // How to tell the difference between Foo.bar(with:and:), and Foo.bar(with: smth, and: other)? You need GLR
    [$.value_argument],

    // { (foo, bar) ...
    [$._expression, $._lambda_parameter],
    [$._primary_expression, $._lambda_parameter],
  ],

  extras: ($) => [
    $.comment,
    $.multiline_comment,
    $.directive,
    /\s+/, // Whitespace
  ],

  externals: ($) => [
    $.multiline_comment,
    $.raw_str_part,
    $.raw_str_continuing_indicator,
    $.raw_str_end_part,
    $._semi,
    $._arrow_operator,
    $._dot_operator,
    $._three_dot_operator,
    $._open_ended_range_operator,
    $._conjunction_operator,
    $._disjunction_operator,
    $._nil_coalescing_operator,
    $._equal_sign,
    $._throws_keyword,
    $._rethrows_keyword,
    $.default_keyword,
  ],

  rules: {
    ////////////////////////////////
    // File Structure
    ////////////////////////////////

    source_file: ($) =>
      seq(optional($.shebang_line), repeat(seq($._statement, $._semi))),

    shebang_line: ($) => seq("#!", /[^\r\n]*/),

    ////////////////////////////////
    // Lexical Structure - https://docs.swift.org/swift-book/ReferenceManual/LexicalStructure.html
    ////////////////////////////////

    comment: ($) => prec(PREC.COMMENT, seq("//", /.*/)),

    // Identifiers

    simple_identifier: ($) =>
      choice(
        LEXICAL_IDENTIFIER,
        token(seq("`", LEXICAL_IDENTIFIER, "`")),
        /\$[0-9]+/,
        token(seq("$", LEXICAL_IDENTIFIER))
      ),

    identifier: ($) => sep1($.simple_identifier, $._dot_operator),

    // Literals

    _basic_literal: ($) =>
      choice(
        $.integer_literal,
        $.hex_literal,
        $.oct_literal,
        $.bin_literal,
        $.real_literal,
        $.boolean_literal,
        $._string_literal,
        "nil"
      ),

    // TODO: Hex exponents
    real_literal: ($) =>
      token(
        choice(
          seq(DEC_DIGITS, REAL_EXPONENT),
          seq(optional(DEC_DIGITS), ".", DEC_DIGITS, optional(REAL_EXPONENT))
        )
      ),

    integer_literal: ($) => token(seq(optional(/[1-9]/), DEC_DIGITS)),

    hex_literal: ($) => token(seq("0", /[xX]/, HEX_DIGITS)),

    oct_literal: ($) => token(seq("0", /[oO]/, OCT_DIGITS)),

    bin_literal: ($) => token(seq("0", /[bB]/, BIN_DIGITS)),

    boolean_literal: ($) => choice("true", "false"),

    // String literals

    _string_literal: ($) =>
      choice(
        $.line_string_literal,
        $.multi_line_string_literal,
        $.raw_string_literal
      ),

    line_string_literal: ($) =>
      seq('"', repeat(choice($._line_string_content, $._interpolation)), '"'),

    _line_string_content: ($) =>
      choice($._line_str_text, $._line_str_escaped_char),

    _line_str_text: ($) => /[^\\"]+/,

    _line_str_escaped_char: ($) =>
      choice($._escaped_identifier, $._uni_character_literal),

    _uni_character_literal: ($) => seq("\\", "u", /[0-9a-fA-F]{4}/), // TODO: { }

    multi_line_string_literal: ($) =>
      seq(
        '"""',
        repeat(choice($._multi_line_string_content, $._interpolation)),
        '"""'
      ),

    raw_string_literal: ($) =>
      seq(
        repeat(
          seq(
            $.raw_str_part,
            $.raw_str_interpolation,
            optional($.raw_str_continuing_indicator)
          )
        ),
        $.raw_str_end_part
      ),

    raw_str_interpolation: ($) =>
      seq($.raw_str_interpolation_start, $._expression, ")"),

    raw_str_interpolation_start: ($) => /\\#*\(/,

    _multi_line_string_content: ($) =>
      choice($._multi_line_str_text, $._escaped_identifier, '"'),

    _interpolation: ($) =>
      seq("\\(", alias($._expression, $.interpolated_expression), ")"),

    _escaped_identifier: ($) => /\\[0\\tnr"'\n]/,

    _multi_line_str_text: ($) => /[^\\"]+/,

    ////////////////////////////////
    // Types - https://docs.swift.org/swift-book/ReferenceManual/Types.html
    ////////////////////////////////

    type_annotation: ($) => seq(":", $._possibly_implicitly_unwrapped_type),

    // Superset of legal type declarations, including implicitly unwrapped types and protocol composition types.
    _possibly_implicitly_unwrapped_type: ($) =>
      seq(sep1($._type, "&"), optional(token.immediate("!"))),

    _type: ($) =>
      prec.right(
        seq(
          optional($.type_modifiers),
          choice(
            $.user_type,
            $.tuple_type,
            $.function_type,
            $.array_type,
            $.dictionary_type,
            $.optional_type,
            $._opaque_type
          )
        )
      ),

    // The grammar just calls this whole thing a `type-identifier` but that's a bit confusing.
    user_type: ($) => sep1($._simple_user_type, $._dot_operator),

    _simple_user_type: ($) =>
      prec.right(
        seq(
          alias($.simple_identifier, $.type_identifier),
          optional($.type_arguments)
        )
      ),

    tuple_type: ($) => seq("(", optional(sep1($._tuple_type_item, ",")), ")"),

    _tuple_type_item: ($) =>
      seq(
        optional($._tuple_type_item_identifier),
        optional($.parameter_modifiers),
        $._type
      ),

    _tuple_type_item_identifier: ($) =>
      seq(optional($.wildcard_pattern), $.simple_identifier, ":"),

    function_type: ($) =>
      seq(
        $.tuple_type,
        optional($.throws_modifier),
        $._arrow_operator,
        $._type
      ),

    array_type: ($) => seq("[", $._type, "]"),

    dictionary_type: ($) => seq("[", $._type, ":", $._type, "]"),

    optional_type: ($) =>
      prec.left(
        seq(
          choice($.user_type, $.tuple_type, $.array_type, $.dictionary_type),
          repeat1($._immediate_quest)
        )
      ),

    _quest: ($) => "?",
    _immediate_quest: ($) => token.immediate("?"),

    _opaque_type: ($) => seq("some", $.user_type),

    ////////////////////////////////
    // Expressions - https://docs.swift.org/swift-book/ReferenceManual/Expressions.html
    ////////////////////////////////

    _expression: ($) =>
      choice(
        $.simple_identifier,
        $._unary_expression,
        $._binary_expression,
        $.ternary_expression,
        $._primary_expression,
        seq($._expression, $._immediate_quest)
      ),

    // Unary expressions

    _unary_expression: ($) =>
      choice(
        $.postfix_expression,
        $.call_expression,
        $.constructor_expression,
        $.navigation_expression,
        $.prefix_expression,
        $.as_expression,
        $.selector_expression,
        $.open_start_range_expression,
        $.open_end_range_expression
      ),

    postfix_expression: ($) =>
      prec.left(PREC.POSTFIX, seq($._expression, $._postfix_unary_operator)),

    call_expression: ($) => prec.left(seq($._expression, $.call_suffix)),

    constructor_expression: ($) =>
      prec.left(
        seq(
          choice($.array_type, $.dictionary_type, $.user_type),
          $.constructor_suffix
        )
      ),

    indexing_expression: ($) =>
      prec.left(PREC.POSTFIX, seq($._expression, $.indexing_suffix)),

    navigation_expression: ($) =>
      prec.left(PREC.NAVIGATION, seq($._expression, $.navigation_suffix)),

    // XXX precedence for ranges isn't right
    open_start_range_expression: ($) =>
      prec.left(
        PREC.RANGE,
        seq(
          choice($._open_ended_range_operator, $._three_dot_operator),
          $._expression
        )
      ),

    open_end_range_expression: ($) =>
      prec.left(PREC.RANGE, seq($._expression, $._three_dot_operator)),

    prefix_expression: ($) =>
      prec.right(PREC.PREFIX, seq($._prefix_unary_operator, $._expression)),

    as_expression: ($) =>
      prec.left(seq($._expression, $._as_operator, $._type)),

    selector_expression: ($) =>
      prec.left(
        seq(
          "#selector",
          "(",
          optional(choice("getter:", "setter:")),
          $._expression,
          ")"
        )
      ),

    // Binary expressions

    _binary_expression: ($) =>
      choice(
        $.multiplicative_expression,
        $.additive_expression,
        $.range_expression,
        $.infix_expression,
        $.nil_coalescing_expression,
        $.check_expression,
        $.equality_expression,
        $.comparison_expression,
        $.equality_expression,
        $.conjunction_expression,
        $.disjunction_expression,
        $.bitwise_operation
      ),

    multiplicative_expression: ($) =>
      prec.left(
        PREC.MULTIPLICATIVE,
        seq($._expression, $._multiplicative_operator, $._expression)
      ),

    additive_expression: ($) =>
      prec.left(
        PREC.ADDITIVE,
        seq($._expression, $._additive_operator, $._expression)
      ),

    range_expression: ($) =>
      prec.left(
        PREC.RANGE,
        seq(
          $._expression,
          choice($._open_ended_range_operator, $._three_dot_operator),
          $._expression
        )
      ),

    infix_expression: ($) =>
      prec.left(
        PREC.INFIX,
        seq($._expression, $.custom_operator, $._expression)
      ),

    nil_coalescing_expression: ($) =>
      prec.left(
        PREC.NIL_COALESCING,
        seq($._expression, $._nil_coalescing_operator, $._expression)
      ),

    check_expression: ($) =>
      prec.left(PREC.CHECK, seq($._expression, $._is_operator, $._expression)),

    comparison_expression: ($) =>
      prec.left(seq($._expression, $._comparison_operator, $._expression)),

    equality_expression: ($) =>
      prec.left(
        PREC.EQUALITY,
        seq($._expression, $._equality_operator, $._expression)
      ),

    conjunction_expression: ($) =>
      prec.left(
        PREC.CONJUNCTION,
        seq($._expression, $._conjunction_operator, $._expression)
      ),

    disjunction_expression: ($) =>
      prec.left(
        PREC.DISJUNCTION,
        seq($._expression, $._disjunction_operator, $._expression)
      ),

    bitwise_operation: ($) =>
      prec.left(seq($._expression, $._bitwise_binary_operator, $._expression)),

    custom_operator: ($) => CUSTOM_OPERATORS,

    // Suffixes

    indexing_suffix: ($) => seq("[", sep1($._expression, ","), "]"),

    navigation_suffix: ($) =>
      seq(
        $._dot_operator,
        choice($.simple_identifier, $.tuple_expression, $.integer_literal)
      ),

    call_suffix: ($) =>
      prec.left(
        seq(
          choice(
            $.value_arguments,
            sep1($._annotated_lambda, seq($.simple_identifier, ":"))
          )
        )
      ),

    constructor_suffix: ($) =>
      prec.left(
        seq(
          choice(
            seq("(", optional(sep1($.value_argument, ",")), ")"),
            $._annotated_lambda
          )
        )
      ),

    _annotated_lambda: ($) =>
      seq(
        // repeat($.attribute),
        $.lambda_literal
      ),

    type_arguments: ($) => prec.left(seq("<", sep1($._type, ","), ">")),

    value_arguments: ($) =>
      seq(
        choice(
          seq("(", optional(sep1($.value_argument, ",")), ")"),
          seq("[", optional(sep1($.value_argument, ",")), "]")
        )
      ),

    value_argument: ($) =>
      prec.left(
        seq(
          optional($.type_modifiers),
          choice(
            repeat1(seq($.simple_identifier, ":")),
            seq(optional(seq($.simple_identifier, ":")), $._expression)
          )
        )
      ),

    ternary_expression: ($) =>
      prec.left(
        seq($._expression, $._quest, $._expression, ":", $._expression)
      ),

    _primary_expression: ($) =>
      choice(
        $.tuple_expression,
        $._basic_literal,
        $._function_literal,
        $._special_literal,
        $.array_literal,
        $.dictionary_literal,
        $.self_expression,
        $.super_expression,
        $.if_expression,
        $.guard_expression,
        $.switch_expression,
        $.do_expression,
        $.try_expression,
        $._referenceable_operator,
        alias($._three_dot_operator, $.fully_open_range)
      ),

    tuple_expression: ($) =>
      prec.left(
        -1,
        seq(
          "(",
          sep1(
            seq(optional(seq($.simple_identifier, ":")), $._expression),
            ","
          ),
          ")"
        )
      ),

    array_literal: ($) =>
      seq("[", optional(sep1($._expression, ",")), optional(","), "]"),

    dictionary_literal: ($) =>
      seq(
        "[",
        choice(":", sep1($._dictionary_literal_item, ",")),
        optional(","),
        "]"
      ),

    _dictionary_literal_item: ($) => seq($._expression, ":", $._expression),

    _special_literal: ($) =>
      choice(
        "#file",
        "#fileID",
        "#filePath",
        "#line",
        "#column",
        "#function",
        "#dsohandle"
      ),

    lambda_literal: ($) =>
      prec(
        PREC.LAMBDA_LITERAL,
        seq(
          "{",
          optional($.capture_list),
          optional(seq(optional($.lambda_function_type), "in")),
          optional($.statements),
          "}"
        )
      ),

    capture_list: ($) => seq("[", sep1($._capture_list_item, ","), "]"),

    _capture_list_item: ($) =>
      prec(
        PREC.CAPTURE_LIST_ITEM,
        choice(
          "self",
          seq(
            optional($._capture_specifier),
            $.simple_identifier,
            optional(seq($._equal_sign, $._expression))
          )
        )
      ),

    _capture_specifier: ($) =>
      choice("weak", "unowned", "unowned(safe)", "unowned(unsafe)"),

    lambda_function_type: ($) =>
      seq(
        choice(
          $.lambda_function_type_parameters,
          seq("(", optional($.lambda_function_type_parameters), ")")
        ),
        optional($.throws_modifier),
        optional(seq($._arrow_operator, $._possibly_implicitly_unwrapped_type))
      ),

    lambda_function_type_parameters: ($) => sep1($._lambda_parameter, ","),

    _lambda_parameter: ($) =>
      prec.left(
        seq(
          choice(
            $.self_expression,
            $.simple_identifier,
            seq(
              optional($.simple_identifier),
              $.simple_identifier,
              ":",
              optional($.parameter_modifiers),
              $._possibly_implicitly_unwrapped_type
            )
          )
        )
      ),

    _function_literal: ($) => $.lambda_literal,

    self_expression: ($) => "self",

    super_expression: ($) => seq("super"),

    _else_options: ($) => choice($._block, $.if_expression),

    if_expression: ($) =>
      prec.right(
        seq(
          "if",
          sep1(prec.left($._if_condition_sequence_item), ","),
          choice($._block, seq($._block, "else", $._else_options))
        )
      ),

    _if_condition_sequence_item: ($) =>
      prec.left(
        choice($._if_let_binding, $._expression, $.availability_condition)
      ),

    _if_let_binding: ($) =>
      prec.left(
        seq($._direct_or_indirect_binding, $._equal_sign, $._expression)
      ),

    guard_expression: ($) =>
      prec.right(
        seq(
          "guard",
          sep1(prec.left($._if_condition_sequence_item), ","),
          "else",
          $._block
        )
      ),

    switch_expression: ($) =>
      seq("switch", $._expression, "{", repeat($.switch_entry), "}"),

    switch_entry: ($) =>
      seq(
        optional($.modifiers),
        choice(
          seq("case", $.switch_pattern, repeat(seq(",", $.switch_pattern))),
          $.default_keyword
        ),
        optional(seq("where", $._expression)),
        ":",
        $.statements,
        optional("fallthrough")
      ),

    switch_pattern: ($) => generate_pattern_matching_rule($, true, false, true),

    do_expression: ($) => seq("do", $._block, repeat($.catch_block)),

    catch_block: ($) =>
      seq(
        "catch",
        optional(generate_pattern_matching_rule($, true, false)),
        optional($.where_clause),
        $._block
      ),

    where_clause: ($) => prec.left(seq("where", $._expression)),

    try_expression: ($) =>
      prec.left(
        seq(
          // XXX associativity or precedence seems wrong here
          $._try_operator,
          choice($._expression, $.assignment)
        )
      ),

    _try_operator: ($) => choice("try", "try!", "try?"),

    _assignment_and_operator: ($) => choice("+=", "-=", "*=", "/=", "%=", "="),

    _equality_operator: ($) => choice("!=", "!==", "==", "==="),

    _comparison_operator: ($) => choice("<", ">", "<=", ">="),

    _is_operator: ($) => "is",

    _additive_operator: ($) => choice("+", "-"),

    _multiplicative_operator: ($) => choice("*", "/", "%"),

    _as_operator: ($) => choice("as", "as?", "as!"),

    _prefix_unary_operator: ($) =>
      prec.right(choice("++", "--", "-", "+", "!", "&", "~", $._dot_operator)),

    _bitwise_binary_operator: ($) => choice("&", "|", "^", "<<", ">>"),

    _postfix_unary_operator: ($) => choice("++", "--", "!"),

    directly_assignable_expression: ($) =>
      choice(
        $.simple_identifier,
        $.navigation_expression,
        $.call_expression,
        $.tuple_expression,
        $.self_expression
      ),

    ////////////////////////////////
    // Statements - https://docs.swift.org/swift-book/ReferenceManual/Statements.html
    ////////////////////////////////

    statements: ($) =>
      prec.left(
        seq($._statement, repeat(seq($._semi, $._statement)), optional($._semi))
      ),

    _statement: ($) =>
      choice(
        $._expression,
        $._declaration,
        $._loop_statement,
        $.control_transfer_statement,
        $.assignment,
        $.availability_condition
      ),

    _block: ($) => prec(PREC.BLOCK, seq("{", optional($.statements), "}")),

    _loop_statement: ($) =>
      seq(
        optional($.loop_label),
        choice($.for_statement, $.while_statement, $.repeat_while_statement)
      ),

    loop_label: ($) => token(/[a-zA-Z_][a-zA-Z_0-9]*:/),

    for_statement: ($) =>
      prec.right(
        seq(
          "for",
          generate_pattern_matching_rule($, true, true, false),
          optional($.type_annotation),
          "in",
          $._expression,
          optional($.where_clause),
          $._block
        )
      ),

    while_statement: ($) =>
      seq(
        "while",
        sep1(prec.left($._if_condition_sequence_item), ","),
        "{",
        optional($.statements),
        "}"
      ),

    repeat_while_statement: ($) =>
      prec.right(
        seq(
          "repeat",
          "{",
          optional($.statements),
          "}",
          "while",
          sep1(prec.left($._if_condition_sequence_item), ",")
        )
      ),

    control_transfer_statement: ($) =>
      choice(
        prec.right(seq("throw", $._expression)),
        prec.right(seq($._return_continue_break, optional($._expression)))
      ),

    _return_continue_break: ($) => choice("return", "continue", "break"),

    assignment: ($) =>
      prec.left(
        PREC.ASSIGNMENT,
        seq(
          $.directly_assignable_expression,
          $._assignment_and_operator,
          $._expression
        )
      ),

    availability_condition: ($) =>
      seq(
        "#available",
        "(",
        sep1(choice($._availability_argument, "*"), ","),
        ")"
      ),

    _availability_argument: ($) =>
      seq($.identifier, sep1($.integer_literal, ".")),

    ////////////////////////////////
    // Declarations - https://docs.swift.org/swift-book/ReferenceManual/Declarations.html
    ////////////////////////////////

    _declaration: ($) =>
      choice(
        $.import_declaration,
        $.property_declaration,
        $.typealias_declaration,
        $.function_declaration,
        $.class_declaration,
        // TODO actor declaration
        $.protocol_declaration,
        $.deinit_declaration,
        $.subscript_declaration,
        $.operator_declaration,
        $.precedence_group_declaration,
        $.associatedtype_declaration
      ),

    import_declaration: ($) =>
      seq(
        optional($.modifiers),
        "import",
        optional($._import_kind),
        $.identifier
      ),

    _import_kind: ($) =>
      choice(
        "typealias",
        "struct",
        "class",
        "enum",
        "protocol",
        "let",
        "var",
        "func"
      ),

    protocol_property_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          $.value_binding_pattern,
          optional($.type_annotation),
          optional($.type_constraints),
          $.protocol_property_requirements
        )
      ),

    protocol_property_requirements: ($) =>
      seq("{", repeat(choice($.getter_specifier, $.setter_specifier)), "}"),

    property_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          choice("let", "var"),
          sep1(
            seq(
              alias($.property_binding_pattern, $.value_binding_pattern),
              optional($.type_annotation),
              optional($.type_constraints),
              optional(
                choice(seq($._equal_sign, $._expression), $.computed_property)
              )
            ),
            ","
          )
        )
      ),

    property_binding_pattern: ($) =>
      generate_pattern_matching_rule($, false, false),

    typealias_declaration: ($) =>
      seq(
        optional($.modifiers),
        "typealias",
        alias($.simple_identifier, $.type_identifier),
        optional($.type_parameters),
        $._equal_sign,
        $._type
      ),

    function_declaration: ($) =>
      prec.right(seq($._bodyless_function_declaration, $.function_body)),

    _bodyless_function_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          optional("class"), // XXX: This should be possible in non-last position, but that creates parsing ambiguity
          choice(
            $._constructor_function_decl,
            $._non_constructor_function_decl
          ),
          optional($.type_parameters),
          $._function_value_parameters,
          optional($.throws_modifier),
          optional(
            seq($._arrow_operator, $._possibly_implicitly_unwrapped_type)
          ),
          optional($.type_constraints)
        )
      ),

    function_body: ($) => $._block,

    class_declaration: ($) =>
      prec.right(
        choice(
          seq(
            optional($.modifiers),
            choice("class", "struct"),
            alias($.simple_identifier, $.type_identifier),
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            $.class_body
          ),
          seq(
            optional($.modifiers),
            "extension",
            $.identifier,
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            $.class_body
          ),
          seq(
            optional($.modifiers),
            "enum",
            alias($.simple_identifier, $.type_identifier),
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            $.enum_class_body
          )
        )
      ),

    class_body: ($) => seq("{", optional($._class_member_declarations), "}"),

    _inheritance_specifiers: ($) =>
      prec.left(sep1($.inheritance_specifier, ",")),

    inheritance_specifier: ($) =>
      prec.left(choice($.user_type, $.function_type)),

    _annotated_inheritance_specifier: ($) =>
      seq(repeat($.attribute), $.inheritance_specifier),

    type_parameters: ($) => seq("<", sep1($.type_parameter, ","), ">"),

    type_parameter: ($) =>
      seq(
        optional($.type_parameter_modifiers),
        alias($.simple_identifier, $.type_identifier),
        optional(seq(":", $._type))
      ),

    type_constraints: ($) =>
      prec.right(seq("where", sep1($.type_constraint, ","))),

    type_constraint: ($) =>
      choice($.inheritance_constraint, $.equality_constraint),

    inheritance_constraint: ($) =>
      seq(
        repeat($.attribute),
        $.identifier,
        ":",
        $._possibly_implicitly_unwrapped_type
      ),

    equality_constraint: ($) =>
      seq(repeat($.attribute), $.identifier, choice("=", "=="), $._type),

    _class_member_declarations: ($) => repeat1(seq($._declaration, $._semi)),

    _function_value_parameters: ($) =>
      seq("(", optional(sep1($._function_value_parameter, ",")), ")"),

    _function_value_parameter: ($) =>
      seq(
        optional($.attribute),
        optional(alias($.simple_identifier, $.external_parameter_name)),
        $.parameter,
        optional(seq($._equal_sign, $._expression))
      ),

    parameter: ($) =>
      seq(
        $.simple_identifier,
        ":",
        optional($.parameter_modifiers),
        $._possibly_implicitly_unwrapped_type,
        optional($._three_dot_operator)
      ),

    _constructor_function_decl: ($) => seq("init", optional($._quest)),

    _non_constructor_function_decl: ($) =>
      seq(
        "func",
        choice(
          $.simple_identifier,
          $._referenceable_operator,
          $._additive_operator,
          $._bitwise_binary_operator
        )
      ),

    _referenceable_operator: ($) =>
      choice(
        $.custom_operator,
        $._comparison_operator,
        $._multiplicative_operator,
        $._equality_operator,
        $._comparison_operator
      ),

    throws_modifier: ($) => choice($._throws_keyword, $._rethrows_keyword),

    enum_class_body: ($) =>
      seq("{", repeat(choice($.enum_entry, $._declaration)), "}"),

    enum_entry: ($) =>
      prec.left(
        seq(
          optional($.modifiers),
          "case",
          sep1(
            seq(
              $.simple_identifier,
              optional(
                choice(
                  $.enum_type_parameters,
                  seq($._equal_sign, $._expression)
                )
              )
            ),
            ","
          ),
          optional(";")
        )
      ),

    enum_type_parameters: ($) =>
      seq(
        "(",
        optional(
          sep1(
            seq(
              optional(
                seq(optional($.wildcard_pattern), $.simple_identifier, ":")
              ),
              $._type,
              optional(seq($._equal_sign, $._expression))
            ),
            ","
          )
        ),
        ")"
      ),

    protocol_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          "protocol",
          alias($.simple_identifier, $.type_identifier),
          optional($.type_parameters),
          optional(seq(":", $._inheritance_specifiers)),
          optional($.type_constraints),
          $.protocol_body
        )
      ),

    protocol_body: ($) =>
      seq("{", optional($._protocol_member_declarations), "}"),

    _protocol_member_declarations: ($) =>
      repeat1(seq($._protocol_member_declaration, $._semi)),

    _protocol_member_declaration: ($) =>
      choice(
        alias(
          seq($._bodyless_function_declaration, optional($.function_body)),
          $.protocol_function_declaration
        ),
        $.deinit_declaration,
        $.protocol_property_declaration,
        $.typealias_declaration,
        $.associatedtype_declaration
      ),

    deinit_declaration: ($) =>
      prec.right(seq(optional($.modifiers), "deinit", $.function_body)),

    subscript_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          "subscript",
          optional($.type_parameters),
          $._function_value_parameters,
          optional(
            seq($._arrow_operator, $._possibly_implicitly_unwrapped_type)
          ),
          optional($.type_constraints),
          "{",
          choice(
            optional($.statements),
            repeat(choice($.computed_getter, $.computed_setter))
          ),
          "}"
        )
      ),

    computed_property: ($) =>
      seq(
        "{",
        choice(
          optional($.statements),
          repeat(choice($.computed_getter, $.computed_setter))
        ),
        "}"
      ),

    computed_getter: ($) => seq($.getter_specifier, optional($._block)),

    computed_setter: ($) =>
      seq(
        $.setter_specifier,
        optional(seq("(", $.simple_identifier, ")")),
        optional($._block)
      ),

    getter_specifier: ($) => seq(optional($.mutation_modifier), "get"),
    setter_specifier: ($) => seq(optional($.mutation_modifier), "set"),

    operator_declaration: ($) =>
      seq(
        choice("prefix", "infix", "postfix"),
        "operator",
        $.custom_operator,
        optional(seq(":", $.simple_identifier))
      ),

    precedence_group_declaration: ($) =>
      seq(
        "precedencegroup",
        $.simple_identifier,
        "{",
        optional($.precedence_group_attributes),
        "}"
      ),

    precedence_group_attributes: ($) => repeat1($.precedence_group_attribute),

    precedence_group_attribute: ($) =>
      seq(
        $.simple_identifier,
        ":",
        choice($.simple_identifier, $.boolean_literal)
      ),

    associatedtype_declaration: ($) =>
      seq(
        optional($.modifiers),
        "associatedtype",
        alias($.simple_identifier, $.type_identifier),
        optional(seq(":", $._type)),
        optional($.type_constraints),
        optional(seq($._equal_sign, $._type))
      ),

    ////////////////////////////////
    // Attributes - https://docs.swift.org/swift-book/ReferenceManual/Attributes.html
    ////////////////////////////////

    attribute: ($) =>
      seq(
        "@",
        $.user_type,
        // attribute arguments are a mess of special cases, maybe this is good enough?
        optional(
          seq(
            "(",
            repeat(
              choice(
                $.simple_identifier,
                $.type_arguments,
                $._basic_literal,
                ":",
                "*",
                ",",
                "=="
              )
            ),
            ")"
          )
        )
      ),

    ////////////////////////////////
    // Patterns - https://docs.swift.org/swift-book/ReferenceManual/Patterns.html
    ////////////////////////////////

    // Higher-than-default precedence to resolve `x as SomeType` ambiguity (expression patterns seem not to support
    // as-expressions)
    binding_pattern: ($) =>
      prec.left(1, generate_pattern_matching_rule($, true, false, false, true)),
    non_binding_pattern: ($) =>
      prec.left(
        1,
        generate_pattern_matching_rule($, false, false, false, true)
      ),
    // Higher precedence than pattern w/o binding since these are strictly more flexible
    _binding_pattern_with_expr: ($) =>
      prec.left(2, generate_pattern_matching_rule($, true, false, true, true)),
    _non_binding_pattern_with_expr: ($) =>
      prec.left(2, generate_pattern_matching_rule($, false, false, true, true)),

    _direct_or_indirect_binding: ($) =>
      choice(
        seq($.value_binding_pattern, optional($.type_annotation)),
        seq("case", generate_pattern_matching_rule($, true, false, false))
      ),

    wildcard_pattern: ($) => "_",

    value_binding_pattern: ($) =>
      prec.left(
        choice(
          seq("var", generate_pattern_matching_rule($, false, false)),
          seq("let", generate_pattern_matching_rule($, false, false))
        )
      ),

    // ==========
    // Modifiers
    // ==========

    modifiers: ($) => repeat1(choice($.attribute, $._modifier)),

    parameter_modifiers: ($) => repeat1($.parameter_modifier),

    _modifier: ($) =>
      choice(
        $.member_modifier,
        $.visibility_modifier,
        $.function_modifier,
        $.mutation_modifier,
        $.property_modifier,
        $.inheritance_modifier,
        $.parameter_modifier
      ),

    type_modifiers: ($) => repeat1($.attribute),

    member_modifier: ($) =>
      choice("override", "convenience", "required", "unowned", "weak"),

    visibility_modifier: ($) =>
      seq(
        choice("public", "private", "internal", "fileprivate"),
        optional(seq("(", "set", ")"))
      ),

    type_parameter_modifiers: ($) => repeat1($.attribute),

    function_modifier: ($) => choice("infix", "postfix", "prefix"),

    mutation_modifier: ($) => choice("mutating", "nonmutating"),

    property_modifier: ($) =>
      choice(
        "static", // XXX should be in multiple places
        "lazy",
        "optional"
      ),

    inheritance_modifier: ($) => choice("final", "open"),

    parameter_modifier: ($) => choice("inout", "@escaping", "@autoclosure"),

    use_site_target: ($) =>
      seq(
        choice(
          "property",
          "get",
          "set",
          "receiver",
          "param",
          "setparam",
          "delegate"
        ),
        ":"
      ),

    directive: ($) =>
      token(
        prec(
          PREC.COMMENT,
          choice(
            seq("#if", /.*/),
            seq("#elseif", /.*/),
            seq("#else", /.*/),
            seq("#endif", /.*/)
          )
        )
      ),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function generate_tuple_pattern($, allows_binding, allows_expressions) {
  const pattern_rule = generate_pattern_matching_rule(
    $,
    allows_binding,
    false,
    allows_expressions
  );
  const tuple_pattern_item = choice(
    seq($.simple_identifier, seq(":", pattern_rule)),
    pattern_rule
  );
  return seq("(", sep1(tuple_pattern_item, ","), ")", optional($._quest));
}

function generate_case_pattern($, allows_binding, force) {
  return seq(
    optional($.user_type), // XXX this should just be _type but that creates ambiguity
    $._dot_operator,
    $.simple_identifier,
    optional(generate_tuple_pattern($, allows_binding, true)),
    optional($._quest)
  );
}

function generate_type_casting_pattern($, allows_binding) {
  return choice(
    seq("is", $._type),
    seq(generate_pattern_matching_rule($, allows_binding, false), "as", $._type)
  );
}

function generate_pattern_matching_rule(
  $,
  allows_binding,
  requires_case_keyword,
  allows_expressions,
  force
) {
  if (!force && !requires_case_keyword) {
    if (allows_binding && !allows_expressions) {
      return $.binding_pattern;
    }

    if (!allows_binding && !allows_expressions) {
      return $.non_binding_pattern;
    }

    if (allows_binding && allows_expressions) {
      return $._binding_pattern_with_expr;
    }

    if (!allows_binding && allows_expressions) {
      return $._non_binding_pattern_with_expr;
    }
  }

  const always_allowed_patterns = [
    $.wildcard_pattern,
    generate_tuple_pattern($, allows_binding, allows_expressions),
    generate_type_casting_pattern($, allows_binding),
  ];

  const binding_pattern_prefix = requires_case_keyword
    ? choice(seq("case", "var"), seq("case", "let"))
    : choice("var", "let");

  const binding_pattern_if_allowed = allows_binding
    ? [
        seq(
          binding_pattern_prefix,
          generate_pattern_matching_rule($, false, false, false),
          optional($._quest)
        ),
      ]
    : [];

  const case_pattern = requires_case_keyword
    ? seq("case", generate_case_pattern($, allows_binding))
    : generate_case_pattern($, allows_binding);

  const expression_pattern = allows_expressions
    ? $._expression
    : $.simple_identifier;

  const all_patterns = always_allowed_patterns
    .concat(binding_pattern_if_allowed)
    .concat(case_pattern)
    .concat(expression_pattern);

  return choice(...all_patterns);
}
