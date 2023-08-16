test: build
	tree-sitter test

build:
	tree-sitter generate

.PHONY: test build
