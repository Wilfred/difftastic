ifeq ($(shell uname),Darwin)
	SOEXT = dylib
else
	SOEXT = so
endif

dart: tree-sitter
	clang -Isrc -Itree-sitter/lib/include ../src/parser.c ../src/scanner.c tree-sitter/libtree-sitter.a --shared -o libdart.$(SOEXT)
	cp tree-sitter/libtree-sitter.so .
	cp tree-sitter/libtree-sitter.dylib .
	cp tree-sitter/tree-sitter.dll .

tree-sitter:
	cd tree-sitter && make

all: dart