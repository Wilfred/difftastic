## Profiling

If you have a file that's particularly slow, you can use
[cargo-flamegraph](https://github.com/flamegraph-rs/flamegraph) to see
which functions are slow.

```
$ CARGO_PROFILE_RELEASE_DEBUG=true cargo flamegraph --bin difft sample_files/slow_before.rs sample_files/slow_after.rs
```

It's also worth looking at memory usage, as graph traversal bugs can
lead to huge memory consumption.

```
$ /usr/bin/time -v ./target/release/difft sample_files/slow_before.rs sample_files/slow_after.rs
```

If timing measurement are noisy, Linux's `perf` tool will report
instructions executed, which is more stable.

```
$ perf stat ./target/release/difft sample_files/slow_before.rs sample_files/slow_after.rs
$ perf stat ./target/release/difft sample_files/typing_old.ml sample_files/typing_new.ml
```

Many more profiling techniques are discussed in [The Rust Performance
Book](https://nnethercote.github.io/perf-book/).
