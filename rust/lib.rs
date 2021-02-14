#![warn(clippy::pedantic)]

//! Create a [tree-sitter][] for parsing elm source code.
//!
//! ## Usage
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//!     cons : a -> List a -> List a
//!     cons first rest =
//!         first :: rest
//! "#;
//! let mut parser = Parser::new();
//! parser.set_language(tree_sitter_elm::language()).expect("Error loading Elm language");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    #[link_name = "tree_sitter_elm"]
    fn raw_tree_sitter_elm() -> Language;
}

/// Returns the tree-sitter [`Language`] for elm.
#[must_use]
pub fn language() -> Language {
    unsafe { raw_tree_sitter_elm() }
}

#[cfg(test)]
mod tests {
    use std::fs;
    use tree_sitter::Parser;

    #[test]
    fn smoke() {
        let source_code = "test : Test.Test";
        let tree = {
            let mut parser = Parser::new();
            parser.set_language(super::language()).unwrap();
            parser.parse(source_code, None).unwrap()
        };
        let root_node = tree.root_node();

        assert_eq!(root_node.kind(), "file");
        assert_eq!(root_node.start_position().column, 0);
        assert_eq!(root_node.end_position().column, 16);
    }

    #[test]
    fn versions() {
        #[derive(serde::Deserialize)]
        struct Package {
            version: String,
        }
        #[derive(serde::Deserialize)]
        struct CargoManifest {
            package: Package,
        }
        let npm: Package =
            serde_json::from_str(&fs::read_to_string("package.json").unwrap()).unwrap();
        let cargo: CargoManifest =
            toml::from_str(&fs::read_to_string("Cargo.toml").unwrap()).unwrap();
        assert_eq!(npm.version, cargo.package.version);
    }
}
