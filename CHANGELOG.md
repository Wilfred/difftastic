## 0.17 (unreleased)

### Diffing

Improved performance when all file changes are close together.

### Display

Added syntax highlighting for unchanged comments, strings and types.

Fixed a bug (introduced in 0.15) where identical text files were
reported as binary files.

## 0.16 (released 22 January 2022)

### Parsing

Whitespace in JSX is parsed more closely to React's whitespace
trimming rules.

Fixed parsing of heredocs in shell scripts. They are now treated as
string literals.

Fixed parsing of type variables and tags in OCaml.

Improved language detection for files with bash/sh syntax.

### Integration

Fixed a crash when on Mercurial diffs when a whole file has been
removed.

### Display

Improved display performance when there are a large number of hunks.

Fixed several issues where lines were displayed more than once in a
hunk.

Fixed an issue where the first changed line was not displayed.

### Diffing

Improved diffing performance (both time and memory usage).

Sliders are now fixed up after diffing. This produces better looking
results in more cases, and makes the primary diffing faster.

Fixed some corner cases in the line parser where it would match up
isolated newline character as unchanged, leading to weird alignment.

## 0.15 (released 6 January 2022)

### Parsing

Moved to the [official Elixir
parser](https://github.com/elixir-lang/tree-sitter-elixir).

Updated the Bash, C, C++, C#, Haskell, Java, OCaml, Python, Ruby and
TypeScript parsers to the latest upstream version.

Fixed a parsing performance regression introduced in 0.13.

### Diffing

Text diffing now has a standalone implementation rather than reusing
structural diff logic. This is signficantly faster and highlighted
better.

Improved performance when diffing two identical files. This is common
when diffing directorires.

### Display

Improved highlighting heuristics for added/removed blank lines.

Fixed an alignment bug where the last line being novel would lead to
poor alignment of unchanged lines.

Fixed minor formatting issues when reporting that a file is binary.

Improved display performance on large files.

## 0.14 (released 27 December 2021)

### Parsing

Improved language detection if a file has a recognised filename
(e.g. `Rakefile`) or a shebang (e.g. `#!/usr/bin/env node`).

### Display

Display width can now be overridden by setting the environment
variable DFT_WIDTH.

Fixed terminal width calculations on Windows.

Fixed crash when only one side has changes, but the other side has
additional blank lines.

Fixed crash on displaying unicode characters on line boundaries.

### Build

Fixed some build issues on Windows.

## 0.13 (released 4 December 2021)

### Parsing

Added Bash, Common Lisp and Ruby support.

Updated the C, CSS and JSON parsers to the latest upstream versions.

Expanded filename associations, so difftastic recognises more files.

Improved parsing for regex and template string literals in JavaScript
and TypeScript.

Improved parsing for float values in CSS.

Improved word diffing on punctuation in comments.

When logging is enabled (e.g. `RUST_LOG=warn`), difftastic now warns
on syntax errors. Difftastic is intended to be robust against syntax
errors, so this is primarily intended for parser debugging.

### Build

Difftastic now requires fewer C compiler flags, so it should build in
more environments (e.g. compiling with MSVC).

## 0.12 (released 19 November 2021)

### Display

Every hunk is now shown with the file name and a hunk number. This
makes it easier to see which file you're looking at when there are
many changes.

Keywords in added/removed regions are now shown in bold, to give
modified regions basic syntax highlighting. Previously, all
added/removed regions were bold.

Lines with changes are now shown in a different colour in side-by-side
display.

The display logic has been written in terms of a `Hunk` type. This
produces more accurate context, with better alignment, especially when
the context contains blank lines.

If only a single side has changes (e.g. additions but no removals),
only one column is shown, to maximise display usage.

Difftastic now wraps rather than truncating lines that are too long
for the terminal width.

If a file has no syntactic changes, difftastic now shows the file name
consistently with changed files.

### Command Line Interface

The difftastic binary is now named `difft`, to reduce typing during
usage.

### Parsing

Updated to latest upstream Haskell parser ([commit
d72f2e4](https://github.com/tree-sitter/tree-sitter-haskell/commit/d72f2e42c0d5ccf8e8b1c39e3642428317e8fe02)).

### Diffing

Fixed a bug when diffing multiline comments where unchanged parts were
not highlighted correctly.

## 0.11 (released 18 October 2021)

### Parsing

Improved handling of paired delimiters, particularly in C, C++ and C#.

Improved word splitting in when diffing similar comments (it's now
more granular).

Fixed a rare issue where single-item lists were flattened.

### Diffing

Diff calculations are now greedier when syntax nodes are identical, making
diffing significantly faster when most syntax nodes are the same.

### Integration

Added support for Mercurial, see [this section in the
manual](http://difftastic.wilfred.me.uk/getting_started.html#mercurial-external-diffs)
for instructions.

### Display

Added basic syntax highlighting for comments (dimmed) and keywords
(bold) in unchanged source code.

Characters that don't have a position in the parsed syntax tree are
now displayed in purple, to make bugs more obvious. Previously they
were dimmed.

## 0.10.1 (released 28 September 2021)

### Build

Fix compilation on macOS where the C++ compiler defaulted to a
version of C++ older than C++14.

## 0.10 (released 24 September 2021)

### Parsing

Added a C parser.

Added a C++ parser. Difftastic prefers the C++ parser for `.h`
files. Please file a bug if you see issues.

Added a C# parser.

Added a Haskell parser.

Removed legacy regex-based parsing backend.

### Diffing

Some additional runtime optimisations.

### Manual

Added a chapter on difficult cases for tree diff algorithms.

## 0.9 (released 14 September 2021)

### Parsing

Added TypeScript parser and TSX parser. Added Elixir parser.

The following extensions are now associated with Clojure: `.bb`,
`.boot`, `.clj`, `.cljc`, `.clje`, `.cljs`, `.cljx`, `.edn`, `.joke`
and `.joker`.

Fixed an issue with parsing integer values in CSS with units,
e.g. `123px`.

Improved parsing of Rust punctuation like `&` and `::` inside macro
invocations. Improved handling of `|closure_param|` and `[` `]`
delimiters in Rust.

The line-based parser for text files now uses word-level diffs.

### Diffing

Optimised Dijkstra implementation, improving runtime performance.

### Display

Side-by-side displays now uses the same width for the left and right
columns, regardless of the content.

### Internals

Difftastic is now a library with a main binary. No APIs are considered
stable for external usage. This is intended to make benchmarking
easier.

## 0.8 (released 5 September 2021)

### Git integration

Fixed a crash on removing whole files.

### Parsing

Tree-sitter parsing is now the default, unless the environment
variable DFT_RX is set.

Tree-sitter parser: Improved handling of string literals. Improved
matching of delimiters.

Added Python parser.

Added Java parser.

JSON (legacy parser): fixed parsing string literals (broken in 0.7).

Removed Scheme support, as there's no tree-sitter parser available.

### Display

Fixed crashes on files with non-ASCII characters on long lines.

Fixed an issue where multiline comments were not highlighted
correctly.

Improved display to better use the whole width when whole files are
added or removed.

### Command Line Interface

Removed the unused `--lang` argument.

Difftastic now handles writing to a closed pipe (SIGPIPE) gracefully
rather than crashing.

Difftastic now has some debugging logs available. `RUST_LOG=trace`
will show information on the route found during graph solving.

## 0.7 (released 24 August 2021)

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
trees. The output of these options may change without notice.

## 0.6 (released 27 July 2021)

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

## 0.5 (released 22 July 2021)

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

## 0.4 (released 13 July 2021)

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

## 0.3 (released 7 July 2021)

Diffs are now displayed with unchanged lines aligned to the other side.

Improved Rust parsing to recognise lifetime syntax `'foo`, character
literals `'x'` and punctuation.

Improved punctuation parsing for OCaml and JS.

Fixed an issue where the diff calculated may not be minimal.

Fixed a crash on files with no changes.

## 0.2 (released 4 July 2021)

First version using Dijkstra's algorithm for calculating diffs.

## 0.1

Experimenting with different implementation ideas.
