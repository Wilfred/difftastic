//! Inline, or "unified" diff display.

use line_numbers::LineNumber;

use crate::constants::Side;
use crate::display::context::{
    calculate_after_context, calculate_before_context, opposite_positions,
};
use crate::display::hunks::Hunk;
use crate::display::style::{self, apply_colors, apply_line_number_color};
use crate::lines::{format_line_num, split_on_newlines, MaxLine};
use crate::options::DisplayOptions;
use crate::parse::syntax::MatchedPos;
use crate::summary::FileFormat;

/// Expand `hunk.lines` to include any unchanged lines that fall between
/// changed lines on the same side. Without this, inline display drops
/// in-hunk context, which can hide section headings and similar
/// structural lines (issue #978).
fn fill_in_hunk_gaps(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut filled = Vec::with_capacity(lines.len());

    let mut prev_lhs: Option<LineNumber> = None;
    let mut prev_rhs: Option<LineNumber> = None;

    for (lhs_line, rhs_line) in lines {
        let lhs_gap: Vec<LineNumber> = match (prev_lhs, *lhs_line) {
            (Some(prev), Some(curr)) if prev.0 + 1 < curr.0 => {
                (prev.0 + 1..curr.0).map(LineNumber::from).collect()
            }
            _ => vec![],
        };
        let rhs_gap: Vec<LineNumber> = match (prev_rhs, *rhs_line) {
            (Some(prev), Some(curr)) if prev.0 + 1 < curr.0 => {
                (prev.0 + 1..curr.0).map(LineNumber::from).collect()
            }
            _ => vec![],
        };

        let pair_count = lhs_gap.len().max(rhs_gap.len());
        for i in 0..pair_count {
            filled.push((lhs_gap.get(i).copied(), rhs_gap.get(i).copied()));
        }

        filled.push((*lhs_line, *rhs_line));

        if lhs_line.is_some() {
            prev_lhs = *lhs_line;
        }
        if rhs_line.is_some() {
            prev_rhs = *rhs_line;
        }
    }

    filled
}

pub(crate) fn print(
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    hunks: &[Hunk],
    display_path: &str,
    extra_info: &Option<String>,
    file_format: &FileFormat,
) {
    let (lhs_colored_lines, rhs_colored_lines) = if display_options.use_color {
        (
            apply_colors(
                lhs_src,
                Side::Left,
                display_options.syntax_highlight,
                file_format,
                display_options.background_color,
                lhs_mps,
            ),
            apply_colors(
                rhs_src,
                Side::Right,
                display_options.syntax_highlight,
                file_format,
                display_options.background_color,
                rhs_mps,
            ),
        )
    } else {
        (
            split_on_newlines(lhs_src)
                .map(|s| format!("{}\n", s))
                .collect(),
            split_on_newlines(rhs_src)
                .map(|s| format!("{}\n", s))
                .collect(),
        )
    };

    let lhs_colored_lines: Vec<_> = lhs_colored_lines
        .into_iter()
        .map(|line| style::replace_tabs(&line, display_options.tab_width))
        .collect();
    let rhs_colored_lines: Vec<_> = rhs_colored_lines
        .into_iter()
        .map(|line| style::replace_tabs(&line, display_options.tab_width))
        .collect();

    let opposite_to_lhs = opposite_positions(lhs_mps);
    let opposite_to_rhs = opposite_positions(rhs_mps);

    for (i, hunk) in hunks.iter().enumerate() {
        println!(
            "{}",
            style::header(
                display_path,
                extra_info.as_ref(),
                i + 1,
                hunks.len(),
                file_format,
                display_options
            )
        );

        let hunk_lines = fill_in_hunk_gaps(&hunk.lines);

        let before_lines = calculate_before_context(
            &hunk_lines,
            &opposite_to_lhs,
            &opposite_to_rhs,
            display_options.num_context_lines as usize,
        );
        let after_lines = calculate_after_context(
            &[&before_lines[..], &hunk_lines[..]].concat(),
            &opposite_to_lhs,
            &opposite_to_rhs,
            // TODO: repeatedly calculating the maximum is wasteful.
            lhs_src.max_line(),
            rhs_src.max_line(),
            display_options.num_context_lines as usize,
        );

        for (lhs_line, _) in before_lines {
            if let Some(lhs_line) = lhs_line {
                print!(
                    "{}   {}",
                    apply_line_number_color(
                        &format_line_num(lhs_line),
                        false,
                        Side::Left,
                        display_options,
                    ),
                    lhs_colored_lines[lhs_line.as_usize()]
                );
            }
        }

        for (lhs_line, _) in &hunk_lines {
            if let Some(lhs_line) = lhs_line {
                let is_novel = hunk.novel_lhs.contains(lhs_line);
                print!(
                    "{}   {}",
                    apply_line_number_color(
                        &format_line_num(*lhs_line),
                        is_novel,
                        Side::Left,
                        display_options,
                    ),
                    lhs_colored_lines[lhs_line.as_usize()]
                );
            }
        }
        for (_, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                let is_novel = hunk.novel_rhs.contains(rhs_line);
                print!(
                    "   {}{}",
                    apply_line_number_color(
                        &format_line_num(*rhs_line),
                        is_novel,
                        Side::Right,
                        display_options,
                    ),
                    rhs_colored_lines[rhs_line.as_usize()]
                );
            }
        }

        for (_, rhs_line) in &after_lines {
            if let Some(rhs_line) = rhs_line {
                print!(
                    "   {}{}",
                    apply_line_number_color(
                        &format_line_num(*rhs_line),
                        false,
                        Side::Right,
                        display_options,
                    ),
                    rhs_colored_lines[rhs_line.as_usize()]
                );
            }
        }
        println!();
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn ln(n: u32) -> LineNumber {
        n.into()
    }

    #[test]
    fn fill_in_hunk_gaps_empty() {
        assert!(fill_in_hunk_gaps(&[]).is_empty());
    }

    #[test]
    fn fill_in_hunk_gaps_no_gap() {
        let input = vec![(Some(ln(0)), Some(ln(0))), (Some(ln(1)), Some(ln(1)))];
        assert_eq!(fill_in_hunk_gaps(&input), input);
    }

    #[test]
    fn fill_in_hunk_gaps_lhs_only_change_then_unchanged() {
        // LHS has a removed line at 0, unchanged lines at 1, 2 (both
        // sides), then an RHS-only added line at index 1. Filling the
        // gap inside the hunk should insert the unchanged lines that
        // sit between novel changes.
        let input = vec![(Some(ln(0)), None), (Some(ln(3)), Some(ln(3)))];
        let filled = fill_in_hunk_gaps(&input);
        assert_eq!(
            filled,
            vec![
                (Some(ln(0)), None),
                (Some(ln(1)), None),
                (Some(ln(2)), None),
                (Some(ln(3)), Some(ln(3))),
            ]
        );
    }

    #[test]
    fn fill_in_hunk_gaps_section_header_between_changes() {
        // Mimics issue #978: a hunk that contains LHS-only and RHS-only
        // changes separated by lines that are unchanged on both sides.
        // The unchanged lines are not in the input. After filling, each
        // side's gap is rebuilt so the inline display can print them as
        // in-hunk context.
        let input = vec![
            (Some(ln(4)), None),
            (None, Some(ln(4))),
            (Some(ln(7)), None),
            (None, Some(ln(7))),
        ];
        let filled = fill_in_hunk_gaps(&input);
        assert_eq!(
            filled,
            vec![
                (Some(ln(4)), None),
                (None, Some(ln(4))),
                (Some(ln(5)), None),
                (Some(ln(6)), None),
                (Some(ln(7)), None),
                (None, Some(ln(5))),
                (None, Some(ln(6))),
                (None, Some(ln(7))),
            ]
        );
    }

    #[test]
    fn fill_in_hunk_gaps_unequal_gap_lengths() {
        // The RHS gap (lines 1..6 = 5 lines) is longer than the LHS gap
        // (lines 1..3 = 2 lines). The filler pairs them up and pads the
        // shorter side with None.
        let input = vec![(Some(ln(0)), Some(ln(0))), (Some(ln(3)), Some(ln(6)))];
        let filled = fill_in_hunk_gaps(&input);
        assert_eq!(
            filled,
            vec![
                (Some(ln(0)), Some(ln(0))),
                (Some(ln(1)), Some(ln(1))),
                (Some(ln(2)), Some(ln(2))),
                (None, Some(ln(3))),
                (None, Some(ln(4))),
                (None, Some(ln(5))),
                (Some(ln(3)), Some(ln(6))),
            ]
        );
    }
}
