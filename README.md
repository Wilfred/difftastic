# Tree-sitter Grammar for Emacs Lisp

A simple tree-sitter grammar for elisp.

Syntax supported:

* Atoms (integers, floats, strings, characters, symbols)
* Lists (normal syntax `(a b)` and dotted `(a . b)`)
* Vectors
* Quoting and unquoting (`'`, `#'`, `` ` ``, `,`, `,@`)
* Some special read syntax (`$#`)
* Comments

Currently unsupported:

* Hash table literals
* Autoload cookies
* Special forms (e.g. `let`, currently treated as symbols)
* Definitions (e.g. `defun`, `defvar`, `defmacro`)

## Limitations

Elisp is a lisp-2 with user-defined macros. A simple parser cannot
detect if e.g. `(foo (let ...))` is a function call with a `let`
expression argument, or a macro call where `let` means something else.

Currently tree-sitter-elisp treats everything as an s-expression. This
is accurate, but makes this package less useful for generating a
summary of file contents, or for syntax highlighting.

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

## References

[tree-sitter-clojure](https://github.com/sogaiu/tree-sitter-clojure)
is another tree-sitter package for a lisp family. It's a useful
project to compare with, and [has notes discussing lisp-specific
challenges](https://github.com/sogaiu/tree-sitter-clojure/blob/master/doc/scope.md).
