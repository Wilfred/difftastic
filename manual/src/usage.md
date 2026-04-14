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

## Exit Codes

2: Difftastic was given invalid arguments. This includes invalid usage
(e.g. the wrong number of arguments) as well as paths that difftastic
cannot read (e.g. non-existent paths or insufficient permissions).

1: When called with `--exit-code`, difftastic will return an exit code
of 1 when it finds any syntactic changes (in text files) or byte changes
(in binary files).

0: All other cases.
