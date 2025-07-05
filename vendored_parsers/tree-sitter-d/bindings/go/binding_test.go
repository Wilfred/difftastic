package tree_sitter_d_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_d "github.com/tree-sitter/tree-sitter-d/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_d.Language())
	if language == nil {
		t.Errorf("Error loading D grammar")
	}
}
