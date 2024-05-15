package tree_sitter_lua_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-lua"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lua.Language())
	if language == nil {
		t.Errorf("Error loading Lua grammar")
	}
}
