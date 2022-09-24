# Git

Git[支持使用外部的diff工具](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal)。你可以使用`GIT_EXTERNAL_DIFF`来进行一键git命令。

```
$ GIT_EXTERNAL_DIFF=difft git diff
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
$ GIT_EXTERNAL_DIFF=difft git show e96a7241760319 --ext-diff
```

如果你想要默认使用Difftastic，可以使用`git config`。

```
# Set git configuration for the current repository.
$ git config diff.external difft

# Set git configuration for all repositories.
$ git config --global diff.external difft
```

在运行`git config`后，`git diff`命令将会自动使用`difft`。其他情况则需要使用`--ext-diff`来使用`diff.external`。

```
$ git diff
$ git log -p --ext-diff
$ git show e96a7241760319 --ext-diff
```

## git-difftool

[git difftool](https://git-scm.com/docs/git-difftool) 是一款使用不同diff工具来查看当前修改的git命令。如果你想要偶尔使用Difftastic的话，这将会非常有用。

添加下列内容到你的`.gitconfig`中就会让Difftastic作为你的difftool工具。

```ini
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difft "$LOCAL" "$REMOTE"
```

然后你可以使用`git difftool`来用Difftastic查看当前修改。

```
$ git difftool
```

我们还推荐使用下列设置来获得最好的difftool体验。

```ini
# Use a pager for large output, just like other git commands.
[pager]
        difftool = true

# `git dft` is less to type than `git difftool`.
[alias]
        dft = difftool
```
