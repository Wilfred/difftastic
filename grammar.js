// Return field with name declared by calling a method on `fi` instead of passing
// a parameter. I.e. fi.name(rule) vs field('name', rule)
const fi = new Proxy(
  {},
  {
    get: (_, name) => (rule1, ...rules) =>
      field(name, rules.length ? choice(rule1, ...rules) : rule1),
  },
);

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
  [prec.left, 'PAREN'],
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

  conflicts: $ => [[$.binary_expression]],

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
        'null',
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
        $.identifier,
        fi.type_constraint(op('as', $._type)),
      ),

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
      seq($._function_declaration_header, fi.body($.compound_statement)),

    _function_declaration_header: $ =>
      seq(
        'function',
        fi.name($.identifier),
        fi.parameters($.parameters),
        op(seq(':', fi.return_type($.primitive_type))),
      ),

    parameters: $ => seq('(', op(com($.parameter, op(','))), ')'),

    parameter: $ => seq(op(fi.type($.primitive_type)), fi.name($.variable)),

    classish_declaration: $ =>
      seq(
        op($.class_modifier),
        op($.class_modifier),
        fi.type(
          alias(choice('class', 'interface', 'trait'), $.type_identifier),
        ),
        fi.name($.identifier),
        op($.extends_clause),
        op($.implements_clause),
        fi.body($.declaration_list),
      ),

    declaration_list: $ => seq('{', repeat(choice($.method_declaration)), '}'),

    extends_clause: $ => seq('extends', com($.identifier)),

    implements_clause: $ => seq('implements', com($.identifier)),

    method_declaration: $ =>
      seq(
        op($.class_modifier),
        op($.class_modifier),
        $._function_declaration_header,
        choice(fi.body($.compound_statement), ';'),
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
            fi.left($._expression),
            fi.operator(operator),
            fi.right($._expression),
          ),
        ),
      ),

    unary_expression: $ =>
      PREC.UNARY(
        choice(
          seq(fi.operator('!'), fi.operand($._expression)),
          seq(fi.operator('~'), fi.operand($._expression)),
          seq(fi.operator('-'), fi.operand($._expression)),
          seq(fi.operator('+'), fi.operand($._expression)),
        ),
      ),

    subscript_expression: $ =>
      PREC.SUBSCRIPT($._expression, '[', op($._expression), ']'),

    assignment_expression: $ =>
      PREC.ASSIGNMENT(fi.left($._variablish), '=', fi.right($._expression)),

    augmented_assignment_expression: $ =>
      PREC.ASSIGNMENT(
        fi.left($._variablish),
        fi.operator(
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
        fi.right($._expression),
      ),

    fun_expression: $ =>
      seq(
        'fun',
        '(',
        choice(
          seq("'", fi.name($.qualified_identifier), "'"),
          seq('"', fi.name($.qualified_identifier), '"'),
        ),
        ')',
      ),

    is_expression: $ =>
      PREC.IS(fi.left($._expression), 'is', fi.right($._type)),

    as_expression: $ =>
      PREC.AS(fi.left($._expression), choice('as', '?as'), fi.right($._type)),

    print_expression: $ => PREC.PRINT('print', $._expression),

    clone_expression: $ => PREC.CLONE('clone', $._expression),

    await_expression: $ => PREC.AWAIT('await', $._expression),

    error_control_expression: $ => PREC.ERROR('@', $._expression),

    parenthesized_expression: $ => PREC.PAREN('(', $._expression, ')'),

    update_expression: $ =>
      choice(
        PREC.INCP($._expression, choice('++', '--')),
        PREC.PINC(choice('++', '--'), $._expression),
      ),

    cast_expression: $ =>
      PREC.CAST(
        fi.type('(', choice('int', 'float', 'string'), ')'),
        fi.value($._expression),
      ),

    ternary_expression: $ =>
      PREC.TERNARY(
        fi.condition($._expression),
        '?',
        fi.body(op($._expression)),
        ':',
        fi.alternative($._expression),
      ),

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
