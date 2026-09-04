% DIFFT(1) difftastic | User Commands

NAME
====

**difft** - a structural diff tool that understands syntax

SYNOPSIS
========

**difft** \[_OPTIONS_] _OLD-PATH_ _NEW-PATH_

**difft** \[_OPTIONS_] _DIRECTORY-ONE_ _DIRECTORY-TWO_

**difft** \[_OPTIONS_] _FILE-WITH-CONFLICTS_

**difft** \[_OPTIONS_] _DISPLAY-PATH_ _OLD-FILE_ _OLD-HEX_ _OLD-MODE_ _NEW-FILE_ _NEW-HEX_
_NEW-MODE_

**difft** \[_OPTIONS_] _OLD-NAME_ _OLD-FILE_ _OLD-HEX_ _OLD-MODE_ _NEW-FILE_ _NEW-HEX_
_NEW-MODE_ _NEW-NAME_ _METADATA_

**difft** **\-\-list-languages**

**difft** **\-\-help**

**difft** **\-\-version**

DESCRIPTION
===========

difftastic (difft) is a CLI diff tool that compares files based on
their syntax, not line-by-line. Difftastic produces accurate diffs
that are easier for humans to read.

Difftastic normally compares two paths. If both paths are directories, difftastic walks
them recursively and compares files with matching names. A path of **-** reads that file
from standard input, and **/dev/null** is treated as an empty file.

If a single path is given, difftastic looks for **<<<<<<<** conflict markers in that file,
reconstructs the two conflicting file states, and diffs those.

The 7 and 9 argument forms are the calling conventions used by **GIT_EXTERNAL_DIFF**, so
difftastic can be invoked directly by git. See the manual for how to configure git,
Mercurial, Jujutsu or Fossil to use difftastic.

OPTIONS
-------

**\-\-background** _BACKGROUND_

: Set the background brightness. Difftastic will prefer brighter colours on dark
  backgrounds.

    Possible values: _dark_, _light_. Default: _dark_. Environment variable:
    **DFT_BACKGROUND**.

**\-\-byte-limit** _LIMIT_

: Use a line-oriented diff if either input file exceeds this size.

    Default: _1000000_. Environment variable: **DFT_BYTE_LIMIT**.

**\-\-check-only**

: Report whether there are any changes, but don't calculate them. Much faster.

    Difftastic does not parse the files in this mode, so any byte difference is reported as
    a change.

    Environment variable: **DFT_CHECK_ONLY**.

**\-\-color** _WHEN_

: When to use color output.

    Possible values: _always_, _auto_, _never_. Default: _auto_, which uses colour when the
    output is a terminal or when the git pager is in use. Environment variable:
    **DFT_COLOR**.

**\-\-context** _LINES_

: The number of contextual lines to show around changed lines.

    Default: _3_. Environment variable: **DFT_CONTEXT**.

**\-\-display** _MODE_

: Display mode for showing results.

    _side-by-side_: Display the before file and the after file in two separate columns, with
    line numbers aligned according to unchanged content. If a change is exclusively
    additions or exclusively removals, use a single column.

    _side-by-side-show-both_: The same as _side-by-side_, but always uses two columns.

    _inline_: A single column display, closer to traditional diff display.

    _json_: Output the results as a machine-readable JSON array with an element per file.
    This is an unstable feature whose format may change, so it also requires the environment
    variable **DFT_UNSTABLE** to be set.

    Default: _side-by-side_. Environment variable: **DFT_DISPLAY**.

**\-\-exit-code**

: Set the exit code to 1 if there are syntactic changes in any files. For files where
  there is no detected language (e.g. unsupported language or binary files), sets the exit
  code if there are any byte changes.

    Environment variable: **DFT_EXIT_CODE**.

**\-\-graph-limit** _LIMIT_

: Use a line-oriented diff if the internal graph exceeds this number of vertices. This
  limit controls the worst case runtime and memory usage for difftastic.

    Higher values will allow difftastic to perform a structural diff in more cases. Higher
    values will also increase the time before difftastic gives up on structural diffing, and
    increase peak memory usage.

    Default: _3000000_. Environment variable: **DFT_GRAPH_LIMIT**.

**-h, \-\-help**

: Print help information.

**\-\-ignore-comments**

: Don't consider comments when diffing.

    Environment variable: **DFT_IGNORE_COMMENTS**.

**\-\-list-languages**

: Print all the languages supported by difftastic, along with their recognised extensions.

**\-\-override** _GLOB:NAME_

: Associate this glob pattern with this language, overriding normal language detection.
  For example:

    ```
    $ difft --override='*.c:C++' old.c new.c
    ```

    See **\-\-list-languages** for the list of language names. Language names are matched case
    insensitively. Overrides may also specify the language _"text"_ to treat a file as plain
    text.

    This argument may be given more than once. For example:

    ```
    $ difft --override='CustomFile:json' --override='*.c:text' old.c new.c
    ```

    To configure multiple overrides using environment variables, difftastic also accepts
    **DFT_OVERRIDE_1** up to **DFT_OVERRIDE_9**.

    ```
    $ export DFT_OVERRIDE='CustomFile:json'
    $ export DFT_OVERRIDE_1='*.c:text'
    $ export DFT_OVERRIDE_2='*.js:javascript jsx'
    ```

    When multiple overrides are specified, the first matching override wins.

    Environment variable: **DFT_OVERRIDE**.

**\-\-override-binary** _GLOB_

: Always treat file names matching this glob as binary files, ignoring the default
  heuristics for binary detection. For example:

    ```
    $ difft --override-binary='*.gz' old.gz new.gz
    ```

    This argument may be given more than once. For example:

    ```
    $ difft --override-binary='*.gz' --override-binary='foo.pickle' old.gz new.gz
    ```

    To configure multiple overrides using environment variables, difftastic also accepts
    **DFT_OVERRIDE_BINARY_1** up to **DFT_OVERRIDE_BINARY_9**.

    ```
    $ export DFT_OVERRIDE_BINARY='*.gz'
    $ export DFT_OVERRIDE_BINARY_1='*.bz2'
    $ export DFT_OVERRIDE_BINARY_2='foo.pickle'
    ```

    Environment variable: **DFT_OVERRIDE_BINARY**.

**\-\-parse-error-limit** _LIMIT_

: Use a line-oriented diff if the number of parse errors exceeds this value.

    A value of 0 means that any parse error will make difftastic use a line-oriented diff.

    Default: _0_. Environment variable: **DFT_PARSE_ERROR_LIMIT**.

**\-\-skip-unchanged**

: Don't display anything if a file is unchanged. This is useful when comparing directories
  of files.

    Environment variable: **DFT_SKIP_UNCHANGED**.

**\-\-sort-paths**

: When diffing a directory, output the results sorted by path. This is slower.

    Environment variable: **DFT_SORT_PATHS**.

**\-\-strip-cr** _on/off_

: Remove any carriage return characters before diffing. This can be helpful when dealing
  with files on Windows that contain CRLF line endings.

    When disabled, difftastic will consider multiline string literals (in code) or multiline
    text (e.g. in HTML) to differ if the two input files have different line endings.

    Possible values: _on_, _off_. Default: _on_. Environment variable: **DFT_STRIP_CR**.

**\-\-syntax-highlight** _on/off_

: Enable or disable syntax highlighting.

    Possible values: _on_, _off_. Default: _on_. Environment variable:
    **DFT_SYNTAX_HIGHLIGHT**.

**\-\-tab-width** _NUM_SPACES_

: Treat a tab as this many spaces.

    Default: _4_. Environment variable: **DFT_TAB_WIDTH**.

**-V, \-\-version**

: Print version information.

**\-\-width** _COLUMNS_

: Use this many columns when calculating line wrapping. If not specified, difftastic will
  detect the terminal width.

    Environment variable: **DFT_WIDTH**.

DEBUG OPTIONS
-------------

**\-\-dump-syntax** _PATH_

: Parse a single file with tree-sitter and display the difftastic syntax tree.

**\-\-dump-syntax-dot** _PATH_

: Parse a single file with tree-sitter and display the difftastic syntax tree, as a DOT
  graph.

**\-\-dump-ts** _PATH_

: Parse a single file with tree-sitter and display the tree-sitter parse
  tree.

ENVIRONMENT
===========

Every difftastic option can also be set with an environment variable, which is useful when
a version control tool invokes **difft** directly. The variable for each option is listed
in OPTIONS above. For example, **DFT_BACKGROUND=light** is equivalent to
**\-\-background=light**.

Command line arguments take precedence over the corresponding environment variable.

**DFT_OVERRIDE_1** to **DFT_OVERRIDE_9**

: Additional language overrides, in the same _GLOB:NAME_ format as **\-\-override**. Unlike
  **DFT_OVERRIDE**, these are always applied, even when **\-\-override** is also given.

**DFT_OVERRIDE_BINARY_1** to **DFT_OVERRIDE_BINARY_9**

: Additional binary file globs, in the same format as **\-\-override-binary**. Unlike
  **DFT_OVERRIDE_BINARY**, these are always applied, even when **\-\-override-binary** is also
  given.

**DFT_UNSTABLE**

: Enable unstable features whose behaviour may change in future releases. This is currently
  required by **\-\-display=json**.

EXIT STATUS
===========

**0**

: Difftastic ran successfully. Without **\-\-exit-code**, this is also returned when
  difftastic finds changes.

**1**

: Difftastic was run with **\-\-exit-code** and found syntactic changes in a text file, or
  byte changes in a binary file.

**2**

: Difftastic was given invalid arguments. This includes invalid usage (e.g. the wrong
  number of arguments) as well as paths that difftastic cannot read (e.g. non-existent
  paths or insufficient permissions).

EXAMPLES
========

Compare two files.

```
$ difft old.js new.js
```

Compare two directories.

```
$ difft old/ new/
```

Compare a file against a previous version read from standard input.

```
$ git show HEAD:foo.js | difft - foo.js
```

Diff a file that still contains conflict markers.

```
$ difft file_with_conflicts.js
```

Use difftastic for a single git command.

```
$ git -c diff.external=difft diff
```

MANUAL
======

A full HTML manual is available at <https://difftastic.wilfred.me.uk/introduction>.

SEE ALSO
========

**diff**(1), **git-diff**(1)

BUGS
====

See GitHub issues at <https://github.com/Wilfred/difftastic/issues>.

AUTHOR
======

Wilfred Hughes me@wilfred.me.uk
