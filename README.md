# tree-sitter-clojure

A tree-sitter grammar for Clojure and ClojureScript

## What the Repository Provides

This repository provides some files used to create various artifacts
(e.g. dynamic libraries) used for handling Clojure and ClojureScript
source code via tree-sitter.

Please see the [what and why document](doc/what-and-why.md) for
detailed information.

## Potential Changes Announcements

Changes may occur because:

1. There may be unanticipated important use cases we may want to
   account for
2. The grammar depends on tree-sitter which remains in flux (and is
   still pre 1.0)
3. It's possible we missed something or got something wrong about
   Clojure and we might want to remedy that

To get a heads-up before such changes occur, please consider
subscribing to the [Potential Changes Announcements
issue](https://github.com/sogaiu/tree-sitter-clojure/issues/33) to be
notified beforehand.

Note that previously tagged versions may work fine depending on the
use case.  See the [changelog](CHANGELOG.md) for details.

## Other Documents

There are some documents in the [`doc` directory](doc/) covering
topics such as:

* [Scope](doc/scope.md)
* [Limits](doc/limits.md)
* [Testing](doc/testing.md)
* [Uses](doc/use.md)

## Acknowledgments

Please see the [credits](doc/credits.md).

