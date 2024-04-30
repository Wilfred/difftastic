package tree_sitter_purescript_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/postsolar/tree-sitter-purescript"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_purescript.Language())
	if language == nil {
		t.Errorf("Error loading Purescript grammar")
	}
}
