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

// TODO: Define an is_dark helper rather than verbose matching.
#[derive(Clone, Copy, Debug)]
pub enum BackgroundColor {
    Dark,
    Light,
}

/// Slice `s` from `start` to `end` by codepoint. This is safer than
/// slicing by bytes, which panics if the byte isn't on a codepoint
/// boundary.
fn substring_by_codepoint(s: &str, start: usize, end: usize) -> &str {
    assert!(end > start);

    let mut char_idx_iter = s.char_indices();
    let byte_start = char_idx_iter.nth(start).expect("Expected a codepoint index inside `s`.").0;
    match char_idx_iter.nth(end - 1 - start) {
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
                res.push_str(&span_s.style(*style).to_string());
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
    match background {
        BackgroundColor::Dark => {
            if is_lhs {
                style.bright_red()
            } else {
                style.bright_green()
            }
        }
        BackgroundColor::Light => {
            if is_lhs {
                style.red()
            } else {
                style.green()
            }
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
                    AtomKind::String => match background {
                        BackgroundColor::Dark => {
                            style = style.bright_magenta();
                        }
                        BackgroundColor::Light => {
                            style = style.magenta();
                        }
                    },
                    AtomKind::Comment => {
                        style = style.italic();
                        match background {
                            BackgroundColor::Dark => {
                                style = style.bright_blue();
                            }
                            BackgroundColor::Light => {
                                style = style.blue();
                            }
                        }
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
    background: BackgroundColor,
) -> String {
    format!(
        "{} --- {}/{} --- {}",
        match background {
            BackgroundColor::Dark => file_name.bright_yellow().to_string(),
            BackgroundColor::Light => file_name.yellow().to_string(),
        }
        .bold(),
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
