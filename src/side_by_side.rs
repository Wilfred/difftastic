use std::collections::HashMap;

use crate::lines::{
    apply_groups, enforce_length, format_line_num, lhs_printable_width, rhs_printable_width,
    LineGroup, LineNumber,
};
use crate::style::apply_colors;
use crate::syntax::MatchedPos;

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
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
