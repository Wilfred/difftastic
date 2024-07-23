package tree_sitter_scala_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-scala"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_scala.Language())
	if language == nil {
		t.Errorf("Error loading Scala grammar")
	}
}
