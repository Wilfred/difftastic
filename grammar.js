const startTag = ($, tag) => seq(
  '<',
  alias(tag, $.tag_name),
  repeat($.attribute),
  '>'
)

module.exports = grammar({
  name: 'html',

  externals: $ => [
    $.tag_name,

  ],

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.text,
      $.element,
      $.void_element
    ),

    element: $ => seq(
      $.start_tag,
      repeat($._node),
      $.end_tag
    ),

    void_element: $ => choice(
      seq($.void_start_tag, optional($.end_tag)),
      $.self_closing_tag
    ),

    start_tag: $ => startTag($, $.tag_name),

    void_start_tag: $ => startTag($, $.void_tag_name),

    self_closing_tag: $ => seq(
      '<',
      choice($.tag_name, $.void_tag_name),
      repeat($.attribute),
      '/',
      '>'
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

    end_tag: $ => seq(
      '</',
      choice($.tag_name, $.void_tag_name),
      '>'
    ),

    tag_name: $ => /[a-zA-Z\-]+/,

    void_tag_name: $ => token(prec(1, choice(
      'area',
      'base',
      'basefont',
      'bgsound',
      'br',
      'col',
      'command',
      'embed',
      'frame',
      'hr',
      'image',
      'img',
      'input',
      'isindex',
      'keygen',
      'link',
      'menuitem',
      'meta',
      'nextid',
      'param',
      'source',
      'track',
      'wbr'
    ))),

    text: $ => /[^<>]+/
  }
});
