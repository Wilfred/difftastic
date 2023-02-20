const modifiers = [
/**
 * @file Smali grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @author Yotam Nachum <me@yotam.net>
 * @license MIT
 * @see {@link https://github.com/JesusFreke/smali|official implementation}
 * @see {@link https://source.android.com/docs/core/runtime/dalvik-bytecode|official dex bytecode reference}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

  'public',
  'private',
  'protected',
  'static',
  'final',
  'synchronized',
  'volatile',
  'bridge',
  'transient',
  'varargs',
  'native',
  'interface',
  'abstract',
  'strictfp',
  'synthetic',
  'annotation',
  'enum',
  'constructor',
  'declared-synchronized',
];
];

const primitives = ['V', 'Z', 'B', 'S', 'C', 'I', 'J', 'F', 'D'];

const opcodes = [
  'nop',
  'move',
  'move/from16',
  'move/16',
  'move-wide',
  'move-wide/from16',
  'move-wide/16',
  'move-object',
  'move-object/from16',
  'move-object/16',
  'move-result',
  'move-result-wide',
  'move-result-object',
  'move-exception',
  'return-void',
  'return',
  'return-wide',
  'return-object',
  'const/4',
  'const/16',
  'const',
  'const/high16',
  'const-wide/16',
  'const-wide/32',
  'const-wide',
  'const-wide/high16',
  'const-string',
  'const-string/jumbo',
  'const-class',
  'const-method-handle',
  'const-method-type',
  'monitor-enter',
  'monitor-exit',
  'check-cast',
  'instance-of',
  'array-length',
  'new-instance',
  'new-array',
  'filled-new-array',
  'filled-new-array/range',
  'fill-array-data',
  'throw',
  'throw-verification-error',
  'goto',
  'goto/16',
  'goto/32',
  'packed-switch',
  'sparse-switch',
  'cmpl-float',
  'cmpg-float',
  'cmpl-double',
  'cmpg-double',
  'cmp-long',
  'if-eq',
  'if-ne',
  'if-lt',
  'if-ge',
  'if-gt',
  'if-le',
  'if-eqz',
  'if-nez',
  'if-ltz',
  'if-gez',
  'if-gtz',
  'if-lez',
  'aget',
  'aget-wide',
  'aget-object',
  'aget-boolean',
  'aget-byte',
  'aget-char',
  'aget-short',
  'aput',
  'aput-wide',
  'aput-object',
  'aput-boolean',
  'aput-byte',
  'aput-char',
  'aput-short',
  'iget',
  'iget-wide',
  'iget-object',
  'iget-boolean',
  'iget-byte',
  'iget-char',
  'iget-short',
  'iget-volatile',
  'iget-wide-volatile',
  'iget-object-volatile',
  'iput',
  'iput-wide',
  'iput-object',
  'iput-boolean',
  'iput-byte',
  'iput-char',
  'iput-short',
  'iput-volatile',
  'iput-wide-volatile',
  'iput-object-volatile',
  'sget',
  'sget-wide',
  'sget-object',
  'sget-boolean',
  'sget-byte',
  'sget-char',
  'sget-short',
  'sget-volatile',
  'sget-wide-volatile',
  'sget-object-volatile',
  'sput',
  'sput-wide',
  'sput-object',
  'sput-boolean',
  'sput-byte',
  'sput-char',
  'sput-short',
  'sput-volatile',
  'sput-wide-volatile',
  'sput-object-volatile',
  'invoke-constructor',
  'invoke-custom',
  'invoke-direct',
  'invoke-direct-empty',
  'invoke-instance',
  'invoke-interface',
  'invoke-polymorphic',
  'invoke-static',
  'invoke-super',
  'invoke-virtual',
  'invoke-custom/range',
  'invoke-direct/range',
  'invoke-interface/range',
  'invoke-object-init/range',
  'invoke-polymorphic/range',
  'invoke-static/range',
  'invoke-super/range',
  'invoke-virtual/range',
  'neg-int',
  'not-int',
  'neg-long',
  'not-long',
  'neg-float',
  'neg-double',
  'int-to-long',
  'int-to-float',
  'int-to-double',
  'long-to-int',
  'long-to-float',
  'long-to-double',
  'float-to-int',
  'float-to-long',
  'float-to-double',
  'double-to-int',
  'double-to-long',
  'double-to-float',
  'int-to-byte',
  'int-to-char',
  'int-to-short',
  'add-int',
  'sub-int',
  'mul-int',
  'div-int',
  'rem-int',
  'and-int',
  'or-int',
  'xor-int',
  'shl-int',
  'shr-int',
  'ushr-int',
  'add-long',
  'sub-long',
  'mul-long',
  'div-long',
  'rem-long',
  'and-long',
  'or-long',
  'xor-long',
  'shl-long',
  'shr-long',
  'ushr-long',
  'add-float',
  'sub-float',
  'mul-float',
  'div-float',
  'rem-float',
  'add-double',
  'sub-double',
  'mul-double',
  'div-double',
  'rem-double',
  'add-int/2addr',
  'sub-int/2addr',
  'mul-int/2addr',
  'div-int/2addr',
  'rem-int/2addr',
  'and-int/2addr',
  'or-int/2addr',
  'xor-int/2addr',
  'shl-int/2addr',
  'shr-int/2addr',
  'ushr-int/2addr',
  'add-long/2addr',
  'sub-long/2addr',
  'mul-long/2addr',
  'div-long/2addr',
  'rem-long/2addr',
  'and-long/2addr',
  'or-long/2addr',
  'xor-long/2addr',
  'shl-long/2addr',
  'shr-long/2addr',
  'ushr-long/2addr',
  'add-float/2addr',
  'sub-float/2addr',
  'mul-float/2addr',
  'div-float/2addr',
  'rem-float/2addr',
  'add-double/2addr',
  'sub-double/2addr',
  'mul-double/2addr',
  'div-double/2addr',
  'rem-double/2addr',
  'add-int/lit16',
  'sub-int/lit16',
  'mul-int/lit16',
  'div-int/lit16',
  'rem-int/lit16',
  'and-int/lit16',
  'or-int/lit16',
  'xor-int/lit16',
  'add-int/lit8',
  'sub-int/lit8',
  'mul-int/lit8',
  'div-int/lit8',
  'rem-int/lit8',
  'and-int/lit8',
  'or-int/lit8',
  'xor-int/lit8',
  'shl-int/lit8',
  'shr-int/lit8',
  'ushr-int/lit8',
  'static-get',
  'static-put',
  'instance-get',
  'instance-put',
  'execute-inline',
  'execute-inline/range',
  'iget-quick',
  'iget-wide-quick',
  'iget-object-quick',
  'iput-quick',
  'iput-wide-quick',
  'iput-object-quick',
  'iput-boolean-quick',
  'iput-byte-quick',
  'iput-char-quick',
  'iput-short-quick',
  'invoke-virtual-quick',
  'invoke-virtual-quick/range',
  'invoke-super-quick',
  'invoke-super-quick/range',
  'rsub-int',
  'rsub-int/lit8',
];

/**
 * Returns an optional tree-sitter rule that matches rule at least once, with a repeat of `,` + `rule`
 * @param {Rule} rule - tree-sitter rule
 * @param {boolean?} trailing_separator - The trailing separator to use.
 *
 * @return {ChoiceRule}
 */
function commaSep(rule, trailing_separator = false) {
  const sep1 = trailing_separator ?
    seq(rule, repeat(seq(',', rule)), optional(',')) :
    seq(rule, repeat(seq(',', rule)));

  return optional(sep1);
}

module.exports = grammar({
  name: 'smali',

  extras: ($) => [$.comment, /\s/],
  extras: $ => [$.comment, /\s/],

  word: $ => $.identifier,


  rules: {
    class_definition: $ =>
      seq(
        $.class_directive,
        $.super_directive,
        optional($.source_directive),
        repeat($.implements_directive),
        repeat(choice(
          $.annotation_directive,
          $.method_definition,
          $.field_definition,
        )),
      ),

    // class related
    class_directive: $ =>
      seq(
        '.class',
        optional(field('modifiers', $.access_modifiers)),
        $.class_identifier,
      ),
    super_directive: $ => seq('.super', $.class_identifier),
    source_directive: $ => seq('.source', $.string),
    implements_directive: $ => seq('.implements', $.class_identifier),

    field_definition: ($) =>
      seq(
        $.field_declaration,
        optional(seq(repeat($.annotation_directive), $.end_field)),
      ),
    field_declaration: ($) =>
      seq(
        '.field',
        optional(field('modifiers', $.access_modifiers)),
        field('identifier', $.field_identifier),
        optional(seq('=', $._literal)),
      ),
    end_field: () => '.end field',

    // method related
    method_definition: ($) =>
      seq(
        $.method_declaration,
        alias(repeat($._code_line), $.code_block),
        $.end_method,
      ),
    method_declaration: ($) =>
      seq(
        '.method',
        optional(field('modifiers', $.access_modifiers)),
        field('identifier', $.method_identifier),
      ),
    end_method: () => '.end method',

    // annotation related
    annotation_directive: ($) =>
      seq($.start_annotation, repeat($.annotation_property), $.end_annotation),
    start_annotation: ($) =>
      seq(
        '.annotation',
        field('visibility', $.annotation_visibility),
        field('identifier', $.class_identifier),
      ),
    annotation_visibility: () => choice('system', 'build', 'runtime'),
    annotation_property: ($) =>
      seq(
        field('key', $.annotation_key),
        '=',
        field('value', $.annotation_value),
      ),
    annotation_key: () => /\w+/,
    annotation_value: ($) =>
      choice(
        $._literal,
        $._identifier,
        $.list,
        $.enum_reference,
        $.subannotation_definition,
      ),
    end_annotation: () => '.end annotation',

    subannotation_definition: ($) =>
      seq(
        $.subannotation_declaration,
        repeat($.annotation_property),
        $.end_subannotation,
      ),
    subannotation_declaration: ($) =>
      seq('.subannotation', field('identifier', $.class_identifier)),
    end_subannotation: () => '.end subannotation',

    param_directive: ($) =>
      prec.right(
        seq(
          $.start_param,
          optional(seq(repeat($.annotation_directive), $.end_param)),
        ),
      ),
    start_param: ($) => seq('.param', field('parameter', $.parameter)),
    end_param: () => '.end param',

    // code lines
    _code_line: ($) =>
      choice($.label, $._directive, $.annotation_directive, $.statement),
    label: (_) => /:[\w\d]+/,

    // statement
    statement: ($) =>
      seq(
        field('opcode', $.opcode),
        field('argument', commaSep($._statement_argument)),
        '\n',
      ),
    opcode: (_) => choice(...opcodes),
    _statement_argument: ($) =>
      choice(
        $.list,
        $.label,
        $.range,
        $.variable,
        $.parameter,
        $.array_type,
        $._identifier,
        $.primitive_type,
        $._literal,
      ),

    // code declarations
    _directive: ($) =>
      choice(
        $.line_directive,
        $.locals_directive,
        $.registers_directive,
        $.param_directive,
        $.catch_directive,
        $.catchall_directive,
        $.packed_switch_directive,
        $.sparse_switch_directive,
        $.array_data_directive,
      ),
    line_directive: ($) => seq('.line', $.number_literal),
    locals_directive: ($) => seq('.locals', $.number_literal),
    registers_directive: ($) => seq('.registers', $.number_literal),
    catch_directive: ($) =>
      seq(
        '.catch',
        $.class_identifier,
        '{',
        $.label,
        '..',
        $.label,
        '}',
        $.label,
      ),
    catchall_directive: ($) =>
      seq('.catchall', '{', $.label, '..', $.label, '}', $.label),
    packed_switch_directive: ($) =>
      seq(
        '.packed-switch',
        $.number_literal,
        repeat($.label),
        '.end packed-switch',
      ),
    sparse_switch_directive: ($) =>
      seq(
        '.sparse-switch',
        repeat(seq($.number_literal, '->', $.label)),
        '.end sparse-switch',
      ),
    array_data_directive: ($) =>
      seq(
        '.array-data',
        field('element_width', $.number_literal),
        field('value', repeat($.number_literal)),
        '.end array-data',
      ),

    // identifiers
    _identifier: ($) =>
      choice(
        $.class_identifier,
        $.field_identifier,
        $.full_field_identifier,
        $.method_identifier,
        $.full_method_identifier,
      ),
    class_identifier: () => /L[^;]+;/,
    field_identifier: ($) => seq(/[\w\d\$]+:/, $._type),
    method_identifier: ($) =>
      seq(
        choice('<clinit>(', '<init>(', /[\w\d\$]+\(/),
        field('parameters', alias(repeat($._type), $.parameters)),
        ')',
        field('return_type', $._type),
      ),
    full_field_identifier: ($) =>
      seq(choice($.class_identifier, $.array_type), '->', $.field_identifier),
    full_method_identifier: ($) =>
      seq(choice($.class_identifier, $.array_type), '->', $.method_identifier),

    // types
    _type: ($) => choice($.primitive_type, $.class_identifier, $.array_type),
    array_type: ($) => seq('[', field('element_type', $._type)),
    primitive_type: () => choice(...primitives),

    access_modifiers: () => repeat1(choice(...modifiers)),
    comment: () => token(seq('#', /.*/)),
    enum_reference: ($) =>
      seq(
        '.enum',
        field('identifier', choice($.field_identifier, $.full_field_identifier)),
      ),

    // special symbols
    variable: () => /v\d+/,
    parameter: () => /p\d+/,

    // lists
    list: ($) =>
      seq(
        '{',
        commaSep(
          choice(
            $._literal,
            $._identifier,
            $.variable,
            $.parameter,
            $.enum_reference,
            $.subannotation_definition,
          ),
        ),
        '}',
      ),
    range: ($) =>
      seq(
        '{',
        field('start', choice($.variable, $.parameter, $.number_literal)),
        '..',
        field('end', choice($.variable, $.parameter, $.number_literal)),
        '}',
      ),

    // literals
    _literal: ($) =>
      choice(
        $.number_literal,
        $.string_literal,
        $.boolean_literal,
        $.character_literal,
        $.null_literal,
      ),
    number_literal: () =>
      choice(/-?0[xX][\da-fA-F]+(L|s|t)?/, /-?\d+(\.\d+)?(f)?/),
    string_literal: () => /"[^"]*"/,
    boolean_literal: () => choice('true', 'false'),
    character_literal: () => /'(.|\\[bt0nr"'\\]|\\u[0-9a-fA-f]{4})'/,
    null_literal: () => 'null',
  },
});
