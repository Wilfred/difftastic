ts := tree-sitter

generate:
	${ts} generate

test: generate
	${ts} test
