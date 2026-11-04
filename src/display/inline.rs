//! Inline, or "unified" diff display.

use line_numbers::LineNumber;

use crate::constants::Side;
use crate::display::context::{
    all_matched_lines_filled, calculate_after_context, calculate_before_context, opposite_positions,
};
use crate::display::hunks::{extract_lines, matched_lines_indexes_for_hunk, Hunk};
use crate::display::side_by_side::lines_with_novel;
use crate::display::style::{self, apply_colors, apply_line_number_color};
use crate::hash::DftHashSet;
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

    // Calculate the maximum line number width for alignment and context.
    let lhs_max_line = lhs_src.max_line();
    let rhs_max_line = rhs_src.max_line();
    let lhs_line_nums_width = format_line_num(lhs_max_line).len();
    let rhs_line_nums_width = format_line_num(rhs_max_line).len();

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

        let hunk_lines = extract_lines(hunk);

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
            lhs_max_line,
            rhs_max_line,
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
                let is_novel = hunk.novel_lhs.contains(lhs_line);
                print!(
                    "{}   {}",
                    apply_line_number_color(
                        &format_line_num_padded(*lhs_line, lhs_line_nums_width),
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
                        &format_line_num_padded(*rhs_line, rhs_line_nums_width),
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

struct SourceSide<'a> {
    line_nums_width: usize,
    lines_with_novel: &'a DftHashSet<LineNumber>,
    colored_lines: &'a [String],
}

fn print_side_line(
    line: LineNumber,
    side: Side,
    lhs_info: &SourceSide,
    rhs_info: &SourceSide,
    display_options: &DisplayOptions,
) {
    let (own_info, other_info) = match side {
        Side::Left => (lhs_info, rhs_info),
        Side::Right => (rhs_info, lhs_info),
    };

    let line_num = apply_line_number_color(
        &format_line_num_padded(line, own_info.line_nums_width),
        own_info.lines_with_novel.contains(&line),
        side,
        display_options,
    );
    let other_gutter = " ".repeat(other_info.line_nums_width);

    match side {
        Side::Left => print!(
            "{}{}  {}",
            line_num,
            other_gutter,
            own_info.colored_lines[line.as_usize()]
        ),
        Side::Right => print!(
            "{}{}  {}",
            other_gutter,
            line_num,
            own_info.colored_lines[line.as_usize()]
        ),
    }
}

fn print_groups(
    lhs_group: &mut Vec<LineNumber>,
    rhs_group: &mut Vec<LineNumber>,
    lhs_info: &SourceSide,
    rhs_info: &SourceSide,
    display_options: &DisplayOptions,
) {
    for lhs_line in lhs_group.iter() {
        print_side_line(*lhs_line, Side::Left, lhs_info, rhs_info, display_options);
    }
    lhs_group.clear();

    for rhs_line in rhs_group.iter() {
        print_side_line(*rhs_line, Side::Right, lhs_info, rhs_info, display_options);
    }
    rhs_group.clear();
}

pub(crate) fn print_unified(
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

    let mut lhs_lines = split_on_newlines(lhs_src).collect::<Vec<_>>();
    if lhs_lines.last() == Some(&"") && lhs_lines.len() > 1 {
        lhs_lines.pop();
    }

    let mut rhs_lines = split_on_newlines(rhs_src).collect::<Vec<_>>();
    if rhs_lines.last() == Some(&"") && rhs_lines.len() > 1 {
        rhs_lines.pop();
    }

    let (lhs_lines_with_novel, rhs_lines_with_novel) = lines_with_novel(lhs_mps, rhs_mps);
    let matched_lines = all_matched_lines_filled(lhs_mps, rhs_mps, &lhs_lines, &rhs_lines);
    let mut matched_lines_to_print = &matched_lines[..];

    let lhs_info = SourceSide {
        colored_lines: &lhs_colored_lines,
        lines_with_novel: &lhs_lines_with_novel,
        line_nums_width: format_line_num(lhs_src.max_line()).len(),
    };
    let rhs_info = SourceSide {
        colored_lines: &rhs_colored_lines,
        lines_with_novel: &rhs_lines_with_novel,
        line_nums_width: format_line_num(rhs_src.max_line()).len(),
    };

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

        let (start_i, end_i) = matched_lines_indexes_for_hunk(
            matched_lines_to_print,
            hunk,
            display_options.num_context_lines as usize,
        );
        let aligned_lines = &matched_lines_to_print[start_i..end_i];
        matched_lines_to_print = &matched_lines_to_print[start_i..];

        let mut lhs_group: Vec<LineNumber> = vec![];
        let mut rhs_group: Vec<LineNumber> = vec![];

        for (lhs_line, rhs_line) in aligned_lines {
            let lhs_novel = lhs_line.map_or(false, |l| lhs_lines_with_novel.contains(&l));
            let rhs_novel = rhs_line.map_or(false, |r| rhs_lines_with_novel.contains(&r));

            match (lhs_line, rhs_line) {
                (Some(lhs_line), Some(rhs_line))
                    // Note the equality check, which is necessary when lhs/rhs
                    // are deemed aligned which sometimes includes different content
                    // due to `--ignore-comments` or whitespace. For inline, we want
                    // to display any such discrepancies at least for context.
                    if !lhs_novel
                        && !rhs_novel
                        && lhs_lines[lhs_line.as_usize()] == rhs_lines[rhs_line.as_usize()] =>
                {
                    print_groups(
                        &mut lhs_group,
                        &mut rhs_group,
                        &lhs_info,
                        &rhs_info,
                        display_options,
                    );
                    print!(
                        "{}{}  {}",
                        apply_line_number_color(
                            &format_line_num_padded(*lhs_line, lhs_info.line_nums_width),
                            false,
                            Side::Left,
                            display_options,
                        ),
                        apply_line_number_color(
                            &format_line_num_padded(*rhs_line, rhs_info.line_nums_width),
                            false,
                            Side::Right,
                            display_options,
                        ),
                        rhs_info.colored_lines[rhs_line.as_usize()]
                    );
                }
                _ => {
                    if let Some(lhs_line) = lhs_line {
                        lhs_group.push(*lhs_line);
                    }
                    if let Some(rhs_line) = rhs_line {
                        rhs_group.push(*rhs_line);
                    }
                }
            }
        }
        print_groups(
            &mut lhs_group,
            &mut rhs_group,
            &lhs_info,
            &rhs_info,
            display_options,
        );

        println!();
    }
}
