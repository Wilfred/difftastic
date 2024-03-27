package tree_sitter_devicetree_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-devicetree"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_devicetree.Language())
	if language == nil {
		t.Errorf("Error loading Devicetree grammar")
	}
}
