//! Inline, or "unified" diff display.

use line_numbers::LineNumber;

use crate::constants::Side;
use crate::display::context::{
    calculate_after_context, calculate_before_context, opposite_positions,
};
use crate::display::hunks::{enclosing_function_def, Hunk};
use crate::display::style::{self, apply_colors, apply_line_number_color};
use crate::lines::{format_line_num, format_line_num_padded, split_on_newlines, MaxLine};
use crate::options::DisplayOptions;
use crate::parse::syntax::MatchedPos;
use crate::summary::FileFormat;

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
    lhs_fn_spans: &[(LineNumber, LineNumber)],
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

    // Calculate the maximum line number width for alignment
    let lhs_line_nums_width = format_line_num(lhs_src.max_line()).len();
    let rhs_line_nums_width = format_line_num(rhs_src.max_line()).len();

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

        let hunk_lines = hunk.lines.clone();

        let mut before_lines = calculate_before_context(
            &hunk_lines,
            &opposite_to_lhs,
            &opposite_to_rhs,
            display_options.num_context_lines as usize,
        );

        // With --show-functions, add the definition line of the enclosing
        // function as extra before-context if it is not already displayed.
        if display_options.show_function.is_some() {
            // Anchor on the LHS line at/closest-above the change. For a
            // pure addition there are no novel LHS lines, so fall back
            // to the last LHS context line (immediately above the
            // insertion point, still inside the enclosing function).
            let anchor_lhs = hunk
                .novel_lhs
                .iter()
                .min()
                .copied()
                .or_else(|| before_lines.iter().rev().find_map(|(lhs, _)| *lhs))
                .or_else(|| hunk_lines.iter().find_map(|(lhs, _)| *lhs));

            if let Some(def) =
                anchor_lhs.and_then(|line| enclosing_function_def(line, lhs_fn_spans))
            {
                let first_lhs = before_lines
                    .iter()
                    .find_map(|(lhs, _)| *lhs)
                    .or_else(|| hunk_lines.iter().find_map(|(lhs, _)| *lhs));
                let above = first_lhs.is_none_or(|first| def < first);
                if above {
                    before_lines.insert(0, (Some(def), None));
                }
            }
        }
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
                        &format_line_num_padded(lhs_line, lhs_line_nums_width),
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
                print!(
                    "{}   {}",
                    apply_line_number_color(
                        &format_line_num_padded(*lhs_line, lhs_line_nums_width),
                        true,
                        Side::Left,
                        display_options,
                    ),
                    lhs_colored_lines[lhs_line.as_usize()]
                );
            }
        }
        for (_, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                print!(
                    "   {}{}",
                    apply_line_number_color(
                        &format_line_num_padded(*rhs_line, rhs_line_nums_width),
                        true,
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
                        &format_line_num_padded(*rhs_line, rhs_line_nums_width),
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
