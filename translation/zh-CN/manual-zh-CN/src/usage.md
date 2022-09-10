# Usage使用方法

## Diffing Files差异比较文件

```
$ difft sample_files/before.js sample_files/after.js
```

## Diffing Directories差异比较文件夹

```
$ difft sample_files/dir_before/ sample_files/dir_after/
```

Difftastic will recursively walk the two directories, diffing files
with the same name.Difftastic会递归地浏览这两个文件，对同名的文件进行差异分析。

The `--skip-unchanged` option is useful when diffing directories that
contain many unchanged files.当对比的文件夹之间许多未改变的文件时，`--skip-unchanged`选项将会十分有用。

## Language Detection语言检测

Difftastic guesses the language used based on the file extension, file
name, and the contents of the first lines.Difftastic根据文件的扩展名、文件名和第一行的内容来猜测所使用的语言。

You can override the language detection by passing the `--language`
option. Difftastic will treat input files as if they had that
extension, and ignore other language detection heuristics.你可以通过`--language`选项来覆盖语言检测。如果输入的文件有所设定的后缀，Difftastic将会处理它们，并且忽略其他语言。


```
$ difft --language cpp before.c after.c
```

## Options选项

Difftastic includes a range of configuration CLI options, see `difft --help` for the full list.Difftastic包括一系列的命令行选项，见`difft --help`获得完整列表。

Difftastic can also be configured with environment variables. These
are also visible in `--help`.Difftastic也可以用环境变量进行配置。这些可以在`--help`中看到。

For example, `DFT_BACKGROUND=light` is equivalent to
`--background=light`. This is useful when using VCS tools like git,
where you are not invoking the `difft` binary directly.例如，`DFT_BACKGROUND=light`就相当于`--background=light`。这在使用VCS工具例如git的时候会很有用，因为此时无法直接调用`difft`二进制文件。
