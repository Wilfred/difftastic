module.exports = grammar({
  name: 'perl',

  rules: {
    source_file: $ => repeat($._definitions),

    _definitions: $ => choice(
      $.function_definition,
    ),

    function_definition: $ => seq(
      'sub',
      field('name', $.identifier),
      field('body', $.block),
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement,
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.string,
    ),

    identifier: $ => /[a-z]+/,

    string: $ => /\'.*\'/,
  }
});
