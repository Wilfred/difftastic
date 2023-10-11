const { parens, braces } = require('./util.js')
const
  { with_field_name
  , maybe_with_row_variable
  } = require('./rows_and_records_utils.js')

module.exports = {
  /** Terminology:
   *
   * The left-hand side of a label/value or label/type pair is called "field name". 
   * The right-hand side of a label/value or label/type pair is called "field value" or "field type", respectively.
   * A pair of any type itself is called a "field".
   *   - But a record pun is also a field even though the field value for them is implicit.
   *
   * The row-polymorphic variable `ρ` (as in, `{ a :: Int | ρ }`) is called "row variable".
   *
   * Type-level fields separated by commas and optionally followed by "| ρ" is called a "row".
   * A "row" enclosed in parentheses is aliased as "row type".
   * A "row" enclosed in braces is aliased as "record type literal".
   *
   * Value-level fields separated by commas and enclosed in braces is called a "record literal".
   * Value-level field name not followed by `: (field_value)` is called a "record pun".
   * The `_` in a record constructing function like `{ a: _ }` is called a "wildcard", just as wildcards for operators and infix functions.
   */

  // -----------------------------------------------------------------
  // Type-level

  _field_name_ty: $ =>
    choice(
      // higher precedence because it conflicts with `annotated_type_variable`
      alias(prec(1, $.type_variable), $.field_name),
      alias($.string, $.field_name)
    ),

  field_type: $ => alias($._type, $.field_type),

  row_field: $ =>
    seq(
      $._field_name_ty,
      $._colon2,
      $._type
    ),

  row_type: $ => parens(
    maybe_with_row_variable(sep($.comma, $.row_field))($)
  ),

  record_type_literal: $ => braces(
    maybe_with_row_variable(sep($.comma, $.row_field))($)
  ),

  // -----------------------------------------------------------------
  // Value-level

  field_wildcard: $ =>
    // higher precedence because of the conflict with patterns
    prec(1, $.wildcard),

  record_field: $ => {
    // higher precedence because of the conflict with patterns
    const field_pun =
      prec(1, alias($.variable, $.field_pun))

    const wildcard_or_field =
      choice($.field_wildcard, alias($._exp, $.field_value))

    const pair =
      with_field_name(':', wildcard_or_field)($)

    return choice(field_pun, pair)
  },

  record_literal: $ =>
    // higher precedence because of the conflict with patterns
    prec(1, braces(sep($.comma, $.record_field))),

  _record_field_update: $ => {
    const nested_update =
      braces(sep($.comma,
        alias($._record_field_update, $.record_update)
      ))

    const update_or_nested_update =
      choice(
        seq('=', choice($.wildcard, $._exp)),
        nested_update
      )

    return with_field_name(update_or_nested_update)($)
  },

  record_update: $ =>
    seq(
      choice($.wildcard, $.qualified_variable, $.variable, $.record_literal),
      braces(sep($.comma, $._record_field_update))
    ),

}

