# tree-sitter-hcl

WIP tree-sitter grammar for the [HCL](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md) language

## developing

It is recommended to use `nix` to fulfill all development dependencies. To activate the development environment simply run `nix-shell` in the project root.

## running tests

To run tests simply run `nix-shell --run 'tree-sitter test'`. 

## todo

* use [Unicode® Standard Annex #31](https://www.unicode.org/reports/tr31/) (augmented with '-')for identifiers
* add [operations](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#operations)
* add [template expressions](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#template-expressions) and express string literals using them
