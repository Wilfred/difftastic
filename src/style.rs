//! Apply colours and styling to strings.

use crate::{
    lines::{codepoint_len, substring_by_codepoint, LineNumber},
    positions::SingleLineSpan,
    syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
};
use colored::*;
use std::{
    cmp::{max, min},
    collections::HashMap,
};

#[derive(Clone, Copy, Debug)]
pub struct Style {
    foreground: Option<Color>,
    background: Option<Color>,
    bold: bool,
    dimmed: bool,
}

impl Style {
    fn apply(&self, s: &str) -> String {
        let mut res = if let Some(foreground) = self.foreground {
            s.color(foreground)
        } else {
            s.normal()
        };
        if self.bold {
            res = res.bold();
        }
        if self.dimmed {
            res = res.dimmed();
        }
        if let Some(background) = self.background {
            res = res.on_color(background);
        };
        res.to_string()
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

pub fn split_and_apply(
    line: &str,
    max_len: usize,
    styles: &[(SingleLineSpan, Style)],
) -> Vec<String> {
    if styles.is_empty() && !line.is_empty() {
        // Missing styles is a bug, so highlight in purple to make this obvious.
        return split_string(line, max_len)
            .into_iter()
            .map(|part| highlight_missing_style_bug(&part))
            .collect();
    }

    let mut styled_parts = vec![];
    let mut prev_length = 0;

    for part in split_string(line, max_len) {
        let mut res = String::with_capacity(part.len());
        let mut i = 0;
        for (span, style) in styles {
            // The remaining spans are beyond the end of this part.
            if span.start_col >= prev_length + codepoint_len(&part) {
                break;
            }

            if i >= prev_length {
                // Unstyled text before the next span.
                if i < span.start_col {
                    res.push_str(substring_by_codepoint(
                        &part,
                        i - prev_length,
                        span.start_col - prev_length,
                    ));
                }
            }

            // Apply style to the substring in this span.
            if span.end_col > prev_length {
                let span_s = substring_by_codepoint(
                    &part,
                    max(0, span.start_col as isize - prev_length as isize) as usize,
                    min(codepoint_len(&part), span.end_col - prev_length),
                );
                res.push_str(&style.apply(span_s));
            }
            i = span.end_col;
        }
        // Unstyled text after the last span.
        if i < prev_length + codepoint_len(&part) {
            let span_s = substring_by_codepoint(&part, i - prev_length, codepoint_len(&part));
            res.push_str(span_s);
        }

        styled_parts.push(res);
        prev_length += codepoint_len(&part)
    }

    styled_parts
}

/// Return a copy of `line` with styles applied to all the spans specified.
/// Dim any parts of the line that have no spans.
fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    if styles.is_empty() && !line.is_empty() {
        return highlight_missing_style_bug(line);
    }

    let mut res = String::with_capacity(line.len());
    let mut i = 0;
    for (span, style) in styles {
        // The remaining spans are beyond the end of this line. This
        // occurs when we truncate the line to fit on the display.
        if span.start_col >= codepoint_len(line) {
            break;
        }

        // Unstyled text before the next span.
        if i < span.start_col {
            res.push_str(substring_by_codepoint(line, i, span.start_col));
        }

        // Apply style to the substring in this span.
        let span_s =
            substring_by_codepoint(line, span.start_col, min(codepoint_len(line), span.end_col));
        res.push_str(&style.apply(span_s));
        i = span.end_col;
    }

    // Unstyled text after the last span.
    if i < codepoint_len(line) {
        let span_s = substring_by_codepoint(line, i, codepoint_len(line));
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

/// Apply the `Style`s to the spans specified. Dim any text that
/// doesn't have any styles applied.
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

pub fn color_positions(is_lhs: bool, positions: &[MatchedPos]) -> Vec<(SingleLineSpan, Style)> {
    let mut styles = vec![];
    for pos in positions {
        let line_pos = pos.pos;
        let style = match pos.kind {
            MatchKind::Unchanged { highlight, .. } => Style {
                foreground: match highlight {
                    TokenKind::Atom(AtomKind::String) => Some(Color::Magenta),
                    TokenKind::Atom(AtomKind::Comment) => Some(Color::Cyan),
                    _ => None,
                },
                background: None,
                bold: match highlight {
                    TokenKind::Atom(AtomKind::Keyword) => true,
                    TokenKind::Atom(AtomKind::Type) => true,
                    _ => false,
                },
                dimmed: false,
            },
            MatchKind::Novel { highlight, .. } => Style {
                foreground: Some(if is_lhs {
                    Color::BrightRed
                } else {
                    Color::BrightGreen
                }),
                background: None,
                bold: match highlight {
                    TokenKind::Delimiter => true,
                    TokenKind::Atom(AtomKind::Keyword) => true,
                    TokenKind::Atom(AtomKind::Type) => true,
                    TokenKind::Atom(_) => false,
                },
                dimmed: false,
            },
            MatchKind::ChangedCommentPart { .. } => Style {
                foreground: Some(if is_lhs {
                    Color::BrightRed
                } else {
                    Color::BrightGreen
                }),
                background: None,
                bold: true,
                dimmed: false,
            },
            MatchKind::UnchangedCommentPart { .. } => Style {
                foreground: Some(if is_lhs { Color::Red } else { Color::Green }),
                background: None,
                bold: false,
                dimmed: false,
            },
        };
        styles.push((line_pos, style));
    }
    styles
}

pub fn apply_colors(s: &str, is_lhs: bool, positions: &[MatchedPos]) -> String {
    let styles = color_positions(is_lhs, positions);
    apply(s, &styles)
}

pub fn header(file_name: &str, hunk_num: usize, hunk_total: usize, language_name: &str) -> String {
    format!(
        "{} --- {}/{} --- {}",
        file_name.yellow().bold(),
        hunk_num,
        hunk_total,
        language_name
    )
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn split_string_simple() {
        assert_eq!(split_string("fooba", 3), vec!["foo", "ba "]);
    }

    #[test]
    fn split_string_unicode() {
        assert_eq!(split_string("ab📦def", 3), vec!["ab📦", "def"]);
    }
}
