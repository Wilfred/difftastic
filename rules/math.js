module.exports = {
  displayed_equation: $ =>
    prec.left(
      seq(
        choice('$$', alias($._escaped_lbrack_command_name, $.command_name)),
        repeat($._full_content),
        choice('$$', alias($._escaped_rbrack_command_name, $.command_name)),
      ),
    ),

  inline_formula: $ =>
    prec.left(
      seq(
        choice('$', alias($._escaped_lparen_command_name, $.command_name)),
        repeat($._full_content),
        choice('$', alias($._escaped_rparen_command_name, $.command_name)),
      ),
    ),

  math_set: $ =>
    seq(
      field('left', alias($._escaped_lcurly_command_name, $.command_name)),
      repeat($._full_content),
      field('right', alias($._escaped_rcurly_command_name, $.command_name)),
    ),
};
