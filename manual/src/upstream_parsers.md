# Upstream Parsers

Difftastic uses the following tree-sitter parsers:

| Language        | Git Repository                                                                                                                          |
|-----------------|-----------------------------------------------------------------------------------------------------------------------------------------|
| Bash            | [tree-sitter/tree-sitter-bash](https://github.com/tree-sitter/tree-sitter-bash)                                                         |
| C               | [tree-sitter/tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c)                                                               |
| C++             | [tree-sitter/tree-sitter-cpp](https://github.com/tree-sitter/tree-sitter-cpp)                                                           |
| C#              | [tree-sitter/tree-sitter-c-sharp](https://github.com/tree-sitter/tree-sitter-c-sharp)                                                   |
| Clojure         | [sogaiu/tree-sitter-clojure](https://github.com/sogaiu/tree-sitter-clojure)                                                             |
| Common Lisp     | [theHamsta/tree-sitter-commonlisp](https://github.com/theHamsta/tree-sitter-commonlisp)                                                 |
| CSS             | [tree-sitter/tree-sitter-css](https://github.com/tree-sitter/tree-sitter-css)                                                           |
| Dart            | [UserNobody14/tree-sitter-dart](https://github.com/UserNobody14/tree-sitter-dart)                                                       |
| Elixir          | [elixir-lang/tree-sitter-elixir](https://github.com/elixir-lang/tree-sitter-elixir)                                                     |
| Emacs Lisp      | [wilfred/tree-sitter-elisp](https://github.com/Wilfred/tree-sitter-elisp)                                                               |
| Go              | [tree-sitter/tree-sitter-go](https://github.com/tree-sitter/tree-sitter-go)                                                             |
| Haskell         | [tree-sitter/tree-sitter-haskell](https://github.com/tree-sitter/tree-sitter-haskell)                                                   |
| Janet           | [sogaiu/tree-sitter-janet-simple](https://github.com/sogaiu/tree-sitter-janet-simple)                                                   |
| Java            | [tree-sitter/tree-sitter-java](https://github.com/tree-sitter/tree-sitter-java)                                                         |
| JavaScript, JSX | [tree-sitter/tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript)                                             |
| JSON            | [tree-sitter/tree-sitter-json](https://github.com/tree-sitter/tree-sitter-json)                                                         |
| Lua             | [nvim-treesitter/tree-sitter-lua](https://github.com/nvim-treesitter/tree-sitter-lua)                                                   |
| Nix             | [cstrahan/tree-sitter-nix](https://github.com/cstrahan/tree-sitter-nix)                                                                 |
| OCaml           | [tree-sitter/tree-sitter-ocaml](https://github.com/tree-sitter/tree-sitter-ocaml)                                                       |
| PHP             | [tree-sitter/tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php)                                                           |
| Python          | [tree-sitter/tree-sitter-python](https://github.com/tree-sitter/tree-sitter-python)                                                     |
| Ruby            | [tree-sitter/tree-sitter-ruby](https://github.com/tree-sitter/tree-sitter-ruby)                                                         |
| Rust            | [tree-sitter/tree-sitter-rust](https://github.com/tree-sitter/tree-sitter-rust) ([forked](https://github.com/Wilfred/tree-sitter-rust)) |
| Scala           | [tree-sitter/tree-sitter-scala](https://github.com/tree-sitter/tree-sitter-scala)                                                       |
| TypeScript, TSX | [tree-sitter/tree-sitter-typescript](https://github.com/tree-sitter/tree-sitter-typescript)                                             |
| YAML            | [ikatyang/tree-sitter-yaml](https://github.com/ikatyang/tree-sitter-yaml)                                             |


These parsers are included as git subtrees in `vendor/`.

Tree-sitter parsers are sometimes packaged on npm, sometimes packaged
on crates.io, and have different release frequencies. Git subtrees
allow difftastic to track the latest version of these parsers.

## Adding a new parser

If you've found a reasonably complete parser implementation for your
target language, add it to `vendor/`.

```
$ git subtree add --prefix=vendor/tree-sitter-java git@github.com:tree-sitter/tree-sitter-java.git master
```

Cargo does not allow packages to include subdirectories that contain a
`Cargo.toml`. Add a symlink to the `src/` parser subdirectory.

```
$ cd vendor
$ ln -s tree-sitter-java/src tree-sitter-java-src
```

You can now add the parser to build by including the directory in
`build.rs`. You will also need to update `guess_language.rs` to
configure the file extensions, and `tree_sitter_parser.rs` to
configure atoms and delimiters.

To add syntax highlighting to the package, you'll also need a symlink
to the `highlights.scm`, if available.

```
$ cd vendor/highlights
$ ln -s ../tree-sitter-java/queries/highlights.scm java.scm
```

## Updating a parser

To update a parser, pull commits from the upstream git repository. For
example, the following command will update the Java parser:

```
$ git subtree pull --prefix=vendor/tree-sitter-java git@github.com:tree-sitter/tree-sitter-java.git master
```

To see when each parser was last updated, use the following shell
command:

```
$ for d in $(git log | grep git-subtree-dir | tr -d ' ' | cut -d ":" -f2 | sort); do echo "$d"; git log --pretty="  %cs" -n 1 $d; done
```
