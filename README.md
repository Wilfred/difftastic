<p align="center">
  <a href="#readme"><img src="img/logo.png" alt="it's difftastic!"/></a>
  <br>
  <a href="https://difftastic.wilfred.me.uk/introduction.html"><img src="https://img.shields.io/badge/manual-en-brightgreen?style=flat-square" alt="English manual"></a>
  <a href="https://difftastic.wilfred.me.uk/zh-CN/"><img src="https://img.shields.io/badge/manual-zh--CN-brightgreen?style=flat-square" alt="Chinese manual"></a>
  <a href="https://crates.io/crates/difftastic"><img src="https://img.shields.io/crates/v/difftastic.svg?style=flat-square" alt="crates.io"></a>
  <a href="https://codecov.io/gh/Wilfred/difftastic"><img src="https://img.shields.io/codecov/c/github/Wilfred/difftastic?style=flat-square&token=dZzAZtQT2S" alt="codecov.io"></a>
</p>

Difftastic is a structural diff tool that compares files based on
their syntax.

**For installation instructions, see
[Installation](https://difftastic.wilfred.me.uk/installation.html) in
[the manual](http://difftastic.wilfred.me.uk/).**

## Basic Example

![Screenshot of difftastic and JS](img/js.png)

In this JavaScript example, we can see:

(1) Difftastic understands nesting. It highlights the matching `{` and
`}`, but understands that `foo()` hasn't changed despite the leading
whitespace.

(2) Difftastic understands which lines should be aligned. It's aligned
`bar(1)` on the left with `bar(2)` on the right, even though the
textual content isn't identical.

(3) Difftastic understands that line-wrapping isn't
meaningful. `"eric"` is now on a new line, but it hasn't changed.

## One Minute Demo

[![asciicast](https://asciinema.org/a/480875.svg)](https://asciinema.org/a/480875)

This one minute screencast demonstrates difftastic usage with both
standalone files and git.

## Languages

Difftastic supports over 30 programming languages, see [the
manual](https://difftastic.wilfred.me.uk/languages_supported.html) for the full list.

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

(Patch files are also line-oriented, which is too limited for
difftastic. Difftastic might find additions and removals on the same
line, and it tracks the relationship between line numbers in the old
and new file.)

Merging. AST merging is a hard problem that difftastic does not
address.

## FAQ

### Isn't this basically `--word-diff --ignore-all-space`?

Word diffing [can't do
this](https://twitter.com/_wilfredh/status/1510139929971421191/photo/1).

Difftastic parses your code. It understands when whitespace matters,
such as inside string literals or languages like Python. It understands
that `x-1` is three tokens in JS but one token in Lisp.

### Can I use difftastic with git?

You can! The difftastic manual [includes instructions for git
usage](https://difftastic.wilfred.me.uk/git.html). You can also use it
[with mercurial](https://difftastic.wilfred.me.uk/mercurial.html).

If you're an Emacs user, check out [this blog
post](https://tsdh.org/posts/2022-08-01-difftastic-diffing-with-magit.html)
showing one way to use difftastic with magit, as well as
[difftastic.el](https://github.com/pkryger/difftastic.el).

### Does difftastic integrate with my favourite tool?

Probably not. Difftastic is young. Consider writing a plugin for your
favourite tool, and I will link it in the README!

### What about parse errors?

By default, difftastic falls back to a line-oriented diff whenever
parse errors are encountered.

This is a conservative choice to ensure that difftastic never claims
two syntactically different files are the same.

Parse errors can occur if the file uses language features that the
parser does not understand, if the language relies on a preprocessor
before parsing (e.g. C++), or if the file has genuine syntactic
mistakes.

In practice, difftastic virtually always produces a good result when
there are a few minor parse errors. Consider allowing a small number
of parse errors when using difftastic.

```
$ export DFT_PARSE_ERROR_LIMIT=20
$ difft foo1.c foo2.c
```

### Can difftastic help me with merge conflicts?

Yes! As of version 0.50, difftastic understands merge conflict markers
(i.e. `<<<<<<<`, `=======` and `>>>>>>>`).

Pass your file with conflicts as a single argument to
difftastic. Difftastic will construct the two conflicting files and
diff those.

```
$ difft file_with_conflicts.js
```

### Can difftastic do merges?

No. AST merging is a hard problem that difftastic does not address.

AST diffing is a lossy process from the perspective of a text
diff. Difftastic will ignore whitespace that isn't syntactically
significant, but merging requires tracking whitespace.

The [mergiraf](https://mergiraf.org/) tool does offer merges based on
a tree-sitter AST however.

### Can difftastic ignore reordering?

No. Difftastic always considers order to be important, so diffing
e.g. `set(1, 2)` and `set(2, 1)` will show changes.

If you're diffing JSON, consider sorting the keys before passing them
to difftastic.

```
$ difft <(jq --sort-keys < file_1.json) <(jq --sort-keys < file_2.json)
```

See also [Tricky Cases: Unordered Data
Types](https://difftastic.wilfred.me.uk/tricky_cases.html#unordered-data-types)
in the manual.

### Can I use difftastic to check for syntactic changes without diffing?

Yes. Difftastic can check if the two files have the same AST, without
calculating a diff. This is much faster than normal diffing, and
useful for building tools that check for changes.

For example:

```
$ difft --check-only --exit-code before.js after.js
```

This will set the exit code to 0 if there are no syntactic changes, or
1 if there are changes found.

### Why aren't colours appearing in my terminal?

Difftastic uses ANSI bright colours by default, but some terminal
themes show bright colours as grey. Solarized is a popular theme that
does this.

If you're a Solarized user, use `export DFT_BACKGROUND=light` to
disable bright colours, or try a different terminal colour scheme.

### How does it work?

Difftastic treats structural diffing as a graph problem, and uses
Dijkstra's algorithm.

My [blog
post](https://www.wilfred.me.uk/blog/2022/09/06/difftastic-the-fantastic-diff/)
describes the design, and there is also an [internals section in the
manual](https://difftastic.wilfred.me.uk/diffing.html).

## Translation

+ [Chinese](./translation/zh-CN/README-zh-CN.md)

## License

Difftastic is open source under the MIT license, see LICENSE for more
details.

This repository also includes tree-sitter parsers by other authors in
the `vendored_parsers/` directory. These are a mix of the MIT license and the
Apache license. See `vendored_parsers/*/LICENSE` for more details.

Files in `sample_files/` are also under the MIT license unless stated
otherwise in their header.
