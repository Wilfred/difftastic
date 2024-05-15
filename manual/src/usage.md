# Usage

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

## Language Detection

Difftastic guesses the language used based on the file extension, file
name, and the contents of the first lines. To see the languages
available, and the associated file names, use the `--list-languages`
option.

```
$ difft --list-languages
```

You can override language detection for specific file globs using the
`--override` option.

```bash
$ difft --override=GLOB:NAME FIRST-FILE SECOND-FILE

# For example, treating .h files as C rather than C++:
$ difft --override=*.h:c sample_files/preprocesor_1.h sample_files/preprocesor_2.h
```

## Options

Difftastic includes a range of configuration CLI options, see `difft
--help` for the full list.

Difftastic can also be configured with environment variables. These
are also visible in `--help`.

For example, `DFT_BACKGROUND=light` is equivalent to
`--background=light`. This is useful when using VCS tools like git,
where you are not invoking the `difft` binary directly.

## Exit Codes

2: Difftastic was given invalid arguments. This includes invalid usage
(e.g. the wrong number of arguments) as well as paths that difftastic
cannot read (e.g. non-existent paths or insufficient permissions).

1: When called with `--exit-code`, difftastic will return an exit code
of 1 when it finds any syntactic changes (in text files) or byte changes
(in binary files).

0: All other cases.
