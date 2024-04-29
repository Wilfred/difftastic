package tree_sitter_cpp_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cpp"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cpp.Language())
	if language == nil {
		t.Errorf("Error loading C++ grammar")
	}
}
