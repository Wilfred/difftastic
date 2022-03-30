<p align="center">
  <a href="#readme"><img src="img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="http://difftastic.wilfred.me.uk/"><img src="https://img.shields.io/badge/manual-mdBook-brightgreen?style=flat-square" alt="manual"></a>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg?style=flat-square" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://img.shields.io/codecov/c/github/Wilfred/difftastic?style=flat-square&token=dZzAZtQT2S" alt="codecov.io"></a>
</p>

Difftastic is an experimental diff tool that compares files based on
their syntax.

See [the manual](http://difftastic.wilfred.me.uk/) to get started.

## Basic Example

![Screenshot of difftastic and JS](img/js.png)

In this JavaScript example, we can see:

(1) Difftastic understands nesting. It highlights the matching `{` and
`}`, but understands that `foo()` hasn't changed despite the leading
whitespace.

(2) Difftastic understands which lines should be aligned. It's aligned
`bar()` on the left with `bar(1)` on the right, despite their changes.

(3) Difftastic understands that line-wrapping isn't
meaningful. `"eric"` is now on a new line, but it hasn't changed.

## One Minute Demo

[![asciicast](https://asciinema.org/a/480875.svg)](https://asciinema.org/a/480875)

This one minute screencast demonstrates difftastic usage with both
standalone files and git.

## Languages

Difftastic supports the following languages:

* Bash
* C
* C++
* C#
* Clojure
* Common Lisp
* CSS
* Dart
* Elixir
* Emacs Lisp
* Go
* Haskell
* Janet
* Java
* JavaScript (and JSX)
* JSON
* Lua
* OCaml
* PHP
* Python
* Ruby
* Rust
* Scala
* TypeScript (and TSX)

If a file has an unrecognised extension, difftastic uses a
textual diff with word highlighting.

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
