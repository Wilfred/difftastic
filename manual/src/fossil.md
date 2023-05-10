# Fossil

[Fossil](https://fossil-scm.org/) supports external `diff` commands by [setting `diff-command`](https://fossil-scm.org/home/help?cmd=diff-command) for the current repository:

```
fossil settings diff-command difft
```

To use difftastic for all repositories, use `--global`:

```
fossil settings diff-command --global difft
```

## Skip difftastic on Fossil

If you set difftastic as Fossil's `diff` command, but you need to use Fossil's internal diff once, use `-i` to skip difftastic once:

```
fossil diff -i
```

If you want to remove difftastic from one repository (or globally), use `unset`:

```
fossil unset diff-command
```

`unset` also supports the `--global` flag.
