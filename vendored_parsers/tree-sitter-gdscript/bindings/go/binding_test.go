package tree_sitter_gdscript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gdscript "github.com/prestonknopp/tree-sitter-gdscript/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gdscript.Language())
	if language == nil {
		t.Errorf("Error loading GDScript grammar")
	}
}
