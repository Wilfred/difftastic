# Contributing

Thank you to contribute `tree-sitter-racket`.

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

If you don't use nix, you should follow the [official setup](https://tree-sitter.github.io/tree-sitter/creating-parsers) to configure the dev environment.

