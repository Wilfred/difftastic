package tree_sitter_cmake_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cmake"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cmake.Language())
	if language == nil {
		t.Errorf("Error loading Cmake grammar")
	}
}
