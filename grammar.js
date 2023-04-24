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

const access_flags = [
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
  'declared-synchronized',
];

const restriction_flags = [
  'whitelist',
  'greylist',
  'blacklist',
  'greylist-max-o',
  'greylist-max-p',
  'greylist-max-q',
  'greylist-max-r',
  'core-platform-api',
  'test-api',
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

/**
* Creates a rule to match one or more of the rules separated by the separator
*
* @param {Rule|RegExp} rule
* @param {Rule|RegExp|string} separator - The separator to use.
*
* @return {SeqRule}
*
*/
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

module.exports = grammar({
  name: 'smali',

  conflicts: $ => [
    [$.field_definition], // smali/src/test/resources/LexerTest/RealSmaliFileTest.smali to understand why
  ],

  externals: $ => [
    $.L,
    $._class_ident,
  ],

  extras: $ => [
    $.comment,
    /\s/,
  ],

  supertypes: $ => [
    $.directive,
    $.literal,
    $.register,
    $.statement,
    $.type,
    $.value,
  ],

  word: $ => $.identifier,

  rules: {
    class_definition: $ => seq(
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
    class_directive: $ => seq(
      '.class',
      optional($.access_modifiers),
      $.class_identifier,
    ),
    super_directive: $ => seq('.super', $.class_identifier),
    source_directive: $ => seq('.source', $.string),
    implements_directive: $ => seq('.implements', $.class_identifier),

    field_definition: $ => seq(
      '.field',
      optional($.access_modifiers),
      $._field_body,
      optional(seq('=', $.value)),
      optional(seq(
        repeat($.annotation_directive),
        '.end field',
      )),
    ),

    // Method
    method_definition: $ => seq(
      '.method',
      optional($._method_access_modifiers),
      $.method_signature,
      repeat($.statement),
      '.end method',
    ),

    // annotation related
    annotation_directive: $ => seq(
      '.annotation',
      $.annotation_visibility,
      $.class_identifier,
      repeat($.annotation_property),
      '.end annotation',
    ),
    annotation_visibility: _ => choice('system', 'build', 'runtime'),
    annotation_property: $ => seq($.annotation_key, '=', $.annotation_value),
    annotation_key: _ => /\w+/,
    annotation_value: $ => choice(
      $.literal,
      $.body,
      $.list,
      $.enum_reference,
      $.subannotation_directive,
      $.class_identifier,
    ),

    subannotation_directive: $ => seq(
      '.subannotation',
      $.class_identifier,
      repeat($.annotation_property),
      '.end subannotation',
    ),

    param_directive: $ => prec.right(seq(
      '.param',
      $.parameter,
      optional(choice(
        seq(repeat($.annotation_directive), '.end param'),
        seq(optional(','), choice($.literal, alias($.identifier, $.param_identifier))),
      )),
    )),

    parameter_directive: $ => prec.right(seq(
      '.parameter',
      optional($.literal),
      optional(seq(
        repeat($.annotation_directive),
        '.end parameter',
      )),
    )),

    // code lines
    statement: $ => choice(
      $.label,
      $.jmp_label,
      $.directive,
      $.annotation_directive,
      $.expression,
    ),

    // expression
    expression: $ => seq(
      $.opcode,
      commaSep($.value),
      '\n',
    ),

    opcode: _ => choice(...opcodes),
    value: $ => choice(
      $.type,
      $.list,
      $.label,
      $.jmp_label,
      $.range,
      $.register,
      $.body,
      $.literal,
      $.enum_reference,
      $.subannotation_directive,
      $.method_handle,
      $.custom_invoke,
    ),

    // code declarations
    directive: $ => choice(
      $.line_directive,
      $.locals_directive,
      $.local_directive,
      $.registers_directive,
      $.param_directive,
      $.parameter_directive,
      $.catch_directive,
      $.catchall_directive,
      $.packed_switch_directive,
      $.sparse_switch_directive,
      $.array_data_directive,
      $.end_local_directive,
      $.restart_local_directive,
      $.prologue_directive,
      $.epilogue_directive,
      $.source_directive,
    ),
    line_directive: $ => seq('.line', $.number),
    locals_directive: $ => seq('.locals', $.number),
    local_directive: $ => seq(
      '.local',
      $.register,
      optional(seq(
        ',', choice($.literal, $.identifier),
        ':', $.type,
        optional(seq(',', $.string)),
      )),
    ),
    end_local_directive: $ => seq('.end local', $.register),
    restart_local_directive: $ => seq('.restart local', $.register),
    registers_directive: $ => seq('.registers', $.number),
    catch_directive: $ => seq(
      '.catch',
      $.class_identifier,
      choice(
        seq('{', $.label, '..', $.label, '}', $.label),
        seq('{', $.jmp_label, '..', $.jmp_label, '}', $.jmp_label),
      ),
    ),
    catchall_directive: $ => seq(
      '.catchall',
      choice(
        seq('{', $.label, '..', $.label, '}', $.label),
        seq('{', $.jmp_label, '..', $.jmp_label, '}', $.jmp_label),
      ),
    ),
    packed_switch_directive: $ => seq(
      '.packed-switch',
      $.number,
      repeat(choice($.label, $.jmp_label)),
      '.end packed-switch',
    ),
    sparse_switch_directive: $ => seq(
      '.sparse-switch',
      repeat(seq($.number, '->', $.label)),
      '.end sparse-switch',
    ),
    array_data_directive: $ => seq(
      '.array-data',
      field('element_width', $.number),
      field('value', repeat($.number)),
      '.end array-data',
    ),
    prologue_directive: _ => '.prologue',
    epilogue_directive: _ => '.epilogue',

    identifier: _ => /<?[a-zA-Z_$][a-zA-Z0-9_\-$]*>?/,
    // class_identifier: _ => token(/L[^;]+;/),
    class_identifier: $ => seq(
      alias($.L, 'L'),
      // repeat1(seq(alias($._class_ident, $.identifier), '/')),
      // alias($._class_ident, $.identifier),
      sep1(alias($._class_ident, $.identifier), '/'),
      ';',
    ),

    // exclude :[SVIJFBZC]
    label: _ => prec(-1, token(/:[^SVIJFBZC\s]([^:\sI][\w\d]*)?|:[^:\sI][\w\d]*/)),
    jmp_label: _ => prec(-1, token(/\w+:/)),

    // various "bodies"
    body: $ => choice(
      $._field_body,
      $._full_field_body,
      $.method_signature,
      alias($._method_signature_body, $.method_signature),
      $.full_method_signature,
    ),
    _field_body: $ => seq(
      alias(choice($.identifier, $.number), $.field_identifier),
      ':',
      alias($.type, $.field_type),
    ),
    method_signature: $ => seq(
      alias(
        choice(
          seq(optional('-'), $.identifier),
          $.number,
        ),
        $.method_identifier,
      ),
      $._method_signature_body,
    ),
    _method_signature_body: $ => seq(
      '(',
      alias(repeat($.type), $.parameters),
      ')',
      $.type,
    ),
    method_handle: $ => seq(
      $.opcode,
      '@',
      choice($._full_field_body, $.full_method_signature),
    ),
    _full_field_body: $ => seq(
      choice($.class_identifier, $.array_type),
      '->',
      $._field_body,
    ),
    full_method_signature: $ => seq(
      choice($.class_identifier, $.array_type),
      '->',
      $.method_signature,
    ),
    custom_invoke: $ => seq(
      $.identifier,
      '(', commaSep(choice($.body, $.method_handle, $.string)), ')',
      '@',
      $.class_identifier,
      '->',
      $.method_signature,
    ),

    // types
    type: $ => choice(
      $.primitive_type,
      $.class_identifier,
      $.array_type,
    ),
    array_type: $ => seq('[', $.type),
    // primitives > identifiers
    // I don't know why this works, but for primitives in a statement's value,
    // the first choice is needed, and for primitives in a signature/return type,
    // the second choice is needed.
    // TODO: maybe figure out why?
    primitive_type: _ => choice(
      token(choice(...primitives)),
      token(prec(1, choice(...primitives))),
    ),

    access_modifiers: $ => repeat1($.access_modifier),

    _method_access_modifiers: $ => repeat1(choice($.access_modifier, 'constructor')),

    access_modifier: _ => choice(...access_flags.concat(restriction_flags)),

    enum_reference: $ => seq(
      '.enum',
      choice($._field_body, $._full_field_body),
    ),

    // special builtins
    register: $ => choice($.variable, $.parameter),
    variable: _ => token.immediate(/v\d+/),
    parameter: _ => token.immediate(/p\d+/),

    // lists
    list: $ => seq(
      '{',
      commaSep($.value),
      '}',
    ),
    range: $ => seq(
      '{',
      choice(
        seq(field('start', $.register), '..', field('end', $.register)),
        seq(field('start', $.number), '..', field('end', $.number)),
        seq(field('start', $.jmp_label), '..', field('end', $.jmp_label)),
      ),
      '}',
    ),

    // literals
    literal: $ => choice(
      $.number,
      $.float,
      $.NaN,
      $.Infinity,
      $.string,
      $.boolean,
      $.character,
      $.null,
    ),

    number: $ => {
      const hex_literal = seq(
        optional(choice('-', '+')),
        /0[xX]/,
        /[\da-fA-F](_?[\da-fA-F])*/,
      );

      const decimal_digits = /\d(_?\d)*/;
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits);

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits))),
      );

      const decimal_literal = choice(
        seq(optional('-'), decimal_integer_literal),
        decimal_digits,
        signed_integer,
      );

      return token(seq(
        choice(hex_literal, decimal_literal),
        alias(optional(/[LlSsTt]/), $.number_type),
      ));
    },

    float: $ => token(seq(
      /-?(\d+(\.\d+)?|\.\d+)([Ee][+-]?\d+)?/,
      alias(optional('f'), $.float_type),
    )),

    // FIXME: adding an optional 'f' doesn't work, I don't know why,
    // so this approach was used instead
    NaN: _ => token(prec(1, choice('NaN', 'NaNf'))),

    Infinity: _ => token(prec(1, choice('Infinity', '-Infinity'))),

    // string: _ => /"[^"\\]*(?:\\.[^"\\]*)*"/,
    string: $ => seq(
      '"',
      repeat(choice(
        $.string_fragment,
        $._escape_sequence,
      )),
      '"',
    ),

    // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
    // We give names to the token_ constructs containing a regexp
    // so as to obtain a node in the CST.
    string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),

    _escape_sequence: $ => choice(
      prec(2, token.immediate(seq('\\', /[^abfnrtvxu'\"\\\?]/))),
      prec(1, $.escape_sequence),
    ),
    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/,
      ),
    )),

    boolean: _ => choice('true', 'false'),

    character: $ => seq(
      '\'',
      optional(choice(
        $._escape_sequence,
        /[^\\']/,
      )),
      '\'',
    ),

    null: _ => 'null',

    comment: _ => token(seq('#', /.*/)),
  },
});
