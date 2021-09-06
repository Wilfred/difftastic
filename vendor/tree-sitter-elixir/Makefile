.PHONY: test

generate:
	./node_modules/.bin/tree-sitter generate

build-wasm:
	./node_modules/.bin/tree-sitter build-wasm
	cp tree-sitter-elixir.wasm playground/tree-sitter-parser.wasm

ui:
	./node_modules/.bin/tree-sitter build-wasm
	./node_modules/tree-sitter-cli/tree-sitter web-ui -q

integration:
	-[ ! -d "../elixir" ] && cd .. && git clone https://github.com/elixir-lang/elixir.git
	./node_modules/.bin/tree-sitter parse '../elixir/**/*.ex*' --quiet --stat

parse:
	./node_modules/.bin/tree-sitter parse -x 'test.ex'

debug-graph:
	./node_modules/.bin/tree-sitter parse 'test.ex' --debug-graph

debug:
	./node_modules/.bin/tree-sitter parse 'test.ex' --debug

test:
	./node_modules/.bin/tree-sitter test

install: generate test

update-corpus:
	./node_modules/.bin/tree-sitter test -u

generate-header:
	mkdir -p scripts/target
	cd scripts && ./generate-unicode-range > ../src/unicode.h
