//! Inline, or "unified" diff display.

use crate::{
    display::context::{calculate_after_context, calculate_before_context, opposite_positions},
    display::hunks::Hunk,
    display::style::{self, apply_colors},
    lines::{format_line_num, split_on_newlines, MaxLine},
    options::DisplayOptions,
    parse::syntax::MatchedPos,
};
use owo_colors::colored::*;

pub fn print(
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    hunks: &[Hunk],
    lhs_display_path: &str,
    rhs_display_path: &str,
    lang_name: &str,
) {
    let (lhs_colored_lines, rhs_colored_lines) = if display_options.use_color {
        (
            apply_colors(
                lhs_src,
                true,
                display_options.syntax_highlight,
                display_options.background_color,
                lhs_positions,
            ),
            apply_colors(
                rhs_src,
                false,
                display_options.syntax_highlight,
                display_options.background_color,
                rhs_positions,
            ),
        )
    } else {
        (
            split_on_newlines(lhs_src)
                .iter()
                .map(|s| (*s).to_owned())
                .collect(),
            split_on_newlines(rhs_src)
                .iter()
                .map(|s| (*s).to_owned())
                .collect(),
        )
    };

    let opposite_to_lhs = opposite_positions(lhs_positions);
    let opposite_to_rhs = opposite_positions(rhs_positions);

    for (i, hunk) in hunks.iter().enumerate() {
        println!(
            "{}",
            style::header(
                lhs_display_path,
                rhs_display_path,
                i + 1,
                hunks.len(),
                lang_name,
                display_options
            )
        );

        let hunk_lines = hunk.lines.clone();

        let before_lines =
            calculate_before_context(&hunk_lines, &opposite_to_lhs, &opposite_to_rhs);
        let after_lines = calculate_after_context(
            &[&before_lines[..], &hunk_lines[..]].concat(),
            &opposite_to_lhs,
            &opposite_to_rhs,
            // TODO: repeatedly calculating the maximum is wasteful.
            lhs_src.max_line(),
            rhs_src.max_line(),
        );

        for (lhs_line, _) in before_lines {
            if let Some(lhs_line) = lhs_line {
                print!(
                    "{}   {}",
                    format_line_num(lhs_line),
                    lhs_colored_lines[lhs_line.as_usize()]
                );
            }
        }

        for (lhs_line, _) in &hunk_lines {
            if let Some(lhs_line) = lhs_line {
                print!(
                    "{}   {}",
                    format_line_num(*lhs_line).red().bold(),
                    lhs_colored_lines[lhs_line.as_usize()]
                );
            }
        }
        for (_, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                print!(
                    "   {}{}",
                    format_line_num(*rhs_line).green().bold(),
                    rhs_colored_lines[rhs_line.as_usize()]
                );
            }
        }

        for (_, rhs_line) in &after_lines {
            if let Some(rhs_line) = rhs_line {
                print!(
                    "   {}{}",
                    format_line_num(*rhs_line),
                    rhs_colored_lines[rhs_line.as_usize()]
                );
            }
        }
        println!();
    }
}
