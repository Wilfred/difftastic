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
      @break_statement,
      @statement_block,
      @return_statement,
      @var_declaration)

    expression_statement: -> seq(
      err(@expression), terminator())

    if_statement: -> seq(
      keyword("if"),
      "(", err(@expression), ")",
      @statement)

    switch_statement: -> seq(
      keyword("switch"),
      "(",
      @expression,
      ")",
      "{",
      repeat(choice(@case, @default))
      "}")

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

    return_statement: -> seq(
      keyword("return"),
      optional(@expression),
      terminator())

    var_declaration: -> seq(
      keyword("var"),
      commaSep(choice(
        @identifier,
        @var_assignment)),
      terminator())

    var_assignment: -> seq(
      @identifier,
      "=",
      @expression)

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
      @bool_op,
      @math_op,
      @rel_op,
      @var_assignment,
      @member_assignment,
      @subscript_assignment,
      seq("(", @expression, ")"))

    function_call: -> seq(
      @expression,
      "(",
      optional(@arguments),
      ")")

    constructor_call: -> prec(1, seq(
      keyword("new"),
      @expression,
      optional(seq(
        "(",
        optional(@arguments),
        ")"))))

    arguments: ->
      commaSep1(@expression)

    member_access: -> prec(10, seq(
      @expression,
      ".",
      @identifier))

    member_assignment: -> prec(10, seq(
      @expression,
      ".",
      @identifier,
      "=",
      @expression))

    subscript_access: -> prec(10, seq(
      @expression,
      "[",
      @expression,
      "]"))

    subscript_assignment: -> prec(10, seq(
      @expression,
      "[",
      @expression,
      "]",
      "=",
      @expression))

    object: -> seq(
      "{",
      commaSep(@pair),
      "}")

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
      "{",
      repeat(@statement),
      "}")

    array: -> seq(
      "[",
      commaSep(@expression)
      "]")

    identifier: -> /\a+\d*/

    number: -> token(seq(
      /\d+/,
      optional(seq(".", /\d+/))))

    bool_op: -> choice(
      seq(@expression, "&&", @expression),
      seq(@expression, "||", @expression))

    math_op: -> choice(
      seq(@expression, "++"),
      seq(@expression, "--"),
      seq(@expression, "+", @expression),
      seq(@expression, "-", @expression))

    rel_op: -> choice(
      seq(@expression, "<", @expression),
      seq(@expression, "<=", @expression),
      seq(@expression, "==", @expression),
      seq(@expression, "===", @expression),
      seq(@expression, "!=", @expression),
      seq(@expression, "!==", @expression),
      seq(@expression, ">=", @expression),
      seq(@expression, ">", @expression))

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
