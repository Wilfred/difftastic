// the constant contains the order of precedence.
// the higher the value, higher the precedence.
const PRECEDENCE = {
  HASH: 1,
  ARRAY: 2,
  SUB_ARGS: 3,
};

module.exports = grammar({
  name: 'perl',

  conflicts: $ => [
    [$._boolean, $.call_expression],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._comments,

      $._expression,

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
      field('condition', $.parenthesized_expression),
      field('consequence', $.block),
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
      field('name', choice($.scalar_variable, $.array_variable, $.hash_variable)),
      optional($._initializer),
    ),

    _initializer: $ => seq(
      '=',
      field('value', $._expression),
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

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    return_statement: $ => seq(
      'return',
      optional($._expression),
      $._semi_colon,
    ),

    _expression: $ => choice(
      $._primitive_expression,

      $.call_expression,
    ),

    call_expression: $ => seq(
      field('function_name', $.identifier),
      field('args', optional(choice($.parenthesized_arguments, $.arguments))),
      $._semi_colon,
    ),

    parenthesized_arguments: $ => prec(PRECEDENCE.SUB_ARGS, seq(
      '(',
      optional($.arguments),
      ')',
    )),

    arguments: $ => commaSeparated($._expression),

    _primitive_expression: $ => choice(
      // data-types
      $.string_single_quoted,
      // TODO: handle escape sequences
      $.string_double_quoted,
      $._numeric_literals,
      $._boolean,

      $.array,
      $.array_ref,

      $.hash,
      $.hash_ref,
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

    identifier: $ => /[a-zA-z0-9_]+/,

    _semi_colon: $ => ';',

    string_single_quoted: $ => /\'.*\'/,

    string_double_quoted: $ => /\".*\"/,

    _boolean: $ => choice(
      $.true,
      $.false,
    ),
    true: $ => 'true',
    false: $ => 'false',

    //TODO: add check that variable name shouldn't start with numbers
    scalar_variable: $ => /\$[a-zA-z0-9_]+/,

    array_variable: $ => /@[a-zA-z0-9_]+/,

    hash_variable: $ => /%[a-zA-z0-9_]+/,

    array: $ => prec(PRECEDENCE.ARRAY, seq(
      '(',
      optional(commaSeparated($._primitive_expression)),
      ')',
    )),

    array_ref: $ => seq(
      '[',
      optional(commaSeparated($._primitive_expression)),
      ']',
    ),

    // TODO: accept ('key', value, 'key2', value2) as hash
    hash: $ => prec(PRECEDENCE.HASH, seq(
      '(',
      optional(commaSeparated($._key_value_pair)),
      ')',
    )),
    
    hash_ref: $ => seq(
      '{',
      optional(commaSeparated($._key_value_pair)),
      '}'
    ),

    // cat => 'meow',
    _key_value_pair: $ => seq(
      $.identifier,
      '=>',
      $._primitive_expression,
    ),

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
  return seq(
    rule,
    repeat(seq(',', rule)),
    optional(','), // in perl so far you could have this
  );
}
