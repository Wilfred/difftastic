"use strict";
/*
 * MIT License
 *
 * Copyright (c) 2021 alex-pinkus
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
const PRECS = {
  multiplication: 11,
  addition: 10,
  infix_operations: 9,
  nil_coalescing: 8,
  check: 7,
  prefix_operations: 7,
  comparison: 6,
  postfix_operations: 6,
  equality: 5,
  conjunction: 4,
  disjunction: 3,
  block: 2,
  loop: 1,
  keypath: 1,
  control_transfer: 0,
  as: -1,
  tuple: -1,
  if: -1,
  switch: -1,
  do: -1,
  fully_open_range: -1,
  range: -1,
  navigation: -1,
  expr: -1,
  ty: -1,
  call: -2,
  ternary: -2,
  try: -2,
  call_suffix: -2,
  range_suffix: -2,
  ternary_binary_suffix: -2,
  await: -2,
  assignment: -3,
  comment: -3,
  lambda: -3,
};
const DEC_DIGITS = token(sep1(/[0-9]+/, /_+/));
const HEX_DIGITS = token(sep1(/[0-9a-fA-F]+/, /_+/));
const OCT_DIGITS = token(sep1(/[0-7]+/, /_+/));
const BIN_DIGITS = token(sep1(/[01]+/, /_+/));
const REAL_EXPONENT = token(seq(/[eE]/, optional(/[+-]/), DEC_DIGITS));

var LEXICAL_IDENTIFIER;

if (tree_sitter_version_supports_emoji()) {
  LEXICAL_IDENTIFIER =
    /[_\p{XID_Start}\p{Emoji}&&[^0-9#*]](\p{EMod}|\x{FE0F}\x{20E3}?)?([_\p{XID_Continue}\p{Emoji}\x{200D}](\p{EMod}|\x{FE0F}\x{20E3}?)?)*/;
} else {
  LEXICAL_IDENTIFIER = /[_\p{XID_Start}][_\p{XID_Continue}]*/;
}

const CUSTOM_OPERATORS = token(
  choice(
    // https://docs.swift.org/swift-book/ReferenceManual/LexicalStructure.html#ID418
    // This supports a subset of the operators that Swift does but I'm really not concerned about the esoteric ones.
    // Someone who wants unicode support can add it. What this does do is:
    // * Avoid the reserved operators by saying that certain characters are only available if you don't start with them.
    // * Entirely forbid `<` as the last char because it creates ambiguity with type arguments
    /[\\<>&?=][\/=\-+!*%<>&|^?~\.]*[\/=\-+!*%>&|^?~]+/,
    /[\-+!*%|^~]+[\/=\-+!*%<>&|^?~]*[\/=\-+!*%>&|^?~]+/,
    /[\-+!*%|^~\.]+[\/=\-+!*%<>&|^?~\.]*[\/=\-+!*%>&|^?~\.]+/,
    /[\/]+[=\-+!*%<>&|^?~]*[=\-+!*%>&|^?~]+/,
    /[\/]+[=\-+!*%<>&|^?~\.]*[=\-+!*%>&|^?~\.]+/
  )
);
// XXX need custom scanner for:
// * Custom operators and `<` for type arguments
module.exports = grammar({
  name: "swift",
  conflicts: ($) => [
    // @Type(... could either be an annotation constructor invocation or an annotated expression
    [$.attribute],
    // Is `foo { ... }` a constructor invocation or function invocation?
    [$._simple_user_type, $._expression],
    // To support nested types A.B not being interpreted as `(navigation_expression ... (type_identifier)) (navigation_suffix)`
    [$.user_type],
    // How to tell the difference between Foo.bar(with:and:), and Foo.bar(with: smth, and: other)? You need GLR
    [$.value_argument],
    // { (foo, bar) ...
    [$._expression, $.lambda_parameter],
    [$._primary_expression, $.lambda_parameter],
    // (start: start, end: end)
    [$._tuple_type_item_identifier, $.tuple_expression],
    // After a `{` in a function or switch context, it's ambigous whether we're starting a set of local statements or
    // applying some modifiers to a capture or pattern.
    [$.modifiers],
    // Custom operators get weird special handling for `<` characters in silly stuff like `func =<<<<T>(...)`
    [$.custom_operator],
    [$._prefix_unary_operator, $._referenceable_operator],
    // `+(...)` is ambigously either "call the function produced by a reference to the operator `+`" or "use the unary
    // operator `+` on the result of the parenthetical expression."
    [$._additive_operator, $._prefix_unary_operator],
    // `{ [self, b, c] ...` could be a capture list or an array literal depending on what else happens.
    [$.capture_list_item, $.self_expression],
    [$.capture_list_item, $._expression],
    [$.capture_list_item, $._expression, $._simple_user_type],
    [$._primary_expression, $.capture_list_item],
    // a ? b : c () could be calling c(), or it could be calling a function that's produced by the result of
    // `(a ? b : c)`. We have a small hack to force it to be the former of these by intentionally introducing a
    // conflict.
    [$.call_suffix, $.expr_hack_at_ternary_binary_call_suffix],
    // try {expression} is a bit magic and applies quite broadly: `try foo()` and `try foo { }` show that this is right
    // associative, and `try foo ? bar() : baz` even more so. But it doesn't always win: something like
    // `if try foo { } ...` should award its braces to the `if`. In order to make this actually happen, we need to parse
    // all the options and pick the best one that doesn't error out.
    [$.try_expression, $._unary_expression],
    [$.try_expression, $._expression],
    // await {expression} has the same special cases as `try`.
    [$.await_expression, $._unary_expression],
    [$.await_expression, $._expression],
    // In a computed property, when you see an @attribute, it's not yet clear if that's going to be for a
    // locally-declared class or a getter / setter specifier.
    [
      $._local_property_declaration,
      $._local_typealias_declaration,
      $._local_function_declaration,
      $._local_class_declaration,
      $.computed_getter,
      $.computed_modify,
      $.computed_setter,
    ],
    // In a lambda literal's capture list, same problem with class attributes vs capture specifier attributes.
    [
      $.capture_list,
      $._local_property_declaration,
      $._local_typealias_declaration,
      $._local_function_declaration,
      $._local_class_declaration,
    ],
    // The `class` modifier is legal in many of the same positions that a class declaration itself would be.
    [$._bodyless_function_declaration, $.property_modifier],
    [$._local_class_declaration, $.modifiers],
  ],
  extras: ($) => [
    $.comment,
    $.multiline_comment,
    $.directive,
    $.diagnostic,
    /\s+/, // Whitespace
  ],
  externals: ($) => [
    // Comments and raw strings are parsed in a custom scanner because they require us to carry forward state to
    // maintain symmetry. For instance, parsing a multiline comment requires us to increment a counter whenever we see
    // `/*`, and decrement it whenever we see `*/`. A standard grammar would only be able to exit the comment at the
    // first `*/` (like C does). Similarly, when you start a string with `##"`, you're required to include the same
    // number of `#` symbols to end it.
    $.multiline_comment,
    $.raw_str_part,
    $.raw_str_continuing_indicator,
    $.raw_str_end_part,
    // Because Swift doesn't have explicit semicolons, we also do some whitespace handling in a custom scanner. Line
    // breaks are _sometimes_ meaningful as the end of a statement: try to write `let foo: Foo let bar: Bar`, for
    // instance and the compiler will complain, but add either a newline or a semicolon and it's fine. We borrow the
    // idea from the Kotlin grammar that a newline is sometimes a "semicolon". By including `\n` in both `_semi` and
    // an anonymous `whitespace` extras, we _should_ be able to let the parser decide if a newline is meaningful. If the
    // parser sees something like `foo.bar(1\n)`, it knows that a "semicolon" would not be valid there, so it parses
    // that as whitespace. On the other hand, `let foo: Foo\n let bar: Bar` has a meaningful newline.
    // Unfortunately, we can't simply stop at that. There are some expressions and statements that remain valid if you
    // end them early, but are expected to be parsed across multiple lines. One particular nefarious example is a
    // function declaration, where you might have something like `func foo<A>(args: A) -> Foo throws where A: Hashable`.
    // This would still be a valid declaration even if it ended after the `)`, the `Foo`, or the `throws`, so a grammar
    // that simply interprets a newline as "sometimes a semi" would parse those incorrectly.
    // To solve that case, our custom scanner must do a bit of extra lookahead itself. If we're about to generate a
    // `_semi`, we advance a bit further to see if the next non-whitespace token would be one of these other operators.
    // If so, we ignore the `_semi` and just produce the operator; if not, we produce the `_semi` and let the rest of
    // the grammar sort it out. This isn't perfect, but it works well enough most of the time.
    $._semi,
    // Every one of the below operators will suppress a `_semi` if we encounter it after a newline.
    $._arrow_operator_custom,
    $._dot_custom,
    $._three_dot_operator_custom,
    $._open_ended_range_operator_custom,
    $._conjunction_operator_custom,
    $._disjunction_operator_custom,
    $._nil_coalescing_operator_custom,
    $._eq_custom,
    $._eq_eq_custom,
    $._plus_then_ws,
    $._minus_then_ws,
    $.bang,
    $._throws_keyword,
    $._rethrows_keyword,
    $.default_keyword,
    $.where_keyword,
    $["else"],
    $.catch_keyword,
    $._as_custom,
    $._as_quest_custom,
    $._as_bang_custom,
    $._async_keyword_custom,
  ],
  inline: ($) => [$._locally_permitted_modifiers],
  rules: {
    ////////////////////////////////
    // File Structure
    ////////////////////////////////
    source_file: ($) =>
      seq(
        optional($.shebang_line),
        repeat(seq($._top_level_statement, $._semi))
      ),
    shebang_line: ($) => seq("#!", /[^\r\n]*/),
    ////////////////////////////////
    // Lexical Structure - https://docs.swift.org/swift-book/ReferenceManual/LexicalStructure.html
    ////////////////////////////////
    comment: ($) => token(prec(PRECS.comment, seq("//", /.*/))),
    // Identifiers
    simple_identifier: ($) =>
      choice(
        LEXICAL_IDENTIFIER,
        /`[^\r\n` ]*`/,
        /\$[0-9]+/,
        token(seq("$", LEXICAL_IDENTIFIER))
      ),
    identifier: ($) => sep1($.simple_identifier, $._dot),
    // Literals
    _basic_literal: ($) =>
      choice(
        $.integer_literal,
        $.hex_literal,
        $.oct_literal,
        $.bin_literal,
        $.real_literal,
        $.boolean_literal,
        $._string_literal,
        "nil"
      ),
    // TODO: Hex exponents
    real_literal: ($) =>
      token(
        choice(
          seq(DEC_DIGITS, REAL_EXPONENT),
          seq(optional(DEC_DIGITS), ".", DEC_DIGITS, optional(REAL_EXPONENT))
        )
      ),
    integer_literal: ($) => token(seq(optional(/[1-9]/), DEC_DIGITS)),
    hex_literal: ($) => token(seq("0", /[xX]/, HEX_DIGITS)),
    oct_literal: ($) => token(seq("0", /[oO]/, OCT_DIGITS)),
    bin_literal: ($) => token(seq("0", /[bB]/, BIN_DIGITS)),
    boolean_literal: ($) => choice("true", "false"),
    // String literals
    _string_literal: ($) =>
      choice(
        $.line_string_literal,
        $.multi_line_string_literal,
        $.raw_string_literal
      ),
    line_string_literal: ($) =>
      seq(
        '"',
        repeat(choice(field("text", $._line_string_content), $._interpolation)),
        '"'
      ),
    _line_string_content: ($) => choice($.line_str_text, $.str_escaped_char),
    line_str_text: ($) => /[^\\"]+/,
    str_escaped_char: ($) =>
      choice($._escaped_identifier, $._uni_character_literal),
    _uni_character_literal: ($) => seq("\\", "u", /\{[0-9a-fA-F]+\}/),
    multi_line_string_literal: ($) =>
      seq(
        '"""',
        repeat(
          choice(field("text", $._multi_line_string_content), $._interpolation)
        ),
        '"""'
      ),
    raw_string_literal: ($) =>
      seq(
        repeat(
          seq(
            field("text", $.raw_str_part),
            field("interpolation", $.raw_str_interpolation),
            optional($.raw_str_continuing_indicator)
          )
        ),
        field("text", $.raw_str_end_part)
      ),
    raw_str_interpolation: ($) =>
      seq($.raw_str_interpolation_start, $._interpolation_contents, ")"),
    raw_str_interpolation_start: ($) => /\\#*\(/,
    _multi_line_string_content: ($) =>
      choice($.multi_line_str_text, $.str_escaped_char, '"'),
    _interpolation: ($) => seq("\\(", $._interpolation_contents, ")"),
    _interpolation_contents: ($) =>
      sep1(
        field(
          "interpolation",
          alias($.value_argument, $.interpolated_expression)
        ),
        ","
      ),
    _escaped_identifier: ($) => /\\[0\\tnr"'\n]/,
    multi_line_str_text: ($) => /[^\\"]+/,
    ////////////////////////////////
    // Types - https://docs.swift.org/swift-book/ReferenceManual/Types.html
    ////////////////////////////////
    type_annotation: ($) =>
      seq(":", field("type", $._possibly_implicitly_unwrapped_type)),
    _possibly_implicitly_unwrapped_type: ($) =>
      seq($._type, optional(token.immediate("!"))),
    _type: ($) =>
      prec.right(
        PRECS.ty,
        seq(optional($.type_modifiers), field("name", $._unannotated_type))
      ),
    _unannotated_type: ($) =>
      prec.right(
        PRECS.ty,
        choice(
          $.user_type,
          $.tuple_type,
          $.function_type,
          $.array_type,
          $.dictionary_type,
          $.optional_type,
          $.metatype,
          $.opaque_type,
          $.protocol_composition_type
        )
      ),
    // The grammar just calls this whole thing a `type-identifier` but that's a bit confusing.
    user_type: ($) => sep1($._simple_user_type, $._dot),
    _simple_user_type: ($) =>
      prec.right(
        PRECS.ty,
        seq(
          alias($.simple_identifier, $.type_identifier),
          optional($.type_arguments)
        )
      ),
    tuple_type: ($) =>
      seq("(", optional(sep1(field("element", $.tuple_type_item), ",")), ")"),
    tuple_type_item: ($) =>
      prec(
        PRECS.expr,
        seq(
          optional($._tuple_type_item_identifier),
          optional($.parameter_modifiers),
          field("type", $._type)
        )
      ),
    _tuple_type_item_identifier: ($) =>
      prec(
        PRECS.expr,
        seq(
          optional($.wildcard_pattern),
          field("name", $.simple_identifier),
          ":"
        )
      ),
    function_type: ($) =>
      seq(
        field("params", $.tuple_type),
        optional($._async_keyword),
        optional($.throws),
        $._arrow_operator,
        field("return_type", $._type)
      ),
    array_type: ($) => seq("[", field("element", $._type), "]"),
    dictionary_type: ($) =>
      seq("[", field("key", $._type), ":", field("value", $._type), "]"),
    optional_type: ($) =>
      prec.left(
        seq(
          field(
            "wrapped",
            choice($.user_type, $.tuple_type, $.array_type, $.dictionary_type)
          ),
          repeat1(alias($._immediate_quest, "?"))
        )
      ),
    metatype: ($) =>
      prec.left(seq($._unannotated_type, ".", choice("Type", "Protocol"))),
    _quest: ($) => "?",
    _immediate_quest: ($) => token.immediate("?"),
    opaque_type: ($) => seq("some", $.user_type),
    protocol_composition_type: ($) =>
      prec.right(
        seq(
          $._unannotated_type,
          repeat1(seq("&", prec.right($._unannotated_type)))
        )
      ),
    ////////////////////////////////
    // Expressions - https://docs.swift.org/swift-book/ReferenceManual/Expressions.html
    ////////////////////////////////
    _expression: ($) =>
      prec(
        PRECS.expr,
        choice(
          $.simple_identifier,
          $._unary_expression,
          $._binary_expression,
          $.ternary_expression,
          $._primary_expression,
          $.assignment,
          seq($._expression, alias($._immediate_quest, "?")),
          alias("async", $.simple_identifier)
        )
      ),
    // Unary expressions
    _unary_expression: ($) =>
      choice(
        $.postfix_expression,
        $.call_expression,
        $.constructor_expression,
        $.navigation_expression,
        $.prefix_expression,
        $.as_expression,
        $.selector_expression,
        $.open_start_range_expression,
        $.open_end_range_expression
      ),
    postfix_expression: ($) =>
      prec.left(
        PRECS.postfix_operations,
        seq(
          field("target", $._expression),
          field("operation", $._postfix_unary_operator)
        )
      ),
    constructor_expression: ($) =>
      prec(
        PRECS.call,
        seq(
          field(
            "constructed_type",
            choice($.array_type, $.dictionary_type, $.user_type)
          ),
          $.constructor_suffix
        )
      ),
    navigation_expression: ($) =>
      prec.left(
        PRECS.navigation,
        seq(
          field("target", choice($._navigable_type_expression, $._expression)),
          field("suffix", $.navigation_suffix)
        )
      ),
    _navigable_type_expression: ($) =>
      choice($.user_type, $.array_type, $.dictionary_type),
    open_start_range_expression: ($) =>
      prec.right(
        PRECS.range,
        seq(
          $._range_operator,
          prec.right(PRECS.range_suffix, field("end", $._expression))
        )
      ),
    _range_operator: ($) =>
      choice($._open_ended_range_operator, $._three_dot_operator),
    open_end_range_expression: ($) =>
      prec.right(
        PRECS.range,
        seq(field("start", $._expression), $._three_dot_operator)
      ),
    prefix_expression: ($) =>
      prec.left(
        PRECS.prefix_operations,
        seq(
          field("operation", $._prefix_unary_operator),
          field("target", $._expression)
        )
      ),
    as_expression: ($) =>
      prec.left(
        PRECS.as,
        seq(field("expr", $._expression), $.as_operator, field("type", $._type))
      ),
    selector_expression: ($) =>
      seq(
        "#selector",
        "(",
        optional(choice("getter:", "setter:")),
        $._expression,
        ")"
      ),
    // Binary expressions
    _binary_expression: ($) =>
      choice(
        $.multiplicative_expression,
        $.additive_expression,
        $.range_expression,
        $.infix_expression,
        $.nil_coalescing_expression,
        $.check_expression,
        $.equality_expression,
        $.comparison_expression,
        $.conjunction_expression,
        $.disjunction_expression,
        $.bitwise_operation
      ),
    multiplicative_expression: ($) =>
      prec.left(
        PRECS.multiplication,
        seq(
          field("lhs", $._expression),
          field("op", $._multiplicative_operator),
          field("rhs", $._expression)
        )
      ),
    additive_expression: ($) =>
      prec.left(
        PRECS.addition,
        seq(
          field("lhs", $._expression),
          field("op", $._additive_operator),
          field("rhs", $._expression)
        )
      ),
    range_expression: ($) =>
      prec.right(
        PRECS.range,
        seq(
          field("start", $._expression),
          field("op", $._range_operator),
          field("end", $._expression)
        )
      ),
    infix_expression: ($) =>
      prec.left(
        PRECS.infix_operations,
        seq(
          field("lhs", $._expression),
          field("op", $.custom_operator),
          field("rhs", $._expression)
        )
      ),
    nil_coalescing_expression: ($) =>
      prec.right(
        PRECS.nil_coalescing,
        seq(
          field("value", $._expression),
          $._nil_coalescing_operator,
          field("if_nil", $._expression)
        )
      ),
    check_expression: ($) =>
      prec.left(
        PRECS.check,
        seq(
          field("target", $._expression),
          field("op", $._is_operator),
          field("type", $._type)
        )
      ),
    comparison_expression: ($) =>
      prec.left(
        seq(
          field("lhs", $._expression),
          field("op", $._comparison_operator),
          field("rhs", $._expression)
        )
      ),
    equality_expression: ($) =>
      prec.left(
        PRECS.equality,
        seq(
          field("lhs", $._expression),
          field("op", $._equality_operator),
          field("rhs", $._expression)
        )
      ),
    conjunction_expression: ($) =>
      prec.left(
        PRECS.conjunction,
        seq(
          field("lhs", $._expression),
          field("op", $._conjunction_operator),
          prec.left(
            PRECS.ternary_binary_suffix,
            field(
              "rhs",
              choice(
                $._expression,
                alias($.expr_hack_at_ternary_binary_call, $.call_expression)
              )
            )
          )
        )
      ),
    disjunction_expression: ($) =>
      prec.left(
        PRECS.disjunction,
        seq(
          field("lhs", $._expression),
          field("op", $._disjunction_operator),
          field("rhs", $._expression)
        )
      ),
    bitwise_operation: ($) =>
      prec.left(
        seq(
          field("lhs", $._expression),
          field("op", $._bitwise_binary_operator),
          field("rhs", $._expression)
        )
      ),
    custom_operator: ($) => seq(CUSTOM_OPERATORS, optional("<")),
    // Suffixes
    navigation_suffix: ($) =>
      seq(
        $._dot,
        field("suffix", choice($.simple_identifier, $.integer_literal))
      ),
    call_suffix: ($) =>
      prec(
        PRECS.call_suffix,
        seq(
          choice(
            $.value_arguments,
            sep1($.lambda_literal, seq(field("name", $.simple_identifier), ":"))
          )
        )
      ),
    constructor_suffix: ($) =>
      prec(
        PRECS.call_suffix,
        seq(
          choice(
            alias($._constructor_value_arguments, $.value_arguments),
            $.lambda_literal
          )
        )
      ),
    _constructor_value_arguments: ($) =>
      seq("(", optional(sep1($.value_argument, ",")), ")"),
    type_arguments: ($) => prec.left(seq("<", sep1($._type, ","), ">")),
    value_arguments: ($) =>
      seq(
        choice(
          seq("(", optional(sep1($.value_argument, ",")), ")"),
          seq("[", optional(sep1($.value_argument, ",")), "]")
        )
      ),
    value_argument: ($) =>
      prec.left(
        seq(
          optional($.type_modifiers),
          choice(
            repeat1(
              seq(field("reference_specifier", $.simple_identifier), ":")
            ),
            seq(
              optional(
                seq(
                  field(
                    "name",
                    choice(
                      $.simple_identifier,
                      alias("async", $.simple_identifier)
                    )
                  ),
                  ":"
                )
              ),
              field("value", $._expression)
            )
          )
        )
      ),
    try_expression: ($) =>
      prec.right(
        PRECS["try"],
        seq(
          $._try_operator,
          field(
            "expr",
            choice(
              // Prefer direct calls, e.g. `try foo()`, over indirect like `try a ? b() : c`. This allows us to have
              // left associativity for the direct calls, which is technically wrong but is the only way to resolve the
              // ambiguity of `if foo { ... }` in the correct direction.
              prec.right(-2, $._expression),
              prec.left(0, $._binary_expression),
              prec.left(0, $.call_expression),
              // Similarly special case the ternary expression, where `try` may come earlier than it is actually needed.
              // When the parser just encounters some identifier after a `try`, it should prefer the `call_expression` (so
              // this should be lower in priority than that), but when we encounter an ambiguous expression that might be
              // either `try (foo() ? ...)` or `(try foo()) ? ...`, we should prefer the former. We accomplish that by
              // giving it a _static precedence_ of -1 but a _dynamic precedence_ of 1.
              prec.dynamic(1, prec.left(-1, $.ternary_expression))
            )
          )
        )
      ),
    await_expression: ($) =>
      prec.right(
        PRECS.await,
        seq(
          $._await_operator,
          field(
            "expr",
            choice(
              // Prefer direct calls over indirect (same as with `try`).
              prec.right(-2, $._expression),
              prec.left(0, $.call_expression),
              // Special case ternary to `await` the whole thing (same as with `try`).
              prec.dynamic(1, prec.left(-1, $.ternary_expression))
            )
          )
        )
      ),
    _await_operator: ($) => "await",
    ternary_expression: ($) =>
      prec.right(
        PRECS.ternary,
        seq(
          field("condition", $._expression),
          $._quest,
          field("if_true", $._expression),
          ":",
          prec.left(
            PRECS.ternary_binary_suffix,
            field(
              "if_false",
              choice(
                $._expression,
                alias($.expr_hack_at_ternary_binary_call, $.call_expression)
              )
            )
          )
        )
      ),
    expr_hack_at_ternary_binary_call: ($) =>
      seq(
        $._expression,
        alias($.expr_hack_at_ternary_binary_call_suffix, $.call_suffix)
      ),
    expr_hack_at_ternary_binary_call_suffix: ($) =>
      prec(PRECS.call_suffix, $.value_arguments),
    call_expression: ($) => prec(PRECS.call, seq($._expression, $.call_suffix)),
    _primary_expression: ($) =>
      choice(
        $.tuple_expression,
        $._basic_literal,
        $.lambda_literal,
        $._special_literal,
        $._playground_literal,
        $.array_literal,
        $.dictionary_literal,
        $.self_expression,
        $.super_expression,
        $.try_expression,
        $.await_expression,
        $._referenceable_operator,
        $.key_path_expression,
        $.key_path_string_expression,
        prec.right(
          PRECS.fully_open_range,
          alias($._three_dot_operator, $.fully_open_range)
        )
      ),
    tuple_expression: ($) =>
      prec.right(
        PRECS.tuple,
        seq(
          "(",
          sep1(
            seq(
              optional(seq(field("name", $.simple_identifier), ":")),
              field("value", $._expression)
            ),
            ","
          ),
          ")"
        )
      ),
    array_literal: ($) =>
      seq(
        "[",
        optional(sep1(field("element", $._expression), ",")),
        optional(","),
        "]"
      ),
    dictionary_literal: ($) =>
      seq(
        "[",
        choice(":", sep1($._dictionary_literal_item, ",")),
        optional(","),
        "]"
      ),
    _dictionary_literal_item: ($) =>
      seq(field("key", $._expression), ":", field("value", $._expression)),
    _special_literal: ($) =>
      choice(
        "#file",
        "#fileID",
        "#filePath",
        "#line",
        "#column",
        "#function",
        "#dsohandle"
      ),
    _playground_literal: ($) =>
      seq(
        choice("#colorLiteral", "#fileLiteral", "#imageLiteral"),
        "(",
        sep1(seq($.simple_identifier, ":", $._expression), ","),
        ")"
      ),
    lambda_literal: ($) =>
      prec.left(
        PRECS.lambda,
        seq(
          "{",
          prec(PRECS.expr, optional(field("captures", $.capture_list))),
          optional(seq(optional(field("type", $.lambda_function_type)), "in")),
          optional($.statements),
          "}"
        )
      ),
    capture_list: ($) =>
      seq(repeat($.attribute), "[", sep1($.capture_list_item, ","), "]"),
    capture_list_item: ($) =>
      choice(
        field("name", $.self_expression),
        prec(
          PRECS.expr,
          seq(
            optional($.ownership_modifier),
            field("name", $.simple_identifier),
            optional(seq($._equal_sign, field("value", $._expression)))
          )
        )
      ),
    lambda_function_type: ($) =>
      prec(
        PRECS.expr,
        seq(
          choice(
            $.lambda_function_type_parameters,
            seq("(", optional($.lambda_function_type_parameters), ")")
          ),
          optional($._async_keyword),
          optional($.throws),
          optional(
            seq(
              $._arrow_operator,
              field("return_type", $._possibly_implicitly_unwrapped_type)
            )
          )
        )
      ),
    lambda_function_type_parameters: ($) => sep1($.lambda_parameter, ","),
    lambda_parameter: ($) =>
      seq(
        optional($.attribute),
        choice(
          $.self_expression,
          prec(PRECS.expr, field("name", $.simple_identifier)),
          prec(
            PRECS.expr,
            seq(
              optional(field("external_name", $.simple_identifier)),
              field("name", $.simple_identifier),
              ":",
              optional($.parameter_modifiers),
              field("type", $._possibly_implicitly_unwrapped_type)
            )
          )
        )
      ),
    self_expression: ($) => "self",
    super_expression: ($) => seq("super"),
    _else_options: ($) => choice($._block, $.if_statement),
    if_statement: ($) =>
      prec.right(
        PRECS["if"],
        seq(
          "if",
          sep1(field("condition", $._if_condition_sequence_item), ","),
          $._block,
          optional(seq($["else"], $._else_options))
        )
      ),
    _if_condition_sequence_item: ($) =>
      choice($._if_let_binding, $._expression, $.availability_condition),
    _if_let_binding: ($) =>
      seq($._direct_or_indirect_binding, $._equal_sign, $._expression),
    guard_statement: ($) =>
      prec.right(
        PRECS["if"],
        seq(
          "guard",
          sep1(field("condition", $._if_condition_sequence_item), ","),
          $["else"],
          $._block
        )
      ),
    switch_statement: ($) =>
      prec.right(
        PRECS["switch"],
        seq(
          "switch",
          field("expr", $._expression),
          "{",
          repeat($.switch_entry),
          "}"
        )
      ),
    switch_entry: ($) =>
      seq(
        optional($.modifiers),
        choice(
          seq(
            "case",
            seq(
              $.switch_pattern,
              optional(seq($.where_keyword, $._expression))
            ),
            repeat(seq(",", $.switch_pattern))
          ),
          $.default_keyword
        ),
        ":",
        $.statements,
        optional("fallthrough")
      ),
    switch_pattern: ($) => generate_pattern_matching_rule($, true, false, true),
    do_statement: ($) =>
      prec.right(PRECS["do"], seq("do", $._block, repeat($.catch_block))),
    catch_block: ($) =>
      seq(
        $.catch_keyword,
        field(
          "error",
          optional(generate_pattern_matching_rule($, true, false))
        ),
        optional($.where_clause),
        $._block
      ),
    where_clause: ($) => prec.left(seq($.where_keyword, $._expression)),
    key_path_expression: ($) =>
      prec.right(
        PRECS.keypath,
        seq(
          "\\",
          optional(
            choice($._simple_user_type, $.array_type, $.dictionary_type)
          ),
          repeat(seq(".", $._key_path_component))
        )
      ),
    key_path_string_expression: ($) =>
      prec.left(seq("#keyPath", "(", $._expression, ")")),
    _key_path_component: ($) =>
      prec.left(
        choice(
          seq($.simple_identifier, repeat($._key_path_postfixes)),
          repeat1($._key_path_postfixes)
        )
      ),
    _key_path_postfixes: ($) =>
      choice(
        "?",
        $.bang,
        "self",
        seq("[", optional(sep1($.value_argument, ",")), "]")
      ),
    _try_operator: ($) => choice("try", "try!", "try?"),
    _assignment_and_operator: ($) => choice("+=", "-=", "*=", "/=", "%=", "="),
    _equality_operator: ($) => choice("!=", "!==", $._eq_eq, "==="),
    _comparison_operator: ($) => choice("<", ">", "<=", ">="),
    _is_operator: ($) => "is",
    _additive_operator: ($) =>
      choice(
        alias($._plus_then_ws, "+"),
        alias($._minus_then_ws, "-"),
        "+",
        "-"
      ),
    _multiplicative_operator: ($) => choice("*", "/", "%"),
    as_operator: ($) => choice($._as, $._as_quest, $._as_bang),
    _prefix_unary_operator: ($) =>
      prec.right(
        choice(
          "++",
          "--",
          "-",
          "+",
          $.bang,
          "&",
          "~",
          $._dot,
          $.custom_operator
        )
      ),
    _bitwise_binary_operator: ($) => choice("&", "|", "^", "<<", ">>"),
    _postfix_unary_operator: ($) => choice("++", "--", $.bang),
    directly_assignable_expression: ($) =>
      choice(
        $.simple_identifier,
        $.navigation_expression,
        $.call_expression,
        $.tuple_expression,
        $.self_expression
      ),
    ////////////////////////////////
    // Statements - https://docs.swift.org/swift-book/ReferenceManual/Statements.html
    ////////////////////////////////
    statements: ($) =>
      prec.left(
        // Left precedence is required in switch statements
        seq(
          $._local_statement,
          repeat(seq($._semi, $._local_statement)),
          optional($._semi)
        )
      ),
    _local_statement: ($) =>
      choice(
        $._expression,
        $._local_declaration,
        $._labeled_statement,
        $.control_transfer_statement
      ),
    _top_level_statement: ($) =>
      choice(
        $._expression,
        $._global_declaration,
        $._labeled_statement,
        $._throw_statement
      ),
    _block: ($) => prec(PRECS.block, seq("{", optional($.statements), "}")),
    _labeled_statement: ($) =>
      seq(
        optional($.statement_label),
        choice(
          $.for_statement,
          $.while_statement,
          $.repeat_while_statement,
          $.do_statement,
          $.if_statement,
          $.guard_statement,
          $.switch_statement
        )
      ),
    statement_label: ($) => token(/[a-zA-Z_][a-zA-Z_0-9]*:/),
    for_statement: ($) =>
      prec(
        PRECS.loop,
        seq(
          "for",
          optional($._try_operator),
          optional($._await_operator),
          field("item", generate_pattern_matching_rule($, true, true, false)),
          optional($.type_annotation),
          "in",
          field("collection", $._expression),
          optional($.where_clause),
          $._block
        )
      ),
    while_statement: ($) =>
      prec(
        PRECS.loop,
        seq(
          "while",
          sep1(field("condition", $._if_condition_sequence_item), ","),
          "{",
          optional($.statements),
          "}"
        )
      ),
    repeat_while_statement: ($) =>
      prec(
        PRECS.loop,
        seq(
          "repeat",
          "{",
          optional($.statements),
          "}",
          "while",
          sep1(field("condition", $._if_condition_sequence_item), ",")
        )
      ),
    control_transfer_statement: ($) =>
      choice(
        prec.right(PRECS.control_transfer, $._throw_statement),
        prec.right(
          PRECS.control_transfer,
          seq(
            $._optionally_valueful_control_keyword,
            field("result", optional($._expression))
          )
        )
      ),
    _throw_statement: ($) => seq($.throw_keyword, $._expression),
    throw_keyword: ($) => "throw",
    _optionally_valueful_control_keyword: ($) =>
      choice("return", "continue", "break", "yield"),
    assignment: ($) =>
      prec.left(
        PRECS.assignment,
        seq(
          field("target", $.directly_assignable_expression),
          field("operator", $._assignment_and_operator),
          field("result", $._expression)
        )
      ),
    availability_condition: ($) =>
      seq("#available", "(", sep1($._availability_argument, ","), ")"),
    _availability_argument: ($) =>
      choice(seq($.identifier, sep1($.integer_literal, ".")), "*"),
    ////////////////////////////////
    // Declarations - https://docs.swift.org/swift-book/ReferenceManual/Declarations.html
    ////////////////////////////////
    _global_declaration: ($) =>
      choice(
        $.import_declaration,
        $.property_declaration,
        $.typealias_declaration,
        $.function_declaration,
        $.class_declaration,
        // TODO actor declaration
        $.protocol_declaration,
        $.operator_declaration,
        $.precedence_group_declaration,
        $.associatedtype_declaration
      ),
    _type_level_declaration: ($) =>
      choice(
        $.import_declaration,
        $.property_declaration,
        $.typealias_declaration,
        $.function_declaration,
        $.class_declaration,
        $.protocol_declaration,
        $.deinit_declaration,
        $.subscript_declaration,
        $.operator_declaration,
        $.precedence_group_declaration,
        $.associatedtype_declaration
      ),
    _local_declaration: ($) =>
      choice(
        alias($._local_property_declaration, $.property_declaration),
        alias($._local_typealias_declaration, $.typealias_declaration),
        alias($._local_function_declaration, $.function_declaration),
        alias($._local_class_declaration, $.class_declaration)
      ),
    _local_property_declaration: ($) =>
      seq(
        optional($._locally_permitted_modifiers),
        $._modifierless_property_declaration
      ),
    _local_typealias_declaration: ($) =>
      seq(
        optional($._locally_permitted_modifiers),
        $._modifierless_typealias_declaration
      ),
    _local_function_declaration: ($) =>
      seq(
        optional($._locally_permitted_modifiers),
        $._modifierless_function_declaration
      ),
    _local_class_declaration: ($) =>
      seq(
        optional($._locally_permitted_modifiers),
        $._modifierless_class_declaration
      ),
    import_declaration: ($) =>
      seq(
        optional($.modifiers),
        "import",
        optional($._import_kind),
        $.identifier
      ),
    _import_kind: ($) =>
      choice(
        "typealias",
        "struct",
        "class",
        "enum",
        "protocol",
        "let",
        "var",
        "func"
      ),
    protocol_property_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          field("name", $.value_binding_pattern),
          optional($.type_annotation),
          optional($.type_constraints),
          $.protocol_property_requirements
        )
      ),
    protocol_property_requirements: ($) =>
      seq("{", repeat(choice($.getter_specifier, $.setter_specifier)), "}"),
    property_declaration: ($) =>
      seq(optional($.modifiers), $._modifierless_property_declaration),
    _modifierless_property_declaration: ($) =>
      prec.right(
        seq(
          choice(seq(optional($._async_modifier), "let"), "var"),
          sep1(
            seq(
              field(
                "name",
                alias($.property_binding_pattern, $.value_binding_pattern)
              ),
              optional($.type_annotation),
              optional($.type_constraints),
              optional(
                choice(
                  seq($._equal_sign, field("value", $._expression)),
                  field("computed_value", $.computed_property)
                )
              )
            ),
            ","
          )
        )
      ),
    property_binding_pattern: ($) =>
      generate_pattern_matching_rule($, false, false),
    typealias_declaration: ($) =>
      seq(optional($.modifiers), $._modifierless_typealias_declaration),
    _modifierless_typealias_declaration: ($) =>
      seq(
        "typealias",
        field("name", alias($.simple_identifier, $.type_identifier)),
        optional($.type_parameters),
        $._equal_sign,
        field("value", $._type)
      ),
    function_declaration: ($) =>
      prec.right(
        seq($._bodyless_function_declaration, field("body", $.function_body))
      ),
    _modifierless_function_declaration: ($) =>
      prec.right(
        seq(
          $._modifierless_function_declaration_no_body,
          field("body", $.function_body)
        )
      ),
    _bodyless_function_declaration: ($) =>
      seq(
        optional($.modifiers),
        optional("class"), // XXX: This should be possible in non-last position, but that creates parsing ambiguity
        $._modifierless_function_declaration_no_body
      ),
    _modifierless_function_declaration_no_body: ($) =>
      prec.right(
        seq(
          choice(
            $._constructor_function_decl,
            $._non_constructor_function_decl
          ),
          optional($.type_parameters),
          $._function_value_parameters,
          optional($._async_keyword),
          optional($.throws),
          optional(
            seq(
              $._arrow_operator,
              field("return_type", $._possibly_implicitly_unwrapped_type)
            )
          ),
          optional($.type_constraints)
        )
      ),
    function_body: ($) => $._block,
    class_declaration: ($) =>
      seq(optional($.modifiers), $._modifierless_class_declaration),
    _modifierless_class_declaration: ($) =>
      prec.right(
        choice(
          seq(
            field("declaration_kind", choice("class", "struct")),
            field("name", alias($.simple_identifier, $.type_identifier)),
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            field("body", $.class_body)
          ),
          seq(
            field("declaration_kind", "extension"),
            field("name", $.user_type),
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            field("body", $.class_body)
          ),
          seq(
            optional("indirect"),
            field("declaration_kind", "enum"),
            field("name", alias($.simple_identifier, $.type_identifier)),
            optional($.type_parameters),
            optional(seq(":", $._inheritance_specifiers)),
            optional($.type_constraints),
            field("body", $.enum_class_body)
          )
        )
      ),
    class_body: ($) => seq("{", optional($._class_member_declarations), "}"),
    _inheritance_specifiers: ($) =>
      prec.left(sep1($._annotated_inheritance_specifier, choice(",", "&"))),
    inheritance_specifier: ($) =>
      prec.left(field("inherits_from", choice($.user_type, $.function_type))),
    _annotated_inheritance_specifier: ($) =>
      seq(repeat($.attribute), $.inheritance_specifier),
    type_parameters: ($) => seq("<", sep1($.type_parameter, ","), ">"),
    type_parameter: ($) =>
      seq(
        optional($.type_parameter_modifiers),
        alias($.simple_identifier, $.type_identifier),
        optional(seq(":", $._type))
      ),
    type_constraints: ($) =>
      prec.right(seq($.where_keyword, sep1($.type_constraint, ","))),
    type_constraint: ($) =>
      choice($.inheritance_constraint, $.equality_constraint),
    inheritance_constraint: ($) =>
      seq(
        repeat($.attribute),
        field("constrained_type", $.identifier),
        ":",
        field("inherits_from", $._possibly_implicitly_unwrapped_type)
      ),
    equality_constraint: ($) =>
      seq(
        repeat($.attribute),
        field("constrained_type", $.identifier),
        choice($._equal_sign, $._eq_eq),
        field("must_equal", $._type)
      ),
    _class_member_separator: ($) => choice($._semi, $.multiline_comment),
    _class_member_declarations: ($) =>
      seq(
        sep1($._type_level_declaration, $._class_member_separator),
        optional($._class_member_separator)
      ),
    _function_value_parameters: ($) =>
      seq("(", optional(sep1($._function_value_parameter, ",")), ")"),
    _function_value_parameter: ($) =>
      seq(
        optional($.attribute),
        $.parameter,
        optional(seq($._equal_sign, field("default_value", $._expression)))
      ),
    parameter: ($) =>
      seq(
        optional(field("external_name", $.simple_identifier)),
        field("name", $.simple_identifier),
        ":",
        optional($.parameter_modifiers),
        field("type", $._possibly_implicitly_unwrapped_type),
        optional($._three_dot_operator)
      ),
    _constructor_function_decl: ($) =>
      seq(field("name", "init"), optional(choice($._quest, $.bang))),
    _non_constructor_function_decl: ($) =>
      seq(
        "func",
        field(
          "name",
          choice(
            $.simple_identifier,
            $._referenceable_operator,
            $._bitwise_binary_operator
          )
        )
      ),
    _referenceable_operator: ($) =>
      choice(
        $.custom_operator,
        $._comparison_operator,
        $._additive_operator,
        $._multiplicative_operator,
        $._equality_operator,
        $._comparison_operator,
        "++",
        "--",
        $.bang,
        "~"
      ),
    // Hide the fact that certain symbols come from the custom scanner by aliasing them to their
    // string variants. This keeps us from having to see them in the syntax tree (which would be
    // noisy) but allows callers to refer to them as nodes by their text form like with any
    // operator.
    _equal_sign: ($) => alias($._eq_custom, "="),
    _eq_eq: ($) => alias($._eq_eq_custom, "=="),
    _dot: ($) => alias($._dot_custom, "."),
    _arrow_operator: ($) => alias($._arrow_operator_custom, "->"),
    _three_dot_operator: ($) => alias($._three_dot_operator_custom, "..."),
    _open_ended_range_operator: ($) =>
      alias($._open_ended_range_operator_custom, "..<"),
    _conjunction_operator: ($) => alias($._conjunction_operator_custom, "&&"),
    _disjunction_operator: ($) => alias($._disjunction_operator_custom, "||"),
    _nil_coalescing_operator: ($) =>
      alias($._nil_coalescing_operator_custom, "??"),
    _as: ($) => alias($._as_custom, "as"),
    _as_quest: ($) => alias($._as_quest_custom, "as?"),
    _as_bang: ($) => alias($._as_bang_custom, "as!"),
    _async_keyword: function ($) {
      // Backward compatibility: make `async` both a named node and a string node. Remove this once downstream queries
      // have all been switched over.
      return prec(-1, alias($._async_keyword_internal, $.async));
    },
    _async_keyword_internal: ($) => alias($._async_keyword_custom, "async"),
    _async_modifier: ($) => token("async"),
    throws: ($) => choice($._throws_keyword, $._rethrows_keyword),
    enum_class_body: ($) =>
      seq("{", repeat(choice($.enum_entry, $._type_level_declaration)), "}"),
    enum_entry: ($) =>
      seq(
        optional($.modifiers),
        optional("indirect"),
        "case",
        sep1(
          seq(
            field("name", $.simple_identifier),
            optional($._enum_entry_suffix)
          ),
          ","
        ),
        optional(";")
      ),
    _enum_entry_suffix: ($) =>
      choice(
        field("data_contents", $.enum_type_parameters),
        seq($._equal_sign, field("raw_value", $._expression))
      ),
    enum_type_parameters: ($) =>
      seq(
        "(",
        optional(
          sep1(
            seq(
              optional(
                seq(optional($.wildcard_pattern), $.simple_identifier, ":")
              ),
              $._type,
              optional(seq($._equal_sign, $._expression))
            ),
            ","
          )
        ),
        ")"
      ),
    protocol_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          field("declaration_kind", "protocol"),
          field("name", alias($.simple_identifier, $.type_identifier)),
          optional($.type_parameters),
          optional(seq(":", $._inheritance_specifiers)),
          optional($.type_constraints),
          field("body", $.protocol_body)
        )
      ),
    protocol_body: ($) =>
      seq("{", optional($._protocol_member_declarations), "}"),
    _protocol_member_declarations: ($) =>
      seq(sep1($._protocol_member_declaration, $._semi), optional($._semi)),
    _protocol_member_declaration: ($) =>
      choice(
        alias(
          seq(
            $._bodyless_function_declaration,
            optional(field("body", $.function_body))
          ),
          $.protocol_function_declaration
        ),
        $.deinit_declaration,
        $.protocol_property_declaration,
        $.typealias_declaration,
        $.associatedtype_declaration,
        $.subscript_declaration
      ),
    deinit_declaration: ($) =>
      prec.right(
        seq(optional($.modifiers), "deinit", field("body", $.function_body))
      ),
    subscript_declaration: ($) =>
      prec.right(
        seq(
          optional($.modifiers),
          "subscript",
          optional($.type_parameters),
          $._function_value_parameters,
          optional(
            seq(
              $._arrow_operator,
              field("return_type", $._possibly_implicitly_unwrapped_type)
            )
          ),
          optional($.type_constraints),
          $.computed_property
        )
      ),
    computed_property: ($) =>
      seq(
        "{",
        choice(
          optional($.statements),
          repeat(
            choice($.computed_getter, $.computed_setter, $.computed_modify)
          )
        ),
        "}"
      ),
    computed_getter: ($) =>
      seq(repeat($.attribute), $.getter_specifier, optional($._block)),
    computed_modify: ($) =>
      seq(repeat($.attribute), $.modify_specifier, optional($._block)),
    computed_setter: ($) =>
      seq(
        repeat($.attribute),
        $.setter_specifier,
        optional(seq("(", $.simple_identifier, ")")),
        optional($._block)
      ),
    getter_specifier: ($) =>
      seq(optional($.mutation_modifier), "get", optional($._getter_effects)),
    setter_specifier: ($) => seq(optional($.mutation_modifier), "set"),
    modify_specifier: ($) => seq(optional($.mutation_modifier), "_modify"),
    _getter_effects: ($) => repeat1(choice($._async_keyword, $.throws)),
    operator_declaration: ($) =>
      seq(
        choice("prefix", "infix", "postfix"),
        "operator",
        $.custom_operator,
        optional(seq(":", $.simple_identifier))
      ),
    precedence_group_declaration: ($) =>
      seq(
        "precedencegroup",
        $.simple_identifier,
        "{",
        optional($.precedence_group_attributes),
        "}"
      ),
    precedence_group_attributes: ($) => repeat1($.precedence_group_attribute),
    precedence_group_attribute: ($) =>
      seq(
        $.simple_identifier,
        ":",
        choice($.simple_identifier, $.boolean_literal)
      ),
    associatedtype_declaration: ($) =>
      seq(
        optional($.modifiers),
        "associatedtype",
        field("name", alias($.simple_identifier, $.type_identifier)),
        optional(seq(":", field("must_inherit", $._type))),
        optional($.type_constraints),
        optional(seq($._equal_sign, field("default_value", $._type)))
      ),
    ////////////////////////////////
    // Attributes - https://docs.swift.org/swift-book/ReferenceManual/Attributes.html
    ////////////////////////////////
    attribute: ($) =>
      seq(
        "@",
        $.user_type,
        // attribute arguments are a mess of special cases, maybe this is good enough?
        optional(
          seq(
            "(",
            sep1(
              choice(
                // labeled function parameters, used in custom property wrappers
                seq($.simple_identifier, ":", $._expression),
                // Unlabeled function parameters, simple identifiers, or `*`
                $._expression,
                // References to param names (used in `@objc(foo:bar:)`)
                repeat1(seq($.simple_identifier, ":")),
                // Version restrictions (iOS 3.4.5, Swift 5.0.0)
                seq(repeat1($.simple_identifier), sep1($.integer_literal, "."))
              ),
              ","
            ),
            ")"
          )
        )
      ),
    ////////////////////////////////
    // Patterns - https://docs.swift.org/swift-book/ReferenceManual/Patterns.html
    ////////////////////////////////
    // Higher-than-default precedence to resolve `x as SomeType` ambiguity (expression patterns seem not to support
    // as-expressions)
    binding_pattern: ($) =>
      prec.left(1, generate_pattern_matching_rule($, true, false, false, true)),
    non_binding_pattern: ($) =>
      prec.left(
        1,
        generate_pattern_matching_rule($, false, false, false, true)
      ),
    // Higher precedence than pattern w/o binding since these are strictly more flexible
    _binding_pattern_with_expr: ($) =>
      prec.left(2, generate_pattern_matching_rule($, true, false, true, true)),
    _non_binding_pattern_with_expr: ($) =>
      prec.left(2, generate_pattern_matching_rule($, false, false, true, true)),
    _direct_or_indirect_binding: ($) =>
      seq(
        choice(
          $.value_binding_pattern,
          seq("case", generate_pattern_matching_rule($, true, false, false))
        ),
        optional($.type_annotation)
      ),
    wildcard_pattern: ($) => "_",
    binding_pattern_kind: ($) => choice("var", "let"),
    value_binding_pattern: ($) =>
      prec.left(
        choice(
          seq("var", generate_pattern_matching_rule($, false, false)),
          seq(
            optional($._async_modifier),
            "let",
            generate_pattern_matching_rule($, false, false)
          )
        )
      ),
    // ==========
    // Modifiers
    // ==========
    modifiers: ($) =>
      repeat1(
        choice($._non_local_scope_modifier, $._locally_permitted_modifiers)
      ),
    _locally_permitted_modifiers: ($) =>
      repeat1(choice($.attribute, $._locally_permitted_modifier)),
    parameter_modifiers: ($) => repeat1($.parameter_modifier),
    _modifier: ($) =>
      choice($._non_local_scope_modifier, $._locally_permitted_modifier),
    _non_local_scope_modifier: ($) =>
      choice(
        $.member_modifier,
        $.visibility_modifier,
        $.function_modifier,
        $.mutation_modifier,
        $.property_modifier,
        $.parameter_modifier
      ),
    _locally_permitted_modifier: ($) =>
      choice(
        $.ownership_modifier,
        $.property_behavior_modifier,
        $.inheritance_modifier
      ),
    property_behavior_modifier: ($) => "lazy",
    type_modifiers: ($) => repeat1($.attribute),
    member_modifier: ($) => choice("override", "convenience", "required"),
    visibility_modifier: ($) =>
      seq(
        choice("public", "private", "internal", "fileprivate", "open"),
        optional(seq("(", "set", ")"))
      ),
    type_parameter_modifiers: ($) => repeat1($.attribute),
    function_modifier: ($) => choice("infix", "postfix", "prefix"),
    mutation_modifier: ($) => choice("mutating", "nonmutating"),
    property_modifier: ($) => choice("static", "dynamic", "optional", "class"),
    inheritance_modifier: ($) => choice("final"),
    parameter_modifier: ($) => choice("inout", "@escaping", "@autoclosure"),
    ownership_modifier: ($) =>
      choice("weak", "unowned", "unowned(safe)", "unowned(unsafe)"),
    use_site_target: ($) =>
      seq(
        choice(
          "property",
          "get",
          "set",
          "receiver",
          "param",
          "setparam",
          "delegate"
        ),
        ":"
      ),
    directive: ($) =>
      token(
        prec(
          PRECS.comment,
          choice(
            seq("#if", /.*/),
            seq("#elseif", /.*/),
            seq("#else", /.*/),
            seq("#endif", /.*/),
            seq(/#sourceLocation([^\r\n]*)/)
          )
        )
      ),
    diagnostic: ($) =>
      token(
        prec(
          PRECS.comment,
          choice(
            // Using regexes here, rather than actually validating the string literal, because complex string literals
            // cannot be used inside `token()` and we need that to ensure we get the right precedence.
            seq(/#error([^\r\n]*)/),
            seq(/#warning([^\r\n]*)/)
          )
        )
      ),
  },
});
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
function generate_tuple_pattern($, allows_binding, allows_expressions) {
  var pattern_rule = generate_pattern_matching_rule(
    $,
    allows_binding,
    false,
    allows_expressions
  );
  var tuple_pattern_item = choice(
    seq($.simple_identifier, seq(":", pattern_rule)),
    pattern_rule
  );
  return seq("(", sep1(tuple_pattern_item, ","), ")", optional($._quest));
}
function generate_case_pattern($, allows_binding, force) {
  return seq(
    optional($.user_type), // XXX this should just be _type but that creates ambiguity
    $._dot,
    $.simple_identifier,
    optional(generate_tuple_pattern($, allows_binding, true)),
    optional($._quest)
  );
}
function generate_type_casting_pattern($, allows_binding) {
  return choice(
    seq("is", $._type),
    seq(
      generate_pattern_matching_rule($, allows_binding, false),
      $._as,
      $._type
    )
  );
}
function generate_pattern_matching_rule(
  $,
  allows_binding,
  allows_case_keyword,
  allows_expressions,
  force
) {
  if (!force && !allows_case_keyword) {
    if (allows_binding && !allows_expressions) {
      return $.binding_pattern;
    }
    if (!allows_binding && !allows_expressions) {
      return $.non_binding_pattern;
    }
    if (allows_binding && allows_expressions) {
      return $._binding_pattern_with_expr;
    }
    if (!allows_binding && allows_expressions) {
      return $._non_binding_pattern_with_expr;
    }
  }
  var always_allowed_patterns = [
    $.wildcard_pattern,
    generate_tuple_pattern($, allows_binding, allows_expressions || false),
    generate_type_casting_pattern($, allows_binding),
  ];
  var binding_pattern_prefix = allows_case_keyword
    ? seq(optional("case"), $.binding_pattern_kind)
    : $.binding_pattern_kind;
  var binding_pattern_if_allowed = allows_binding
    ? [
        seq(
          binding_pattern_prefix,
          generate_pattern_matching_rule($, false, false, false)
        ),
      ]
    : [];
  var case_pattern = allows_case_keyword
    ? seq("case", generate_case_pattern($, allows_binding))
    : generate_case_pattern($, allows_binding);
  var expression_pattern = allows_expressions
    ? $._expression
    : field("bound_identifier", $.simple_identifier);
  var all_patterns = always_allowed_patterns
    .concat(binding_pattern_if_allowed)
    .concat(case_pattern)
    .concat(expression_pattern);
  return seq(choice.apply(void 0, all_patterns), optional($._quest));
}

function tree_sitter_version_supports_emoji() {
  try {
    return (
      TREE_SITTER_CLI_VERSION_MAJOR > 0 ||
      TREE_SITTER_CLI_VERSION_MINOR > 20 ||
      TREE_SITTER_CLI_VERSION_PATCH >= 5
    );
  } catch (err) {
    if (err instanceof ReferenceError) {
      return false;
    } else {
      throw err;
    }
  }
}
