test: src/parser.c
	tree-sitter test -f Test

all: src/parser.c
	tree-sitter test

fixme: src/parser.c
	tree-sitter test -f Fixme

src/parser.c: grammar.js
	tree-sitter generate

build: src/parser.c size

size: src/parser.c
	du -b src/parser.c
	du -b src/parser.c > size.txt

.PHONY: fixme test build all size
