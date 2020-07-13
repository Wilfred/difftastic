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

  supertypes: $ => [$._statement, $._declaration],

  inline: $ => [$._statement, $._declaration],

  word: $ => $.identifier,

  rules: {
    script: $ => repeat($._statement),

    identifier: $ => /[a-zA-Z_\x80-\xff][a-zA-Z0-9_\x80-\xff]*/,

    variable: $ => seq('$', $.identifier),

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

    class_modifier: $ => choice('abstract', 'final'),

    _statement: $ => choice($._declaration, $.compound_statement),

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
