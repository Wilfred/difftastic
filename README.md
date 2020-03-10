# tree-sitter-clojure

## Prerequisites

* [emsdk](https://emscripten.org/docs/getting_started/downloads.html#installation-instructions)
* node >= 12 (nvm recommended) -- recently tested 12.9.1

## Initial Setup

Suppose typical development sources are stored under `~/src`.

```
# clone repository
cd ~/src
git clone https://github.com/sogaiu/tree-sitter-clojure
cd tree-sitter-clojure

# create `node_modules` and populate with dependencies
npm install

# create `src` and populate with tree-sitter .c goodness
npx tree-sitter generate
# create `build` and populate with 
npx node-gyp configure
# create `build/Release` and build `tree_sitter_clojure_binding.node`
npx node-gyp rebuild
```

## Grammar Development

Hack on grammar and interactively test.

```
# prepare emsdk (specifically emcc) for building .wasm
source ~/src/emsdk/emsdk_env.sh

# edit grammar.js using some editor

# rebuild tree-sitter stuff and invoke web-ui for interactive testing
npx tree-sitter generate && \
npx node-gyp rebuild && \
npx tree-sitter build-wasm && \
npx tree-sitter web-ui

# in appropriate browser window, paste code in left pane

# examine results in right pane -- can even click on nodes

# find errors and loop back to edit step above...
```

Parse individual files.

```
# create and populate sample code file for parsing named `sample.clj`

# parse sample file
npx tree-sitter parse sample.clj

# examine output similar to web-ui, but less convenient
```

## Measure Performance

```
# single measurement
npx tree-sitter parse --time sample.clj

# mutliple measurements with `multitime`
multitime -n10 -s1 npx tree-sitter parse --time --quiet sample.clj
```

## Build .wasm

Assuming emsdk is installed appropriately under `~/src/emsdk`.

```
# prepare emsdk (specifically emcc) for use
source ~/src/emsdk/emsdk_env.sh

# create `tree-sitter-clojure.wasm`
npx tree-sitter build-wasm
```

## Resources

* [Guide to your first Tree-sitter grammar](https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef)
* [sublime-clojure](https://github.com/tonsky/sublime-clojure)
* [syntax-highlighter](https://github.com/EvgeniyPeshkov/syntax-highlighter)
* [tree-sitter](http://tree-sitter.github.io/tree-sitter/)
* [tree-sitter-clojure.oakmac](https://github.com/oakmac/tree-sitter-clojure)
* [tree-sitter-clojure.SergeevPavel](https://github.com/SergeevPavel/tree-sitter-clojure)
* [tree-sitter-clojure.Tavistock](https://github.com/Tavistock/tree-sitter-clojure)
* [vscode-tree-sitter](https://github.com/georgewfraser/vscode-tree-sitter)
* [web-tree-sitter API](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_web/tree-sitter-web.d.ts)

## Acknowledgments

* Aerijo - Guide to your first Tree-sitter grammar
* borkdude - babashka, clj-kondo, edamame, and more
* CoenraadS - Bracket-Pair-Colorizer-2
* EvegeniyPeshkov - syntax-highlighter
* georgewfraser - vscode-tree-sitter
* hitode909 - vscode-perl-outline
* kolja - tree-sitter question concerning Clojure on StackOverflow
* mauricioszabo - clover and repl-tooling
* maxbrunsfeld - tree-sitter and related
* oakmac - tree-sitter-clojure.oakmac, conj 2018 unsession, advice, etc.
* pedrorgirardi - vscode and tree-sitter-clojure bits
* PEZ - calva, vscode tips, and general discussion
* rewinfrey - helpful bits from tree-sitter-haskell
* Saikyun - discussion
* SergeevPavel - tree-sitter-clojure.SergeevPavel (fork of tree-sitter-clojure.Tavistock with further work)
* SevereOverfl0w - tree-sitter and vim info
* Tavistock - tree-sitter-clojure.Tavistock
* tonsky - sublime-clojure work with test data
