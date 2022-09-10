# Usage

## Diffing Files

```
$ difft sample_files/before.js sample_files/after.js
```

## Diffing Directories

```
$ difft sample_files/dir_before/ sample_files/dir_after/
```

Difftastic will recursively walk the two directories, diffing files
with the same name.

The `--skip-unchanged` option is useful when diffing directories that
contain many unchanged files.

## Language Detection

Difftastic guesses the language used based on the file extension, file
name, and the contents of the first lines.

You can override the language detection by passing the `--language`
option. Difftastic will treat input files as if they had that
extension, and ignore other language detection heuristics.


```
$ difft --language cpp before.c after.c
```

## Options

Difftastic includes a range of configuration CLI options, see `difft
--help` for the full list.

Difftastic can also be configured with environment variables. These
are also visible in `--help`.

For example, `DFT_BACKGROUND=light` is equivalent to
`--background=light`. This is useful when using VCS tools like git,
where you are not invoking the `difft` binary directly.
