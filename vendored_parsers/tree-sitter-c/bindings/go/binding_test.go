package tree_sitter_c_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-c"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_c.Language())
	if language == nil {
		t.Errorf("Error loading C grammar")
	}
}
