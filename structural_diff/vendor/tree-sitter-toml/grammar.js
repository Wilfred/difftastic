const { Charset } = require("regexp-util");

const getInverseRegex = charset =>
  new RegExp(`[^${charset.toString().slice(1, -1)}]`);

const control_chars = new Charset([0x0, 0x1f], 0x7f);
const newline = /\r?\n/;

const decimal_integer = /[+-]?(0|[1-9](_?[0-9])*)/;
const decimal_integer_in_float_exponent_part = /[+-]?[0-9](_?[0-9])*/; // allow leading zeros
const hexadecimal_integer = /0x[0-9a-fA-F](_?[0-9a-fA-F])*/;
const octal_integer = /0o[0-7](_?[0-7])*/;
const binary_integer = /0b[01](_?[01])*/;
const float_fractional_part = /[.][0-9](_?[0-9])*/;
const float_exponent_part = seq(/[eE]/, decimal_integer_in_float_exponent_part);

const rfc3339_date = /([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01])/;
const rfc3339_delimiter = /[ tT]/;
const rfc3339_time = /([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)?/;
const rfc3339_offset = /([zZ])|([+-]([01][0-9]|2[0-3]):[0-5][0-9])/;

module.exports = grammar({
  name: "toml",

  externals: $ => [
    $._line_ending_or_eof,
    $._multiline_basic_string_content,
    $._multiline_basic_string_end,
    $._multiline_literal_string_content,
    $._multiline_literal_string_end,
  ],

  extras: $ => [$.comment, /[ \t]/],

  rules: {
    document: $ =>
      seq(
        repeat(choice($.pair, newline)),
        repeat(choice($.table, $.table_array_element)),
      ),

    comment: $ =>
      token(prec(-1, seq(
        "#",
        repeat(getInverseRegex(control_chars.subtract("\t"))),
      ))),

    table: $ =>
      seq(
        "[",
        choice($.dotted_key, $._key),
        "]",
        $._line_ending_or_eof,
        repeat(choice($.pair, newline)),
      ),

    table_array_element: $ =>
      seq(
        "[[",
        choice($.dotted_key, $._key),
        "]]",
        $._line_ending_or_eof,
        repeat(choice($.pair, newline)),
      ),

    pair: $ => seq($._inline_pair, $._line_ending_or_eof),
    _inline_pair: $ => seq(choice($.dotted_key, $._key), "=", $._inline_value),

    _key: $ => choice($.bare_key, $.quoted_key),
    dotted_key: $ => seq(choice($.dotted_key, $._key), ".", $._key),
    bare_key: $ => /[A-Za-z0-9_-]+/,
    quoted_key: $ => choice($._basic_string, $._literal_string),

    _inline_value: $ =>
      choice(
        $.string,
        $.integer,
        $.float,
        $.boolean,
        $.offset_date_time,
        $.local_date_time,
        $.local_date,
        $.local_time,
        $.array,
        $.inline_table,
      ),

    string: $ =>
      choice(
        $._basic_string,
        $._multiline_basic_string,
        $._literal_string,
        $._multiline_literal_string,
      ),
    _basic_string: $ =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(
              repeat1(
                getInverseRegex(control_chars.subtract("\t").union('"', "\\")),
              ),
            ),
            $.escape_sequence,
          ),
        ),
        token.immediate('"'),
      ),
    _multiline_basic_string: $ =>
      seq(
        '"""',
        repeat(
          choice(
            token.immediate(
              repeat1(
                getInverseRegex(control_chars.subtract("\t").union('"', "\\")),
              ),
            ),
            $._multiline_basic_string_content,
            token.immediate(newline),
            $.escape_sequence,
            alias($._escape_line_ending, $.escape_sequence),
          ),
        ),
        $._multiline_basic_string_end,
      ),
    escape_sequence: $ =>
      token.immediate(/\\([btnfr"\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/),
    _escape_line_ending: $ => token.immediate(seq(/\\/, newline)),
    _literal_string: $ =>
      seq(
        "'",
        optional(
          token.immediate(
            repeat1(getInverseRegex(control_chars.union("'").subtract("\t"))),
          ),
        ),
        token.immediate("'"),
      ),
    _multiline_literal_string: $ =>
      seq(
        "'''",
        repeat(
          choice(
            token.immediate(
              repeat1(getInverseRegex(control_chars.union("'").subtract("\t"))),
            ),
            $._multiline_literal_string_content,
            token.immediate(newline),
          ),
        ),
        $._multiline_literal_string_end,
      ),

    integer: $ =>
      choice(
        decimal_integer,
        hexadecimal_integer,
        octal_integer,
        binary_integer,
      ),

    float: $ =>
      choice(
        token(
          seq(
            decimal_integer,
            choice(
              float_fractional_part,
              seq(optional(float_fractional_part), float_exponent_part),
            ),
          ),
        ),
        /[+-]?(inf|nan)/,
      ),

    boolean: $ => /true|false/,

    offset_date_time: $ =>
      token(seq(rfc3339_date, rfc3339_delimiter, rfc3339_time, rfc3339_offset)),
    local_date_time: $ =>
      token(seq(rfc3339_date, rfc3339_delimiter, rfc3339_time)),
    local_date: $ => rfc3339_date,
    local_time: $ => rfc3339_time,

    array: $ =>
      seq(
        "[",
        repeat(newline),
        optional(
          seq(
            $._inline_value,
            repeat(newline),
            repeat(seq(",", repeat(newline), $._inline_value, repeat(newline))),
            optional(seq(",", repeat(newline))),
          ),
        ),
        "]",
      ),

    inline_table: $ =>
      seq(
        "{",
        optional(
          seq(
            alias($._inline_pair, $.pair),
            repeat(seq(",", alias($._inline_pair, $.pair))),
          ),
        ),
        "}",
      ),
  },
});
