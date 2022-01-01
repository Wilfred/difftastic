const STRING = /".*"/;
const DECIMAL_DIGITS = /-?\d+/;
const HEX_DIGITS = /-?0x[\da-f]+/;

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
    source_declaration: _ => seq('.source', STRING),
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
      repeat($._code_line),
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
    annotation_value: $ => choice(HEX_DIGITS, STRING, $.class_identifier, $.list, $.enum_reference),
    end_annotation: _ => '.end annotation',

    // code lines
    _code_line: $ => choice($.label, $._declaration, $.annotation_definition, $.statement),
    label: _ => /:[\w\d]+/,

    // statement
    statement: $ => seq($.statement_name, /.*/),
    statement_name: _ => /[\w\d\/-]+/,

    // code declarations
    _declaration: $ => choice($.line_declaration, $.locals_declaration, $.param_declaration, $.catch_declaration, $.catchall_declaration, $.packed_switch_declaration, $.sparse_switch_declaration, $.array_data_declaration),
    line_declaration: _ => seq('.line', /\d+/),
    locals_declaration: _ => seq('.locals', /\d+/),
    param_declaration: _ => seq('.param', /p\d+/),
    catch_declaration: $ => seq('.catch', $.class_identifier, '{', $.label, '..', $.label, '}', $.label),
    catchall_declaration: $ => seq('.catchall', '{', $.label, '..', $.label, '}', $.label),
    packed_switch_declaration: $ => seq(
      '.packed-switch', HEX_DIGITS,
      repeat($.label),
      '.end packed-switch'
    ),
    sparse_switch_declaration: $ => seq(
      '.sparse-switch',
      repeat(seq(HEX_DIGITS, '->', $.label)),
      '.end sparse-switch'
    ),
    array_data_declaration: _ => seq(
      '.array-data', DECIMAL_DIGITS,
      repeat(HEX_DIGITS),
      '.end array-data'
    ),

    // identifiers
    class_identifier: _ => /L[\w\d\/\$]+;/,
    field_identifier: $ => seq(/[\w]+/, ':', $._type),
    method_identifier: $ => seq(choice('<init>', /[\w\d_]+/), '(', field('parameter', repeat($._type)), ')', field('return_type', $._type)),

    // types
    _type: $ => choice($.primitive_type, $.class_identifier, $.array_type),
    array_type: $ => seq('[', field('element_type', $._type)),
    primitive_type: _ => choice(...primitives),

    access_modifiers: _ => repeat1(choice(...modifiers)),
    comment: _ => token(seq('#', /.*/)),
    enum_reference: $ => seq('.enum', $.field_identifier),
    list: $ => seq('{',
        choice(
          repeat(seq(HEX_DIGITS, optional(','))),
          repeat(seq(STRING, optional(','))),
          repeat(seq($.class_identifier, optional(','))),
        ),
    '}')
  }
});
