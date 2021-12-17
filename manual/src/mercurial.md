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
```
