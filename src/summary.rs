use crate::syntax::MatchedPos;
use serde::{Deserialize, Serialize};

#[derive(Deserialize, Serialize, Debug, PartialEq, Eq)]
pub enum FileContent {
    Text(String),
    Binary(Vec<u8>),
}

#[derive(Serialize, Deserialize, Debug)]
pub struct DiffResult {
    pub path: String,
    pub language: Option<String>,
    pub lhs_src: FileContent,
    pub rhs_src: FileContent,
    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,
}
