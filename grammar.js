// Return field with name declared as by calling a method on `fi` instead of passing
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
    ? optionalComma
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

module.exports = grammar({
  name: 'hack',

  supertypes: $ => [$._statement, $._declaration, $._expression, $._literal],

  inline: $ => [$._statement, $._declaration, $._literal],

  word: $ => $.identifier,

  rules: {
    script: $ => repeat($._statement),

    _statement: $ =>
      choice($._declaration, $.compound_statement, $.expression_statement),

    expression_statement: $ => seq($._expression, ';'),

    _expression: $ =>
      choice($.varray, $.darray, $.vec, $.keyset, $.dict, $.tuple, $._literal),

    identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

    variable: $ => seq('$', $.identifier),

    // Literals

    _literal: $ => choice($.integer, $.float, $.true, $.false, $.null),

    float: $ => /\d+\.\d*|\d*\.\d+/,

    integer: $ => /\d+/,

    // Tree-sitter confuses boolean /(true|false)/ with identifier. Don't know why.
    true: $ => choice('true', 'True', 'TRUE'),
    false: $ => choice('false', 'False', 'FALSE'),

    null: $ => choice('null', 'Null', 'NULL'),

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
  },
});
