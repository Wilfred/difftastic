//! Scratch experiment: how expensive is ts::Query::new for a highlights query,
//! and how much of that is attributable to particular patterns?
use std::time::Instant;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    let which = args.get(1).map(|s| s.as_str()).unwrap_or("rust");
    let (lang, query_src) = match which {
        "rust" => (
            tree_sitter::Language::new(tree_sitter_rust_orchard::LANGUAGE),
            tree_sitter_rust_orchard::HIGHLIGHTS_QUERY.to_owned(),
        ),
        "python" => (
            tree_sitter::Language::new(tree_sitter_python::LANGUAGE),
            tree_sitter_python::HIGHLIGHTS_QUERY.to_owned(),
        ),
        _ => panic!("unknown language"),
    };

    // Optionally read a replacement query from a file.
    let query_src = match args.get(2) {
        Some(path) => std::fs::read_to_string(path).unwrap(),
        None => query_src,
    };

    let start = Instant::now();
    let q = tree_sitter::Query::new(&lang, &query_src).unwrap();
    println!(
        "{} patterns, {} captures, Query::new took {:?}",
        q.pattern_count(),
        q.capture_names().len(),
        start.elapsed()
    );
}
