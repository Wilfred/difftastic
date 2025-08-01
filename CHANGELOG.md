## 0.65 (unreleased)

### Parsing

Updated Clojure, Common Lisp and Zig parsers. Improved parsing of
Kotlin.

Text encoding detection is now stricter, fixing more cases where
binary files were treated as text.

Added the `--override-binary` option to force files to be treated as
binary rather than text.

### Display

When diffing binary files, the file sizes are now shown to help see
big changes.

## 0.64 (released 16th June 2025)

### Parsing

Updated to the latest tree-sitter parser for Erlang, F#, Gleam, Pascal
and Swift.

File detection is now stricter for UTF-8, and recognises more
compression file types as binary (e.g. zstd or bzip2).

Added support for Verilog and SystemVerilog.

### Build

CI on GitHub now uses Ubuntu 22.04 for Linux builds (previously Ubuntu
20.04), so prebuilt binaries will require a newer glibc version to
run.

### Internal

Difftastic has switched from MiMalloc to Jemalloc for allocation. This
is modest performance regression (up to 20% longer runtime in
testing). Jemalloc is currently easier to build (see issue #805) and
has fewer pathological performance corner cases.

## 0.63 (released 11th February 2025)

### Diffing

When diffing directories, difftastic now ignores the `.git` directory.

### Display

Fixed an issue where `--display=side-by-side-show-both` would not use
a two-column display when one file was empty.

### Command Line Interface

Difftastic no longer accepts the `--missing-as-empty` argument. This
argument has had no effect since 0.46.

### Parsing

File detection now supports Windows-1252 encoded text (an extension of
ISO-8859-1), and is stricter about UTF-16 detection.

Updated to the latest tree-sitter parser for Elixir, LaTeX, Make, Nix,
Rust and YAML.

### Build

Releases now include prebuilt musl binaries.

## 0.62 (released 20th December 2024)

### Diffing

Improved handling of multiline strings, which could cause a crash if
they occurred at the end of the file. This was particularly noticeable
with YAML.

### Parsing

Improved language detection when one argument is a named pipe.

Updated to the latest tree-sitter parser for Bash, C, C++, C#, CSS,
Go, Haskell, HTML, Java, JavaScript, JSON, Julia, Lua, Objective-C,
OCaml, PHP, Python, Ruby, Scala, TOML, TypeScript and XML.

### Syntax Highlighting

Improved syntax highlighting, particularly for keywords.

### Build

difftastic now requires Rust 1.74.1 to build.

Prebuilt packages for macOS on x86-64 are now built on macOS 13.

## 0.61 (released 24th October 2024)

**Recommended git configuration has changed! Please update your
`~/.gitconfig` to [match the git
instructions](https://difftastic.wilfred.me.uk/git.html), regardless
of your difftastic version.**

### Display

Side-by-side display is now smarter on very wide terminals when the
content is narrow.

### Diffing

Fixed a crash (introduced in 0.60) when the final line in a file does
not have a trailing newline and occurs more than once in the file.

### Build

difftastic now requires Rust 1.66 to build.

## 0.60 (released 1st August 2024)

### Diffing

Fixed a crash (introduced in 0.59) when the final changed hunk
included the last line of the file.

### Display

Fixed an issue where files with no common content would show duplicate
hunks.

Fixed a performance issue when files had extremely long lines
(e.g. 100,000+ characters).

## 0.59 (released 20th July 2024)

### Diffing

Fixed crash on some textual files where a single change contained more than
1,000 words.

### Parsing

Added support for device tree and F#.

Difftastic now uses tree-sitter comment highlighting as a hint that
nodes should be treated as atoms. This ensures comments are treated
more consistently across languages. This fixes cases in Elm where
comment differences were ignored, and may improve other languages too.

## 0.58 (released 11th May 2024)

### Parsing

Difftastic now preserves tree-sitter parse tree structure on parse
error nodes. This reverts the flattening behaviour introduced in
0.38. Preserving structure tends to produce better diffs, although it
increases the risk that difftastic will show fewer changes in the
presence of parse errors.

Since difftastic is now conservative with parse errors
(DFT_PARSE_ERROR_LIMIT is 0 by default), this seems like a better
tradeoff.

Updated C, C++, CMake, CSS, Elm, Go, Lua and Python parsers.

### Diffing

`--strip-cr` now defaults to `on`, so comparing a file with CRLF
endings with a file with unix line endings will not show spurious
changes.

### Documentation

Difftastic now has a man page, see the `difft.1` file.

### Performance

Fixed a memory leak and improved performance in some cases.

### Command Line Interface

Fixed a crash when difftastic could not detect the terminal width,
such as inside eshell.

Difftastic now also considers $COLUMNS when detecting the terminal
width.

## 0.57 (released 1st April 2024)

### Parsing

Text file detection is now stricter, considering null bytes as a hint
that files are binaries.

### Diffing

Fixed an issue where hidden files (filename starting with `.`) were
ignored when diffing directories.

Scheme now uses the same slider heuristics as other lisps, preferring
the outer delimiter.

Fixed an issue with line-based diffing where only the first line in a
large changed region was highlighted. This was particularly noticeable
when diffing brand new files.

### Display

Fixed an issue when reporting changes in binary files, where trailing
whitespace was inconsistent with other changes shown.

## 0.56.1 (released 5th March 2024)

### Build

Fixed an issue with building difftastic on aarch64 with rust 1.71 or
earlier.

## 0.56 (released 5th March 2024)

### Parsing

Updated JavaScript, TypeScript, QML and Perl parsers.

`Makefile*.in` is now detected as Makefile syntax.

Improved shebang parsing with whitespace, e.g. `#! /bin/bash` is now
detected as a shell script.

Added support for Scheme and Smali.

### Diffing

Fixed an issue with runaway memory usage on text files with very long
lines.

### Display

Fixed an issue where all files would show a permissions change when
using difftastic with `git difftool`.

Fixed an issue with paths not showing the containing directory when
using difftastic with `git difftool`.

Difftastic now correctly reports file permission changes when called
from `git diff`.

Fixed an issue with the experimental JSON display mode where it
ignored `--skip-unchanged`.

Fixed an issue with tabs not being replaced in single-column display.

## 0.55 (released 1st February 2024)

### Parsing

Added support for Objective-C and VHDL.

Files starting with `<?xml` are now parsed as XML.

Fixed a `munmap_chunk(): invalid pointer` crash on parsing some
large files, particularly JSON.

### Display

The default display width for tabs has changed to 4.

Fixed an issue where difftastic would sometimes output literal tabs
rather than respecting the display width for tabs.

### Build

difftastic now requires Rust 1.65 to build.

## 0.54 (released 7th January 2024)

### Parsing

Added support for Salesforce Apex.

Improved parsing of regex literals in Clojure and strictness
annotations in Haskell.

### Diffing

Difftastic will now also report file permission changes.

Fixed an issue where directory diffing would show a file more than
once.

### Display

Fixed a rare crash when the last non-blank line had changes for
certain parsers, particularly YAML.

### Command Line Interface

Difftastic now errors if given a single path, unless that file
contains conflict markers. Previously this was a warning.

### Build

Difftastic now requires Rust 1.63 to build.

## 0.53.1 (released 26th November 2023)

### Build

Fixed a dependency issue that broke aarch64 builds on older rustc versions.

## 0.53 (released 24th November 2023)

### Parsing

Added support for SCSS.

Updated the Kotlin parser and improved handling of Kotlin nullable
types.

`.snap` files (Jest snapshots) are now detected as JavaScript files.

### Diffing

Fixed an issue where adding or removing blank lines would be ignored
by the line-oriented diffing logic.

Directory diffing now respects `.gitignore` files.

Directory diffing can now be sorted by path with the `--sort-paths`
option.

### Command Line Interface

Added the option `--strip-cr`. This removes all carriage return
characters before diffing, which is helpful when dealing with a mix of
Windows and non-Windows flies.

The option `--skip-unchanged` now has a corresponding environment
option `DFT_SKIP_UNCHANGED`.

### Build

Difftastic now requires Rust 1.60 to build.

## 0.52 (released 8th October 2023)

### Parsing

Added support for XML and JSONL.

### Diffing

Text nodes now get word diffing, consistent with string literals and
comments. This is used in languages like HTML and XML that have
separate text nodes.

### Display

Improved syntax highlighting of constructors (i.e. type names when
values are constructed, such as `Foo {}`).

Improved syntax highlighting for C#.

### Build

This release does not provide a prebuilt musl binary, due
to [a dynamic linking
issue](https://github.com/Wilfred/difftastic/issues/563) with binaries
in the release script.

musl remains tested in CI and supported for users, but you will need
to compile difftastic from source.

## 0.51.1 (released 25th August 2023)

Fixed an issue with GitHub actions that prevented prebuilt binaries
being attached to the release.

This is the same code as 0.51.0 otherwise.

## 0.51.0 (released 25th August 2023)

### Parsing

Updated Bash, Python and Rust parsers.

### Display

Added a JSON display option. This is currently unstable, and requires
you to set DFT_UNSTABLE. The JSON structure may change in future.

Please give it a try and give feedback on GitHub issues.

### Build

Added support for Linux with musl, Linux on aarch64, and macOS on
aarch64.

Note that Difftastic already worked on these platforms, but they are
now tested in CI and will be included in prebuilt binaries in
releases.

## 0.50 (released 15th August 2023)

### Conflicts

Difftastic now supports parsing files with conflict markers, enabling
you to diff the two conflicting file states.

```
$ difft file_with_conflicts.js
```

### Parsing

Updated Elixir, Erlang, Go, Kotlin and Racket parsers.

### Display

Tweaked the colours on the file header, to make metadata less
prominent.

Improved styling of file rename information.

Improved syntax hightling for Java built-in types.

### Diffing

Fixed an issue with runaway memory usage when the two files input
files had a large number of differences.

### Build

Difftastic now requires Rust 1.59 to build.

## 0.49 (released 26th July 2023)

### Parsing

Added support for LaTeX.

Updated grammars for C, C++ and Java.

Improved parsing of qualified constructors in Haskell.

Difftastic is now stricter about valid UTF-8 and UTF-16, considering
more of the file's bytes during filetype detection. This fixes cases
where e.g. PDF was sometimes incorrectly considered as UTF-8.

### Diffing

Improved handling of delimiters ("nested sliders") in languages that
prefer the outer delimiter, such as JSON and Lisps.

### Build

Difftastic now requires Rust 1.58 to build.

## 0.48 (released 12th July 2023)

### Parsing

Updated Scala parser.

Improved parsing of qualified modules and variables in Haskell.

### Diffing

Replaced strings now have subword highlighting, consistent with
replaced comments. Thanks @amnore!

Fixed an issue with the cost model for comment replacement, leading
difftastic to prefer modified comments even when exact comment matches
are possible.

Simplified the cost model, which previously had an inconsistent
heuristic depending on whether there were multiple items on the same
line. This can lead to slightly different items being marked as
changed, but on average the results are better.

### Display

Improved word highlighting in comments when they contain numbers or
hyphens.

### Internals

Difftastic's logging is now configured with the environment variable
`DFT_LOG`. This was previously `RUST_LOG`, which could interfere with
users configuring logging for their own development work.

## 0.47 (released 16th May 2023)

### Language Detection

Fixed an issue where file extensions of the form `*.foo.bar`
(e.g. `*.cmake.in`) were ignored.

Added an option `--override` which overrides language detection based
on a glob, e.g. `--override='*.js:javascript jsx'`. See `--help` for
full documentation and more examples.

Removed the `--language` option. This option was confusing (it took a
file extension rather than a language name) and not very useful
(it overrode language detection for all files together).

### Parsing

Added support for Solidity.

### Display

When difftastic is invoked with two file paths, it will now truncate
the path shown to the shared common parts. This is particularly
helpful when using difftastic with mercurial.

```
$ difft dir1/foo/bar.py dir2/foo/bar.py
foo/bar.py -- Python
...
```

## 0.46 (released 31st March 2023)

### Command Line Interface

Removed the option `--missing-as-empty`. This is no longer needed as
difftastic handles `/dev/null` gracefully on all platforms.

### Parsing

Added support for Ada.

`.ino` files are now treated as C++.

Improved parsing for TOML.

Updated grammars for Bash, C, C++, C#, Clojure, CMake, Elixir, Go,
Java, JavaScript, OCaml, Perl, QML and TypeScript.

Difftastic now prefers treating files as 'mostly UTF-8' or binary rather than
UTF-16. Many files can be decoded as UTF-16 without decoding errors
but produce nonsense results, so this heuristic seems to work better.

Fixed an issue where difftastic would discard the last newline in a
file before diffing. This was most noticeable when doing line-oriented
diffs and the last line had changed.

### Display

Difftastic no longer uses purple to highlight regions that are missing
styling. This was intended as a debug feature, but it in practice it
only highlighted trailing whitespace for a few languages.

## 0.45 (released 3rd March 2023)

### Diffing

Racket and Newick are now treated as lisps for the purposes for
parenthesis heuristics.

### Parsing

Fixed an issue where parse errors were undercounted, particularly in
YAML files.

Improved parsing for Makefiles.

## 0.44 (released 2nd March 2023)

### Parsing

Added support for Newick and Racket.

### Diffing

Difftastic now uses a line-oriented diff on files that have any parse
errors. The parse error limit defaults to 0, but it is configurable
with `DFT_PARSE_ERROR_LIMIT` or `--parse-error-limit`.

Line-oriented diffing now respects `--check-only`, consistent with
structural diffing.

### Display

Improved syntax highlighting for keywords.

If a file exceeds `DFT_BYTE_LIMIT`, difftastic now displays its size in
the header.

## 0.43.1 (released 3rd February 2023)

This release has no logic changes from 0.43.

The only difference is that the `test_gzip_is_binary` test is ignored by default, as it depends on MIME database availability. This database isn't always installed in packaging environments, so packagers saw this test failing.

## 0.43 (released 3rd February 2023)

### Parsing

Added support for R.

Difftastic now considers gzipped files to be binary, even if they
happen to be valid UTF-16.

### Diffing

Fixed a rare crash when one file had repeated lists that partially
matched the other side.

### Display

Fixed an issue with single-column display when colour is disabled,
where newlines were missing from the output.

### Command Line Interface

`--help` now shows the default value for all arguments (it was
previously missing `--color` and `--display`).

`--color` can now be configured with the environment variable
`DFT_COLOR`.

Fixed an issue where git on Windows would fail with an error about
`/dev/null`.

## 0.42 (released 15th January 2023)

### Parsing

Improved CSS parsing and HTML sublanguage parsing.

### Diffing

Added an `--ignore-comments` option.

Improved line-oriented diffing performance, particularly when the two
files have few lines in common.

### Display

Fixed an issue with unwanted underlines with line-oriented diffing
when DFT_BYTE_LIMIT is reached.

Fixed a crash in inline display when the file ends with whitespace.

### Build

Renamed the vendored parser directory to vendored_parsers/, as `cargo
vendor` would clobber the `vendor/` directory.

## 0.41 (released 8th January 2023)

### Parsing

Difftastic now supports embedded languages in HTML and Makefiles. This
enables difftastic to parse embedded CSS or JavaScript in HTML, or
Bash in Makefiles, leading to better diffs in those files.

Tab replacement is now done after parsing. If tab characters are
syntactically important, they are now handled correctly. This was
particularly an issue in Makefiles, where indentation must be tabs.

### Diffing

Improved word highlighting in changed comments. Whitespace is never
underlined and the characters `-` and `_` are now considered word
constituents.

### Display

`--display=inline` now respects `--tab-width`.

Fixed an issue with unwanted underlines with line-oriented diffing
when DFT_GRAPH_LIMIT is reached.

Improved syntax highlighting for predefined types in TypeScript.

## 0.40 (released 28th December 2022)

### Diffing

Diffing is now more efficient: the generated graphs have ~20% fewer
vertices. This improves performance (less memory, shorter runtime),
and also enables difftastic to handle larger files (you're less likely
to reach `DFT_GRAPH_LIMIT`).

This improvement was contributed by @QuarticCat, thanks!

### Parsing

`rebar` files (e.g. `rebar.lock`) are no longer associated with
Erlang, only `*.erl` files, as the Erlang parser does not currently
support them.

### Command Line Interface

`--list-languages` now shows filenames associated with languages
(e.g. `Cargo.lock` is TOML) in addition to extensions.

### Display

Symlinks are now expanded before calculating relative paths, resulting
in relative paths being shown in more cases.

### Build

Difftastic is now built with Ubuntu 20.04 on GitHub, so prebuilt
binaries do not require libc version 2.32. This was broken in 0.39 due
to a GitHub default changing.

## 0.39 (released 19th December 2022)

### Parsing

Added support for Erlang.

Improved detection of binary content when the MIME type database
incorrectly claims a text file is another format.

### Display

Paths are now always displayed relative to the current working
directory.

Fixed a race condition where diffing directories would lead to
interleaved output from different files.

### Command Line Interface

Added a `--check-only` flag that reports if there are any syntactic
differences, but doesn't calculate or print them. This is much faster
than normal syntactic diffing.

Difftastic now sets the exit code if it finds changes and
`--exit-code` is set. See [usage in the
manual](https://difftastic.wilfred.me.uk/usage.html) for the full list
of exit codes used.

## 0.38 (released 14th November 2022)

### Parsing

Syntax error nodes are now always treated as atoms. This produces
better results when difftastic doesn't fully support the syntax
(e.g. PostCSS is a superset of CSS) or when there are actual syntax
errors.

Fixed a crash on file content detection when the local MIME database
contains blank lines.

### Display

Line numbers styling has been tweaked to make it more visually
distinct from file content.

Fixed an issue with inline display discarding newlines when color is
disabled, leading to broken display.

Two column display now ensures that both columns have the same width,
so line wrapping is at the same point on both sides.

## 0.37 (released 14th October 2022)

### Manual

Added a Chinese translation: https://difftastic.wilfred.me.uk/zh-CN/

### Diffing

Improved runtime performance and memory usage (thanks to @QuarticCat).

Standalone `.` is now considered punctuation in the diff cost model,
which improves diff results in some cases.

### Parsing

Updated to the latest tree-sitter parser for Swift.

### Command Line Interface

Difftastic will now read a file from stdin if given `-` as a path
argument.

Added an option `--context` to control the number of lines of context
displayed.

`--list-languages` now respects the value of `--color`, whose default
only uses styling when stdout is a TTY.

### Display

Fixed side-by-side display width when color is disabled (when piping
difftastic stdout or with `--color=never`).

### Build

Fixed an issue with building on Windows with gcc.

## 0.36.1 (released 17th September 2022)

Fixed a release script that prevented 0.36.0 from including Windows
binaries.

## 0.36 (released 17th September 2022)

### Diffing

Improved diff cost model to prefer finding unchanged variable names
over unchanged punctuation.

### Parsing

Added support for Hare, Pascal and QML.

ZIP files are now always treated as binary files.

Difftastic is now stricter about text content validity, so more binary
files are correctly detected.

### Display

Changed words in changed comments are now also underlined, to make
them more visible.

Fixed crash when word-wrapping lines containing Unicode combining
diacritics characters.

## 0.35 (released 2nd September 2022)

### Diffing

Difftastic now fixes sliders in more cases, producing better diff results.

### Parsing

Difftastic will now autodetect files in UTF-16-BE and
UTF-16-LE. Previously it required files to be UTF-8.

Added support for Makefiles.

Fixed an issue with HCL language detection on `.workflow` files. Fixed
an issue with Makefile language detection.

### Command Line Interface

Fixed terminal width detection when only stderr is a TTY (e.g. when
using difftastic with git). This was broken in 0.34.

Added an option `--list-languages` which reports all the languages
supported, along with the extensions associated with them.

## 0.34 (released 27th August 2022)

### Build

Fixed build on Rust 1.61+.

### Display

Fixed an issue where side-by-side display would sometimes print the
line number from the second file rather than the first file.

## 0.33 (released 21st August 2022)

### Diffing

Difftastic now explores 2x more parenthesis nesting
possibilities. This can make diffing slower, but produces
substantially better results.

### Parsing

Added support for CMake.

Improved comment detection using tree-sitter syntax highlighting
queries.

Fixed an issue with language detection when file names were very
short.

### Command Line Interface

Difftastic prefers to show the second path when called with two
arguments. This fixes an issue (broken in 0.31) where the path would
be shown as `/tmp/git-blob-abc/file_name`.

### Build

Difftastic now requires Rust 1.57 to build.

Fixed build on Windows. Previously it would fail
non-deterministically.

## 0.32 (released 7th August 2022)

### Diffing

Improved performance in many cases, particularly for files with a
fairly flat structure.

### Command Line Interface

Difftastic now treats the path `/dev/null` as an empty file, even if
that path doesn't exist on the current machine. This fixes a crash
when using difftastic with git on Windows.

## 0.31 (released 11th July 2022)

### Parsing

Added Hacklang and SQL support.

Updated to the latest tree-sitter parsers for C#, Dart, Elm, Gleam,
Haskell, HCL, Java, JSON, OCaml, PHP, Python, Ruby, Scala and
TypeScript.

### Display

Fixed an issue with inline mode where there was a blank line between
every line.

### Command Line Interface

Fixed language detection and filename display when one path was
`/dev/null` and difftastic was invoked with two arguments.

## 0.30 (released 4th July 2022)

### Parsing

Added support for HTML and Julia.

### Display

Fixed an issue where line numbers were coloured even when colour was
disabled.

Improved alignment when files contain Unicode characters that are more
than one column wide.

Improved syntax highlighting for conditionals, particularly for Dart,
Elvish and HCL.

### Command Line Interface

`--node-limit` has been replaced by `--graph-limit`, and the
corresponding environment variable `DFT_NODE_LIMIT` has been replaced
with `DFT_GRAPH_LIMIT`.

`--graph-limit` makes difftastic give up on structural diffs after
traversing this many graph nodes. `--node-limit` applied a limit based
on an estimate of how big the graph would be, leading to very slow
diffs when the estimate was wrong.

This new setting sets a more accurate limit on difftastic
performance. It also means that difftastic will always try a
structural diff first. This will be slower for files that exceed
`--graph-limit`, but guarantees that files with a small number of
changes will always get a structural diff.

## 0.29.1 (released 13th June 2022)

Fixed a major memory regression in 0.29 when performing large
line-based diffs (e.g. files of 100 KLOC or more).

## 0.29 (released 9th June 2022)

Performance has improved in 0.29, and larger files typically see a 30%
reduction in runtime.

### Parsing

Improved detection of binary files, including using
`/usr/share/mime/magic` when available.

Improved handling of comments and regexp literals in Perl.

Added Elvish support.

### Diffing

Improved delimiter heuristics in lisp-like languages.

### Display

Difftastic now displays information about file renames. Previously, it
would only show the new name.

## 0.28 (released 29th April 2022)

### Parsing

Added support for HCL, Perl and Swift.

Improved language detection for JSON. More file extensions and file
names are recognised as JSON, e.g. `.jsonl`.

### Display

Fixed crash in inline mode.

Added an option `--tab-width` that controls how many spaces are used
to display tabs. The default value is 8, consistent with older
versions.

Added an option `--syntax-highlight` that controls whether the output
is syntax highlighted.

### Diffing

Difftastic now diffs files in parallel when diffing whole directories,
increasing performance.

Directory diffing now correctly handles files that are only in one of
the directories.

### Command Line Interface

Fixed handling of paths that aren't valid UTF-8.

`--missing-as-empty` now only applies when diffing files, and has no
effect when diffing directories.

### Note: Crates.io Is Patched

Due to the 10 MB crate limit, two patches were applied before
uploading to crates.io. The source code on crates.io therefore does
not exactly match this git tag.

`Cargo.toml` had the include list changed (committed on master as
d9ef270d273e3f7c61e2e167b7efbd33b36d0c96), and the vendored perl
parser had whitespace removed with `sed "s/^[ \t]*//" -i
vendor/tree-sitter-perl-src/parser.c`.

## 0.27 (released 18th April 2022)

### Parsing

Added support for Kotlin and TOML.

Fixed an issue with YAML and `|` block strings.

Updated to the latest upstream C++, C#, Elixir, Go, Haskell, Java,
Python, Ruby, Rust and TypeScript parsers.

### Diffing

Improved performance in large files when changes are clustered together.

### Display

Improved syntax highlighting.

Tabs are now rendered with eight spaces.

### Command Line Interface

Difftastic now validates environment variables the same way as
arguments. `DFT_DISPLAY=no-such-mode` will now error rather than
silently using the default display mode.

### Build

The upstream Haskell parser has been ported from C++14 to pure C. This
should allow difftastic to build on platforms with older C++
compilers.

## 0.26.3 (released 10th April 2022)

### Release

Difftastic now uses GitHub releases with precompiled binaries for
Linux, macOS and Windows.

## 0.26.2 (released 10th April 2022)

### Build

Fixed compilation error on Windows due to GCC extension usage in the
tree-sitter-nix library.

## 0.26.1 (released 10th April 2022)

### Build

This version of difftastic is also available as a GitHub release with
precompiled binaries available.

### Parsing

Fixed Zig parsing of `@foo` identifiers.

### Display

Fixed a crash when inserting newlines in JSX literals.

## 0.26 (released 9th April 2022)

### Build

Fixed an issue where C++ libraries were built before before the C
libraries that they depended on.

### Display

The side-by-side display no longer pads the right column to fill the
terminal. This improves display when the terminal is slightly shrunk,
or when wide characters (e.g. emoji) are used.

Improved syntax highlighting for boolean constants and character
literals.

### Parsing

Added Gleam, Elm, YAML and Zig support.

Improved Clojure parsing with `^Metadata`.

### Command Line Interface

Added the `--display` option to switch between `side-by-side`,
`side-by-side-show-both`, and `inline` display modes. This replaces
the `INLINE` and `DFT_SHOW_BOTH` environment variables.

Added the `--language` option to enable overriding language
detection. When specified, language detection is disabled, and the
input file is assumed to have the extension specified.

### Diffing

Improved diff results for nested sequences `foo(bar(baz()))` in C-like
languages.

## 0.25 (released 31st March 2022)

### Display

Difftastic no longer shows "1/1" when a file only has a single hunk.

Improved Clojure and Scala syntax highlighting.

When a file is entirely unchanged, difftastic now shows "no changes"
even if it successfully parsed. Previously it would only show "no
syntactic changes".

Fixed an issue where some colors were shown when `--color never` was
specified.

Fixed a crash when a text file ended with a multibyte character.

Fixed side-by-side display when source files contained CRLF.

### Parsing

Fixed an issue in C and C++ where blank lines were highlighted after
novel preprocessor lines.

Fixed an issue with parsing `[` and `]` in Java.

Fixed an issue with parsing interpolated strings in PHP.

Added support for Janet, Lua and Nix.

## 0.24 (released 26th March 2022)

### Diffing

Reduced the default value of DFT_NODE_LIMIT from 100,000 to
30,000. This fixes cases where files near the limit would use too much
memory and not terminate.

### Display

Fixed an issue where hunks would be missing lines. This occurred in
certain circumstances when a line contained both changed and unchanged
parts.

Fixed an issue where blank lines at the beginning or end of a file
would be excluded from context.

Fixed an issue where lines containing only whitespace would be
highlighted in purple.

Fixed an issue with changed multiline strings where blank lines were
not highlighted.

Improved Clojure syntax highlighting.

### Parsing

Added support for Dart.

### Command Line Interface

Difftastic will now warn if both arguments point to the same file.

When diffing directories, diff results are printed incrementally
rather than waiting for the results of all files before printing.

## 0.23.1 (released 19th March 2022)

Fixed crash where the 'shrink unchanged' logic would not set the
change state on the outer list.

## 0.23 (released 17th March 2022)

### Diffing

Improved performance on very large files that are compared by text.

Fixed some cases where changing list delimiters would lead to
incorrect diffs.

Fixed an issue where lines were not aligned correctly after correcting
sliders.

Fixed an issue the outermost delimiter in lists was sometimes
incorrectly marked as unchanged, producing non-optimal diffs.

### Display

Display now prefers to align blank lines in the display, producing
significantly better results in many cases.

Fixed an issue where some lines in a hunk were not displayed.

## 0.22 (released 10th March 2022)

Difftastic now requires Rust 1.56 to build.

### Parsing

Added support for PHP.

Fixed handling of `<` `>` delimiters in C++ and Rust.

### Diffing

Difftastic will now split files that contain obviously unchanged
regions, substantially improving performance when a file has multiple
changes that have many unchanged items between them.

Improved diff results when choosing between syntax nodes at different
nesting levels. This is restoring a heuristic that was removed in
0.20.

Improved diff results when lists have unequal sizes.

Improved diff results when the language parser thinks that names occur
in different syntactic positions.

Adjusted the heuristics for 'so much has changed in this expression
that it is confusing to highlight the unchanged parts'. The heuristic
is now less aggressive, which helps performance and seems to produce
slightly better results.

## 0.21 (released 28th February 2022)

### Parsing

Difftastic now understands `-*-` file headers (as used by Emacs) when
performing language detection.

### Display

Improved alignment logic. This fixes a bug where the last line of a
file wasn't displayed, and generally improves how difftastic chooses
to align content.

Fixed a crash when line wrapping produced an entirely blank line.

### Diffing

Improved word diffing (in both comments and line-oriented diffs) when
the source contains Unicode characters. Word splitting now uses the
Unicode alphabetic property.

Fixed a crash when comments contained multibyte Unicode characters.

## 0.20 (released 20th February 2022)

### Diffing

Diffing now correctly handles nodes being moved to parent
lists. Previously this would be ignored, leading to difftastic
incorrectly claiming things were unchanged. This also leads to better
diffing results in general, although is somewhat slower (2x in
testing).

Improved slider logic in larger expressions.

Increased the default value DFT_NODE_LIMIT to 100,000 (from
50,000). This increases the likelihood that files get a syntactic diff
whilst still having acceptable performance.

### Display

Fixed an issue where whole file additions/removals were printed twice.

Fixed an issue where difftastic didn't show context on hunks where the
unchanged content was on different lines.

Hunks are now merged if the lines are immediately adjacent
(e.g. hunk 1 ends on line 11, hunk 2 starts on line 12), not just if
they're overlapping.

### Command Line Interface

Difftastic will now use a text dif for large files that are too big to
parse in a reasonable amount of time. This threshold is
configurable with `--byte-limit` and `DFT_BYTE_LIMIT`.

Fixed a crash when called with zero arguments.

## 0.19 (released 7th February 2022)

### Parsing

Fixed an issue with changes being ignored in OCaml's `{||}` string
literals.

### Display

Fixed an issue where larger additions were not lined up with removals.

Improved syntax highlighting for Clojure, Common Lisp and TypeScript.

Comments are now highlighted with italics, making it easier to see
syntax even when text is red.

Built-in constants are now highlighted consistently with other
constants.

Improved minor display issues when one file is longer than the other.

### Diffing

If given binary files, difftastic will now report if the file contents
are identical.

Difftastic will now use a line-oriented diff for large files, rather
than trying to use more memory than is available. This threshold is
configurable with `--node-limit` and `DFT_NODE_LIMIT`.

Fixed a bug in the line-oriented diff logic where lines weren't shown
if they did not have both word additions and word removals.

### Command Line Interface

Difftastic will now error if either argument does not exist, unless
`--missing-as-empty` (new argument) is passed. This is a better
default, but requires Mercurial uses to [specify this
flag](https://difftastic.wilfred.me.uk/mercurial.html) in their
configuration.

## 0.18.1 (released 30 January 2022)

Fixed a compilation issue on Rust 1.54 (0.18 only built on newer
versions of Rust).

## 0.18 (released 30 January 2022)

### Parsing

Fixed an issue with missing positions in OCaml attribute syntax.

Fixed parsing issues in Common Lisp: character literals, `loop` macro
usage with `maximizing`.

### Diffing

Improved performance when diffing a single large expression.

### Display

Fixed display issues where lines were printed more than once.

Subword changes in comments are now shown in bold, to make them more
visible.

Improved colours on terminals with light coloured backgrounds.

### Command Line Interface

Added a `--width` option which allows overriding `DFT_WIDTH`, and is
more discoverable.

Added a `--color` option which allows explicitly enabling/disabling
colour output.

Added a `--background` option which controls whether difftastic uses
bright or dark colours. This can also be controlled by
`DFT_BACKGROUND`.

Added a `--skip-unchanged` option which suppresses printing for files
that have no changes.

## 0.17 (released 25 January 2022)

### Diffing

Improved performance when all file changes are close together.

Fixed a bug where syntax after the last changed item was incorrectly
marked as added.

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

Line-oriented diffing now has a standalone implementation rather than
reusing structural diff logic. This is significantly faster and
highlighted better.

Improved performance when diffing two identical files. This is common
when diffing directories.

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
