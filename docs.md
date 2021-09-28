# Development notes

## Acknowledgements

While this parser is written from scratch, there were previous efforts that made
for a helpful reference:

* [tree-sitter-elixir](https://github.com/ananthakumaran/tree-sitter-elixir) developed
  by [@ananthakumaran](https://github.com/ananthakumaran)
* [tree-sitter-elixir](https://github.com/wingyplus/tree-sitter-elixir) developed
  by [@wingyplus](https://github.com/wingyplus) and [@Tuxified](https://github.com/Tuxified)

## The AST

When it comes to AST Elixir is a rather specific language due to its macro system.
From the perspective of our parser, the important implication is that a seemingly
invalid code can be a valid syntax when used in a macro (or just put in the `quote`
expression). For example:

```elixir
quote do
  def Bar.foo(x), definitely_not_do: 1
  %{a}
  */2
end
```

As opposed to other languages, core constructs like `def`, `if` and `for` are not
particularly special either, since they are itself regular functions (or macros rather).
Consequently they can be used "improperly" in a quoted expression, as shown above.

Consequently, to correctly parse all Elixir code, we need the AST to closely match
the Elixir AST. See [Elixir / Syntax reference](https://hexdocs.pm/elixir/syntax-reference.html)
for more details.

Whenever possible possible, we try using a more specific nodes (like binary/unary operator),
but only to the extent that doesn't lose on generality. To get a sense of what the AST looks
like, have a look at the tests in `test/corpus/`.

## Getting started with Tree-sitter

For official notes see the official guide on [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers).

Essentially, we define relevant language rules in `grammar.js`, based on which
Tree-sitter generates parser code (under `src/`). In some cases, we want to write
custom C++ code for tokenizing specific character sequences (in `src/scanner.cc`).

The grammar rules may often conflict with each other, meaning that the given
sequence of tokens has multiple valid interpretations given one _token_ of lookahead.
In many conflicts we always want to pick one interpretation over the other and we can
do this by assigning different precedence and associativity to relevant rules, which
tells the parser which way to go.

For example given `expression1 * expression2 • *` the next token we _see_ ahead is `*`.
The parser needs to decide whether `expression1 * expression2` is a complete binary operator
node, or if it should await the next expression and interpret it as `expression1 * (expression2 * expression3)`.
Since the `*` operator is left-associative we can use `prec.left` on the corresponding
grammar rule, to inform the parser how to resolve this conflict.

However, in some cases looking at one token ahead isn't enough, in which case we can add
the conflicting rules to the `conflicts` list in the grammar. Whenever the parser stumbles
upon this conflict it uses its GLR algorithm, basically considering both interpretations
until one leads to parsing error. If both paths parse correctly (there's a genuine ambiguity)
we can use dynamic precedence (`prec.dynamic`) to decide on the preferred path.

## Using the CLI

### tree-sitter

```shell
# See CLI usage
npx tree-sitter -h

# Generate the the parser code based on grammar.js
npx tree-sitter generate

# Run tests
npx tree-sitter test
npx tree-sitter test --filter "access syntax"

# Parse a specific file
npx tree-sitter parse tmp/test.ex
npx tree-sitter parse -x tmp/test.ex

# Parse codebase to verify syntax coverage
npx tree-sitter parse --quiet --stat 'tmp/elixir/**/*.ex*'
```

Whenever you make a change to `grammar.js` remember to run `generate`,
before verifying the result. To test custom code, create an Elixir file
like `tmp/test.ex` and use `parse` on it. The `-x` flag prints out the
source grouped into AST nodes as XML.

### Additional scripts

```shell
# Format the grammar.js file
npm run format

# Run parser against the given repository
scripts/parse_repo.sh elixir-lang/elixir
```

## Implementation notes

This section covers some of the implementation decisions that have a more
elaborated rationale. The individual subsections are referenced in the code.

### Ref 1. External scanner for quoted content

We want to scan quoted content as a single token, but it requires lookahead.
Specifically the `#` character may no longer be quoted content if followed by `{`.
Also, inside heredoc string tokenizing `"` (or `'`) requires lookahead to know
if it's already part of the end delimiter or not.

Since we need to use external scanner, we need to know the delimiter type.
One way to achieve this is using external scanner to scan the start delimiter
and then storing its type on the parser stack. This approach requires the parser
to allocate enough memory upfront and implement serialization/deserialization,
which ideally would be avoided. To avoid this, we use a different approach!
Instead of having a single `quoted_content` token, we have specific tokens for
each quoted content type, such as `_quoted_content_i_single`, `_quoted_content_i_double`.
Once the start delimiter is tokenized, we know which quoted content should be
tokenized next, and from the token we can infer the end delimiter and whether
it supports interpolation. In other words, we extract the information from the
parsing state, rather than maintaining custom parser state.

### Ref 2. External scanner for newlines

Generally newlines may appear in the middle of expressions and we ignore them
as long as the expression is valid, that's why we list newline under extras.

When a newline follows a complete expression, most of the time it should be
treated as terminator. However, there are specific cases where the newline is
non-breaking and treated as if it was just a space. This cases are:

  * call followed by newline and a `do end` block
  * expression followed by newline and a binary operator

In both cases we want to tokenize the newline as non-breaking, so we use external
scanner for lookahead.

Note that the relevant rules already specify left/right associativity, so if we
simply added `optional("\n")` the conflicts would be resolved immediately rather
without using GLR.

Additionally, since comments may appear anywhere and don't change the context,
we also tokenize newlines before comments as non-breaking.

### Ref 3. External scanner for unary + and -

Plus and minus are either binary or unary operators, depending on the context.
Consider the following variants

```
a + b
a+b
a+ b
a +b
```

In the first three expressions `+` is a binary operator, while in the last one
`+` is an unary operator referring to local call argument.

To correctly tokenize all the cases, we have a special `_before_unary_operator` empty
token and use external scanner to tokenize

To correctly tokenize all cases we use external scanner to tokenize a special empty
token (`_before_unary_operator`) when the spacing matches `a +b`, which forces the
parser to pick the unary operator path.

### Ref 4. External scanner for `not in`

The `not in` operator may have an arbitrary inline whitespace between `not` and `in`.

We cannot use a regular expressoin like `/not[ \t]+in/`, because it would also match
in expressions like `a not inn` as the longest matching token.

A possible solution could be `seq("not", "in")` with dynamic conflict resolution, but
then we tokenize two separate tokens. Also to properly handle `a not inn`, we would need
keyword extraction, which causes problems in our case (https://github.com/tree-sitter/tree-sitter/issues/1404).

In the end it's easiest to use external scanner, so that we can skip inline whitespace
and ensure token ends after `in`.

### Ref 5. External scanner for quoted atom start

For parsing quoted atom `:` we could make the `"` (or `'`) token immediate, however this
would require adding immediate rules for single/double quoted content and listing them
in relevant places. We could definitely do that, but using external scanner is actually
simpler.

### Ref 6. Identifier pattern

See [Elixir / Unicode Syntax](https://hexdocs.pm/elixir/unicode-syntax.html) for official
notes.

Tree-sitter already supports unicode properties in regular expressions, however character
class subtraction is not supported.

For the base `<Start>` and `<Continue>` we can use `[\p{ID_Start}]` and `[\p{ID_Continue}]`
respectively, since both are supported and according to the
[Unicode Annex #31](https://unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers)
they match the ranges listed in the Elixir docs.

For atoms this translates to a clean regular expression.

For variables however, we want to exclude uppercase (`\p{Lu}`) and titlecase (`\p{Lt}`)
categories from `\p{ID_Start}`. As already mentioned, we cannot use group subtraction
in the regular expression, so instead we need to create a suitable group of characters
on our own.

After removing the uppercase/titlecase categories from `[\p{ID_Start}]`, we obtain the
following group:

`[\p{Ll}\p{Lm}\p{Lo}\p{Nl}\p{Other_ID_Start}-\p{Pattern_Syntax}-\p{Pattern_White_Space}]`

At the time of writing the subtracted groups actually only remove a single character:

```elixir
Mix.install([{:unicode_set, "~> 1.1"}])

Unicode.Set.to_utf8_char(
  "[[[:Ll:][:Lm:][:Lo:][:Nl:][:Other_ID_Start:]] & [[:Pattern_Syntax:][:Pattern_White_Space:]]]"
)
#=> {:ok, [11823]}
```

Consequently, by removing the subtraction we allow just one additional (not common) character,
which is perfectly acceptable.

It's important to note that JavaScript regular expressions don't support the `\p{Other_ID_Start}`
unicode category. Fortunately this category is a small set of characters introduces for
[backward compatibility](https://unicode.org/reports/tr31/#Backward_Compatibility), so we can
enumerate it manually:

```elixir
Mix.install([{:unicode_set, "~> 1.1"}])

Unicode.Set.to_utf8_char("[[[:Other_ID_Start:]] - [[:Pattern_Syntax:][:Pattern_White_Space:]]]")
|> elem(1)
|> Enum.flat_map(fn
  n when is_number(n) -> [n]
  range -> range
end)
|> Enum.map(&Integer.to_string(&1, 16))
#=> ["1885", "1886", "2118", "212E", "309B", "309C"]
```

Finally, we obtain this regular expression group for variable `<Start>`:

`[\p{Ll}\p{Lm}\p{Lo}\p{Nl}\u1885\u1886\u2118\u212E\u309B\u309C]`

### Ref 7. Keyword token

We tokenize the whole keyword sequence like `do: ` as a single token.
Ideally we wouldn't include the whitespace, but since we use `token`
it gets include. However, this is an intentionally accepted tradeoff,
because using `token` significantly simplifies the grammar and avoids
conflicts.

The alternative approach would be to define keyword as `seq(alias(choice(...), $._keyword_literal), $._keyword_end)`,
where we list all other tokens that make for for valid keyword literal
and use custom scanner for `_keyword_end` to look ahead without tokenizing
the whitespace. However, this approach generates a number of conflicts
because `:` is tokenized separately and phrases like `fun fun • do` or
`fun • {}` are ambiguous (interpretation depends on whether `:` comes next).
Resolving some of these conflicts (for instance special keywords like `{}` or `%{}`)
requires the use of external scanner. Given the complexities this approach
brings to the grammar, and consequently the parser, we stick to the simpler
approach.
