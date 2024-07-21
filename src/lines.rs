//! Manipulate lines of text and groups of lines.

use std::ops::Sub;

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

/// Split `s` on \n or \r\n. Always returns a non-empty vec. Each line
/// in the vec does not include the trailing newline.
///
/// This differs from `str::lines`, which considers `""` to be zero
/// lines and `"foo\n"` to be one line.
pub(crate) fn split_on_newlines(s: &str) -> impl Iterator<Item = &str> {
    s.split('\n').map(|l| {
        if let Some(l) = l.strip_suffix('\r') {
            l
        } else {
            l
        }
    })
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
    fn test_split_line_empty() {
        assert_eq!(split_on_newlines("").collect::<Vec<_>>(), vec![""]);
    }

    #[test]
    fn test_split_line_single() {
        assert_eq!(split_on_newlines("foo").collect::<Vec<_>>(), vec!["foo"]);
    }

    #[test]
    fn test_split_line_with_newline() {
        assert_eq!(
            split_on_newlines("foo\nbar").collect::<Vec<_>>(),
            vec!["foo", "bar"]
        );
    }

    #[test]
    fn test_split_line_with_crlf() {
        assert_eq!(
            split_on_newlines("foo\r\nbar").collect::<Vec<_>>(),
            vec!["foo", "bar"]
        );
    }

    #[test]
    fn test_split_line_with_trailing_newline() {
        assert_eq!(
            split_on_newlines("foo\nbar\n").collect::<Vec<_>>(),
            vec!["foo", "bar", ""]
        );
    }

    #[test]
    fn test_is_all_whitespace() {
        assert!(is_all_whitespace(" \n\t"));
    }
}
