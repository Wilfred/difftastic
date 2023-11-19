//! Manipulate lines of text and groups of lines.

use std::ops::Sub;

use line_numbers::LineNumber;

pub(crate) fn format_line_num(line_num: LineNumber) -> String {
    format!("{} ", line_num.display())
}

/// A position in a single line of a string.
#[derive(Debug, PartialEq, Clone, Copy)]
struct LinePosition {
    /// Both zero-indexed.
    pub(crate) line: LineNumber,
    column: usize,
}

/// Return the length of `s` in codepoints. This is important when
/// finding character boundaries for slicing without errors.
pub(crate) fn codepoint_len(s: &str) -> usize {
    s.chars().count()
}

/// Return the length of `s` in bytes.
///
/// This is a trivial wrapper to make it clear when we want bytes not
/// codepoints.
pub(crate) fn byte_len(s: &str) -> usize {
    s.len()
}

pub(crate) trait MaxLine {
    fn max_line(&self) -> LineNumber;
}

impl<S: AsRef<str>> MaxLine for S {
    fn max_line(&self) -> LineNumber {
        (self
            .as_ref()
            .trim_end() // Remove extra trailing whitespaces.
            .split('\n') // Split by `\n` to calculate lines.
            .count() as u32)
            .sub(1) // Sub 1 to make zero-indexed LineNumber
            .into()
    }
}

pub(crate) fn is_all_whitespace(s: &str) -> bool {
    s.chars().all(|c| c.is_whitespace())
}

#[cfg(test)]
mod tests {
    use pretty_assertions::assert_eq;

    use super::*;

    #[test]
    fn str_max_line() {
        let line: String = "foo\nbar".into();
        assert_eq!(line.max_line().0, 1);
    }

    #[test]
    fn empty_str_max_line() {
        let line: String = "".into();
        assert_eq!(line.max_line().0, 0);
    }

    #[test]
    fn str_max_line_trailing_newline() {
        let line: String = "foo\nbar\n".into();
        assert_eq!(line.max_line().0, 1);
    }

    #[test]
    fn str_max_line_extra_trailing_newline() {
        let line: String = "foo\nbar\n\n".into();
        assert_eq!(line.max_line().0, 1);
    }

    #[test]
    fn codepoint_len_non_ascii() {
        assert_eq!(codepoint_len("ƒoo"), 3);
    }

    #[test]
    fn test_is_all_whiteapce() {
        assert!(is_all_whitespace(" \n\t"));
    }
}
