//! Apply colours and styling to strings.

use crate::{
    constants::Side,
    lines::{byte_len, split_on_newlines, LineNumber},
    options::DisplayOptions,
    parse::{
        guess_language::Language,
        syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
    },
    positions::SingleLineSpan,
};
use owo_colors::{OwoColorize, Style};
use rustc_hash::FxHashMap;
use std::cmp::{max, min};
use unicode_width::{UnicodeWidthChar, UnicodeWidthStr};

#[derive(Clone, Copy, Debug)]
pub enum BackgroundColor {
    Dark,
    Light,
}

impl BackgroundColor {
    pub fn is_dark(self) -> bool {
        matches!(self, BackgroundColor::Dark)
    }
}

/// Find the largest byte offset in `s` that gives the longest
/// starting substring whose display width does not exceed `width`.
///
/// Note that the resulting substring may have a display width less
/// than `width`, if the string contains full-width or emoji
/// characters which have a display width greater than 1.
fn byte_offset_for_width(s: &str, width: usize) -> usize {
    let mut current_offset = 0;
    let mut current_width = 0;

    for (offset, ch) in s.char_indices() {
        current_offset = offset;
        let char_width = ch.width().unwrap_or(0);
        current_width += char_width;

        if current_width > width {
            break;
        }
    }

    current_offset
}

fn substring_by_byte(s: &str, start: usize, end: usize) -> &str {
    &s[start..end]
}

/// Split a string into equal length parts and how many spaces should be padded.
///
/// Return splitted strings and how many spaces each should be padded with.
///
/// ```
/// split_string_by_width("fooba", 3, true) // vec![("foo", 0), ("ba", 1)]
/// split_string_by_width("一个汉字两列宽", 8, false) // vec![("一个汉字", 0), ("两列宽", 0)]
/// ```
fn split_string_by_width(s: &str, max_width: usize, pad: bool) -> Vec<(&str, usize)> {
    let mut res = vec![];
    let mut s = s;

    while s.width() > max_width {
        let offset = byte_offset_for_width(s, max_width);

        let part = substring_by_byte(s, 0, offset);
        s = substring_by_byte(s, offset, s.len());

        let padding = if pad && part.width() < max_width {
            // a fullwidth char is followed
            1
        } else {
            0
        };
        res.push((part, padding));
    }

    if res.is_empty() || !s.is_empty() {
        let padding = if pad { max_width - s.width() } else { 0 };
        res.push((s, padding));
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
    side: Side,
) -> Vec<String> {
    assert!(max_len > 0);

    if styles.is_empty() && !line.trim().is_empty() {
        // Missing styles is a bug, so highlight in purple to make this obvious.
        return split_string_by_width(line, max_len, matches!(side, Side::Left))
            .into_iter()
            .map(|(part, _)| {
                if use_color {
                    highlight_missing_style_bug(part)
                } else {
                    part.to_owned()
                }
            })
            .collect();
    }

    let mut styled_parts = vec![];
    let mut part_start = 0;

    for (line_part, pad) in split_string_by_width(line, max_len, matches!(side, Side::Left)) {
        let mut res = String::with_capacity(line_part.len() + pad);
        let mut prev_style_end = 0;
        for (span, style) in styles {
            let start_col = span.start_col as usize;
            let end_col = span.end_col as usize;

            // The remaining spans are beyond the end of this line_part.
            if start_col >= part_start + byte_len(&line_part) {
                break;
            }

            // If there's an unstyled gap before the next span.
            if start_col > part_start && prev_style_end < start_col {
                // Then append that text without styling.
                let unstyled_start = max(prev_style_end, part_start);
                res.push_str(substring_by_byte(
                    line_part,
                    unstyled_start - part_start,
                    start_col - part_start,
                ));
            }

            // Apply style to the substring in this span.
            if end_col > part_start {
                let span_s = substring_by_byte(
                    line_part,
                    max(0, span.start_col as isize - part_start as isize) as usize,
                    min(byte_len(line_part), end_col - part_start),
                );
                res.push_str(&span_s.style(*style).to_string());
            }
            prev_style_end = end_col;
        }

        // Ensure that prev_style_end is at least at the start of this
        // line_part.
        if prev_style_end < part_start {
            prev_style_end = part_start;
        }

        // Unstyled text after the last span.
        if prev_style_end < part_start + byte_len(line_part) {
            let span_s =
                substring_by_byte(line_part, prev_style_end - part_start, byte_len(line_part));
            res.push_str(span_s);
        }
        res.push_str(&" ".repeat(pad));

        styled_parts.push(res);
        part_start += byte_len(line_part);
    }

    styled_parts
}

/// Return a copy of `line` with styles applied to all the spans
/// specified.
fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    if styles.is_empty() && !line.is_empty() {
        return highlight_missing_style_bug(line);
    }

    let line_bytes = byte_len(line);
    let mut res = String::with_capacity(line.len());
    let mut i = 0;
    for (span, style) in styles {
        let start_col = span.start_col as usize;
        let end_col = span.end_col as usize;

        // The remaining spans are beyond the end of this line. This
        // occurs when we truncate the line to fit on the display.
        if start_col >= line_bytes {
            break;
        }

        // Unstyled text before the next span.
        if i < start_col {
            res.push_str(substring_by_byte(line, i, start_col));
        }

        // Apply style to the substring in this span.
        let span_s = substring_by_byte(line, start_col, min(line_bytes, end_col));
        res.push_str(&span_s.style(*style).to_string());
        i = end_col;
    }

    // Unstyled text after the last span.
    if i < line_bytes {
        let span_s = substring_by_byte(line, i, line_bytes);
        res.push_str(span_s);
    }
    res
}

fn group_by_line(
    ranges: &[(SingleLineSpan, Style)],
) -> FxHashMap<LineNumber, Vec<(SingleLineSpan, Style)>> {
    let mut ranges_by_line: FxHashMap<_, Vec<_>> = FxHashMap::default();
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
fn style_lines(lines: &[&str], styles: &[(SingleLineSpan, Style)]) -> Vec<String> {
    let mut ranges_by_line = group_by_line(styles);

    let mut res = Vec::with_capacity(lines.len());
    for (i, line) in lines.iter().enumerate() {
        let mut styled_line = String::with_capacity(line.len());
        let ranges = ranges_by_line
            .remove(&(i as u32).into())
            .unwrap_or_default();

        styled_line.push_str(&apply_line(line, &ranges));
        styled_line.push('\n');
        res.push(styled_line);
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
    } else if is_lhs {
        style.red()
    } else {
        style.green()
    }
}

pub fn color_positions(
    is_lhs: bool,
    background: BackgroundColor,
    syntax_highlight: bool,
    _language: Option<Language>,
    positions: &[MatchedPos],
) -> Vec<(SingleLineSpan, Style)> {
    let mut styles = vec![];
    for pos in positions {
        let mut style = Style::new();
        match pos.kind {
            MatchKind::UnchangedToken { highlight, .. } => {
                if syntax_highlight {
                    if let TokenKind::Atom(atom_kind) = highlight {
                        match atom_kind {
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
                            AtomKind::Normal => {}
                        }
                    }
                }
            }
            MatchKind::Novel { highlight, .. } => {
                style = novel_style(style, is_lhs, background);
                if syntax_highlight
                    && matches!(
                        highlight,
                        TokenKind::Delimiter
                            | TokenKind::Atom(AtomKind::Keyword)
                            | TokenKind::Atom(AtomKind::Type)
                    )
                {
                    style = style.bold();
                }
                if matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
            MatchKind::NovelWord { highlight } => {
                style = novel_style(style, is_lhs, background).bold().underline();
                if syntax_highlight && matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
            MatchKind::NovelLinePart { highlight, .. } => {
                style = novel_style(style, is_lhs, background);
                if syntax_highlight && matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
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
    syntax_highlight: bool,
    language: Option<Language>,
    background: BackgroundColor,
    positions: &[MatchedPos],
) -> Vec<String> {
    let styles = color_positions(is_lhs, background, syntax_highlight, language, positions);
    let lines = split_on_newlines(s);
    style_lines(&lines, &styles)
}

fn apply_header_color(s: &str, use_color: bool, background: BackgroundColor) -> String {
    if use_color {
        if background.is_dark() {
            s.bright_yellow().to_string()
        } else {
            s.yellow().to_string()
        }
        .bold()
        .to_string()
    } else {
        s.to_string()
    }
}

pub fn header(
    lhs_display_path: &str,
    rhs_display_path: &str,
    hunk_num: usize,
    hunk_total: usize,
    language_name: &str,
    display_options: &DisplayOptions,
) -> String {
    let divider = if hunk_total == 1 {
        "".to_owned()
    } else {
        format!("{}/{} --- ", hunk_num, hunk_total)
    };

    let rhs_path_pretty = apply_header_color(
        rhs_display_path,
        display_options.use_color,
        display_options.background_color,
    );
    let lhs_path_pretty = apply_header_color(
        lhs_display_path,
        display_options.use_color,
        display_options.background_color,
    );
    if hunk_num == 1 && lhs_display_path != rhs_display_path && display_options.in_vcs {
        let renamed = format!("Renamed {} to {}", lhs_path_pretty, rhs_path_pretty);
        format!(
            "{}\n{} --- {}{}",
            renamed, rhs_path_pretty, divider, language_name
        )
    } else {
        // Prefer showing the RHS path in the header unless it's
        // /dev/null. Note that git calls the difftool with
        // `DIFFTOOL /tmp/git-blob-abc/foo.py foo.py` in some cases.
        let path_pretty = if rhs_display_path == "/dev/null" {
            lhs_path_pretty
        } else {
            rhs_path_pretty
        };
        format!("{} --- {}{}", path_pretty, divider, language_name)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn split_string_simple() {
        assert_eq!(
            split_string_by_width("fooba", 3, true),
            vec![("foo", 0), ("ba", 1)]
        );
    }

    #[test]
    fn split_string_simple_no_pad() {
        assert_eq!(
            split_string_by_width("fooba", 3, false),
            vec![("foo", 0), ("ba", 0)]
        );
    }

    #[test]
    fn split_string_unicode() {
        assert_eq!(
            split_string_by_width("ab📦def", 4, true),
            vec![("ab📦", 0), ("def", 1)]
        );
    }

    #[test]
    fn test_combining_char() {
        assert_eq!(
            split_string_by_width("aabbcc\u{300}x", 6, false),
            vec![("aabbcc\u{300}", 0), ("x", 0)],
        );
    }

    #[test]
    fn split_string_cjk() {
        assert_eq!(
            split_string_by_width("一个汉字两列宽", 8, false),
            vec![("一个汉字", 0), ("两列宽", 0)]
        );
    }

    #[test]
    fn split_string_cjk2() {
        assert_eq!(
            split_string_by_width("你好啊", 5, true),
            vec![("你好", 1), ("啊", 3)]
        );
    }

    #[test]
    fn test_split_and_apply_missing() {
        let res = split_and_apply("foo", 3, true, &[], Side::Left);
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
            Side::Left,
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
            Side::Left,
        );
        assert_eq!(res, vec!["foobar"])
    }

    #[test]
    fn test_split_and_apply_gap_between_styles_on_wrap_boundary() {
        let res = split_and_apply(
            "foobar",
            3,
            true,
            &[
                (
                    SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 2,
                    },
                    Style::new(),
                ),
                (
                    SingleLineSpan {
                        line: 0.into(),
                        start_col: 4,
                        end_col: 6,
                    },
                    Style::new(),
                ),
            ],
            Side::Left,
        );
        assert_eq!(res, vec!["foo", "bar"])
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
            Side::Left,
        );
        assert_eq!(res, vec!["foobar", "      "])
    }
}
