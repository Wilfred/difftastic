## 0.8 (unreleased)

### Git integration

Fixed a crash on removing whole files.

### Parsing

Tree-sitter parsing is now the default, unless the environment
variable DFT_RX is set.

Tree-sitter parser: Improved handling of string literals. Improved
matching of delimiters.

JSON (legacy parser): fixed parsing string literals (broken in 0.7).

### Display

Fixed crashes on files with non-ASCII characters on long lines.

Improved display to better use the whole width when whole files are
added or removed.

### Command Line Interface

Removed the unused `--lang` argument.

Difftastic now handles writing to a closed pipe (SIGPIPE) gracefully
rather than crashing.

Difftastic now has some debugging logs available. `RUST_LOG=trace`
will show information on the route found during graph solving.

## 0.7

### Git integration

Fixed issues when adding/removing a whole file meant that difftastic
didn't display anything.

Fixed a crash on renaming a file.

Colour is now enabled when using git with a pager.

### Display

Side-by-side display now uses "..." for column numbers when aligning
lines. This makes hunks more obvious, but hunks now also have two
blank lines between them to make it clearer.

Fixed an issue where screen width was not shared evenly by LHS and
RHS.

Side-by-side display will now use the full width of the screen when
using a pager (i.e. if stdout is a not a TTY).

Side-by-side display now handles whole file additions better,
preferring a single column display.

Display width calculations are now based on the longest line visible
in the diff, not the longest line in the file.

### Parsing

Added tree-sitter parsers. These have known bugs, but you can try
them by setting the environment variable `DFT_TS=y`.

Fixed handling of `->` in Rust.

### Diffing

Difftastic will now prefer matching up comments that are similar
(according to levenshtein distance).

Contiguous syntax logic now considers close delimiter positions, so
`[ \n ];` now treats the `;` atom as contiguous.

Fixed an issue where diffs would prefer prefer a low depth change on a
delimiter over a delimiter that gave contiguous changes.

### Command Line Interface

Removed the `--width` argument.

Added debug options `--dump-syntax` and `--dump-ts` for viewing parse
trees. The output of these files may change without notice.

## 0.6

### Parsing

Fixed handling of `@`, `<` and `>` in elisp.

Fixed crash on binary files. Difftastic now simply shows "binary" for
files that don't look like text.

Added a basic Go parser.

### Diffing

Fixed an issue where comment replacements were not detected.

Changed words in comments are now only highlighted when comments are
relatively similar (according to their Levenshtein distance).

Multiline comments are now considered unchanged if only their
indentation changes.

Improved alignment for lines at the beginning of a changed group of
lines.

Improved horizontal spacing between before and after code shown.

Fixed an issue where source code containing tab characters was not
correctly aligned.

### Command Line Interface

Removed unused `--inline` and `--context` arguments.

Fixed crash when called with no arguments.

## 0.5

### Parsing

Fixed a crash on parsing non-ASCII source files. Fixed a crash on
files without an extension. Fixed crashes on empty files.

Input files that aren't valid UTF-8 are now replaced with � rather
than giving up.

Improved parsing for Rust punctuation.

Improved parsing for OCaml punctuation, including `:=` and `method!`.

Improved parsing for Emacs Lisp symbols containing `+` and `=`, and
punctuation of `#`, `.` and `&`.

Improved parsing for Scheme symbols containing `=`, and punctuation of
`#` and `.`.

Improved parsing of `=` and `&` in Clojure.

Improved parsing of `:`, `,`, and constants in JSON.

Improved parsing of string literals in all languages, supporting
escaped delimiters such as `"\""` and removing incorrect support for
single-quoted strings in JSON.

### Diffing

Reduced memory usage when diffing.

Difftastic now highlights word-level changes between comments.

Diffing now prefers contiguous nodes even when entering a list, so
`(foo` is considered contiguous.

Large AST trees with very few common nodes are now considered wholly
novel, rather than trying to match up the few common nodes. This
avoids nonsensical diffs when toplevel function A is completely
replaced with function B and they only have something trivial in
common (e.g. the `function` keyword).

### Command Line Interface

Improved `--help`.

### Integration

It's now possible to use `difftastic` with `git diff` and `git show`!

## 0.4

### Parsing

Improved parsing for Rust macro definitions and punctuation.

Improved parsing for OCaml punctuation, and added `.mli` as an OCaml
file extension.

### Diffing

Diff calculation is now significantly faster.

Difftastic now considers nesting depth when comparing AST nodes, and
tries to match nodes with similar nesting levels.

Difftastic now prefers marking multiple items on the same line as
novel, rather than adjacent items on different lines. This helps avoid
[sliders](https://twitter.com/_wilfredh/status/1411949035871637509),
where the diff chooses a keyword on the 'wrong' side.

Fixed an issue where complex diffs would not display some unchanged
lines.

### Robustness

Fixed a crash when diff context included the first line.

Fixed a crash when plain text content contained certain non-ASCII
characters.

## 0.3

Diffs are now displayed with unchanged lines aligned to the other side.

Improved Rust parsing to recognise lifetime syntax `'foo`, character
literals `'x'` and punctuation.

Improved punctuation parsing for OCaml and JS.

Fixed an issue where the diff calculated may not be minimal.

Fixed a crash on files with no changes.

## 0.2

First version using Dijkstra's algorithm for calculating diffs.

## 0.1

Experimenting with different implementation ideas.
