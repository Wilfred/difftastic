const PREC = {
  COMMA: -1,
  ASSIGN: 0,
  OBJECT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  PLUS: 4,
  REL: 5,
  TIMES: 6,
  TYPEOF: 7,
  DELETE: 7,
  VOID: 7,
  NOT: 8,
  NEG: 9,
  INC: 10,
  NEW: 11,
  CALL: 12,
  MEMBER: 13
};

module.exports = grammar({
  name: 'javascript',

  extras: $ => [
    $.comment,
    $._line_break,
    /[ \t\r]/
  ],

  conflicts: $ => [
    [$._expression, $.method_definition],
    [$._expression, $.formal_parameters]
  ],

  rules: {
    program: $ => repeat($._statement),

    //
    // Statements
    //

    _statement: $ => choice(
      $.expression_statement,
      $.var_declaration,
      $.statement_block,

      $.if_statement,
      $.switch_statement,
      $.for_statement,
      $.for_in_statement,
      $.for_of_statement,
      $.while_statement,
      $.do_statement,
      $.try_statement,

      $.break_statement,
      $.return_statement,
      $.yield_statement,
      $.throw_statement
    ),

    expression_statement: $ => seq(
      err(choice($._expression, $.comma_op)), terminator()
    ),

    var_declaration: $ => seq(
      variableType(),
      commaSep1(err(choice(
        $.identifier,
        $.var_assignment
      ))),
      terminator()
    ),

    statement_block: $ => seq(
      "{", err(repeat($._statement)), "}"
    ),

    if_statement: $ => prec.right(0, seq(
      "if",
      $._paren_expression,
      $._statement,
      optional(seq(
        "else",
        $._statement
      ))
    )),

    switch_statement: $ => seq(
      "switch",
      "(", $._expression, ")",
      "{", repeat(choice($.case, $.default)), "}"
    ),

    for_statement: $ => seq(
      "for",
      "(",
      choice(
        $.var_declaration,
        seq(err(commaSep1($._expression)), ";"),
        ";"
      ),
      optional(err($._expression)), ";",
      optional(err($._expression)),
      ")",
      $._statement
    ),

    for_in_statement: $ => seq(
      "for",
      "(",
      optional(variableType()),
      $._expression,
      "in",
      $._expression,
      ")",
      $._statement
    ),

    for_of_statement: $ => seq(
      "for",
      "(",
      optional(variableType()),
      $._expression,
      "of",
      $._expression,
      ")",
      $._statement
    ),

    while_statement: $ => seq(
      "while",
      $._paren_expression,
      $._statement
    ),

    do_statement: $ => seq(
      "do",
      $.statement_block,
      "while",
      $._paren_expression,
      terminator()
    ),

    try_statement: $ => seq(
      "try",
      $.statement_block,
      optional($.catch),
      optional($.finally)
    ),

    break_statement: $ => seq(
      "break",
      terminator()
    ),

    return_statement: $ => seq(
      "return",
      optional($._expression),
      terminator()
    ),

    yield_statement: $ => seq(
      "yield",
      optional($._expression),
      terminator()
    ),

    throw_statement: $ => seq(
      "throw",
      $._expression,
      terminator()
    ),

    //
    // Statement components
    //

    case: $ => seq(
      "case",
      $._expression,
      ":",
      repeat($._statement)
    ),

    default: $ => seq(
      "default",
      ":",
      repeat($._statement)
    ),

    catch: $ => seq(
      "catch",
      optional(seq("(", $.identifier, ")")),
      $.statement_block
    ),

    finally: $ => seq(
      "finally",
      $.statement_block
    ),

    var_assignment: $ => seq(
      $.identifier,
      "=",
      $._expression
    ),

    _paren_expression: $ => seq(
      "(", err(choice($._expression, $.comma_op)), ")"
    ),

    //
    // Expressions
    //

    _expression: $ => choice(
      $.object,
      $.array,
      $.class,
      $.function,
      $.arrow_function,
      $.generator_function,
      $.function_call,
      $.new_expression,
      $.member_access,
      $.subscript_access,
      $.assignment,
      $.math_assignment,
      $.ternary,
      $.bool_op,
      $.math_op,
      $.bitwise_op,
      $.rel_op,
      $.type_op,
      $.delete_op,
      $.void_op,
      $._paren_expression,

      $.this_expression,
      $.identifier,
      $.number,
      $.string,
      $.regex,
      $.true,
      $.false,
      $.null,
      $.undefined
    ),

    object: $ => prec(PREC.OBJECT, seq(
      "{", commaSep(err(choice($.pair, $.method_definition))), "}"
    )),

    array: $ => seq(
      "[", commaSep(err($._expression)), "]"
    ),

    class: $ => seq(
      "class",
      $.identifier,
      optional(seq("extends", $._expression)),
      $.class_body
    ),

    function: $ => seq(
      "function",
      optional($.identifier),
      "(", optional($.formal_parameters), ")",
      $.statement_block
    ),

    arrow_function: $ => seq(
      choice(
        $.identifier,
        seq('(', optional($.formal_parameters), ')')
      ),
      '=>',
      choice(
        $._expression,
        $.statement_block
      )
    ),

    generator_function: $ => seq(
      "function",
      '*',
      optional($.identifier),
      "(", optional($.formal_parameters), ")",
      $.statement_block
    ),

    function_call: $ => prec(PREC.CALL, seq(
      choice($._expression, $.super),
      "(", err(optional($.arguments)), ")"
    )),

    new_expression: $ => prec(PREC.NEW, seq(
      "new",
      $._expression
    )),

    member_access: $ => prec(PREC.MEMBER, seq(
      $._expression,
      ".",
      $.identifier
    )),

    subscript_access: $ => prec.right(PREC.MEMBER, seq(
      $._expression,
      "[", err($._expression), "]"
    )),

    assignment: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.identifier,
        $.member_access,
        $.subscript_access
      ),
      "=",
      $._expression
    )),

    math_assignment: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.identifier,
        $.member_access,
        $.subscript_access
      ),
      choice("+=", "-=", "*=", "/="),
      $._expression
    )),

    ternary: $ => prec.right(PREC.TERNARY, seq(
      $._expression, "?", $._expression, ":", $._expression
    )),

    bool_op: $ => choice(
      prec.left(PREC.NOT, seq("!", $._expression)),
      prec.left(PREC.AND, seq($._expression, "&&", $._expression)),
      prec.left(PREC.OR, seq($._expression, "||", $._expression))
    ),

    bitwise_op: $ => choice(
      prec.left(PREC.NOT, seq("~", $._expression)),
      prec.left(PREC.TIMES, seq($._expression, ">>", $._expression)),
      prec.left(PREC.TIMES, seq($._expression, "<<", $._expression)),
      prec.left(PREC.AND, seq($._expression, "&", $._expression)),
      prec.left(PREC.OR, seq($._expression, "^", $._expression)),
      prec.left(PREC.OR, seq($._expression, "|", $._expression))
    ),

    math_op: $ => choice(
      prec.left(PREC.NEG, seq("-", $._expression)),
      prec.left(PREC.NEG, seq("+", $._expression)),
      prec.left(PREC.INC, seq($._expression, "++")),
      prec.left(PREC.INC, seq($._expression, "--")),
      prec.left(PREC.INC, seq("++", $._expression)),
      prec.left(PREC.INC, seq("--", $._expression)),
      prec.left(PREC.PLUS, seq($._expression, "+", $._expression)),
      prec.left(PREC.PLUS, seq($._expression, "-", $._expression)),
      prec.left(PREC.TIMES, seq($._expression, "*", $._expression)),
      prec.left(PREC.TIMES, seq($._expression, "/", $._expression)),
      prec.left(PREC.TIMES, seq($._expression, "%", $._expression))
    ),

    delete_op: $ => prec(PREC.DELETE, seq(
      "delete",
      choice($.member_access, $.subscript_access))
    ),

    void_op: $ => prec(PREC.VOID, seq(
      "void", $._expression)
    ),

    comma_op: $ => prec(PREC.COMMA, seq(
      $._expression, ',', choice($.comma_op, $._expression))
    ),

    rel_op: $ => choice(
      prec.left(PREC.REL, seq($._expression, "<", $._expression)),
      prec.left(PREC.REL, seq($._expression, "<=", $._expression)),
      prec.left(PREC.REL, seq($._expression, "==", $._expression)),
      prec.left(PREC.REL, seq($._expression, "===", $._expression)),
      prec.left(PREC.REL, seq($._expression, "!=", $._expression)),
      prec.left(PREC.REL, seq($._expression, "!==", $._expression)),
      prec.left(PREC.REL, seq($._expression, ">=", $._expression)),
      prec.left(PREC.REL, seq($._expression, ">", $._expression))
    ),

    type_op: $ => choice(
      prec(PREC.TYPEOF, seq("typeof", $._expression)),
      prec.left(PREC.REL, seq($._expression, "instanceof", $._expression)),
      prec.left(PREC.REL, seq($._expression, "in", $._expression))
    ),

    //
    // Primitives
    //

    comment: $ => token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^\/]/)), "*/")
    )),

    string: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'")
    )),

    regex: $ => token(seq(
      '/',
      repeat(choice(
        seq('[', /[^\]\n]*/, ']'), // square-bracket-delimited character class
        seq('\\', /./),            // escaped character
        /[^/\\\[\n]/               // any character besides '[', '\', '/', '\n'
      )),
      '/',
      repeat(/a-z/)
    )),

    number: $ => token(choice(
      seq(
        "0x",
        /[\da-fA-F]+/
      ),
      seq(
        /\d+/,
        optional(seq(".", /\d*/))
      )
    )),

    this_expression: $ => "this",

    super: $ => "super",

    identifier: $ => (/[\a_$][\a\d_$]*/),

    true: $ => "true",
    false: $ => "false",
    null: $ => "null",
    undefined: $ => "undefined",

    //
    // Expression components
    //

    arguments: $ => commaSep1(err($._expression)),

    class_body: $ => seq(
      '{',
      repeat(seq(
        $.method_definition,
        optional(';')
      )),
      '}'
    ),

    formal_parameters: $ => commaSep1($.identifier),

    method_definition: $ => seq(
      optional('static'),
      $.identifier,
      '(',
      optional($.formal_parameters),
      ')',
      $.statement_block
    ),

    pair: $ => seq(
      choice($.identifier, $.string, $.number),
      ":",
      $._expression
    ),

    _line_break: $ => '\n'
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function terminator () {
  return choice(";", sym('_line_break'));
}

function variableType () {
  return choice("var", "let", "const");
}
