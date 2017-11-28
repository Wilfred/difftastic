module.exports = grammar({
  name: 'java',

  rules: {
    program: $ => repeat($._statement),



    integer: $ => choice(
      $.DecimalIntegerLiteral,
      $.HexIntegerLiteral,
      $.OctalIntegerLiteral,
      $.BinaryIntegerLiteral
    ),

    identifier: $ => /[\a_]\w*/
  }
});
