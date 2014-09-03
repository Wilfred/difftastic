compiler = require("tree-sitter-compiler")
{ choice, err, repeat, seq, sym, keyword, token, optional, prec } = compiler.rules

commaSep1 = (rule) ->
  seq(rule, repeat(seq(",", rule)))

commaSep = (rule) ->
  optional(commaSep1(rule))

terminator = ->
  choice(";", sym("_line_break"))

module.exports = compiler.grammar
  name: 'javascript',

  ubiquitous: ["comment", "_line_break"]

  separators: [' ', '\t', '\r']

  rules:
    program: -> repeat(@statement)

    statement: -> choice(
      @expression_statement,
      @if_statement,
      @switch_statement,
      @for_statement,
      @for_in_statement,
      @while_statement,
      @do_statement,
      @break_statement,
      @statement_block,
      @return_statement,
      @throw_statement,
      @try_statement,
      @delete_statement,
      @var_declaration)

    expression_statement: -> seq(
      err(@expression), terminator())

    if_statement: -> seq(
      keyword("if"),
      "(", err(@expression), ")",
      @statement,
      optional(seq(
        keyword("else"),
        @statement
      )))

    switch_statement: -> seq(
      keyword("switch"),
      "(", @expression, ")",
      "{", repeat(choice(@case, @default)), "}")

    case: -> seq(
      keyword("case"),
      @expression,
      ":",
      repeat(@statement))

    default: -> seq(
      keyword("default"),
      ":",
      repeat(@statement))

    break_statement: -> seq(
      keyword("break"),
      terminator())

    for_statement: -> seq(
      keyword("for"),
      "(",
      optional(@expression), ";"
      optional(@expression), ";"
      optional(@expression),
      ")",
      @statement)

    for_in_statement: -> seq(
      keyword("for"),
      "(",
      optional(keyword("var")),
      @identifier,
      keyword("in"),
      @expression,
      ")",
      @statement)

    while_statement: -> seq(
      keyword("while"),
      "(", err(@expression), ")",
      @statement)

    do_statement: -> seq(
      keyword("do"),
      @statement_block,
      keyword("while"),
      "(", err(@expression), ")")

    return_statement: -> seq(
      keyword("return"),
      optional(@expression),
      terminator())

    delete_statement: -> seq(
      keyword("delete"),
      choice(@member_access, @subscript_access),
      terminator())

    var_declaration: -> seq(
      keyword("var"),
      commaSep1(err(choice(
        @identifier,
        @var_assignment))),
      terminator())

    var_assignment: -> seq(
      @identifier,
      "=",
      @expression)

    try_statement: -> seq(
      keyword("try"),
      @statement_block,
      optional(@catch),
      optional(@finally))

    catch: -> seq(
      keyword("catch"),
      optional(seq("(", @identifier, ")"))
      @statement_block)

    finally: -> seq(
      keyword("finally"),
      @statement_block)

    throw_statement: -> seq(
      keyword("throw"),
      @expression,
      terminator())

    expression: -> choice(
      @identifier,
      @number,
      @string,
      @regex,
      @true,
      @true,
      @false,
      @null,
      @undefined,
      @object,
      @array,
      @function,
      @member_access,
      @subscript_access,
      @function_call,
      @constructor_call,
      @ternary,
      @bool_op,
      @math_op,
      @bitwise_op,
      @rel_op,
      @type_op,
      @assignment,
      seq("(", err(@expression), ")"))

    function_call: -> seq(
      @expression,
      "(", err(optional(@arguments)), ")")

    constructor_call: -> prec(1, seq(
      keyword("new"),
      @expression,
      optional(seq(
        "(", err(optional(@arguments)), ")"))))

    arguments: ->
      commaSep1(err(@expression))

    member_access: -> prec(10, seq(
      @expression,
      ".",
      @identifier))

    subscript_access: -> prec(10, seq(
      @expression,
      "[", err(@expression), "]"))

    assignment: -> prec(-2, seq(
      choice(
        @identifier,
        @member_access,
        @subscript_access)
      "=",
      @expression))

    object: -> seq(
      "{", commaSep(err(@pair)), "}")

    pair: -> seq(
      choice(@identifier, @string),
      ":",
      @expression)

    function: -> seq(
      keyword("function"),
      optional(@identifier),
      "(", optional(@formal_parameters), ")",
      @statement_block)

    formal_parameters: ->
      commaSep1(@identifier)

    statement_block: -> seq(
      "{", err(repeat(@statement)), "}")

    array: -> seq(
      "[", commaSep(err(@expression)), "]")

    identifier: -> /[\a_$][\a\d_$]*/

    number: -> token(choice(
      seq(
        "0x",
        /[\da-fA-F]+/),
      seq(
        /\d+/,
        optional(seq(".", /\d*/)))))

    bool_op: -> choice(
      prec(4, seq("!", @expression)),
      prec(2, seq(@expression, "&&", @expression)),
      prec(1, seq(@expression, "||", @expression)))

    bitwise_op: -> choice(
      prec(3, seq(@expression, ">>", @expression)),
      prec(3, seq(@expression, "<<", @expression)),
      prec(2, seq(@expression, "&", @expression)),
      prec(1, seq(@expression, "|", @expression)))

    ternary: -> prec(-1, seq(
      @expression, "?", @expression, ":", @expression))

    math_op: -> choice(
      prec(4, seq("-", @expression)),
      prec(4, seq("+", @expression)),
      prec(4, seq(@expression, "++")),
      prec(4, seq(@expression, "--")),
      prec(1, seq(@expression, "+", @expression)),
      prec(1, seq(@expression, "-", @expression)),
      prec(2, seq(@expression, "*", @expression)),
      prec(2, seq(@expression, "/", @expression)))

    rel_op: -> choice(
      seq(@expression, "<", @expression),
      seq(@expression, "<=", @expression),
      seq(@expression, "==", @expression),
      seq(@expression, "===", @expression),
      seq(@expression, "!=", @expression),
      seq(@expression, "!==", @expression),
      seq(@expression, ">=", @expression),
      seq(@expression, ">", @expression))

    type_op: -> choice(
      prec(1, seq(keyword("typeof"), @expression)),
      prec(1, seq(@expression, keyword("instanceof"), @expression)),
      prec(1, seq(@expression, keyword("in"), @expression)))

    string: -> token(choice(
      seq('"', repeat(choice(/[^"]/, '\\"')), '"'),
      seq("'", repeat(choice(/[^']/, "\\'")), "'")))

    comment: -> token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))

    regex: -> token(seq(
      '/', repeat(choice(/[^/\n]/, '\\/')), '/',
      repeat(choice('i', 'g'))))

    true: -> keyword("true")
    false: -> keyword("false")
    null: -> keyword("null")
    undefined: -> keyword("undefined")

    _line_break: -> "\n"
