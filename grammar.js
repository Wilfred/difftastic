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

const precMap = {};
// https://docs.hhvm.com/hack/expressions-and-operators/operator-precedence
// https://github.com/hhvm/user-documentation/commit/6d1f94161af68b225d0b5369998de9727cb6e2fc

// Precence based on order.
[
  [prec.right, '**'],
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
]
  .reverse()
  .forEach(([prec, ...names], index) =>
    names.forEach(name => {
      precMap[name] = rule => prec(index, rule);
    }),
  );

module.exports = grammar({
  name: 'hack',

  extras: $ => [/\s/],

  supertypes: $ => [$._statement, $._declaration, $._expression, $._literal],

  inline: $ => [$._statement, $._declaration, $._literal],

  word: $ => $.identifier,

  conflicts: $ => [[$.binary_expression]],

  rules: {
    script: $ => repeat($._statement),

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
        $._literal,
        $.binary_expression,
        $.unary_expression,
      ),

    identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

    variable: $ => seq('$', $.identifier),

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

    // Types

    _type: $ =>
      choice(
        $.primitive_type,
        $.varray_type,
        $.darray_type,
        $.vec_type,
        $.dict_type,
        $.keyset_type,
        $.array_type,
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

    type_arguments: $ => seq('<', com($._type, op(',')), '>'),

    varray_type: $ => seq('varray', op($.type_arguments)),

    darray_type: $ => seq('darray', op($.type_arguments)),

    vec_type: $ => seq('vec', op($.type_arguments)),

    keyset_type: $ => seq('keyset', op($.type_arguments)),

    dict_type: $ => seq('dict', op($.type_arguments)),

    array_type: $ => seq('array', op($.type_arguments)),

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

    // Classes and Functions

    class_modifier: $ => choice('abstract', 'final'),

    compound_statement: $ => seq('{', repeat($._statement), '}'),

    _declaration: $ => choice($.function_declaration, $.classish_declaration),

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
          precMap[operator](
            seq(
              fi.left($._expression),
              fi.operator(operator),
              fi.right($._expression),
            ),
          ),
        ),
      ),

    unary_expression: $ =>
      precMap.UNARY(
        choice(
          seq(fi.operator('!'), fi.operand($._expression)),
          seq(fi.operator('~'), fi.operand($._expression)),
          seq(fi.operator('-'), fi.operand($._expression)),
          seq(fi.operator('+'), fi.operand($._expression)),
        ),
      ),
  },
});
