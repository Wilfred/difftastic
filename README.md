# tree-sitter-hcl

tree-sitter grammar for the [HCL](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md) language

## Example

Highlighting `example/example.hcl`:

![Highlighting Example](https://i.imgur.com/4XFVNVT.png)

## Developing

It is recommended to use `nix` to fulfill all development dependencies. To activate the development environment simply run `nix-shell` in the project root.

## Running Tests

To run tests simply run `nix-shell --run 'tree-sitter test'`.

## Compliance

The directory `example/real_world_stuff` contains a corpus of hcl files that I found with the github query `language:HCL` for users `coreos`, `hashicorp`, `oracle` and `terraform-community-modules`.

```bash
tree-sitter parse --quiet --stat example/real_world_stuff/*/*

Total parses: 1892; successful parses: 1892; failed parses: 0; success percentage: 100.00%
```

The aim is to build unit testcases from selected failure classes and slowly get to 100%. 


## Todo

* [ ] use [Unicode® Standard Annex #31](https://www.unicode.org/reports/tr31/) (augmented with '-') for identifiers
* [ ] add [template expressions](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#template-expressions)
  * [x] add quoted templates
    * [x] add quoted template interpolations
    * [ ] add quoted template directives
  * [x] add heredoc templates

