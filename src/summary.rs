//! Data types summarising the result of diffing content.

use crate::parse::syntax::MatchedPos;

#[derive(Debug, PartialEq, Eq)]
pub enum FileContent {
    Text(String),
    Binary(Vec<u8>),
}

#[derive(Debug)]
pub struct DiffResult {
    pub lhs_display_path: String,
    pub rhs_display_path: String,
    pub language: Option<String>,
    pub lhs_src: FileContent,
    pub rhs_src: FileContent,
    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,
}
