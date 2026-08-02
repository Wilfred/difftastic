## Profiling

If you have a file that's particularly slow, you can use
[cargo-flamegraph](https://github.com/flamegraph-rs/flamegraph) to see
which functions are slow.

```
$ CARGO_PROFILE_RELEASE_DEBUG=true cargo flamegraph --bin difft -- sample_files/slow_1.rs sample_files/slow_2.rs
```

It's also worth looking at memory usage, as graph traversal bugs can
lead to huge memory consumption.

```
$ /usr/bin/time -v ./target/release/difft sample_files/slow_1.rs sample_files/slow_2.rs
```

If timing measurements are noisy, Linux's `perf` tool will report
instructions executed, which is more stable.

```
$ perf stat ./target/release/difft sample_files/slow_1.rs sample_files/slow_2.rs
$ perf stat ./target/release/difft sample_files/typing_1.ml sample_files/typing_2.ml
```

Many more profiling techniques are discussed in [The Rust Performance
Book](https://nnethercote.github.io/perf-book/).

## Benchmarking

Difftastic has benchmarks in `benches/` that measure parsing and
diffing on a handful of files in `sample_files/`.

```
$ cargo bench
```

These benchmarks also run on every pull request, and
[CodSpeed](https://codspeed.io/) reports how the results compare with
the master branch. CodSpeed counts instructions executed, so results
are stable even though CI machines are noisy.

Note that the benchmarks include the difftastic source files directly,
because difftastic is a binary crate and its internals aren't visible
to a separate benchmark crate.
