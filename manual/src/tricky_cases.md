# Tricky Cases

Tree diffing is challenging in some situations. This page demonstrates
difficult cases observed during development.

Not all of these cases work well in difftastic yet.

## Adding Delimiters

```
;; Before
x

;; After
(x)
```

This is tricky because `x` has changed its depth in the tree, but `x`
itself is unchanged.

Not all tree diff algorithms handle this case. It is also challenging
to display this case clearly: we want to highlight the changed
delimiters, but not their content. This is challenging in larger
expressions.

## Changing Delimiters

```
;; Before
(x)

;; After
[x]
```

As with the wrapping case, we want to highlight the delimiters rather
than the `x`.

## Expanding Delimiters

```
;; Before
(x) y

;; After
(x y)
```

In this case, we want to highlight `y`. Highlighting the delimiters
could make `x` look changed.

## Contracting Delimiters

```
;; Before
(x y)

;; After
(x) y
```

This should be highlighted similar to the expanding delimiter case.

## Reordering Within A List

```
;; Before
(x y)

;; After
(y x)
```

We want to highlight the list contents and not the delimiters.

## Middle Insertions

```
// Before
foo(bar(123));

// After
foo(extra(bar(123)));
```

We want to consider both `foo` and `bar` to be unchanged. This case is
challenging for diffing algorithms that do a bottom-up then top-down
matching of trees.

## Sliders

Sliders are a common problem in text based diffs, where lines are
matched in a confusing way.

They typically look like this. The diff has to arbitrarily choose a
delimiter, and it chooses the wrong one.

```
+ }
+
+ function foo () {
  }
```

git-diff has some heuristics to reduce the risk of this (e.g. the
"patience diff"), but it can still occur.

There's a similar problem in tree diffs.

```
;; Before
A B
C D

;; After
A B
A B
C D
```

Ideally we'd prefer marking contiguous nodes as novel, so we highlight
`A B` rather than `B\nA`. From the perspective of a
longest-common-subsequence algorithm, these two choices are
equivalent.

## Minimising Depth Changes

```
// Before
if true {
  foo(123);
}
foo(456);

// After
foo(789);
```

Do we consider `foo(123)` or `foo(456)` to match with `foo(789)`?
Difftastic prefers `foo(456)` by preferring nodes at the same nesting depth.

## Replacements With Minor Similarities

```
// Before
function foo(x) { return x + 1; }

// After
function bar(y) { baz(y); }
```

In this example, we've deleted a function and written a completely
different one. A tree-based diff could match up the `function` and the
outer delimiters, resulting in a confusing display showing lots of
small changes.

As with sliders, the replacement problem can also occur in textual
line-based diffs. Line-diffs struggle if there are a small number of
common lines. The more precise, granular behaviour of tree diffs makes
this problem much more common though.

## Matching Substrings In Comments

```
// Before
/* The quick brown fox. */
foobar();

// After
/* The slow brown fox. */
foobaz();
```

`foobar` and `foobaz` are completely different, and their common
prefix `fooba` should not be matched up. However, matching common
prefixes or suffixes for comments is desirable.

## Multiline Comments

```
// Before
/* Hello
 * World. */

// After
if (x) {
  /* Hello
   * World. */
}
```

The inner content of these two comments is technically different. We
want to treat them as identical however.

## Reflowing Doc Comments

Block comments have prefixes that aren't meaningful.

```
// Before
/* The quick brown fox jumps 
 * over the lazy dog. */

// After
/* The quick brown fox immediately
 * jumps over the lazy dog. */
```

The inner content has changed from `jumps * over` to `immediately *
jumps over`. However, the `*` is decorative and we don't care that
it's moved.

## Autoformatter Punctuation

```
// Before
foo("looooong", "also looooong");

// Before
foo(
  "looooong",
  "novel",
  "also looooong",
);
```

Autoformatters (e.g. [prettier](https://prettier.io/)) will sometimes
add or remove punctuation when formatting. Commas and parentheses are
the most common.

Syntactic diffing can ignore whitespace changes, but it has to assume
punctuation is meaningful. This can lead to punctuation changes being
highlighted, which may be quite far from the relevant content change.

## Invalid Syntax

There's no guarantee that the input we're given is valid syntax. Even
if the code is valid, it might use syntax that isn't supported by the
parser.

Tree-sitter provided explicit error nodes, and difftastic treats them
as atoms so it can run the same tree diff algorithm regardless.
