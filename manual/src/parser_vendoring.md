# Vendoring

## Git Subtrees

Tree-sitter parsers are sometimes packaged on npm, sometimes packaged
on crates.io, and have different release frequencies. Difftastic uses
git subtrees (not git submodules) to track parsers.

## Updating a parser

To update a parser, pull commits from the upstream git repository. For
example, the following command will update the Java parser:

```
$ git subtree pull --prefix=vendored_parsers/tree-sitter-java git@github.com:tree-sitter/tree-sitter-java.git master
```

To see when each parser was last updated, use the following shell
command:

```
$ for d in $(git log vendored_parsers/* | grep git-subtree-dir | tr -d ' ' | cut -d ":" -f2 | sort); do echo "$d"; git log --pretty="  %cs" -n 1 $d; done
```
