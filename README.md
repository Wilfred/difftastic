# Tree-sitter Grammar for Emacs Lisp

A simple tree-sitter grammar for elisp.

Syntax supported:

* Atoms (integers, floats, strings, characters, symbols)
* Lists (normal syntax `(a b)` and dotted `(a . b)`)
* Vectors
* Quoting and unquoting (`'`, `#'`, `` ` ``, `,`, `,@`)
* Some special read syntax (`$#`, `##`, `#("foo" 1 2 x)`)
* Bytecode literals (`#[1 2 3 4]`)
* Special forms (`let` etc)
* Comments

Currently unsupported:

* Autoload cookies
* Definitions (e.g. `defun`, `defvar`, `defmacro`)

## Limitations

Elisp is a lisp-2 with user-defined macros. A simple parser cannot
detect if e.g. `(foo (let ...))` is a function call with a `let`
expression argument, or a macro call where `let` means something else.

Currently tree-sitter-elisp treats everything as an s-expression. This
is accurate, but makes this package less useful for generating a
summary of file contents, or for syntax highlighting.

Emacs itself has more information that it can use. Emacs will
highlight macro calls based on which macros are defined in the current
instance. Some elisp packages also offer custom highlighting logic,
such as `dash-fontify-mode` in
[dash.el](https://github.com/magnars/dash.el).

## Developing

Check out the repo, then use `npm` to install dependencies.

```
$ npm install
```

You can then parse your favourite elisp files.

```
$ npm run parse ~/.emacs.d/init.el
```

The grammar itself is in
[grammar.js](https://github.com/Wilfred/tree-sitter-elisp/blob/main/grammar.js). You'll
need to regenerate the code after editing the grammar.

```
$ npm run generate
```

This project also contains a few tests.

```
$ npm test
```

You can also run this parser against your `.emacs.d` to confirm it can
parse everything.

```
$ npm run parse -- '/home/wilfred/.emacs.d/**/*.el' --quiet --stat
```

## Why?

The best place to read and write elisp is of course Emacs.

However, there is a growing ecosystem of tools built on top of
tree-sitter, such as GitHub. This project should allow them to support
emacs lisp too.

## Related Projects

[tree-sitter-clojure](https://github.com/sogaiu/tree-sitter-clojure)
is another tree-sitter package for the lisp family. It's a useful
project to compare with, and [has notes discussing lisp-specific
challenges](https://github.com/sogaiu/tree-sitter-clojure/blob/master/doc/scope.md).

[language-emacs-lisp](https://github.com/Alhadis/language-emacs-lisp)
is a textmate grammar for elisp that's used for Atom and GitHub.
