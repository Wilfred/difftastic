use criterion::{black_box, criterion_group, criterion_main, Criterion};

static CODE: &str = include_str!(r#"../examples/texlab.tex"#);

fn criterion_benchmark(c: &mut Criterion) {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&tree_sitter_latex::language()).unwrap();

    c.bench_function("Full", |b| {
        b.iter_with_large_drop(|| parser.parse(black_box(CODE), None).unwrap());
    });

    let tree = parser.parse(black_box(CODE), None).unwrap();
    c.bench_function("Incremental", |b| {
        b.iter_with_large_drop(|| {
            let mut old_tree = tree.clone();
            old_tree.edit(&tree_sitter::InputEdit {
                start_byte: 0,
                old_end_byte: 1,
                new_end_byte: 0,
                start_position: tree_sitter::Point { row: 0, column: 0 },
                old_end_position: tree_sitter::Point { row: 0, column: 1 },
                new_end_position: tree_sitter::Point { row: 0, column: 0 },
            });

            parser
                .parse(black_box(&CODE[1..]), Some(&old_tree))
                .unwrap()
        });
    });
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
