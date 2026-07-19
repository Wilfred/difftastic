//! Inline, or "unified" diff display.

use line_numbers::LineNumber;

use crate::constants::Side;
use crate::display::context::{
    calculate_after_context, calculate_before_context, opposite_positions,
};
use crate::display::diff_line_metadata::{row_is_novel, DiffLineMetadata};
use crate::display::hunks::Hunk;
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

    let metadata = DiffLineMetadata::from_env(display_path);
    let lhs_lines: Vec<&str> = split_on_newlines(lhs_src).collect();
    let rhs_lines: Vec<&str> = split_on_newlines(rhs_src).collect();

    // Calculate the maximum line number width for alignment
    let lhs_line_nums_width = format_line_num(lhs_src.max_line()).len();
    let rhs_line_nums_width = format_line_num(rhs_src.max_line()).len();

    for (i, hunk) in hunks.iter().enumerate() {
        let hunk_lines = hunk.lines.clone();

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

        let banner = style::header(
            display_path,
            extra_info.as_ref(),
            i + 1,
            hunks.len(),
            file_format,
            display_options,
        );
        match &metadata {
            // The banner announces both the file and this hunk: every banner
            // carries the hunk's `h` (with the hunk's first new-file line), and
            // the first hunk's banner additionally carries the file's `f`.
            Some(metadata) => {
                let new_line = before_lines
                    .iter()
                    .chain(hunk_lines.iter())
                    .chain(after_lines.iter())
                    .find_map(|(_, rhs)| rhs.map(|n| n.as_usize() + 1))
                    .unwrap_or(1);
                println!("{}", metadata.header_banner(i == 0, new_line, &banner));
            }
            None => println!("{}", banner),
        }

        // Inline mode groups all old-side content (before-context, then
        // deletions) before all new-side content (additions, then
        // after-context). The metadata rides each line: the old-side passes
        // emit the left-column record, the new-side passes the right-column
        // one, so a host can still reconstruct each line's identity despite the
        // grouping. `prev_rhs` carries the most recent new-file line through the
        // old-side passes, to place a pure deletion (which has no new line of
        // its own) at the following new-file position.
        let mut prev_rhs: Option<LineNumber> = None;

        for (lhs_line, rhs_line) in before_lines {
            if let Some(lhs_line) = lhs_line {
                if let Some(metadata) = &metadata {
                    // An old line with no new-side counterpart is a deletion in
                    // patch space even when this display files it under context
                    // (a deleted blank line, or a line consumed by a join). An
                    // aligned context row stays `c` even if its sides' contents
                    // differ (a whitespace-only change): only one side of it is
                    // ever rendered here, so a `d` would hand the host a
                    // deletion whose addition it can never show.
                    print!(
                        "{}",
                        metadata.left_cell(Some(lhs_line), rhs_line, rhs_line.is_none(), prev_rhs,)
                    );
                }
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
            if let Some(rhs_line) = rhs_line {
                prev_rhs = Some(rhs_line);
            }
        }

        for (lhs_line, rhs_line) in &hunk_lines {
            if let Some(lhs_line) = lhs_line {
                if let Some(metadata) = &metadata {
                    // The line type is the row's patch-space type (contents
                    // compared -- see row_is_novel), not the token novelty the
                    // display colors by: a line changed only by added tokens
                    // has no novel old-side tokens, yet its old line is still
                    // the deletion half of the modification. A genuinely
                    // identical line that falls inside the hunk still compares
                    // equal and is tagged c.
                    print!(
                        "{}",
                        metadata.left_cell(
                            Some(*lhs_line),
                            *rhs_line,
                            row_is_novel(Some(*lhs_line), *rhs_line, &lhs_lines, &rhs_lines),
                            prev_rhs,
                        )
                    );
                }
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
            if let Some(rhs_line) = rhs_line {
                prev_rhs = Some(*rhs_line);
            }
        }
        for (lhs_line, rhs_line) in &hunk_lines {
            if let Some(rhs_line) = rhs_line {
                if let Some(metadata) = &metadata {
                    print!(
                        "{}",
                        metadata.right_cell(
                            Some(*rhs_line),
                            row_is_novel(*lhs_line, Some(*rhs_line), &lhs_lines, &rhs_lines),
                        )
                    );
                }
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

        for (lhs_line, rhs_line) in &after_lines {
            if let Some(rhs_line) = rhs_line {
                if let Some(metadata) = &metadata {
                    // Mirror of the before-context pass: a new line with no
                    // old-side counterpart is an addition even when filed under
                    // context; an aligned context row stays `c` regardless of
                    // content.
                    print!(
                        "{}",
                        metadata.right_cell(Some(*rhs_line), lhs_line.is_none())
                    );
                }
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
