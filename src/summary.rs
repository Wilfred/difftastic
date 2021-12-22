use crate::syntax::MatchedPos;

#[derive(Debug)]
pub struct DiffResult {
    pub path: String,
    pub language: Option<String>,
    pub binary: bool,
    pub lhs_src: String,
    pub rhs_src: String,
    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,
}
