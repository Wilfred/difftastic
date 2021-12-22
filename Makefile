TREE_SITTER = node_modules/.bin/tree-sitter

.PHONY: help
help:
	@echo 'Make targets:'
	@echo '  generate   - generate parser sources'

.PHONY: generate
generate:
	$(MAKE) src/typescript-scanner.h
	$(TREE_SITTER) generate

src/typescript-scanner.h: node_modules/tree-sitter-typescript/common/scanner.h
	cp $< $@
