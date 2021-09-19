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

The directory `fuzz/crashers` contains a set of crashes that were found with fuzzing.

## Todo

* [ ] add [template expressions](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md#template-expressions)
  * [x] add template interpolations
  * [ ] add template directives
    * [x] add template for expressions
    * [ ] add template if expressions
  * [x] add quoted templates
  * [x] add heredoc templates
* [ ] fuzzing
  * [x] start with fuzzing the parser
  * [x] upload fuzzing instrumentation
  * [ ] document fuzzing process
* [ ] quality
  * [x] add CI job that ensures the parser builds on different plattforms
  * [ ] add CI job that parses crashers that were found during fuzzing
