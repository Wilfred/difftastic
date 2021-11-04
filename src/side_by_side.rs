//! Side-by-side (two column) display of diffs.

use atty::Stream;
use colored::{Color, Colorize};
use std::collections::HashSet;

use crate::{
    context::{add_context, opposite_positions},
    hunks::{aligned_lines_from_hunk, extract_lines, Hunk},
    lines::{enforce_exact_length, enforce_max_length, format_line_num, LineNumber, MaxLine},
    style::{self, apply_colors},
    syntax::MatchedPos,
};

const SPACER: &str = "  ";

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

/// Split `s` by newlines, but guarantees that the output is nonempty.
/// An empty string is considered as a single line of length zero.
fn split_lines_nonempty(s: &str) -> Vec<String> {
    if s == "" {
        return vec!["".into()];
    }

    let mut lines = vec![];
    for line in s.lines() {
        lines.push(line.into());
    }
    lines
}

fn lhs_printable_width(terminal_width: usize) -> usize {
    (terminal_width - SPACER.len()) / 2
}

fn format_line_num_padded(line_num: LineNumber, column_width: usize) -> String {
    format!("{:width$} ", line_num.0 + 1, width = column_width - 1)
}

fn format_missing_line_num(prev_num: LineNumber, column_width: usize) -> String {
    let num_digits = format!("{}", prev_num.0).len();
    format!(
        "{:>width$} ",
        ".".repeat(num_digits),
        width = column_width - 1
    )
}

fn display_width() -> usize {
    if atty::is(Stream::Stdout) {
        // If we're displaying directly to a user's terminal,
        // honour the terminal width.
        term_width().unwrap_or(80)
    } else {
        // Don't truncate the source when output is being
        // piped elsewhere. E.g. the user is using `less`.
        1000
    }
}

/// Display `src` in a single column (e.g. a file removal or addition).
fn display_single_column(src: &str, color: Color) -> String {
    let column_width = format_line_num(src.lines().count().into()).len();
    let src = enforce_max_length(src, display_width());

    let mut result = String::with_capacity(src.len());
    for (i, line) in src.lines().enumerate() {
        result.push_str(&format_line_num_padded(i.into(), column_width));
        // TODO: factor out the common styling from style::apply_colors.
        result.push_str(&line.color(color).bold().to_string());
        result.push('\n');
    }

    result
}

// TODO: Move to hunks.rs
pub fn merge_adjacent(
    hunks: &[Hunk],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> Vec<Hunk> {
    let mut res: Vec<Hunk> = vec![];
    let mut prev_hunk: Option<Hunk> = None;

    let mut prev_lhs_lines: HashSet<LineNumber> = HashSet::new();
    let mut prev_rhs_lines: HashSet<LineNumber> = HashSet::new();

    for hunk in hunks {
        let mut lhs_lines: HashSet<LineNumber> = HashSet::new();
        let mut rhs_lines: HashSet<LineNumber> = HashSet::new();

        let lines = extract_lines(hunk);
        let contextual_lines =
            add_context(&lines, lhs_mps, rhs_mps, max_lhs_src_line, max_rhs_src_line);
        for (lhs_line, rhs_line) in contextual_lines {
            if let Some(lhs_line) = lhs_line {
                lhs_lines.insert(lhs_line);
            }
            if let Some(rhs_line) = rhs_line {
                rhs_lines.insert(rhs_line);
            }
        }

        match prev_hunk {
            Some(hunk_so_far) => {
                if lhs_lines.is_disjoint(&prev_lhs_lines) && rhs_lines.is_disjoint(&prev_rhs_lines)
                {
                    // No overlaps, start a new hunk.
                    res.push(hunk_so_far.clone());
                    prev_hunk = Some(hunk.clone());

                    prev_lhs_lines = lhs_lines;
                    prev_rhs_lines = rhs_lines;
                } else {
                    // Adjacent hunks, merge.
                    prev_hunk = Some(hunk_so_far.merge(hunk));
                    prev_lhs_lines.extend(lhs_lines.iter());
                    prev_rhs_lines.extend(rhs_lines.iter());
                }
            }
            None => {
                // The very first hunk.
                prev_hunk = Some(hunk.clone());
                prev_lhs_lines = lhs_lines;
                prev_rhs_lines = rhs_lines;
            }
        }
    }

    if let Some(current_hunk) = prev_hunk {
        res.push(current_hunk);
    }

    res
}

fn column_widths(
    hunks: &[Hunk],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> (usize, usize) {
    let hunk = if let Some(hunk) = hunks.last() {
        hunk
    } else {
        return (1, 1);
    };

    let matched_rhs_lines = opposite_positions(lhs_mps);
    let aligned_lines = aligned_lines_from_hunk(
        hunk,
        lhs_mps,
        rhs_mps,
        max_lhs_src_line,
        max_rhs_src_line,
        &matched_rhs_lines,
    );

    let lhs_column_width = match aligned_lines.iter().flat_map(|(l, _)| *l).next() {
        Some(lhs_max_line) => format_line_num(lhs_max_line).len(),
        None => 1,
    };
    let rhs_column_width = match aligned_lines.iter().flat_map(|(_, r)| *r).next() {
        Some(rhs_max_line) => format_line_num(rhs_max_line).len(),
        None => 1,
    };
    (lhs_column_width, rhs_column_width)
}

pub fn display_hunks(
    hunks: &[Hunk],
    display_path: &str,
    lang_name: &str,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> String {
    if lhs_src == "" {
        return display_single_column(rhs_src, Color::BrightGreen);
    }
    if rhs_src == "" {
        return display_single_column(lhs_src, Color::BrightRed);
    }

    let terminal_width = term_width().unwrap_or(80);

    let max_lhs_src_line = lhs_src.max_line();
    let max_rhs_src_line = rhs_src.max_line();
    let (lhs_column_width, rhs_column_width) =
        column_widths(hunks, lhs_mps, rhs_mps, max_lhs_src_line, max_rhs_src_line);

    let lhs_content_width = lhs_printable_width(terminal_width) - lhs_column_width;
    let rhs_content_width =
        terminal_width - lhs_column_width - lhs_content_width - SPACER.len() - rhs_column_width;

    let lhs_src = enforce_exact_length(lhs_src, lhs_content_width);
    let rhs_src = enforce_max_length(rhs_src, rhs_content_width);
    let lhs_colored = apply_colors(&lhs_src, true, lhs_mps);
    let rhs_colored = apply_colors(&rhs_src, false, rhs_mps);

    let lhs_colored_lines = split_lines_nonempty(&lhs_colored);
    let rhs_colored_lines = split_lines_nonempty(&rhs_colored);

    let lhs_lines_with_novel: HashSet<LineNumber> = lhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();
    let rhs_lines_with_novel: HashSet<LineNumber> = rhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();

    let mut prev_lhs_line_num = None;
    let mut prev_rhs_line_num = None;

    let mut out_lines: Vec<String> = vec![];

    for (i, hunk) in hunks.iter().enumerate() {
        out_lines.push(style::header(display_path, i + 1, hunks.len(), lang_name));

        let matched_rhs_lines = opposite_positions(lhs_mps);
        let aligned_lines = aligned_lines_from_hunk(
            hunk,
            lhs_mps,
            rhs_mps,
            max_lhs_src_line,
            max_rhs_src_line,
            &matched_rhs_lines,
        );

        for (lhs_line_num, rhs_line_num) in aligned_lines {
            let lhs_line = match lhs_line_num {
                Some(lhs_line_num) => lhs_colored_lines[lhs_line_num.0].clone(),
                None => " ".repeat(lhs_content_width),
            };
            let rhs_line = match rhs_line_num {
                Some(rhs_line_num) => &rhs_colored_lines[rhs_line_num.0],
                None => "",
            };

            let display_lhs_line_num: String = match lhs_line_num {
                Some(line_num) => {
                    let s = format_line_num_padded(line_num, lhs_column_width);
                    if lhs_lines_with_novel.contains(&line_num) {
                        s.bright_red().to_string()
                    } else {
                        s
                    }
                }
                None => format_missing_line_num(
                    prev_lhs_line_num.unwrap_or_else(|| 10.into()),
                    lhs_column_width,
                ),
            };
            let display_rhs_line_num: String = match rhs_line_num {
                Some(line_num) => {
                    let s = format_line_num_padded(line_num, rhs_column_width);
                    if rhs_lines_with_novel.contains(&line_num) {
                        s.bright_green().to_string()
                    } else {
                        s
                    }
                }
                None => format_missing_line_num(
                    prev_rhs_line_num.unwrap_or_else(|| 10.into()),
                    rhs_column_width,
                ),
            };

            out_lines.push(format!(
                "{}{}{}{}{}",
                display_lhs_line_num, lhs_line, SPACER, display_rhs_line_num, rhs_line
            ));

            if lhs_line_num.is_some() {
                prev_lhs_line_num = lhs_line_num;
            }
            if rhs_line_num.is_some() {
                prev_rhs_line_num = rhs_line_num;
            }
        }
        out_lines.push("".into());
    }

    out_lines.join("\n")
}
