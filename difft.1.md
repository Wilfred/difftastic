% DIFFT(1)

NAME
====

**difft** - a structural diff tool that understands syntax

SYNOPSIS
========

**difft** \[_OPTIONS_] _OLD-PATH_ _NEW-PATH_

**difft** \[_OPTIONS_] _DIRECTORY-ONE_ _DIRECTORY-TWO_

**difft** \[_OPTIONS_] _FILE-WITH-CONFLICTS_

**difft** **\-\-list-languages**

**difft** **\-\-help**

DESCRIPTION
===========

difftastic (difft) is a CLI diff tool that compares files based on
their syntax, not line-by-line. Difftastic produces accurate diffs
that are easier for humans to read.

OPTIONS
-------

**\-\-background** _BACKGROUND_

: Set the background brightness. Difftastic will prefer brighter colours on dark
  backgrounds.

**\-\-byte-limit** _LIMIT_

: Use a line-oriented diff if either input file exceeds this size.

**\-\-check-only**

: Report whether there are any changes, but don't calculate them. Much faster.

**\-\-color** _WHEN_

: When to use color output.

**\-\-context** _LINES_

: The number of contextual lines to show around changed lines.

**\-\-display** _MODE_

: Display mode for showing results.

    _side-by-side_: Display the before file and the after file in two separate columns, with
    line numbers aligned according to unchanged content. If a change is exclusively
    additions or exclusively removals, use a single column.

    _side-by-side-show-both_: The same as _side-by-side_, but always uses two columns.

    _inline_: A single column display, closer to traditional diff display.

    _json_: Output the results as a machine-readable JSON array with an element per file.

**\-\-exit-code**

: Set the exit code to 1 if there are syntactic changes in any files. For files where
  there is no detected language (e.g. unsupported language or binary files), sets the exit
  code if there are any byte changes.

**\-\-graph-limit** _LIMIT_

: Use a line-oriented diff if the structural graph exceed this number of nodes in memory.

**-h, \-\-help**

: Print help information.

**\-\-ignore-comments**

: Don't consider comments when diffing.

**\-\-list-languages**

: Print the all the languages supported by difftastic, along with their extensions.

**\-\-override** _GLOB:NAME_

: Associate this glob pattern with this language, overriding normal language detection.
  For example:

    $ difft \-\-override='*.c:C++' old.c new.c

    See **\-\-list-languages** for the list of language names. Language names are matched case
    insensitively. Overrides may also specify the language _"text"_ to treat a file as plain
    text.

    This argument may be given more than once. For example:

    $ difft \-\-override='CustomFile:json' \-\-override='*.c:text' old.c new.c

    To configure multiple overrides using environment variables, difftastic also accepts
    **DFT_OVERRIDE_1** up to **DFT_OVERRIDE_9**.

    $ export DFT_OVERRIDE='CustomFile:json'
    $ export DFT_OVERRIDE_1='*.c:text'
    $ export DFT_OVERRIDE_2='*.js:javascript jsx'

    When multiple overrides are specified, the first matching override wins.

**\-\-parse-error-limit** _LIMIT_

: Use a line-oriented diff if the number of parse errors exceeds this value.

**\-\-skip-unchanged**

: Don't display anything if a file is unchanged.

**\-\-sort-paths**

: When diffing a directory, output the results sorted by path. This is slower.

**\-\-strip-cr**

: Remove any carriage return characters before diffing. This can be helpful when dealing
  with files on Windows that contain CRLF, i.e. **\r\n**.

**\-\-syntax-highlight** _on/off_

: Enable or disable syntax highlighting.

**\-\-tab-width** _NUMSPACES_

: Treat a tab as this many spaces.

**-V, \-\-version**

: Print version information.

**\-\-width** _COLUMNS_

: Use this many columns when calculating line wrapping. If not specified, difftastic will
  detect the terminal width.

DEBUG OPTIONS
-------------

**\-\-dump-syntax** _PATH_

: Parse a single file with tree-sitter and display the difftastic syntax tree.

**\-\-dump-ts** _PATH_

: Parse a single file with tree-sitter and display the tree-sitter parse
  tree.

MANUAL
======

A full HTML manual is available at <https://difftastic.wilfred.me.uk/introduction>.

BUGS
====

See GitHub issues at <https://github.com/Wilfred/difftastic/issues>.

AUTHOR
======

Wilfred Hughes me@wilfred.me.uk
