//! Apply colours and styling to strings.

use crate::{
    lines::{codepoint_len, substring_by_codepoint, LineNumber},
    positions::SingleLineSpan,
    syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
};
use colored::*;
use std::{cmp::min, collections::HashMap};

#[derive(Clone, Copy, Debug)]
struct Style {
    foreground: Color,
    background: Option<Color>,
    bold: bool,
    dimmed: bool,
}

impl Style {
    fn apply(&self, s: &str) -> String {
        let mut res = s.color(self.foreground);
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

/// Return a copy of `line` with styles applied to all the spans specified.
/// Dim any parts of the line that have no spans.
fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    if styles.is_empty() {
        return line.purple().to_string();
    }

    let mut res = String::with_capacity(line.len());
    let mut i = 0;
    for (span, style) in styles {
        // The remaining spans are beyond the end of this line. This
        // occurs when we truncate the line to fit on the display.
        if span.start_col >= codepoint_len(line) {
            break;
        }

        // Dim text before the next span.
        if i < span.start_col {
            res.push_str(&substring_by_codepoint(line, i, span.start_col).dimmed());
        }

        // Apply style to the substring in this span.
        let span_s =
            substring_by_codepoint(line, span.start_col, min(codepoint_len(line), span.end_col));
        res.push_str(&style.apply(span_s));
        i = span.end_col;
    }

    // Dim text after the last span.
    if i < codepoint_len(line) {
        let span_s = substring_by_codepoint(line, i, codepoint_len(line));
        res.push_str(&span_s.dimmed());
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

pub fn apply_colors(s: &str, is_lhs: bool, positions: &[MatchedPos]) -> String {
    let mut styles = vec![];
    for pos in positions {
        let line_pos = pos.pos;
        let style = match pos.kind {
            MatchKind::Unchanged { highlight, .. } => Style {
                foreground: Color::White,
                background: None,
                bold: highlight == TokenKind::Atom(AtomKind::Keyword),
                dimmed: highlight == TokenKind::Atom(AtomKind::Comment),
            },
            MatchKind::Novel { .. } | MatchKind::ChangedCommentPart { .. } => Style {
                foreground: if is_lhs {
                    Color::BrightRed
                } else {
                    Color::BrightGreen
                },
                background: None,
                bold: true,
                dimmed: false,
            },
            MatchKind::UnchangedCommentPart { .. } => Style {
                foreground: if is_lhs { Color::Red } else { Color::Green },
                background: None,
                bold: false,
                dimmed: false,
            },
        };
        styles.push((line_pos, style));
    }

    apply(s, &styles)
}

pub fn header(file_name: &str, hunk_num: usize, hunk_total: usize, language_name: &str) -> String {
    format!(
        "{} --- {}/{} --- {}\n",
        file_name.yellow().bold(),
        hunk_num,
        hunk_total,
        language_name
    )
}
