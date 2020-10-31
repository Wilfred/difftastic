#![warn(clippy::pedantic)]

use tree_sitter::Language;

extern "C" {
    #[link_name = "tree_sitter_elm"]
    fn raw_tree_sitter_elm() -> Language;
}

#[must_use]
pub fn tree_sitter_elm() -> Language {
    unsafe { raw_tree_sitter_elm() }
}
