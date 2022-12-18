//! Data types summarising the result of diffing content.

use crate::{display::hunks::Hunk, parse::syntax::MatchedPos};

#[derive(Debug, PartialEq, Eq)]
pub enum FileContent {
    Text(String),
    Binary(Vec<u8>),
}

#[derive(Debug)]
pub struct DiffResult {
    pub lhs_display_path: String,
    pub rhs_display_path: String,
    // TODO: rename to display_language.
    pub language: Option<String>,
    pub detected_language: Option<crate::parse::guess_language::Language>,
    pub lhs_src: FileContent,
    pub rhs_src: FileContent,
    pub hunks: Vec<Hunk>,

    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,
    pub has_same_bytes: bool,
}
