## Changelog

Bits may be missing and/or inaccurate :)

### Future?

* Decide about inline use (e.g. add some \_bare\_\* constructs? stop using?)

### v0.0.12 - 2023-03-??

* Features and Fixes
  * Loosen sym_val_lit definition
  * Handle metadata that is an evaling_lit
  * Handle construct used for ClojureDart's parameterized types
  * Generate parser.c and friends with tree-sitter 0.20.7 (ABI 13)
* Docs
  * Credits - additions
  * README
    * Add section on "what and why"
    * Add section pointing to other docs
    * Move resources list to own document
    * Remove npm-related descriptions
  * Use doc - mostly new users added
  * Scope doc - corrections and refinements
  * Testing doc - link and format updates
  * What and why doc - added
  * notes.txt - removed
* Developer-related
  * Improve maintainability of grammar.js
  * Remove dependence on npm
  * Cleanup package.json
  * Move corpus to test/corpus
  * Most developer-bits moved to separate repository

### v0.0.11 - 2023-01-22

* Update version info in package.json

### v0.0.10 - 2023-01-06

* Tokenize symbols and keywords further
  ([#31](https://github.com/sogaiu/tree-sitter-clojure/issues/31)) -
  dannyfreeman
* Address symbols after metadata issue
  ([#21](https://github.com/sogaiu/tree-sitter-clojure/issues/21)) -
  dannyfreeman
* Change formatting of grammar.js

### v0.0.9 - 2022-06-03

* Add corpus for light testing
* Add highlighting queries for difftastic
  ([#20](https://github.com/sogaiu/tree-sitter-clojure/issues/20))
* Remove web-tree-sitter dependency
  ([#19](https://github.com/sogaiu/tree-sitter-clojure/issues/19))
* Re-add binding.gyp

### v0.0.8 - 2021-03-17

* Upgrade tree-sitter to 0.19.3
* Add Cargo.toml
* Upgrade tree-sitter to 0.19.2
* Add generated bindings directory and content

### v0.0.7 - 2021-01-05

* CC0-1.0 ([#11](https://github.com/sogaiu/tree-sitter-clojure/issues/11))
* Tweak grammar.js

### v0.0.3 - 2020-10-30

* Add generated src directory and content
* Major renaming
* More fields
* Refine metadata bits
* Refine \_bare\_\* constructs usage
* Address discard / number parsing issue
  ([#7](https://github.com/sogaiu/tree-sitter-clojure/issues/7))
* Octal number tweak
* Restore visibility of comment nodes
* ?

### v0.0.2 - 2020-09-02

* Handle whitespace explicitly, no extras
* Start using some \_bare\_\* constructs
* ?

### v0.0.1 - 2020-07-05

* First tagging
