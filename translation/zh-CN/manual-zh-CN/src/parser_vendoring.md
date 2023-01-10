# 包管理

## Git Subtrees

Tree-sitter有时被打包在npm上，有时被打包在crates.io上，并且它们的发布频率不一样。Difftastic使用git subtrees（而不是git submodules）来追踪解析器。

## 升级解析器

如果要更新解析器，可以从上游的git仓库拉取提交。例如，下面的命令将更新Java解析器：

```
$ git subtree pull --prefix=vendored_parsers/tree-sitter-java git@github.com:tree-sitter/tree-sitter-java.git master
```

如果要查看每个解析器最后一次更新的时间，请使用以下的Shell命令：

```
$ for d in $(git log | grep git-subtree-dir | tr -d ' ' | cut -d ":" -f2 | sort); do echo "$d"; git log --pretty="  %cs" -n 1 $d; done
```
