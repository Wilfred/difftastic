//! Side-by-side (two column) display of diffs.

use atty::Stream;
use colored::{Color, Colorize};
use std::{
    cmp::max,
    collections::{HashMap, HashSet},
};

use crate::{
    context::{add_context, opposite_positions},
    hunks::{aligned_lines_from_hunk, extract_lines, Hunk},
    lines::{codepoint_len, enforce_max_length, format_line_num, LineNumber, MaxLine},
    positions::SingleLineSpan,
    style::{self, apply_colors, color_positions, split_and_apply, Style},
    syntax::{zip_pad_shorter, MatchedPos},
};

const SPACER: &str = " ";

fn term_width() -> Option<usize> {
    term_size::dimensions().map(|(w, _)| w)
}

/// Split `s` by newlines, but guarantees that the output is nonempty.
/// An empty string is considered as a single line of length zero.
fn split_lines_nonempty(s: &str) -> Vec<String> {
    if s == "" {
        return vec!["".into()];
    }

    let mut lines = vec![];
    for line in s.lines() {
        lines.push(line.into());
    }
    lines
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

fn display_width() -> usize {
    if atty::is(Stream::Stdout) {
        // If we're displaying directly to a user's terminal,
        // honour the terminal width.
        term_width().unwrap_or(80)
    } else {
        // Don't truncate the source when output is being
        // piped elsewhere. E.g. the user is using `less`.
        1000
    }
}

/// Display `src` in a single column (e.g. a file removal or addition).
fn display_single_column(src: &str, color: Color) -> String {
    let column_width = format_line_num(src.lines().count().into()).len();
    let src = enforce_max_length(src, display_width());

    let mut result = String::with_capacity(src.len());
    for (i, line) in src.lines().enumerate() {
        result.push_str(&format_line_num_padded(i.into(), column_width));
        // TODO: factor out the common styling from style::apply_colors.
        result.push_str(&line.color(color).bold().to_string());
        result.push('\n');
    }

    result
}

// TODO: Move to hunks.rs
pub fn merge_adjacent(
    hunks: &[Hunk],
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
    max_lhs_src_line: LineNumber,
    max_rhs_src_line: LineNumber,
) -> Vec<Hunk> {
    let mut res: Vec<Hunk> = vec![];
    let mut prev_hunk: Option<Hunk> = None;

    let mut prev_lhs_lines: HashSet<LineNumber> = HashSet::new();
    let mut prev_rhs_lines: HashSet<LineNumber> = HashSet::new();

    for hunk in hunks {
        let mut lhs_lines: HashSet<LineNumber> = HashSet::new();
        let mut rhs_lines: HashSet<LineNumber> = HashSet::new();

        let lines = extract_lines(hunk);
        let contextual_lines =
            add_context(&lines, lhs_mps, rhs_mps, max_lhs_src_line, max_rhs_src_line);
        for (lhs_line, rhs_line) in contextual_lines {
            if let Some(lhs_line) = lhs_line {
                lhs_lines.insert(lhs_line);
            }
            if let Some(rhs_line) = rhs_line {
                rhs_lines.insert(rhs_line);
            }
        }

        match prev_hunk {
            Some(hunk_so_far) => {
                if lhs_lines.is_disjoint(&prev_lhs_lines) && rhs_lines.is_disjoint(&prev_rhs_lines)
                {
                    // No overlaps, start a new hunk.
                    res.push(hunk_so_far.clone());
                    prev_hunk = Some(hunk.clone());

                    prev_lhs_lines = lhs_lines;
                    prev_rhs_lines = rhs_lines;
                } else {
                    // Adjacent hunks, merge.
                    prev_hunk = Some(hunk_so_far.merge(hunk));
                    prev_lhs_lines.extend(lhs_lines.iter());
                    prev_rhs_lines.extend(rhs_lines.iter());
                }
            }
            None => {
                // The very first hunk.
                prev_hunk = Some(hunk.clone());
                prev_lhs_lines = lhs_lines;
                prev_rhs_lines = rhs_lines;
            }
        }
    }

    if let Some(current_hunk) = prev_hunk {
        res.push(current_hunk);
    }

    res
}

fn display_line_nums(
    lhs_line_num: Option<LineNumber>,
    rhs_line_num: Option<LineNumber>,
    widths: &Widths,
    lhs_lines_with_novel: &HashSet<LineNumber>,
    rhs_lines_with_novel: &HashSet<LineNumber>,
    prev_lhs_line_num: Option<LineNumber>,
    prev_rhs_line_num: Option<LineNumber>,
) -> (String, String) {
    let display_lhs_line_num: String = match lhs_line_num {
        Some(line_num) => {
            let s = format_line_num_padded(line_num, widths.lhs_line_nums);
            if lhs_lines_with_novel.contains(&line_num) {
                s.bright_red().to_string()
            } else {
                s
            }
        }
        None => format_missing_line_num(
            prev_lhs_line_num.unwrap_or_else(|| 1.into()),
            widths.lhs_line_nums,
        ),
    };
    let display_rhs_line_num: String = match rhs_line_num {
        Some(line_num) => {
            let s = format_line_num_padded(line_num, widths.rhs_line_nums);
            if rhs_lines_with_novel.contains(&line_num) {
                s.bright_green().to_string()
            } else {
                s
            }
        }
        None => format_missing_line_num(
            prev_rhs_line_num.unwrap_or_else(|| 1.into()),
            widths.rhs_line_nums,
        ),
    };

    (display_lhs_line_num, display_rhs_line_num)
}

// Sizes used when displaying a hunk.
struct Widths {
    lhs_content: usize,
    rhs_content: usize,
    lhs_line_nums: usize,
    rhs_line_nums: usize,
}

impl Widths {
    fn new(
        terminal_width: usize,
        line_nums: &[(Option<LineNumber>, Option<LineNumber>)],
        lhs_src: &str,
        rhs_src: &str,
    ) -> Self {
        let lhs_lines = split_lines_nonempty(lhs_src);
        let rhs_lines = split_lines_nonempty(rhs_src);

        let mut lhs_max_line: LineNumber = 1.into();
        let mut rhs_max_line: LineNumber = 1.into();
        let mut lhs_max_content = 1;
        let mut rhs_max_content = 1;

        for (lhs_line_num, rhs_line_num) in line_nums {
            if let Some(lhs_line_num) = lhs_line_num {
                lhs_max_line = max(lhs_max_line, *lhs_line_num);
                lhs_max_content = max(lhs_max_content, codepoint_len(&lhs_lines[lhs_line_num.0]));
            }
            if let Some(rhs_line_num) = rhs_line_num {
                rhs_max_line = max(rhs_max_line, *rhs_line_num);
                rhs_max_content = max(rhs_max_content, codepoint_len(&rhs_lines[rhs_line_num.0]));
            }
        }

        let lhs_line_nums_width = format_line_num(lhs_max_line).len();
        let rhs_line_nums_width = format_line_num(lhs_max_line).len();

        let lhs_total_width = (terminal_width - SPACER.len()) / 2;
        let lhs_content_width = lhs_total_width - lhs_line_nums_width;
        let rhs_content_width =
            terminal_width - lhs_total_width - SPACER.len() - rhs_line_nums_width;

        Self {
            lhs_content: lhs_content_width,
            rhs_content: rhs_content_width,
            lhs_line_nums: lhs_line_nums_width,
            rhs_line_nums: rhs_line_nums_width,
        }
    }
}

pub fn display_hunks(
    hunks: &[Hunk],
    display_path: &str,
    lang_name: &str,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> String {
    if lhs_src == "" {
        return display_single_column(rhs_src, Color::BrightGreen);
    }
    if rhs_src == "" {
        return display_single_column(lhs_src, Color::BrightRed);
    }

    let mut lhs_styles: HashMap<LineNumber, Vec<(SingleLineSpan, Style)>> = HashMap::new();
    for (span, style) in color_positions(true, lhs_mps) {
        let styles = lhs_styles.entry(span.line).or_insert_with(Vec::new);
        styles.push((span, style));
    }

    let mut rhs_styles: HashMap<LineNumber, Vec<(SingleLineSpan, Style)>> = HashMap::new();
    for (span, style) in color_positions(false, rhs_mps) {
        let styles = rhs_styles.entry(span.line).or_insert_with(Vec::new);
        styles.push((span, style));
    }

    let lhs_colored_src = apply_colors(lhs_src, true, lhs_mps);
    let rhs_colored_src = apply_colors(rhs_src, false, rhs_mps);

    let lhs_lines = split_lines_nonempty(lhs_src);
    let rhs_lines = split_lines_nonempty(rhs_src);
    let lhs_colored_lines = split_lines_nonempty(&lhs_colored_src);
    let rhs_colored_lines = split_lines_nonempty(&rhs_colored_src);

    let lhs_lines_with_novel: HashSet<LineNumber> = lhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();
    let rhs_lines_with_novel: HashSet<LineNumber> = rhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();

    let mut prev_lhs_line_num = None;
    let mut prev_rhs_line_num = None;

    let mut out_lines: Vec<String> = vec![];

    for (i, hunk) in hunks.iter().enumerate() {
        out_lines.push(style::header(display_path, i + 1, hunks.len(), lang_name));

        let matched_rhs_lines = opposite_positions(lhs_mps);
        let aligned_lines = aligned_lines_from_hunk(
            hunk,
            lhs_mps,
            rhs_mps,
            lhs_src.max_line(),
            rhs_src.max_line(),
            &matched_rhs_lines,
        );
        let no_lhs_changes = hunk.lines.iter().all(|(l, _)| l.is_none());
        let no_rhs_changes = hunk.lines.iter().all(|(_, r)| r.is_none());

        let widths = Widths::new(term_width().unwrap_or(80), &aligned_lines, lhs_src, rhs_src);
        for (lhs_line_num, rhs_line_num) in aligned_lines {
            let (display_lhs_line_num, display_rhs_line_num) = display_line_nums(
                lhs_line_num,
                rhs_line_num,
                &widths,
                &lhs_lines_with_novel,
                &rhs_lines_with_novel,
                prev_lhs_line_num,
                prev_rhs_line_num,
            );

            if no_lhs_changes {
                let rhs_line = &rhs_colored_lines[rhs_line_num.expect("Should have RHS line").0];
                out_lines.push(format!(
                    "{}{}{}",
                    display_lhs_line_num, display_rhs_line_num, rhs_line
                ));
                continue;
            }
            if no_rhs_changes {
                let lhs_line = &lhs_colored_lines[lhs_line_num.expect("Should have LHS line").0];
                out_lines.push(format!(
                    "{}{}{}",
                    display_lhs_line_num, display_rhs_line_num, lhs_line
                ));
                continue;
            }

            let lhs_line = match lhs_line_num {
                Some(lhs_line_num) => split_and_apply(
                    &lhs_lines[lhs_line_num.0],
                    widths.lhs_content,
                    lhs_styles.get(&lhs_line_num).unwrap_or(&vec![]),
                ),
                None => vec![" ".repeat(widths.lhs_content)],
            };
            let rhs_line = match rhs_line_num {
                Some(rhs_line_num) => split_and_apply(
                    &rhs_lines[rhs_line_num.0],
                    widths.rhs_content,
                    rhs_styles.get(&rhs_line_num).unwrap_or(&vec![]),
                ),
                None => vec!["".into()],
            };

            for (i, (lhs_line, rhs_line)) in zip_pad_shorter(&lhs_line, &rhs_line)
                .into_iter()
                .enumerate()
            {
                let lhs_line = lhs_line.unwrap_or(" ".repeat(widths.rhs_content));
                let rhs_line = rhs_line.unwrap_or("".into());
                let lhs_num: String = if i == 0 {
                    display_lhs_line_num.clone()
                } else {
                    let mut s = format_missing_line_num(
                        lhs_line_num.unwrap_or(prev_lhs_line_num.unwrap_or(10.into())),
                        widths.lhs_line_nums,
                    );
                    if let Some(line_num) = lhs_line_num {
                        if lhs_lines_with_novel.contains(&line_num) {
                            s = s.bright_red().to_string()
                        }
                    }
                    s
                };
                let rhs_num: String = if i == 0 {
                    display_rhs_line_num.clone()
                } else {
                    let mut s = format_missing_line_num(
                        rhs_line_num.unwrap_or(prev_rhs_line_num.unwrap_or(10.into())),
                        widths.rhs_line_nums,
                    );
                    if let Some(line_num) = rhs_line_num {
                        if rhs_lines_with_novel.contains(&line_num) {
                            s = s.bright_green().to_string();
                        }
                    }
                    s
                };

                out_lines.push(format!(
                    "{}{}{}{}{}",
                    lhs_num, lhs_line, SPACER, rhs_num, rhs_line
                ));
            }

            if lhs_line_num.is_some() {
                prev_lhs_line_num = lhs_line_num;
            }
            if rhs_line_num.is_some() {
                prev_rhs_line_num = rhs_line_num;
            }
        }
        out_lines.push("".into());
    }

    out_lines.join("\n")
}
