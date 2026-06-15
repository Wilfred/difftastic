//! Data types summarising the result of diffing content.

use std::fmt::Display;

use line_numbers::LineNumber;

use crate::display::hunks::Hunk;
use crate::parse::guess_language::{self, language_name};
use crate::parse::syntax::MatchedPos;

/// The `(start line, end line)` spans of the function and method
/// definitions in a file. Used by `--show-function` to display the
/// function enclosing each change.
pub(crate) type FunctionSpans = Vec<(LineNumber, LineNumber)>;

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
            Self::SupportedLanguage(language) => write!(f, "{}", language_name(*language)),
            Self::PlainText => write!(f, "Text"),
            Self::TextFallback { reason } => write!(f, "Text ({})", reason),
            Self::Binary => write!(f, "Binary"),
        }
    }
}

#[derive(Debug)]
pub(crate) struct DiffResult {
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

    /// The function/method definition spans in each file. Empty unless
    /// `--show-function` is enabled.
    pub(crate) lhs_fn_spans: FunctionSpans,
    pub(crate) rhs_fn_spans: FunctionSpans,

    /// If the two files do not have exactly the same bytes, the
    /// number of bytes in each file.
    pub(crate) has_byte_changes: Option<(usize, usize)>,
    pub(crate) has_syntactic_changes: bool,
}

impl DiffResult {
    pub(crate) fn has_reportable_change(&self) -> bool {
        if matches!(self.lhs_src, FileContent::Binary)
            || matches!(self.rhs_src, FileContent::Binary)
        {
            return self.has_byte_changes.is_some();
        }

        self.has_syntactic_changes
    }
}
