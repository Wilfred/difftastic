module.exports = grammar({
  name: 'html',

  extras: $ => [
    $.comment,
    /\s+/,
  ],

  externals: $ => [
    $._start_tag_name,
    $._start_raw_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    '/>',
    $._implicit_end_tag,
    $.raw_text,
    $.comment,
  ],

  rules: {
    fragment: $ => repeat($._node),

    doctype: $ => seq(
      '<!',
      alias(/[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/, 'doctype'),
      /[^>]+/,
      '>'
    ),

    _node: $ => choice(
      $.doctype,
      $.text,
      $.element,
      $.erroneous_end_tag,
      $.raw_element
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag)
      ),
      $.self_closing_tag
    ),

    raw_element: $ => seq(
      alias($._raw_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag
    ),

    start_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '>'
    ),

    _raw_start_tag: $ => seq(
      '<',
      alias($._start_raw_tag_name, $.tag_name),
      repeat($.attribute),
      '>'
    ),

    self_closing_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '/>'
    ),

    end_tag: $ => seq(
      '</',
      alias($._end_tag_name, $.tag_name),
      '>'
    ),

    erroneous_end_tag: $ => seq(
      '</',
      $.erroneous_end_tag_name,
      '>'
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        choice(
          $.attribute_value,
          $.quoted_attribute_value
        )
      ))
    ),

    attribute_name: $ => /[^<>"'/=\s]+/,

    attribute_value: $ => /[^<>"'=\s]+/,

    quoted_attribute_value: $ => choice(
      seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
    ),

    text: $ => /[^<>]+/
  }
});
