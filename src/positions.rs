/// A range in a string, relative to the string start. May include
/// newlines.
#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Clone, Copy)]
pub struct Span {
    pub start: usize, // inclusive
    pub end: usize,   // exclusive
}

