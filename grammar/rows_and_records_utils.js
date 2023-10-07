// lifted into a higher-order rule to avoid extra nesting like (field_name (field_name))
const with_field_name = (...rule) => $ =>
  { const field_name =
      alias(choice($.string, $.variable), $.field_name)
  ; return seq(field_name, ...rule)
  }

// lifted into a higher-order rule to avoid extra nesting like (row_variable (row_variable))
const maybe_with_row_variable = (...rule) => $ =>
  { const row_var = seq('|', choice($._type, $.type_variable))
  ; return seq(...rule, optional(row_var))
  }

module.exports =
  { with_field_name
  , maybe_with_row_variable
  }

