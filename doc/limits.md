# Limits

The following items are known to not necessarily work:

* [Some template
  files](https://github.com/sogaiu/tree-sitter-clojure/issues/42#issuecomment-1426727973) -
  these are often not strictly speaking Clojure, though they look pretty close
* Other code that is not standard Clojure
  [1](https://github.com/fjarri/clojure-scribble#basic-usage)
  [2](https://github.com/dgrnbrg/piplin/blob/4c39386413d62ec9c2d679fa4c742313d97f75ef/src/piplin/mips.clj#L12)
  because it uses functionality that modifies Clojure's reader behavior
  in certain ways [1](https://github.com/jwymanm/chiara#the-syntax)
  [2](https://github.com/dgrnbrg/piplin/blob/4c39386413d62ec9c2d679fa4c742313d97f75ef/src/piplin/types/bits.clj#L231-L251)
* Some older Clojure code - for example, `^` used to mean "wrap the
  following thing in `(meta ...)`"
  [1](https://github.com/clojure/clojure/blob/1.0.x/src/jvm/clojure/lang/LispReader.java#L71)
  [2](https://github.com/clojure/clojure/blob/1.0.x/src/clj/clojure/zip.clj#L58)
* [ClojureCLR's pipe syntax for
  symbols](https://github.com/sogaiu/tree-sitter-clojure/issues/35#issuecomment-1407320526)
  ([comment at #42](https://github.com/sogaiu/tree-sitter-clojure/issues/42#issuecomment-1450290140))
* [Files that contain one or more
  zero-bytes](https://github.com/sogaiu/tree-sitter-clojure/issues/42#issuecomment-1430546851)
  [1](https://github.com/santifa/clj-dbase/blob/a269ca62d529cf82cec7bffce2e38b71458c6087/src/clj_dbase/core.clj#L121)
  [2](https://github.com/ont-app/vocabulary/blob/5929b9b1a16b07dc60f1012070da684e8f073326/resources/uri-escapes.edn) -
  this might be a tree-sitter limitation

See [#42](https://github.com/sogaiu/tree-sitter-clojure/issues/42) for
more details.
