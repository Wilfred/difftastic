const { Charset } = require("regexp-util");

const getInverseRegex = charset =>
  new RegExp(`[^${charset.toString().slice(1, -1)}]`);
const concatRegex = (...regexes) =>
  new RegExp(regexes.reduce((a, b) => a.concat(`(${b.source})`), []).join(""));

const control_chars = new Charset([0x0, 0x1f], 0x7f);
const newline = /(\r?\n)+/;

const decimal_integer = /[+-]?(0|[1-9](_?[0-9])*)/;
const hexadecimal_integer = /0x[0-9a-fA-F](_?[0-9a-fA-F])*/;
const octal_integer = /0o[0-7](_?[0-7])*/;
const binary_integer = /0b[01](_?[01])*/;
const float_fractional_part = /[.][0-9](_?[0-9])*/;
const float_exponent_part = concatRegex(/[eE]/, decimal_integer);

const rfc3339_date = /([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01])/;
const rfc3339_delimiter = /[ tT]/;
const rfc3339_time = /([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)?/;
const rfc3339_offset = /([zZ])|([+-]([01][0-9]|2[0-3]):[0-5][0-9])/;

module.exports = grammar({
  name: "toml",

  externals: $ => [$._line_ending_or_eof],

  extras: $ => [$.comment, /[ \t]/],

  rules: {
    file: $ => repeat(choice($.pair, $.table, $.table_array, $._newline)),

    comment: $ => /#.*/,
    _newline: $ => newline,

    table: $ =>
      seq("[", choice($.dotted_key, $.key), "]", $._line_ending_or_eof),

    table_array: $ =>
      seq("[[", choice($.dotted_key, $.key), "]]", $._line_ending_or_eof),

    pair: $ => seq($._inline_pair, $._line_ending_or_eof),
    _inline_pair: $ => seq(choice($.dotted_key, $.key), "=", $._inline_value),

    key: $ => choice($._bare_key, $._quoted_key),
    dotted_key: $ => seq(choice($.dotted_key, $.key), ".", $.key),
    _bare_key: $ => /[A-Za-z0-9_-]+/,
    _quoted_key: $ => choice($._basic_string, $._literal_string),

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
        $.inline_table
      ),

    string: $ =>
      choice(
        $._basic_string,
        $._multiline_basic_string,
        $._literal_string,
        $._multiline_literal_string
      ),
    _basic_string: $ =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(
              repeat1(getInverseRegex(control_chars.union('"', "\\")))
            ),
            $.escape_sequence
          )
        ),
        token.immediate('"')
      ),
    _multiline_basic_string: $ =>
      seq(
        '"""',
        repeat(
          choice(
            token.immediate(
              repeat1(getInverseRegex(control_chars.union('"', "\\")))
            ),
            token.immediate(/"{1,2}/),
            token.immediate(newline),
            $.escape_sequence,
            alias($._escape_line_ending, $.escape_sequence)
          )
        ),
        token.immediate('"""')
      ),
    escape_sequence: $ =>
      token.immediate(
        seq("\\", choice(/[btnfr"\\]/, /u[0-9a-fA-F]{4}/, /U[0-9a-fA-F]{8}/))
      ),
    _escape_line_ending: $ => token.immediate(seq("\\", /\r?\n/)),
    _literal_string: $ =>
      seq(
        "'",
        optional(
          token.immediate(
            repeat1(getInverseRegex(control_chars.union("'").subtract("\t")))
          )
        ),
        token.immediate("'")
      ),
    _multiline_literal_string: $ =>
      seq(
        "'''",
        repeat(
          choice(
            token.immediate(
              repeat1(getInverseRegex(control_chars.union("'").subtract("\t")))
            ),
            token.immediate(/'{1,2}/),
            token.immediate(newline)
          )
        ),
        token.immediate("'''")
      ),

    integer: $ =>
      choice(
        decimal_integer,
        hexadecimal_integer,
        octal_integer,
        binary_integer
      ),

    float: $ =>
      choice(
        seq(
          decimal_integer,
          choice(
            seq(
              token.immediate(float_fractional_part),
              optional(token.immediate(float_exponent_part))
            ),
            token.immediate(float_exponent_part)
          )
        ),
        /[+-]?(inf|nan)/
      ),

    boolean: $ => /true|false/,

    offset_date_time: $ =>
      concatRegex(
        rfc3339_date,
        rfc3339_delimiter,
        rfc3339_time,
        rfc3339_offset
      ),
    local_date_time: $ =>
      concatRegex(rfc3339_date, rfc3339_delimiter, rfc3339_time),
    local_date: $ => rfc3339_date,
    local_time: $ => rfc3339_time,

    array: $ =>
      seq(
        "[",
        repeat($._newline),
        optional(
          seq(
            $._inline_value,
            repeat($._newline),
            repeat(
              seq(",", repeat($._newline), $._inline_value, repeat($._newline))
            ),
            optional(seq(",", repeat($._newline)))
          )
        ),
        "]"
      ),

    inline_table: $ =>
      seq(
        "{",
        optional(
          seq(
            alias($._inline_pair, $.pair),
            repeat(seq(",", alias($._inline_pair, $.pair)))
          )
        ),
        "}"
      ),
  },
});
