const { Charset } = require("regexp-util");

const getInverseRegex = charset =>
  new RegExp(`[^${charset.toString().slice(1, -1)}]`);

const control_chars = new Charset([0x0, 0x1f], 0x7f);
const newline_regex = /(\r?\n)+/;

module.exports = grammar({
  name: "toml",

  externals: $ => [$._eof],

  extras: $ => [$.comment, /[ \t]/],

  rules: {
    root: $ =>
      seq(
        repeat($._newline),
        choice(
          $._eof,
          seq(
            choice($.pair, $._loose_pair, $._pairs, $.table, $.table_array),
            repeat(choice($.table, $.table_array))
          )
        )
      ),

    comment: $ => /#.*/,
    _newline: $ => newline_regex,
    _newline_or_eof: $ => choice($._newline, $._eof),

    ...table_like("table", "[", "]"),
    ...table_like("table_array", "[[", "]]"),

    pair: $ => seq($._inline_pair, $._newline_or_eof),
    _inline_pair: $ => seq(choice($.dotted_key, $.key), "=", $._inline_value),
    _loose_pair: $ => seq(choice($._loose_pair, $.pair), $._newline),
    _pairs: $ =>
      seq(
        choice($.pair, $._loose_pair, $._pairs),
        choice($.pair, $._loose_pair)
      ),

    key: $ => choice($._bare_key, $._quoted_key),
    dotted_key: $ => seq(choice($.dotted_key, $.key), ".", $.key),
    _bare_key: $ => /[A-Za-z0-9_-]+/,
    _quoted_key: $ =>
      choice($._singleline_basic_string, $._singleline_literal_string),

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
        $._singleline_basic_string,
        $._multiline_basic_string,
        $._singleline_literal_string,
        $._multiline_literal_string
      ),
    _singleline_basic_string: $ =>
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
            token.immediate(newline_regex),
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
    _singleline_literal_string: $ =>
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
            token.immediate(newline_regex)
          )
        ),
        token.immediate("'''")
      ),

    integer: $ =>
      choice(
        $._decimal_integer,
        $._hexadecimal_integer,
        $._octal_integer,
        $._binary_integer
      ),
    _decimal_integer: $ => /[+-]?(0|[1-9](_?[0-9])*)/,
    _hexadecimal_integer: $ => /0x[0-9a-fA-F](_?[0-9a-fA-F])*/,
    _octal_integer: $ => /0o[0-7](_?[0-7])*/,
    _binary_integer: $ => /0b[01](_?[01])*/,

    float: $ =>
      choice(
        seq(
          $._decimal_integer,
          choice(
            seq($._float_fractional_part, optional($._float_exponent_part)),
            $._float_exponent_part
          )
        ),
        /[+-]?(inf|nan)/
      ),
    _float_fractional_part: $ => /[.][0-9](_?[0-9])*/,
    _float_exponent_part: $ => seq(/[eE]/, $._decimal_integer),

    boolean: $ => /true|false/,

    offset_date_time: $ =>
      seq(
        $._rfc3339_date,
        $._rfc3339_delimiter,
        $._rfc3339_time,
        $._rfc3339_offset
      ),
    local_date_time: $ =>
      seq($._rfc3339_date, $._rfc3339_delimiter, $._rfc3339_time),
    local_date: $ => $._rfc3339_date,
    local_time: $ => $._rfc3339_time,

    _rfc3339_date: $ => /([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01])/,
    _rfc3339_delimiter: $ => /[ tT]/,
    _rfc3339_time: $ =>
      /([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)?/,
    _rfc3339_offset: $ => /([zZ])|([+-]([01][0-9]|2[0-3]):[0-5][0-9])/,

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

function table_like(name, header_start, header_end) {
  const header_name = `_${name}_header`;
  const loose_header_name = `_loose_${name}_header`;
  return {
    [name]: $ =>
      seq(
        choice($[header_name], $[loose_header_name]),
        optional(choice($.pair, $._loose_pair, $._pairs))
      ),
    [header_name]: $ =>
      seq(
        header_start,
        choice($.dotted_key, $.key),
        header_end,
        $._newline_or_eof
      ),
    [loose_header_name]: $ =>
      seq(choice($[loose_header_name], $[header_name]), $._newline),
  };
}
