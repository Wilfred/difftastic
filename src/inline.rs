//! Inline, or "unified" diff display.

use crate::{
    context::{calculate_after_context, calculate_before_context, opposite_positions},
    hunks::Hunk,
    lines::{format_line_num, MaxLine},
    options::DisplayOptions,
    style::{self, apply_colors},
    syntax::MatchedPos,
};
use owo_colors::colored::*;

pub fn print(
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    lhs_positions: &[MatchedPos],
    rhs_positions: &[MatchedPos],
    hunks: &[Hunk],
    display_path: &str,
    lang_name: &str,
) {
    let (lhs_colored, rhs_colored) = if display_options.use_color {
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
        (lhs_src.to_string(), rhs_src.to_string())
    };

    let lhs_lines: Vec<_> = lhs_colored.lines().collect();
    let rhs_lines: Vec<_> = rhs_colored.lines().collect();

    let opposite_to_lhs = opposite_positions(lhs_positions);
    let opposite_to_rhs = opposite_positions(rhs_positions);

    for (i, hunk) in hunks.iter().enumerate() {
        println!(
            "{}",
            style::header(
                display_path,
                i + 1,
                hunks.len(),
                lang_name,
                display_options.use_color,
                display_options.background_color
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
                println!("{}   {}", format_line_num(lhs_line), lhs_lines[lhs_line.0]);
            }
        }

        for (lhs_line, _) in &hunk_lines {
            if let Some(lhs_line) = lhs_line {
                println!(
                    "{}   {}",
                    format_line_num(*lhs_line).red().bold(),
                    lhs_lines[lhs_line.0]
                );
            }
        }
        for (_, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                println!(
                    "   {}{}",
                    format_line_num(*rhs_line).green().bold(),
                    rhs_lines[rhs_line.0]
                );
            }
        }

        for (_, rhs_line) in &after_lines {
            if let Some(rhs_line) = rhs_line {
                println!("   {}{}", format_line_num(*rhs_line), rhs_lines[rhs_line.0]);
            }
        }
        println!();
    }
}
