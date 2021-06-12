use crate::lines::LineNumber;
use crate::positions::SingleLineSpan;
use crate::tree_diff::{MatchKind, MatchedPos};
use colored::*;
use std::cmp::min;
use std::collections::HashMap;

#[derive(Clone, Copy)]
pub struct Style {
    foreground: Color,
    background: Option<Color>,
}

impl Style {
    fn apply(&self, s: &str) -> String {
        let mut res = s.color(self.foreground).bold();
        if let Some(background) = self.background {
            res = res.on_color(background);
        };
        res.to_string()
    }
}

pub fn apply_line(line: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    if styles.is_empty() {
        return line.dimmed().to_string();
    }

    let mut res = String::with_capacity(line.len());
    let mut i = 0;
    for (span, style) in styles {
        if span.start_col >= line.len() {
            break;
        }

        if i < span.start_col {
            res.push_str(&line[i..span.start_col].dimmed());
        }

        res.push_str(&style.apply(&line[span.start_col..min(line.len(), span.end_col)]));
        i = span.end_col;
    }

    if i < line.len() {
        res.push_str(&line[i..line.len()].dimmed());
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
pub fn apply(s: &str, styles: &[(SingleLineSpan, Style)]) -> String {
    let mut ranges_by_line = group_by_line(styles);

    let mut res = String::with_capacity(s.len());
    for (i, line) in s.lines().enumerate() {
        let ranges = ranges_by_line.remove(&i.into()).unwrap_or(vec![]);
        res.push_str(&apply_line(line, &ranges));
        res.push_str("\n");
    }
    res
}

pub fn apply_colors(s: &str, is_lhs: bool, positions: &[MatchedPos]) -> String {
    let mut styles = vec![];
    for pos in positions {
        let style = match pos.kind {
            MatchKind::Unchanged => Style {
                foreground: Color::White,
                background: None,
            },
            MatchKind::Moved => Style {
                foreground: if is_lhs { Color::Red } else { Color::Green },
                background: None,
            },
            MatchKind::Novel => Style {
                foreground: Color::Black,
                background: Some(if is_lhs { Color::Red } else { Color::Green }),
            },
        };
        for line_pos in &pos.pos {
            styles.push((*line_pos, style));
        }
    }

    apply(s, &styles)
}
