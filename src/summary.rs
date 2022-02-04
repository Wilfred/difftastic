use crate::syntax::MatchedPos;

#[derive(Debug)]
pub enum FileContent {
    Text(String),
    Binary(Vec<u8>),
}

#[derive(Debug)]
pub struct DiffResult {
    pub path: String,
    pub language: Option<String>,
    pub lhs_src: FileContent,
    pub rhs_src: FileContent,
    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,
}
