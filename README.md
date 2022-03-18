<p align="center">
  <a href="#readme"><img src="img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="http://difftastic.wilfred.me.uk/"><img src="https://img.shields.io/badge/manual-mdBook-brightgreen" alt="manual"></a>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://codecov.io/gh/Wilfred/difftastic/branch/master/graph/badge.svg?token=dZzAZtQT2S" alt="codecov.io"></a>
</p>

Difftastic is an experimental diff tool that compares files based on
their syntax.

See [the manual](http://difftastic.wilfred.me.uk/) to get started.

## Demo 1: Wrapping Expressions

Difftastic understands expression nesting. If you wrap an expression
in an if statement, difftastic understands that the inner values are
unchanged.

![Elisp screenshot](img/elisp.png)

Compare this with git's default diff. It is confused by indentation
changes, and doesn't know which closing parenthesis has been added.

![Elisp comparison screenshot](img/elisp_comparison.png)

## Demo 2: Reflowing Code

Difftastic is robust to code formatting changes. If you change how
many items appear on a single line, difftastic will only show you
items which have changed.

![Rust screenshot](img/rust.png)

In git's default diff, it's harder to see that `iter` and the curly
braces are unchanged. It's also harder to see the affected line numbers.

![Rust comparison screenshot](img/rust_comparison.png)

<!--
To regenerate these screenshots:

$ git clone git@github.com:magnars/dash.el.git
$ cd dash.el
$ GIT_EXTERNAL_DIFF=difft git show --ext-diff 72675567c68f002d828945badbb07fe963d24b5d

$ git clone git@github.com:rust-itertools/itertools.git
$ cd itertools
$ DFT_WIDTH=100 GIT_EXTERNAL_DIFF=difft git show --ext-diff 38805c6a882a9f00615078250ccc8c070c3a214d

-->

## Languages

Difftastic supports the following languages:

* Bash
* C
* C++
* C#
* Clojure
* Common Lisp
* CSS
* Elixir
* Emacs Lisp
* Go
* Haskell
* Java
* JavaScript (and JSX)
* JSON
* OCaml
* PHP
* Python
* Ruby
* Rust
* Scala
* TypeScript (and TSX)

If a file has an unrecognised extension, difftastic uses a
line-oriented diff.

## Known Issues

Performance. Difftastic scales relatively poorly on files with a large
number of changes, and can use a lot of memory.

Display. Difftastic has a side-by-side display which usually works well, but can
be confusing.

Robustness. Difftastic regularly has releases that fix crashes.

## Non-goals

Patching. Difftastic output is intended for human consumption, and it
does not generate patches that you can apply later. Use `diff` if you
need a patch.

Merging. AST merging is a hard problem that difftastic does not
address.

## License

Difftastic is open source under the MIT license, see LICENSE for more
details.

Files in `sample_files/` are also under the MIT license unless stated
otherwise in their header.
