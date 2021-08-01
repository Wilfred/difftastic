use std::collections::HashSet;

use crate::{lines::{format_line_num, LineGroup}, syntax::{MatchKind, MatchedPos}};
use colored::*;

pub fn display(
    lhs_src: &str,
    rhs_src: &str,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    groups: &[LineGroup],
) -> String {
    let lhs_lines: Vec<_> = lhs_src.lines().collect();
    let rhs_lines: Vec<_> = rhs_src.lines().collect();

    let mut lhs_changed_lines = HashSet::new();
    for lhs_matched_pos in lhs_positions {
        if lhs_matched_pos.kind == MatchKind::Unchanged {
            continue;
        }

        for lhs_pos in &lhs_matched_pos.pos {
            lhs_changed_lines.insert(lhs_pos.line);
        }
    }

    let mut rhs_changed_lines = HashSet::new();
    for rhs_matched_pos in rhs_positions {
        if rhs_matched_pos.kind == MatchKind::Unchanged {
            continue;
        }

        for rhs_pos in &rhs_matched_pos.pos {
            rhs_changed_lines.insert(rhs_pos.line);
        }
    }

    let mut res = String::new();

    for group in groups {
        for lhs_line_num in group.lhs_lines() {
            res.push_str(&format_line_num(lhs_line_num));
            res.push_str("   ");

            if lhs_changed_lines.contains(&lhs_line_num) {
                res.push_str(&lhs_lines[lhs_line_num.0].bright_red().to_string());
            } else {
                res.push_str(&lhs_lines[lhs_line_num.0].white().to_string());
            }
            res.push('\n');
        }
        for rhs_line_num in group.rhs_lines() {
            res.push_str("   ");
            res.push_str(&format_line_num(rhs_line_num));

            if rhs_changed_lines.contains(&rhs_line_num) {
                res.push_str(&rhs_lines[rhs_line_num.0].bright_green().to_string());
            } else {
                res.push_str(&rhs_lines[rhs_line_num.0].white().to_string());
            }
            res.push('\n');
        }

        res.push('\n');
    }

    res
}
