use crate::lines::LineNumber;

/// A range in a string, relative to the string start. May include
/// newlines.
#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Clone, Copy)]
pub struct Span {
    pub start: usize, // inclusive
    pub end: usize,   // exclusive
}

/// A contiguous sequence of line spans.
#[derive(Debug, PartialEq)]
pub struct LineSpan {
    pub spans: Vec<SingleLineSpan>,
}

/// A range within a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
pub struct SingleLineSpan {
    /// All zero-indexed.
    pub line: LineNumber,
    pub start_col: usize,
    pub end_col: usize,
}
