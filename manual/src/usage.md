# Usage

## Diffing Files

```
$ difft sample_files/before.js sample_files/after.js
```

Difftastic uses the file extension to decide which parser to use.

## Diffing Directories

```
$ difft sample_files/dir_before/ sample_files/dir_after/
```

Difftastic will recursively walk the two directories, diffing files
with the same name.

## Language Detection

Difftastic guesses the language used based on the file extension, file
name, and the contents of the first lines.

You can override the language detection by passing the `--language`
option. Difftastic will treat input files as if they had that
extension, and ignore other language detection heuristics.


```
$ difft --language cpp before.c after.c
```
