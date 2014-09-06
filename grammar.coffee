compiler = require("tree-sitter-compiler")
{ choice, err, repeat, seq, keyword, optional, token } = compiler.rules

commaSep = (rule) ->
  optional(commaSep1(rule))

commaSep1 = (rule) ->
  seq(rule, repeat(seq(",", rule)))

module.exports = compiler.grammar
  name: 'c',

  separators: [' ', '\t', '\r', '\n']

  ubiquitous: ["comment"]

  rules:
    program: -> repeat(choice(
      @preproc_call,
      @typedef,
      @var_declaration))

    preproc_call: -> choice(
      @preproc_include,
      @preproc_define,
      seq(@preproc_directive, /.*/)
    )

    preproc_include: -> seq(
      keyword("#include"),
      choice(@string, @system_lib_string))

    preproc_define: -> seq(
      keyword("#define"),
      @identifier,
      /.+/)

    preproc_directive: -> /#\a\w+/

    typedef: -> seq(
      keyword("typedef"),
      @type,
      @identifier,
      ";")

    var_declaration: -> seq(
      repeat(@type_modifier),
      @identifier,
      commaSep1(@type_expression),
      ";")

    type_expression: -> choice(
      @identifier,
      @pointer_type)

    type: -> choice(
      @identifier,
      @struct_type)

    pointer_type: -> seq(
      "*", @type_expression)

    struct_type: -> seq(
      keyword("struct"),
      "{", err(repeat(seq(@field, ";"))), "}")

    field: -> seq(@type, @type_expression)

    type_modifier: -> choice(
      keyword("const"),
      keyword("static"),
      keyword("inline"),
      keyword("extern"))

    string: -> token(seq(
      '"', repeat(choice(/[^"]/, '\\"')), '"'))

    system_lib_string: -> token(seq(
      '<', repeat(choice(/[^>]/, '\\>')), '>'))

    identifier: -> /\a\w*/

    comment: -> token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))
