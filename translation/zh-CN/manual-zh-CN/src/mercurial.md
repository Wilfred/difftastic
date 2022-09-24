# Mercurial

Mercurial[支持另外的diff工具](https://www.mercurial-scm.org/wiki/ExtdiffExtension)与Extdiff扩展。通过在你的`.hgrc`中添加`extensions`条目来启用它。

```
[extensions]
extdiff =
```

然后你可以运行`hg extdiff -p difft`命令（假定`difft`二进制文件存放在你的`$PATH`中。

你也可以为带有hg的difftastic的语句定义一个别名。在你的`.hgrc`中添加以下内容，以便用`hg dft`运行Difftastic。

```
[extdiff]
cmd.dft = difft
opts.dft = --missing-as-empty
```

## hg log -p

Mercurial没有办法改变默认的差异工具，至少就作者所知。

如果你只想查看最近的一次提交的差异，你可以使用下面的方法。

```
GIT_PAGER_IN_USE=1 hg dft -r .^ -r . | less
```

这就等同于`hg log -l 1 -p`，尽管它不显示提交信息。
