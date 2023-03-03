//! Data types summarising the result of diffing content.

use std::fmt::Display;

use crate::{
    display::hunks::Hunk,
    parse::{
        guess_language::{self, language_name},
        syntax::MatchedPos,
    },
};

#[derive(Debug, PartialEq, Eq)]
pub enum FileContent {
    Text(String),
    Binary,
}

#[derive(Debug, Clone)]
pub enum FileFormat {
    SupportedLanguage(guess_language::Language),
    PlainText,
    TextFallback { reason: String },
    Binary,
}

impl Display for FileFormat {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            FileFormat::SupportedLanguage(language) => write!(f, "{}", language_name(*language)),
            FileFormat::PlainText => write!(f, "Text"),
            FileFormat::TextFallback { reason } => write!(f, "Text ({})", reason),
            FileFormat::Binary => write!(f, "Binary"),
        }
    }
}

#[derive(Debug)]
pub struct DiffResult {
    pub lhs_display_path: String,
    pub rhs_display_path: String,

    pub file_format: FileFormat,
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
