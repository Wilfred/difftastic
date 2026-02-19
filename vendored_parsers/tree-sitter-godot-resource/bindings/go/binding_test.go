package tree_sitter_godot_resource_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_godot_resource "github.com/prestonknopp/tree-sitter-godot-resource/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_godot_resource.Language())
	if language == nil {
		t.Errorf("Error loading GodotResource grammar")
	}
}
