# TREE_SITTER=tree-sitter
TREE_SITTER=npm run

all: fmt gen test

fmt:
	./node_modules/.bin/prettier --write grammar.js

.PHONY: test
test: gen
	$(TREE_SITTER) test

.PHONY: test-highlight
test-highlight:
	# Note: test-highlight uses a filter for non-existent corpus
	# tests, so only highlights run. And does not gen.
	$(TREE_SITTER) test-highlight

.PHONY: update
update: gen
	$(TREE_SITTER) test -- --update

.PHONY: debug
debug: gen
	$(TREE_SITTER) test -d

.PHONY: gen
gen:
	$(TREE_SITTER) generate
	ruby -e 'ARGV.each{|f| File.write(f, "// @"+"generated\n\n"+File.read(f))}' src/parser.c src/tree_sitter/parser.h
	ruby -rjson -e 'ARGV.each{|f| File.write(f, JSON.pretty_generate(JSON.parse(File.read(f)).tap{|j| j["@"+"generated"] = true}))}' src/grammar.json
	ruby -rjson -e 'ARGV.each{|f| File.write(f, JSON.pretty_generate(JSON.parse(File.read(f)).tap{|j| j << {"@"+"generated" => true}}))}' src/node-types.json

.PHONY: deps
deps:
	npm install

.PHONY: web
web: wasm
	$(TREE_SITTER) web-ui

.PHONY: wasm
wasm:
	$(TREE_SITTER) build-wasm

.PHONY: publish
publish: all wasm
	cp ./tree-sitter-erlang.wasm ./docs
