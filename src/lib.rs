//! Difftastic is a syntactic diff tool.
//!
//! For usage instructions and advice on contributing, see [the
//! manual](http://difftastic.wilfred.me.uk/).
//!
//! This library is only intended for use by the difftastic
//! binary. APIs may change without notice.
//!
//! Difftastic is structured as a library to enable use with tools
//! like Criterion, and for contributors to explore the APIs from
//! docs.rs.

mod context;
pub mod dijkstra;
pub mod files;
mod graph;
pub mod hunks;
pub mod inline;
pub mod line_parser;
pub mod lines;
mod positions;
pub mod side_by_side;
pub mod style;
pub mod syntax;
pub mod tree_sitter_parser;

#[macro_use]
extern crate log;
