module.exports = grammar({
  name: 'perl',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._comments,

      $._declaration,

      $.return_statement,

      // conditional statements
      $.if_statement,

      $.assignment_statement,
    ),

    _comments: $ => choice(
      $.single_line_comment,
    ),

    assignment_statement: $ => seq(
      // optional($.scope),
      // $.scalar_declaration,
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
      $.variable_declaration,
    ),

    variable_declaration: $ => seq(
      $.scope,
      // multi declaration
      // or single declaration without brackets
      choice($.multi_var_declaration, $.single_var_declaration),
      $._semi_colon,
    ),

    multi_var_declaration: $ => seq(
      '(',
      commaSeparated($.variable_declarator),
      ')',
    ),

    single_var_declaration: $ => alias($.variable_declarator, 'single_var_declaration'),

    variable_declarator: $ => seq(
      field('name', choice($.scalar_variable, $.array_variable)),
      optional($._initializer),
    ),

    _initializer: $ => seq(
      '=',
      // choice between multiple assignments and single assignments
      choice(
        seq('(', field('value', commaSeparated($._expression)), ')'),
        field('value', $._expression),
      ),
      
    ),
    
    scope: $ => choice(
      'our',
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

    single_line_comment: $ => /#.*/,
  }
});

/**
 * repeats the rule comma separated, like
 * rule, rule
 * example: my (a, b);
 * using it in the above.
 * @param {*} rule 
 */
function commaSeparated(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
