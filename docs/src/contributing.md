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

For example, you can run difftastic on its own git repository.

```
$ GIT_EXTERNAL_DIFF=./target/release/difftastic git log -p --ext-diff
```

## Profiling

If you have a file that's particularly slow, you can use
[cargo-flamegraph](https://github.com/flamegraph-rs/flamegraph) to see
which functions are slow.

```
$ cargo flamegraph --bin difftastic ~/tmp/slow_before.rs ~/tmp/slow_after.rs
```

It's also worth looking at memory usage, as graph traversal bugs can
lead to huge memory consumption.

```
$ /usr/bin/time -v ./target/release/difftastic before.rs after.rs
```

## Documentation

This site is generated with
[mdbook](https://github.com/rust-lang/mdBook/). mdbook can be
installed with Cargo.

```
$ cargo install mdbook
```

You can then use the `mdbook` binary to build and serve this site
locally.

```
$ cd docs
$ mdbook serve
```
