//! Inline, or "unified" diff display.

use std::collections::HashSet;

use crate::{
    context::calculate_context,
    hunks::Hunk,
    lines::{format_line_num, LineGroup, LineNumber, MaxLine},
    style::apply_colors,
    syntax::{MatchKind, MatchedPos},
};
use colored::*;

// TODO: This will iterate over all changes in the file for every
// hunk, which is quadratic and silly.
fn last_lhs_context_line(
    lhs_hunk_start: LineNumber,
    lhs_hunk_end: LineNumber,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
) -> LineNumber {
    // If we have changes on the LHS, our before context stops on the
    // line before the first change in this hunk.
    for lhs_position in lhs_positions {
        if lhs_position.kind.is_unchanged() {
            continue;
        }

        if lhs_position.pos.line.0 > lhs_hunk_end.0 {
            break;
        }

        if lhs_position.pos.line.0 > lhs_hunk_start.0 {
            return (lhs_position.pos.line.0 - 1).into();
        }
    }

    // If we don't have changes on the LHS, find the line opposite the
    // last RHS unchanged node in this hunk.
    for rhs_position in rhs_positions {
        let opposite_pos = match &rhs_position.kind {
            MatchKind::Unchanged { opposite_pos, .. } => opposite_pos.0.clone(),
            MatchKind::Novel { .. } | MatchKind::ChangedCommentPart { .. } => continue,
            MatchKind::UnchangedCommentPart { opposite_pos, .. } => opposite_pos.clone(),
        };

        if let Some(pos) = opposite_pos.first() {
            if pos.line.0 > lhs_hunk_end.0 {
                break;
            }

            if pos.line.0 > lhs_hunk_start.0 {
                return pos.line;
            }
        }
    }

    panic!("Could not find LHS context line");
}

fn first_rhs_context_line(
    rhs_hunk_start: LineNumber,
    rhs_hunk_end: LineNumber,
    // TODO: consider "lhs_matches" to avoid confusion with positions
    // when we're dealing with MatchedPos values.
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
) -> LineNumber {
    // If we have changes on the RHS, our after context starts on the line
    // after the last change in this hunk.
    let mut last_change_line = None;
    for rhs_position in rhs_positions {
        if rhs_position.kind.is_unchanged() {
            continue;
        }

        if rhs_position.pos.line.0 > rhs_hunk_end.0 {
            break;
        }

        if rhs_position.pos.line.0 > rhs_hunk_start.0 {
            last_change_line = Some(rhs_position.pos.line);
        }
    }

    if let Some(last_change_line) = last_change_line {
        return (last_change_line.0 + 1).into();
    }

    // If we don't have changes on the RHS, find the line opposite the
    // first unchanged LHS syntax node after the changed nodes.
    let mut lhs_rev_positions: Vec<_> = lhs_positions.into();
    lhs_rev_positions.reverse();
    for lhs_position in lhs_rev_positions {
        let opposite_pos = match lhs_position.kind {
            MatchKind::Unchanged { opposite_pos, .. } => opposite_pos.0,
            // TODO: handle UnchangedCommentPart here too?
            _ => break,
        };

        if let Some(pos) = opposite_pos.first() {
            last_change_line = Some(pos.line);
        }
    }

    last_change_line.expect("Should have found an opposite LHS line")
}

fn changed_lines(
    hunk_start: LineNumber,
    hunk_end: LineNumber,
    positions: &[MatchedPos],
) -> Vec<LineNumber> {
    let mut lines_seen = HashSet::new();
    let mut res = vec![];

    for position in positions {
        if position.kind.is_unchanged() {
            continue;
        }

        if position.pos.line.0 > hunk_end.0 {
            break;
        }
        if position.pos.line.0 >= hunk_start.0 {
            if !lines_seen.contains(&position.pos.line) {
                lines_seen.insert(position.pos.line);
                res.push(position.pos.line);
            }
        }
    }

    res
}

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

    for hunk in hunks {
        let hunk_lines = hunk.lines.clone();
        let (before_lines, after_lines) = calculate_context(
            &hunk_lines,
            lhs_positions,
            rhs_positions,
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
