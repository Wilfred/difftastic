# Git

Git [supports external diff
tools](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal). You
can use `GIT_EXTERNAL_DIFF` for a one-off git command.

```
$ GIT_EXTERNAL_DIFF=difft git diff
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
$ GIT_EXTERNAL_DIFF=difft git show e96a7241760319 --ext-diff
```

A wrapper function makes these one-off commands more convenient:
```sh
# add to ~/.bashrc
gitt() {
    GIT_EXTERNAL_DIFF=difft git $1 --ext-diff $@[2,-1]
}
```

Then use `gitt` instead of `git`:
```
$ gitt diff
$ gitt log -p
$ gitt show e96a7241760319
```

If you want to use difftastic by default, use `git config`.

```
# Set git configuration for the current repository.
$ git config diff.external difft

# Set git configuration for all repositories.
$ git config --global diff.external difft
```

After running `git config`, `git diff` will use `difft`
automatically. Other git commands require `--ext-diff` to use
`diff.external`.

```
$ git diff
$ git log -p --ext-diff
$ git show e96a7241760319 --ext-diff
```

## git-difftool

[git difftool](https://git-scm.com/docs/git-difftool) is a git command
for viewing the current changes with a different diff tool. It's
useful if you want to use difftastic occasionally.

Add the
following to your `.gitconfig` to use difftastic as your difftool.

```ini
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difft "$LOCAL" "$REMOTE"
```

You can then run `git difftool` to see current changes with difftastic.

```
$ git difftool
```

We also recommend the following settings to get the best difftool
experience.

```ini
# Use a pager for large output, just like other git commands.
[pager]
        difftool = true

# `git dft` is less to type than `git difftool`.
[alias]
        dft = difftool
```
