dart: tree-sitter
	clang -I src ../src/parser.c ../src/scanner.c tree-sitter/libtree-sitter.a --shared -o libdart.dylib

tree-sitter:
	cd tree-sitter && make

all: dart