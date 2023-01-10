# Syntax highlighting

For detailed introduction see the official guide on [Syntax highlighting](https://tree-sitter.github.io/tree-sitter/syntax-highlighting).

Briefly speaking, Tree-sitter uses the rules in `queries/highlights.scm` to annotate nodes
with specific tokens, then it maps those tokens to formatting style according to user-defined
theme.

To test highlighting using the CLI, you need to create local configuration.

```shell
# Create the config file
npx tree-sitter init-config
```

The above command should print out the config location, so that you can further configure it.
Open the file and modify `"parser-directories"` to include the parent directory of `tree-sitter-elixir`.
Also, you can optionally customize the theme, here's a tiny subset of the One Dark theme:

```json
{
  "number": {
    "color": "#61afef",
    "bold": true
  },
  "string": "#98c379",
  "string.escape": "#56b6c2",
  "string.special": "#61afef",
  "string.regexp": "#e06c75",
  "type": "#e06c75",
  "comment": {
    "color": "#5c6370",
    "italic": true
  },
  "punctuation": "#abb2bf",
  "punctuation.special": "#be5046",
  "operator": {
    "color": "#d19a66",
    "bold": true
  },
  "variable": "#abb2bf",
  "function": "#61afef",
  "constant": "#61afef",
  "constant.builtin": {
    "color": "#e06c75",
    "bold": true
  },
  "keyword": "#c678dd",
  "attribute": "#e06c75",
  "embedded": null
}
```

With this setup you can test highlighting on files using the Tree-sitter CLI.

```shell
npx tree-sitter highlight tmp/test.ex

npx tree-sitter highlight test/highlight/**/*.ex
```
