use atty::Stream;
use std::cmp::{max, min};
use std::collections::HashMap;

use crate::lines::{enforce_length, enforce_max_length, format_line_num, LineGroup, LineNumber};
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

    let space_available = (terminal_width - SPACER.len()) / 2;
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
    let mut lhs_prev_line_num = LineNumber(0);
    let mut rhs_prev_line_num = LineNumber(0);

    for (lhs_line_num, rhs_line_num) in aligned_lines(group, lhs_line_matches) {
        match lhs_line_num {
            Some(lhs_line_num) => {
                result.push_str(&format_line_num_padded(lhs_line_num, lhs_column_width));
                result.push_str(lhs_lines[lhs_line_num.0]);

                lhs_prev_line_num = lhs_line_num;
            }
            None => {
                result.push_str(&format_missing_line_num(
                    lhs_prev_line_num,
                    lhs_column_width,
                ));
                result.push_str(&" ".repeat(lhs_content_width));
            }
        }
        result.push_str(SPACER);

        match rhs_line_num {
            Some(rhs_line_num) => {
                result.push_str(&format_line_num_padded(rhs_line_num, rhs_column_width));
                result.push_str(rhs_lines[rhs_line_num.0]);

                rhs_prev_line_num = rhs_line_num;
            }
            None => {
                result.push_str(&format_missing_line_num(
                    rhs_prev_line_num,
                    rhs_column_width,
                ));
            }
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
    lhs_column_width: usize,
    rhs_column_width: usize,
) -> String {
    let lhs_lines: Vec<_> = lhs.lines().collect();
    let rhs_lines: Vec<_> = rhs.lines().collect();

    let mut result = String::new();

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
            result.push_str("\n\n");
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
        if atty::is(Stream::Stdout) {
            terminal_width
        } else {
            // Assume a pager like less.
            1000
        },
    );

    let lhs_content_width = lhs_formatted_length - lhs_column_width;
    let rhs_content_width = rhs_formatted_length - rhs_column_width;

    let lhs_src = enforce_length(lhs_src, lhs_content_width);
    let rhs_src = enforce_max_length(rhs_src, rhs_content_width);
    let lhs_colored = apply_colors(&lhs_src, true, lhs_positions);
    let rhs_colored = apply_colors(&rhs_src, false, rhs_positions);

    apply_groups(
        &lhs_colored,
        &rhs_colored,
        groups,
        lhs_matched_lines,
        lhs_content_width,
        lhs_column_width,
        rhs_column_width,
    )
}
