const optionalComma = optional(',');

// Optional rules auto-wrapped in a sequence rule.
const op = (...rules) =>
  rules.length > 1
    ? optional(seq(...rules))
    : rules[0] == ','
    ? // Return a constant so we can compare in `com`.
      optionalComma
    : optional(rules[0]);

// Comma separated rules. If the last rule is equal to optionalComma, include an
// optional trailing comma for the list of given rules.
const com = (...rules) => {
  const lastRule = rules[rules.length - 1];

  if (lastRule === optionalComma) {
    return seq(...rules, repeat(seq(',', ...rules)), optionalComma);
  } else {
    return seq(...rules, repeat(seq(',', ...rules)));
  }
};

const PREC = {};
// https://docs.hhvm.com/hack/expressions-and-operators/operator-precedence
// https://github.com/hhvm/user-documentation/commit/6d1f94161af68b225d0b5369998de9727cb6e2fc

// Precence based on order.
[
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
]
  .reverse()
  .forEach(([prec, ...names], index) =>
    names.forEach(name => {
      PREC[name] = (rule1, ...rules) =>
        prec(index, rules.length ? seq(rule1, ...rules) : rule1);
    }),
  );

module.exports = grammar({
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
    [$.shape, $.shape_type],
  ],

  rules: {
    script: $ => seq(op(/<\?[hH][hH]/), repeat($._statement)),

    _statement: $ =>
      choice($._declaration, $.compound_statement, $.expression_statement),

    expression_statement: $ => seq($._expression, ';'),

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
      ),

    identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

    qualified_identifier: $ =>
      seq(op('\\'), repeat(seq($.identifier, '\\')), $.identifier),

    scoped_identifier: $ => seq($.qualified_identifier, '::', $.identifier),

    variable: $ => seq('$', $.identifier),

    _variablish: $ =>
      choice($.variable, $.list_expression, $.subscript_expression),

    // Literals

    _literal: $ =>
      choice($.string, $.integer, $.float, $.true, $.false, $.null),

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

    // prettier-ignore
    string: $ =>
      token(
        choice(
          /(re|b)?'(\\'|\\\\|\\?[^'\\])*'/,
          /(re|b)?"(\\"|\\\\|\\?[^"\\])*"/
        ),
      ),

    list_expression: $ => seq('list', '(', com($._variablish, op(',')), ')'),

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

    type_arguments: $ => seq(token(PREC.type('<')), com($._type, op(',')), '>'),

    type_parameters: $ =>
      seq(token(PREC.type('<')), com($.type_parameter, op(',')), '>'),

    type_parameter: $ =>
      seq(
        op(
          choice(
            alias('+', $.covariant_modifier),
            alias('-', $.contravariant_modifier),
          ),
        ),
        field('name', $.identifier),
        field(
          'type_constraint',
          op(choice($.subtype_constraint, $.supertype_constraint)),
        ),
      ),

    subtype_constraint: $ => seq('as', $._type),
    supertype_constraint: $ => seq('super', $._type),

    varray_type: $ => seq('varray', op($.type_arguments)),

    darray_type: $ => seq('darray', op($.type_arguments)),

    vec_type: $ => seq('vec', op($.type_arguments)),

    keyset_type: $ => seq('keyset', op($.type_arguments)),

    dict_type: $ => seq('dict', op($.type_arguments)),

    array_type: $ => seq('array', op($.type_arguments)),

    shape_type: $ =>
      seq(
        'shape',
        '(',
        op(
          choice(
            seq(
              com($.field),
              op(',', op(alias('...', $.open_modifier), op(','))),
            ),
            seq(alias('...', $.open_modifier), op(',')),
          ),
        ),
        ')',
      ),

    field: $ =>
      seq(
        op(alias('?', $.optional_modifier)),
        choice($.string, $.scoped_identifier),
        '=>',
        $._type,
      ),

    // Collections

    element_initializer: $ => seq($._expression, '=>', $._expression),

    varray: $ => seq($.varray_type, '[', op(com($._expression, op(','))), ']'),

    darray: $ =>
      seq($.darray_type, '[', op(com($.element_initializer, op(','))), ']'),

    vec: $ => seq($.vec_type, '[', op(com($._expression, op(','))), ']'),

    dict: $ =>
      seq($.dict_type, '[', op(com($.element_initializer, op(','))), ']'),

    keyset: $ => seq($.keyset_type, '[', op(com($._expression, op(','))), ']'),

    tuple: $ => seq('tuple', '(', op(com($._expression, op(','))), ')'),

    field_initializer: $ =>
      seq(choice($.string, $.scoped_identifier), '=>', $._expression),

    shape: $ => seq('shape', '(', op(com($.field_initializer, op(','))), ')'),

    // Classes and Functions

    class_modifier: $ => choice('abstract', 'final'),

    compound_statement: $ => seq('{', repeat($._statement), '}'),

    function_declaration: $ =>
      seq($._function_declaration_header, field('body', $.compound_statement)),

    _function_declaration_header: $ =>
      seq(
        op(alias('async', $.async_modifier)),
        'function',
        field('name', $.identifier),
        op($.type_parameters),
        field('parameters', $.parameters),
        op(':', field('return_type', $._type)),
      ),

    parameters: $ => seq('(', op(com($.parameter, op(','))), ')'),

    parameter: $ => seq(op(field('type', $._type)), field('name', $.variable)),

    trait_declaration: $ =>
      seq(
        'trait',
        field('name', $.identifier),
        op($.type_parameters),
        op($.implements_clause),
        field('body', $.declaration_list),
      ),

    interface_declaration: $ =>
      seq(
        'interface',
        field('name', $.identifier),
        op($.type_parameters),
        op($.extends_clause),
        field('body', $.declaration_list),
      ),

    class_declaration: $ =>
      seq(
        op($.class_modifier),
        op($.class_modifier),
        'class',
        field('name', $.identifier),
        op($.type_parameters),
        op($.extends_clause),
        op($.implements_clause),
        field('body', $.declaration_list),
      ),

    declaration_list: $ => seq('{', repeat(choice($.method_declaration)), '}'),

    extends_clause: $ => seq('extends', com($._type)),

    implements_clause: $ => seq('implements', com($._type)),

    method_declaration: $ =>
      seq(
        op($.class_modifier),
        op($.class_modifier),
        $._function_declaration_header,
        choice(field('body', $.compound_statement), ';'),
      ),

    // Expressions

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

    subscript_expression: $ =>
      PREC.subscript($._expression, '[', op($._expression), ']'),

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

    parenthesized_expression: $ => seq('(', $._expression, ')'),

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
        field('body', op($._expression)),
        ':',
        field('alternative', $._expression),
      ),

    lambda_expression: $ =>
      seq(
        op(alias('async', $.async_modifier)),
        choice(
          field('parameters', $.variable),
          seq(field('parameters', $.parameters), op($.return_type)),
        ),
        '==>',
        field('body', $._expression, $.compound_statement),
      ),

    return_type: $ => seq(':', field('return_type', $._type)),

    // Declarations

    _declaration: $ =>
      choice(
        $.function_declaration,
        $.class_declaration,
        $.interface_declaration,
        $.trait_declaration,
        $.alias_declaration,
      ),

    alias_declaration: $ =>
      seq(
        choice('type', 'newtype'),
        $.identifier,
        op($.type_parameters),
        '=',
        $._type,
        ';',
      ),

    // https://github.com/tree-sitter/tree-sitter-javascript/blob/7303aff134ad1cc785ae816ef50b067d34d64b26/grammar.js#L835
    comment: $ =>
      token(
        choice(
          seq('#', /.*/),
          seq('//', /.*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
        ),
      ),
  },
});
