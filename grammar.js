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
  [prec.left, 'SUBSCRIPT'],
  [prec, 'CLONE'],
  [prec.right, 'AWAIT', 'INCP'],
  [prec.right, '**', 'CAST', 'ERROR', 'PINC'],
  [prec.left, 'IS', 'AS'],
  [prec.right, 'UNARY'],
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
  [prec.left, 'TERNARY'],
  [prec.right, 'ASSIGNMENT'],
  [prec.right, 'PRINT'],
  [prec, 'TYPE'],
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

  inline: $ => [$._statement, $._declaration, $._literal, $._variablish],

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

    nullable_type: $ => seq('?', $._type),

    type_arguments: $ => seq(token(PREC.TYPE('<')), com($._type, op(',')), '>'),

    type_parameters: $ =>
      seq(token(PREC.TYPE('<')), com($.type_parameter, op(',')), '>'),

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
          op(
            choice(
              $.subtype_constraint,
              $.supertype_constraint,
              $.equivalent_constraint,
            ),
          ),
        ),
      ),

    subtype_constraint: $ => seq('as', $._type),
    supertype_constraint: $ => seq('super', $._type),
    equivalent_constraint: $ => seq('=', $._type),

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
        field('type_parameters', op($.type_parameters)),
        field('parameters', $.parameters),
        op(seq(':', field('return_type', $._type))),
      ),

    parameters: $ => seq('(', op(com($.parameter, op(','))), ')'),

    parameter: $ => seq(op(field('type', $._type)), field('name', $.variable)),

    classish_declaration: $ =>
      seq(
        op($.class_modifier),
        op($.class_modifier),
        field(
          'type',
          alias(choice('class', 'interface', 'trait'), $.type_identifier),
        ),
        field('name', $.identifier),
        op($.extends_clause),
        op($.implements_clause),
        field('body', $.declaration_list),
      ),

    declaration_list: $ => seq('{', repeat(choice($.method_declaration)), '}'),

    extends_clause: $ => seq('extends', com($.identifier)),

    implements_clause: $ => seq('implements', com($.identifier)),

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
      PREC.UNARY(
        choice(
          seq(field('operator', '!'), field('operand', $._expression)),
          seq(field('operator', '~'), field('operand', $._expression)),
          seq(field('operator', '-'), field('operand', $._expression)),
          seq(field('operator', '+'), field('operand', $._expression)),
        ),
      ),

    subscript_expression: $ =>
      PREC.SUBSCRIPT($._expression, '[', op($._expression), ']'),

    assignment_expression: $ =>
      PREC.ASSIGNMENT(
        field('left', $._variablish),
        '=',
        field('right', $._expression),
      ),

    augmented_assignment_expression: $ =>
      PREC.ASSIGNMENT(
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
      PREC.IS(field('left', $._expression), 'is', field('right', $._type)),

    as_expression: $ =>
      PREC.AS(
        field('left', $._expression),
        choice('as', '?as'),
        field('right', $._type),
      ),

    print_expression: $ => PREC.PRINT('print', $._expression),

    clone_expression: $ => PREC.CLONE('clone', $._expression),

    await_expression: $ => PREC.AWAIT('await', $._expression),

    error_control_expression: $ => PREC.ERROR('@', $._expression),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    update_expression: $ =>
      choice(
        PREC.INCP($._expression, choice('++', '--')),
        PREC.PINC(choice('++', '--'), $._expression),
      ),

    cast_expression: $ =>
      PREC.CAST(
        '(',
        field('type', $.primitive_type),
        ')',
        field('value', $._expression),
      ),

    ternary_expression: $ =>
      PREC.TERNARY(
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
        $.classish_declaration,
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
