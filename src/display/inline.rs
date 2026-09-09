//! Inline, or "unified" diff display.

use line_numbers::LineNumber;

use std::cmp;

use crate::constants::Side;
use crate::display::context::{
    calculate_after_context, calculate_before_context, opposite_positions,
};
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

    // Calculate the maximum line number width for alignment
    let lhs_line_nums_width = format_line_num(lhs_src.max_line()).len();
    let rhs_line_nums_width = format_line_num(rhs_src.max_line()).len();
    let column_width = cmp::max(lhs_line_nums_width, rhs_line_nums_width);

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

        let mut lhs_previous: Option<usize> = None;

        // Print the before context
        let (mut previous_lhs_line_nbr, mut previous_rhs_line_nbr) = print_before_lines(
            display_options,
            &lhs_colored_lines,
            &opposite_to_lhs,
            &opposite_to_rhs,
            column_width,
            &hunk_lines,
            &mut None,
            0,
            3,
        );

        let mut chunk_start = 0;
        loop {
            // print gaps
            let (lhs_line, rhs_line) = &hunk_lines[chunk_start];

            if previous_lhs_line_nbr > 0 && previous_rhs_line_nbr > 0 {
                let diff = match (lhs_line, rhs_line) {
                    (Some(lhs), Some(rhs)) => {
                        cmp::min(
                            lhs.as_usize() - previous_lhs_line_nbr,
                            rhs.as_usize() - previous_rhs_line_nbr,
                        ) - 1
                    }
                    (Some(lhs), None) => lhs.as_usize() - previous_lhs_line_nbr - 1,
                    (None, Some(rhs)) => rhs.as_usize() - previous_rhs_line_nbr - 1,
                    (None, None) => panic!("somethings wrong"),
                };

                if chunk_start > 0 && diff > 0 {
                    (previous_lhs_line_nbr, previous_rhs_line_nbr) = print_before_lines(
                        display_options,
                        &lhs_colored_lines,
                        &opposite_to_lhs,
                        &opposite_to_rhs,
                        column_width,
                        &hunk_lines,
                        &mut lhs_previous,
                        chunk_start,
                        diff,
                    );
                }
            }

            // print lhs lines
            let mut last_lhs_line_nbr: usize = 0;
            let mut lhs_chunk = chunk_start;
            while let (Some(line_nbr), _) = hunk_lines[lhs_chunk] {
                if lhs_chunk >= hunk_lines.len()
                    // This is for subline changes
                    || !hunk.novel_lhs.contains(&line_nbr)
                    // This is when the new line is a new chunk
                    || last_lhs_line_nbr != 0 && line_nbr.as_usize() > last_lhs_line_nbr + 1
                {
                    break;
                }
                print!(
                    "{}{}",
                    apply_combine_line_number(
                        Some(line_nbr),
                        None,
                        false,
                        column_width,
                        display_options
                    ),
                    &lhs_colored_lines[line_nbr.as_usize()],
                );
                lhs_chunk += 1;
                last_lhs_line_nbr = line_nbr.as_usize();
                previous_lhs_line_nbr = line_nbr.as_usize();
                if lhs_chunk >= hunk_lines.len() {
                    break;
                }
            }

            // print rhs lines
            let mut last_rhs_line_nbr: usize = 0;
            let mut rhs_chunk = chunk_start;
            while let (_, Some(line_nbr)) = hunk_lines[rhs_chunk] {
                if rhs_chunk >= hunk_lines.len()
                    // This is for subline changes
                    || !hunk.novel_rhs.contains(&line_nbr)
                    // This is when the new line is a new chunk
                    || last_rhs_line_nbr > 0 && line_nbr.as_usize() > last_rhs_line_nbr + 1
                {
                    break;
                }
                print!(
                    "{}{}",
                    apply_combine_line_number(
                        None,
                        Some(line_nbr),
                        false,
                        column_width,
                        display_options
                    ),
                    &rhs_colored_lines[line_nbr.as_usize()],
                );
                rhs_chunk += 1;
                last_rhs_line_nbr = line_nbr.as_usize();
                previous_rhs_line_nbr = line_nbr.as_usize();
                if rhs_chunk >= hunk_lines.len() {
                    break;
                }
            }
            chunk_start = cmp::max(lhs_chunk, rhs_chunk);
            if chunk_start >= hunk_lines.len() {
                break;
            }
        }

        // Print the after context
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
            lhs_src.max_line(),
            rhs_src.max_line(),
            display_options.num_context_lines as usize - 1,
        );
        for (lhs_line, rhs_line) in &after_lines {
            if let Some(rhs_line_nbr) = rhs_line {
                print!(
                    "{}{}",
                    apply_combine_line_number(
                        *lhs_line,
                        *rhs_line,
                        false,
                        column_width,
                        display_options
                    ),
                    rhs_colored_lines[rhs_line_nbr.as_usize()]
                );
            }
        }

        println!();
    }
}

fn print_before_lines(
    display_options: &DisplayOptions,
    lhs_colored_lines: &Vec<String>,
    opposite_to_lhs: &hashbrown::HashMap<
        LineNumber,
        std::collections::HashSet<LineNumber, rustc_hash::FxBuildHasher>,
        std::hash::BuildHasherDefault<rustc_hash::FxHasher>,
    >,
    opposite_to_rhs: &hashbrown::HashMap<
        LineNumber,
        std::collections::HashSet<LineNumber, rustc_hash::FxBuildHasher>,
        std::hash::BuildHasherDefault<rustc_hash::FxHasher>,
    >,
    column_width: usize,
    hunk_lines: &Vec<(Option<LineNumber>, Option<LineNumber>)>,
    lhs_previous: &mut Option<usize>,
    i: usize,
    context: usize,
) -> (usize, usize) {
    let before_lines = calculate_before_context(
        &hunk_lines[i..],
        opposite_to_lhs,
        opposite_to_rhs,
        context - 1, // somehow this print 3 line before
    );

    let mut lhs_line: Option<LineNumber> = None;
    let mut rhs_line: Option<LineNumber> = None;
    for (lhs_ln, rhs_ln) in before_lines {
        lhs_line = lhs_ln;
        rhs_line = rhs_ln;
        if let Some(lhs_line_nbr) = lhs_line {
            *lhs_previous = Some(lhs_line_nbr.as_usize());
            print!(
                "{}{}",
                apply_combine_line_number(lhs_line, rhs_line, false, column_width, display_options),
                lhs_colored_lines[lhs_line_nbr.as_usize()]
            );
        }
    }

    (
        lhs_line.unwrap_or(LineNumber::from(0)).as_usize(),
        rhs_line.unwrap_or(LineNumber::from(0)).as_usize(),
    )
}

fn apply_combine_line_number(
    lhs_line: Option<LineNumber>,
    rhs_line: Option<LineNumber>,
    is_novel: bool,
    column_width: usize,
    display_options: &DisplayOptions,
) -> String {
    let lhs_line_nbr = if let Some(lhs_line) = lhs_line {
        apply_line_number_color(
            &format_line_num_padded(lhs_line, column_width),
            is_novel,
            Side::Left,
            display_options,
        )
    } else {
        format!(
            "{:^width$}",
            ".".repeat(rhs_line.unwrap_or(0.into()).display().len()),
            width = column_width
        )
    };

    let rhs_line_nbr = if let Some(rhs_line) = rhs_line {
        apply_line_number_color(
            &format_line_num_padded(rhs_line, column_width),
            is_novel,
            Side::Right,
            display_options,
        )
    } else {
        format!(
            "{:^width$}",
            ".".repeat(lhs_line.unwrap_or(0.into()).display().len()),
            width = column_width
        )
    };

    format!("{}{}", lhs_line_nbr, rhs_line_nbr)
}
