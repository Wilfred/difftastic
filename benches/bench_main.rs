use criterion::{black_box, criterion_group, criterion_main, Criterion};

static CODE: &str = include_str!(r#"../examples/texlab.tex"#);

fn criterion_benchmark(c: &mut Criterion) {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_latex::language()).unwrap();

    c.bench_function("Init", |b| {
        b.iter(|| {
            let mut parser = tree_sitter::Parser::new();
            parser.set_language(tree_sitter_latex::language()).unwrap();
            parser
        });
    });

    c.bench_function("Parse", |b| {
        b.iter_with_large_drop(|| parser.parse(black_box(CODE), None).unwrap());
    });
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
