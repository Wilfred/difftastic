package tree_sitter_commonlisp_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-commonlisp"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_commonlisp.Language())
	if language == nil {
		t.Errorf("Error loading Commonlisp grammar")
	}
}
