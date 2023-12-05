# Fossil

[Fossil](https://fossil-scm.org/) 通过为当前存储库 [设置`diff-command`](https://fossil-scm.org/home/help?cmd=diff-command) 来支持外部 `diff` 命令：

```
fossil settings diff-command difft
```

如果你想对所有存储库使用 Difftastic，可以使用 `--global`：

```
fossil settings diff-command --global difft
```

## 在 Fossil 上跳过 Difftastic

如果你已经将 Difftastic 设置为 Fossil 的 `diff` 命令，但想使用一次 Fossil 的内置差异分析工具，可以使用 `-i` 暂时跳过一次 Difftastic：

```
fossil diff -i
```

如果你想从某个存储库（或全局）移除 Difftastic，请使用 `unset` 命令：

```
fossil unset diff-command
```

`unset` 命令支持 `--global` 选项。