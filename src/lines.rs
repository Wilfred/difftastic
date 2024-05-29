//! Manipulate lines of text and groups of lines.

use std::iter::{self, Chain, Once};
use std::ops::Sub;
use std::str::Lines;

use line_numbers::LineNumber;

pub(crate) fn format_line_num(line_num: LineNumber) -> String {
    format!("{} ", line_num.display())
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

pub(crate) fn lines_raw(s: &str) -> impl Iterator<Item = &str> {
    if s.ends_with('\n') {
        LinesIter::Chained(s.lines().chain(iter::once("")))
    } else {
        LinesIter::Lines(s.lines())
    }
}

enum LinesIter<'a> {
    Chained(Chain<Lines<'a>, Once<&'a str>>),
    Lines(Lines<'a>),
}

impl<'a> Iterator for LinesIter<'a> {
    type Item = &'a str;

    fn next(&mut self) -> Option<Self::Item> {
        match self {
            Self::Chained(iter) => iter.next(),
            Self::Lines(iter) => iter.next(),
        }
    }
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
    fn test_is_all_whitespace() {
        assert!(is_all_whitespace(" \n\t"));
    }

    #[test]
    fn test_last_new_line_preserved() {
        assert_eq!(lines_raw("").count(), 0);
        assert_eq!(lines_raw("a").count(), 1);
        assert_eq!(lines_raw("\n").count(), 2);
        assert_eq!(lines_raw("a\n").count(), 2);
        assert_eq!(lines_raw("a\n\n").count(), 3);
    }
}
