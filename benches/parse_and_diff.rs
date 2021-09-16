use std::ffi::OsStr;

use criterion::{criterion_group, criterion_main, Criterion};
use difftastic::regex_parser as rp;
use difftastic::tree_sitter_parser::{from_extension, parse};
use typed_arena::Arena;

pub fn parsing_benchmark(c: &mut Criterion) {
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

    let css_rx_config = rp::from_extension(OsStr::new("css")).unwrap();
    c.bench_function("Tiny CSS file (regex)", |b| {
        b.iter(|| {
            let arena = Arena::new();
            rp::parse(
                &arena,
                ".foo { color: red; border: 1px solid green; }",
                &css_rx_config,
            );
        })
    });
}

criterion_group!(benches, parsing_benchmark);
criterion_main!(benches);
