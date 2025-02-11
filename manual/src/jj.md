# Jujutsu

Jujutsu supports [external diff
commands](https://jj-vcs.github.io/jj/v0.26.0/config/#generating-diffs-by-external-command).

To use difftastic for diffing in jujutsu, add the following to your
[user configuration
file](https://jj-vcs.github.io/jj/v0.26.0/config/#user-config-file).

```toml
[ui]
diff.tool = ["difft", "--color=always", "$left", "$right"]
```


