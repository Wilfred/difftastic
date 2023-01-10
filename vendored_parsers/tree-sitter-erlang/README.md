# Tree Sitter Erlang

This represents tree-sitter grammar used for the Erlang language in the
ELP project.

It started as a direct clone of
https://github.com/AbstractMachinesLab/tree-sitter-erlang at
[7b436e1ca50f0002f6765a9a2a00f6156b2cc881](https://github.com/AbstractMachinesLab/tree-sitter-erlang/commit/7b436e1ca50f0002f6765a9a2a00f6156b2cc881),
but was later heavily modified for completeness.

## Usage

Install the required toolchain with

```
make deps
```

Edit the `grammar.js` file and re-generate the code with:

```
make gen
```

Useful test command, parses `foo.erl` and opens a browser window to
show the process, with pretty pictures of the generated AST.

```
npm run parse -- --debug-graph testdata/foo.erl
```

## License

tree-sitter-erlang is [Apache licensed](./LICENSE).
