# Installing From Source

### Build Requirements

Difftastic is written in Rust, so you will need Rust installed. I
recommend [rustup](https://rustup.rs/) to install Rust. Difftastic
requires Rust version 1.74.1 or later.

You will also need a C++ compiler that supports C++14. If you're using
GCC, you need at least version 8.

### Build

You can download and build [difftastic on
crates.io](https://crates.io/crates/difftastic) with Cargo (which is
part of Rust).

```
$ cargo install --locked difftastic
```

Difftastic uses the `cc` crate for building C/C++ dependencies. This
allows you to use environment variables `CC` and `CXX` to control the
compiler used (see the [`cc`
docs](https://github.com/alexcrichton/cc-rs#external-configuration-via-environment-variables)).

See [contributing](./contributing.md) for instructions on debug
builds.

## (Optional) Install a MIME Database

If a MIME database is available, difftastic will use it to detect
binary files more accurately. This is the same database used by the
`file` command, so you probably already have it.

The MIME database path is [specified in the XDG
specification](https://specifications.freedesktop.org/shared-mime-info-spec/0.11/ar01s03.html). The
database should be at one of the following paths:

* `/usr/share/mime/magic`
* `/usr/local/share/mime/magic`
* `$HOME/.local/share/mime/magic`
