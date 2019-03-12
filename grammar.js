module.exports = grammar({
  name: "elm",

  conflicts: $ => [
    [$._case_of_tail2],
    [$.upper_case_qid, $.value_qid],
    [$._more_case_of_branches]
  ],

  externals: $ => [
    $.virtual_end_decl,
    $.virtual_open_section,
    $.virtual_end_section
  ],

  extras: $ => [
    $.block_comment,
    $.block_documentation,
    $.line_comment,
    /[\s\uFEFF\u2060\u200B]|\\\r?\n/
  ],

  rules: {
    file: $ =>
      seq(
        optional(seq($.module_declaration, $.virtual_end_decl)),
        optional($._import_list),
        optional($._top_decl_list)
      ),

    module_declaration: $ =>
      prec.left(
        choice(
          seq(optional($.port), $.module, $.upper_case_qid, $.exposing_list),
          seq(
            $.effect,
            $.module,
            $.upper_case_qid,
            $.where,
            $.record_expr,
            $.exposing_list
          )
        )
      ),

    _import_list: $ => repeat1(seq($.import_clause, $.virtual_end_decl)),
    _top_decl_list: $ => repeat1(seq($._declaration, $.virtual_end_decl)),

    // MODULE DECLARATION

    exposing_list: $ =>
      seq(
        $.exposing,
        $.left_parenthesis,
        choice($.double_dot, commaSep1($._exposed_item, $.comma)),
        $.right_parenthesis
      ),

    _exposed_item: $ =>
      choice($.exposed_value, $.exposed_type, $.exposed_operator),

    exposed_value: $ => $.lower_case_identifier,

    exposed_type: $ =>
      seq($.upper_case_identifier, optional($.exposed_union_constructors)),

    type_expression: $ => prec.right(2, arrowSep1($.type_ref, $.arrow)),

    exposed_union_constructors: $ =>
      seq(
        $.left_parenthesis,
        choice($.double_dot, commaSep1($.exposed_union_constructor, $.comma)),
        $.right_parenthesis
      ),

    exposed_union_constructor: $ => $.upper_case_identifier,

    exposed_operator: $ => $._operator_as_function_inner,

    // WHITESPACE-SENSITIVE RULES

    _upper_case_identifier_without_leading_whitespace: $ =>
      token.immediate(/[A-Z][a-zA-Z0-9_]*/),

    _lower_case_identifier_without_leading_whitespace: $ =>
      token.immediate(/[a-z][a-zA-Z0-9_]*/),

    _dot_without_leading_whitespace: $ => token.immediate("."),

    upper_case_qid: $ =>
      prec.right(
        seq(
          $.upper_case_identifier,
          repeat(
            seq(
              alias($._dot_without_leading_whitespace, $.dot),
              alias(
                $._upper_case_identifier_without_leading_whitespace,
                $.upper_case_identifier
              )
            )
          )
        )
      ),

    value_qid: $ =>
      choice(
        $.lower_case_identifier,
        seq(
          $.upper_case_identifier,
          alias($._dot_without_leading_whitespace, $.dot),
          repeat(
            seq(
              alias(
                $._upper_case_identifier_without_leading_whitespace,
                $.upper_case_identifier
              ),
              alias($._dot_without_leading_whitespace, $.dot)
            )
          ),
          alias(
            $._lower_case_identifier_without_leading_whitespace,
            $.lower_case_identifier
          )
        )
      ),

    field_accessor_function_expr: $ =>
      seq(
        $.dot,
        alias(
          $._lower_case_identifier_without_leading_whitespace,
          $.lower_case_identifier
        )
      ),

    // IMPORT DECLARATION
    import_clause: $ =>
      seq(
        $.import,
        $.upper_case_qid,
        optional($.as_clause),
        optional($.exposing_list)
      ),

    as_clause: $ => seq($.as, $.upper_case_identifier),

    // TOP-LEVEL DECLARATION

    _declaration: $ =>
      choice(
        $.value_declaration,
        $.type_alias_declaration,
        $.type_declaration,
        $.type_annotation,
        $.port_annotation,
        $.infix_declaration
      ),

    value_declaration: $ =>
      seq($._internal_value_declaration_left, $.eq, $._expression),

    _internal_value_declaration_left: $ =>
      choice($.function_declaration_left, $.pattern),

    function_declaration_left: $ =>
      prec(
        3,
        seq($.lower_case_identifier, repeat($._function_declaration_pattern))
      ),

    _function_declaration_pattern: $ =>
      choice(
        $.anything_pattern,
        $.lower_pattern,
        $.tuple_pattern,
        $.unit_expr,
        $.list_pattern,
        $.record_pattern,
        $._literal_expr_group,
        $._parenthesized_pattern
      ),

    // TYPE DECLARATIONS AND REFERENCES

    type_declaration: $ =>
      prec.right(
        seq(
          $.type,
          $.upper_case_identifier,
          repeat($.lower_type_name),
          $.eq,
          $.union_variant,
          repeat($._more_union_variants)
        )
      ),

    lower_type_name: $ => $.lower_case_identifier,

    union_variant: $ =>
      prec.right(
        seq($.upper_case_identifier, repeat($._single_type_expression))
      ),

    _more_union_variants: $ => seq($.pipe, $.union_variant),

    type_alias_declaration: $ =>
      seq(
        $.type,
        $.alias,
        $.upper_case_identifier,
        repeat($.lower_type_name),
        $.eq,
        $.type_expression
      ),

    type_expression: $ => arrowSep1($._type_expression_inner, $.arrow),

    _type_expression_inner: $ => choice($.type_ref, $._single_type_expression),

    type_ref: $ =>
      prec(2, seq($.upper_case_qid, repeat1($._single_type_expression))),

    _single_type_expression: $ =>
      choice(
        alias($.type_ref_without_args, $.type_ref),
        $.type_variable_ref,
        $.record_type,
        $.tuple_type,
        seq($.left_parenthesis, $.type_expression, $.right_parenthesis)
      ),

    type_ref_without_args: $ => $.upper_case_qid,

    type_variable_ref: $ => $.lower_case_identifier,

    record_type: $ =>
      seq(
        $.left_brace,
        optional(
          seq(optional($._record_base), commaSep1($.field_type, $.comma))
        ),
        $.right_brace
      ),

    field_type: $ => seq($.lower_case_identifier, $.colon, $.type_expression),

    tuple_type: $ =>
      choice(
        $.unit_expr,
        seq(
          $.left_parenthesis,
          $.type_expression,
          repeat1(seq($.comma, $.type_expression)),
          $.right_parenthesis
        )
      ),

    type_annotation: $ =>
      seq($.lower_case_identifier, $.colon, $.type_expression),

    port_annotation: $ =>
      seq($.port, $.lower_case_identifier, $.colon, $.type_expression),

    // EXPRESSIONS

    _expression: $ => choice($.bin_op_expr, $._call_or_atom),

    bin_op_expr: $ =>
      prec(
        5,
        seq(
          $._call_or_atom,
          prec.right(repeat1(seq($.operator, $._call_or_atom)))
        )
      ),

    operator: $ => $.operator_identifier,

    operator_as_function_expr: $ => $._operator_as_function_inner,

    _operator_as_function_inner: $ =>
      seq($.left_parenthesis, $.operator_identifier, $.right_parenthesis),

    _call_or_atom: $ => choice($.function_call_expr, $._atom),

    function_call_expr: $ =>
      prec.right(seq($._function_call_target, repeat1($._atom))),

    _function_call_target: $ =>
      prec(
        2,
        choice(
          $.field_access_expr,
          $.value_expr,
          $.field_accessor_function_expr,
          $.operator_as_function_expr,
          $.parenthesized_expr,
          $.anonymous_function_expr
        )
      ),

    _atom: $ =>
      choice(
        $._literal_expr_group,
        // $.negate_expr,
        $.field_access_expr,
        $.value_expr,
        $.field_accessor_function_expr,
        $.operator_as_function_expr,
        $.parenthesized_expr,
        $.unit_expr,
        $.tuple_expr,
        $.list_expr,
        $.record_expr,
        $.if_else_expr,
        $.case_of_expr,
        $.let_in_expr,
        $.anonymous_function_expr
      ),

    field_access_expr: $ =>
      prec.right(seq($._field_access_start, repeat1($.field_access_segment))),

    _field_access_start: $ =>
      prec(3, choice($.value_expr, $.parenthesized_expr, $.record_expr)),

    field_access_segment: $ =>
      prec.left(
        seq(
          alias($._dot_without_leading_whitespace, $.dot),
          $.lower_case_identifier
        )
      ),

    // negate_expr: $ => seq("-", $._atom), // todo disallow whitespace

    parenthesized_expr: $ =>
      seq($.left_parenthesis, $._expression, $.right_parenthesis),

    _literal_expr_group: $ =>
      choice(
        $.char_constant_expr,
        $.number_constant_expr,
        $.string_constant_expr
      ),

    char_constant_expr: $ => seq($.open_char, $._string_part, $.close_char),

    open_char: $ => $._char_quote,

    close_char: $ => $._char_quote,

    number_constant_expr: $ => $.number_literal,

    string_constant_expr: $ =>
      choice(
        seq($.open_quote, optional($._string_parts), $.close_quote),
        seq(
          alias($.open_quote_multiline, $.open_quote),
          optional($._string_parts_multiline),
          alias($.close_quote_multiline, $.close_quote)
        )
      ),

    _string_part: $ =>
      choice($.regular_string_part, $.string_escape, $.invalid_string_escape),

    _string_part_multiline: $ =>
      choice(
        alias($.regular_string_part_multiline, $.regular_string_part),
        $.string_escape,
        $.invalid_string_escape
      ),

    _string_parts: $ => repeat1($._string_part),
    _string_parts_multiline: $ => repeat1($._string_part_multiline),

    anonymous_function_expr: $ =>
      seq($.backslash, repeat1($.pattern), $.arrow, $._expression),

    value_expr: $ => choice($.value_qid, $.upper_case_qid),

    tuple_expr: $ =>
      seq(
        $.left_parenthesis,
        $._expression,
        repeat1(seq($.comma, $._expression)),
        $.right_parenthesis
      ),

    unit_expr: $ => seq($.left_parenthesis, $.right_parenthesis),

    list_expr: $ =>
      seq(
        $.left_square_bracket,
        optional(commaSep1($._expression, $.comma)),
        $.right_square_bracket
      ),

    record_expr: $ =>
      seq($.left_brace, optional($._record_inner), $.right_brace),

    record_base_identifier: $ => $.lower_case_identifier,

    _record_base: $ => seq($.record_base_identifier, $.pipe),

    _record_inner: $ => seq(optional($._record_base), $._record_inner_fields),

    _record_inner_fields: $ => commaSep1($.field, $.comma),

    field: $ => seq($.lower_case_identifier, $.eq, $._expression),

    if_else_expr: $ =>
      seq(
        $.if,
        $._expression,
        $.then,
        $._expression,
        repeat(
          prec.right(seq($.else, $.if, $._expression, $.then, $._expression))
        ),
        $.else,
        $._expression
      ),

    case_of_expr: $ => seq($.case, $._expression, $._case_of_tail),

    _case_of_tail: $ => seq($.of, $._case_of_tail2),

    _case_of_tail2: $ =>
      seq(
        $.virtual_open_section,
        $.case_of_branch,
        optional($._more_case_of_branches),
        optional($.virtual_end_section)
      ),

    _more_case_of_branches: $ =>
      prec.dynamic(6, repeat1(seq($.virtual_end_decl, $.case_of_branch))),

    case_of_branch: $ => seq($.pattern, $.arrow, $._expression),

    let_in_expr: $ => seq($.let, $._let_in_tail),

    _let_in_tail: $ =>
      seq(
        $.virtual_open_section,
        $._inner_declaration,
        optional($._more_inner_declarations),
        $.virtual_end_section,
        $.in,
        $._expression
      ),

    _inner_declaration: $ => choice($.value_declaration, $.type_annotation),

    _more_inner_declarations: $ =>
      repeat1(seq($.virtual_end_decl, $._inner_declaration)),

    // PATTERNS

    pattern: $ =>
      seq(choice($.cons_pattern, $._single_pattern), optional($.pattern_as)),

    pattern_as: $ => seq($.as, $.lower_case_identifier),

    cons_pattern: $ =>
      seq($._single_pattern, repeat1(seq("::", $._single_pattern))),

    _single_pattern: $ =>
      choice(
        $._parenthesized_pattern,
        $.anything_pattern,
        $.lower_pattern,
        $.union_pattern,
        $.tuple_pattern,
        $.unit_expr,
        $.list_pattern,
        $.record_pattern,
        $._literal_expr_group
      ),

    lower_pattern: $ => $.lower_case_identifier,

    anything_pattern: $ => $.underscore,

    record_pattern: $ =>
      seq($.left_brace, commaSep1($.lower_pattern, $.comma), $.right_brace),

    list_pattern: $ =>
      seq(
        $.left_square_bracket,
        optional(commaSep1($.lower_pattern, $.comma)),
        $.right_square_bracket
      ),

    union_pattern: $ =>
      prec.right(seq($.upper_case_qid, repeat($._union_argument_pattern))),

    _union_argument_pattern: $ =>
      choice(
        $.anything_pattern,
        $.lower_pattern,
        $.tuple_pattern,
        $.upper_case_qid,
        $.unit_expr,
        $.list_pattern,
        $.record_pattern,
        $._literal_expr_group,
        $._parenthesized_pattern
      ),

    tuple_pattern: $ =>
      seq(
        $.left_parenthesis,
        $.pattern,
        $.comma,
        commaSep1($.pattern, $.comma),
        $.right_parenthesis
      ),

    _parenthesized_pattern: $ =>
      seq($.left_parenthesis, $.pattern, $.right_parenthesis),

    // MISC
    infix_declaration: $ =>
      seq(
        $.infix,
        alias(choice("left", "right", "non"), $.lower_case_identifier),
        $.number_literal,
        $._operator_as_function_inner,
        $.eq,
        $.value_expr
      ),

    // Stuff from lexer

    block_comment: $ => token(seq("{-", repeat(choice(/[^-]/, /-[^}]/)), "-}")),

    block_documentation: $ =>
      prec(5, token(seq("{-| ", repeat(choice(/[^-]/, /-[^}]/)), "-}"))),

    line_comment: $ => token(seq("--", /.*/)),

    upper_case_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,

    lower_case_identifier: $ => /[a-z][a-zA-Z0-9_]*/,

    number_literal: $ =>
      choice(/(-)?[0-9]+(\.[0-9]+)?(e[0-9]+)?/, $._hex_literal),

    _hex_literal: $ => /0x[0-9A-Fa-f]+/,

    open_quote: $ => choice('"'),

    close_quote: $ => choice('"'),

    open_quote_multiline: $ => choice('"""'),

    close_quote_multiline: $ => choice('"""'),

    regular_string_part: $ => choice(/[^\\\"\n]+/, /\"/),
    regular_string_part_multiline: $ => choice(/[^\\\"]+/, /\"\"?/),

    string_escape: $ => /\\(u\{[0-9A-Fa-f]{4,6}\}|[nrt\"'\\])/,

    invalid_string_escape: $ => /\\(u\{[^}]*\}|[^nrt\"'\\])/,

    module: $ => "module",
    effect: $ => "effect",
    where: $ => "where",
    import: $ => "import",
    as: $ => "as",
    exposing: $ => "exposing",
    if: $ => "if",
    then: $ => "then",
    else: $ => "else",
    case: $ => "case",
    of: $ => "of",
    let: $ => "let",
    in: $ => "in",
    type: $ => "type",
    alias: $ => "alias",
    port: $ => "port",
    infix: $ => "infix",
    left_parenthesis: $ => "(",
    right_parenthesis: $ => ")",
    left_square_bracket: $ => "[",
    right_square_bracket: $ => "]",
    left_brace: $ => "{",
    right_brace: $ => "}",
    double_dot: $ => "..",
    comma: $ => ",",
    eq: $ => "=",
    arrow: $ => "->",
    colon: $ => ":",
    pipe: $ => "|",
    backslash: $ => "\\",
    underscore: $ => "_",
    dot: $ => ".",
    operator_identifier: $ =>
      choice(
        "+",
        "-",
        "*",
        "/",
        "//",
        "^",
        "==",
        "/=",
        "<",
        ">",
        "<=",
        ">=",
        "&&",
        "||",
        "++",
        "<|",
        "|>",
        "<<",
        ">>",
        "::",
        "</>"
      ),
    infix: $ => "infix",

    _char_quote: $ => "'"
  }
});

function commaSep1(rule, comma) {
  return sep1(rule, comma);
}

function pipeSep1(rule, pipe) {
  return sep1(rule, pipe);
}

function arrowSep1(rule, arrow) {
  return sep1(rule, arrow);
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
