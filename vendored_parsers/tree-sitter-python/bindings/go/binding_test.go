package tree_sitter_python_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-python"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_python.Language())
	if language == nil {
		t.Errorf("Error loading Python grammar")
	}
}
