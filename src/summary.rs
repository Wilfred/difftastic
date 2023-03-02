//! Data types summarising the result of diffing content.

use crate::{display::hunks::Hunk, parse::syntax::MatchedPos};

#[derive(Debug, PartialEq, Eq)]
pub enum FileContent {
    Text(String),
    Binary,
}

#[derive(Debug)]
pub struct DiffResult {
    pub lhs_display_path: String,
    pub rhs_display_path: String,

    /// The name of the language shown to the user, such as "Python"
    /// or "Text". If the file was binary, this is None.
    pub display_language: Option<String>,
    /// The language used to parse the file.
    pub language_used: Option<crate::parse::guess_language::Language>,

    pub lhs_src: FileContent,
    pub rhs_src: FileContent,
    pub hunks: Vec<Hunk>,

    pub lhs_positions: Vec<MatchedPos>,
    pub rhs_positions: Vec<MatchedPos>,

    pub has_byte_changes: bool,
    pub has_syntactic_changes: bool,
}

impl DiffResult {
    pub fn has_reportable_change(&self) -> bool {
        if matches!(self.lhs_src, FileContent::Binary)
            || matches!(self.rhs_src, FileContent::Binary)
        {
            return self.has_byte_changes;
        }

        self.has_syntactic_changes
    }
}
