# Usage

This page describes how to use the `difft` binary directly. See also
the [Git](./git.html), [Mercurial](./mercurial.html),
[Fossil](./fossil.html), or [Jujutsu](./jj.html) pages for instructions on how to configure
them to use difftastic.

## File Arguments

### Diffing Files

```bash
$ difft FIRST-FILE SECOND-FILE

# For example:
$ difft sample_files/simple_1.js sample_files/simple_2.js
```

### Diffing Directories

```bash
$ difft FIRST-DIRECTORY SECOND-DIRECTORY

# For example:
$ difft sample_files/dir_1/ sample_files/dir_2/
```

Difftastic will recursively walk the two directories, diffing files
with the same name.

The `--skip-unchanged` option is useful when diffing directories that
contain many unchanged files.

### Reading stdin

You can read a file from stdin by specifying `-` as the file path.

```bash
$ difft - SECOND-FILE

# For example:
$ cat sample_files/simple_1.js | difft - sample_files/simple_2.js
```

### Files With Conflicts

*(Added in version 0.50.)*

If you have a file with `<<<<<<<` conflict markers, you can pass it as
a single argument to difftastic. Difftastic will construct the two
file states and diff those.

```bash
$ difft FILE-WITH-CONFLICTS

# For example:
$ difft sample_files/conflicts.el
```

## Configuration Options

Every difftastic option can be set with a command line argument or an
environment variable. For example, `DFT_BACKGROUND=light` is equivalent to
`--background=light`.

Environment variables are often useful when using VCS tools like git,
because they invoke the `difft` binary directly.

For a full list of configuration options, see `--help`.

```
$ difft --help
...
OPTIONS:
        --background <BACKGROUND>
            Set the background brightness. Difftastic will prefer brighter colours on dark backgrounds.

            [env: DFT_BACKGROUND=]
            [default: dark]
            [possible values: dark, light]
...
```

## Output Formats

Difftastic supports several display modes, selected with `--display`
(or the `DFT_DISPLAY` environment variable).

* `side-by-side` (the default): two columns, with line numbers aligned
  according to unchanged content.
* `side-by-side-show-both`: the same, but always uses two columns.
* `inline`: a single column, closer to a traditional diff.
* `html`: a self-contained HTML document with a side-by-side view.
* `json`: machine-readable JSON (requires `DFT_UNSTABLE=yes`).

### HTML Output

```bash
$ difft --display html sample_files/simple_1.js sample_files/simple_2.js > diff.html
```

The HTML output is a single, self-contained document with all styling
embedded, so it can be opened directly in a browser or shared as a
file. Changed files are shown in a two-column view, with changed
regions highlighted inline. When diffing directories, every file is
included in the one document.

The colour scheme follows the `--background` option, so use
`--background light` for a light theme.

## Exit Codes

2: Difftastic was given invalid arguments. This includes invalid usage
(e.g. the wrong number of arguments) as well as paths that difftastic
cannot read (e.g. non-existent paths or insufficient permissions).

1: When called with `--exit-code`, difftastic will return an exit code
of 1 when it finds any syntactic changes (in text files) or byte changes
(in binary files).

0: All other cases.
