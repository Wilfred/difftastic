# What the Repository Provides and Why

This document describes what files and directories the repository
provides and associated reasoning.  First it covers things which are
likely to remain in place for some time (except perhaps the `src`
directory).  This is followed by a description of things that are more
likely to change or be removed.

One might be interested in this content out of academic curiosity but
more likely it might be because one is thinking of depending on the
repository in some way.

## What and Why

The order of the following files and directories is alphabetical and
not meant to reflect relative importance.

* `CHANGELOG.md` - this file contains a changelog.

* `COPYING.txt` - this file contains license information for the
  repository.

* `grammar.js` - this file contains a grammar description and is used
  in the process of generating parser source code that lives in `src`.
  It's likely that this (or something comparable) will continue to be
  provided assuming tree-sitter doesn't change the way it works.

* `package.json` - this file is needed by a
  [component](https://github.com/cursorless-dev/vscode-parse-tree/) of
  [Cursorless](https://www.cursorless.org/).  It uses our grammar via
  yarn and `package.json` seems to be essential.

* `queries` - this directory and the simple file it contains are
  provided on request from
  [`difftastic`](https://github.com/Wilfred/difftastic) folks.  The
  file it contains doesn't contain much and is not likely to be the
  sort of thing one expects to be used in an editor.

* `README.md` - this file contains the repository's README content.

* `src` - this directory contains source files that are generated [1]
  from `grammar.js`.  The files are typically used to generate a
  dynamic library / shared object that can be used by the tree-sitter
  library to handle Clojure / ClojureScript source code.  Although the
  content of this directory is generated, the files are provided
  because in practice, multiple parties have already become dependant
  on them.  There have been opinions voiced that this should not
  remain so, but change in that direction has not been widespread.  We
  would prefer not to be hosting this directory and its content, but
  are leaving it in place for the time being.  See
  [here](https://github.com/sogaiu/ts-questions/blob/master/questions/should-parser-source-be-committed/README.md)
  for more on the topic if interested.

* `test/corpus` - this directory contains tree-sitter's corpus
  test-related files.

## Other Content

The rest of the content of the repository is currently documentation
that lives in the `doc` directory.

## About Bindings

The repository does not host any bindings (e.g. for Rust, Node, or
other programming language).

They should be straight-forward to generate as long as one has a
suitable `tree-sitter` cli and the `grammar.js` file mentioned above.

Binding code used to be created by the `generate` subcommand, but this
appears to have [changed from version 0.24.0 of the `tree-sitter`
cli](https://github.com/tree-sitter/tree-sitter/releases/tag/v0.24.0):

> Move generation of grammar files to an init command ([#3694](https://github.com/tree-sitter/tree-sitter/pull/3694))

Note that "grammar files" here seems to refer to "bindings" files.

Further evidence in support of this change is [this
documentation](https://tree-sitter.github.io/tree-sitter/cli/init.html#binding-files):

> When you run tree-sitter init, the CLI will also generate a number
> of files in your repository that allow for your parser to be used
> from different language.

Which languages bindings files are generated for is affected by [the
`bindings` field in
`tree-sitter.json`](https://tree-sitter.github.io/tree-sitter/cli/init.html#the-bindings-field).
(It appears that omitting the field means "don't generate any
bindings".)

Probably it's better to consult the official documentation and/or ask
around about what the latest procedure is rather than rely on these
brief notes though.

## Footnotes

[1] If the grammar uses an external scanner, `src` may contain
non-generated files such as `scanner.c`, `scanner.cc`, etc.  In the
current case, no external scanner is used and the `src` directory
content is entirely generated.

