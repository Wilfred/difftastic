package tree_sitter_latex_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-latex"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_latex.Language())
	if language == nil {
		t.Errorf("Error loading Latex grammar")
	}
}
