package tree_sitter_elixir_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-elixir"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_elixir.Language())
	if language == nil {
		t.Errorf("Error loading Elixir grammar")
	}
}
