const PREC = {
  typed_parameter: -1,
  conditional: -1,

  parenthesized_expression: 1,
  compare: 2,
  or: 3,
  and: 4,
  bitwise_or: 5,
  bitwise_and: 6,
  xor: 7,
  shift: 8,
  plus: 9,
  times: 10,
  power: 11,
  unary: 12,
  is: 13,
  as: 14,
  call: 15,
  attribute: 16,
  attribute_expression: 17,
};

module.exports = grammar({
  name: "gdscript",

  word: ($) => $._identifier,

  extras: ($) => [$.comment, /[\s\uFEFF\u2060\u200B]|\\\r?\n/],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    ']',
    ')',
    '}',

    $._lambda_body_end,
  ],

  inline: ($) => [$._simple_statement, $._compound_statement],

  supertypes: ($) => [
    $._compound_statement,
    $._pattern,
    $._expression,
    $._primary_expression,
    $._attribute_expression,
    $._parameters,
  ],

  rules: {
    source: ($) => repeat($._statement),

    // -----------------------------------------------------------------------------
    // -                                     Atoms                                 -
    // -----------------------------------------------------------------------------

    _identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,
    // any "symbol"
    identifier: ($) => $._identifier,
    // named symbol of a statement
    // such as a function name or class name
    name: ($) => $._identifier,
    // symbol that only represents a type
    type: ($) => $._identifier,
    comment: ($) => token(seq("#", /.*/)),
    true: ($) => "true",
    false: ($) => "false",
    null: ($) => "null",
    underscore: ($) => "_",
    static_keyword: ($) => "static",
    remote_keyword: ($) =>
      choice(
        "remote",
        "master",
        "puppet",
        "remotesync",
        "mastersync",
        "puppetsync"
      ),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            /u[a-fA-F\d]{4}/,
            /U[a-fA-F\d]{8}/,
            /x[a-fA-F\d]{2}/,
            /o\d{3}/,
            /\r\n/,
            /[^uxo]/
          )
        )
      ),

    string: ($) =>
      seq(
        alias($._string_start, '"'),
        repeat(choice($.escape_sequence, $._string_content)),
        alias($._string_end, '"')
      ),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        choice(
          seq(digits, ".", optional(digits), optional(exponent)),
          seq(optional(digits), ".", digits, optional(exponent)),
          seq(digits, exponent)
        )
      );
    },

    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/)),
          repeat1(/[0-9]+_?/)
        )
      ),

    node_path: ($) => token(seq("@", nodePathString())),

    get_node: ($) =>
      token(
        seq(
          choice("$", "%"),
          choice(nodePathString(), /[a-zA-Z_][a-zA-Z_/0-9]*/)
        )
      ),

    // -----------------------------------------------------------------------------
    // -                                  Statements                               -
    // -----------------------------------------------------------------------------

    _statement: ($) => choice($._simple_statements, $._compound_statement),

    body: ($) =>
      choice(
        $._simple_statements,
        seq($._indent, repeat($._statement), $._dedent),
        $._newline,
      ),

    // Simple statements

    _simple_statements: ($) =>
      seq(trailSep1($._simple_statement, ";"), $._newline),

    _simple_statement: ($) =>
      choice(
        $._annotations,
        $.tool_statement,
        $.signal_statement,
        $.class_name_statement,
        $.extends_statement,
        $.expression_statement,
        $.match_statement,
        $.export_variable_statement,
        $.onready_variable_statement,
        $.variable_statement,
        $.const_statement,
        $.return_statement,
        $.pass_statement,
        $.break_statement,
        $.breakpoint_statement,
        $.continue_statement
      ),

    expression_statement: ($) =>
      choice($._expression, $.assignment, $.augmented_assignment),

    // -- Annotation

    annotation: ($) => seq("@", $.identifier, optional($.arguments)),

    // The syntax tree looks better when annotations are grouped in a container
    // node in contexts like variable_statement and function_definition.
    _annotations: ($) => repeat1($.annotation),
    annotations: ($) => $._annotations,

    // -- Variables

    inferred_type: ($) => choice(":=", seq(":", "=")),

    _variable_assignment: ($) => seq("=", field("value", $._rhs_expression)),
    _variable_inferred_type_assignment: ($) =>
      seq(field("type", $.inferred_type), field("value", $._rhs_expression)),
    _variable_typed_assignment: ($) =>
      seq(":", field("type", $.type), "=", field("value", $._rhs_expression)),

    _variable_typed_definition: ($) =>
      choice(seq(":", field("type", $.type)), $._variable_typed_assignment),

    // -- SetGet

    set_body: ($) => seq("set", $.parameters, ":", alias($.body, "body")),
    get_body: ($) => seq("get", ":", alias($.body, "body")),

    _set_assign: ($) => seq("set", "=", field("set", $.setter)),
    _get_assign: ($) => seq("get", "=", field("get", $.getter)),

    _setget_body: ($) =>
      seq(
        ":",
        seq(
          $._indent,
          choice(
            seq(field("set", $.set_body), optional(field("get", $.get_body))),
            seq(field("get", $.get_body), optional(field("set", $.set_body))),
            seq($._set_assign, ",", $._get_assign),
            seq($._get_assign, ",", $._set_assign)
          ),
          $._dedent
        )
      ),

    setter: ($) => $._identifier,
    getter: ($) => $._identifier,
    setget: ($) =>
      choice(
        $._setget_body,
        seq(
          "setget",
          choice($.setter, seq($.setter, ",", $.getter), seq(",", $.getter))
        )
      ),

    _variable_statement: ($) =>
      seq(
        optional($.annotations),
        "var",
        field("name", $.name),
        optional(
          choice(
            $._variable_typed_definition,
            $._variable_inferred_type_assignment,
            $._variable_assignment
          )
        ),
        optional(field("setget", $.setget))
      ),

    variable_statement: ($) =>
      seq(optional($.remote_keyword), $._variable_statement),

    export_variable_statement: ($) =>
      seq(
        "export",
        optional(field("export_arguments", $.arguments)),
        optional(choice("onready", $.remote_keyword)),
        $._variable_statement
      ),

    onready_variable_statement: ($) => seq("onready", $._variable_statement),

    const_statement: ($) =>
      seq(
        "const",
        field("name", $.name),
        choice(
          $._variable_inferred_type_assignment,
          $._variable_typed_assignment,
          $._variable_assignment
        )
      ),

    return_statement: ($) => seq("return", optional($._expression)),

    pass_statement: ($) => prec.left("pass"),
    break_statement: ($) => prec.left("break"),
    breakpoint_statement: ($) => "breakpoint",
    continue_statement: ($) => prec.left("continue"),
    tool_statement: ($) => "tool",

    signal_statement: ($) => seq("signal", $.name, optional($.parameters)),

    class_name_statement: ($) =>
      seq(
        "class_name",
        $.name,
        optional(seq(",", field("icon_path", $.string)))
      ),

    dotted_type: ($) => sep1($.type, "."),
    extends_statement: ($) =>
      seq(
        "extends",
        choice($.dotted_type, seq($.string, optional(seq(".", $.dotted_type))))
      ),

    _compound_statement: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $.function_definition,
        $.constructor_definition,
        $.class_definition,
        $.enum_definition
      ),

    if_statement: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        ":",
        field("body", $.body),
        repeat(field("alternative", $.elif_clause)),
        optional(field("alternative", $.else_clause))
      ),

    elif_clause: ($) =>
      seq(
        "elif",
        field("condition", $._expression),
        ":",
        field("body", $.body)
      ),

    else_clause: ($) => seq("else", ":", field("body", $.body)),

    for_statement: ($) =>
      seq(
        "for",
        field("left", $.identifier),
        "in",
        field("right", $._expression),
        ":",
        field("body", $.body)
      ),

    while_statement: ($) =>
      seq(
        "while",
        field("condition", $._expression),
        ":",
        field("body", $.body)
      ),

    class_definition: ($) =>
      seq(
        "class",
        field("name", $.name),
        optional(field("extends", $.extends_statement)),
        ":",
        field("body", $.body)
      ),

    // -- Enum
    enum_definition: ($) =>
      seq(
        "enum",
        optional(field("name", $.name)),
        field("body", $.enumerator_list)
      ),

    enumerator_list: ($) => seq("{", trailCommaSep1($.enumerator), "}"),

    _enumerator_expression: ($) =>
      choice(
        $.integer,
        $.binary_operator,
        $.identifier,
        $.unary_operator,
        $.attribute,
        $.subscript,
        $.call,
        $.parenthesized_expression
      ),

    enumerator: ($) =>
      seq(
        field("left", $.identifier),
        optional(seq("=", field("right", $._enumerator_expression)))
      ),

    // -----------------------------------------------------------------------------
    // -                                     Match                                 -
    // -----------------------------------------------------------------------------

    match_statement: ($) =>
      seq(
        "match",
        field("value", $._expression),
        ":",
        field("body", $.match_body)
      ),

    match_body: ($) => seq($._indent, repeat1($.pattern_section), $._dedent),

    pattern_section: ($) =>
      seq(commaSep1($._pattern), ":", field("body", $.body)),

    _pattern: ($) =>
      choice(
        $.pattern_array,
        $.pattern_dictionary,
        $.pattern_binding,
        $.identifier,
        $.underscore,
        $.string,
        $.integer,
        $.float,
        $.true,
        $.false,
        $.null
      ),

    pattern_binding: ($) => seq("var", $.identifier),

    pattern_open_ending: ($) => "..",

    pattern_array: ($) =>
      seq(
        "[",
        optional(commaSep1(choice($._pattern, $.pattern_open_ending))),
        "]"
      ),

    pattern_dictionary: ($) =>
      seq(
        "{",
        optional(commaSep1(choice($.pattern_pair, $.pattern_open_ending))),
        "}"
      ),

    pattern_pair: ($) =>
      seq(field("key", $._expression), ":", field("value", $._pattern)),

    // -----------------------------------------------------------------------------
    // -                                  Expressions                              -
    // -----------------------------------------------------------------------------

    _expression: ($) =>
      choice(
        $.comparison_operator,
        $._primary_expression,
        $.conditional_expression
      ),

    _primary_expression: ($) =>
      choice(
        $.binary_operator,
        $.identifier,
        $.string,
        $.integer,
        $.float,
        $.true,
        $.false,
        $.null,
        $.unary_operator,
        $.node_path,
        $.get_node,
        $.attribute,
        $.subscript,
        $.base_call,
        $.call,
        $.array,
        $.dictionary,
        $.parenthesized_expression
      ),

    _rhs_expression: ($) =>
      choice(
        $._expression,
        $.lambda,
      ),

    // This makes an attribute's ast linear
    // When attribute is used inside $.attribute it becomes recursive spaghetti
    _attribute_expression: ($) =>
      prec(
        PREC.attribute_expression,
        choice(
          $.binary_operator,
          $.identifier,
          $.string,
          $.integer,
          $.float,
          $.true,
          $.false,
          $.null,
          $.unary_operator,
          $.node_path,
          $.get_node,
          $.subscript,
          $.base_call,
          $.call,
          $.array,
          $.dictionary,
          $.parenthesized_expression
        )
      ),

    // -- Operators

    binary_operator: ($) =>
      choice(
        prec.left(
          PREC.and,
          seq($._primary_expression, choice("and", "&&"), $._primary_expression)
        ),
        prec.left(
          PREC.or,
          seq($._primary_expression, choice("or", "||"), $._primary_expression)
        ),
        prec.left(
          PREC.plus,
          seq($._primary_expression, "+", $._primary_expression)
        ),
        prec.left(
          PREC.plus,
          seq($._primary_expression, "-", $._primary_expression)
        ),
        prec.left(
          PREC.times,
          seq($._primary_expression, "*", $._primary_expression)
        ),
        prec.left(
          PREC.times,
          seq($._primary_expression, "/", $._primary_expression)
        ),
        prec.left(
          PREC.times,
          seq($._primary_expression, "%", $._primary_expression)
        ),
        prec.left(
          PREC.bitwise_or,
          seq($._primary_expression, "|", $._primary_expression)
        ),
        prec.left(
          PREC.bitwise_and,
          seq($._primary_expression, "&", $._primary_expression)
        ),
        prec.left(
          PREC.xor,
          seq($._primary_expression, "^", $._primary_expression)
        ),
        prec.left(
          PREC.shift,
          seq($._primary_expression, "<<", $._primary_expression)
        ),
        prec.left(
          PREC.shift,
          seq($._primary_expression, ">>", $._primary_expression)
        ),
        prec.left(
          PREC.is,
          seq($._primary_expression, "is", $._primary_expression)
        ),
        prec.left(PREC.as, seq($._primary_expression, "as", $.identifier))
      ),

    unary_operator: ($) =>
      choice(
        prec(PREC.unary, seq(choice("not", "!"), $._primary_expression)),
        prec(PREC.unary, seq("-", $._primary_expression)),
        prec(PREC.unary, seq("+", $._primary_expression)),
        prec(PREC.unary, seq("~", $._primary_expression))
      ),

    comparison_operator: ($) =>
      prec.left(
        PREC.compare,
        seq(
          $._primary_expression,
          repeat1(
            seq(
              choice("<", "<=", "==", "!=", ">=", ">", "in", "is"),
              $._primary_expression
            )
          )
        )
      ),

    // -- Accessors
    subscript: ($) => seq($._primary_expression, "[", $._expression, "]"),

    attribute_call: ($) => prec(PREC.attribute, seq($.identifier, $.arguments)),
    attribute_subscript: ($) =>
      prec(PREC.attribute, seq($.identifier, "[", $._primary_expression, "]")),
    attribute: ($) =>
      prec(
        PREC.attribute,
        seq(
          $._attribute_expression,
          repeat1(
            seq(
              ".",
              choice($.attribute_subscript, $.attribute_call, $.identifier)
            )
          )
        )
      ),

    conditional_expression: ($) =>
      prec.right(
        PREC.conditional,
        seq($._expression, "if", $._expression, "else", $._expression)
      ),

    parenthesized_expression: ($) =>
      prec(PREC.parenthesized_expression, seq("(", $._rhs_expression, ")")),

    // -----------------------------------------------------------------------------
    // -                                  Assignment                               -
    // -----------------------------------------------------------------------------

    assignment: ($) =>
      seq(field("left", $._expression), "=", field("right", $._rhs_expression)),

    augmented_assignment: ($) =>
      seq(
        field("left", $._expression),
        choice("+=", "-=", "*=", "/=", "%=", ">>=", "<<=", "&=", "^=", "|="),
        field("right", $._rhs_expression)
      ),

    // -----------------------------------------------------------------------------
    // -                                 Data Structs                              -
    // -----------------------------------------------------------------------------

    pair: ($) =>
      seq(
        choice(
          seq(field("key", $._rhs_expression), ":"), // Lambdas are allowed here.
          seq(field("key", $.identifier), "=")
        ),
        field("value", $._rhs_expression)
      ),

    dictionary: ($) => seq("{", optional(trailCommaSep1($.pair)), "}"),

    array: ($) => seq("[", optional(trailCommaSep1($._rhs_expression)), "]"),

    // -----------------------------------------------------------------------------
    // -                              Function Definition                          -
    // -----------------------------------------------------------------------------

    typed_parameter: ($) =>
      prec(PREC.typed_parameter, seq($.identifier, ":", field("type", $.type))),

    default_parameter: ($) =>
      seq($.identifier, "=", field("value", $._rhs_expression)),

    typed_default_parameter: ($) =>
      prec(
        PREC.typed_parameter,
        seq(
          $.identifier,
          ":",
          field("type", $.type),
          "=",
          field("value", $._rhs_expression)
        )
      ),

    _parameters: ($) =>
      choice(
        $.identifier,
        $.typed_parameter,
        $.default_parameter,
        $.typed_default_parameter
      ),

    parameters: ($) => seq("(", optional(trailCommaSep1($._parameters)), ")"),

    _return_type: ($) =>
      seq(
        "->",
        field("return_type", $.type),
      ),

    function_definition: ($) =>
      seq(
        optional(choice($.static_keyword, $.remote_keyword)),
        optional($.annotations),
        "func",
        optional(field("name", $.name)),
        field("parameters", $.parameters),
        optional($._return_type),
        ":",
        field("body", $.body)
      ),

    _lambda_content: ($) =>
      trailSep1($._simple_statement, ';'),

    lambda_body: ($) =>
      choice(
        seq(
          $._lambda_content,
          $._lambda_body_end,
        ),
        seq(
          $._lambda_content,
          $._newline,
        ),
        seq(
          $._indent,
          trailSep1($._lambda_content, $._newline),
          choice($._lambda_body_end, $._dedent),
        ),
        $._newline,
      ),

    lambda: ($) =>
      seq(
        "func",
        optional($.name),
        $.parameters,
        optional($._return_type),
        ":",
        alias($.lambda_body, $.body),
      ),

    constructor_definition: ($) =>
      seq(
        "func",
        "_init",
        field("parameters", $.parameters),
        optional(seq(".", field("constructor_arguments", $.arguments))),
        optional(seq("->", field("return_type", $.type))),
        ":",
        field("body", $.body)
      ),

    // -----------------------------------------------------------------------------
    // -                                 Function Call                             -
    // -----------------------------------------------------------------------------

    arguments: ($) => seq("(", optional(trailCommaSep1($._rhs_expression)), ")"),

    base_call: ($) => prec(PREC.call, seq(".", $.identifier, $.arguments)),

    call: ($) => prec(PREC.call, seq($._primary_expression, $.arguments)),
  }, // end rules
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function trailSep1(rule, sep) {
  return seq(sep1(rule, sep), optional(sep));
}

function commaSep1(rule) {
  return sep1(rule, ",");
}

function trailCommaSep1(rule) {
  return trailSep1(rule, ",");
}

// This is a function instead of a rule since it's is used more than once and
// token body must be made of terminals. This can be defined as a rule and
// specify it as inlined, but this is fine.
function nodePathString() {
  return choice(
    seq('"', /[0-9a-zA-Z_/\- .]*/, '"'),
    seq("'", /[0-9a-zA-Z_/\- .]*/, "'")
  );
}
