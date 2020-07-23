module.exports = grammar({
  name: 'perl',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._declaration,
      $.return_statement,

      // conditional statements
      $.if_statement,

      $.assignment_statement,
    ),

    assignment_statement: $ => seq(
      // optional($.scope),
      $.scalar_declaration,
      '=',
      $._expression,
      $._semi_colon,
    ),

    if_statement: $ => seq(
      'if',
      '(',
      $._expression,
      ')',
      field('body', $.block),
    ),

    _declaration: $ => choice(
      $.function_definition,
      $.scalar_declaration,
      $.array_declaration,
    ),

    array_declaration: $ => seq(
      $.scope,
      field('variable_name', $.array_variable),
      $._semi_colon,
    ),

    scalar_declaration: $ => seq(
      $.scope,
      field('variable_name', $.scalar_variable),
      $._semi_colon,
    ),
    
    scope: $ => choice(
      'my',
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

    return_statement: $ => seq(
      'return',
      $._expression,
      $._semi_colon,
    ),

    _expression: $ => choice(
      $.string_single_quoted,
      $.number,
      $.boolean,
    ),

    // TODO: check the perl variable name rules
    identifier: $ => /[a-z]+/,

    _semi_colon: $ => ';',

    string_single_quoted: $ => /\'.*\'/,

    number: $ => /\d/,

    boolean: $ => /true|false/,

    scalar_variable: $ => /\$[a-z]+/,

    array_variable: $ => /@[a-z]+/,
  }
});
