//! Inline, or "unified" diff display.

use crate::{
    context::{calculate_context, opposite_positions},
    hunks::Hunk,
    lines::{format_line_num, MaxLine},
    style::apply_colors,
    syntax::MatchedPos,
};
use colored::*;

pub fn display(
    lhs_src: &str,
    rhs_src: &str,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    hunks: &[Hunk],
) -> String {
    let lhs_colored = apply_colors(lhs_src, true, lhs_positions);
    let rhs_colored = apply_colors(rhs_src, false, rhs_positions);

    let lhs_lines: Vec<_> = lhs_colored.lines().collect();
    let rhs_lines: Vec<_> = rhs_colored.lines().collect();

    let mut res = String::new();

    let opposite_to_lhs = opposite_positions(lhs_positions);
    let opposite_to_rhs = opposite_positions(rhs_positions);

    for hunk in hunks {
        let hunk_lines = hunk.lines.clone();
        let (before_lines, after_lines) = calculate_context(
            &hunk_lines,
            &opposite_to_lhs,
            &opposite_to_rhs,
            // TODO: repeatedly calculating the maximum is wasteful.
            lhs_src.max_line(),
            rhs_src.max_line(),
        );

        for (lhs_line, _) in before_lines {
            if let Some(lhs_line) = lhs_line {
                res.push_str(&format_line_num(lhs_line));
                res.push_str("   ");
                res.push_str(lhs_lines[lhs_line.0]);
            } else {
                continue;
            }
            res.push('\n');
        }

        for (lhs_line, _) in &hunk_lines {
            if let Some(lhs_line) = lhs_line {
                res.push_str(&format_line_num(*lhs_line).bright_red().to_string());
                res.push_str("   ");
                res.push_str(lhs_lines[lhs_line.0]);
            } else {
                continue;
            }
            res.push('\n');
        }
        for (_, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                res.push_str("   ");
                res.push_str(&format_line_num(*rhs_line).bright_green().to_string());
                res.push_str(rhs_lines[rhs_line.0]);
            } else {
                continue;
            }
            res.push('\n');
        }

        for (_, rhs_line) in &after_lines {
            if let Some(rhs_line) = rhs_line {
                res.push_str("   ");
                res.push_str(&format_line_num(*rhs_line));
                res.push_str(rhs_lines[rhs_line.0]);
            } else {
                continue;
            }
            res.push('\n');
        }
        res.push('\n');
    }

    res
}
