const basic = require('./grammar/basic.js')
const id = require('./grammar/id.js')
const rows = require('./grammar/rows_and_records.js')
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
    // TODO: Splices were removed from the JS grammar but not from the scanner yet.
    $._splice_dollar,
    $._varsym,
    $._consym,
    $._tyconsym,
    $.comment,
    $.cpp,
    $.comma,
    // TODO: Quasiquotes were removed from the JS grammar but not from the scanner yet.
    $.quasiquote_start,
    $.quasiquote_bar,
    $.quasiquote_body,
    $._strict,
    $._lazy,
    // TODO: Unboxed types were removed from the JS grammar but not from the scanner yet.
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
     * Rows and records conflict with parenthesized types.
     * Seems to be related to visible type application specifically.
     */
    [$._field_name_ty, $._tyvar_no_annotation],

    /**
     * Record updates `f { x = x }` conflict with function application `f { x: x }`.
     * In PureScript record updates in fact do have higher precedence than function
     * application, such that `identity { a: 1 } { a = 2 }` is a valid expression,
     * but this doesn't work for parsing them correctly.
     */
    [$._record_update_lhs, $._aexp_projection],
    [$._record_update_lhs, $.exp_name],

    /**
     * Newkind's and data's signatures/declarations are in obvious conflict:
     *
     * data A :: Type -> Type
     * data A a
     *
     * vs
     *
     * data B :: forall k. k -> Type
     * data B a = B
     *
     * TODO: replace [almost] all distinct kinds of kind/type signatures
     * with a single `type_signature` node.
     */
    [$._data_type_signature, $._newkind_type_signature],

    /**
     * This could be done with the second named precedence further up, but it somehow overrides symbolic infix
     * constructors.
     * Needs more investigation.
     */
    [$.type_infix, $._type],

    /*
     * Wildcards in expression sections and pattern wildcards.
     * They should be easily disambiguable but currently the grammar isn't capable of this.
     */
    [$.exp_section_left, $.pat_wildcard],

    /**
     * The definition of an infix expression is rather simple and as such
     * it allows things which wouldn't be possible in reality:
     *
     * a ``b`` c
     * (note the double '`' ticks)
     */
    [$.exp_ticked],

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
    [$._fun_name, $.pat_name],
    [$.signature, $.pat_name],
    [$.exp_name, $._pat_constructor],
    [$.exp_name, $.pat_name],
    [$._aexp_projection, $._apat],
    [$.pat_name, $._q_op],
    [$.exp_array, $.pat_array],

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
     * A weird conflict involving fundeps and type variables in class heads,
     * despite the fact that fundeps are delimited by `|`.
     */
    [$.type_name, $.class_head],

    /**
     * Type names and class names both alias `$.constructor`.
     */
    [$.type_name, $.class_name],

    /**
     * Same as above, but for operators.
     */
    [$.operator, $.type_operator],

    /**
     * What a `forall` binds to is ambiguous from the parser's POV:
     *
     * `t :: forall a. Unit`         ← binds to the single type name
     * `t :: forall a. Unit → Unit`  ← binds to the whole expression
     *
     * This is solvable in theory but likely not under the current
     * implementation of `type.js`. Although, the costs of a more naive
     * implementation are small; it'd work fine unless someone decided
     * to write `t :: forall a. forall b. ...`, in which case it wouldn't
     * parse the second `forall` correctly.
     */
    [$._type,],
    [$._btype,],

    /**
     * Ado-notation is currently tricky for two reasons:
     * 1) It isn't natively supported by layout scanner, unlike do-notation.
     * 2) It terminates with `in` keyword, which conflicts with `let … in …`-expressions.
     *    This in turn prevents us from simply using the same rules as for do-notation.
     * A future ideal solution would be to handle it at the scanner level.
     */
    [$.exp_ado],

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
      $.type_role_declaration,
      alias($.decl_data, $.data),
      alias($.decl_newtype, $.newtype),
      // TODO: Imports cannot come in random places,
      // the structure of a module is always `module M [exports] where [imports] …`
      // should group these together to remove extra parser overhead and simplify it for all other symbols
      alias($.decl_import, $.import),
      $.class_declaration,
      $.class_instance,
      $._decl_foreign,
      alias($.decl_derive, $.derive_declaration),
      $._decl,
      $.kind_declaration,
      $.kind_value_declaration,
      alias($.decl_pattern, $.pattern_synonym),
    ),

    ...basic,
    ...id,
    ...rows,
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
  }
})
