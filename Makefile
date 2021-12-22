TREE_SITTER = node_modules/.bin/tree-sitter

.PHONY: help
help:
	@echo 'Make targets:'
	@echo '  generate   - generate parser sources'

.PHONY: generate
generate:
	$(TREE_SITTER) generate
