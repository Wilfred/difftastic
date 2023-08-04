# Mercurial

Mercurial 在使用 Extdiff 拓展时，[支持使用外部差异分析工具](https://www.mercurial-scm.org/wiki/ExtdiffExtension)。你可以在 `.hgrc` 文件中添加 `extensions` 条目来启用它。

```
[extensions]
extdiff =
```

接下来，你可以运行 `hg extdiff -p difft` 命令，但不是 `hg diff` 命令（假定 `difft` 二进制文件已经存放在 `$PATH` 中）。

您还可以定义一个别名，用 hg 运行 Difftastic。将以下内容添加到您的 `.hgrc` 中，以使用 `hg dft` 命令运行 Difftastic。

```
[extdiff]
cmd.dft = difft
# 你可以添加更多选项，它们将被传递至命令行，例如：
# opts.dft = --background light
```

`hg dft` 也支持 `hg diff` 的所有选项。例如，`hg dft --stat` 会显示更改行的统计信息，`hg dft -r 42 -r 45` 会显示两个修订版之间的差异。

## hg log -p

Mercurial 不能改变默认的差异工具，至少就作者所知。

如果你想查看最近一次提交的差异，可以使用下面的命令。

```
hg dft -r .^ -r .
```

这就等同于`hg log -l 1 -p`，尽管它不显示提交信息。
