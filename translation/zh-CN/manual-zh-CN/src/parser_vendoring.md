# Vendoring

## Git Subtrees

Tree-sitter parsers are sometimes packaged on npm, sometimes packaged
on crates.io, and have different release frequencies. Difftastic uses
git subtrees (not git submodules) to track parsers.Tree-sitter有时被打包在npm上，有时被打包在crates.io上，并且它们的发布频率不一样。Difftastic使用git subtrees（而不是git submodules）来追踪解析器。

## Updating a parser升级解析器

To update a parser, pull commits from the upstream git repository. For
example, the following command will update the Java parser:如果要更新解析器，可以从上游的git仓库拉取提交。例如，下面的命令将更新Java解析器：

```
$ git subtree pull --prefix=vendor/tree-sitter-java git@github.com:tree-sitter/tree-sitter-java.git master
```

To see when each parser was last updated, use the following shell
command:如果要查看每个解析器最后一次更新的时间，请使用以下的Shell命令。

```
$ for d in $(git log | grep git-subtree-dir | tr -d ' ' | cut -d ":" -f2 | sort); do echo "$d"; git log --pretty="  %cs" -n 1 $d; done
```
