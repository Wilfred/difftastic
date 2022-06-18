use tree_sitter_md::*;

fn main() {
    let mut parser = MarkdownParser::new().unwrap();
    let filename = std::env::args().nth(1).unwrap();
    let source = std::fs::read(filename).unwrap();
    parser.parse(&source, None);
}
