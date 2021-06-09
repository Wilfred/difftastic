use crate::lines::{LineNumber, NewlinePositions};

/// A range in a string, relative to the string start. May include
/// newlines.
#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Clone, Copy)]
pub struct Span {
    pub start: usize, // inclusive
    pub end: usize,   // exclusive
}

impl Span {
    /// Convert to single-line spans. If the original span crosses a
    /// newline, the vec will contain multiple items.
    pub fn to_line_spans(&self, nl_pos: &NewlinePositions) -> Vec<SingleLineSpan> {
        let start_pos = nl_pos.from_offset(self.start);
        let end_pos = nl_pos.from_offset(self.end);

        nl_pos.split_line_boundaries(start_pos, end_pos)
    }
}

/// A range within a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
pub struct SingleLineSpan {
    /// All zero-indexed.
    pub line: LineNumber,
    pub start_col: usize,
    pub end_col: usize,
}
