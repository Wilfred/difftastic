const PREC = {
  typed_parameter: -1,
  conditional: -1,

  parenthesized_expression: 1,
  or: 3,
  and: 4,
  in: 5,
  compare: 6,
  bitwise_or: 7,
  bitwise_and: 8,
  xor: 9,
  shift: 10,
  plus: 11,
  times: 12,
  power: 13,
  unary: 14,
  is: 15,
  as: 16,
  call: 17,
  attribute: 18,
  attribute_expression: 19,
  type: 20,
};

module.exports = grammar({
  name: "gdscript",

  word: ($) => $._identifier,

  extras: ($) => [$.comment, /[\s\uFEFF\u2060\u200B]/, $.line_continuation],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,
    $._string_name_start,
    $._node_path_start,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    "]",
    ")",
    "}",

    // Allow the external scanner to check for valid comma and colon tokens when
    // scanning for a $._body_end token.
    ",",
    // Allowing the scanner to check if colon is a valid token when
    // parsing body ends works for expected cases. One case is using a lambda as
    // a dictionary key e.g. `{func(): pass: 'value'}`.
    // However, it breaks nested if else chains.
    /* ":", */
    $._body_end,
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
    // Code region syntax, parsed to offer code folding support (these are #region and #endregion marks)
    region_start: ($) =>
      seq(token(prec(100, "#region")), optional($.region_label)),
    region_end: ($) =>
      token(seq(prec(100, "#endregion"), optional(/[^\r\n]*/))),
    region_label: ($) => /[^\r\n]+/,
    comment: ($) => token(seq("#", /.*/)),
    true: ($) => "true",
    false: ($) => "false",
    null: ($) => "null",
    static_keyword: ($) => "static",
    remote_keyword: ($) =>
      choice(
        "remote",
        "master",
        "puppet",
        "remotesync",
        "mastersync",
        "puppetsync",
      ),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            /u[a-fA-F\d]{4}/,
            /U[a-fA-F\d]{6}/,
            /x[a-fA-F\d]{2}/,
            /o\d{3}/,
            /\r\n/,
            /[^uxo]/,
          ),
        ),
      ),

    string: ($) =>
      seq(
        alias($._string_start, '"'),
        repeat(choice($.escape_sequence, $._string_content)),
        alias($._string_end, '"'),
      ),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        choice(
          seq(digits, ".", optional(digits), optional(exponent)),
          seq(optional(digits), ".", digits, optional(exponent)),
          seq(digits, exponent),
        ),
      );
    },

    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/)),
          repeat1(/[0-9]+_?/),
        ),
      ),

    string_name: ($) =>
      seq(
        alias($._string_name_start, '&"'),
        repeat(choice($.escape_sequence, $._string_content)),
        alias($._string_end, '"'),
      ),
    node_path: ($) =>
      seq(
        alias($._node_path_start, '^"'),
        repeat(choice($.escape_sequence, $._string_content)),
        alias($._string_end, '"'),
      ),
    get_node: ($) =>
      prec.right(
        seq(
          choice(
            seq(
              "$",
              choice(
                alias($.string, "value"),
                seq(
                  optional("/"),
                  $._identifier,
                  repeat(seq("/", $._identifier)),
                ),
              ),
            ),
            seq(
              "%",
              choice(
                alias($.string, "value"),
                seq($._identifier, repeat(seq("/", $._identifier))),
              ),
            ),
          ),
        ),
      ),

    // -----------------------------------------------------------------------------
    // -                                     Type                                  -
    // -----------------------------------------------------------------------------

    // Higher precedence is required to avoid conflicts with the "in" keyword in
    // $.for_statement.
    type: ($) =>
      prec(PREC.type, choice($.attribute, $.identifier, $.subscript)),

    // -----------------------------------------------------------------------------
    // -                                  Statements                               -
    // -----------------------------------------------------------------------------

    _statement: ($) => choice($._simple_statements, $._compound_statement),

    body: ($) =>
      choice(
        $._simple_statements,
        $._newline,
        $._body_end,
        seq(
          $._indent,
          repeat($._statement),
          choice($._body_end, $._dedent),
        ),
      ),

    // Simple statements

    _simple_statements: ($) =>
      seq(
        trailSep1($._simple_statement, repeat1(";")),
        choice($._newline, $._body_end),
      ),

    _simple_statement: ($) =>
      choice(
        $._annotations,
        $.signal_statement,
        $.class_name_statement,
        $.extends_statement,
        $.expression_statement,
        $.export_variable_statement,
        $.onready_variable_statement,
        $.variable_statement,
        $.const_statement,
        $.return_statement,
        $.pass_statement,
        $.break_statement,
        $.breakpoint_statement,
        $.continue_statement,
        $.region_start,
        $.region_end,
      ),

    expression_statement: ($) =>
      choice($._expression, $.assignment, $.augmented_assignment),

    // -- Annotation

    annotation: ($) =>
      prec.right(
        seq("@", $.identifier, optional(field("arguments", $.arguments))),
      ),

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

    set_body: ($) => seq("set", $.parameters, ":", field("body", $.body)),
    get_body: ($) =>
      seq(
        "get",
        // Let's alias parameters as an un-named node since
        // get does not take any parameters.
        optional(alias($.parameters, "()")),
        ":",
        field("body", $.body),
      ),

    _set_assign: ($) => seq("set", "=", field("set", $.setter)),
    _get_assign: ($) => seq("get", "=", field("get", $.getter)),

    _setget_assign: ($) =>
      choice(
        seq($._set_assign, optional(seq(",", $._get_assign))),
        seq($._get_assign, optional(seq(",", $._set_assign))),
      ),

    _setget_body: ($) =>
      seq(
        ":",
        choice(
          $._setget_assign,
          seq(
            $._indent,
            choice(
              seq(field("set", $.set_body), optional(field("get", $.get_body))),
              seq(field("get", $.get_body), optional(field("set", $.set_body))),
              $._setget_assign,
            ),
            $._dedent,
          ),
        ),
      ),

    setter: ($) => $._identifier,
    getter: ($) => $._identifier,
    setget: ($) =>
      choice(
        $._setget_body,
        seq(
          "setget",
          choice($.setter, seq($.setter, ",", $.getter), seq(",", $.getter)),
        ),
      ),

    _variable_statement: ($) =>
      seq(
        optional($.annotations),
        optional(field("static", $.static_keyword)),
        "var",
        field("name", $.name),
        optional(
          choice(
            $._variable_typed_definition,
            $._variable_inferred_type_assignment,
            $._variable_assignment,
          ),
        ),
        optional(field("setget", $.setget)),
      ),

    variable_statement: ($) =>
      seq(optional($.remote_keyword), $._variable_statement),

    export_variable_statement: ($) =>
      seq(
        "export",
        optional(field("arguments", $.arguments)),
        optional(choice("onready", $.remote_keyword)),
        $._variable_statement,
      ),

    onready_variable_statement: ($) => seq("onready", $._variable_statement),

    const_statement: ($) =>
      seq(
        "const",
        field("name", $.name),
        choice(
          $._variable_inferred_type_assignment,
          $._variable_typed_assignment,
          $._variable_assignment,
        ),
      ),

    return_statement: ($) => seq("return", optional($._rhs_expression)),

    pass_statement: ($) => prec.left("pass"),
    break_statement: ($) => prec.left("break"),
    breakpoint_statement: ($) => "breakpoint",
    continue_statement: ($) => prec.left("continue"),

    signal_statement: ($) =>
      seq(
        "signal",
        field("name", $.name),
        optional(field("parameters", $.parameters)),
      ),

    class_name_statement: ($) =>
      seq(
        optional($.annotations),
        "class_name",
        field("name", $.name),
        optional(seq(",", field("icon_path", $.string))),
        field("extends", optional($.extends_statement)),
      ),

    extends_statement: ($) =>
      prec(PREC.type, seq("extends", choice($.string, $.type))),

    _compound_statement: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $.function_definition,
        $.constructor_definition,
        $.class_definition,
        $.enum_definition,
        $.match_statement,
      ),

    if_statement: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        ":",
        field("body", $.body),
        repeat(field("alternative", $.elif_clause)),
        optional(field("alternative", $.else_clause)),
      ),

    elif_clause: ($) =>
      seq(
        "elif",
        field("condition", $._expression),
        ":",
        field("body", $.body),
      ),

    else_clause: ($) => seq("else", ":", field("body", $.body)),

    for_statement: ($) =>
      seq(
        "for",
        field("left", $.identifier),
        optional(seq(":", field("type", $.type))),
        "in",
        field("right", $._expression),
        ":",
        field("body", $.body),
      ),

    while_statement: ($) =>
      seq(
        "while",
        field("condition", $._expression),
        ":",
        field("body", $.body),
      ),

    class_definition: ($) =>
      seq(
        optional($.annotations),
        "class",
        field("name", $.name),
        optional(field("extends", $.extends_statement)),
        ":",
        field("body", $.class_body),
      ),

    class_body: ($) =>
      choice(
        $._class_member,
        $._newline,
        $._body_end,
        seq(
          $._indent,
          repeat($._class_member),
          choice($._body_end, $._dedent),
        ),
      ),

    // A class body can only directly contain class members. Then these class
    // members can contain statements in their bodies, but not directly in the
    // class.
    _class_member: ($) =>
      choice($._simple_class_members, $._compound_class_member),

    _simple_class_members: ($) =>
      seq(
        trailSep1($._simple_class_member, repeat1(";")),
        choice($._newline, $._body_end),
      ),

    _simple_class_member: ($) =>
      choice(
        $.const_statement,
        $.extends_statement,
        $.pass_statement,
        $.signal_statement,
        $.variable_statement,
      ),

    _compound_class_member: ($) =>
      choice($.class_definition, $.enum_definition, $.function_definition),

    // -- Enum
    enum_definition: ($) =>
      seq(
        "enum",
        optional(field("name", $.name)),
        field("body", $.enumerator_list),
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
        $.parenthesized_expression,
      ),

    enumerator: ($) =>
      seq(
        field("left", $.identifier),
        optional(seq("=", field("right", $._enumerator_expression))),
      ),

    // -----------------------------------------------------------------------------
    // -                                     Match                                 -
    // -----------------------------------------------------------------------------

    match_statement: ($) =>
      seq(
        "match",
        field("value", $._expression),
        ":",
        field("body", $.match_body),
      ),

    match_body: ($) =>
      seq(
        $._indent,
        // Annotations are generally supported as statements throughout code but
        // as match blocks are expressions, we need to explicitly allow them
        // here. The pattern section body itself supports statements (thus annotations).
        repeat1(
          seq(
            optional(repeat(seq($.annotation, optional($._newline)))),
            $.pattern_section,
          ),
        ),
        $._dedent,
      ),

    // Sources:
    // - https://github.com/godotengine/godot-proposals/issues/4775
    // - https://github.com/godotengine/godot/pull/80085
    //
    // One guard per section. Meaning Comma separated patterns cannot each have
    // a guard.
    pattern_guard: ($) => seq("when", $._expression),

    pattern_section: ($) =>
      seq(
        commaSep1($._pattern),
        optional($.pattern_guard),
        ":",
        field("body", $.body),
      ),

    _pattern: ($) =>
      choice(
        $._primary_expression,
        $.conditional_expression,
        $.pattern_binding,
      ),

    // Rather than creating distinct pattern array, dictionary, and expression
    // rules, we insert $.pattern_binding and $.pattern_open_ending into the
    // $.array and $.dictionary rules. Although, they are only valid in the
    // context of a pattern, this keeps the grammar simpler and allows us to
    // have arbitrary expressions in patterns.
    //
    // Additionally, $.dictionary accepts comma separated list of keys mixed
    // with pairs. This is also only valid in patterns and keeps the grammar a
    // bit simpler.
    pattern_binding: ($) => seq("var", $.identifier),
    pattern_open_ending: ($) => "..",

    // -----------------------------------------------------------------------------
    // -                                  Expressions                              -
    // -----------------------------------------------------------------------------

    _expression: ($) => choice($._primary_expression, $.conditional_expression),

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
        $.string_name,
        $.node_path,
        $.get_node,
        $.attribute,
        $.subscript,
        $.base_call,
        $.call,
        $.array,
        $.dictionary,
        $.parenthesized_expression,
        $.await_expression,
      ),

    _rhs_expression: ($) => choice($._expression, $.lambda),

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
          $.parenthesized_expression,
        ),
      ),

    // -- Operators

    binary_operator: ($) => {
      // Inspired by tree-sitter-c
      const operators = [
        [seq("not", "in"), PREC.in],
        ["in", PREC.in],
        ["and", PREC.and],
        ["&&", PREC.and],
        ["or", PREC.or],
        ["||", PREC.or],
        ["+", PREC.plus],
        ["-", PREC.plus],
        ["*", PREC.times],
        ["/", PREC.times],
        ["**", PREC.times],
        ["%", PREC.times],
        ["|", PREC.bitwise_or],
        ["&", PREC.bitwise_and],
        ["^", PREC.xor],
        ["<<", PREC.shift],
        [">>", PREC.shift],
        ["<", PREC.compare],
        ["<=", PREC.compare],
        ["==", PREC.compare],
        ["!=", PREC.compare],
        [">=", PREC.compare],
        [">", PREC.compare],
        ["as", PREC.as],
        [seq("is", "not"), PREC.is],
        ["is", PREC.is],
      ];

      const choices = operators.map(([operator, precedence]) => {
        return prec.left(
          precedence,
          seq(
            field("left", $._primary_expression),
            field("op", operator),
            field("right", $._primary_expression),
          ),
        );
      });

      return choice(...choices);
    },

    unary_operator: ($) =>
      choice(
        prec(PREC.unary, seq(choice("not", "!"), $._primary_expression)),
        prec(PREC.unary, seq("-", $._primary_expression)),
        prec(PREC.unary, seq("+", $._primary_expression)),
        prec(PREC.unary, seq("~", $._primary_expression)),
      ),

    // -- Accessors
    subscript_arguments: ($) =>
      seq("[", trailCommaSep1($._rhs_expression), "]"),
    subscript: ($) =>
      // The high precedence resolves ambiguity when parsing a definition
      // followed by code on the same line like class C: var x = my_array[0]
      prec(
        PREC.attribute,
        seq($._primary_expression, field("arguments", $.subscript_arguments)),
      ),

    attribute_call: ($) =>
      prec(PREC.attribute, seq($.identifier, field("arguments", $.arguments))),
    attribute_subscript: ($) =>
      prec(
        PREC.attribute,
        seq($.identifier, field("arguments", $.subscript_arguments)),
      ),
    attribute: ($) =>
      prec(
        PREC.attribute,
        seq(
          $._attribute_expression,
          repeat1(
            seq(
              ".",
              choice($.attribute_subscript, $.attribute_call, $.identifier),
            ),
          ),
        ),
      ),

    conditional_expression: ($) =>
      prec.right(
        PREC.conditional,
        seq(
          field("left", $._expression),
          "if",
          field("condition", $._expression),
          "else",
          field("right", $._expression),
        ),
      ),

    parenthesized_expression: ($) =>
      prec(PREC.parenthesized_expression, seq("(", $._rhs_expression, ")")),

    // -----------------------------------------------------------------------------
    // -                                     Await                                 -
    // -----------------------------------------------------------------------------

    await_expression: ($) => seq("await", $._expression),

    // -----------------------------------------------------------------------------
    // -                                  Assignment                               -
    // -----------------------------------------------------------------------------

    assignment: ($) =>
      seq(field("left", $._expression), "=", field("right", $._rhs_expression)),

    augmented_assignment: ($) =>
      seq(
        field("left", $._expression),
        field(
          "op",
          choice(
            "+=",
            "-=",
            "*=",
            "/=",
            "**=",
            "%=",
            ">>=",
            "<<=",
            "&=",
            "^=",
            "|=",
          ),
        ),
        field("right", $._rhs_expression),
      ),

    // -----------------------------------------------------------------------------
    // -                                 Data Structs                              -
    // -----------------------------------------------------------------------------

    pair: ($) =>
      seq(
        choice(
          seq(field("left", $._rhs_expression), ":"), // Lambdas are allowed here.
          seq(field("left", $.identifier), "="),
        ),
        field("value", choice($._rhs_expression, $.pattern_binding)),
      ),

    // See $.pattern_binding for more information.
    dictionary: ($) =>
      seq(
        "{",
        optional(
          trailCommaSep1(
            choice(
              $.pair,
              // This allows dictionaries in pattern sections to support "key"
              // only pattern matching:
              //     match { "key_to_match": some_value }:
              //         { "key_to_match" }: print("Matches here!")
              $._primary_expression,
            ),
          ),
        ),
        optional($.pattern_open_ending),
        "}",
      ),

    array: ($) =>
      seq(
        "[",
        optional(trailCommaSep1(choice($._rhs_expression, $.pattern_binding))),
        optional($.pattern_open_ending),
        "]",
      ),

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
        choice(
          seq(
            $.identifier,
            ":",
            field("type", $.type),
            "=",
            field("value", $._rhs_expression),
          ),
          seq(
            $.identifier,
            field("type", $.inferred_type),
            field("value", $._rhs_expression),
          ),
        ),
      ),

    variadic_parameter: ($) =>
      seq(
        "...",
        $._parameters,
      ),

    _parameters: ($) =>
      choice(
        $.identifier,
        $.typed_parameter,
        $.default_parameter,
        $.typed_default_parameter,
        $.variadic_parameter,
      ),

    parameters: ($) => seq("(", optional(trailCommaSep1($._parameters)), ")"),

    _return_type: ($) => seq("->", field("return_type", $.type)),

    function_definition: ($) =>
      seq(
        optional($.annotations),
        optional(choice($.static_keyword, $.remote_keyword)),
        "func",
        optional(field("name", $.name)),
        field("parameters", $.parameters),
        optional($._return_type),
        // body is optional to support abstract function definitions. Without
        // body, there must be a newline or body_end. _return_type with generic
        // parameters without a newline or body_end will erroneously parse
        // any following lines.
        choice(seq(":", field("body", $.body)), $._newline, $._body_end),
      ),

    lambda: ($) =>
      seq(
        "func",
        optional(field("name", $.name)),
        field("parameters", $.parameters),
        optional($._return_type),
        ":",
        field("body", $.body),
      ),

    constructor_definition: ($) =>
      seq(
        "func",
        "_init",
        field("parameters", $.parameters),
        optional(seq(".", field("arguments", $.arguments))),
        optional($._return_type),
        ":",
        field("body", $.body),
      ),

    // -----------------------------------------------------------------------------
    // -                                 Function Call                             -
    // -----------------------------------------------------------------------------

    arguments: ($) =>
      seq("(", optional(trailCommaSep1($._rhs_expression)), ")"),

    base_call: ($) =>
      prec(PREC.call, seq(".", $.identifier, field("arguments", $.arguments))),

    call: ($) =>
      prec(
        PREC.call,
        seq($._primary_expression, field("arguments", $.arguments)),
      ),
    // This rule is for trailing backslashes to indicate line continuation. We
    // capture those as anonymous '\' tokens to be able to preserve them in code
    // formatters.
    line_continuation: ($) => token(seq("\\", /\r?\n/)),
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
