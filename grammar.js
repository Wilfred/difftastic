// Operator precedence:
// * https://hexdocs.pm/elixir/master/operators.html
// * https://github.com/elixir-lang/elixir/blob/master/lib/elixir/src/elixir_parser.yrl
const PREC = {
  IN_MATCH_OPS: 10,
  WHEN_OP: 20,
  TYPE_OP: 30,
  BAR_OP: 40,
  ASSOC_OP: 50,
  CAPTURE_OP: 60,
  MATCH_OP: 70,
  OR_OPS: 80,
  AND_OPS: 90,
  COMP_OPS: 100,
  REL_OPS: 110,
  ARROW_OPS: 120,
  IN_OPS: 130,
  XOR_OP: 140,
  TERNARY_OP: 150,
  CONCAT_OPS: 160,
  ADD_OPS: 170,
  MULT_OPS: 180,
  POWER_OP: 190,
  UNARY_OPS: 200,
  ACCESS: 205,
  DOT_OP: 210,
  AT_OP: 220,
  CAPTURE_OPERAND: 235,
};

const IN_MATCH_OPS = ["<-", "\\\\"];
const OR_OPS = ["||", "|||", "or"];
const AND_OPS = ["&&", "&&&", "and"];
const COMP_OPS = ["==", "!=", "=~", "===", "!=="];
const REL_OPS = ["<", ">", "<=", ">="];
const ARROW_OPS = ["|>", "<<<", ">>>", "<<~", "~>>", "<~", "~>", "<~>", "<|>"];
const IN_OPS = ["in", "not in"];
const CONCAT_OPS = ["++", "--", "+++", "---", "..", "<>"];
const ADD_OPS = ["+", "-"];
const MULT_OPS = ["*", "/"];
const UNARY_OPS = ["+", "-", "!", "^", "~~~", "not"];

const ALL_OPS = [
  ["->", "when", "::", "|", "=>", "&", "=", "^^^", "//", "**", ".", "@"],
  IN_MATCH_OPS,
  OR_OPS,
  AND_OPS,
  COMP_OPS,
  REL_OPS,
  ARROW_OPS,
  IN_OPS,
  CONCAT_OPS,
  ADD_OPS,
  MULT_OPS,
  UNARY_OPS,
].flat();

// Ignore word literals and "=>" which is not a valid atom
const ATOM_OPERATOR_LITERALS = ALL_OPS.filter(
  (operator) => !/[a-z]/.test(operator) && operator !== "=>"
);

// Note that for keywords we use external scanner (KEYWORD_SPECIAL_LITERAL),
// so it should be kept in sync
const ATOM_SPECIAL_LITERALS = ["...", "%{}", "{}", "%", "<<>>", "..//"];

// Word tokens used directly in the grammar
const RESERVED_WORD_TOKENS = [
  // Operators
  ["and", "in", "not", "or", "when"],
  // Literals
  ["true", "false", "nil"],
  // Other
  ["after", "catch", "do", "else", "end", "fn", "rescue"],
].flat();

const SPECIAL_IDENTIFIERS = [
  "__MODULE__",
  "__DIR__",
  "__ENV__",
  "__CALLER__",
  "__STACKTRACE__",
];

// Numbers

const DIGITS = /[0-9]+/;
const BIN_DIGITS = /[0-1]+/;
const OCT_DIGITS = /[0-7]+/;
const HEX_DIGITS = /[0-9a-fA-F]+/;

const numberDec = sep1(DIGITS, "_");
const numberBin = seq("0b", sep1(BIN_DIGITS, "_"));
const numberOct = seq("0o", sep1(OCT_DIGITS, "_"));
const numberHex = seq("0x", sep1(HEX_DIGITS, "_"));

const integer = choice(numberDec, numberBin, numberOct, numberHex);

const floatScientificPart = seq(/[eE]/, optional(choice("-", "+")), integer);
const float = seq(numberDec, ".", numberDec, optional(floatScientificPart));

const aliasPart = /[A-Z][_a-zA-Z0-9]*/;

module.exports = grammar({
  name: "elixir",

  // TODO describe stuff (also in the separate notes doc add clarification
  // how we use this verbose tokens to avoid needing scanner state)
  externals: ($) => [
    $._quoted_content_i_single,
    $._quoted_content_i_double,
    $._quoted_content_i_heredoc_single,
    $._quoted_content_i_heredoc_double,
    $._quoted_content_i_parenthesis,
    $._quoted_content_i_curly,
    $._quoted_content_i_square,
    $._quoted_content_i_angle,
    $._quoted_content_i_bar,
    $._quoted_content_i_slash,

    $._quoted_content_single,
    $._quoted_content_double,
    $._quoted_content_heredoc_single,
    $._quoted_content_heredoc_double,
    $._quoted_content_parenthesis,
    $._quoted_content_curly,
    $._quoted_content_square,
    $._quoted_content_angle,
    $._quoted_content_bar,
    $._quoted_content_slash,

    $._keyword_special_literal,
    $._atom_start,
    $._keyword_end,

    $._newline_before_do,
    $._newline_before_binary_op,
    // TODO explain this, basically we use newline ignored for newline before comment,
    // as after the comment there is another newline that we then consider as usual (so
    // that comments are skipped when considering newlines) <- this is chaotic need a better one
    $._newline_before_comment,

    // TODO explain this, basically we use this to force unary + and -
    // if there is no spacing before the operand
    $._before_unary_op,

    $._not_in,
  ],

  // TODO include in notes about why using extra for newline before binary op is fine
  // TODO figure out how "\n" helps with the behaviour in
  // [
  //   :a,
  // ]
  // and how it generally works with extras
  extras: ($) => [
    $.comment,
    /\s|\\\n/,
    $._newline_before_binary_op,
    $._newline_before_comment,
    "\n",
  ],

  // TODO check if the parser doesn't compile without each conflict rule,
  // otherwise it means we don't really use it (I think)
  conflicts: ($) => [
    // [$._newline_before_binary_op],
    [$.binary_operator],
    [$.keywords],
    // [$.identifier, $.atom_literal],
    [$._expression, $._local_call_with_arguments],
    [
      $._expression,
      $._local_call_with_arguments,
      $._local_call_without_arguments,
    ],

    [$._remote_call, $._parenthesised_remote_call],

    // stab clause `(x` may be either `(x;y) ->` or `(x, y) ->`
    // [$.block, $._stab_clause_arguments],
    [$.block, $._stab_clause_parentheses_arguments],
    [$.block, $._stab_clause_arguments],

    [$.block, $._stab_clause_arguments_expression],

    // when in stab clause
    [$.binary_operator, $._stab_clause_arguments_expression],

    [$.tuple, $.map],
    [$.tuple, $.map_content],
    [$.operator_identifier, $.stab_clause],
    [$.unary_operator, $.operator_identifier],
    // [$.alias],
    [$.body],
    // [$.block, $._stab_clause_arguments],
    // [$.block, $._stab_clause_parentheses_arguments],
    // [$.block, $._stab_clause_parentheses_arguments],
    [$.after_block],
    [$.rescue_block],
    [$.catch_block],
    [$.else_block],
  ],

  rules: {
    source: ($) =>
      seq(
        optional($._terminator),
        optional(
          seq(sep1($._expression, $._terminator), optional($._terminator))
        )
      ),

    _terminator: ($) =>
      prec.right(choice(seq(repeat("\n"), ";"), repeat1("\n"))),

    _expression: ($) =>
      choice(
        $.block,
        $._identifier,
        $.alias,
        $.integer,
        $.float,
        $.atom,
        $.string,
        $.charlist,
        $.sigil,
        $.list,
        $.tuple,
        $.bitstring,
        $.map,
        $.char,
        $.boolean,
        $.nil,
        $.unary_operator,
        $.binary_operator,
        $.dot,
        $.call,
        $.access_call,
        $.anonymous_function
      ),

    block: ($) =>
      prec(
        PREC.WHEN_OP,
        seq(
          "(",
          seq(
            optional($._terminator),
            optional(
              seq(
                sep1(choice($._expression, $.stab_clause), $._terminator),
                optional($._terminator)
              )
            )
          ),
          ")"
        )
      ),

    _identifier: ($) =>
      choice($.identifier, $.unused_identifier, $.special_identifier),

    // Note: Elixir does not allow uppercase and titlecase letters
    // as a variable starting character, but this regex would match
    // those. This implies we would happily parse those cases, but
    // since they are not valid Elixir it's unlikely to stumble upon
    // them. TODO reword
    // Ref: https://hexdocs.pm/elixir/master/unicode-syntax.html#variables
    // TODO see if we need this in custom scanner in the end, if we do,
    // then we may use the generation script from the original repo instead
    // and make this an external (though I'd check if these custom unicode
    // functions are efficient, does compiler optimise such checks?)
    // identifier: ($) => choice(/[\p{ID_Start}][\p{ID_Continue}]*[?!]?/u, "..."),
    // identifier: ($) => choice(/[\p{Ll}\p{Lm}\p{Lo}\p{Nl}\p{Other_ID_Start}][\p{ID_Continue}]*[?!]?/u, "..."),
    // identifier: ($) => choice(/[\p{Ll}\p{Lm}\p{Lo}\p{Nl}][\p{ID_Continue}]*[?!]?/u, "..."),
    //
    // TODO elaborate, but basically
    //
    // we remove uppercase/titlecase letters from ID_Start as elixir does
    // we remove the subtractions (we cannot express group subtraction in regex),
    //   but it's fine becaues at the time of writing these groups only really subtract
    //   a single character
    //   Unicode.Set.to_utf8_char "[[[:L:][:Nl:][:Other_ID_Start:]] & [[:Pattern_Syntax:][:Pattern_White_Space:]]]"
    // we use hardcoded codepoints for \p{Other_ID_Start} since treesitter/js regexp doesn't
    //   recognise this group
    //
    // Other_ID_Start \u1885\u1886\u2118\u212E\u309B\u309C
    //   (this the list at the time of writing, it's for backward compatibility, see https://unicode.org/reports/tr31/#Backward_Compatibility)
    identifier: ($) =>
      choice(
        /[\p{Ll}\p{Lm}\p{Lo}\p{Nl}\u1885\u1886\u2118\u212E\u309B\u309C][\p{ID_Continue}]*[?!]?/u,
        "..."
      ),

    unused_identifier: ($) => /_[\p{ID_Continue}]*[?!]?/u,

    special_identifier: ($) => choice(...SPECIAL_IDENTIFIERS),

    // We have a separate rule for single-part alias, so that we
    // can use it in the keywords rule
    alias: ($) => choice($._alias_single, $._alias_multi),

    _alias_single: ($) => aliasPart,

    _alias_multi: ($) => token(sep1(aliasPart, /\s*\.\s*/)),

    integer: ($) => token(integer),

    float: ($) => token(float),

    atom: ($) =>
      seq(
        $._atom_start,
        choice(
          alias($._atom_word_literal, $.atom_literal),
          alias($._atom_operator_literal, $.atom_literal),
          alias($._atom_special_literal, $.atom_literal),
          $._quoted_i_double,
          $._quoted_i_single
        )
      ),

    // TODO comment on the unicode groups here
    _atom_word_literal: ($) => /[\p{ID_Start}_][\p{ID_Continue}@]*[?!]?/u,

    _atom_operator_literal: ($) => choice(...ATOM_OPERATOR_LITERALS),

    _atom_special_literal: ($) => choice(...ATOM_SPECIAL_LITERALS),

    // Defines $._quoted_content_i_{name} and $._quoted_content_{name} rules,
    // content with and without interpolation respectively
    ...defineQuoted(`"`, `"`, "double"),
    ...defineQuoted(`'`, `'`, "single"),
    ...defineQuoted(`'''`, `'''`, "heredoc_single"),
    ...defineQuoted(`"""`, `"""`, "heredoc_double"),
    ...defineQuoted(`(`, `)`, "parenthesis"),
    ...defineQuoted(`{`, `}`, "curly"),
    ...defineQuoted(`[`, `]`, "square"),
    ...defineQuoted(`<`, `>`, "angle"),
    ...defineQuoted(`|`, `|`, "bar"),
    ...defineQuoted(`/`, `/`, "slash"),

    string: ($) => choice($._quoted_i_double, $._quoted_i_heredoc_double),

    charlist: ($) => choice($._quoted_i_single, $._quoted_i_heredoc_single),

    interpolation: ($) => seq("#{", $._expression, "}"),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            // Single escaped character
            /[^ux]/,
            // Hex byte
            /x[0-9a-fA-F]{1,2}/,
            /x{[0-9a-fA-F]+}/,
            // Unicode code point
            /u{[0-9a-fA-F]+}/,
            /u[0-9a-fA-F]{4}/
          )
        )
      ),

    sigil: ($) =>
      seq(
        "~",
        choice(
          seq(
            alias(token.immediate(/[a-z]/), $.sigil_name),
            choice(
              $._quoted_i_double,
              $._quoted_i_single,
              $._quoted_i_heredoc_single,
              $._quoted_i_heredoc_double,
              $._quoted_i_parenthesis,
              $._quoted_i_curly,
              $._quoted_i_square,
              $._quoted_i_angle,
              $._quoted_i_bar,
              $._quoted_i_slash
            )
          ),
          seq(
            alias(token.immediate(/[A-Z]/), $.sigil_name),
            choice(
              $._quoted_double,
              $._quoted_single,
              $._quoted_heredoc_single,
              $._quoted_heredoc_double,
              $._quoted_parenthesis,
              $._quoted_curly,
              $._quoted_square,
              $._quoted_angle,
              $._quoted_bar,
              $._quoted_slash
            )
          )
        ),
        optional(alias(token.immediate(/[a-zA-Z]+/), $.sigil_modifiers))
      ),

    unary_operator: ($) =>
      choice(
        unaryOp($, prec, PREC.CAPTURE_OP, "&", $._capture_expression),
        unaryOp($, prec, PREC.UNARY_OPS, choice(...UNARY_OPS)),
        unaryOp($, prec, PREC.AT_OP, "@"),
        // Capture operand like &1 is a special case with higher precedence
        unaryOp($, prec, PREC.CAPTURE_OPERAND, "&", $.integer)
      ),

    _capture_expression: ($) =>
      choice(
        // TODO sholud parenthesised expression be generally used (?)
        // Precedence over block expression
        prec(PREC.WHEN_OP + 1, seq("(", $._expression, ")")),
        $._expression
      ),

    binary_operator: ($) =>
      choice(
        binaryOp($, prec.left, PREC.IN_MATCH_OPS, choice(...IN_MATCH_OPS)),
        binaryOp(
          $,
          prec.right,
          PREC.WHEN_OP,
          "when",
          $._expression,
          choice($._expression, $.keywords)
        ),
        binaryOp($, prec.right, PREC.TYPE_OP, "::"),
        binaryOp(
          $,
          prec.right,
          PREC.BAR_OP,
          "|",
          $._expression,
          choice($._expression, $.keywords)
        ),
        binaryOp($, prec.right, PREC.ASSOC_OP, "=>"),
        binaryOp($, prec.right, PREC.MATCH_OP, "="),
        binaryOp($, prec.left, PREC.OR_OPS, choice(...OR_OPS)),
        binaryOp($, prec.left, PREC.AND_OPS, choice(...AND_OPS)),
        binaryOp($, prec.left, PREC.COMP_OPS, choice(...COMP_OPS)),
        binaryOp($, prec.left, PREC.REL_OPS, choice(...REL_OPS)),
        binaryOp($, prec.left, PREC.ARROW_OPS, choice(...ARROW_OPS)),
        binaryOp($, prec.left, PREC.IN_OPS, choice("in", $._not_in)),
        binaryOp($, prec.left, PREC.XOR_OP, "^^^"),
        binaryOp($, prec.right, PREC.TERNARY_OP, "//"),
        binaryOp($, prec.right, PREC.CONCAT_OPS, choice(...CONCAT_OPS)),
        binaryOp($, prec.left, PREC.ADD_OPS, choice(...ADD_OPS)),
        binaryOp($, prec.left, PREC.MULT_OPS, choice(...MULT_OPS)),
        binaryOp($, prec.left, PREC.POWER_OP, "**"),
        // Operator with arity
        binaryOp(
          $,
          prec.left,
          PREC.MULT_OPS,
          "/",
          $.operator_identifier,
          $.integer
        )
      ),

    operator_identifier: ($) =>
      // Operators with the following changes:
      //   * exclude "=>" since it's not a valid atom/operator identifier anyway (valid only in map)
      // * we exclude // since it's only valid after ..
      // * we remove "-" and "+" since they are both unary and binary

      // We use the same precedence as unary operators, so that a sequence
      // like `& /` is a conflict and is resolved via $.conflicts
      // (could be be either `& / 2` or `& / / 2`)
      choice(
        // Unary operators
        prec(PREC.CAPTURE_OP, "&"),
        prec(PREC.UNARY_OPS, choice(...UNARY_OPS)),
        prec(PREC.AT_OP, "@"),
        // Binary operators
        ...IN_MATCH_OPS,
        "when",
        "::",
        "|",
        "=",
        ...OR_OPS,
        ...AND_OPS,
        ...COMP_OPS,
        ...REL_OPS,
        ...ARROW_OPS,
        "in",
        $._not_in,
        "^^",
        ...CONCAT_OPS,
        ...MULT_OPS,
        "**",
        "->",
        "."
      ),

    dot: ($) =>
      prec(
        PREC.DOT_OP,
        seq(choice($._expression), ".", choice($.alias, $.tuple))
      ),

    keywords: ($) => sep1($.pair, ","),

    pair: ($) => seq($.keyword, $._expression),

    keyword: ($) =>
      seq(
        // Tree-sitter doesn't consider ambiguities within individual
        // tokens (in this case regexps). So both in [a] and [a: 1] it
        // would always parse "a" as the same node (based on whether
        // $.identifier or $.atom_literal) is listed first in the rules.
        // However, since identifiers and alias parts are valid atom
        // literals, we can list them here, in which case the parser will
        // consider all paths and pick the valid one.
        // Also see https://github.com/tree-sitter/tree-sitter/issues/518
        choice(
          alias($._atom_word_literal, $.atom_literal),
          alias($._atom_operator_literal, $.atom_literal),
          alias($._keyword_special_literal, $.atom_literal),
          alias($.identifier, $.atom_literal),
          alias($.unused_identifier, $.atom_literal),
          alias($.special_identifier, $.atom_literal),
          alias($._alias_single, $.atom_literal),
          alias(choice(...RESERVED_WORD_TOKENS), $.atom_literal),
          $._quoted_i_double,
          $._quoted_i_single
        ),
        $._keyword_end
      ),

    list: ($) => seq("[", optional($._items_with_trailing_separator), "]"),

    tuple: ($) => seq("{", optional($._items_with_trailing_separator), "}"),

    bitstring: ($) =>
      seq("<<", optional($._items_with_trailing_separator), ">>"),

    map: ($) => seq("%", optional($.struct), "{", optional($.map_content), "}"),

    struct: ($) =>
      prec.left(
        choice(
          $.alias,
          $.atom,
          $._identifier,
          $.unary_operator,
          $.dot,
          alias($._parenthesised_call, $.call)
        )
      ),

    map_content: ($) => $._items_with_trailing_separator,

    _items_with_trailing_separator: ($) =>
      seq(
        choice(
          seq(sep1($._expression, ","), optional(seq(",", $.keywords))),
          $.keywords
        ),
        optional(",")
      ),

    char: ($) => /\?(.|\\.)/,

    boolean: ($) => choice("true", "false"),

    nil: ($) => "nil",

    call: ($) =>
      choice(
        $._local_call_with_arguments,
        $._parenthesised_local_call_with_arguments,
        $._local_call_without_arguments,
        $._remote_call,
        $._parenthesised_remote_call,
        $._anonymous_call,
        $._call_on_call
      ),

    _parenthesised_call: ($) =>
      choice(
        $._parenthesised_local_call_with_arguments,
        $._parenthesised_remote_call,
        $._anonymous_call,
        $._call_on_call
      ),

    _call_on_call: ($) =>
      prec.left(
        seq(
          alias(
            choice(
              $._parenthesised_local_call_with_arguments,
              $._parenthesised_remote_call,
              $._anonymous_call
            ),
            $.call
          ),
          // arguments in parentheses
          // alias($._local_or_remote_arguments, $.arguments),
          // TODO just make nonimmediate/immediate in the name
          alias($._anonymous_arguments, $.arguments),
          optional(seq(optional($._newline_before_do), $.do_block))
        )
      ),

    _local_call_with_arguments: ($) =>
      // Given `x + y` it can be interpreted either as a binary operator
      // or a call with unary operator. This is an actual ambiguity, so
      // we use dynamic precedence to penalize call
      // prec.dynamic(
      // TODO ideally we would penalize whitespace after unary op,
      // so that x + y is binary op and x +y is unary op, to reflect
      // Elixir ast
      // -1,
      prec.left(
        seq(
          $._identifier,
          alias($._call_arguments, $.arguments),
          // TODO include this in notes:
          // We use external scanner for _newline_before_do because
          // this way we can lookahead through any whitespace
          // (especially newlines). We cannot simply use repeat("\n")
          // and conflict with expression end, because this function
          // rule has left precedence (so that do-end sticks to the outermost
          // call), and thus expression end would always be preferred
          optional(seq(optional($._newline_before_do), $.do_block))
          // optional($.do_block)
        )
        // )
      ),

    _parenthesised_local_call_with_arguments: ($) =>
      // Given `x + y` it can be interpreted either as a binary operator
      // or a call with unary operator. This is an actual ambiguity, so
      // we use dynamic precedence to penalize call
      // prec.dynamic(
      // TODO ideally we would penalize whitespace after unary op,
      // so that x + y is binary op and x +y is unary op, to reflect
      // Elixir ast
      // -1,
      prec.left(
        seq(
          $._identifier,
          alias($._parenthesised_call_arguments, $.arguments),
          // TODO include this in notes:
          // We use external scanner for _newline_before_do because
          // this way we can lookahead through any whitespace
          // (especially newlines). We cannot simply use repeat("\n")
          // and conflict with expression end, because this function
          // rule has left precedence (so that do-end sticks to the outermost
          // call), and thus expression end would always be preferred
          optional(seq(optional($._newline_before_do), $.do_block))
          // optional($.do_block)
        )
        // )
      ),

    _local_call_without_arguments: ($) =>
      // We use lower precedence, so given `fun arg do end`
      // we don't tokenize `arg` as a call

      // we actually need a conflict because of `foo bar do end` vs `foo bar do: 1`
      // prec(-1,
      prec.dynamic(-1, seq($._identifier, $.do_block)),
    // )
    _remote_call: ($) =>
      prec.left(
        seq(
          alias($._remote_dot, $.dot),
          optional(alias($._call_arguments, $.arguments)),
          optional(seq(optional($._newline_before_do), $.do_block))
          // optional($.do_block)
        )
      ),

    _parenthesised_remote_call: ($) =>
      prec.left(
        seq(
          alias($._remote_dot, $.dot),
          alias($._parenthesised_call_arguments, $.arguments),
          optional(seq(optional($._newline_before_do), $.do_block))
          // optional($.do_block)
        )
      ),

    _remote_dot: ($) =>
      prec(
        PREC.DOT_OP,
        seq(
          $._expression,
          ".",
          // TODO can also be string, anything else?
          // compare with the other parser
          // TODO we don't want to support heredoc though
          choice(
            $._identifier,
            alias(choice(...RESERVED_WORD_TOKENS), $.identifier),
            $.operator_identifier,
            alias($._quoted_i_double, $.string),
            alias($._quoted_i_single, $.charlist)
          )
        )
      ),

    _parenthesised_call_arguments: ($) =>
      seq(token.immediate("("), optional($._call_arguments), ")"),

    _anonymous_call: ($) =>
      seq(
        alias($._anonymous_dot, $.dot),
        alias($._anonymous_arguments, $.arguments)
      ),

    _anonymous_dot: ($) => prec(PREC.DOT_OP, seq($._expression, ".")),

    _anonymous_arguments: ($) => seq("(", optional($._call_arguments), ")"),

    _call_arguments: ($) =>
      // Right precedence ensures that `fun1 fun2 x, y` is treated
      // as `fun1(fun2(x, y))` and not `fun1(fun2(x), y)
      prec.right(
        seq(
          choice(
            seq(
              sep1($._expression, ","),
              optional(seq(",", $.keywords, optional(",")))
            ),
            seq($.keywords, optional(","))
          )
        )
      ),

    access_call: ($) =>
      prec(
        PREC.ACCESS,
        seq($._expression, token.immediate("["), $._expression, "]")
      ),

    do_block: ($) =>
      seq(
        sugarBlock($, "do"),
        repeat(
          choice($.after_block, $.rescue_block, $.catch_block, $.else_block)
        ),
        "end"
      ),

    after_block: ($) => sugarBlock($, "after"),

    rescue_block: ($) => sugarBlock($, "rescue"),

    catch_block: ($) => sugarBlock($, "catch"),

    else_block: ($) => sugarBlock($, "else"),

    // Specify right precedence, so that we consume as much as we can
    stab_clause: ($) =>
      prec.right(seq(optional($._stab_clause_left), "->", optional($.body))),

    _stab_clause_left: ($) =>
      choice(
        // Note the first option has higher precedence, TODO clarify
        alias($._stab_clause_parentheses_arguments, $.arguments),
        // TODO naming/cleanup
        alias(
          $._stab_clause_parentheses_arguments_with_guard,
          $.binary_operator
        ),
        alias($._stab_clause_arguments, $.arguments),
        alias($._stab_clause_arguments_with_guard, $.binary_operator)
      ),

    _stab_clause_parentheses_arguments: ($) =>
      // `(1) ->` may be interpreted either as block argument
      // or argument in parentheses and we use dynamic precedence
      // to favour the latter
      prec(
        PREC.WHEN_OP,
        prec.dynamic(1, seq("(", optional($._stab_clause_arguments), ")"))
      ),
    _stab_clause_parentheses_arguments_with_guard: ($) =>
      seq(
        alias($._stab_clause_parentheses_arguments, $.arguments),
        "when",
        $._expression
      ),

    _stab_clause_arguments_with_guard: ($) =>
      // `a when b ->` may be interpted either such that `a when b` is an argument
      // or a guard binary operator with argument `a` and right operand `b`,
      // we use dynamic precedence to favour the latter
      prec.dynamic(
        1,
        seq(alias($._stab_clause_arguments, $.arguments), "when", $._expression)
      ),
    _stab_clause_arguments: ($) =>
      // TODO this is a variant of _items_with_trailing_separator, cleanup
      choice(
        seq(
          sep1($._stab_clause_arguments_expression, ","),
          optional(seq(",", $.keywords))
        ),
        $.keywords
      ),

    _stab_clause_arguments_expression: ($) =>
      // Note here we use the same precedence as when operator,
      // so we get a conflict and resolve it dynamically
      prec(PREC.WHEN_OP, $._expression),
    body: ($) =>
      seq(
        choice(
          seq($._terminator, sep($._expression, $._terminator)),
          sep1($._expression, $._terminator)
        ),
        optional($._terminator)
      ),

    anonymous_function: ($) =>
      seq(
        "fn",
        optional($._terminator),
        sep1($.stab_clause, $._terminator),
        "end"
      ),

    // A comment may be anywhere, we give it a lower precedence,
    // so it doesn't intercept sequences such as interpolation
    comment: ($) => token(prec(-1, seq("#", /.*/))),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function unaryOp($, assoc, precedence, operator, right = null) {
  return assoc(
    precedence,
    // TODO clarify, we use lower precedence, so given `x + y`,
    // which can be interpreted as either `x + y` or `x(+y)`
    // we favour the former. The only exception is when
    // _before_unary_op matches which forces the latter interpretation
    // in case like `x +y`
    prec.dynamic(
      -1,
      seq(
        optional($._before_unary_op),
        field("operator", operator),
        right || $._expression
      )
    )
  );
}

function binaryOp($, assoc, precedence, operator, left = null, right = null) {
  return assoc(
    precedence,
    seq(
      field("left", left || $._expression),
      field("operator", operator),
      field("right", right || $._expression)
    )
  );
}

function sugarBlock($, start) {
  return seq(
    start,
    optional($._terminator),
    optional(
      choice(
        sep1(choice($.stab_clause), $._terminator),
        seq(sep1(choice($._expression), $._terminator), optional($._terminator))
      )
    )
  );
}

function defineQuoted(start, end, name) {
  return {
    [`_quoted_i_${name}`]: ($) =>
      seq(
        start,
        repeat(
          choice(
            // TODO rename the extenrals to _content
            alias($[`_quoted_content_i_${name}`], $.string_content),
            $.interpolation,
            $.escape_sequence
          )
        ),
        end
      ),

    [`_quoted_${name}`]: ($) =>
      seq(
        start,
        repeat(
          choice(
            // TODO rename the extenrals to _content
            alias($[`_quoted_content_${name}`], $.string_content),
            // It's always possible to escape the end delimiter
            $.escape_sequence
          )
        ),
        end
      ),
  };
}
