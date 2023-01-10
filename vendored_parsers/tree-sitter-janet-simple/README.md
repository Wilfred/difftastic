# tree-sitter-janet-simple

## Status

Subject to change, grammar still evolving.

Coincidentally, it appears [another effort by GrayJack](https://github.com/GrayJack/tree-sitter-janet/) was started at about the same time.

The main difference between these two are that GrayJack's grammar supports higher level constructs (e.g. `def` is recognized by the grammar).

There might end up being different trade-offs in either approach and my belief is that there is room in the world for multiple attempts (especially for lisp-like languages).

## Prerequisites

* [emsdk](https://emscripten.org/docs/getting_started/downloads.html#installation-instructions) -- emscripten via homebrew seems to work for macos
* node >= 12 (nvm recommended) -- recently tested 12.9.1, 12,16,1

## Fine Print

* The instructions below assume emsdk has been installed, but `emcc` (tool that can be used to compile to wasm) is not necessarily on one's `PATH`.  If an appropriate `emcc` is on one's `PATH` (e.g. emscripten installed via homebrew), the emsdk steps (e.g. `source ~/src/emsdk/emsdk_env.sh`) below may be ignored.

* `node-gyp` (tool for compiling native addon modules for Node.js) may fail on machines upgraded to macos Catalina. [This document](https://github.com/nodejs/node-gyp/blob/master/macOS_Catalina.md) may help cope with such a situation.

## Initial Setup

Suppose typical development sources are stored under `~/src`.

```
# clone repository
cd ~/src
git clone https://github.com/sogaiu/tree-sitter-janet-simple
cd tree-sitter-janet-simple

# create / populate
#   `node_modules` with dependencies
#   `src` with tree-sitter .c goodness
#   `build`
#   `build/Release` and build `tree_sitter_janet_simple_binding.node`
npm install

# included in previous command
#npx tree-sitter generate
#npx node-gyp configure
#npx node-gyp rebuild
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
# create and populate sample code file for parsing named `sample.janet`

# parse sample file
npx tree-sitter parse sample.janet

# examine output similar to web-ui, but less convenient
```

## Measure Performance

```
# single measurement
npx tree-sitter parse --time sample.janet

# mutliple measurements with `multitime`
multitime -n10 -s1 npx tree-sitter parse --time --quiet sample.janet
```

## Build .wasm

Assuming emsdk is installed appropriately under `~/src/emsdk`.

```
# prepare emsdk (specifically emcc) for use
source ~/src/emsdk/emsdk_env.sh

# create `tree-sitter-janet-simple.wasm`
npx tree-sitter build-wasm
```

## Resources

* [Guide to your first Tree-sitter grammar](https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef)
* [tree-sitter](http://tree-sitter.github.io/tree-sitter/)

## Acknowledgments

* 314eter - handling null characters
* Aerijo - Guide to your first Tree-sitter grammar
* bakpakin - janet
* GrayJack - tree-sitter-janet
* maxbrunsfeld - tree-sitter and related
