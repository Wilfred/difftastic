package tree_sitter_typst_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-typst"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_typst.Language())
	if language == nil {
		t.Errorf("Error loading Typst grammar")
	}
}
