//! Data types summarising the result of diffing content.

use std::fmt::Display;

use crate::{
    display::hunks::Hunk,
    options::FileArgument,
    parse::{
        guess_language::{self, language_name},
        syntax::MatchedPos,
    },
};

#[derive(Debug, PartialEq, Eq)]
pub(crate) enum FileContent {
    Text(String),
    Binary,
}

#[derive(Debug, Clone)]
pub(crate) enum FileFormat {
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
pub(crate) struct DiffResult {
    pub(crate) lhs_path: FileArgument,
    pub(crate) rhs_path: FileArgument,

    pub(crate) display_path: String,
    /// Additional information to display about this file, such as
    /// "Renamed from x.js to y.js".
    pub(crate) extra_info: Option<String>,

    pub(crate) file_format: FileFormat,
    pub(crate) lhs_src: FileContent,
    pub(crate) rhs_src: FileContent,
    pub(crate) hunks: Vec<Hunk>,

    pub(crate) lhs_positions: Vec<MatchedPos>,
    pub(crate) rhs_positions: Vec<MatchedPos>,

    pub(crate) has_byte_changes: bool,
    pub(crate) has_syntactic_changes: bool,
}

impl DiffResult {
    pub(crate) fn has_reportable_change(&self) -> bool {
        if matches!(self.lhs_src, FileContent::Binary)
            || matches!(self.rhs_src, FileContent::Binary)
        {
            return self.has_byte_changes;
        }

        self.has_syntactic_changes
    }
}
