// lifted into a higher-order rule to avoid extra nesting like (field_name (field_name))
const with_field_name = (...rule) => $ =>
  seq(
    alias(choice($.string, $.variable), $.field_name),
    ...rule
  )

module.exports =
  { with_field_name
  }

