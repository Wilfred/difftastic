# Mercurial

Mercurial [supports external diff
tools](https://www.mercurial-scm.org/wiki/ExtdiffExtension) with the
Extdiff extension. Enable it by adding an entry to `extensions` in
your `.hgrc`.Mercurial[支持另外的diff工具](https://www.mercurial-scm.org/wiki/ExtdiffExtension)与Extdiff扩展。通过在你的`.hgrc`中添加`extensions`条目来启用它。

```
[extensions]
extdiff =
```

You can then run `hg extdiff -p difft` (assumes the `difft` binary is
on your `$PATH`).然后你可以运行`hg extdiff -p difft`命令（假定`difft`二进制文件存放在你的`$PATH`中。

You can also define an alias to run difftastic with hg. Add the
following to your `.hgrc` to run difftastic with `hg dft`.你也可以为带有hg的difftastic的语句定义一个别名。在你的`.hgrc`中添加以下内容，以便用`hg dft`运行Difftastic。

```
[extdiff]
cmd.dft = difft
opts.dft = --missing-as-empty
```

## hg log -p

Mercurial does not have a way of changing the default diff tool, at
least to the author's knowledge. Mercurial没有办法改变默认的差异工具，至少就作者所知。

If you just want to view the diff of the most recent commit, you can
use the following.如果你只想查看最近的一次提交的差异，你可以使用下面的方法。

```
GIT_PAGER_IN_USE=1 hg dft -r .^ -r . | less
```

This is equivalent to `hg log -l 1 -p`, although it does not show the
commit message.这就等同于`hg log -l 1 -p`，尽管它不显示提交信息。
