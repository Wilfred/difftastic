const PREC = {
  call: 14,
  errorset: 13,
  unary: 12,
  postfix: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  special: 1,
  assign: 0,
  if: -1,
  optional: -2,
  array: -3,
  type_field: -4,
};

const numeric_types = [
  "i8",
  "u8",
  "i16",
  "u16",
  "i32",
  "u32",
  "i64",
  "u64",
  "i128",
  "u128",
  "isize",
  "usize",
  "c_short",
  "c_ushort",
  "c_int",
  "c_uint",
  "c_long",
  "c_ulong",
  "c_longlong",
  "c_ulonglong",
  "c_longdouble",
  "c_void",
  "f16",
  "f32",
  "f64",
  "f128",
  "comptime_int",
  "comptime_float",
];

const primitive_types = numeric_types.concat([
  "bool",
  "void",
  "noreturn",
  "type",
  "anyerror",
]);

// @ts-nocheck
module.exports = grammar({
  // eslint-disable
  name: "zig",

  externals: (_) => [],
  word: ($) => $._identifier_text,
  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: ($) => [/\s/, $.line_comment, $.doc_comment],

  conflicts: ($) => [
    [$.optional_type, $.unary_operator],
    [$.array_type, $.array_expression],
    [$.anonymous_struct_enum, $.anonymous_array_expr],
    [$.assignment_expression],
    [$.call_expression],
    [$._type_field_expression, $.identifier],
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    doc_comment: (_) => token(seq("///", /.*/)),
    line_comment: (_) => token(seq("//", /.*/)),

    _any: ($) => choice($._statement, $._expression),

    _statement: ($) =>
      choice($._expression_statement, $._declaration_statement),

    _expression_statement: ($) =>
      prec.left(
        choice(
          seq($._expression, ";"),
          prec(1, $._expression_ending_with_block)
        )
      ),

    _expression_ending_with_block: ($) =>
      prec(
        1,
        choice(
          $.block,
          $.comptime_block,
          $.defer_block,
          $.suspend_block,
          $.resume_block,
          $.if_expression,
          $.while_expression,
          $.for_expression,
          $.test_expression
        )
      ),

    _declaration_statement: ($) =>
      choice(
        $.empty_statement,
        $.assignment_statement,
        $.function_signature,
        $.function_declaration
      ),

    // Everything is a expression, except functions
    _expression: ($) =>
      prec.left(
        choice(
          $.build_in_call_expr,
          $.call_expression,
          $.await_expression,
          $.suspend_expression,
          $.resume_expression,
          $.index_expression,
          $.field_expression,
          $._expression_ending_with_block,
          $.struct_expression,
          $.struct_construction,
          $.anonymous_struct_enum,
          $.enum_expression,
          $.union_expression,
          $.error_expression,
          $.switch_expression,
          $.continue_expression,
          $.break_expression,
          $.return_expression,
          $.assignment_expression,
          $.array_expression,
          $.anonymous_array_expr,
          $.compound_assignment_expr,
          $.payload_expression,
          $.unary_expression,
          $.binary_expression,
          $.reference_expression,
          $.dereference_expression,
          $.orelse_postfix_expression,
          $.try_expression,
          $.range_pattern,
          $.unreachable_expression,
          $.usingnamespace_expression,
          $.defer_expression,
          $._type,
          $._literals,
          $.identifier
        )
      ),

    // Statements
    empty_statement: (_) => ";",

    assignment_statement: ($) =>
      seq(
        optional($.visibility_modifier),
        optional(
          alias(choice("threadlocal", "comptime"), $.assignment_modifier)
        ),
        choice("const", "var"),
        field("name", $.identifier),
        optional(seq(":", field("type", $._type))),
        optional($.linksection_call_expression),
        "=",
        field("expression", $._expression),
        ";"
      ),

    function_signature: ($) =>
      seq(
        optional($.visibility_modifier),
        optional($.function_modifiers),
        "fn",
        field("name", $.identifier),
        field("parameters", $.parameters),
        optional(field("return", $._expression)),
        ";"
      ),

    function_declaration: ($) =>
      seq(
        optional($.visibility_modifier),
        optional($.function_modifiers),
        "fn",
        field("name", $.identifier),
        field("parameters", $.parameters),
        optional(field("return", $._expression)),
        field("body", $.block)
      ),

    visibility_modifier: (_) => choice("pub"),

    function_modifiers: ($) =>
      choice("export", "stdcallcc", "nakedcc", "inline", $.extern_modifier),

    extern_modifier: ($) => seq("extern", optional($.string_literal)),

    parameters: ($) => seq("(", sepBy(",", $.parameter), ")"),

    parameter: ($) =>
      seq(
        optional("comptime"),
        field("name", $.identifier),
        ":",
        field(
          "type",
          choice($._type, alias("var", $.inference_type), $.variadic_parameter)
        )
      ),

    variadic_parameter: (_) => "...",

    // Expressions
    build_in_call_expr: ($) =>
      prec(
        PREC.call,
        seq(
          field(
            "function",
            alias(/@[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/, $.identifier)
          ),
          field("arguments", $.arguments)
        )
      ),

    call_expression: ($) =>
      prec(
        PREC.call,
        seq(
          optional(alias("async", $.call_modifier)),
          field("function", $.identifier),
          field("arguments", $.arguments)
        )
      ),

    await_expression: ($) => prec.left(seq("await", $._expression)),

    suspend_expression: ($) =>
      prec.left(seq("suspend", optional($._expression))),

    resume_expression: ($) => prec.left(seq("resume", optional($._expression))),

    arguments: ($) => seq("(", sepBy(",", $._expression), ")"),

    field_expression: ($) =>
      prec.left(
        PREC.call,
        seq(
          field("value", $._expression),
          ".",
          field(
            "field",
            choice(alias($.identifier, $.field_identifier), $._expression)
          )
        )
      ),

    index_expression: ($) =>
      prec(
        PREC.call,
        seq($._expression, "[", choice($._expression, $.slice_pattern), "]")
      ),

    _pattern: ($) =>
      choice(
        $.slice_pattern,
        $.range_pattern,
        alias($.field_expression, $.field_pattern),
        alias($._literals, $.literal_pattern)
      ),

    slice_pattern: ($) =>
      prec(
        PREC.call,
        seq(
          optional(field("start", $._expression)),
          "..",
          optional(field("end", $._expression))
        )
      ),

    range_pattern: ($) =>
      prec.left(
        seq(field("start", $._expression), "...", field("end", $._expression))
      ),

    switch_expression: ($) =>
      seq(
        "switch",
        "(",
        field("value", $._expression),
        ")",
        field("body", $.switch_block)
      ),

    switch_block: ($) =>
      seq("{", optional(seq(repeat($.switch_arm), $.switch_last_arm)), "}"),

    switch_arm: ($) =>
      seq(
        field("pattern", $.switch_pattern),
        "=>",
        choice(
          seq(field("value", $._expression), ","),
          field("value", prec(1, $._expression_ending_with_block))
        )
      ),

    switch_last_arm: ($) =>
      seq(
        field(
          "pattern",
          choice(alias("else", $.else_switch), $.switch_pattern)
        ),
        "=>",
        field("value", $._expression),
        optional(",")
      ),

    switch_pattern: ($) => choice($._pattern, sepBy1(",", $._pattern)),

    if_expression: ($) =>
      prec.left(
        seq(
          "if",
          $._condition,
          field("consequence", choice($._expression, $.block)),
          optional($._else_tail)
        )
      ),

    while_expression: ($) =>
      prec.left(
        seq(
          optional($.loop_label),
          optional(alias("inline", $.loop_modifier)),
          "while",
          choice($._condition, $._condition_with_continue),
          field("body", $.block),
          optional($._else_tail)
        )
      ),

    for_expression: ($) =>
      prec.left(
        seq(
          optional($.loop_label),
          optional(alias("inline", $.loop_modifier)),
          "for",
          $._condition,
          field("body", $.block),
          optional($._else_tail)
        )
      ),

    _condition: ($) =>
      prec.left(
        seq("(", field("condition", $._expression), ")", optional($.payload))
      ),

    _condition_with_continue: ($) =>
      seq(
        "(",
        field("condition", $._expression),
        ")",
        ":",
        "(",
        field(
          "continue",
          choice($._expression, seq("{", sepBy1(";", $._expression), "}"))
        ),
        ")"
      ),

    _else_tail: ($) => prec(PREC.if, seq("else", $._else_case)),

    _else_case: ($) =>
      prec.left(
        2,
        field(
          "alternative",
          choice($._expression, $.block, $.if_expression, $.payload_expression)
        )
      ),

    loop_label: ($) =>
      seq(field("name", alias($.identifier, $.label_identifier)), ":"),

    payload: ($) =>
      seq(
        "|",
        optional("*"),
        field("values", sepBy1(",", alias($.identifier, $.payload_identifier))),
        "|"
      ),

    payload_expression: ($) =>
      prec.left(seq($.payload, choice($._expression, $.block))),

    break_expression: ($) =>
      prec.left(
        seq(
          "break",
          optional(field("label", $.loop_label_inverse)),
          optional(field("value", $._expression))
        )
      ),

    continue_expression: ($) =>
      seq("continue", optional(field("label", $.loop_label_inverse))),

    loop_label_inverse: ($) =>
      seq(":", field("name", alias($.identifier, $.label_identifier))),

    return_expression: ($) =>
      choice(prec.left(seq("return", $._expression)), prec(-1, "return")),

    test_expression: ($) =>
      seq("test", field("test_name", $.string_literal), field("body", $.block)),

    try_expression: ($) =>
      prec.left(seq("try", field("expression", $._expression))),

    usingnamespace_expression: ($) =>
      prec.left(
        seq(
          optional($.visibility_modifier),
          "usingnamespace",
          field("import", $._expression)
        )
      ),

    linksection_call_expression: ($) =>
      seq(
        field("function", alias("linksection", $.identifier)),
        field("arguments", $.arguments)
      ),

    _type: ($) =>
      prec(
        -1,
        choice(
          $.primitive_type,
          $.optional_type,
          $.pointer_type,
          $.error_type,
          $.array_type,
          $._type_field_expression,
          $.custom_number_type,
          alias($._struct_standalone, $.struct_expression),
          alias($.identifier, $.type_identifier)
        )
      ),

    _type_field_expression: ($) =>
      prec.left(
        PREC.type_field,
        seq(
          field("value", $.identifier),
          repeat(
            seq(".", field("field", alias($.identifier, $.field_identifier)))
          )
        )
      ),

    primitive_type: (_) => choice(...primitive_types),

    custom_number_type: (_) => /(i|u)[0-9]+/,

    // Having the err field optional cause a bunch of conflicts
    // so when `!<type>` happens, it will show as unary expression
    error_type: ($) =>
      prec.left(seq(field("err", $._type), "!", field("ok", $._type))),

    optional_type: ($) => prec(PREC.optional, seq("?", $._type)),

    array_type: ($) =>
      prec(
        PREC.array,
        seq(
          repeat(
            seq(
              "[",
              field(
                "size",
                optional(
                  choice(
                    $.integer_literal,
                    alias($.identifier, $.identifier),
                    alias(seq("*", optional("c")), $.pointer)
                  )
                )
              ),
              "]"
            )
          ),
          optional(repeat($.type_prefix)),
          // Cannot be another array type, since the sintax already cover
          // muldimentional arrays
          choice(
            $.primitive_type,
            $.optional_type,
            $.pointer_type,
            $.error_type,
            $.custom_number_type,
            alias($.identifier, $.type_identifier)
          )
        )
      ),

    pointer_type: ($) =>
      prec.left(seq("*", optional(repeat($.type_prefix)), $._type)),

    type_prefix: ($) =>
      prec(
        -1,
        choice(
          "null",
          "const",
          "volatile",
          "allowzero",
          seq("align", "(", $._expression, ")"),
          seq("promise", "-")
        )
      ),

    defer_expression: ($) =>
      prec.left(seq(choice("defer", "errdefer"), $._expression)),

    comptime_block: ($) => seq("comptime", $.block),

    defer_block: ($) => seq(choice("defer", "errdefer"), $.block),

    suspend_block: ($) => seq("suspend", $.block),

    resume_block: ($) => seq("resume", $.block),

    block: ($) =>
      prec.left(
        seq(
          optional(field("label", $.loop_label)),
          "{",
          optional(repeat($._statement)),
          optional($._expression),
          "}"
        )
      ),

    reference_expression: ($) =>
      prec(PREC.unary, seq("&", field("value", $._expression))),

    dereference_expression: ($) => seq(field("value", $._expression), ".*"),

    orelse_postfix_expression: ($) => seq(field("value", $._expression), ".?"),

    struct_construction: ($) =>
      seq(
        alias($.identifier, $.type_identifier),
        "{",
        field("field", sepBy(",", $.field_init)),
        "}"
      ),

    anonymous_struct_enum: ($) =>
      seq(".{", field("field", sepBy1(",", $.field_init)), "}"),

    field_init: ($) =>
      seq(
        ".",
        field("name", alias($.identifier, $.field_identifier)),
        "=",
        field("value", $._expression)
      ),

    union_expression: ($) =>
      seq(
        optional(alias(choice("packed", "extern"), $.union_modifier)),
        "union",
        optional(
          seq(
            "(",
            field("type", choice($._type, alias("enum", $.inference_type))),
            ")"
          )
        ),
        "{",
        field("field_variant", sepBy(",", $.union_field_variant)),
        optional(repeat($._statement)),
        "}"
      ),

    union_field_variant: ($) =>
      prec(
        2,
        seq(
          field("name", alias($.identifier, $.union_identifier)),
          optional(
            seq(
              ":",
              field("type", choice($._type, alias("var", $.inference_type)))
            )
          )
        )
      ),

    enum_expression: ($) =>
      seq(
        optional(alias(choice("packed", "extern"), $.enum_modifier)),
        "enum",
        optional(seq("(", field("type", $._type), ")")),
        "{",
        field("variant", sepBy(",", $.variant_declaration)),
        optional(repeat($._statement)),
        "}"
      ),

    variant_declaration: ($) =>
      prec(
        2,
        seq(
          field("name", alias($.identifier, $.enum_identifier)),
          optional(seq("=", field("default", $._expression)))
        )
      ),

    struct_expression: ($) =>
      seq(
        optional(alias(choice("packed", "extern"), $.struct_modifier)),
        $._struct_standalone
      ),

    _struct_standalone: ($) =>
      seq(
        "struct",
        "{",
        field("field", sepBy(",", $.field_declaration)),
        optional(repeat($._statement)),
        "}"
      ),

    field_declaration: ($) =>
      prec.left(
        seq(
          optional($.visibility_modifier),
          field("name", alias($.identifier, $.field_identifier)),
          ":",
          field("type", choice($._type, alias("var", $.inference_type))),
          optional(seq("=", field("default", $._expression)))
        )
      ),

    error_expression: ($) =>
      seq("error", choice($._error_one_shorthand, $._default_error)),

    _error_one_shorthand: ($) =>
      seq(".", field("error_variant", alias($.identifier, $.error_identifier))),

    _default_error: ($) =>
      seq(
        "{",
        field(
          "error_variant",
          sepBy(",", alias($.identifier, $.error_identifier))
        ),
        "}"
      ),

    array_expression: ($) =>
      seq(
        repeat(
          seq("[", field("size", choice($.integer_literal, $.identifier)), "]")
        ),
        field("type", $._type),
        field("values", $.array_values)
      ),

    anonymous_array_expr: ($) =>
      seq(
        ".{",
        field("values", alias(sepBy(",", $._expression), $.array_values)),
        "}"
      ),

    array_values: ($) => seq("{", sepBy(",", $._expression), "}"),

    assignment_expression: ($) =>
      prec.left(
        PREC.assign,
        seq(
          optional(choice("defer", "errdefer")),
          field("left", $._expression),
          "=",
          field("right", $._expression)
        )
      ),

    compound_assignment_expr: ($) =>
      prec.left(
        PREC.assign,
        seq(
          field("left", $._expression),
          field("operator", $.assignment_operator),
          field("right", $._expression)
        )
      ),

    unary_expression: ($) =>
      prec.left(
        PREC.unary,
        seq(
          field("operator", $.unary_operator),
          field("expression", $._expression)
        )
      ),

    unreachable_expression: (_) => "unreachable",

    binary_expression: ($) => {
      const table = [
        [PREC.and, "and"],
        [PREC.or, "or"],
        [PREC.bitand, "&"],
        [PREC.bitor, "|"],
        [PREC.bitxor, "^"],
        [PREC.comparative, choice("==", "!=", "<", "<=", ">", ">=")],
        [PREC.shift, choice("<<", ">>")],
        [PREC.additive, choice("+", "-", "++", "+%", "-%")],
        [PREC.multiplicative, choice("*", "/", "%", "**", "*%", "||")],
        [PREC.special, choice("orelse", "catch")],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", alias(operator, $.binary_operator)),
              field("right", $._expression)
            )
          )
        )
      );
    },

    _literals: ($) =>
      choice(
        $.integer_literal,
        $.float_literal,
        $.boolean_literal,
        $.null_literal,
        $.undefined_literal,
        $.char_literal,
        $.string_literal,
        // $.multiline_string_literal,
        $.enum_literal
      ),

    enum_literal: ($) =>
      prec.right(
        seq(".", field("variant", alias($.identifier, $.enum_identifier)))
      ),

    integer_literal: (_) =>
      token(seq(choice(/[0-9]+/, /0x[0-9a-fA-F]+/, /0b[01]+/, /0o[0-7]+/))),

    float_literal: (_) => {
      const decimal = /[0-9][0-9_]*/;
      const hexadecimal = /[0-9a-fA-F][0-9a-fA-F_]*/;
      return token(
        seq(
          choice(
            seq(/0[xX]/, hexadecimal, optional("."), optional(hexadecimal)),
            seq(decimal, optional("."), optional(decimal))
          ),
          optional(/[eEpP][+-]?\d+/)
        )
      );
    },

    char_literal: ($) =>
      seq("'", optional(choice($.escape_sequence, /./)), "'"),

    string_literal: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, /[^"\\]+/)),
        token.immediate('"')
      ),

    //multiline_string_literal: ($) =>
    //  prec.left(
    //    repeat1(
    //      seq(
    //        "\\\\",
    //        alias(
    //          repeat(choice(/[^\r\n]/, $.escape_sequence)),
    //          $.string_literal
    //        )
    //      )
    //    )
    //  ),

    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu\n]/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/,
            /x[0-9a-fA-F]{2}/
          )
        )
      ),

    boolean_literal: (_) => choice("true", "false"),

    null_literal: (_) => "null",

    undefined_literal: (_) => "undefined",

    assignment_operator: (_) =>
      choice(
        "+=",
        "-=",
        "*=",
        "/=",
        "+%=",
        "-%=",
        "*%=",
        "%=",
        "&=",
        "|=",
        "^=",
        "<<=",
        ">>="
      ),
    unary_operator: (_) => choice("~", "!", "-", "-%"),

    identifier: ($) => choice($._str_identifier, $._identifier_text),

    _str_identifier: ($) =>
      seq(
        '@"',
        alias(repeat(choice($.escape_sequence, /[^"\\]+/)), $.string_literal),
        token.immediate('"')
      ),

    _identifier_text: (_) => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
