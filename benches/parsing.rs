use std::ffi::OsStr;

use criterion::{criterion_group, criterion_main, Criterion};
use difftastic::tree_sitter_parser::{from_extension, parse};
use typed_arena::Arena;

pub fn criterion_benchmark(c: &mut Criterion) {
    let css_config = from_extension(OsStr::new("css")).unwrap();
    c.bench_function("Tiny CSS file", |b| {
        b.iter(|| {
            let arena = Arena::new();
            parse(
                &arena,
                ".foo { color: red; border: 1px solid green; }",
                &css_config,
            );
        })
    });
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
