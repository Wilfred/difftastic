# Git

Difftastic has good support for git.

## One-Off Usage

You can use
[`GIT_EXTERNAL_DIFF`](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal)
for a one-off git command.

View uncommitted changes with difftastic:

```
$ GIT_EXTERNAL_DIFF=difft git diff
```

View changes from the most recent commit with difftastic:

```
$ GIT_EXTERNAL_DIFF=difft git show HEAD --ext-diff
```

View changes from recent commits on the current branch with
difftastic:

```
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
```

## Regular Usage

If you like difftastic, we recommend that you configure git aliases
so you can use difftastic more easily.

Add the following to your `~/.gitconfig` to use difftastic as a
[difftool](https://git-scm.com/docs/git-difftool).

```ini
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difft "$LOCAL" "$REMOTE"

[pager]
        difftool = true
```

You can now use the following command to see changes with difftastic,
equivalent to `git diff`:

```
$ git difftool
```

We recommend that you set up a shorter alias for this command in your
`~/.gitconfig`:

```ini
# `git dft` is less to type than `git difftool`.
[alias]
        dft = difftool
```

For other commands, we also recommend that you set up aliases that are
equivalent to the one-off commands shown above.

```ini
# `git dlog` to show `git log -p` with difftastic.
[alias]
        dlog = "!f() { : git log ; GIT_EXTERNAL_DIFF=difft git log -p --ext-diff $@; }; f"
```

## Difftastic By Default

If you want to use difftastic as your default diff tool, add the
following to your `~/.gitconfig`.

```ini
[diff]
        external = difft
```

This only applies to `git diff`. For other git commands, you still
need to specify `--ext-diff`, or use an alias as described above.

```
$ git diff
$ git show HEAD --ext-diff
$ git log -p --ext-diff
```
