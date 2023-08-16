# A Typst tree-sitter grammar for syntax highlighting in Helix and Neovim editors

Typst doesn't have yet an official tree-sitter grammar. This grammar is work-in-progress. It is the first time I write a Tree-Sitter grammar. There are so many things I don't understand about Tree-Sitter. I have been refactoring the code several time after unlocking some understanding about this technology.

The two following alternative projects should be mentioned:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. As I said before, this is the first time I am dealing with tree-sitter.

## FIXME

Huge performance issue. At the moment, I suspect the recursive pattern of `tail` rules. I suspect the anonym nodes are not inlined, thus creating a very long chained list. Causing long traversal when applying the highlighting.

## TODO

- [ ] Proper idents and labels with unicode classes like XID_Continue (Is someone aware of the exact Typst specification? As of today, I did not dive in the implementation to find the answer).
- [ ] Comments in code mode (This is especially tricky as I do not use the extras, but instead, manually insert them).
- [ ] Increase by an order of magnitude the number of tests
- [ ] Simplification and code factorisation (I am sure a bunch of code is not actually necessary)

## Particularity

State machine with transitions. As I was struggling with precedences, I chose a different approach by removing any ambiguity at the rule level (not using the prec function).

This led to two things:

- One expression rule for each precedence level
- A state machine with transition for text mode.

This makes the grammar way more verbose and repetitive, but gives much more control and subtle cases.

## Abreviations

### White spaces

- `sl` single line
- `ml` multi line
- `l0` zero new line
- `l1` one new line
- `lp` more than one new line
- `la` any combination of new line and spaces

### Text modes

- `normal` no mode
- `emph` inside `_`
- `strong` inside `*`
- `heading` text of a heading

### Operators

- `lambda` anonymous functions
- `instr` instructions like `let`, `import`, etc... including expressions
- `condition` for `if` statement WITHOUT `else` branch
- `branch` for `if` statement WITH `else` branch
- `sl_4`, `ml_6`, `ml_3`, etc... any expression producing a value, where `sl` or `ml` indicates if line breaks are allowed or not, and the number is the precedence.

### Elements

When parsing text, the parser progresses step by step, by reducing what I call an element, which can be a space, a new line, a word, code, strong, emph, raw or math sections.

- `any` shorthand for all elements that don't have particularities in that situation
- `element` elements that never have particularities
- `space` space without new lines
- `line` a single new line
- `break` more than one new line, ie a paragraph break
- `text` a word or any contiguous sequence of non punctuation or space characters
- `raw` a block of raw text delimited by 3 backticks
- `inline` same as raw but inline with single backtick
- `emph`, `strong`
- `heading`
- `code` code insert with #
- `math`

## State Machine

Rules being transitions between states have the following name pattern:

`_MODE_tail_PREVIOUS_NEXT`

- MODE is the text mode (normal, emph, strong, heading)
- PREVIOUS is the element parsed before
- NEXT is the element which is about to be parsed

The name of the rule can be understood that way: In MODE mode, the tail (what follows) a PREVIOUS element can be the NEXT element.

Those rules are called "tails" because they are recursive and matche the whole remaining of the file. In the same way list processing is done in functional languages.