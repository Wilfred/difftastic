# 使用方法

## 文件参数

### 比较文件

```
$ difft sample_files/before.js sample_files/after.js
```

### 比较文件夹

```
$ difft sample_files/dir_before/ sample_files/dir_after/
```

Difftastic 会递归地浏览这两个文件夹，对同名的文件进行差异分析。

对比的文件夹间有许多未改变的文件时，`--skip-unchanged`选项会十分有用。

### 从 stdin 读取

您可以通过指定 `-` 作为文件路径从 stdin 读取文件。

```
$ cat sample_files/before.js | difft - sample_files/after.js
```

## 语言检测

Difftastic 根据文件的扩展名、文件名和第一行的内容猜测文件所用的语言。

你可以通过 `--language` 选项覆盖语言检测。如果输入的文件有所设定的后缀， Difftastic 将会处理它们，并且忽略其他语言。


```
$ difft --language cpp before.c after.c
```

## 选项

Difftastic 包括一系列命令行选项，你可以使用 `difft --help` 获得完整列表。

Difftastic 也可以用环境变量进行配置，这同样可以在 `--help` 中看到。

例如，`DFT_BACKGROUND=light` 相当于 `--background=light`。这在使用 VCS 工具（例如 Git）时会很有用，因为此时不能直接调用 `difft` 二进制文件。

## 退出状态码

2：Difftastic 收到了无效参数。这包括用法无效（如参数数量不对）、无法读取路径（如路径不存在或权限不足）。

1：使用 `--exit-code` 选项时，Difftastic 在发现任何语法变化（文本文件）或字节变化（二进制文件）。

0：所有其他情况。
