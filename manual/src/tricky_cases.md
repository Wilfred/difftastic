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

Possible result: <code><span style="background-color: PaleGreen; color: #000">(x)</span></code>

Desired result: <code><span style="background-color: PaleGreen; color: #000">(</span>x<span style="background-color: PaleGreen; color: #000">)</span></code>

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

Desired result: <code><span style="background-color: #fbbd98; color: #000">(</span>x<span style="background-color: #fbbd98; color: #000">)</span> <span style="background-color: PaleGreen; color: #000">[</span>x<span style="background-color: PaleGreen; color: #000">]</span></code>

As with the wrapping case, we want to highlight the delimiters rather
than the `x`.

## Expanding Delimiters

```
;; Before
(x) y

;; After
(x y)
```

Desired result: <code>(x <span style="background-color: PaleGreen; color: #000">y</span>)</code>

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

## Disconnected Delimiters

```
;; Before
(foo (bar))

;; After
(foo (novel) (bar))
```

Desired result: <code>(foo <span style="background-color:PaleGreen; color: #000">(novel)</span> (bar)</code>

It is easy to end up with
<code>(foo (<span style="background-color:PaleGreen; color: #000">novel</span>) <span style="background-color:PaleGreen; color: #000">(</span>bar<span style="background-color:PaleGreen; color: #000">)</span>)</code>,
where a later pair of delimiters are chosen.

## Rewrapping Large Nodes

```
;; Before
[[foo]]
(x y)

;; After
([[foo]] x y)
```

We want to highlight `[[foo]]` being moved inside the
parentheses. However, a naive syntax differ prefers to consider a removal
of `()` in the before and an addition of `()` in the after to be more
minimal diff.

(Reported as [issue 44](https://github.com/Wilfred/difftastic/issues/44).)

## Reordering Within A List

```
;; Before
(x y)

;; After
(y x)
```

Desired result: <code>(<span style="background-color: PaleGreen; color: #000">y</span> <span style="background-color: PaleGreen; color: #000">x</span>)</code>

We want to highlight the list contents and not the delimiters.

## Middle Insertions

```
// Before
foo(bar(123))

// After
foo(extra(bar(123)))
```

Desired result: <code>foo(<span style="background-color: PaleGreen; color: #000">extra(</span>bar(123)<span style="background-color: PaleGreen; color: #000">)</span>)</code>

We want to consider both `foo` and `bar` to be unchanged. This case is
challenging for diffing algorithms that do a bottom-up then top-down
matching of trees.

## Punctuation Atoms

```
// Before
foo(1, bar)

// After
foo(bar, 2)
```

Possible result: <code>foo(<span style="background-color: PaleGreen; color: #000">bar</span>, <span style="background-color: PaleGreen; color: #000">2</span>)</code>

Desired result: <code>foo(bar<span style="background-color: PaleGreen; color: #000">,</span> <span style="background-color: PaleGreen; color: #000">2</span>)</code>

There are two atoms inside the `()` that we could consider as
unchanged, either the `bar` or the `,`. (We can't consider both to be
unchanged as they're reordered.)

We want to consider `bar` to be unchanged, as it's a more important
atom than the `,` punctuation atom. Doing this is in a
language-agnostic way is difficult, so difftastic has a small list of
punctuation characters that always get lower priority than other
atoms.

## Sliders (Flat)

Sliders are a common problem in text based diffs, where lines are
matched in a confusing way.

They typically look like this. The diff has to arbitrarily choose a
line containing delimiter, and it chooses the wrong one.

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

Possible result:

<pre><code>A <span style="background-color: PaleGreen; color: #000">B</span>
<span style="background-color: PaleGreen; color: #000">A</span> B
C D
</code></pre>

Preferred result:

<pre><code>A B
<span style="background-color: PaleGreen; color: #000">A</span> <span style="background-color: PaleGreen; color: #000">B</span>
C D
</code></pre>

Ideally we'd prefer marking contiguous nodes as novel. From the
perspective of a longest-common-subsequence algorithm, these two
choices are equivalent.

## Sliders (Nested)

```
// Before
old1(old2)

// After
old1(new1(old2))
```

Possible result: <code>old1<span style="background-color: PaleGreen; color: #000">(new1</span>(old2)<span style="background-color: PaleGreen; color: #000">)</span></code>

Desired result: <code>old1(<span style="background-color: PaleGreen; color: #000">new1(</span>old2<span style="background-color: PaleGreen; color: #000">)</span>)</code>

The correct answer depends on the language. Most languages want to
prefer the inner delimiter, whereas Lisps and JSON prefer the outer
delimiter.

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

Possible result: <code>function <span style="background-color: PaleGreen; color: #000">bar</span>(<span style="background-color: PaleGreen; color: #000">y</span>) { <span style="background-color: PaleGreen; color: #000">baz(y)</span>; }</code>

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

## Small Changes To Large Strings

```
// Before
"""A very long string
with lots of words about
lots of stuff."""

// After
"""A very long string
with lots of NOVEL words about
lots of stuff."""
```

It would be correct to highlight the entire string literal as being
removed and replaced with a new string literal. However, this makes it
hard to see what's actually changed.

It's clear that variable names should be treated atomically, and
comments are safe to show subword changes. It's not clear how to
handle a small change in a 20 line string literal.

It's tempting to split strings on spaces and diff that, but users
still want to know when whitespace changes inside strings. `" "` and
`"  "` are not the same.

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

## Novel Blank Lines

Blank lines are challenging for syntactic diffs. We are comparing
syntactic tokens, so we don't see blank lines.

```
// Before
A
B

// After
A

B
```

Generally we want syntactic diffing to ignore blank lines. In this
first example, this should show no changes.

This is occasionally problematic, as it can hide accidental code
reformatting.

```
// Before
A
B

// After
A
X

Y
B
```

In this second example, we've inserted X and Y and a blank line. We
want to highlight the blank line as an addition.

```
// Before
A


B

// After
A
X
B
```

In this third example, the syntactic diffing only sees an
addition. From the user's perspective, there has also been a removal
of two blank lines.

## Invalid Syntax

There's no guarantee that the input we're given is valid syntax. Even
if the code is valid, it might use syntax that isn't supported by the
parser.

Tree-sitter provided explicit error nodes, and difftastic treats them
as atoms so it can run the same tree diff algorithm regardless.
