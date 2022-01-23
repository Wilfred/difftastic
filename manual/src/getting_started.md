# Getting Started

## Installation

The latest version of difftastic is [available on
crates.io](https://crates.io/crates/difftastic). You can install it
with Cargo. Difftastic requires Rust 1.54 or later.

```
$ cargo install difftastic
```

See [contributing](./contributing.md) for instructions on debug
builds.

## Diffing Files

```
$ difft sample_files/before.js sample_files/after.js
```

Difftastic uses the file extension to decide which parser to use.

## Diffing Directories

```
$ difft sample_files/dir_before sample_files/dir_after
```

Difftastic will recursively walk the two directories, diffing files
with the same name.
