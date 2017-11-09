module.exports = grammar({
  name: 'php',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],
  rules: {
    //
    program: $ => seq(
      // TODO: optional text
      choice('<?php', '<?='),
      repeat($.statement),
      optional('?>'),
      // TODO: optional text
    ),

    statement: $ => choice(
      $.compound_statement,
      $.named_label_statement,
      // $.expression_statement,
      // $.selection_statement,
      // $.iteration_statement,
      // $.jump_statement,
      // $.try_statement,
      // $.declare_statement,
      // $.echo_statement,
      // $.unset_statement,
      // $.const_declaration,
      // $.function_definition,
      // $.class_declaration,
      // $.interface_declaration,
      // $.trait_declaration,
      // $.namespace_definition,
      // $.namespace_use_declaration,
      // $.global_declaration,
      // $.function_static_declaration,
    ),

    compound_statement: $ => seq(
      '{',
      repeat($.statement),
      '}'
    ),

    named_label_statement: $ => seq(
      $.name,
      ':'
    ),

    name: $ => {
      var nondigit = /[_a-zA-Z\u0080-\u00ff]/

      return choice(
        nondigit,
        seq($.name, nondigit),
        seq($.name, /\d/)
      )
    },

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
})