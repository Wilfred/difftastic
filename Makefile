generate:
	./node_modules/.bin/tree-sitter generate

build-wasm: generate
	./node_modules/.bin/tree-sitter build-wasm

ui:
	./node_modules/.bin/tree-sitter generate
	./node_modules/.bin/tree-sitter build-wasm
	./node_modules/tree-sitter-cli/tree-sitter web-ui -q

parse: generate
	./node_modules/.bin/tree-sitter parse '../elixir/**/*.ex' --quiet --stat
