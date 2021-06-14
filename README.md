# tree-sitter-hcl

tree-sitter grammar for the [HCL](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md) language

## Example

Highlighting `example/example.hcl`:

![Highlighting Example](https://i.imgur.com/JdfxHvE.jpeg)

## Developing

It is recommended to use `nix` to fulfill all development dependencies. To activate the development environment simply run `nix-shell` in the project root.

## Running Tests

To run tests simply run `nix-shell --run 'tree-sitter test'`.

## Quoted Template Expressions

In principle it is allowed to contain arbitary expressions in quoted template interpolations. Consider for example:

```hcl
foo = "prefix-${func(\"bar\"}"
```

To make parsing a little easier, this parser only checks for valid escape sequences and template chars.
When using this parser one would have to take the content of a template interpolation, unescape it and parse it again to get the syntax tree. The same applies to template directives.

## Todo

* [ ] use [Unicode® Standard Annex #31](https://www.unicode.org/reports/tr31/) (augmented with '-') for identifiers
* [ ] add [template expressions](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#template-expressions)
  * [x] add quoted templates
    * [x] add quoted template interpolations
    * [ ] add quoted template directives
  * [ ] add heredoc templates
