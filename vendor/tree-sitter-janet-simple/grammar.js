// numbers
const SIGN =
      choice('-', '+');
const DIGIT =
      /[0-9]/;
const HEX_DIGIT =
      /[0-9A-Fa-f]/;
const RADIX =
      choice('2', '3', '4', '5', '6', '7', '8', '9', '10',
             '11', '12', '13', '14', '15', '16', '17', '18', '19', '20',
             '21', '22', '23', '24', '25', '26', '27', '28', '29', '30',
             '31', '32', '33', '34', '35', '36');
const ALPHA_NUM =
      /[a-zA-Z0-9]/;

// symbols and keywords
// janet/tools/symcharsgen.c
const SYM_CHAR_NO_DIGIT_NO_COLON =
      /[a-zA-Z!$%&*+\-./<?=>@^_]/;
const SYM_CHAR =
      /[0-9:a-zA-Z!$%&*+\-./<?=>@^_]/;

// strings
const STRING_DOUBLE_QUOTE_CONTENT =
      repeat(choice(/[^\\"]/,
                    /\\(.|\n)/)); // thanks to tree-sitter-haskell

module.exports = grammar({
  name: 'janet_simple',

  // mdn says \s is:
  //
  //   [ \f\n\r\t\v\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]
  //
  // but that doesn't seem to match what tree-sitter thinks as it appears that
  // for example, leaving out \x0b, \x0c, or \x00 from the following yields
  // different behavior (other stuff may also differ)
  extras: $ => [
    /\s|\x0b|\x0c|\x00/,
    $.comment
  ],

  externals: $ => [
    $.long_buf_lit,
    $.long_str_lit
  ],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source: $ =>
      repeat($._lit),

    comment: $ =>
      /#.*/,

    _lit: $ =>
      choice($.bool_lit,
             $.buf_lit,
             $.kwd_lit,
             $.long_buf_lit,
             $.long_str_lit,
             $.nil_lit,
             $.num_lit,
             $.str_lit,
             $.sym_lit,
             //
             $.par_arr_lit,
             $.sqr_arr_lit,
             $.struct_lit,
             $.tbl_lit,
             $.par_tup_lit,
             $.sqr_tup_lit,
             //
             $.qq_lit,
             $.quote_lit,
             $.short_fn_lit,
             $.splice_lit,
             $.unquote_lit),

    // simplest things

    bool_lit: $ =>
      // XXX: without the token here, false and true are exposed as
      //      anonymous nodes it seems...
      //      yet, the same does not happen for nil...strange
      token(choice('false',
                   'true')),

    kwd_lit: $ =>
      prec(2, token(seq(':',
                        repeat(SYM_CHAR)))),

    nil_lit: $ =>
      'nil',

    num_lit: $ =>
      prec(5, choice($._dec,
                     $._hex,
                     $._radix)),

    _dec: $ =>
      token(seq(optional(SIGN),
                choice(seq(repeat1(DIGIT),
                           repeat('_'),
                           optional('.'),
                           repeat('_'),
                           repeat(DIGIT),
                           repeat('_')),
                       seq(repeat(DIGIT),
                           repeat('_'),
                           optional('.'),
                           repeat('_'),
                           repeat1(DIGIT),
                           repeat('_'))),
                optional(seq(choice('e', 'E'),
                             optional(SIGN),
                             repeat1(DIGIT))))),

    _hex: $ =>
      token(seq(optional(SIGN),
                '0',
                'x',
                choice(seq(repeat1(HEX_DIGIT),
                           repeat('_'),
                           optional('.'),
                           repeat('_'),
                           repeat(HEX_DIGIT),
                           repeat('_')),
                       seq(repeat(HEX_DIGIT),
                           repeat('_'),
                           optional('.'),
                           repeat('_'),
                           repeat1(HEX_DIGIT),
                           repeat('_'))))),

    _radix: $ =>
      token(seq(optional(SIGN),
                seq(RADIX,
                    choice('r', 'R'),
                    ALPHA_NUM,
                    repeat(choice(repeat(ALPHA_NUM),
                                  repeat('_'))),
                    optional(seq('&',
                                 optional(SIGN),
                                 repeat1(DIGIT)))))),

    str_lit: $ =>
      token(seq('"',
                STRING_DOUBLE_QUOTE_CONTENT,
                '"')),

    buf_lit: $ =>
      token(seq('@"',
                STRING_DOUBLE_QUOTE_CONTENT,
                '"')),

    sym_lit: $ =>
      token(seq(SYM_CHAR_NO_DIGIT_NO_COLON,
                repeat(SYM_CHAR))),

    // collection-ish things

    par_arr_lit: $ =>
      seq('@(',
          repeat($._lit),
          ')'),

    sqr_arr_lit: $ =>
      seq('@[',
          repeat($._lit),
          ']'),

    struct_lit: $ =>
      seq('{',
          repeat($._lit),
          '}'),

    tbl_lit: $ =>
      seq('@{',
          repeat($._lit),
          '}'),

    par_tup_lit: $ =>
      seq('(',
          repeat($._lit),
          ')'),

    sqr_tup_lit: $ =>
      seq('[',
          repeat($._lit),
          ']'),

    // macro-related

    qq_lit: $ =>
      seq('~',
          $._lit),

    quote_lit: $ =>
      seq("'",
          $._lit),

    // following all work at the repl..
    //   |8, ||8, |||8, etc.
    //   |~(:x)
    //   |{:a 1}
    //   |[1 2]
    //   |"a"
    //   |:w
    //   |a-sym
    //   |@[8 9]
    //   |(= $ 1)
    // XXX: |() doesn't work...but don't bother disallowing
    short_fn_lit: $ =>
      seq('|',
          $._lit),

    // XXX: ?
    splice_lit: $ =>
      seq(';',
          $._lit),

    unquote_lit: $ =>
      seq(',',
          $._lit),

  }
});
