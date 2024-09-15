package foam_test

import (
	"context"
	"testing"

	foam "github.com/FoamScience/tree-sitter-foam/bindings/go"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/stretchr/testify/assert"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	code := `// Looks good to me!
someDict {
    this isAValue;
    also true;
}
#include "someFile.cfg"
key val;`

	n, err := sitter.ParseCtx(context.Background(), []byte(code), foam.GetLanguage())
	assert.NoError(err)
	assert.Equal(
        "(foam (comment) (dict key: (identifier) (dict_core dict_body: (key_value keyword: (identifier) value: (identifier)) dict_body: (key_value keyword: (identifier) value: (boolean)))) (preproc_call directive: (identifier) argument: (string_literal)) (key_value keyword: (identifier) value: (identifier)))",
		n.String(),
	)
}
