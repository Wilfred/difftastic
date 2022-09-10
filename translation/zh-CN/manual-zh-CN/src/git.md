# Git

Git [supports external diff
tools](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal). You
can use `GIT_EXTERNAL_DIFF` for a one-off git command.Git[支持使用外部的diff工具](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal)。你可以使用`GIT_EXTERNEL_DIFF`来进行一键git命令。

```
$ GIT_EXTERNAL_DIFF=difft git diff
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
$ GIT_EXTERNAL_DIFF=difft git show e96a7241760319 --ext-diff
```

If you want to use difftastic by default, use `git config`.如果你想要默认使用Difftastic，可以使用`git config`。

```
# Set git configuration for the current repository.
$ git config diff.external difft

# Set git configuration for all repositories.
$ git config --global diff.external difft
```

After running `git config`, `git diff` will use `difft`
automatically. Other git commands require `--ext-diff` to use
`diff.external`.在运行`git config`后，`git diff`命令将会自动使用`difft`。其他情况则需要使用`--ext-diff`来使用`diff.externel`。

```
$ git diff
$ git log -p --ext-diff
$ git show e96a7241760319 --ext-diff
```

## git-difftool

[git difftool](https://git-scm.com/docs/git-difftool) is a git command
for viewing the current changes with a different diff tool. It's
useful if you want to use difftastic occasionally.[git difftool](https://git-scm.com/docs/git-difftool) 是一款使用不同diff工具来查看当前修改的git命令。如果你想要偶尔使用Difftastic的话，这将会非常有用。

Add the
following to your `.gitconfig` to use difftastic as your difftool.添加下列内容到你的`.gitconfig`中就会让Difftastic作为你的difftool工具。

```ini
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difft "$LOCAL" "$REMOTE"
```

You can then run `git difftool` to see current changes with difftastic.然后你可以使用`git difftool`来用Difftastic查看当前修改。

```
$ git difftool
```

We also recommend the following settings to get the best difftool
experience.我们还推荐使用下列设置来获得最好的difftool体验。

```ini
# Use a pager for large output, just like other git commands.
[pager]
        difftool = true

# `git dft` is less to type than `git difftool`.
[alias]
        dft = difftool
```
