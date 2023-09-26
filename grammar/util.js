const

parens = (...rule) => seq('(', ...rule, ')')

braces = (...rule) => seq('{', ...rule, '}')

brackets = (...rule) => seq('[', ...rule, ']')

ticked = (...rule) => seq('`', ...rule, '`')

quote = '\''

qualified = ($, id) => seq($._qualifying_module, id)

sep = (sep, rule) => optional(seq(rule, repeat(seq(sep, rule))))

sep1 = (sep, rule) => seq(rule, repeat(seq(sep, rule)))

sep2 = (sep, rule) => seq(rule, repeat1(seq(sep, rule)))

/**
  * Wrap a repeated rule with semicolon rules.
  * Between any two occurrences of a rule in a layout, if no explicit semicolon is encountered, delegate to the scanner
  * to determine heuristically where a statement or decl may end.
  * After the last repetition, the semicolon is optional.
  * The dynamic precision is needed because of some irregularities with standalone deriving decls and data deriving
  * clauses.
  */
terminated = ($, rule) => seq(
  sep1(prec.dynamic(1, choice(';', $._layout_semicolon)), rule),
  optional(choice(';', $._layout_semicolon)),
)

/**
  * Explicitly braced layouts may have arbitrary numbers of semicolons before and after each statement, but this causes
  * strange conflicts, so we only allow them once in leading and trailing position, but many times between statements.
  */
// layouted_braces = rule => braces(optional(';'), sep(repeat1(';'), rule), optional(';')),

/**
  * Wrap a repeated rule in a layout.
  * This is used for `where`, `let`, `of` and `do`, and the toplevel module.
  * The `_layout_start` rule is picked up by the scanner and causes the current column (or indent, for newline
  * layouts) to be recorded.
  * When a `_layout_end` or `_layout_semicolon` is encountered by the scanner, the recorded indent is compared to the
  * current one to make a decision.
  * If explicit braces are provided, the scanner isn't relevant.
  */
layouted = ($, rule) => choice(
  // layouted_braces(rule),
  seq($._layout_start, optional(terminated($, rule)), $._layout_end),
)

layouted_without_end = ($, rule) => choice(
  // layouted_braces(rule),
  seq($._layout_start, optional(terminated($, rule))),
)

where = ($, rule) => seq(
  $.where,
  optional(layouted($, rule)),
)

// see the documentation references in `./id.js`
varid_pattern = /[\p{Ll}_][\p{L}0-9_']*/u

module.exports = {
  parens,
  braces,
  brackets,
  ticked,
  quote,
  qualified,
  sep,
  sep1,
  sep2,
  terminated,
  layouted,
  where,
  varid_pattern,
}
