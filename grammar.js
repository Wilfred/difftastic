// numbers
const SIGN =
      choice('-', '+');
const DIGIT =
      /[0-9]/;
const HEX_DIGIT =
      /[0-9A-F]/;
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
      /[a-zA-Z!$%&*+\-./:<?=>@^_]/;
const SYM_CHAR =
      /[0-9:a-zA-Z!$%&*+\-./:<?=>@^_]/;

// strings
const STRING_DOUBLE_QUOTE_CONTENT =
      repeat(choice(/[^\\"]/,
                    /\\(.|\n)/)); // thanks to tree-sitter-haskell

module.exports = grammar({
  name: 'janet_simple',

  extras: $ =>
    [/\s/, $.comment],

  externals: $ => [
    $.long_buffer,
    $.long_string
  ],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source_file: $ =>
      repeat($._form),

    comment: $ =>
      /#.*/,

    _form: $ =>
      choice($.boolean,
             $.buffer,
             $.keyword,
             $.long_buffer,
             $.long_string,
             $.nil,
             $.number,
             $.string,
             $.symbol,
             //
             $.array,
             $.bracket_array,
             $.struct,
             $.table,
             $.tuple,
             $.bracket_tuple,
             //
             $.quasi_quote_form,
             $.quote_form,
             $.short_fn_form,
             $.splice_form,
             $.unquote_form),

    // simplest things

    boolean: $ =>
      choice('false',
             'true'),

    keyword: $ =>
      prec(2, token(seq(':',
                        repeat(SYM_CHAR)))),

    nil: $ =>
      'nil',

    number: $ =>
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

    string: $ =>
      token(seq('"',
                STRING_DOUBLE_QUOTE_CONTENT,
                '"')),

    buffer: $ =>
      token(seq('@"',
                STRING_DOUBLE_QUOTE_CONTENT,
                '"')),

    symbol: $ =>
      token(seq(SYM_CHAR_NO_DIGIT_NO_COLON,
                repeat(SYM_CHAR))),

    // collection-ish things

    array: $ =>
      seq('@(',
          repeat($._form),
          ')'),

    bracket_array: $ =>
      seq('@[',
          repeat($._form),
          ']'),

    struct: $ =>
      seq('{',
          repeat($._form),
          '}'),

    table: $ =>
      seq('@{',
          repeat($._form),
          '}'),

    tuple: $ =>
      seq('(',
          repeat($._form),
          ')'),

    bracket_tuple: $ =>
      seq('[',
          repeat($._form),
          ']'),

    // macro-related

    quasi_quote_form: $ =>
      seq('~',
          $._form),

    quote_form: $ =>
      seq("'",
          $._form),

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
    short_fn_form: $ =>
      seq('|',
          $._form),

    // XXX: ?
    splice_form: $ =>
      seq(';',
          $._form),

    unquote_form: $ =>
      seq(',',
          $._form),

  }
});
