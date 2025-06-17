# Jujutsu

Jujutsu supports [external diff
commands](https://jj-vcs.github.io/jj/latest/config/#generating-diffs-by-external-command).

To use difftastic for diffing in jujutsu, add the following to your
[user configuration
file](https://jj-vcs.github.io/jj/latest/config/#user-config-files).

```toml
[ui]
diff-formatter = ["difft", "--color=always", "$left", "$right"]
```


