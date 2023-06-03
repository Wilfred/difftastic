# Contributing

Thank you to contribute `tree-sitter-scheme`.

## Workflow

It's recommended to use [nix](https://nixos.org/) package manager, and run

```shell
nix-shell
npm install # if you haven't install node modules
```

Then you can use `tree-sitter` command:

```shell
tree-sitter generate
tree-sitter test
```

If you dont't use nix, you should follow the [official setup](https://tree-sitter.github.io/tree-sitter/creating-parsers) to configure the dev environment.

## Todo

* check the tracking issues
* review the code to ensure it meets the standard
* improve queries

