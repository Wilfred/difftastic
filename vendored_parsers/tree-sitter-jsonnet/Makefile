ts := tree-sitter

generate:
	${ts} generate

test: generate
	${ts} test

fmt:
	npx prettier --tab-width 4 -w grammar.js
