const modifiers = [
  'public',
  'private',
  'protected',
  'static',
  'final',
  'synchronized',
  'volatile',
  'transient',
  'native',
  'interface',
  'abstract',
  'bridge',
  'synthetic'
];

const primitives = [
  'V',
  'Z',
  'B',
  'S',
  'C',
  'I',
  'J',
  'F',
  'D'
];

module.exports = grammar({
  name: 'smali',

  extras: $ => [ 
    $.comment,
    /\s/
  ],

  rules: {
    class_definition: $ => seq(
      $.class_declaration,
      $.super_declaration,
      optional($.source_declaration),
      repeat($.implements_declaration),
      repeat($.annotation_definition),
      repeat(choice($.field_declaration, $.field_definition)),
      repeat($.method_definition),
    ),

    // class related
    class_declaration: $ => seq('.class', $.access_modifiers, $.class_identifier),
    super_declaration: $ => seq('.super', $.class_identifier),
    source_declaration: $ => seq('.source', $.string_literal),
    implements_declaration: $ => seq('.implements', $.class_identifier),

    field_definition: $ => seq(
      $.field_declaration,
      optional($.annotation_definition),
      $.end_field
    ),
    field_declaration: $ => seq('.field', $.access_modifiers, $.field_identifier),
    end_field: _ => '.end field',

    // method related
    method_definition: $ => seq(
      $.method_declaration,
      alias(repeat($._code_line), $.code_block),
      $.end_method
    ),
    method_declaration: $ => seq('.method', $.access_modifiers, optional('constructor'), $.method_identifier),
    end_method: _ => '.end method',

    // annotation related
    annotation_definition: $ => seq(
      $.annotation_declaration,
      repeat($.annotation_property),
      $.end_annotation
    ),
    annotation_declaration: $ => seq('.annotation', choice('system', 'build', 'runtime'), $.class_identifier),
    annotation_property: $ => seq(field('key', $.annotation_key), '=', field('value', $.annotation_value)),
    annotation_key: _ => /\w+/,
    annotation_value: $ => choice($.number_literal, $.string_literal, $.class_identifier, $.list, $.enum_reference),
    end_annotation: _ => '.end annotation',

    // code lines
    _code_line: $ => choice($.label, $._declaration, $.annotation_definition, $.statement),
    label: _ => /:[\w\d]+/,

    // statement
    statement: $ => seq($.statement_name, /.*/),
    statement_name: _ => /[\w\d\/-]+/,

    // code declarations
    _declaration: $ => choice($.line_declaration, $.locals_declaration, $.param_declaration, $.catch_declaration, $.catchall_declaration, $.packed_switch_declaration, $.sparse_switch_declaration, $.array_data_declaration),
    line_declaration: $ => seq('.line', $.number_literal),
    locals_declaration: $ => seq('.locals', $.number_literal),
    param_declaration: $ => seq('.param', $.parameter),
    catch_declaration: $ => seq('.catch', $.class_identifier, '{', $.label, '..', $.label, '}', $.label),
    catchall_declaration: $ => seq('.catchall', '{', $.label, '..', $.label, '}', $.label),
    packed_switch_declaration: $ => seq(
      '.packed-switch', $.number_literal,
      repeat($.label),
      '.end packed-switch'
    ),
    sparse_switch_declaration: $ => seq(
      '.sparse-switch',
      repeat(seq($.number_literal, '->', $.label)),
      '.end sparse-switch'
    ),
    array_data_declaration: $ => seq(
      '.array-data', $.number_literal,
      repeat($.number_literal),
      '.end array-data'
    ),

    // identifiers
    _identifier: $ => choice($.class_identifier, $.field_identifier, $.full_field_identifier, $.method_identifier, $.full_method_identifier),
    class_identifier: _ => /L[\w\d\/\$]+;/,
    field_identifier: $ => seq(/[\w]+/, ':', $._type),
    method_identifier: $ => seq(choice('<init>', /[\w\d_]+/), field('parameters', $.parameters), field('return_type', $._type)),
    full_field_identifier: $ => seq($.class_identifier, '->', $.field_identifier),
    full_method_identifier: $ => seq($.class_identifier, '->', $.method_identifier),

    // types
    _type: $ => choice($.primitive_type, $.class_identifier, $.array_type),
    array_type: $ => seq('[', field('element_type', $._type)),
    primitive_type: _ => choice(...primitives),

    access_modifiers: _ => repeat1(choice(...modifiers)),
    comment: _ => token(seq('#', /.*/)),
    enum_reference: $ => seq('.enum', $.field_identifier),
    parameter: _ => /p\d+/,
    list: $ => seq('{',
        choice(
          repeat(seq($.number_literal, optional(','))),
          repeat(seq($.string_literal, optional(','))),
          repeat(seq($._identifier, optional(','))),
          repeat(seq($.parameter, optional(','))),
        ),
    '}'),
    parameters: $ => seq('(', repeat($._type), ')'),

    // literals
    number_literal: _ => choice(/-?0x[\da-f]+/, /-?\d+/),
    string_literal: _ => /".*"/,
  }
});
