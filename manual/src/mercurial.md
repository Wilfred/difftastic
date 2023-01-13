# Mercurial

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
opts.dft = --missing-as-empty
```

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
