# Getting Started

## Installation

The latest version of difftastic is [available on
crates.io](https://crates.io/crates/difftastic). You can install it
with Cargo. Difftastic requires Rust 1.54 or later.

```
$ cargo install difftastic
```

See [contributing](./contributing.md) for instructions on debug
builds.

## Diffing Files

```
$ difft sample_files/before.js sample_files/after.js
```

Difftastic uses the file extension to decide which parser to use.

## Git: External Diffs

Git [supports external diff
tools](https://git-scm.com/docs/diff-config#Documentation/diff-config.txt-diffexternal). You
can use `GIT_EXTERNAL_DIFF` for a one-off git command.

```
$ GIT_EXTERNAL_DIFF=difft git diff
$ GIT_EXTERNAL_DIFF=difft git log -p --ext-diff
$ GIT_EXTERNAL_DIFF=difft git show e96a7241760319 --ext-diff
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

## Git: Difftool

[git difftool](https://git-scm.com/docs/git-difftool) is a git command
for viewing the current changes with a different diff tool.  Add the
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

## Mercurial: External Diffs

Mercurial [supports external diff
tools](https://www.mercurial-scm.org/wiki/ExtdiffExtension) with the
Extdiff extension. Enable it by adding an entry to `extensions` in
your `.hgrc`.

```
[extensions]
extdiff =
```

You can then run `hg extdiff -p difft` (assumes the `difft` binary is
on your `$PATH`).

You can also define an alias to run difftastic with hg. Add the
following to your `.hgrc` to run difftastic with `hg dft`.

```
[extdiff]
cmd.dft = difft
```
