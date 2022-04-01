# Getting Started

## Installing a prebuilt package

Prebuilt packages are available on the following platforms.

[![Packaging status](https://repology.org/badge/vertical-allrepos/difftastic.svg)](https://repology.org/project/difftastic/versions)

## Installing from source

### Build Requirements

Difftastic is written in Rust, so you will need Rust installed. I
recommend [rustup](https://rustup.rs/) to install Rust. Difftastic
requires Rust version 1.56 or later.

You will also need a C++ compiler that supports C++14. If you're using
GCC, you need at least version 8.

### Build

You can download and build [difftastic on
crates.io](https://crates.io/crates/difftastic) with Cargo (which is
part of Rust).

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
