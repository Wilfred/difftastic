const basic = require('./grammar/basic.js')
const id = require('./grammar/id.js')
const type = require('./grammar/type.js')
const exp = require('./grammar/exp.js')
const pat = require('./grammar/pat.js')
const import_ = require('./grammar/import.js')
const module_ = require('./grammar/module.js')
const data = require('./grammar/data.js')
const class_ = require('./grammar/class.js')
const decl = require('./grammar/decl.js')
const derive = require('./grammar/derive.js')
const pattern = require('./grammar/pattern.js')
const misc = require('./grammar/misc.js')

module.exports = grammar({
  name: 'purescript',

  /**
   * These rules may occur anywhere in the grammar and don't have to be specified.
   */
  extras: $ => [
    /\p{Zs}/,
    /\n/,
    /\r/,
    $.cpp,
    $.comment,
  ],

  /**
   * These rules are handled manually by the scanner. Whenever their identifiers are used in the rule tree, the parser
   * executes the scanner.
   * Since the newline character is present both here and in `extras`, the scanner will be called before every token.
   * This makes indentation/layout tracking simpler.
   */
  externals: $ => [
    $._layout_semicolon,
    $._layout_start,
    $._layout_end,
    $._dot,
    $._arith_dotdot,
    $.where,
    $._splice_dollar,
    $._varsym,
    $._consym,
    $._tyconsym,
    $.comment,
    $.cpp,
    $.comma,
    $.quasiquote_start,
    $.quasiquote_bar,
    $.quasiquote_body,
    $._strict,
    $._lazy,
    $._unboxed_close,
    '|',
    'in',
    /\n/,
    $.empty_file,
  ],

  inline: $ => [
    $._number,
    $._stringly,
    $._qvarid,
    $._operator_minus,
    $._qvarsym,
    $._qvarsym_nominus,
    $._var,
    $._qvar,
    $._tyvar,
    $._qconid,
    $._qconsym,
    $._con,
    $._conop,
    $._qconop,
    $._op,
    $._qop_nominus,
    $._gcon_literal,
    $._gcon,
    $._tyconid,
    $._qtyconid,
    $._qtyconsym,
    $._qtycon,
    $._gtycon,
    $._simple_tycon,
    $._simple_tyconop,
    $._simple_qtyconop,
    $._quantifiers,
    $._qualifying_module,
  ],

  precedences: _ => [
    [
      'context-empty',
      'con_unit',
    ],
    [
      'infix-type',
      'btype',
    ],
    [
      'function-type',
      'type',
    ],
  ],

  conflicts: $ => [
    /**
     * This could be done with the second named precedence further up, but it somehow overrides symbolic infix
     * constructors.
     * Needs more investigation.
     */
    [$._type_infix, $.type_infix],

    /**
     * Optional context for a data/newtype decl with infix types:
     *
     * data a ~ b => A a b
     * data a + b
     */
    [$.type_name, $._simpletype_infix],

    /**
     * Same as above, but with regular types:
     *
     * data A a b
     * data C a b => A a b
     * data C Int a => A a
     * data B Int ~ B a => A a
     */
    [$.type_name, $._simpletype],
    [$._atype, $.constraint],

    /**
     * Constraints and parenthesized types.
     *
     * data (A a) => A
     * data (A a) %% A => A
     *
     * After the `a`, the closing paren is ambiguous.
     */
    [$._type_infix, $.constraint],

    /**
     * Top-level expression splices fundamentally conflict with decls, and since decls start with either `var` or `pat`,
     * they cannot be disambiguated.
     *
     * function_variable:
     * func (A a) = a
     *
     * function_pattern:
     * Just 1 = Just 1
     * a : as = [1, 2, 3]
     *
     * splice:
     * makeLenses ''A
     *
     * The disambiguation can clearly be made from the `=`, but my impression is that the conflict check only considers
     * immediate lookahead.
     */
    [$._fun_name, $.exp_name],
    [$._fun_name, $.pat_name],
    [$._fun_name, $.exp_name, $.exp_record_mutation],
    [$.exp_name, $.exp_record_mutation],
    [$._fun_name, $.pat_name, $.exp_name],
    [$.signature, $.pat_name],
    [$.exp_name, $._pat_constructor],
    [$.exp_name, $.pat_name],
    [$.exp_field, $.pat_field],
    [$._aexp_projection, $._apat],
    [$.exp_type_application, $.pat_type_binder],

    /**
     * Ambiguity between symbolic and regular constructors:
     *
     * data A = Maybe Int :+ Int
     * data A = Name Int
     *
     * both start with two tycons.
     */
    [$.type_name, $.data_constructor],


    /**
     * For getting a node for function application, and no extra node if the expression only consists of one term.
     */
    [$._exp_apply, $._fexp],
    [$._exp_apply],

    /**
     * Same as `exp_apply`, but for patterns.
     */
    [$.pat_apply, $._apat],
    [$.pat_apply],

    /**
     * Same as `exp_apply`, but for types.
     */
    [$.type_apply, $._btype],
    [$.type_apply],

    /**
     * Implicit parameters have slightly weird restrictions.
     */
    [$._type_or_implicit, $._context_constraints],

    /**
     * `(# | | ...` can start both `pat` and `exp`.
     */
    [$._pat_unboxed_sum, $._exp_unboxed_sum],


    [$.exp_lambda_case],

    /**
     * General kind signatures cause `(a :: k)` to be ambiguous.
     * This problem might be solvable if `type.js` were to be refactored.
     */
    [$.annotated_type_variable, $.type_name],

    /**
     * A multi-way `if` in a list conflicts with list comprehension: `[if | condition -> expr]`
     */
    [$.exp_if_guard],
  ],

  word: $ => $._varid,

  rules: {
    purescript: $ => choice(
      $.empty_file,
      $._decl_module,
      terminated($, $._topdecl),
    ),

    _topdecl: $ => choice(
      alias($.decl_type, $.type_alias),
      alias($.decl_data, $.data),
      alias($.decl_newtype, $.newtype),
      alias($.decl_import, $.import),
      alias($.decl_class, $.class),
      alias($.decl_instance, $.instance),
      alias($.decl_default, $.default_declaration),
      $._decl_foreign,
      alias($.decl_derive, $.derive_declaration),
      $._decl,
      alias($.decl_pattern, $.pattern_synonym),
      $.top_splice,
    ),

    ...basic,
    ...id,
    ...type,
    ...exp,
    ...pat,
    ...import_,
    ...module_,
    ...data,
    ...class_,
    ...decl,
    ...derive,
    ...pattern,
    ...misc,
  }
})
