# Mercurial

Mercurial [supports external diff
tools](https://www.mercurial-scm.org/wiki/ExtdiffExtension) with the
Extdiff extension. Enable it by adding an entry to `extensions` in
your `.hgrc`.

```
[extensions]
extdiff =
```

You can then run `hg extdiff -p difft` instead of `hg diff`
(assumes the `difft` binary is on your `$PATH`).

You can also define an alias to run difftastic with hg. Add the
following to your `.hgrc` to run difftastic with `hg dft`.

```
[extdiff]
cmd.dft = difft
# You can add further options which will be passed to the command line, e.g.
# opts.dft = --background light
```

All options of `hg diff` are also supported by `hg dft`; for example,
`hg dft --stat` will show statistics of changed lines and `hg dft -r 42 -r 45`
will show the diff between two revisions.

## hg log -p

Mercurial does not have a way of changing the default diff tool, at
least to the author's knowledge.

If you just want to view the diff of the most recent commit, you can
use the following.

```
hg dft -r .^ -r .
```

This is equivalent to `hg log -l 1 -p`, although it does not show the
commit message.
