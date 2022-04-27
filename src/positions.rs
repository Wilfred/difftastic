//! Represents positions within a string.

use crate::lines::LineNumber;
use serde::{Deserialize, Serialize};

/// A range within a single line of a string.
#[derive(Serialize, Deserialize, Debug, PartialEq, Clone, Copy, Eq, PartialOrd, Ord, Hash)]
pub struct SingleLineSpan {
    /// All zero-indexed.
    pub line: LineNumber,
    pub start_col: usize,
    pub end_col: usize,
}
