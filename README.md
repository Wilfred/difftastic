# tree-sitter-hcl

tree-sitter grammar for the [HCL](https://github.com/hashicorp/hcl/blob/main/hclsyntax/spec.md) language

## Try It Out

Try the parser in the [playground](https://michahoffmann.github.io/tree-sitter-hcl/)

## Example

Highlighting `example/example.hcl`:

![Highlighting Example](https://i.imgur.com/yUJ0ybK.png)

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

See the [fuzzing repo for this parser](https://github.com/MichaHoffmann/tree-sitter-hcl-fuzz)

## Attributions

Pages were copied from https://github.com/m-novikov/tree-sitter-sql
