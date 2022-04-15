# Installation

## Installing a binary

Difftastic [provides GitHub
releases](https://github.com/Wilfred/difftastic/releases) with
prebuilt binaries.

Packages are also available on the following platforms.

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

Difftastic uses the `cc` crate for building C/C++ dependencies. This
allows you to use environment variables `CC` and `CXX` to control the
compiler used (see [the cc
docs](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)).

See [contributing](./contributing.md) for instructions on debug
builds.
