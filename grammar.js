module.exports = grammar({
  name: 'html',

  externals: $ => [
    $._open_start_tag,
    $._close_start_tag,
    $._self_close_start_tag,
    $.end_tag,
    $._implicit_end_tag,
    $._erroneous_end_tag,
  ],

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.text,
      $._erroneous_end_tag,
      $.element
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag)
      ),
      $.self_closing_tag
    ),

    start_tag: $ => seq(
      $._open_start_tag,
      repeat($.attribute),
      $._close_start_tag
    ),

    self_closing_tag: $ => seq(
      $._open_start_tag,
      repeat($.attribute),
      $._self_close_start_tag
    ),

    attribute: $ => seq(
      alias($._attribute_part, $.attribute_name),
      optional(seq(
        '=',
        choice(
          alias($._attribute_part, $.attribute_value),
          $.quoted_attribute_value
        )
      ))
    ),

    _attribute_part: $ => /[^<>"'/=\s]+/,

    quoted_attribute_value: $ => choice(
      seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
    ),

    text: $ => /[^<>]+/
  }
});
