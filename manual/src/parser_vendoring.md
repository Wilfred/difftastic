# Vendoring

## Git Subtrees

Tree-sitter parsers are sometimes not packaged on crates.io. In that case, Difftastic uses
git subtrees (not git submodules) to track them.

## Vendoring a parser

Once you've found the source repository for the parser, add it as a git subtree to
`vendored_parsers/`. We'll use
[tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json) as
an example.

```
$ git subtree add --prefix=vendored_parsers/tree-sitter-json https://github.com/tree-sitter/tree-sitter-json.git master
```

### Configure the build

Cargo does not allow packages to include subdirectories that contain a
`Cargo.toml`. Add a symlink to the `src/` parser subdirectory.

```
$ cd vendored_parsers
$ ln -s tree-sitter-json/src tree-sitter-json-src
```

You can now add the parser to build by including the directory in
`build.rs`. 

```
TreeSitterParser {
    name: "tree-sitter-json",
    src_dir: "vendored_parsers/tree-sitter-json-src",
    extra_files: vec![],
},
```

If your parser includes custom C or C++ files for lexing (e.g. a
`scanner.cc`), add them to `extra_files`.


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
