/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  COMMENT: 1,
  STRING: 2, // In a string, prefer string characters over comments
  FIELD_ACCESS_START: 1,
  PART: 1,
  FUNCTION_START: 1,
  CASE_OF_BRANCH: 6,
  FUNC: 10,
};

module.exports = grammar({
  name: "elm",

  conflicts: ($) => [
    [$.upper_case_qid, $.value_qid],
    [$.function_call_expr],
    [$.case_of_expr],
    [$._function_call_target, $._atom],
  ],

  externals: ($) => [
    $._virtual_end_decl,
    $._virtual_open_section,
    $._virtual_end_section,
    $.minus_without_trailing_whitespace,
    $.glsl_content,
    $._block_comment_content,
  ],

  extras: ($) => [
    $.block_comment,
    $.line_comment,
    /[\s\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  word: ($) => $.lower_case_identifier,

  rules: {
    file: ($) =>
      seq(
        optional(
          seq(
            field("moduleDeclaration", $.module_declaration),
            $._virtual_end_decl
          )
        ),
        optional($._import_list),
        optional($._top_decl_list)
      ),

    block_comment: ($) =>
      prec(PREC.COMMENT, seq("{-", $._block_comment_content, "-}")),

    line_comment: ($) => token(prec(PREC.COMMENT, seq(/--/, repeat(/[^\n]/)))),

    module_declaration: ($) =>
      prec.left(
        choice(
          seq(
            optional($.port),
            $.module,
            field("name", $.upper_case_qid),
            field("exposing", $.exposing_list)
          ),
          seq(
            $.effect,
            $.module,
            field("name", $.upper_case_qid),
            $.where,
            $.record_expr,
            field("exposing", $.exposing_list)
          )
        )
      ),

    _import_list: ($) => repeat1(seq($.import_clause, $._virtual_end_decl)),
    _top_decl_list: ($) =>
      repeat1(
        seq(
          choice(
            $.value_declaration,
            $.type_alias_declaration,
            $.type_declaration,
            $.type_annotation,
            $.port_annotation,
            $.infix_declaration
          ),
          $._virtual_end_decl
        )
      ),

    // MODULE DECLARATION

    exposing_list: ($) =>
      seq(
        $.exposing,
        "(",
        choice(
          field("doubleDot", $.double_dot),
          commaSep1(
            choice($.exposed_value, $.exposed_type, $.exposed_operator),
            ","
          )
        ),
        ")"
      ),

    exposed_value: ($) => $.lower_case_identifier,

    exposed_type: ($) =>
      seq($.upper_case_identifier, optional($.exposed_union_constructors)),

    exposed_union_constructors: ($) => seq("(", $.double_dot, ")"),

    exposed_union_constructor: ($) => $.upper_case_identifier,

    exposed_operator: ($) => $._operator_as_function_inner,

    // WHITESPACE-SENSITIVE RULES

    _upper_case_identifier_without_leading_whitespace: ($) =>
      token.immediate(/\p{Lu}[_\d\p{L}]*/),

    _lower_case_identifier_without_leading_whitespace: ($) =>
      token.immediate(/\p{Ll}[_\d\p{L}]*/),

    _dot_without_leading_whitespace: ($) => token.immediate("."),

    upper_case_qid: ($) =>
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

    value_qid: ($) =>
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

    field_accessor_function_expr: ($) =>
      seq(
        $.dot,
        alias(
          $._lower_case_identifier_without_leading_whitespace,
          $.lower_case_identifier
        )
      ),

    // IMPORT DECLARATION
    import_clause: ($) =>
      seq(
        $.import,
        field("moduleName", $.upper_case_qid),
        field("asClause", optional($.as_clause)),
        field("exposing", optional($.exposing_list))
      ),

    as_clause: ($) => seq($.as, field("name", $.upper_case_identifier)),

    // TOP-LEVEL DECLARATION

    value_declaration: ($) =>
      seq(
        choice(
          field("functionDeclarationLeft", $.function_declaration_left),
          field("pattern", $.pattern)
        ),
        $.eq,
        field("body", $._expression)
      ),

    function_declaration_left: ($) =>
      prec(
        PREC.FUNCTION_START,
        seq(
          $.lower_case_identifier,
          field(
            "pattern",
            repeat(
              choice(
                $.anything_pattern,
                $.lower_pattern,
                $.tuple_pattern,
                $.unit_expr,
                $.list_pattern,
                $.record_pattern,
                $._literal_expr_group,
                $._parenthesized_pattern
              )
            )
          )
        )
      ),

    // TYPE DECLARATIONS AND REFERENCES

    type_declaration: ($) =>
      prec.left(
        seq(
          $.type,
          field("name", $.upper_case_identifier),
          field("typeName", repeat($.lower_type_name)),
          $.eq,
          field("unionVariant", $.union_variant),
          repeat($._more_union_variants)
        )
      ),

    lower_type_name: ($) => $.lower_case_identifier,

    union_variant: ($) =>
      prec.left(
        seq(
          field("name", $.upper_case_identifier),
          repeat($._single_type_expression)
        )
      ),

    _more_union_variants: ($) =>
      seq("|", field("unionVariant", $.union_variant)),

    type_alias_declaration: ($) =>
      seq(
        $.type,
        $.alias,
        field("name", $.upper_case_identifier),
        field("typeVariable", repeat($.lower_type_name)),
        $.eq,
        field("typeExpression", $.type_expression)
      ),

    type_expression: ($) => arrowSep1($._type_expression_inner, $.arrow),

    _type_expression_inner: ($) =>
      choice($.type_ref, $._single_type_expression),

    type_ref: ($) => seq($.upper_case_qid, repeat1($._single_type_expression)),

    _single_type_expression: ($) =>
      choice(
        field("part", alias($.type_ref_without_args, $.type_ref)),
        field("part", $.type_variable),
        field("part", $.record_type),
        field("part", $.tuple_type),
        seq("(", field("part", $.type_expression), ")")
      ),

    type_ref_without_args: ($) => $.upper_case_qid,

    type_variable: ($) => $.lower_case_identifier,

    record_type: ($) =>
      seq(
        "{",
        optional(
          seq(
            optional($._record_base),
            commaSep1(field("fieldType", $.field_type), ",")
          )
        ),
        "}"
      ),

    field_type: ($) =>
      seq(
        field("name", $.lower_case_identifier),
        $.colon,
        field("typeExpression", $.type_expression)
      ),

    tuple_type: ($) =>
      choice(
        field("unitExpr", $.unit_expr),
        seq(
          "(",
          field("typeExpression", $.type_expression),
          repeat1(seq(",", field("typeExpression", $.type_expression))),
          ")"
        )
      ),

    type_annotation: ($) =>
      seq(
        field("name", $.lower_case_identifier),
        $.colon,
        field("typeExpression", $.type_expression)
      ),

    port_annotation: ($) =>
      seq(
        $.port,
        field("name", $.lower_case_identifier),
        $.colon,
        field("typeExpression", $.type_expression)
      ),

    // EXPRESSIONS

    _expression: ($) => choice($.bin_op_expr, $._call_or_atom),

    bin_op_expr: ($) =>
      field(
        "part",
        prec(
          PREC.PART,
          seq(
            $._call_or_atom,
            prec.right(repeat1(seq($.operator, $._call_or_atom)))
          )
        )
      ),

    operator: ($) => $.operator_identifier,

    operator_as_function_expr: ($) => $._operator_as_function_inner,

    _operator_as_function_inner: ($) =>
      seq("(", field("operator", $.operator_identifier), ")"),

    _call_or_atom: ($) => choice($.function_call_expr, $._atom),

    function_call_expr: ($) =>
      prec.dynamic(
        PREC.FUNC,
        seq(
          field("target", $._function_call_target),
          field("arg", repeat1($._atom))
        )
      ),

    _function_call_target: ($) =>
      choice(
        $.field_access_expr,
        $.value_expr,
        $.field_accessor_function_expr,
        $.operator_as_function_expr,
        $.parenthesized_expr
      ),

    _atom: ($) =>
      choice(
        $._literal_expr_group,
        $.negate_expr,
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
        $.anonymous_function_expr,
        $.glsl_code_expr
      ),

    field_access_expr: ($) =>
      prec.left(
        seq(
          field("target", $._field_access_start),
          repeat1($._field_access_segment)
        )
      ),

    _field_access_start: ($) =>
      prec(
        PREC.FIELD_ACCESS_START,
        choice(
          $.field_access_expr,
          choice($.value_expr, $.parenthesized_expr, $.record_expr)
        )
      ),

    _field_access_segment: ($) =>
      prec.left(
        seq(
          alias($._dot_without_leading_whitespace, $.dot),
          alias(
            $._lower_case_identifier_without_leading_whitespace,
            $.lower_case_identifier
          )
        )
      ),

    negate_expr: ($) =>
      seq(
        alias($.minus_without_trailing_whitespace, $.operator_identifier),
        $._atom
      ), // todo disallow whitespace

    parenthesized_expr: ($) =>
      seq("(", field("expression", $._expression), ")"),

    _literal_expr_group: ($) =>
      choice(
        $.char_constant_expr,
        $.number_constant_expr,
        $.string_constant_expr
      ),

    char_constant_expr: ($) =>
      seq(
        alias("'", $.open_char),
        choice(
          alias(token(/[^\\\n']/), $.regular_string_part),
          $.string_escape,
          $.invalid_string_escape
        ),
        alias("'", $.close_char)
      ),

    number_constant_expr: ($) => $.number_literal,

    string_constant_expr: ($) =>
      choice(
        seq(
          alias('"""', $.open_quote),
          repeat(
            choice(
              alias(
                token.immediate(
                  prec(
                    PREC.STRING,
                    repeat1(choice(/[^\\"]/, /"[^"]/, /""[^"]/))
                  )
                ),
                $.regular_string_part
              ),
              $.string_escape,
              $.invalid_string_escape
            )
          ),
          alias('"""', $.close_quote)
        ),
        seq(
          alias('"', $.open_quote),
          repeat(
            choice(
              alias(
                token.immediate(prec(PREC.STRING, repeat1(/[^\\"\n]/))),
                $.regular_string_part
              ),
              $.string_escape,
              $.invalid_string_escape
            )
          ),
          alias('"', $.close_quote)
        )
      ),

    anonymous_function_expr: ($) =>
      seq(
        $.backslash,
        field("param", repeat1($.pattern)),
        $.arrow,
        field("expr", $._expression)
      ),

    value_expr: ($) => field("name", choice($.value_qid, $.upper_case_qid)),

    tuple_expr: ($) =>
      seq(
        "(",
        field("expr", $._expression),
        repeat1(seq(",", field("expr", $._expression))),
        ")"
      ),

    unit_expr: ($) => seq("(", ")"),

    list_expr: ($) =>
      seq("[", optional(commaSep1(field("exprList", $._expression), ",")), "]"),

    record_expr: ($) => seq("{", optional($._record_inner), "}"),

    record_base_identifier: ($) => $.lower_case_identifier,

    _record_base: ($) =>
      seq(field("baseRecord", $.record_base_identifier), "|"),

    _record_inner: ($) =>
      seq(optional($._record_base), commaSep1(field("field", $.field), ",")),

    field: ($) =>
      seq(
        field("name", $.lower_case_identifier),
        $.eq,
        field("expression", $._expression)
      ),

    if_else_expr: ($) =>
      seq(
        $._if,
        $._then,
        repeat(prec.left(seq("else", $._if, $._then))),
        $._else
      ),

    _if: ($) => seq("if", field("exprList", $._expression)),
    _then: ($) => seq("then", field("exprList", $._expression)),
    _else: ($) => seq("else", field("exprList", $._expression)),

    case_of_expr: ($) =>
      choice(
        seq(
          "(",
          $.case,
          field("expr", $._expression),
          $.of,
          $._virtual_open_section,
          field("branch", $.case_of_branch),
          optional($._more_case_of_branches),
          optional($._virtual_end_section),
          ")"
        ),
        seq(
          $.case,
          field("expr", $._expression),
          $.of,
          $._virtual_open_section,
          field("branch", $.case_of_branch),
          optional($._more_case_of_branches),
          $._virtual_end_section
        )
      ),

    _more_case_of_branches: ($) =>
      prec.dynamic(
        PREC.CASE_OF_BRANCH,
        repeat1(seq($._virtual_end_decl, field("branch", $.case_of_branch)))
      ),

    case_of_branch: ($) =>
      seq(field("pattern", $.pattern), $.arrow, field("expr", $._expression)),

    let_in_expr: ($) =>
      seq(
        "let",
        $._virtual_open_section,
        $._inner_declaration,
        optional(repeat1(seq($._virtual_end_decl, $._inner_declaration))),
        $._virtual_end_section,
        "in",
        field("body", $._expression)
      ),

    _inner_declaration: ($) =>
      choice(field("valueDeclaration", $.value_declaration), $.type_annotation),

    // PATTERNS

    pattern: ($) =>
      seq(
        choice(field("child", $.cons_pattern), $._single_pattern),
        optional(seq($.as, field("patternAs", $.lower_pattern)))
      ),

    cons_pattern: ($) =>
      seq(
        field("part", $._single_pattern_cons),
        seq("::", field("part", choice($.cons_pattern, $._single_pattern_cons)))
      ),

    _single_pattern_cons: ($) =>
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

    _single_pattern: ($) =>
      choice(
        seq("(", field("child", $.pattern), ")"),
        field("child", $.anything_pattern),
        field("child", $.lower_pattern),
        field("child", $.union_pattern),
        field("child", $.tuple_pattern),
        field("child", $.unit_expr),
        field("child", $.list_pattern),
        field("child", $.record_pattern),
        field("child", $._literal_expr_group)
      ),

    lower_pattern: ($) => $.lower_case_identifier,

    anything_pattern: ($) => $.underscore,

    record_pattern: ($) =>
      seq("{", commaSep1(field("patternList", $.lower_pattern), ","), "}"),

    list_pattern: ($) =>
      seq("[", optional(commaSep1(field("part", $.pattern), ",")), "]"),

    union_pattern: ($) =>
      prec.left(
        seq(
          field("constructor", $.upper_case_qid),
          field("argPattern", repeat($._union_argument_pattern))
        )
      ),

    nullary_constructor_argument_pattern: ($) => $.upper_case_qid,

    _union_argument_pattern: ($) =>
      choice(
        $.anything_pattern,
        $.lower_pattern,
        $.tuple_pattern,
        $.nullary_constructor_argument_pattern,
        $.unit_expr,
        $.list_pattern,
        $.record_pattern,
        $._literal_expr_group,
        $._parenthesized_pattern
      ),

    tuple_pattern: ($) =>
      seq(
        "(",
        field("pattern", $.pattern),
        ",",
        commaSep1(field("pattern", $.pattern), ","),
        ")"
      ),

    _parenthesized_pattern: ($) => seq("(", $.pattern, ")"),

    // MISC
    infix_declaration: ($) =>
      seq(
        $.infix,
        field(
          "associativity",
          alias(choice("left", "right", "non"), $.lower_case_identifier)
        ),
        field("precedence", $.number_literal),
        $._operator_as_function_inner,
        $.eq,
        $.value_expr
      ),

    glsl_code_expr: ($) =>
      seq($._glsl_begin, field("content", $.glsl_content), $._glsl_end),

    _glsl_begin: ($) => "[glsl|",
    _glsl_end: ($) => "|]",

    // Stuff from lexer

    upper_case_identifier: ($) => /\p{Lu}[_\d\p{L}]*/,

    lower_case_identifier: ($) => /\p{Ll}[_\d\p{L}]*/,

    number_literal: ($) =>
      token(choice(/-?[0-9]+(\.[0-9]+)?(e-?[0-9]+)?/, /0x[0-9A-Fa-f]+/)),

    string_escape: ($) => /\\(u\{[0-9A-Fa-f]{4,6}\}|[nrt\"'\\])/,

    invalid_string_escape: ($) => /\\(u\{[^}]*\}|[^nrt\"'\\])/,

    module: ($) => "module",
    effect: ($) => "effect",
    where: ($) => "where",
    import: ($) => "import",
    as: ($) => "as",
    exposing: ($) => "exposing",
    case: ($) => "case",
    of: ($) => "of",
    type: ($) => "type",
    alias: ($) => "alias",
    port: ($) => "port",
    infix: ($) => "infix",
    double_dot: ($) => "..",
    eq: ($) => "=",
    arrow: ($) => "->",
    colon: ($) => ":",
    backslash: ($) => "\\",
    underscore: ($) => "_",
    dot: ($) => ".",
    operator_identifier: ($) =>
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
        "</>",
        "<?>",
        "|.",
        "|="
      ),
  },
});

function commaSep1(rule, comma) {
  return sep1(rule, comma);
}

function arrowSep1(rule, arrow) {
  return sep1(rule, arrow);
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
