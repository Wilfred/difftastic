/// Two following lines are used to enable type-checking:
/// <reference types="tree-sitter-cli/dsl" />
/// @ts-check

/**
 * @file Tact grammar for tree-sitter
 * @author Novus Nota (https://github.com/novusnota)
 * @license MIT
 */

/**
 * Creates a rule to match one or more of the rules separated by a semicolon with an optional trailing semicolon
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function semicolonSepWithTrailing(rule) {
  return optional(seq(rule, repeat(seq(";", rule)), optional(";")));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma with an optional trailing comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSepWithTrailing(rule) {
  return optional(seq(rule, repeat(seq(",", rule)), optional(",")));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Tact grammar, refined and adapted from [grammar.ohm](https://github.com/tact-lang/tact/blob/main/src/grammar/grammar.ohm)
 */
module.exports = grammar({
  name: "tact",

  /* The name of a token that will match keywords for their extraction optimization */
  word: ($) => $.identifier,

  /* An array of tokens that may appear anywhere in the language */
  extras: ($) => [/\s/, $.comment],

  // reserved: ($) => [],
  // see: https://github.com/tree-sitter/tree-sitter/pull/1635

  /* A list of hidden rule names */
  supertypes: ($) => [$.value_expression],

  /* Each inner array represents a descending ordering of precedence */
  precedences: (_) => [
    [
      "non_null_assert_expr",
      "method_call_expr",
      "field_access_expr",
      "static_call_expr",
      "parenthesized_expr",
      "instance_expr",

      // "unary_suffix_expr",
      "unary_expr",

      "binary_multiplication",

      "binary_addition",

      "bitwise_shift",

      "binary_relation",

      "binary_equality",

      "bitwise_and",
      "bitwise_xor",
      "bitwise_or",

      "logical_and",
      "logical_or",

      "ternary_expr",

      "assign_stmt",
    ],
  ],

  /* Each inner array represents a set of rules that's involved in an LR(1) conflict
 that is intended to exist in the grammar and be resolved by Tree-sitter at runtime using GLR algorithm */
  conflicts: ($) => [
    [$.constant_attributes, $.function_attributes],
    [$._lvalue, $.value_expression],
  ],

  /* Mapping of grammar rule names to rule builder functions */
  rules: {
    source_file: ($) => seq(repeat($.import), repeat($._module_item)),

    /* Imports */

    import: ($) => seq("import", field("library", $.string), ";"),

    /* Module items */

    _module_item: ($) =>
      choice(
        $.primitive,
        alias($._constant, $.global_constant),
        $.native_function,
        alias($._function, $.global_function),
        $.struct,
        $.message,
        $.contract,
        $.trait,
      ),

    /* Built-in declarations */

    primitive: ($) => seq("primitive", field("type", $._type), ";"),

    /* Constants */

    _constant: ($) =>
      seq(
        field("attributes", optional($.constant_attributes)),
        "const",
        field("name", $.identifier),
        ":",
        field("type", $._type),
        optional(seq("=", field("value", $._expression))),
        ";",
      ),

    constant_attributes: (_) =>
      repeat1(choice("virtual", "override", "abstract")),

    /* Native functions */

    native_function: ($) =>
      seq(
        "@name",
        "(",
        field("func_name", $.func_identifier),
        ")",
        field("attributes", optional($.function_attributes)),
        "native",
        field("name", $.identifier),
        field("parameters", $.parameter_list),
        optional(seq(":", field("result", $._type))),
        ";",
      ),

    /* Functions */

    _function: ($) =>
      seq(
        field("attributes", optional($.function_attributes)),
        "fun",
        field("name", $.identifier),
        field("parameters", $.parameter_list),
        field("result", optional(seq(":", $._type))),
        choice(";", field("body", alias($.block_statement, $.function_body))),
      ),

    function_attributes: (_) =>
      repeat1(
        choice(
          "get",
          "mutates",
          "extends",
          "virtual",
          "override",
          "inline",
          "abstract",
        ),
      ),

    parameter_list: ($) => seq("(", commaSepWithTrailing($.parameter), ")"),

    parameter: ($) =>
      seq(field("name", $.identifier), ":", field("type", $._type)),

    /* Structs, Messages */

    struct: ($) =>
      seq(
        "struct",
        field("name", alias($._type_identifier, $.type_identifier)),
        field("body", $.struct_body),
      ),

    message: ($) =>
      seq(
        "message",
        field("value", optional($.message_value)),
        field("name", alias($._type_identifier, $.type_identifier)),
        field("body", alias($.struct_body, $.message_body)),
      ),

    message_value: ($) => seq("(", $.integer, ")"),

    struct_body: ($) =>
      seq("{", semicolonSepWithTrailing(alias($._field, $.field)), "}"),

    /* Fields (of messages, structs, contracts, traits) */

    _field: ($) =>
      seq(
        field("name", $.identifier),
        ":",
        field("type", $._type),
        field("tlb", optional($.tlb_serialization)),
        optional(seq("=", field("value", $._expression))),
      ),

    storage_variable: ($) => seq($._field, ";"),

    /* Contracts, Traits */

    contract: ($) =>
      seq(
        field("attributes", optional($.contract_attributes)),
        "contract",
        field("name", $.identifier),
        field("traits", optional($.trait_list)),
        field("body", $.contract_body),
      ),

    trait: ($) =>
      seq(
        field(
          "attributes",
          optional(alias($.contract_attributes, $.trait_attributes)),
        ),
        "trait",
        field("name", $.identifier),
        field("traits", optional($.trait_list)),
        field("body", $.trait_body),
      ),

    contract_attributes: ($) => repeat1(seq("@interface", "(", $.string, ")")),

    trait_list: ($) => seq("with", commaSepWithTrailing($.identifier)),

    contract_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            alias($._constant, $.storage_constant),
            $.storage_variable,
            $.init_function,
            $._receiver_function,
            alias($._function, $.storage_function),
          ),
        ),
        "}",
      ),

    trait_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            alias($._constant, $.storage_constant),
            $.storage_variable,
            $._receiver_function,
            alias($._function, $.storage_function),
          ),
        ),
        "}",
      ),

    init_function: ($) =>
      seq(
        "init",
        field("parameters", $.parameter_list),
        field("body", alias($.block_statement, $.function_body)),
      ),

    _receiver_function: ($) =>
      choice($.receive_function, $.bounced_function, $.external_function),

    receive_function: ($) =>
      seq(
        "receive",
        "(",
        field("parameter", optional(choice($.string, $.parameter))),
        ")",
        field("body", alias($.block_statement, $.function_body)),
      ),

    bounced_function: ($) =>
      seq(
        "bounced",
        "(",
        field("parameter", $.parameter),
        ")",
        field("body", alias($.block_statement, $.function_body)),
      ),

    external_function: ($) =>
      seq(
        "external",
        "(",
        field("parameter", optional(choice($.string, $.parameter))),
        ")",
        field("body", alias($.block_statement, $.function_body)),
      ),

    /* Statements*/

    _statement: ($) =>
      choice($._statement_with_brace, seq($._statement_without_semicolon, ";")),

    _statement_with_brace: ($) =>
      choice(
        $.block_statement, // StatementBlock
        $.if_statement, // StatementCondition
        $.while_statement, // StatementWhile
        $.repeat_statement, // StatementRepeat
        $.try_statement, // StatementTry
        $.foreach_statement, // StatementForEach
      ),

    _statement_without_semicolon: ($) =>
      choice(
        $.let_statement, // StatementLet
        $.return_statement, // StatementReturn
        $.expression_statement, // StatementExpression
        $.assignment_statement, // StatementAssign
        $.augmented_assignment_statement, // StatementAugmentedAssign
        $.do_until_statement, // StatementUntil
      ),

    let_statement: ($) =>
      seq(
        "let",
        field("name", $.identifier),
        optional(seq(":", field("type", $._type))),
        "=",
        field("value", $._expression),
      ),

    block_statement: ($) =>
      prec.right(
        seq(
          "{",
          repeat($._statement),
          optional($._statement_without_semicolon),
          "}",
        ),
      ),

    return_statement: ($) => seq("return", optional($._expression)),

    expression_statement: ($) => seq($._expression),

    assignment_statement: ($) =>
      prec.right(
        "assign_stmt",
        seq(
          field("left", alias($._lvalue, $.lvalue)),
          "=",
          field("right", $._expression),
        ),
      ),

    augmented_assignment_statement: ($) =>
      prec.right(
        "assign_stmt",
        seq(
          field("left", alias($._lvalue, $.lvalue)),
          field(
            "operator",
            choice("+=", "-=", "*=", "/=", "%=", "&=", "|=", "^="),
          ),
          field("right", $._expression),
        ),
      ),

    if_statement: ($) =>
      seq(
        "if",
        "(",
        field("condition", $._expression),
        ")",
        field("consequence", $.block_statement),
        field("alternative", optional($.else_clause)),
      ),

    else_clause: ($) => seq("else", choice($.block_statement, $.if_statement)),

    while_statement: ($) =>
      seq(
        "while",
        "(",
        field("condition", $._expression),
        ")",
        field("body", $.block_statement),
      ),

    repeat_statement: ($) =>
      seq(
        "repeat",
        "(",
        field("condition", $._expression),
        ")",
        field("body", $.block_statement),
      ),

    do_until_statement: ($) =>
      seq(
        "do",
        field("body", $.block_statement),
        "until",
        "(",
        field("condition", $._expression),
        ")",
      ),

    try_statement: ($) =>
      seq(
        "try",
        field("body", $.block_statement),
        field("handler", optional($.catch_clause)),
      ),

    catch_clause: ($) =>
      seq(
        "catch",
        "(",
        field("name", $.identifier),
        ")",
        field("body", $.block_statement),
      ),

    foreach_statement: ($) =>
      seq(
        "foreach",
        "(",
        field("key", $.identifier),
        ",",
        field("value", $.identifier),
        "in",
        field("map", alias($._lvalue, $.lvalue)),
        ")",
        field("body", $.block_statement),
      ),

    _lvalue: ($) =>
      prec.right(
        choice(
          $.identifier,
          seq($.identifier, ".", $._lvalue),
          $.self,
          seq($.self, ".", $._lvalue),
        ),
      ),

    /* Expressions */

    _expression: ($) =>
      choice(
        $.ternary_expression, // ExpressionConditional
        $.binary_expression, // ExpressionBinary
        $.unary_expression, // ExpressionUnary
        // $.unary_suffix_expression, // ExpressionUnarySuffix
        $.value_expression, // ExpressionValue
      ),

    ternary_expression: ($) =>
      prec.right(
        "ternary_expr",
        seq(
          field("condition", $._expression),
          "?",
          field("consequence", $._expression),
          ":",
          field("alternative", $._expression),
        ),
      ),

    binary_expression: ($) =>
      choice(
        ...[
          ["||", "logical_or"], // ExpressionOr
          ["&&", "logical_and"], // ExpressionAnd

          ["|", "bitwise_or"], // ExpressionBinaryOr
          ["^", "bitwise_xor"], // ExpressionBinaryXor
          ["&", "bitwise_and"], // ExpressionBinaryAnd

          ["!=", "binary_equality"], // ExpressionEquality
          ["==", "binary_equality"], // ExpressionEquality

          [">", "binary_relation"], // ExpressionCompare
          [">=", "binary_relation"], // ExpressionCompare
          ["<", "binary_relation"], // ExpressionCompare
          ["<=", "binary_relation"], // ExpressionCompare

          [">>", "bitwise_shift"], // ExpressionBinaryShift
          ["<<", "bitwise_shift"], // ExpressionBinaryShift

          ["+", "binary_addition"], // ExpressionAdd
          ["-", "binary_addition"], // ExpressionAdd

          ["*", "binary_multiplication"], // ExpressionMul
          ["/", "binary_multiplication"], // ExpressionMul
          ["%", "binary_multiplication"], // ExpressionMul
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field(
                "operator",
                operator,
                // alias(operator, {
                //   '||': $.logical_or,
                //   '&&': $.logical_and,
                //   '!=': $.binary_comparison_ineq,
                //   '==': $.binary_comparison,
                //   '>' : $.binary_relation_gt,
                //   '>=': $.binary_relation_ge,
                //   '<' : $.binary_relation_lt,
                //   '<=': $.binary_relation_le,
                //   '>>': $.bitwise_expression_sright,
                //   '<<': $.bitwise_expression_sleft,
                //   '&' : $.bitwise_expression_and,
                //   '|' : $.bitwise_expression_or,
                //   '+' : $.binary_addition_plus,
                //   '-' : $.binary_addition_minus,
                //   '*' : $.binary_multiplication_times,
                //   '/' : $.binary_multiplication_divide,
                //   '%' : $.binary_multiplication_modulo,
                // }[operator])
              ),
              field("right", $._expression),
            ),
          ),
        ),
      ),

    unary_expression: ($) =>
      prec.left(
        "unary_expr",
        seq(
          field(
            "operator",
            choice(
              "-",
              "+",
              "!",
              "~",
              // alias('-', $.minus_op), alias('+', $.plus_op), alias('!', $.not_op)
            ),
          ),
          field("argument", $._expression),
        ),
      ),

    // unary_suffix_expression: ($) =>
    //   prec.left(
    //     "unary_suffix_expr",
    //     seq(field("argument", $._expression), field("operator", choice("!!"))),
    //   ),

    value_expression: ($) =>
      choice(
        $.non_null_assert_expression, // ExpressionUnboxNonNull
        $.method_call_expression, // ExpressionMethodCall
        $.field_access_expression, // ExpressionFieldAccess
        $.static_call_expression, // ExpressionStaticCall
        $.parenthesized_expression, // ExpressionParens
        $.instance_expression, // ExpressionStructInstance
        $.integer, // integerLiteral
        $.boolean, // boolLiteral
        $.identifier, // id
        $.null, // null
        $.initOf, // ExpressionInitOf
        $.string, // stringLiteral
        $.self, // self
      ),

    non_null_assert_expression: ($) =>
      prec.left(
        "non_null_assert_expr",
        seq(field("argument", $._expression), field("operator", choice("!!"))),
      ),

    method_call_expression: ($) =>
      prec.right(
        "method_call_expr",
        seq(
          field("object", $.value_expression),
          ".",
          field("name", $.identifier),
          field("arguments", $.argument_list),
        ),
      ),

    field_access_expression: ($) =>
      prec.right(
        "field_access_expr",
        seq(
          field("object", $.value_expression),
          ".",
          field("name", $.identifier),
        ),
      ),

    static_call_expression: ($) =>
      prec.right(
        "static_call_expr",
        seq(field("name", $.identifier), field("arguments", $.argument_list)),
      ),

    argument_list: ($) => seq("(", commaSepWithTrailing($.argument), ")"),

    argument: ($) => field("value", $._expression),

    parenthesized_expression: ($) =>
      prec("parenthesized_expr", seq("(", $._expression, ")")),

    instance_expression: ($) =>
      prec.right(
        "instance_expr",
        seq(
          field("name", $.identifier),
          field("arguments", $.instance_argument_list),
        ),
      ),

    instance_argument_list: ($) =>
      seq("{", commaSepWithTrailing($.instance_argument), "}"),

    instance_argument: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq(":", field("value", $._expression))),
      ),

    initOf: ($) =>
      seq(
        "initOf",
        field("name", $.identifier),
        field("arguments", $.argument_list),
      ),

    /* Types */

    _type: ($) => choice($.map_type, $.bounced_type, $._simple_type),

    map_type: ($) =>
      seq(
        "map",
        "<",
        field("key", alias($._type_identifier, $.type_identifier)),
        field("tlb_key", optional($.tlb_serialization)),
        ",",
        field("value", alias($._type_identifier, $.type_identifier)),
        field("tlb_value", optional($.tlb_serialization)),
        ">",
      ),

    bounced_type: ($) =>
      seq(
        "bounced",
        "<",
        field("message", alias($._type_identifier, $.type_identifier)),
        ">",
      ),

    _simple_type: ($) =>
      seq(alias($._type_identifier, $.type_identifier), optional("?")),

    _type_identifier: (_) => /[A-Z][a-zA-Z0-9_]*/,

    /* Serialization to TL-B types */

    tlb_serialization: ($) => seq("as", field("type", $.identifier)),

    /* Identifiers */

    func_identifier: ($) =>
      seq($._func_identifier_letter, repeat($._func_identifier_part)),

    _func_identifier_part: ($) => choice($._func_identifier_letter, /[0-9]/),
    _func_identifier_letter: (_) => choice(/[a-zA-Z_'?!&]/, /::/),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    self: (_) => "self",

    /* Literals */

    string: ($) =>
      seq(
        '"',
        repeat(choice($._non_quote_or_backslash_char, $.escape_sequence)),
        token.immediate('"'),
      ),

    _non_quote_or_backslash_char: () => token.immediate(prec(1, /[^"\n\\]+/)),

    escape_sequence: () =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[\\"nrtvbf]/, // \\ \" \n \r \t \v \b \f
            /x[0-9a-fA-F]{2}/, // hexEscape, \x00 through \xFF
            /u[0-9a-fA-F]{4}/, // unicodeEscape, \u0000 through \uFFFF
            /u\{[0-9a-fA-F]{1,6}\}/, // unicodeCodePoint, \u{0} through \u{FFFFFF}
          ),
        ),
      ),

    boolean: (_) => choice("true", "false"),

    null: (_) => "null",

    integer: (_) => {
      const hex_literal = seq(
        choice("0x", "0X"),
        /[\da-fA-F](?:_?[\da-fA-F])*/,
      );

      const oct_literal = seq(choice("0o", "0O"), /[0-7](?:_?[0-7])*/);

      const bin_literal = seq(choice("0b", "0B"), /[0-1](?:_?[0-1])*/);

      const dec_digits = /(?:_?\d)*/;
      const dec_literal = seq(/[1-9]/, optional(dec_digits));

      const dec_leading_zero_literal = seq(/\d/, optional(dec_digits));

      return token(
        choice(
          hex_literal, // hexadecimal
          oct_literal, // octal
          bin_literal, // binary
          dec_literal, // decimal
          dec_leading_zero_literal, // decimal, starting with 0
        ),
      );
    },

    /* Comments */

    comment: (_) =>
      token(
        choice(seq("//", /[^\n]*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },
});
