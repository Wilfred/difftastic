WEB_TREE_SITTER_FILES=README.md package.json tree-sitter-web.d.ts tree-sitter.js tree-sitter.wasm
TREE_SITTER_VERSION=v0.20.1

all: node_modules/web-tree-sitter tree-sitter-foam.wasm

# build parser.c
src/parser.c: grammar.js
	npx tree-sitter generate

# build patched version of web-tree-sitter
node_modules/web-tree-sitter:
	@rm -rf tmp/tree-sitter
	@git clone                                       \
		-c advice.detachedHead=false --quiet           \
		--depth=1 --branch=$(TREE_SITTER_VERSION)      \
		https://github.com/tree-sitter/tree-sitter.git \
		tmp/tree-sitter
	@cp tree-sitter.patch tmp/tree-sitter/
	@>/dev/null                      \
		&& cd tmp/tree-sitter          \
		&& git apply tree-sitter.patch \
		&& ./script/build-wasm --debug
	@mkdir -p node_modules/web-tree-sitter
	@cp tmp/tree-sitter/LICENSE node_modules/web-tree-sitter
	@cp $(addprefix tmp/tree-sitter/lib/binding_web/,$(WEB_TREE_SITTER_FILES)) node_modules/web-tree-sitter
	@rm -rf tmp/tree-sitter

# build web version of tree-sitter-foam
# NOTE: requires patched version of web-tree-sitter
tree-sitter-foam.wasm: src/parser.c src/scanner.c
	npx tree-sitter build-wasm

CC := cc
OURCFLAGS := -shared -fPIC -g -O0 -I src

clean:
	rm -f debug *.o *.a

debug.so: src/parser.c src/scanner.cc
	$(CC) $(OURCFLAGS) $(CFLAGS) -o parser.o src/parser.c
	$(CC) $(OURCFLAGS) $(CFLAGS) -o scanner.o src/scanner.cc
	$(CC) $(OURCFLAGS) $(CFLAGS) -o debug.so $(PWD)/scanner.o $(PWD)/parser.o
	rm -f $(HOME)/.cache/tree-sitter/lib/foam.so
	cp $(PWD)/debug.so $(HOME)/.cache/tree-sitter/lib/foam.so
