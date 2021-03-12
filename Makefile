generate:
	./node_modules/.bin/tree-sitter generate

build-wasm:
	./node_modules/.bin/tree-sitter build-wasm

ui:
	./node_modules/.bin/tree-sitter build-wasm
	./node_modules/tree-sitter-cli/tree-sitter web-ui -q

parse-all:
	./node_modules/.bin/tree-sitter parse '../elixir/**/*.ex' --quiet --stat

parse:
	./node_modules/.bin/tree-sitter parse 'test.ex'

debug:
	./node_modules/.bin/tree-sitter parse 'test.ex' --debug-graph

test:
	./node_modules/.bin/tree-sitter test

update-corpus: corpus/*.txt
	./node_modules/.bin/tree-sitter test -u
