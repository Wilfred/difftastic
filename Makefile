generate:
	./node_modules/.bin/tree-sitter generate

build-wasm: generate
	./node_modules/.bin/tree-sitter build-wasm

ui:
	./node_modules/.bin/tree-sitter generate
	./node_modules/.bin/tree-sitter build-wasm
	./node_modules/tree-sitter-cli/tree-sitter web-ui -q

parse-all: generate
	./node_modules/.bin/tree-sitter parse '../elixir/**/*.ex' --quiet --stat

parse: generate
	./node_modules/.bin/tree-sitter parse 'test.ex'

debug: generate
	./node_modules/.bin/tree-sitter parse 'test.ex' --debug-graph

test: generate corpus/*.txt
	./node_modules/.bin/tree-sitter test

update-corpus: generate corpus/*.txt
	./node_modules/.bin/tree-sitter test -u
