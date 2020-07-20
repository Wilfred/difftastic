'use strict';

// https://docs.hhvm.com/hack/expressions-and-operators/operator-precedence
PREC(
  [prec.left, 'subscript'],
  [prec, 'clone'],
  [prec.right, 'await', 'incp'],
  [prec.right, '**', 'cast', 'error', 'pinc'],
  [prec.left, 'is', 'as'],
  [prec.right, 'unary'],
  [prec.left, '*', '/', '%'],
  [prec.left, '+', '-', '.'],
  [prec.left, '<<', '>>'],
  [prec, '<', '>', '<=', '>=', '<=>'],
  [prec, '==', '!=', '===', '!=='],
  [prec.left, '&&'],
  [prec.left, '^'],
  [prec.left, '||'],
  [prec.left, '&'],
  [prec.left, '|'],
  [prec.right, '??'],
  [prec.left, 'ternary'],
  [prec.right, 'assignment'],
  [prec.right, 'print'],
  [prec, 'type'],
);

// prettier-ignore
PREC(
  [prec, 'elseif'],
  [prec.right, 'if'],
);

const rules = {
  script: $ => seq(opt(/<\?[hH][hH]/), rep($._statement)),

  identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

  qualified_identifier: $ =>
    seq(opt('\\'), seq.rep($.identifier, '\\'), $.identifier),

  scoped_identifier: $ => seq($.qualified_identifier, '::', $.identifier),

  variable: $ => seq('$', $.identifier),

  _variablish: $ =>
    choice($.variable, $.list_expression, $.subscript_expression),

  _statement: $ =>
    choice(
      $._declaration,
      $.compound_statement,
      $.empty_statement,
      $.expression_statement,
      $.return_statement,
      $.break_statement,
      $.continue_statement,
      $.if_statement,
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.switch_statement,
      $.foreach_statement,
    ),

  _declaration: $ =>
    choice(
      $.function_declaration,
      $.class_declaration,
      $.interface_declaration,
      $.trait_declaration,
      $.alias_declaration,
    ),

  _expression: $ =>
    choice(
      $.varray,
      $.darray,
      $.vec,
      $.keyset,
      $.dict,
      $.tuple,
      $.shape,
      $._literal,
      $._variablish,
      $.parenthesized_expression,
      $.binary_expression,
      $.unary_expression,
      $.assignment_expression,
      $.augmented_assignment_expression,
      $.is_expression,
      $.as_expression,
      $.fun_expression,
      $.await_expression,
      $.error_control_expression,
      $.clone_expression,
      $.cast_expression,
      $.print_expression,
      $.update_expression,
      $.ternary_expression,
      $.lambda_expression,
      $.function_call_expression,
    ),

  // Statements

  empty_statement: $ => ';',

  expression_statement: $ => seq($._expression, ';'),

  compound_statement: $ => seq('{', rep($._statement), '}'),

  return_statement: $ => seq('return', opt($._expression), ';'),

  break_statement: $ => seq('break', opt($._expression), ';'),

  continue_statement: $ => seq('continue', opt($._expression), ';'),

  if_statement: $ =>
    PREC.if(
      'if',
      field('condition', $.parenthesized_expression),
      field('body', $._statement),
      rep(
        PREC.elseif(
          // Match else-if (along with elseif) so long if-statements don't result
          // in deeply nested nodes. Are there drawbacks?
          choice('elseif', seq('else', 'if')),
          field('condition', $.parenthesized_expression),
          field('body', $._statement),
        ),
      ),
      field('else', seq.opt('else', $._statement)),
    ),

  switch_statement: $ =>
    seq(
      'switch',
      field('value', $.parenthesized_expression),
      seq('{', choice.rep($.switch_case, $.switch_default), '}'),
    ),

  switch_case: $ =>
    seq('case', field('value', $._expression), ':', rep($._statement)),

  switch_default: $ => seq('default', ':', rep($._statement)),

  foreach_statement: $ =>
    seq(
      'foreach',
      '(',
      field('collection', $._expression),
      'as',
      field('key', seq.opt($._variablish, '=>')),
      field('value', $._variablish),
      ')',
      field('body', $._statement),
    ),

  while_statement: $ =>
    seq(
      'while',
      field('this', $.parenthesized_expression),
      field('then', $._statement),
    ),

  do_statement: $ =>
    seq(
      'do',
      field('body', $._statement),
      'while',
      field('condition', $.parenthesized_expression),
      ';',
    ),

  for_statement: $ =>
    seq(
      'for',
      '(',
      com.opt($._expression),
      ';',
      com.opt($._expression),
      ';',
      com.opt($._expression),
      ')',
      field('body', $._statement),
    ),

  // Literals

  _literal: $ => choice($.string, $.integer, $.float, $.true, $.false, $.null),

  float: $ => /(\d+\.\d*|\d*\.\d+)([eE][+-]?\d+)?/,

  integer: $ =>
    token(
      choice(
        // Integer
        /[1-9]\d*/,
        // Octal - Hack seems to accept non octal literals like 09. Intentional?
        /0[0-7]*/,
        // Hex
        /0[xX][0-9a-fA-F]+/,
        // Binary
        /0[bB][01]+/,
      ),
    ),

  // Tree-sitter confuses boolean /(true|false)/ with identifier. Don't know why.
  true: $ => choice('true', 'True', 'TRUE'),
  false: $ => choice('false', 'False', 'FALSE'),

  null: $ => choice('null', 'Null', 'NULL'),

  string: $ =>
    token(
      choice(
        /(re|b)?'(\\'|\\\\|\\?[^'\\])*'/,
        /(re|b)?"(\\"|\\\\|\\?[^"\\])*"/,
      ),
    ),

  // Types

  _type: $ =>
    choice(
      $.type_identifier,
      $.generic_type,
      $.nullable_type,
      $.primitive_type,
      $.varray_type,
      $.darray_type,
      $.vec_type,
      $.dict_type,
      $.keyset_type,
      $.array_type,
      $.shape_type,
    ),

  type_identifier: $ => alias($.qualified_identifier, $.type_identifier),

  generic_type: $ => seq($.type_identifier, $.type_arguments),

  nullable_type: $ => seq('?', $._type),

  primitive_type: $ =>
    choice(
      'bool',
      'float',
      'int',
      'string',
      'arraykey',
      'void',
      'nonnull',
      $.null,
      'mixed',
      'dynamic',
      'noreturn',
    ),

  type_arguments: $ => seq(token(PREC.type('<')), com($._type, ','), '>'),

  type_parameters: $ =>
    seq(token(PREC.type('<')), com($.type_parameter, ','), '>'),

  type_parameter: $ =>
    seq(
      choice.opt(
        alias('+', $.covariant_modifier),
        alias('-', $.contravariant_modifier),
      ),
      field('name', $.identifier),
      field.opt(
        'type_constraint',
        choice($.subtype_constraint, $.supertype_constraint),
      ),
    ),

  subtype_constraint: $ => seq('as', $._type),

  supertype_constraint: $ => seq('super', $._type),

  varray_type: $ => seq('varray', opt($.type_arguments)),

  darray_type: $ => seq('darray', opt($.type_arguments)),

  vec_type: $ => seq('vec', opt($.type_arguments)),

  keyset_type: $ => seq('keyset', opt($.type_arguments)),

  dict_type: $ => seq('dict', opt($.type_arguments)),

  array_type: $ => seq('array', opt($.type_arguments)),

  shape_type: $ =>
    seq(
      'shape',
      '(',
      choice.opt(
        seq(
          com($.field_specifier),
          seq.opt(',', seq.opt(alias('...', $.open_modifier), opt(','))),
        ),
        seq(alias('...', $.open_modifier), opt(',')),
      ),
      ')',
    ),

  field_specifier: $ =>
    seq(
      alias.opt('?', $.optional_modifier),
      choice($.string, $.scoped_identifier),
      '=>',
      $._type,
    ),

  // Collections

  element_initializer: $ => seq($._expression, '=>', $._expression),

  varray: $ =>
    seq('varray', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  vec: $ =>
    seq('vec', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  darray: $ =>
    seq(
      'darray',
      opt($.type_arguments),
      '[',
      com.opt($.element_initializer, ','),
      ']',
    ),

  dict: $ =>
    seq(
      'dict',
      opt($.type_arguments),
      '[',
      com.opt($.element_initializer, ','),
      ']',
    ),

  keyset: $ =>
    seq('keyset', opt($.type_arguments), '[', com.opt($._expression, ','), ']'),

  tuple: $ => seq('tuple', '(', com.opt($._expression, ','), ')'),

  shape: $ => seq('shape', '(', com.opt($.field_initializer, ','), ')'),

  field_initializer: $ =>
    seq(choice($.string, $.scoped_identifier), '=>', $._expression),

  // Expressions

  parenthesized_expression: $ => seq('(', $._expression, ')'),

  subscript_expression: $ =>
    PREC.subscript($._expression, '[', opt($._expression), ']'),

  list_expression: $ => seq('list', '(', com($._variablish, ','), ')'),

  binary_expression: $ =>
    choice(
      ...[
        '??',
        '||',
        '&&',
        '|',
        '^',
        '&',
        '==',
        '!=',
        '===',
        '!==',
        '<',
        '>',
        '<=',
        '>=',
        '<=>',
        '<<',
        '>>',
        '+',
        '-',
        '.',
        '*',
        '/',
        '%',
        '**',
      ].map(operator =>
        PREC[operator](
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        ),
      ),
    ),

  unary_expression: $ =>
    PREC.unary(
      choice(
        seq(field('operator', '!'), field('operand', $._expression)),
        seq(field('operator', '~'), field('operand', $._expression)),
        seq(field('operator', '-'), field('operand', $._expression)),
        seq(field('operator', '+'), field('operand', $._expression)),
      ),
    ),

  assignment_expression: $ =>
    PREC.assignment(
      field('left', $._variablish),
      '=',
      field('right', $._expression),
    ),

  augmented_assignment_expression: $ =>
    PREC.assignment(
      field('left', $._variablish),
      field(
        'operator',
        choice(
          '??=',
          '.=',
          '|=',
          '^=',
          '&=',
          '<<=',
          '>>=',
          '+=',
          '-=',
          '*=',
          '/=',
          '%=',
          '**=',
        ),
      ),
      field('right', $._expression),
    ),

  fun_expression: $ =>
    seq(
      'fun',
      '(',
      choice(
        seq("'", field('name', $.qualified_identifier), "'"),
        seq('"', field('name', $.qualified_identifier), '"'),
      ),
      ')',
    ),

  is_expression: $ =>
    PREC.is(field('left', $._expression), 'is', field('right', $._type)),

  as_expression: $ =>
    PREC.as(
      field('left', $._expression),
      choice('as', '?as'),
      field('right', $._type),
    ),

  print_expression: $ => PREC.print('print', $._expression),

  clone_expression: $ => PREC.clone('clone', $._expression),

  await_expression: $ => PREC.await('await', $._expression),

  error_control_expression: $ => PREC.error('@', $._expression),

  update_expression: $ =>
    choice(
      PREC.incp($._expression, choice('++', '--')),
      PREC.pinc(choice('++', '--'), $._expression),
    ),

  cast_expression: $ =>
    PREC.cast(
      '(',
      field('type', $.primitive_type),
      ')',
      field('value', $._expression),
    ),

  ternary_expression: $ =>
    PREC.ternary(
      field('condition', $._expression),
      '?',
      field.opt('body', $._expression),
      ':',
      field('alternative', $._expression),
    ),

  lambda_expression: $ =>
    seq(
      alias.opt('async', $.async_modifier),
      choice(
        alias($.variable, $.parameters),
        seq($.parameters, seq.opt(':', field('return_type', $._type))),
      ),
      '==>',
      field('body', choice($._expression, $.compound_statement)),
    ),

  function_call_expression: $ =>
    seq(
      field(
        'function',
        choice(
          seq($.qualified_identifier, opt($.type_arguments)),
          $.subscript_expression,
          $.variable,
          $.parenthesized_expression,
          $.lambda_expression,
          $.function_call_expression,
        ),
      ),
      $.arguments,
    ),

  arguments: $ => seq('(', com.opt($.argument, ','), ')'),

  argument: $ =>
    seq(
      choice.opt(
        alias('inout', $.inout_modifier),
        alias('...', $.variadic_modifier),
      ),
      $._expression,
    ),

  // Declarations

  alias_declaration: $ =>
    seq(
      choice('type', 'newtype'),
      $.identifier,
      opt($.type_parameters),
      '=',
      $._type,
      ';',
    ),

  function_declaration: $ =>
    seq($._function_declaration_header, field('body', $.compound_statement)),

  _function_declaration_header: $ =>
    seq(
      alias.opt('async', $.async_modifier),
      'function',
      field('name', $.identifier),
      opt($.type_parameters),
      $.parameters,
      seq.opt(':', field('return_type', $._type)),
    ),

  parameters: $ => seq('(', com.opt($.parameter, ','), ')'),

  parameter: $ => seq(field.opt('type', $._type), field('name', $.variable)),

  trait_declaration: $ =>
    seq(
      'trait',
      field('name', $.identifier),
      opt($.type_parameters),
      opt($.implements_clause),
      field('body', $.declaration_list),
    ),

  interface_declaration: $ =>
    seq(
      'interface',
      field('name', $.identifier),
      opt($.type_parameters),
      opt($.extends_clause),
      field('body', $.declaration_list),
    ),

  class_declaration: $ =>
    seq(
      opt($.class_modifier),
      opt($.class_modifier),
      'class',
      field('name', $.identifier),
      opt($.type_parameters),
      opt($.extends_clause),
      opt($.implements_clause),
      field('body', $.declaration_list),
    ),

  declaration_list: $ => seq('{', choice.rep($.method_declaration), '}'),

  class_modifier: $ => choice('abstract', 'final'),

  extends_clause: $ => seq('extends', com($._type)),

  implements_clause: $ => seq('implements', com($._type)),

  method_declaration: $ =>
    seq(
      opt($.class_modifier),
      opt($.class_modifier),
      $._function_declaration_header,
      choice(field('body', $.compound_statement), ';'),
    ),

  // Misc

  comment: $ =>
    token(
      choice(
        seq('#', /.*/),
        seq('//', /.*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
    ),
};

/**
 * Precence based on order. Indirection overkill but I couldn't help myself.
 */
function PREC(...args) {
  args.reverse().forEach(([prec, ...names], index) =>
    names.forEach(name => {
      PREC[name] = (rule1, ...rules) =>
        prec(index, rules.length ? seq(rule1, ...rules) : rule1);
    }),
  );
}

/**
 * Comma separated rules. A ',' as the last argument indicates an optional trailing comma.
 */
function com(...rules) {
  if (rules[rules.length - 1] === ',') {
    rules.splice(-1, 1);
    return seq(...rules, repeat(seq(',', ...rules)), optional(','));
  } else {
    return seq(...rules, repeat(seq(',', ...rules)));
  }
}

// prettier-ignore
[
  field,
  seq,
  choice,
  alias,
  com,
].forEach(func => {
  func.opt = (...args) => optional(func(...args));
  func.rep = (...args) => repeat(func(...args));
});

const opt = optional;
const rep = repeat;

module.exports = grammar({
  rules,

  name: 'hack',

  extras: $ => [/\s/, $.comment],

  supertypes: $ => [
    $._statement,
    $._declaration,
    $._expression,
    $._literal,
    $._type,
  ],

  inline: $ => [
    $._statement,
    $._declaration,
    $._literal,
    $._variablish,
    $.type_identifier,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.binary_expression],
    [$._expression, $.parameter],
    [$._expression, $.primitive_type],
    [$._expression, $.function_call_expression],
    [$.shape, $.shape_type],
    [$.varray, $.varray_type],
    [$.darray, $.darray_type],
    [$.vec, $.vec_type],
    [$.dict, $.dict_type],
    [$.keyset, $.keyset_type],
  ],
});
