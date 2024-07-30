//! Apply colours and styling to strings.

use std::cmp::{max, min};

use line_numbers::LineNumber;
use line_numbers::SingleLineSpan;
use owo_colors::{OwoColorize, Style};
use unicode_width::{UnicodeWidthChar, UnicodeWidthStr};

use crate::lines::split_on_newlines;
use crate::parse::syntax::StringKind;
use crate::{
    constants::Side,
    hash::DftHashMap,
    lines::byte_len,
    options::DisplayOptions,
    parse::syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
    summary::FileFormat,
};

#[derive(Clone, Copy, Debug)]
pub(crate) enum BackgroundColor {
    Dark,
    Light,
}

impl BackgroundColor {
    pub(crate) fn is_dark(self) -> bool {
        matches!(self, BackgroundColor::Dark)
    }
}

/// Find the largest byte offset in `s` that gives the longest
/// starting substring whose display width does not exceed `width`.
///
/// If `s` contains full-width Unicode characters, or emoji, or tabs,
/// its display width may be less than `width`.
fn byte_offset_for_width(s: &str, width: usize, tab_width: usize) -> usize {
    let mut current_offset = 0;
    let mut current_width = 0;

    for (offset, ch) in s.char_indices() {
        current_offset = offset;

        let char_width = if ch == '\t' {
            tab_width
        } else {
            ch.width().unwrap_or(0)
        };
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

fn substring_by_byte_replace_tabs(s: &str, start: usize, end: usize, tab_width: usize) -> String {
    let s = s[start..end].to_string();
    s.replace('\t', &" ".repeat(tab_width))
}

fn width_respecting_tabs(s: &str, tab_width: usize) -> usize {
    let display_width = s.width();

    // .width() on tabs returns 0, whereas we want to model them as
    // `tab_width` spaces.
    debug_assert_eq!("\t".width(), 0);
    let tab_count = s.matches('\t').count();
    let tab_display_width_extra = tab_count * tab_width;

    display_width + tab_display_width_extra
}

/// Split a string into parts whose display length does not
/// exceed `max_width`.
///
/// If any part has a display width less than `max_width`, also
/// specify the number of spaces required to pad the part to reach the
/// desired width.
///
/// ```
/// split_string_by_width("fooba", 3) // vec![("foo", 0), ("ba", 1)]
/// ```
fn split_string_by_width(s: &str, max_width: usize, tab_width: usize) -> Vec<(&str, usize)> {
    let mut parts: Vec<(&str, usize)> = vec![];
    let mut s = s;

    // Optimisation: width_respecting_tabs() walks the whole string,
    // which is slow when we have files with massive lines.
    //
    // A single character (grapheme) in UTF-8 can be 1, 2, 3 or 4
    // bytes. A character's display width can be 0 (control
    // characters), 1 (the typical case), 2 (e.g. fullwidth characters
    // in Chinese, Japanese and Korean) or 4 (the default width for
    // tabs in difftastic).
    //
    // Ignoring control characters, this means an n-byte UTF-8 string
    // has a display width of at least n/4 characters. Check that case
    // first, because it's a cheap conservative calculation.
    while s.len() / 4 > max_width || width_respecting_tabs(s, tab_width) > max_width {
        let offset = byte_offset_for_width(s, max_width, tab_width);

        let part = substring_by_byte(s, 0, offset);
        s = substring_by_byte(s, offset, s.len());

        let part_width = width_respecting_tabs(part, tab_width);
        let padding = if part_width < max_width {
            max_width - part_width
        } else {
            0
        };
        parts.push((part, padding));
    }

    if parts.is_empty() || !s.is_empty() {
        parts.push((s, max_width - width_respecting_tabs(s, tab_width)));
    }

    parts
}

/// Return a copy of `src` with all the tab characters replaced by
/// `tab_width` strings.
pub(crate) fn replace_tabs(src: &str, tab_width: usize) -> String {
    let tab_as_spaces = " ".repeat(tab_width);
    src.replace('\t', &tab_as_spaces)
}

/// Split `line` (from the source code) into multiple lines of
/// `max_len` (i.e. word wrapping), and apply `styles` to each part
/// according to its original position in `line`.
pub(crate) fn split_and_apply(
    line: &str,
    max_len: usize,
    tab_width: usize,
    styles: &[(SingleLineSpan, Style)],
    side: Side,
) -> Vec<String> {
    assert!(
        max_len > 0,
        "Splitting lines into pieces of length 0 will never terminate"
    );
    assert!(
        max_len > tab_width,
        "Parts must be big enough to hold at least one tab (max_len = {} tab_width = {})",
        max_len,
        tab_width
    );

    if styles.is_empty() && !line.trim().is_empty() {
        return split_string_by_width(line, max_len, tab_width)
            .into_iter()
            .map(|(part, pad)| {
                let part = replace_tabs(part, tab_width);

                let mut parts = String::with_capacity(part.len() + pad);
                parts.push_str(&part);

                if matches!(side, Side::Left) {
                    parts.push_str(&" ".repeat(pad));
                }
                parts
            })
            .collect();
    }

    let mut styled_parts = vec![];
    let mut part_start = 0;

    for (line_part, pad) in split_string_by_width(line, max_len, tab_width) {
        let mut res = String::with_capacity(line_part.len() + pad);
        let mut prev_style_end = 0;
        for (span, style) in styles {
            let start_col = span.start_col as usize;
            let end_col = span.end_col as usize;

            // The remaining spans are beyond the end of this line_part.
            if start_col >= part_start + byte_len(line_part) {
                break;
            }

            // If there's an unstyled gap before the next span.
            if start_col > part_start && prev_style_end < start_col {
                // Then append that text without styling.
                let unstyled_start = max(prev_style_end, part_start);
                res.push_str(&substring_by_byte_replace_tabs(
                    line_part,
                    unstyled_start - part_start,
                    start_col - part_start,
                    tab_width,
                ));
            }

            // Apply style to the substring in this span.
            if end_col > part_start {
                let span_s = substring_by_byte_replace_tabs(
                    line_part,
                    max(0, span.start_col as isize - part_start as isize) as usize,
                    min(byte_len(line_part), end_col - part_start),
                    tab_width,
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
            let span_s = &substring_by_byte_replace_tabs(
                line_part,
                prev_style_end - part_start,
                byte_len(line_part),
                tab_width,
            );
            res.push_str(span_s);
        }

        if matches!(side, Side::Left) {
            res.push_str(&" ".repeat(pad));
        }

        styled_parts.push(res);
        part_start += byte_len(line_part);
    }

    styled_parts
}

/// Return a copy of `line` with styles applied to all the spans
/// specified.
fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    let line_bytes = byte_len(line);
    let mut styled_line = String::with_capacity(line.len());
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
            styled_line.push_str(substring_by_byte(line, i, start_col));
        }

        // Apply style to the substring in this span.
        let span_s = substring_by_byte(line, start_col, min(line_bytes, end_col));
        styled_line.push_str(&span_s.style(*style).to_string());
        i = end_col;
    }

    // Unstyled text after the last span.
    if i < line_bytes {
        let span_s = substring_by_byte(line, i, line_bytes);
        styled_line.push_str(span_s);
    }
    styled_line
}

fn group_by_line(
    ranges: &[(SingleLineSpan, Style)],
) -> DftHashMap<LineNumber, Vec<(SingleLineSpan, Style)>> {
    let mut ranges_by_line: DftHashMap<_, Vec<_>> = DftHashMap::default();
    for range in ranges {
        if let Some(matching_ranges) = ranges_by_line.get_mut(&range.0.line) {
            (*matching_ranges).push(*range);
        } else {
            ranges_by_line.insert(range.0.line, vec![*range]);
        }
    }

    ranges_by_line
}

/// Apply the `Style`s to the spans specified. Return a vec of the
/// styled strings, including trailing newlines.
///
/// Tolerant against lines in `s` being shorter than the spans.
fn style_lines(lines: &[&str], styles: &[(SingleLineSpan, Style)]) -> Vec<String> {
    let mut ranges_by_line = group_by_line(styles);

    let mut styled_lines = Vec::with_capacity(lines.len());
    for (i, line) in lines.iter().enumerate() {
        let mut styled_line = String::with_capacity(line.len());
        let ranges = ranges_by_line
            .remove::<LineNumber>(&(i as u32).into())
            .unwrap_or_default();

        styled_line.push_str(&apply_line(line, &ranges));
        styled_line.push('\n');
        styled_lines.push(styled_line);
    }
    styled_lines
}

pub(crate) fn novel_style(style: Style, side: Side, background: BackgroundColor) -> Style {
    if background.is_dark() {
        match side {
            Side::Left => style.bright_red(),
            Side::Right => style.bright_green(),
        }
    } else {
        match side {
            Side::Left => style.red(),
            Side::Right => style.green(),
        }
    }
}

pub(crate) fn color_positions(
    side: Side,
    background: BackgroundColor,
    syntax_highlight: bool,
    file_format: &FileFormat,
    positions: &[MatchedPos],
) -> Vec<(SingleLineSpan, Style)> {
    let mut styles = vec![];
    for pos in positions {
        let mut style = Style::new();
        match pos.kind {
            MatchKind::UnchangedToken { highlight, .. } | MatchKind::Ignored { highlight } => {
                if syntax_highlight {
                    if let TokenKind::Atom(atom_kind) = highlight {
                        match atom_kind {
                            AtomKind::String(StringKind::StringLiteral) => {
                                style = if background.is_dark() {
                                    style.bright_magenta()
                                } else {
                                    style.magenta()
                                };
                            }
                            AtomKind::String(StringKind::Text) => {}
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
                            AtomKind::TreeSitterError => style = style.purple(),
                            AtomKind::Normal => {}
                        }
                    }
                }
            }
            MatchKind::Novel { highlight, .. } => {
                style = novel_style(style, side, background);
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
                style = novel_style(style, side, background).bold();

                // Underline novel words inside comments in code, but
                // don't apply it to every single line in plaintext.
                if matches!(file_format, FileFormat::SupportedLanguage(_)) {
                    style = style.underline();
                }

                if syntax_highlight && matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
            MatchKind::UnchangedPartOfNovelItem { highlight, .. } => {
                style = novel_style(style, side, background);
                if syntax_highlight && matches!(highlight, TokenKind::Atom(AtomKind::Comment)) {
                    style = style.italic();
                }
            }
        };
        styles.push((pos.pos, style));
    }
    styles
}

pub(crate) fn apply_colors(
    s: &str,
    side: Side,
    syntax_highlight: bool,
    file_format: &FileFormat,
    background: BackgroundColor,
    positions: &[MatchedPos],
) -> Vec<String> {
    let styles = color_positions(side, background, syntax_highlight, file_format, positions);
    let lines = split_on_newlines(s).collect::<Vec<_>>();
    style_lines(&lines, &styles)
}

fn apply_header_color(
    s: &str,
    use_color: bool,
    background: BackgroundColor,
    hunk_num: usize,
) -> String {
    if use_color {
        if hunk_num != 1 {
            s.to_owned()
        } else if background.is_dark() {
            s.bright_yellow().to_string()
        } else {
            s.yellow().to_string()
        }
        .bold()
        .to_string()
    } else {
        s.to_owned()
    }
}

/// Style `s` as a warning and write to stderr.
pub(crate) fn print_warning(s: &str, display_options: &DisplayOptions) {
    let prefix = if display_options.use_color {
        if display_options.background_color.is_dark() {
            "warning: ".bright_yellow().to_string()
        } else {
            "warning: ".yellow().to_string()
        }
        .bold()
        .to_string()
    } else {
        "warning: ".to_owned()
    };

    eprint!("{}", prefix);
    eprint!("{}\n\n", s);
}

pub(crate) fn apply_line_number_color(
    s: &str,
    is_novel: bool,
    side: Side,
    display_options: &DisplayOptions,
) -> String {
    if display_options.use_color {
        let mut style = Style::new();

        // The goal here is to choose a style for line numbers that is
        // visually distinct from content.
        if is_novel {
            // For changed lines, show the line number as red/green
            // and bold. This works well for syntactic diffs, where
            // most content is not bold.
            style = novel_style(style, side, display_options.background_color).bold();
        } else {
            // For unchanged lines, dim the line numbers so it's
            // clearly separate from the content.
            style = style.dimmed()
        }

        s.style(style).to_string()
    } else {
        s.to_owned()
    }
}

pub(crate) fn header(
    display_path: &str,
    extra_info: Option<&String>,
    hunk_num: usize,
    hunk_total: usize,
    file_format: &FileFormat,
    display_options: &DisplayOptions,
) -> String {
    let divider = if hunk_total == 1 {
        "".to_owned()
    } else {
        format!("{}/{} --- ", hunk_num, hunk_total)
    };

    let display_path_pretty = apply_header_color(
        display_path,
        display_options.use_color,
        display_options.background_color,
        hunk_num,
    );

    let mut trailer = format!(" --- {}{}", divider, file_format);
    if display_options.use_color {
        trailer = trailer.dimmed().to_string();
    }

    match extra_info {
        Some(extra_info) if hunk_num == 1 => {
            let mut extra_info = extra_info.clone();
            if display_options.use_color {
                extra_info = extra_info.dimmed().to_string();
            }

            format!("{}{}\n{}", display_path_pretty, trailer, extra_info)
        }
        _ => {
            format!("{}{}", display_path_pretty, trailer)
        }
    }
}

#[cfg(test)]
mod tests {
    const TAB_WIDTH: usize = 2;

    use pretty_assertions::assert_eq;

    use super::*;

    #[test]
    fn split_string_simple() {
        assert_eq!(
            split_string_by_width("fooba", 3, TAB_WIDTH),
            vec![("foo", 0), ("ba", 1)]
        );
    }

    #[test]
    fn split_string_unicode() {
        assert_eq!(
            split_string_by_width("ab📦def", 4, TAB_WIDTH),
            vec![("ab📦", 0), ("def", 1)]
        );
    }

    #[test]
    fn test_combining_char() {
        assert_eq!(
            split_string_by_width("aabbcc\u{300}x", 6, TAB_WIDTH),
            vec![("aabbcc\u{300}", 0), ("x", 5)],
        );
    }

    #[test]
    fn split_string_cjk() {
        assert_eq!(
            split_string_by_width("一个汉字两列宽", 8, TAB_WIDTH),
            vec![("一个汉字", 0), ("两列宽", 2)]
        );
    }

    #[test]
    fn split_string_cjk2() {
        assert_eq!(
            split_string_by_width("你好啊", 5, TAB_WIDTH),
            vec![("你好", 1), ("啊", 3)]
        );
    }

    #[test]
    fn test_split_and_apply() {
        let res = split_and_apply(
            "foo",
            3,
            TAB_WIDTH,
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
            TAB_WIDTH,
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
            TAB_WIDTH,
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
            TAB_WIDTH,
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
