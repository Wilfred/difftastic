/**
 * @file FSharp grammar for tree-sitter
 * @author Nikolaj Sidorenco
 * @license MIT
 * @see {@link https://fsharp.org/specs/language-spec/4.1/FSharpSpec-4.1-latest.pdf f# grammar}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  SEQ_EXPR: 1,
  APP_EXPR: 16,
  THEN_EXPR: 2,
  RARROW: 3,
  INFIX_OP: 4,
  NEW_EXPR: 5,
  LET_EXPR: 60,
  LET_DECL: 7,
  DO_EXPR: 8,
  FUN_EXPR: 8,
  MATCH_EXPR: 8,
  MATCH_DECL: 9,
  DO_DECL: 10,
  ELSE_EXPR: 11,
  INTERFACE: 12,
  COMMA: 13,
  DOTDOT: 14,
  PREFIX_EXPR: 15,
  SPECIAL_INFIX: 16,
  LARROW: 16,
  TUPLE_EXPR: 16,
  CE_EXPR: 15,
  SPECIAL_PREFIX: 17,
  // DO_EXPR: 17,
  IF_EXPR: 18,
  NEW_OBJ: 18,
  DOT: 19,
  INDEX_EXPR: 20,
  PAREN_APP: 21,
  TYPED_EXPR: 22,
  PAREN_EXPR: 21,
  DOTDOT_SLICE: 22,
};

module.exports = grammar({
  name: 'fsharp',

  extras: $ => [
    $.block_comment,
    $.line_comment,
    $.xml_doc,
    /[ \s\f\uFEFF\u2060\u200B]|\\\r?n/,
  ],

  // The external scanner (scanner.c) allows us to inject "dummy" tokens into the grammar.
  // These tokens are used to track the indentation-based scoping used in F#
  externals: $ => [
    $._newline, // we distinguish new scoped based on newlines.
    $._indent, // starts a new indentation-based scope.
    $._dedent, // signals that the current indentation scope has ended.
    $._then,
    $._else,
    $._elif,
    $._triple_quoted_content,
    $.block_comment_content,
    $.line_comment,

    $._error_sentinel, // unused token to detect parser errors in external parser.
  ],

  conflicts: $ => [
    [$.long_identifier, $._identifier_or_op],
    [$.type_argument, $.static_type_argument],
    [$.file],
    [$.rules],
  ],

  word: $ => $.identifier,

  inline: $ => [
    $._module_elem,
    $._infix_or_prefix_op,
    $._base_call,
    $._expression_or_range,
    $._object_expression_inner,
    $._record_type_defn_inner,
    $._union_type_defn_inner,
    $._then_expression,
  ],

  supertypes: $ => [$._module_elem, $._pattern, $._expression, $._type_defn_body],

  rules: {
    //
    // Top-level rules (BEGIN)
    //
    file: $ =>
      seq(
        repeat($.compiler_directive_decl),
        choice(
          $.named_module,
          repeat1($.namespace),
          repeat($._module_elem),
        ),
      ),

    namespace: $ =>
      seq(
        token.immediate('namespace'),
        choice(
          'global',
          field('name', seq(optional('rec'), $.long_identifier)),
        ),
        repeat($._module_elem),
      ),

    named_module: $ =>
      seq(
        'module',
        optional($.access_modifier),
        field('name', $.long_identifier),
        repeat($._module_elem),
      ),

    _module_elem: $ =>
      choice(
        $.value_declaration,
        $.module_defn,
        $.module_abbrev,
        $.import_decl,
        $.compiler_directive_decl,
        $.fsi_directive_decl,
        $.type_definition,
        $._expression,
        // $.exception_defn
      ),

    module_abbrev: $ =>
      seq(
        'module',
        $.identifier,
        '=',
        scoped($.long_identifier, $._indent, $._dedent),
      ),

    module_defn: $ =>
      prec.left(
        seq(
          optional($.attributes),
          'module',
          optional($.access_modifier),
          $.identifier,
          '=',
          scoped(repeat1($._module_elem), $._indent, $._dedent),
        )),

    compiler_directive_decl: $ => seq('#nowarn', $.string),

    fsi_directive_decl: $ =>
      choice(
        seq('#r', $.string),
        seq('#load', $.string),
      ),

    import_decl: $ => seq('open', $.long_identifier),

    //
    // Attributes (BEGIN)
    //
    attributes: $ => prec.left(repeat1($.attribute_set)),
    attribute_set: $ =>
      seq(
        '[<',
        $.attribute,
        prec(PREC.SEQ_EXPR + 1, repeat(seq($._newline, $.attribute))),
        '>]',
      ),
    attribute: $ => seq(
      optional(seq($.attribute_target, ':')),
      $.object_construction,
    ),
    attribute_target: _ => choice(
      'assembly',
      'module',
      'return',
      'field',
      'property',
      'param',
      'type',
      'constructor',
      'event',
    ),

    object_construction: $ =>
      prec.left(PREC.SEQ_EXPR + 1,
        seq(
          $.type,
          optional($._expression),
        )),

    //
    // Attributes (END)
    //


    value_declaration: $ =>
      seq(
        optional($.attributes),
        choice(
          prec(PREC.LET_DECL, $.function_or_value_defn),
          prec(PREC.DO_DECL, $.do),
        ),
      ),

    do: $ => prec(PREC.DO_EXPR + 1,
      seq(
        'do',
        $._expression_block,
      )),

    _function_or_value_defns: $ =>
      prec.right(
        seq($._function_or_value_defn_body, repeat(seq('and', $._function_or_value_defn_body))),
      ),

    function_or_value_defn: $ =>
      seq(
        choice('let', 'let!'),
        choice(
          $._function_or_value_defn_body,
          seq('rec', $._function_or_value_defns),
        ),
      ),

    _function_or_value_defn_body: $ =>
      seq(
        choice(
          $.function_declaration_left,
          $.value_declaration_left,
        ),
        optional(seq(':', $.type)),
        '=',
        field('body', $._expression_block),
      ),

    function_declaration_left: $ =>
      prec.left(3, seq(
        optional('inline'),
        optional($.access_modifier),
        prec(100, $._identifier_or_op),
        optional($.type_arguments),
        $.argument_patterns,
      )),

    value_declaration_left: $ =>
      prec.left(2, seq(
        optional('mutable'),
        optional($.access_modifier),
        $._pattern,
        optional($.type_arguments),
      )),

    access_modifier: _ => prec(100, token(prec(1000, choice('private', 'internal', 'public')))),
    //
    // Top-level rules (END)
    //

    //
    // Pattern rules (BEGIN)
    _pattern: $ =>
      choice(
        alias('null', $.null_pattern),
        alias('_', $.wildcard_pattern),
        alias($.const, $.const_pattern),
        $.as_pattern,
        $.disjunct_pattern,
        $.conjunct_pattern,
        $.cons_pattern,
        $.repeat_pattern,
        $.paren_pattern,
        $.list_pattern,
        $.array_pattern,
        $.record_pattern,
        $.typed_pattern,
        $.attribute_pattern,
        $.type_check_pattern,
        $.optional_pattern,
        $.identifier_pattern,
      ),

    optional_pattern: $ => prec.right(
      seq(
        '?',
        $._pattern,
      ),
    ),

    type_check_pattern: $ =>
      prec.right(
        seq(
          ':?',
          $.atomic_type,
          optional(seq('as', $.identifier)),
        ),
      ),

    attribute_pattern: $ => prec.left(seq($.attributes, $._pattern)),

    paren_pattern: $ => seq('(', $._pattern, ')'),

    repeat_pattern: $ =>
      prec.right(
        seq(
          $._pattern,
          repeat1(prec.right(seq(',', $._pattern))),
        )),

    as_pattern: $ => prec.left(0, seq($._pattern, 'as', $.identifier)),
    cons_pattern: $ => prec.left(0, seq($._pattern, '::', $._pattern)),
    disjunct_pattern: $ => prec.left(0, seq($._pattern, '|', $._pattern)),
    conjunct_pattern: $ => prec.left(0, seq($._pattern, '&', $._pattern)),
    typed_pattern: $ => prec.left(3, seq($._pattern, ':', $.type)),

    argument_patterns: $ =>
      // argument patterns are generally no different from normal patterns.
      // however, any time an argument pattern is a valid node, (i.e. inside a beginning fun decl)
      // it is always the correct node to construct.
      prec.left(1000, repeat1($._atomic_pattern)),

    field_pattern: $ => prec(1, seq($.long_identifier, '=', $._pattern)),

    _atomic_pattern: $ =>
      prec(1000,
        choice(
          'null',
          '_',
          $.const,
          $.long_identifier,
          $.list_pattern,
          $.record_pattern,
          $.array_pattern,
          seq('(', $._pattern, ')'),
          // :? atomic_type
        )),

    list_pattern: $ => choice(
      seq('[', ']'),
      seq('[', $._pattern, repeat(seq(';', $._pattern)), ']')),
    array_pattern: $ => choice(
      seq('[|', '|]'),
      seq('[|', $._pattern, repeat(seq(';', $._pattern)), '|]')),
    record_pattern: $ =>
      prec.left(
        seq(
          '{', $.field_pattern, repeat(seq(';', $.field_pattern)))),

    identifier_pattern: $ =>
      prec.left(-1,
        seq($.long_identifier, optional($._pattern_param), optional($._pattern)),
      ),

    _pattern_param: $ =>
      prec(2,
        choice(
          $.const,
          $.long_identifier,
          // seq($.long_identifier, $._pattern_param),
          // seq($._pattern_param, ":", $.type),
          // seq(
          //   "[",
          //   $._pattern_param,
          //   repeat(seq($._seperator, $._pattern_param)),
          //   "]",
          // ),
          // seq(
          //   "(",
          //   $._pattern_param,
          //   repeat(seq($._seperator, $._pattern_param)),
          //   ")",
          // ),
          // seq("<@", $._expression, "@>"),
          // seq("<@@", $._expression, "@@>"),
          'null',
        ),
      ),
    //
    // Pattern rules (END)
    //

    //
    // Expressions (BEGIN)
    //

    _expression_block: $ =>
      seq(
        $._indent,
        $._expression,
        $._dedent,
      ),

    _expression: $ =>
      choice(
        'null',
        $.const,
        $.paren_expression,
        $.begin_end_expression,
        $.long_identifier_or_op,
        $.dot_expression,
        $.typed_expression,
        $.infix_expression,
        $.index_expression,
        $.mutate_expression,
        $.object_instantiation_expression,
        $.list_expression,
        $.array_expression,
        $.ce_expression,
        $.prefixed_expression,
        $.brace_expression,
        $.anon_record_expression,
        $.typecast_expression,
        $.declaration_expression,
        $.do_expression,
        $.fun_expression,
        $.function_expression,
        $.sequential_expression,
        $.if_expression,
        $.while_expression,
        $.for_expression,
        $.match_expression,
        $.try_expression,
        $.literal_expression,
        // $.call_expression,
        $.tuple_expression,
        $.application_expression,
        // (static-typars : (member-sig) expr)
      ),

    tuple_expression: $ =>
      prec.left(PREC.TUPLE_EXPR,
        seq(
          $._expression,
          ',',
          $._expression,
        ),
      ),

    brace_expression: $ =>
      prec(PREC.CE_EXPR + 1,
        seq(
          '{',
          scoped(
            choice(
              $.field_initializers,
              $.with_field_expression,
              $.object_expression,
            ),
            $._indent,
            $._dedent),
          '}',
        )),

    anon_record_expression: $ =>
      prec(PREC.PAREN_EXPR,
        seq(
          '{|',
          scoped(
            $.field_initializers,
            $._indent,
            $._dedent),
          '|}',
        )),

    with_field_expression: $ =>
      seq(
        $._expression,
        'with',
        scoped($.field_initializers, $._indent, $._dedent),
      ),

    _object_expression_inner: $ =>
      seq(
        $._object_members,
        repeat($.interface_implementation),
      ),

    object_expression: $ =>
      prec(PREC.NEW_EXPR,
        seq(
          'new',
          $._base_call,
          $._object_expression_inner,
        )),

    _base_call: $ =>
      seq(
        $.object_construction,
        optional(seq('as', $.identifier)),
      ),

    prefixed_expression: $ =>
      seq(
        choice('return', 'return!', 'yield', 'yield!', 'lazy', 'assert', 'upcast', 'downcast', $.prefix_op),
        prec.right(PREC.PREFIX_EXPR, $._expression),
      ),

    literal_expression: $ =>
      prec(PREC.PAREN_EXPR,
        choice(
          seq('<@', $._expression, '@>'),
          seq('<@@', $._expression, '@@>'),
        )),

    typecast_expression: $ =>
      prec(PREC.SPECIAL_INFIX,
        seq(
          $._expression,
          choice(
            ':',
            ':>',
            ':?',
            ':?>',
          ),
          $.type,
        )),

    for_expression: $ =>
      prec(PREC.DO_EXPR + 1,
        seq(
          'for',
          choice(
            seq($._pattern, 'in', $._expression_or_range),
            seq($.identifier, '=', $._expression, choice('to', 'downto'), $._expression),
          ),
          'do',
          $._expression_block,
          optional('done'),
        )),

    while_expression: $ =>
      prec(PREC.DO_EXPR + 1,
        seq(
          'while',
          $._expression,
          'do',
          $._expression_block,
          optional('done'),
        )),

    _else_expression: $ =>
      seq(
        alias($._else, 'else'),
        field('else', $._expression_block),
      ),

    _then_expression: $ =>
      seq(
        alias($._then, 'then'),
        $._indent,
        field('then', $._expression),
      ),

    elif_expression: $ =>
      seq(
        alias($._elif, 'elif'),
        field('guard', $._expression),
        $._then_expression,
      ),

    _if_then_else_expression: $ =>
      prec.left(PREC.IF_EXPR,
        seq(
          'if',
          field('guard', $._expression),
          $._then_expression,
          repeat($.elif_expression),
          $._else_expression,
        )),

    _if_then_expression: $ =>
      prec.left(PREC.IF_EXPR,
        seq(
          'if',
          field('guard', $._expression),
          $._then_expression,
          $._dedent
        )),

    if_expression: $ => choice($._if_then_expression, $._if_then_else_expression),

    fun_expression: $ =>
      prec.right(PREC.FUN_EXPR,
        seq(
          'fun',
          $.argument_patterns,
          '->',
          $._expression_block,
        )),

    try_expression: $ =>
      prec(PREC.MATCH_EXPR,
        seq(
          'try',
          $._expression_block,
          optional($._newline),
          choice(
            seq('with', $.rules),
            seq('finally', $._expression_block)
          ),
        )),

    match_expression: $ =>
      seq(
        choice('match', 'match!'),
        $._expression,
        optional($._newline),
        'with',
        $.rules,
      ),

    function_expression: $ =>
      prec(PREC.MATCH_EXPR,
        seq(
          'function',
          $.rules,
        )),

    object_instantiation_expression: $ =>
      prec(PREC.NEW_OBJ,
        seq(
          'new',
          $.type,
          $._expression,
        )),

    mutate_expression: $ =>
      prec.right(PREC.LARROW,
        seq(
          field('assignee', $._expression),
          '<-',
          field('value', $._expression),
        )),

    index_expression: $ =>
      prec(PREC.INDEX_EXPR,
        seq(
          $._expression,
          '.[',
          choice(
            field('index', $._expression),
            $.slice_ranges,
          ),
          ']',
        )),

    dot_expression: $ =>
      prec.right(PREC.DOT,
        seq(
          field('base', $._expression),
          '.',
          field('field', $.long_identifier_or_op),
        )),

    typed_expression: $ =>
      prec(PREC.PAREN_EXPR,
        seq(
          $._expression,
          token.immediate(prec(PREC.PAREN_EXPR, '<')),
          optional($.types),
          prec(PREC.PAREN_EXPR, '>'),
        )),

    declaration_expression: $ =>
      seq(
        choice(
          seq(choice('use', 'use!'), $.identifier, '=', $._expression_block),
          $.function_or_value_defn,
        ),
        field('in', $._expression)
      ),

    do_expression: $ =>
      prec(PREC.DO_EXPR,
        seq(
          choice('do', 'do!'),
          $._expression_block,
        )),

    _list_elements: $ =>
      prec.right(PREC.COMMA + 100,
        seq(
          optional($._newline),
          $._expression,
          repeat(prec.right(PREC.COMMA + 100,
            seq(
              alias($._newline, ';'),
              $._expression,
            ),
          )),
        ),
      ),

    _list_element: $ =>
      seq(
        $._indent,
        choice(
          $._list_elements,
          $._comp_or_range_expression,
          $.slice_ranges,
        ),
        $._dedent,
      ),

    list_expression: $ =>
      seq(
        '[',
        optional($._list_element),
        ']',
      ),

    array_expression: $ =>
      seq(
        '[|',
        optional($._list_element),
        '|]',
      ),

    range_expression: $ =>
      prec.left(PREC.DOTDOT,
        seq(
          $._expression,
          '..',
          $._expression,
          optional(seq(
            '..',
            $._expression,
          )))),

    _expression_or_range: $ =>
      choice(
        $._expression,
        $.range_expression,
      ),

    rule: $ =>
      prec.right(
        seq(
          $._pattern,
          optional(seq('when', $._expression)),
          '->',
          $._expression_block,
        )),

    rules: $ =>
      seq(
        optional('|'), $.rule,
        repeat(seq(optional($._newline), '|', $.rule)),
      ),

    begin_end_expression: $ => prec(PREC.PAREN_EXPR, seq('begin', $._expression, 'end')),

    paren_expression: $ => prec(PREC.PAREN_EXPR,
      seq(
        '(',
        $._expression_block,
        ')',
      )),

    application_expression: $ =>
      prec.left(PREC.APP_EXPR,
        seq(
          $._expression,
          choice(
            prec(PREC.APP_EXPR, $._expression),
            prec(PREC.PAREN_APP + 100, seq(token.immediate(prec(10000, '(')), optional($._expression_block), ')'),
            )
          )
        )),

    infix_expression: $ =>
      prec.left(PREC.SPECIAL_INFIX,
        seq(
          $._expression,
          $.infix_op,
          $._expression,
        )),


    ce_expression: $ =>
      prec.left(PREC.CE_EXPR,
        seq(
          prec(-1, $._expression),
          '{',
          scoped($._comp_or_range_expression, $._indent, $._dedent),
          '}',
        )),

    sequential_expression: $ =>
      prec.right(PREC.SEQ_EXPR,
        seq(
          $._expression,
          repeat1(
            prec.right(PREC.SEQ_EXPR,
              seq(
                alias($._newline, ';'),
                $._expression,
              ),
            ),
          ),
        ),
      ),

    //
    // Expressions (END)
    //

    //
    // Computation expression (BEGIN)
    //

    _comp_or_range_expression: $ =>
      choice(
        $._expression,
        $.short_comp_expression,
        // $.range_expression, TODO
      ),

    // _comp_expressions: $ =>
    //   choice(
    //     $.let_ce_expressions,
    //     $.do_ce_expressions,
    //     $.use_ce_expressions,
    //     $.yield_ce_expressions,
    //     $.return_ce_expressions,
    //     $.if_ce_expressions,
    //     $.match_ce_expressions,
    //     $.try_ce_expressions,
    //     $.while_expressions,
    //     $.for_ce_expressions,
    //     $.sequential_ce_expressions,
    //     $._expression,
    //   ),

    // for_ce_expressions: $ =>
    //   prec.left(
    //   seq(
    //     "for",
    //     choice(
    //         seq($._pattern, "in", $._expression_or_range),
    //         seq($.identifier, "=", $._expression, "to", $._expression),
    //     ),
    //     "do",
    //       $._virtual_open_section,
    //       $._comp_expressions,
    //       $._virtual_end_section,
    //     optional("done"),
    //   )),
    //
    // try_ce_expressions: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "try",
    //     $._virtual_open_section,
    //     $._comp_expressions,
    //     $._virtual_end_section,
    //     choice(
    //       seq("with", $.comp_rules),
    //       seq("finally", $.comp_rules)
    //     ),
    //   )),
    //
    // match_ce_expressions: $ =>
    //   prec(PREC.MATCH_EXPR,
    //   seq(
    //     "match",
    //     $._expression,
    //     "with",
    //     $.comp_rules,
    //   )),
    //
    // sequential_ce_expressions: $ =>
    //   prec.left(PREC.SEQ_EXPR,
    //   seq(
    //     $._comp_expressions,
    //     repeat1(prec.right(PREC.SEQ_EXPR, seq(choice(";", $._newline), $._comp_expressions))),
    //   )),
    //
    // _else_ce_expressions: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "else",
    //     $._virtual_open_section,
    //     field("else_branch", $._comp_expressions),
    //     $._virtual_end_section,
    //   )),
    //
    // elif_ce_expressions: $ =>
    //   prec(PREC.ELSE_EXPR,
    //   seq(
    //     "elif",
    //     $._virtual_open_section,
    //     field("guard", $._expression),
    //     $._virtual_end_section,
    //     "then",
    //     $._virtual_open_section,
    //     field("then", $._comp_expressions),
    //     $._virtual_end_section,
    //   )),
    //
    // if_ce_expressions: $ =>
    //   prec.left(PREC.IF_EXPR,
    //   seq(
    //     "if",
    //     $._virtual_open_section,
    //     field("guard", $._expression),
    //     $._virtual_end_section,
    //     "then",
    //     field("then", $._comp_expressions),
    //     repeat($.elif_ce_expressions),
    //     optional($._else_ce_expressions),
    //   )),
    //
    // return_ce_expressions: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("return!", "return"),
    //     $._expression,
    //   )),
    //
    // yield_ce_expressions: $ =>
    //   prec.left(PREC.PREFIX_EXPR,
    //   seq(
    //     choice("yield!", "yield"),
    //     $._expression,
    //   )),
    //
    // do_ce_expressions: $ =>
    //   seq(
    //     choice("do!", "do"),
    //     $._expression,
    //     $._comp_expressions,
    //   ),
    //
    // use_ce_expressions: $ =>
    //   seq(
    //     choice("use!", "use"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expression,
    //     $._virtual_end_section,
    //     $._comp_expressions,
    //   ),
    //
    // let_ce_expressions: $ =>
    //   seq(
    //     choice("let!", "let"),
    //     $._pattern,
    //     "=",
    //     $._virtual_open_section,
    //     $._expression,
    //     $._virtual_end_section,
    //     $._comp_expressions,
    //   ),

    short_comp_expression: $ =>
      seq(
        'for',
        $._pattern,
        'in',
        $._expression_or_range,
        '->',
        $._expression,
      ),

    // comp_rule: $ =>
    //   seq(
    //     $._pattern,
    //     "->",
    //     $._comp_expressions,
    //   ),
    //
    // comp_rules: $ =>
    //   prec.left(2,
    //   seq(
    //     optional("|"),
    //     $.comp_rule,
    //     repeat(seq("|", $.comp_rule)),
    //   )),

    slice_ranges: $ =>
      seq($.slice_range, repeat(seq(',', $.slice_range))),

    _slice_range_special: $ =>
      prec.left(PREC.DOTDOT_SLICE,
        choice(
          seq(field('from', $._expression), token(prec(PREC.DOTDOT, '..'))),
          seq(token(prec(PREC.DOTDOT + 100000, '..')), field('to', $._expression)),
          seq(field('from', $._expression), token(prec(PREC.DOTDOT, '..')), field('to', $._expression)),
        ),
      ),

    slice_range: $ =>
      choice(
        $._slice_range_special,
        $._expression,
        '*',
      ),

    //
    // Computation expression (END)
    //

    //
    // Type rules (BEGIN)
    //
    type: $ =>
      prec(4, choice(
        $._simple_type,
        $._generic_type,
        $._paren_type,
        $._function_type,
        $._compound_type,
        $._postfix_type,
        $._list_type,
        $._static_type,
        $.type_argument,
        $._constrained_type,
        $._flexible_type,
      )),

    _simple_type: $ => $.long_identifier,
    _generic_type: $ => prec.right(5, seq($.long_identifier, '<', optional($.type_attributes), '>')),
    _paren_type: $ => seq('(', $.type, ')'),
    _function_type: $ => prec.right(seq($.type, '->', $.type)),
    _compound_type: $ => prec.right(seq($.type, repeat1(prec.right(seq('*', $.type))))),
    _postfix_type: $ => prec.left(4, seq($.type, $.long_identifier)),
    _list_type: $ => seq($.type, '[]'),
    _static_type: $ => prec(10, seq($.type, $.type_arguments)),
    _constrained_type: $ => prec.right(seq($.type_argument, ':>', $.type)),
    _flexible_type: $ => prec.right(seq(token.immediate('#'), $.type)),

    types: $ =>
      seq(
        $.type,
        repeat(prec.left(PREC.COMMA, seq(',', $.type))),
      ),

    type_attribute: $ =>
      choice(
        $.type,
        // measure
        // static-parameter
      ),

    type_attributes: $ => seq($.type_attribute, repeat(prec.left(PREC.COMMA, seq(',', $.type_attribute)))),

    atomic_type: $ =>
      prec.right(
        choice(
          seq('#', $.type),
          $.type_argument,
          seq('(', $.type, ')'),
          $.long_identifier,
          seq($.long_identifier, '<', $.type_attributes, '>'),
        )),

    constraint: $ =>
      choice(
        seq($.type_argument, ':>', $.type),
        seq($.type_argument, ':', 'null'),
        seq($.static_type_argument, ':', '(', $.trait_member_constraint, ')'),
        seq($.type_argument, ':', '(', 'new', ':', 'unit', '->', '\'T', ')'),
        seq($.type_argument, ':', 'struct'),
        seq($.type_argument, ':', 'not', 'struct'),
        seq($.type_argument, ':', 'enum', '<', $.type, '>'),
        seq($.type_argument, ':', 'unmanaged'),
        seq($.type_argument, ':', 'equality'),
        seq($.type_argument, ':', 'comparison'),
        seq($.type_argument, ':', 'delegate', '<', $.type, ',', $.type, '>'),
      ),

    type_argument_constraints: $ =>
      seq(
        'when',
        $.constraint,
        repeat(seq('and', $.constraint)),
      ),

    type_argument: $ =>
      choice(
        '_',
        seq('\'', $.identifier),
        seq('^', $.identifier),
      ),

    type_argument_defn: $ =>
      seq(
        optional($.attributes),
        $.type_argument,
      ),

    static_type_argument: $ =>
      choice(
        seq(choice('^', '\''), $.identifier),
        seq(choice('^', '\''), $.identifier, repeat(seq('or', choice('^', '\''), $.identifier))),
      ),

    type_arguments: $ =>
      seq(
        '<',
        $.type_argument_defn,
        repeat(prec.left(PREC.COMMA, seq(',', $.type_argument_defn))),
        optional($.type_argument_constraints),
        '>',
      ),

    trait_member_constraint: $ =>
      seq(
        optional('static'),
        'member',
        $.identifier,
        ':',
        $.type,
      ),

    member_signature: $ =>
      seq(
        $.identifier,
        optional($.type_arguments),
        ':',
        $.curried_spec,
        optional(
          choice(
            seq('with', 'get'),
            seq('with', 'set'),
            seq('with', 'get', ',', 'set'),
            seq('with', 'set', ',', 'get'),
          ),
        ),
      ),

    curried_spec: $ =>
      seq(
        repeat(seq($.arguments_spec, '->')),
        $.type
      ),

    argument_spec: $ =>
      prec.left(
        seq(
          optional($.attributes),
          optional($.argument_name_spec),
          $.type,
        )),

    arguments_spec: $ =>
      seq(
        $.argument_spec,
        repeat(seq('*', $.argument_spec)),
      ),

    argument_name_spec: $ =>
      seq(
        optional('?'),
        field('name', $.identifier),
        ':',
      ),

    interface_spec: $ =>
      seq(
        'interface',
        $.type,
      ),

    static_parameter: $ =>
      choice(
        $.static_parameter_value,
        seq('id', '=', $.static_parameter_value),
      ),

    static_parameter_value: $ =>
      choice(
        $.const,
        seq($.const, $._expression),
      ),

    type_definition: $ =>
      prec.left(seq(
        optional($.attributes),
        'type',
        $._type_defn_body,
        repeat(seq(
          optional($.attributes),
          'and',
          $._type_defn_body,
        )))),

    _type_defn_body: $ =>
      choice(
        $.delegate_type_defn,
        $.record_type_defn,
        $.union_type_defn,
        $.anon_type_defn,
        // $.class_type_defn,
        // $.struct_type_defn,
        // $.interface_type_defn,
        $.enum_type_defn,
        $.type_abbrev_defn,
        $.type_extension,
      ),

    type_name: $ =>
      seq(
        optional($.attributes),
        optional($.access_modifier),
        choice(
          seq(field('type_name', $.identifier), optional($.type_arguments)),
          seq(optional($.type_argument), field('type_name', $.identifier)), // Covers `type 'a option = Option<'a>`
        ),
      ),

    type_extension: $ =>
      seq(
        $.type_name,
        $.type_extension_elements,
      ),

    delegate_type_defn: $ =>
      seq(
        $.type_name,
        '=',
        scoped($.delegate_signature, $._indent, $._dedent),
      ),

    delegate_signature: $ =>
      seq(
        'delegate',
        'of',
        $.type,
      ),

    type_abbrev_defn: $ =>
      seq(
        $.type_name,
        '=',
        scoped($.type, $._indent, $._dedent),
      ),

    // class_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "class",
    //     $.class_type_body,
    //     "end",
    //   ),
    //
    // struct_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "struct",
    //     $.class_type_body,
    //     "end",
    //   ),
    //
    // interface_type_defn: $ =>
    //   seq(
    //     $.type_name,
    //     optional($.primary_constr_args),
    //     "=",
    //     "interface",
    //     $.class_type_body,
    //     "end",
    //   ),

    _class_type_body_inner: $ =>
      choice(
        $.class_inherits_decl,
        $._class_function_or_value_defn,
        $._type_defn_elements,
      ),

    _class_type_body: $ =>
      seq(
        $._class_type_body_inner,
        repeat(seq($._newline, $._class_type_body_inner)),
      ),

    _record_type_defn_inner: $ =>
      seq(
        '{',
        scoped($.record_fields, $._indent, $._dedent),
        '}',
        optional($.type_extension_elements),
      ),

    record_type_defn: $ =>
      prec.left(
        seq(
          $.type_name,
          '=',
          scoped($._record_type_defn_inner, $._indent, $._dedent),
        )),

    record_fields: $ =>
      seq(
        $.record_field,
        repeat(
          seq(
            $._newline,
            $.record_field),
        ),
      ),

    record_field: $ =>
      seq(
        optional($.attributes),
        optional('mutable'),
        optional($.access_modifier),
        $.identifier,
        ':',
        $.type,
      ),

    enum_type_defn: $ =>
      seq(
        $.type_name,
        '=',
        scoped($.enum_type_cases, $._indent, $._dedent),
      ),

    enum_type_cases: $ =>
      choice(
        seq(optional('|'), $.enum_type_case),
        seq(
          seq('|', $.enum_type_case),
          repeat1(seq('|', $.enum_type_case)),
        ),
      ),

    enum_type_case: $ =>
      seq(
        $.identifier,
        '=',
        $.const,
      ),

    _union_type_defn_inner: $ =>
      seq(
        $.union_type_cases,
        optional($.type_extension_elements),
      ),

    union_type_defn: $ =>
      prec.left(
        seq(
          $.type_name,
          '=',
          scoped($._union_type_defn_inner, $._indent, $._dedent),
        )),

    union_type_cases: $ =>
      seq(
        optional('|'),
        $.union_type_case,
        repeat(seq('|', $.union_type_case)),
      ),

    union_type_case: $ =>
      prec(8,
        seq(
          optional($.attributes),
          choice(
            $.identifier,
            seq($.identifier, 'of', $.union_type_fields),
            seq($.identifier, ':', $.type),
          ))),

    union_type_fields: $ =>
      seq(
        $.union_type_field,
        repeat(seq('*', $.union_type_field)),
      ),

    union_type_field: $ =>
      prec.left(choice(
        $.type,
        seq($.identifier, ':', $.type),
      )),

    anon_type_defn: $ =>
      prec.left(
        seq(
          $.type_name,
          optional($.primary_constr_args),
          '=',
          scoped($._class_type_body, $._indent, $._dedent),
        )),

    primary_constr_args: $ =>
      field('constructor',
        seq(
          optional($.attributes),
          optional($.access_modifier),
          '(',
          optional(seq(
            $.simple_pattern,
            repeat(prec.left(PREC.COMMA, seq(',', $.simple_pattern))))),
          ')',
        )),

    simple_pattern: $ =>
      choice(
        $.identifier,
        seq($.simple_pattern, ':', $.type),
      ),

    _class_function_or_value_defn: $ =>
      seq(
        optional($.attributes),
        optional('static'),
        choice(
          $.function_or_value_defn,
          seq('do', $._expression_block),
        ),
      ),

    type_extension_elements: $ =>
      seq(
        choice(
          seq(
            'with',
            scoped($._type_defn_elements, $._indent, $._dedent),
          ),
          $._type_defn_elements,
        ),
      ),

    _type_defn_elements: $ =>
      choice(
        $._member_defns,
        prec.left(repeat1($.interface_implementation)),
        // $._interface_signature
      ),

    interface_implementation: $ =>
      prec.left(
        seq(
          'interface',
          $.type,
          optional($._object_members),
        )),

    _member_defns: $ =>
      prec.left(
        seq(
          $.member_defn,
          repeat($.member_defn),
        )),

    _object_members: $ =>
      seq(
        'with',
        scoped($._member_defns, $._indent, $._dedent),
      ),

    member_defn: $ =>
      prec(PREC.APP_EXPR + 100000,
        seq(
          optional($.attributes),
          choice(
            seq(optional('static'), optional($.access_modifier), 'member', $.method_or_prop_defn),
            seq('abstract', optional($.access_modifier), optional('member'), $.member_signature),
            seq('override', optional($.access_modifier), $.method_or_prop_defn),
            seq('default', optional($.access_modifier), $.method_or_prop_defn),
            seq(optional('static'), 'val', optional('mutable'), optional($.access_modifier), $.identifier, ':', $.type),
            $.additional_constr_defn,
          ),
        )),

    property_or_ident: $ =>
      choice(
        seq(field('instance', $.identifier), '.', field('method', $.identifier)),
        $.identifier,
      ),

    _method_defn: $ =>
      choice(
        seq($.property_or_ident, optional($.type_arguments), field('args', repeat1($._pattern)), '=', $._expression_block),
      ),

    _property_defn: $ =>
      seq(
        $.property_or_ident,
        '=',
        $._expression_block,
        optional(
          seq(
            'with',
            choice(
              'get',
              'set',
              seq('get', ',', 'set'),
              seq('set', ',', 'get'),
            ),
          ),
        ),
      ),

    method_or_prop_defn: $ =>
      prec(3,
        choice(
          seq($.property_or_ident, 'with', scoped($._function_or_value_defns, $._indent, $._dedent)),
          $._method_defn,
          $._property_defn,
        ),
      ),

    additional_constr_defn: $ =>
      seq(
        optional($.access_modifier),
        'new',
        $._pattern,
        '=',
        $._expression_block,
      ),

    // additional_constr_expr: $ =>
    //   prec.left(
    //     choice(
    //       // seq($.additional_constr_expr, ';', $.additional_constr_expr),
    //       // seq($.additional_constr_expr, 'then', $._expression),
    //       // seq('if', $._expression, 'then', $.additional_constr_expr, 'else', $.additional_constr_expr),
    //       // seq('let', $._function_or_value_defn_body, 'in', $.additional_constr_expr), // TODO: "in" is optional?
    //       $.additional_constr_init_expr,
    //     )),
    //
    // additional_constr_init_expr: $ =>
    //   choice(
    //     // seq('{', $.class_inherits_decl, $.field_initializers, '}'),
    //     $._expression,
    //   ),

    class_inherits_decl: $ =>
      prec.left(
        seq(
          'inherit',
          $.type,
          optional($._expression_block),
        ),
      ),

    field_initializer: $ =>
      prec(PREC.SPECIAL_INFIX + 1,
        seq(
          field('field', $.long_identifier),
          token(prec(10000000, '=')),
          field('value', $._expression)),
      ),

    field_initializers: $ =>
      prec(10000000,
        seq(
          $.field_initializer,
          repeat(seq($._newline, $.field_initializer))
        )),

    //
    // Type rules (END)
    //

    //
    // Constants (BEGIN)
    //
    _escape_char: _ => token.immediate(prec(100, /\\["\'ntbrafv]/)),
    _non_escape_char: _ => token.immediate(prec(100, /\\[^"\'ntbrafv]/)),
    // using \u0008 to model \b
    _simple_char_char: _ => token.immediate(/[^\n\t\r\u0008\a\f\v'\\]/),
    _hex_digit_imm: _ => token.immediate(/[0-9a-fA-F]/),
    _digit_char_imm: _ => token.immediate(/[0-9]/),
    _unicodegraph_short: $ => seq(
      token.immediate('\\u'),
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
    ),
    _unicodegraph_long: $ => seq(
      token.immediate('\\U'),
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
      $._hex_digit_imm,
    ),
    _trigraph: $ => seq(token.immediate('\\'), $._digit_char_imm, $._digit_char_imm, $._digit_char_imm),

    _char_char: $ => choice(
      $._simple_char_char,
      $._escape_char,
      $._trigraph,
      $._unicodegraph_short,
    ),

    // note: \n is allowed in strings
    _simple_string_char: _ => token.immediate(prec(1, /[^\t\r\u0008\a\f\v\\"]/)),
    _string_char: $ => choice(
      $._simple_string_char,
      $._escape_char,
      $._non_escape_char,
      $._trigraph,
      $._unicodegraph_short,
      $._unicodegraph_long,
    ),

    _string_elem: $ => choice(
      $._string_char,
      seq('\\', $._string_elem),
    ),
    char: $ => seq('\'', $._char_char, token.immediate('\'')),

    format_string_eval: $ =>
      seq(token.immediate(prec(1000, '{')), $._expression, '}'),

    format_string: $ =>
      seq(
        token(prec(100, '$"')),
        repeat(choice($.format_string_eval, $._string_char)),
        '"',
      ),

    string: $ =>
      choice(
        seq('"', repeat($._string_char), '"'),
        $.format_string,
      ),
    _verbatim_string_char: $ => choice(
      $._simple_string_char,
      $._non_escape_char,
      '\\',
    ),
    verbatim_string: $ => seq('@"', repeat($._verbatim_string_char), token.immediate('"')),
    bytechar: $ => seq('\'', $._char_char, token.immediate('\'B')),
    bytearray: $ => seq('"', repeat($._string_char), token.immediate('"B')),
    verbatim_bytearray: $ => seq('@"', repeat($._verbatim_string_char), token.immediate('"B')),

    format_triple_quoted_string: $ =>
      seq(
        token(prec(100, '$"""')),
        // repeat(choice($.format_string_eval, $._string_char)),
        $._triple_quoted_content,
        '"""',
      ),

    triple_quoted_string: $ =>
      choice(
        seq(
          '"""',
          $._triple_quoted_content,
          '"""'),
        $.format_triple_quoted_string,
      ),

    bool: _ => token(choice('true', 'false')),

    unit: _ => '()',

    const: $ => choice(
      $.sbyte, $.int16, $.int32, $.int64, $.byte, $.uint16, $.uint32, $.int,
      $.nativeint, $.unativeint, $.decimal,
      $.uint64, $.ieee32, $.ieee64, $.bignum, $.char, $.string,
      $.verbatim_string, $.triple_quoted_string, $.bytearray,
      $.verbatim_bytearray, $.bytechar, $.bool, $.unit),

    // Identifiers:
    long_identifier_or_op: $ => prec.right(
      alias(
        choice(
          $.long_identifier,
          seq($.long_identifier, '.', $._identifier_or_op),
          $._identifier_or_op,
        ),
        $.long_identifier),
    ),

    long_identifier: $ =>
      prec.right(seq($.identifier, repeat(seq('.', $.identifier)))),

    _identifier_or_op: $ => choice(
      $.identifier,
      token(prec(1000,
        seq(
          '(',
          choice(
            '?',
            /[!%&*+-./<=>@^|~][!%&*+-./<=>@^|~?]*/,
            '..',
            '.. ..',
          ),
          ')'))),
      seq('(', $.active_pattern_op_name, ')'),
      token.immediate('(*)'),
    ),

    active_pattern_op_name: $ => choice(
      // full pattern
      seq('|', $.identifier, repeat1(seq('|', $.identifier)), '|'),
      // partial pattern
      seq('|', $.identifier, repeat(seq('|', $.identifier)), '|', '_', '|'),
    ),

    _infix_or_prefix_op: _ =>
      choice(
        '+',
        '-',
        '+.',
        '-.',
        '%',
        '&',
        '&&',
      ),

    prefix_op: $ =>
      prec.left(
        choice(
          $._infix_or_prefix_op,
          repeat1('~'),
          /[!][!%&*+-./<>@^|~?]+[!%&*+-./<=>@^|~?]*/,
        )),

    infix_op: $ =>
      prec(PREC.INFIX_OP,
        choice(
          $._infix_or_prefix_op,
          /[-+<>|&^*/%][!%&*+-./<=>@^|~?]*/,
          '||',
          '=',
          '!=',
          ':=',
          '::',
          '$',
          'or',
          '?',
          '<@',
          '<@@',
          '@>',
          '@@>',
          '?',
          '?<-',
        )),

    // Numbers
    _octaldigit_imm: _ => token.immediate(/[0-7]/),
    _bitdigit_imm: _ => token.immediate(/[0-1]/),
    int: $ => seq(/[0-9]/, repeat($._digit_char_imm)),
    xint: $ => choice(
      seq(/0[xX]/, repeat1($._hex_digit_imm)),
      seq(/0[oO]/, repeat1($._octaldigit_imm)),
      seq(/0[bB]/, repeat1($._bitdigit_imm)),
    ),

    sbyte: $ => seq(choice($.int, $.xint), token.immediate('y')),
    byte: $ => seq(choice($.int, $.xint), token.immediate('uy')),
    int16: $ => seq(choice($.int, $.xint), token.immediate('s')),
    uint16: $ => seq(choice($.int, $.xint), token.immediate('us')),
    int32: $ => seq(choice($.int, $.xint), token.immediate('l')),
    uint32: $ => seq(choice($.int, $.xint), token.immediate(choice('ul', 'u'))),
    nativeint: $ => seq(choice($.int, $.xint), token.immediate('n')),
    unativeint: $ => seq(choice($.int, $.xint), token.immediate('un')),
    int64: $ => seq(choice($.int, $.xint), token.immediate('L')),
    uint64: $ => seq(choice($.int, $.xint), token.immediate(choice('UL', 'uL'))),

    ieee32: $ => choice(seq($.float, token.immediate('f')), seq($.xint, token.immediate('lf'))),
    ieee64: $ => seq($.xint, token.immediate('LF')),

    bignum: $ => seq($.int, token.immediate(/[QRZING]/)),
    decimal: $ => seq(choice($.float, $.int), token.immediate(/[Mm]/)),

    float: $ =>
      alias(
        choice(
          seq(
            $.int,
            token.immediate('.'),
            optional($.int)
          ),
          seq(
            $.int,
            optional(seq(token.immediate('.'), $.int)),
            token.immediate(/[eE][+-]?/),
            $.int
          ),
        ), 'float'),

    //
    // Constants (END)
    //
    //
    xml_doc: $ => seq(
      '///',
      alias(token.immediate(/[^\/][^\n\r]*/), $.xml_doc_content)
    ),
    block_comment: $ => seq('(*', $.block_comment_content, token.immediate('*)')),
    line_comment: _ => /\/\/[^\/][^\n\r]*/,

    identifier: _ =>
      token(
        choice(
          /[_\p{XID_Start}][_'\p{XID_Continue}]*/,
          /``([^`\n\r\t])+``/,
        ),
      ),
  },

});

function scoped(rule, indent, dedent) {
  return field('block', seq(indent, rule, dedent));
}
