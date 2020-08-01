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
      // data-types
      $.string_single_quoted,
      // TODO: handle escape sequences
      $.string_double_quoted,
      $._numeric_literals,
      $.boolean,
    ),
    
    _numeric_literals: $ => choice(
      $.integer,
      $.floating_point,
      $.scientific_notation,
      $.hexadecimal,
      $.octal,
    ),

    integer: $ => /-?\d+/,
    floating_point: $ => /-?\d+\.\d+/,
    // copied shamelessly from https://stackoverflow.com/questions/638565/parsing-scientific-notation-sensibly
    scientific_notation: $ => /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,
    hexadecimal: $ => /0[xX][0-9a-fA-F]+/,
    octal: $ => /0[1-7][0-7]*/,

    identifier: $ => /[a-z]+/,

    _semi_colon: $ => ';',

    string_single_quoted: $ => /\'.*\'/,

    string_double_quoted: $ => /\".*\"/,

    boolean: $ => /true|false/,

    //TODO: add check that variable name shouldn't start with numbers
    scalar_variable: $ => /\$[a-zA-z0-9_]+/,

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
