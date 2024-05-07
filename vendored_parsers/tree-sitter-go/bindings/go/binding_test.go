package tree_sitter_go_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_go.Language())
	if language == nil {
		t.Errorf("Error loading Go grammar")
	}
}
