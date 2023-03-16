# Git

Git [支持使用外部差异分析工具](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal)。你可以使用 `GIT_EXTERNAL_DIFF` 命令暂时地设置 diff 工具。

```
$ GIT_EXTERNAL_DIFF=difft git diff
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
$ GIT_EXTERNAL_DIFF=difft git show e96a7241760319 --ext-diff
```

如果你想默认使用 Difftastic，可以使用 `git config`。

```
# 仅为当前存储库设置
$ git config diff.external difft

# 为全局设置
$ git config --global diff.external difft
```

在运行 `git config` 后，`git diff` 命令将会自动使用 `difft`。其他情况则需要使用 `--ext-diff` 来使用 `diff.external`。

```
$ git diff
$ git log -p --ext-diff
$ git show e96a7241760319 --ext-diff
```

## git-difftool

[git difftool](https://git-scm.com/docs/git-difftool) 是一个 Git 命令，用于使用不同差异分析工具来查看当前修改。如果你想要偶尔使用 Difftastic，这会非常有用。

添加下列内容到你的 `.gitconfig` 文件中，Difftastic 就会作为你的 diff 工具。

```ini
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difft "$LOCAL" "$REMOTE"
```

然后，你可以使用 `git difftool` 来用 Difftastic 查看当前修改。

```
$ git difftool
```

我们还推荐使用下列设置来获得最好的差异分析工具体验。

```ini
# 对于较大的输出，和其它 Git 命令一样，使用分页器
[pager]
        difftool = true

# `git dft` 比 `git difftool` 更加短小
[alias]
        dft = difftool
```
