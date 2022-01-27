//! Inline, or "unified" diff display.

use crate::{
    context::all_matched_lines_filled,
    hunks::{either_side_equal, matched_lines_for_hunk, Hunk},
    lines::{format_line_num, LineNumber},
    style::{self, apply_colors},
    syntax::MatchedPos,
};
use colored::*;

struct InlineParts {
    lhs_before: Vec<LineNumber>,
    lhs_hunk: Vec<LineNumber>,
    rhs_hunk: Vec<LineNumber>,
    rhs_after: Vec<LineNumber>,
}

/// Before:
///
/// 1 11
/// 2 12
/// 3 13
///
/// After:
///
/// 1 None
/// 2 12
/// None 13
fn split_lines_for_inline(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    hunk_start: (Option<LineNumber>, Option<LineNumber>),
    hunk_end: (Option<LineNumber>, Option<LineNumber>),
) -> InlineParts {
    let mut lhs_before = vec![];
    let mut lhs_hunk = vec![];
    let mut rhs_hunk = vec![];
    let mut rhs_after = vec![];

    let mut after_hunk_start = false;
    let mut after_hunk_end = false;

    for line_pair in lines {
        if after_hunk_end {
            if let Some(rhs_line) = line_pair.1 {
                rhs_after.push(rhs_line);
            }
        } else if after_hunk_start {
            if let Some(lhs_line) = line_pair.0 {
                lhs_hunk.push(lhs_line);
            }
            if let Some(rhs_line) = line_pair.1 {
                rhs_hunk.push(rhs_line);
            }

            if either_side_equal(line_pair, &hunk_end) {
                after_hunk_end = true;
            }
        } else {
            if either_side_equal(line_pair, &hunk_start) {
                after_hunk_start = true;

                if let Some(lhs_line) = line_pair.0 {
                    lhs_hunk.push(lhs_line);
                }
                if let Some(rhs_line) = line_pair.1 {
                    rhs_hunk.push(rhs_line);
                }
            } else {
                if let Some(lhs_line) = line_pair.0 {
                    lhs_before.push(lhs_line);
                }
            }
        }
    }

    InlineParts {
        lhs_before,
        lhs_hunk,
        rhs_hunk,
        rhs_after,
    }
}

pub fn display(
    lhs_src: &str,
    rhs_src: &str,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    hunks: &[Hunk],
    display_path: &str,
    lang_name: &str,
) -> String {
    let lhs_colored = apply_colors(lhs_src, true, lhs_positions);
    let rhs_colored = apply_colors(rhs_src, false, rhs_positions);

    let lhs_lines: Vec<_> = lhs_colored.lines().collect();
    let rhs_lines: Vec<_> = rhs_colored.lines().collect();

    let mut res = String::new();

    let matched_lines = all_matched_lines_filled(lhs_positions, rhs_positions);

    for (i, hunk) in hunks.iter().enumerate() {
        res.push_str(&style::header(display_path, i + 1, hunks.len(), lang_name));
        res.push('\n');

        let aligned_lines = matched_lines_for_hunk(&matched_lines, hunk);
        let inline_parts = split_lines_for_inline(
            &aligned_lines,
            *hunk.lines.first().expect("Hunks are non-empty"),
            *hunk.lines.last().expect("Hunks are non-empty"),
        );

        for lhs_line in inline_parts.lhs_before {
            res.push_str(&format_line_num(lhs_line));
            res.push_str("   ");
            res.push_str(lhs_lines[lhs_line.0]);
            res.push('\n');
        }

        for lhs_line in inline_parts.lhs_hunk {
            res.push_str(&format_line_num(lhs_line).red().bold().to_string());
            res.push_str("   ");
            res.push_str(lhs_lines[lhs_line.0]);
            res.push('\n');
        }

        for rhs_line in inline_parts.rhs_hunk {
            res.push_str("   ");
            res.push_str(&format_line_num(rhs_line).green().bold().to_string());
            res.push_str(rhs_lines[rhs_line.0]);
            res.push('\n');
        }

        for rhs_line in inline_parts.rhs_after {
            res.push_str("   ");
            res.push_str(&format_line_num(rhs_line));
            res.push_str(rhs_lines[rhs_line.0]);
            res.push('\n');
        }

        res.push('\n');
    }

    res
}
