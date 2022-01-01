WEB_TREE_SITTER=README.md package.json tree-sitter-web.d.ts tree-sitter.js tree-sitter.wasm
TREE_SITTER_VERSION=v0.20.1

all: node_modules/web-tree-sitter tree-sitter-haskell.wasm

# build parser.c
src/parser.c: grammar.js
	npx tree-sitter generate

# build patched version of web-tree-sitter
node_modules/web-tree-sitter:
	if [ ! -d "tmp/tree-sitter" ]; then git clone https://github.com/tree-sitter/tree-sitter.git tmp/tree-sitter; fi
	cd tmp/tree-sitter && git checkout $(TREE_SITTER_VERSION)
	cp tree-sitter.patch tmp/tree-sitter/
	cd tmp/tree-sitter\
		&& git apply tree-sitter.patch\
		&& ./script/build-wasm
	mkdir -p node_modules/web-tree-sitter
	cp tmp/tree-sitter/LICENSE node_modules/web-tree-sitter
	cp $(addprefix tmp/tree-sitter/lib/binding_web/,$(WEB_TREE_SITTER)) node_modules/web-tree-sitter
	rm -rf tmp/tree-sitter

# build web version of tree-sitter-haskell
# NOTE: requires patched version of web-tree-sitter
tree-sitter-haskell.wasm: src/parser.c src/scanner.cc
	emcc                                             \
		-o tree-sitter-haskell.wasm                    \
		-Os                                            \
		-std=c++11                                     \
		-s WASM=1                                      \
		-s SIDE_MODULE=1                               \
		-s TOTAL_MEMORY=33554432                       \
		-s NODEJS_CATCH_EXIT=0                         \
		-s EXPORTED_FUNCTIONS=["_tree_sitter_haskell"] \
		-fno-exceptions                                \
		-Wno-reorder-init-list                         \
		-Wno-c99-designator                            \
		-I src                                         \
		-xc++                                          \
		src/scanner.cc                                 \
		src/parser.c

