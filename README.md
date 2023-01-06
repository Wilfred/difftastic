# tree-sitter-clojure

## Notice

Although no major changes are anticipated at this point, there are no
guarantees.  To get a heads-up before such changes occur, please
consider subscribing to the [Potential Changes Announcements
issue](https://github.com/sogaiu/tree-sitter-clojure/issues/33) to be
notified beforehand.  The hope is that by commnuicating early enough
about these sorts of things, unnecessary breakage can be avoided
and/or mitigated.

## Status

tree-sitter-clojure has been:

* [Tested in various ways](doc/testing.md)
* [Used in some ways](doc/use.md)
* [Scoped for better behavior](doc/scope.md)
* [Brought about through cooperation](doc/credits.md)

## Prerequisites

Unfortunately, the short of it is that it may be a bit complicated depending on what you want to do.

* If you don't use any of the wasm-related functionality (e.g. previewing parse results in your web browser or you want to build a `.wasm` file for use in a plugin or extension), you probably just need:
    * an appropriate version of node (I've tested with various versions >= 12, 14) and
    * other typical development-related bits (e.g. git, appropriate c compiler, etc.)

* If you want wasm-related functionality, you get to have fun figuring out which version of [emsdk](https://emscripten.org/docs/getting_started/downloads.html#installation-instructions) currently works with tree-sitter.  At the time of this writing, [this file](https://github.com/tree-sitter/tree-sitter/blob/master/cli/emscripten-version) indicates a version that might be appropriate.  That may depend on precisely what the versions of other bits (e.g. tree-sitter-cli, web-tree-sitter, etc.) might be though, so if something doesn't work right away, you might consider trying [different versions that have been recorded](https://github.com/tree-sitter/tree-sitter/commits/master/emscripten-version).

Note that there may be an upside to using emsdk though -- it may figure out and arrange for an appropriate version of node, making a separate installation of node unnecessary.  I don't use such a setup on a day-to-day basis, but it did work for me at least once.

## Fine Print

* The instructions below assume emsdk has been installed, but `emcc` (tool that can be used to compile to wasm) is not necessarily on one's `PATH`.  If an appropriate `emcc` is on one's `PATH` (e.g. emscripten installed via homebrew), the emsdk steps (e.g. `source ~/src/emsdk/emsdk_env.sh`) below may be ignored.

* `node-gyp` (tool for compiling native addon modules for Node.js) may fail on machines upgraded to macos Catalina. [This document](https://github.com/nodejs/node-gyp/blob/master/macOS_Catalina.md) may help cope with such a situation.

## Initial Setup

Suppose typical development sources are stored under `~/src`.

### Short Version

```
# clone repository
cd ~/src
git clone https://github.com/sogaiu/tree-sitter-clojure
cd tree-sitter-clojure

# install tree-sitter-cli and dependencies, then build
npm ci
```

### Long Version

```
# clone repository
cd ~/src
git clone https://github.com/sogaiu/tree-sitter-clojure
cd tree-sitter-clojure

# ensure tree-sitter-cli is avaliable as a dev dependency
npm install --save-dev --save-exact tree-sitter-cli

# create `src` and populate with tree-sitter `.c` goodness
npx tree-sitter generate

# populate `node_modules` with dependencies
npm install

# create `build` and populate appropriately
npx node-gyp configure

# create `build/Release` and build `tree_sitter_clojure_binding.node`
npx node-gyp rebuild
```

## Grammar Development

Hack on grammar.

```
# edit grammar.js using some editor

# rebuild tree-sitter stuff
npx tree-sitter generate && \
npx node-gyp rebuild
```

Parse individual files.

```
# create and populate sample code file for parsing named `sample.clj`

# parse sample file
npx tree-sitter parse sample.clj

# if output has errors, figure out what's wrong
```

Interactively test in the browser (requires emsdk).

```
# prepare emsdk (specifically emcc) for building .wasm
source ~/src/emsdk/emsdk_env.sh

# build .wasm bits and invoke web-ui for interactive testing
npx tree-sitter build-wasm && \
npx tree-sitter web-ui

# in appropriate browser window, paste code in left pane

# examine results in right pane -- can even click on nodes

# if output has errors, figure out what's wrong
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

Please see the [credits](doc/credits.md).
