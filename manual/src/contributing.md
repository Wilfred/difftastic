# Contributing

## Building

Install Rust with [rustup](https://rustup.rs/), then clone the code.

```
$ git clone git@github.com:Wilfred/difftastic.git
$ cd difftastic
```

Difftastic uses [Cargo](https://doc.rust-lang.org/cargo/) for
building.

```
$ cargo build
```

Debug builds are significantly slower than release builds. For files
with more than fifty lines, it's usually worth using an optimised
build.

```
$ cargo build --release
```

## Testing

```
$ cargo test
```

There are also several files in `sample_files/` that you can use.

The best way to test difftastic is to look at history from a real
project. Set `GIT_EXTERNAL_DIFF` to point to your current build.

For example, you can run difftastic on its own source code.

```
$ GIT_EXTERNAL_DIFF=./target/release/difftastic git log -p --ext-diff -- src
```

## Profiling

If you have a file that's particularly slow, you can use
[cargo-flamegraph](https://github.com/flamegraph-rs/flamegraph) to see
which functions are slow.

```
$ cargo flamegraph --bin difftastic sample_files/slow_before.rs sample_files/slow_after.rs
```

It's also worth looking at memory usage, as graph traversal bugs can
lead to huge memory consumption.

```
$ /usr/bin/time -v ./target/release/difftastic sample_files/slow_before.rs sample_files/slow_after.rs
```

If timing measurement are noisy, Linux's `perf` tool will report
instructions executed, which is more stable.

```
$ perf stat ./target/release/difftastic sample_files/slow_before.rs sample_files/slow_after.rs
```

Many more profiling techniques are discussed in the [The Rust
Performance Book](https://nnethercote.github.io/perf-book/).

## Manual

This website is generated with
[mdbook](https://github.com/rust-lang/mdBook/). mdbook can be
installed with Cargo.

```
$ cargo install mdbook
```

You can then use the `mdbook` binary to build and serve the site
locally.

```
$ cd manual
$ mdbook serve
```

## Releasing

Use Cargo to create a new release, and tag it in git.

```
$ cargo publish
$ VERSION=$(cargo metadata | jq -r '.packages | .[] | select(.name == "difftastic") | .version')
$ git tag $VERSION
$ git push --tags
```

You can now increment the version in Cargo.tmol and add a new entry
CHANGELOG.md.
