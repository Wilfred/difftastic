use std::collections::HashSet;

use crate::{
    lines::{format_line_num, LineGroup, LineNumber},
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

        // TODO: is the first SingleLineSpan in the MatchedPos the best one?
        if let Some(pos) = lhs_position.pos.first() {
            if pos.line.0 > lhs_hunk_end.0 {
                break;
            }

            if pos.line.0 > lhs_hunk_start.0 {
                return (pos.line.0 - 1).into();
            }
        }
    }

    // If we don't have changes on the LHS, find the line opposite the
    // last RHS unchanged node in this hunk.
    for rhs_position in rhs_positions {
        if rhs_position.kind.is_unchanged() {
            continue;
        }

        if let Some(pos) = rhs_position.prev_opposite_pos.first() {
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

        if let Some(pos) = rhs_position.pos.first() {
            if pos.line.0 > rhs_hunk_end.0 {
                break;
            }

            if pos.line.0 > rhs_hunk_start.0 {
                last_change_line = Some(pos.line);
            }
        }
    }

    if let Some(last_change_line) = last_change_line {
        return (last_change_line.0 + 1).into();
    }

    // If we don't have changes on the RHS, find the line opposite the
    // first unchanged LHS syntax node after the changed nodes.
    let mut lhs_rev_positions: Vec<_> = lhs_positions.into();
    lhs_rev_positions.reverse();
    for lhs_position in lhs_positions {
        match lhs_position.kind {
            MatchKind::Unchanged { .. } => {}
            _ => break,
        }

        if let Some(pos) = lhs_position.prev_opposite_pos.first() {
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

        if let Some(pos) = position.pos.first() {
            if pos.line.0 > hunk_end.0 {
                break;
            }
            if pos.line.0 >= hunk_start.0 {
                if !lines_seen.contains(&pos.line) {
                    lines_seen.insert(pos.line);
                    res.push(pos.line);
                }
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
    groups: &[LineGroup],
) -> String {
    let lhs_colored = apply_colors(lhs_src, true, lhs_positions);
    let rhs_colored = apply_colors(rhs_src, false, rhs_positions);

    let lhs_lines: Vec<_> = lhs_colored.lines().collect();
    let rhs_lines: Vec<_> = rhs_colored.lines().collect();

    let mut res = String::new();

    for group in groups {
        let lhs_context_last = last_lhs_context_line(
            // TODO: Use non-empty vectors in LineGroup.
            *group.lhs_lines().first().unwrap(),
            *group.lhs_lines().last().unwrap(),
            lhs_positions,
            rhs_positions,
        );
        for lhs_line_num in group.lhs_lines() {
            if lhs_line_num.0 <= lhs_context_last.0 {
                res.push_str(&format_line_num(lhs_line_num));
                res.push_str("   ");

                res.push_str(lhs_lines[lhs_line_num.0]);
                res.push('\n');
            } else {
                break;
            }
        }
        for lhs_line_num in changed_lines(
            *group.lhs_lines().first().unwrap(),
            *group.lhs_lines().last().unwrap(),
            lhs_positions,
        ) {
            res.push_str(
                &format_line_num(lhs_line_num)
                    .bright_red()
                    .bold()
                    .to_string(),
            );
            res.push_str("   ");

            res.push_str(lhs_lines[lhs_line_num.0]);
            res.push('\n');
        }

        for rhs_line_num in changed_lines(
            *group.rhs_lines().first().unwrap(),
            *group.rhs_lines().last().unwrap(),
            rhs_positions,
        ) {
            res.push_str("   ");
            res.push_str(
                &format_line_num(rhs_line_num)
                    .bright_green()
                    .bold()
                    .to_string(),
            );

            res.push_str(rhs_lines[rhs_line_num.0]);
            res.push('\n');
        }

        let rhs_context_first = first_rhs_context_line(
            *group.rhs_lines().first().unwrap(),
            *group.rhs_lines().last().unwrap(),
            lhs_positions,
            rhs_positions,
        );
        for rhs_line_num in group.rhs_lines() {
            if rhs_line_num.0 >= rhs_context_first.0 {
                res.push_str("   ");
                res.push_str(&format_line_num(rhs_line_num));

                res.push_str(rhs_lines[rhs_line_num.0]);
                res.push('\n');
            }
        }

        res.push('\n');
    }

    res
}
