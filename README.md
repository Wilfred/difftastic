<p align="center">
  <a href="#readme"><img src="img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://codecov.io/gh/Wilfred/difftastic/branch/master/graph/badge.svg?token=dZzAZtQT2S" alt="codecov.io"></a>
</p>


Difftastic is an experimental structured diff tool that compares files
based on their syntax.

![screenshot](img/difftastic.png)

Difftastic supports the following languages:

* Clojure
* CSS
* Emacs Lisp
* Go
* Java
* JavaScript (including JSX)
* JSON
* OCaml
* Python
* Rust
* TypeScript

If a file has an unrecognised extension, difftastic uses a
line-oriented diff.

## How It Works

(1) Parsing.

Difftastic uses
[tree-sitter](https://tree-sitter.github.io/tree-sitter/) for
parsing. The concrete syntax tree is then converted to a sequence of
atoms or (possibly nested) lists.

The command line flags `--dump-ts` and `--dump-syntax` will display
the syntax trees for a given file. Difftastic also has a simple regex-based
parser which can be enabled with the environment `DFT_RX=1`.

(2) Diffing.

Difftastic treats diff calculations as a graph search problem. It
finds the minimal diff using Dijkstra's algorithm.

This is based on the excellent
[Autochrome](https://fazzone.github.io/autochrome.html) project.

(3) Printing.

Difftastic prints a side-by-side diff that fits the current
terminal. It will try to align unchanged nodes (see screenshot above).

An experimental inline diff mode is available by setting the
environment variable `INLINE=1`.

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

## Installation

You can install the latest tag of difftastic with Cargo:

```
$ cargo install difftastic
```

Difftastic is still under heavy development, so there's usually major
bugfixes since the latest release. I currently recommend you check out
the repository and compile directly:

```
$ cargo build --release
```

This will give you a binary at `./target/release/difftastic` that you
can put in a directory on your `$PATH`.

### Adding a parser

Add the tree-sitter-FOO git repository as a subtree. 

```
$ git subtree add --prefix=vendor/tree-sitter-elisp git@github.com:Wilfred/tree-sitter-elisp.git main
```

Add a symlink to the C source directory (Cargo will not include the
parent directory when packaging, because the parent has a `Cargo.toml`).

```
$ cd vendor
$ ln -s tree-sitter-elisp/src tree-sitter-elisp-src
```
Update `build.rs` and `tree_sitter_parser.rs` to include the
definitions for the new parser.

## Git Usage

Once you've compiled `difftastic` and it's on `$PATH`, you can use it
with git commands. To see the changes to the current git repo in
difftastic, add the following to your `.gitconfig` and run
`git difftool`.

```
[diff]
        tool = difftastic

[difftool]
        prompt = false

[difftool "difftastic"]
        cmd = difftastic "$LOCAL" "$REMOTE"
```

Alternatively, to run difftastic as the default diff engine for a git
command:

```
$ GIT_EXTERNAL_DIFF=difftastic git diff
$ GIT_EXTERNAL_DIFF=difftastic git log -p --ext-diff
```

`GIT_EXTERNAL_DIFF` also supports paths to binaries, so you can use
debug builds too. For example, using `git show` on a specific commit.

```
$ GIT_EXTERNAL_DIFF=/path/to/difftastic/target/debug/difftastic git show abcdef123456
```

## License

Difftastic is open source under the MIT license, see LICENSE for more
details.

Files in `sample_files/` are also under the MIT license unless stated
otherwise in their header.

## Further Reading

The [wiki](https://github.com/Wilfred/difftastic/wiki) includes a
thorough overview of alternative diffing techniques and tools.
