//! Apply colours and styling to strings.

use crate::{
    lines::{codepoint_len, LineNumber},
    positions::SingleLineSpan,
    syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
};
use owo_colors::{OwoColorize, Style};
use std::{
    cmp::{max, min},
    collections::HashMap,
};

#[derive(Clone, Copy, Debug)]
pub enum BackgroundColor {
    Dark,
    Light,
}

impl BackgroundColor {
    pub fn is_dark(&self) -> bool {
        matches!(self, BackgroundColor::Dark)
    }
}

/// Slice `s` from `start` inclusive to `end` exclusive by codepoint. This is safer than
/// slicing by bytes, which panics if the byte isn't on a codepoint
/// boundary.
fn substring_by_codepoint(s: &str, start: usize, end: usize) -> &str {
    if start == end {
        return &s[0..0];
    }

    assert!(end > start);

    let mut char_idx_iter = s.char_indices();
    let byte_start = char_idx_iter
        .nth(start)
        .expect("Expected a codepoint index inside `s`.")
        .0;
    match char_idx_iter.nth(end - start - 1) {
        Some(byte_end) => &s[byte_start..byte_end.0],
        None => &s[byte_start..],
    }
}

/// Split a string into equal length parts, padding the last part if
/// necessary.
///
/// ```
/// split_string("fooba", 3) // vec!["foo", "ba "]
/// ```
fn split_string(s: &str, max_len: usize) -> Vec<String> {
    let mut res = vec![];
    let mut s = s;

    while codepoint_len(s) > max_len {
        res.push(substring_by_codepoint(s, 0, max_len).into());
        s = substring_by_codepoint(s, max_len, codepoint_len(s));
    }

    if res.is_empty() || !s.is_empty() {
        res.push(format!("{:width$}", s, width = max_len));
    }

    res
}

fn highlight_missing_style_bug(s: &str) -> String {
    s.on_purple().to_string()
}

/// Split `line` (from the source code) into multiple lines of
/// `max_len` (i.e. word wrapping), and apply `styles` to each part
/// according to its original position in `line`.
pub fn split_and_apply(
    line: &str,
    max_len: usize,
    use_color: bool,
    styles: &[(SingleLineSpan, Style)],
) -> Vec<String> {
    if styles.is_empty() && !line.is_empty() {
        // Missing styles is a bug, so highlight in purple to make this obvious.
        return split_string(line, max_len)
            .into_iter()
            .map(|part| {
                if use_color {
                    highlight_missing_style_bug(&part)
                } else {
                    part
                }
            })
            .collect();
    }

    let mut styled_parts = vec![];
    let mut part_start = 0;

    for part in split_string(line, max_len) {
        let mut res = String::with_capacity(part.len());
        let mut prev_style_end = 0;
        for (span, style) in styles {
            // The remaining spans are beyond the end of this part.
            if span.start_col >= part_start + codepoint_len(&part) {
                break;
            }

            // Unstyled text before the next span.
            if prev_style_end < span.start_col {
                res.push_str(substring_by_codepoint(
                    &part,
                    prev_style_end - part_start,
                    span.start_col - part_start,
                ));
            }

            // Apply style to the substring in this span.
            if span.end_col > part_start {
                let span_s = substring_by_codepoint(
                    &part,
                    max(0, span.start_col as isize - part_start as isize) as usize,
                    min(codepoint_len(&part), span.end_col - part_start),
                );
                res.push_str(&span_s.style(*style).to_string());
            }
            prev_style_end = span.end_col;
        }

        // Ensure that prev_style_end is at least at the start of this
        // part.
        if prev_style_end < part_start {
            prev_style_end = part_start;
        }

        // Unstyled text after the last span.
        if prev_style_end < part_start + codepoint_len(&part) {
            let span_s =
                substring_by_codepoint(&part, prev_style_end - part_start, codepoint_len(&part));
            res.push_str(span_s);
        }

        styled_parts.push(res);
        part_start += codepoint_len(&part)
    }

    styled_parts
}

/// Return a copy of `line` with styles applied to all the spans
/// specified.
fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    if styles.is_empty() && !line.is_empty() {
        return highlight_missing_style_bug(line);
    }

    let line_codepoints = codepoint_len(line);
    let mut res = String::with_capacity(line.len());
    let mut i = 0;
    for (span, style) in styles {
        // The remaining spans are beyond the end of this line. This
        // occurs when we truncate the line to fit on the display.
        if span.start_col >= line_codepoints {
            break;
        }

        // Unstyled text before the next span.
        if i < span.start_col {
            res.push_str(substring_by_codepoint(line, i, span.start_col));
        }

        // Apply style to the substring in this span.
        let span_s =
            substring_by_codepoint(line, span.start_col, min(line_codepoints, span.end_col));
        res.push_str(&span_s.style(*style).to_string());
        i = span.end_col;
    }

    // Unstyled text after the last span.
    if i < line_codepoints {
        let span_s = substring_by_codepoint(line, i, line_codepoints);
        res.push_str(span_s);
    }
    res
}

fn group_by_line(
    ranges: &[(SingleLineSpan, Style)],
) -> HashMap<LineNumber, Vec<(SingleLineSpan, Style)>> {
    let mut ranges_by_line: HashMap<_, Vec<_>> = HashMap::with_capacity(ranges.len());
    for range in ranges {
        if let Some(matching_ranges) = ranges_by_line.get_mut(&range.0.line) {
            (*matching_ranges).push(*range);
        } else {
            ranges_by_line.insert(range.0.line, vec![*range]);
        }
    }

    ranges_by_line
}

/// Apply the `Style`s to the spans specified.
///
/// Tolerant against lines in `s` being shorter than the spans.
fn apply(s: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    let mut ranges_by_line = group_by_line(styles);

    let mut res = String::with_capacity(s.len());
    for (i, line) in s.lines().enumerate() {
        let ranges = ranges_by_line.remove(&i.into()).unwrap_or_default();
        res.push_str(&apply_line(line, &ranges));
        res.push('\n');
    }
    res
}

pub fn novel_style(style: Style, is_lhs: bool, background: BackgroundColor) -> Style {
    if background.is_dark() {
        if is_lhs {
            style.bright_red()
        } else {
            style.bright_green()
        }
    } else {
        if is_lhs {
            style.red()
        } else {
            style.green()
        }
    }
}

pub fn color_positions(
    is_lhs: bool,
    background: BackgroundColor,
    positions: &[MatchedPos],
) -> Vec<(SingleLineSpan, Style)> {
    let mut styles = vec![];
    for pos in positions {
        let mut style = Style::new();
        match pos.kind {
            MatchKind::UnchangedToken { highlight, .. } => match highlight {
                TokenKind::Atom(atom_kind) => match atom_kind {
                    AtomKind::String => {
                        style = if background.is_dark() {
                            style.bright_magenta()
                        } else {
                            style.magenta()
                        };
                    }
                    AtomKind::Comment => {
                        style = style.italic();
                        style = if background.is_dark() {
                            style.bright_blue()
                        } else {
                            style.blue()
                        };
                    }
                    AtomKind::Keyword | AtomKind::Type => {
                        style = style.bold();
                    }
                    _ => {}
                },
                _ => {}
            },
            MatchKind::Novel { highlight, .. } => {
                style = novel_style(style, is_lhs, background);
                match highlight {
                    TokenKind::Delimiter
                    | TokenKind::Atom(AtomKind::Keyword)
                    | TokenKind::Atom(AtomKind::Type) => {
                        style = style.bold();
                    }
                    _ => {}
                }
                if matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
            MatchKind::NovelWord { highlight } => {
                style = novel_style(style, is_lhs, background).bold();
                if matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
            MatchKind::NovelLinePart { highlight, .. } => {
                style = novel_style(style, is_lhs, background);
                if matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
        };
        styles.push((pos.pos, style));
    }
    styles
}

pub fn apply_colors(
    s: &str,
    is_lhs: bool,
    background: BackgroundColor,
    positions: &[MatchedPos],
) -> String {
    let styles = color_positions(is_lhs, background, positions);
    apply(s, &styles)
}

pub fn header(
    file_name: &str,
    hunk_num: usize,
    hunk_total: usize,
    language_name: &str,
    use_color: bool,
    background: BackgroundColor,
) -> String {
    let file_name_pretty = if use_color {
        if background.is_dark() {
            file_name.bright_yellow().to_string()
        } else {
            file_name.yellow().to_string()
        }
        .bold()
        .to_string()
    } else {
        file_name.to_string()
    };
    format!(
        "{} --- {}/{} --- {}",
        file_name_pretty, hunk_num, hunk_total, language_name
    )
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn test_substring_by_codepoint() {
        assert_eq!(substring_by_codepoint("abcd", 0, 2), "ab");
    }

    #[test]
    fn test_substring_by_codepoint_empty() {
        assert_eq!(substring_by_codepoint("abcd", 0, 0), "");
    }

    #[test]
    fn split_string_simple() {
        assert_eq!(split_string("fooba", 3), vec!["foo", "ba "]);
    }

    #[test]
    fn split_string_unicode() {
        assert_eq!(split_string("ab📦def", 3), vec!["ab📦", "def"]);
    }

    #[test]
    fn test_split_and_apply_missing() {
        let res = split_and_apply("foo", 3, true, &[]);
        assert_eq!(res, vec![highlight_missing_style_bug("foo")])
    }

    #[test]
    fn test_split_and_apply() {
        let res = split_and_apply(
            "foo",
            3,
            true,
            &[(
                SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3,
                },
                Style::new(),
            )],
        );
        assert_eq!(res, vec!["foo"])
    }

    #[test]
    fn test_split_and_apply_trailing_text() {
        let res = split_and_apply(
            "foobar",
            6,
            true,
            &[(
                SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3,
                },
                Style::new(),
            )],
        );
        assert_eq!(res, vec!["foobar"])
    }

    #[test]
    fn test_split_and_apply_trailing_text_newline() {
        let res = split_and_apply(
            "foobar      ",
            6,
            true,
            &[(
                SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3,
                },
                Style::new(),
            )],
        );
        assert_eq!(res, vec!["foobar", "      "])
    }
}
