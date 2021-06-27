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

## Fuzzing

The directory `fuzz/crashers` contains a set of crashes that were found with fuzzing. To fuzz the parser i used the instrumentation of [tree-sitter](https://github.com/tree-sitter/tree-sitter/tree/master/test/fuzz) 

## Todo

* [x] use [Unicode® Standard Annex #31](https://www.unicode.org/reports/tr31/) (augmented with '-') for identifiers
* [ ] add [template expressions](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#template-expressions)
  * [x] add templates
    * [x] add template interpolations
    * [ ] add template directives
    * [x] add quoted templates
    * [x] add heredoc templates
* [ ] fuzzing
  * [x] start with fuzzing the parser
  * [ ] upload fuzzing instrumentation
  * [ ] document fuzzing process
  * [ ] add parsing of crashers to CI process
