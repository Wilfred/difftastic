# Git

Difftastic can be used an external diff command in git, allowing
difftastic to be used with any git subcommand.

<div class="warning">

Warning: git v2.43.1 and earlier [can
crash](https://github.com/git/git/commit/85a9a63c9268b18b24f25f6a14d6ae9966c3566d)
when using an external diff and file permissions have changed.

If you can't upgrade git, use the `difftool` configuration described
below.

</div>

## One-Off Usage

You can set the `diff.external` configuration option when running `git
diff`, or set the
[`GIT_EXTERNAL_DIFF`](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal) environment variable.

View uncommitted changes with difftastic:

```
$ git -c diff.external=difft diff
```

Other git commands also require the `--ext-diff` argument in order to
use `diff.external`.

View changes from the most recent commit with difftastic:

```
$ git -c diff.external=difft show --ext-diff
```

View changes from recent commits on the current branch with
difftastic:

```
$ git -c diff.external=difft log -p --ext-diff
```

## Regular Usage

If you like difftastic, we recommend that you configure git aliases
so you can use difftastic more easily.

```ini
[alias]
    # Difftastic aliases, so `git dlog` is `git log` with difftastic and so on.
    dlog = -c diff.external=difft log --ext-diff
    dshow = -c diff.external=difft show --ext-diff
    ddiff = -c diff.external=difft diff
```

The author likes the following additional aliases to reduce typing:

```ini
[alias]
    # `git log` with patches shown with difftastic.
    dl = -c diff.external=difft log -p --ext-diff

    # Show the most recent commit with difftastic.
    ds = -c diff.external=difft show --ext-diff

    # `git diff` with difftastic.
    dft = -c diff.external=difft diff
```

## Difftastic By Default

If you want to use difftastic as your default diff tool, add the
following to your `~/.gitconfig`.

```ini
[diff]
    external = difft
```

This changes `git diff` to use difftastic, and other commands now only
require `--ext-diff`.

```
$ git diff
$ git show --ext-diff
$ git log -p --ext-diff
```

If you've configured difftastic as the default diff tool, you can
opt-out for an individual command with `--no-ext-diff`.

```
$ git diff --no-ext-diff
```

## Difftool

Git also has a [difftool
feature](https://git-scm.com/docs/git-difftool) which allows users to
invoke CLI or GUI comparison tools.

For best results, we recommend using `-c diff.external=difft` as
described above. Git passes more information to the external diff,
including file permission changes and rename information, so
difftastic can show more information.

To define a difftool named `difftastic`, add the following to your
`~/.gitconfig`.

```ini
[difftool "difftastic"]
    # See `man git-difftool` for a description of MERGED, LOCAL and REMOTE.
    cmd = difft "$MERGED" "$LOCAL" "abcdef1" "100644" "$REMOTE" "abcdef2" "100644"
```

You can now use difftastic as a difftool:

```
$ git difftool -t difftastic
```

For the best results when using difftastic as a difftool, we recommend
the following additional git configuration:

```ini
[difftool]
    # Run the difftool immediately, don't ask 'are you sure' each time.
    prompt = false

[pager]
    # Use a pager if the difftool output is larger than one screenful,
    # consistent with the behaviour of `git diff`.
    difftool = true

[diff]
    # Set difftastic as the default difftool, so we don't need to specify
    # `-t difftastic` every time.
    tool = difftastic
```
