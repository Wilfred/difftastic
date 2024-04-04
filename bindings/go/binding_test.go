package tree_sitter_tact_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-tact"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tact.Language())
	if language == nil {
		t.Errorf("Error loading Tact grammar")
	}
}
