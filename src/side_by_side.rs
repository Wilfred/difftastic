use std::cmp::{max, min};
use std::collections::HashMap;

use crate::lines::{
    enforce_length, format_line_num, format_line_num_padded, LineGroup, LineNumber,
};
use crate::style::apply_colors;
use crate::syntax::{aligned_lines, MatchedPos};

const SPACER: &str = "  ";
const MIN_WIDTH: usize = 35;

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

fn longest_visible_line_lhs(s: &str, groups: &[LineGroup]) -> usize {
    let lines: Vec<_> = s.lines().collect();
    let mut longest = 0;

    for group in groups {
        if let Some(lhs_lines) = &group.lhs_lines {
            for line_num in lhs_lines.start.0..lhs_lines.end.0 {
                let current_len = lines[line_num].len();
                longest = max(longest, current_len);
            }
        }
    }

    longest
}

fn longest_visible_line_rhs(s: &str, groups: &[LineGroup]) -> usize {
    let lines: Vec<_> = s.lines().collect();
    let mut longest = 1;

    for group in groups {
        if let Some(rhs_lines) = &group.rhs_lines {
            for line_num in rhs_lines.start.0..rhs_lines.end.0 {
                let current_len = lines[line_num].len();
                longest = max(longest, current_len);
            }
        }
    }

    longest
}

fn lhs_printable_width(
    lhs: &str,
    groups: &[LineGroup],
    lhs_column_width: usize,
    terminal_width: usize,
) -> usize {
    let longest_line_length = longest_visible_line_lhs(lhs, groups);
    let longest_line = longest_line_length + lhs_column_width;

    let space_available = terminal_width / 2 - SPACER.len();
    max(MIN_WIDTH, min(longest_line, space_available))
}

fn rhs_printable_width(
    rhs: &str,
    groups: &[LineGroup],
    lhs_width: usize,
    rhs_column_width: usize,
    terminal_width: usize,
) -> usize {
    let longest_line_length = longest_visible_line_rhs(rhs, groups);
    let longest_line = longest_line_length + rhs_column_width;

    let space_available = (terminal_width - SPACER.len()) - lhs_width;

    max(MIN_WIDTH, min(longest_line, space_available))
}

fn apply_group(
    lhs_lines: &[&str],
    rhs_lines: &[&str],
    group: &LineGroup,
    lhs_line_matches: &HashMap<LineNumber, LineNumber>,
    lhs_content_width: usize,
    lhs_column_width: usize,
    rhs_column_width: usize,
) -> String {
    let mut result = String::new();

    for (lhs_line_num, rhs_line_num) in
        aligned_lines(&group.lhs_lines(), &group.rhs_lines(), lhs_line_matches)
    {
        match lhs_line_num {
            Some(lhs_line_num) => {
                result.push_str(&format_line_num_padded(lhs_line_num, lhs_column_width));
                result.push_str(lhs_lines[lhs_line_num.0]);
            }
            None => {
                result.push_str(&" ".repeat(lhs_column_width));
                result.push_str(&" ".repeat(lhs_content_width));
            }
        }
        result.push_str(SPACER);

        match rhs_line_num {
            Some(rhs_line_num) => {
                result.push_str(&format_line_num_padded(rhs_line_num, rhs_column_width));
                result.push_str(rhs_lines[rhs_line_num.0]);
            }
            None => {}
        }

        result.push('\n');
    }

    result
}

/// Display all the lines in `lhs` and `rhs` that are mentioned in
/// `groups`, horizontally concatenating the matched lines.
fn apply_groups(
    lhs: &str,
    rhs: &str,
    groups: &[LineGroup],
    lhs_line_matches: &HashMap<LineNumber, LineNumber>,
    lhs_content_width: usize,
    rhs_content_width: usize,
    lhs_column_width: usize,
    rhs_column_width: usize,
) -> String {
    let lhs_lines: Vec<_> = lhs.lines().collect();
    let rhs_lines: Vec<_> = rhs.lines().collect();

    let mut result = String::new();

    let mut spacer = String::new();
    spacer.push_str(&" ".repeat(lhs_column_width));
    spacer.push_str(&"-".repeat(lhs_content_width));
    spacer.push_str(&" ".repeat(rhs_column_width + 2));
    spacer.push_str(&"-".repeat(rhs_content_width));

    for (i, group) in groups.iter().enumerate() {
        result.push_str(&apply_group(
            &lhs_lines,
            &rhs_lines,
            group,
            lhs_line_matches,
            lhs_content_width,
            lhs_column_width,
            rhs_column_width,
        ));
        if i != groups.len() - 1 {
            result.push_str(&spacer);
            result.push('\n');
        }
    }

    result
}

pub fn display(
    lhs_src: &str,
    rhs_src: &str,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    lhs_matched_lines: &HashMap<LineNumber, LineNumber>,
    groups: &[LineGroup],
) -> String {
    let lhs_column_width = format_line_num(groups.last().unwrap().max_visible_lhs()).len();
    let rhs_column_width = format_line_num(groups.last().unwrap().max_visible_rhs()).len();

    let terminal_width = term_width().unwrap_or(80);

    let lhs_formatted_length =
        lhs_printable_width(lhs_src, groups, lhs_column_width, terminal_width);
    let rhs_formatted_length = rhs_printable_width(
        rhs_src,
        groups,
        lhs_formatted_length,
        rhs_column_width,
        terminal_width,
    );

    let lhs_content_width = lhs_formatted_length - lhs_column_width;
    let rhs_content_width = rhs_formatted_length - rhs_column_width;

    let lhs_src = enforce_length(lhs_src, lhs_content_width);
    let rhs_src = enforce_length(rhs_src, rhs_content_width);
    let lhs_colored = apply_colors(&lhs_src, true, lhs_positions);
    let rhs_colored = apply_colors(&rhs_src, false, rhs_positions);

    apply_groups(
        &lhs_colored,
        &rhs_colored,
        groups,
        lhs_matched_lines,
        lhs_content_width,
        rhs_content_width,
        lhs_column_width,
        rhs_column_width,
    )
}
