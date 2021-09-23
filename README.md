<p align="center">
  <a href="#readme"><img src="img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://codecov.io/gh/Wilfred/difftastic/branch/master/graph/badge.svg?token=dZzAZtQT2S" alt="codecov.io"></a>
  <a href="http://difftastic.wilfred.me.uk/"><img src="https://img.shields.io/badge/manual-mdBook-brightgreen" alt="manual"></a>
</p>


Difftastic is an experimental structured diff tool that compares files
based on their syntax.

![screenshot](img/difftastic.png)

See [the manual](http://difftastic.wilfred.me.uk/) to get started.

Difftastic supports the following languages:

* C
* C++
* C#
* Clojure
* CSS
* Elixir
* Emacs Lisp
* Go
* Haskell
* Java
* JavaScript (and JSX)
* JSON
* OCaml
* Python
* Rust
* TypeScript (and TSX)

If a file has an unrecognised extension, difftastic uses a
line-oriented diff.

## Known Issues

Robustness. Difftastic is young and each release has fixed several
crashes.

Comprehensible display. Minimal diffs can be confusing: replacing
one function with another may have a small amount of common
punctuation even though they're completely unrelated. Alignment of
slightly modified lines is a major challenge too.

Changes to long lines. Difftastic uses a side-by-side display by
default, which is unhelpful if the only changes are near the end of a
line.

Performance. Difftastic scales relatively poorly on files with a large
number of changes, and can use a lot of memory. This might be solved
by A* search.

## Non-goals

Patch files. If you want to create a patch that you can later apply,
use `diff`. Difftastic ignores whitespace, so its output is
lossy. (AST patching is also a hard problem.)

## License

Difftastic is open source under the MIT license, see LICENSE for more
details.

Files in `sample_files/` are also under the MIT license unless stated
otherwise in their header.

## Further Reading

The [wiki](https://github.com/Wilfred/difftastic/wiki) includes a
thorough overview of alternative diffing techniques and tools.
