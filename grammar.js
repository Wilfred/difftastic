module.exports = grammar({
  name: 'prisma',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.datasource_definition
    ),

    datasource_definition: $ => seq(
      'datasource',
      $.identifier,
      $.datasource_block,
    ),

    datasource_block: $ => seq(
      '{',
      repeat($._datasource_statement),
      '}'
    ),

    _datasource_statement: $ => seq(
      $.identifier,
      $.assignation,
      $.assignee,
    ),

    assignee: $ => choice(
      $.string_value,
      $._environment_variable,
      $.boolean
    ),

    string_value: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"')
    )),

    _environment_variable: $ => seq(
      $.identifier,
      $.dot,
      $.identifier
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,

    number: $ => /\d+/,

    assignation: $ => '=',

    dot: $ => '.',

    boolean: $ => choice(
      $.true,
      $.false
    ),

    true: $ => 'true',
    false: $ => 'false'
  }
});
