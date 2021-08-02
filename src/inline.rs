use std::collections::HashSet;

use crate::{
    lines::{format_line_num, LineGroup, LineNumber},
    syntax::{MatchKind, MatchedPos},
};
use colored::*;

fn boundaries(
    positions: &[MatchedPos],
    lines: &[LineNumber],
) -> (Option<LineNumber>, Option<LineNumber>) {
    let mut first_changed_line = None;
    let mut last_changed_line = None;
    let mut changed_lines = HashSet::new();

    for matched_pos in positions {
        if matched_pos.kind == MatchKind::Unchanged {
            continue;
        }

        for pos in &matched_pos.pos {
            changed_lines.insert(pos.line);
        }
    }

    for line in lines {
        if changed_lines.contains(line) {
            if first_changed_line.is_none() {
                first_changed_line = Some(*line);
            }
            last_changed_line = Some(*line);
        }
    }

    (first_changed_line, last_changed_line)
}

pub fn display(
    lhs_src: &str,
    rhs_src: &str,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    groups: &[LineGroup],
) -> String {
    let lhs_lines: Vec<_> = lhs_src.lines().collect();
    let rhs_lines: Vec<_> = rhs_src.lines().collect();

    let mut res = String::new();

    for group in groups {
        let (lhs_first_change, lhs_last_change) = boundaries(lhs_positions, &group.lhs_lines());
        for lhs_line_num in group.lhs_lines() {
            match lhs_last_change {
                Some(lhs_last_change) => {
                    if lhs_line_num.0 > lhs_last_change.0 {
                        break;
                    }
                }
                None => {}
            }

            match lhs_first_change {
                Some(lhs_first_change) if lhs_line_num.0 >= lhs_first_change.0 => {
                    res.push_str(
                        &format_line_num(lhs_line_num)
                            .bright_red()
                            .bold()
                            .to_string(),
                    );
                }
                _ => {
                    res.push_str(&format_line_num(lhs_line_num));
                }
            }

            res.push_str("   ");

            res.push_str(&lhs_lines[lhs_line_num.0].white().to_string());
            res.push('\n');
        }

        let (rhs_first_change, rhs_last_change) = boundaries(rhs_positions, &group.rhs_lines());
        for rhs_line_num in group.rhs_lines() {
            if rhs_line_num.0 < rhs_first_change.map(|c| c.0).unwrap_or(0) {
                continue;
            }

            res.push_str("   ");
            if rhs_line_num.0 <= rhs_last_change.map(|c| c.0).unwrap_or(0) {
                res.push_str(
                    &format_line_num(rhs_line_num)
                        .bright_green()
                        .bold()
                        .to_string(),
                );
            } else {
                res.push_str(&format_line_num(rhs_line_num));
            }

            res.push_str(&rhs_lines[rhs_line_num.0].white().to_string());
            res.push('\n');
        }

        res.push('\n');
    }

    res
}
