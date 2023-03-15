//! Side-by-side (two column) display of diffs.

use owo_colors::{OwoColorize, Style};
use rustc_hash::FxHashMap;
use std::{
    cmp::{max, min},
    collections::HashSet,
};

use crate::{
    constants::Side,
    display::context::all_matched_lines_filled,
    display::hunks::{matched_lines_indexes_for_hunk, Hunk},
    display::style::{
        self, apply_colors, apply_line_number_color, color_positions, novel_style, split_and_apply,
        BackgroundColor,
    },
    lines::{codepoint_len, format_line_num, split_on_newlines, LineNumber},
    options::{DisplayMode, DisplayOptions},
    parse::syntax::{zip_pad_shorter, MatchedPos},
    positions::SingleLineSpan,
    summary::FileFormat,
};

const SPACER: &str = " ";

fn format_line_num_padded(line_num: LineNumber, column_width: usize) -> String {
    format!(
        "{:width$} ",
        line_num.one_indexed(),
        width = column_width - 1
    )
}

fn format_missing_line_num(
    prev_num: LineNumber,
    source_dims: &SourceDimensions,
    side: Side,
    use_color: bool,
) -> String {
    let column_width = match side {
        Side::Left => source_dims.lhs_line_nums_width,
        Side::Right => source_dims.rhs_line_nums_width,
    };

    let after_end = match side {
        Side::Left => prev_num >= source_dims.lhs_max_line,
        Side::Right => prev_num >= source_dims.rhs_max_line,
    };

    let mut style = Style::new();
    if use_color {
        style = style.dimmed();
    }

    let num_digits = format!("{}", prev_num.one_indexed()).len();
    format!(
        "{:>width$} ",
        (if after_end { " " } else { "." }).repeat(num_digits),
        width = column_width - 1
    )
    .style(style)
    .to_string()
}

/// Display `src` in a single column (e.g. a file removal or addition).
fn display_single_column(
    lhs_display_path: &str,
    rhs_display_path: &str,
    file_format: &FileFormat,
    src_lines: &[String],
    side: Side,
    display_options: &DisplayOptions,
) -> Vec<String> {
    let column_width = format_line_num((src_lines.len() as u32).into()).len();

    let mut result = Vec::with_capacity(src_lines.len());

    let mut header_line = String::new();
    header_line.push_str(&style::header(
        lhs_display_path,
        rhs_display_path,
        1,
        1,
        file_format,
        display_options,
    ));
    header_line.push('\n');
    result.push(header_line);

    let mut style = Style::new();
    if display_options.use_color {
        style = novel_style(Style::new(), side, display_options.background_color);
    }

    for (i, line) in src_lines.iter().enumerate() {
        let mut formatted_line = String::with_capacity(line.len());
        formatted_line.push_str(
            &format_line_num_padded((i as u32).into(), column_width)
                .style(style)
                .to_string(),
        );
        formatted_line.push_str(line);
        result.push(formatted_line);
    }

    result
}

fn display_line_nums(
    lhs_line_num: Option<LineNumber>,
    rhs_line_num: Option<LineNumber>,
    source_dims: &SourceDimensions,
    display_options: &DisplayOptions,
    lhs_has_novel: bool,
    rhs_has_novel: bool,
    prev_lhs_line_num: Option<LineNumber>,
    prev_rhs_line_num: Option<LineNumber>,
) -> (String, String) {
    let display_lhs_line_num: String = match lhs_line_num {
        Some(line_num) => {
            let s = format_line_num_padded(line_num, source_dims.lhs_line_nums_width);
            apply_line_number_color(&s, lhs_has_novel, Side::Left, display_options)
        }
        None => format_missing_line_num(
            prev_lhs_line_num.unwrap_or_else(|| 1.into()),
            source_dims,
            Side::Left,
            display_options.use_color,
        ),
    };
    let display_rhs_line_num: String = match rhs_line_num {
        Some(line_num) => {
            let s = format_line_num_padded(line_num, source_dims.rhs_line_nums_width);
            apply_line_number_color(&s, rhs_has_novel, Side::Right, display_options)
        }
        None => format_missing_line_num(
            prev_rhs_line_num.unwrap_or_else(|| 1.into()),
            source_dims,
            Side::Right,
            display_options.use_color,
        ),
    };

    (display_lhs_line_num, display_rhs_line_num)
}

// Sizes used when displaying a hunk.
#[derive(Debug)]
struct SourceDimensions {
    /// The number of characters used to display source lines. Any
    /// line that exceeds this length will be wrapped.
    content_width: usize,
    /// The number of characters required to display line numbers on
    /// the LHS.
    lhs_line_nums_width: usize,
    /// The number of characters required to display line numbers on
    /// the RHS.
    rhs_line_nums_width: usize,
    /// The highest line number in the LHS source.
    lhs_max_line: LineNumber,
    /// The highest line number in the RHS source.
    rhs_max_line: LineNumber,
}

impl SourceDimensions {
    fn new(
        terminal_width: usize,
        line_nums: &[(Option<LineNumber>, Option<LineNumber>)],
        lhs_lines: &[&str],
        rhs_lines: &[&str],
    ) -> Self {
        let mut lhs_max_line: LineNumber = 1.into();
        let mut rhs_max_line: LineNumber = 1.into();
        let mut lhs_max_content = 1;
        let mut rhs_max_content = 1;

        for (lhs_line_num, rhs_line_num) in line_nums {
            if let Some(lhs_line_num) = lhs_line_num {
                lhs_max_line = max(lhs_max_line, *lhs_line_num);
                lhs_max_content = max(
                    lhs_max_content,
                    codepoint_len(lhs_lines[lhs_line_num.as_usize()]),
                );
            }
            if let Some(rhs_line_num) = rhs_line_num {
                rhs_max_line = max(rhs_max_line, *rhs_line_num);
                rhs_max_content = max(
                    rhs_max_content,
                    codepoint_len(rhs_lines[rhs_line_num.as_usize()]),
                );
            }
        }

        let lhs_line_nums_width = format_line_num(lhs_max_line).len();
        let rhs_line_nums_width = format_line_num(rhs_max_line).len();

        let lhs_total_width = (terminal_width - SPACER.len()) / 2;

        let lhs_content_width = if lhs_line_nums_width < lhs_total_width {
            lhs_total_width - lhs_line_nums_width
        } else {
            // The terminal is so narrow that even the column numbers
            // display doesn't fit. Ensure we show a non-zero number
            // of content columns anyway.
            1
        };

        let rhs_content_width = max(
            1,
            terminal_width as isize
                - lhs_total_width as isize
                - SPACER.len() as isize
                - rhs_line_nums_width as isize,
        ) as usize;

        // We want the content width to be the same on both
        // sides. This ensures that line wrapping splits lines at the
        // same point on both sides.
        let content_width = min(lhs_content_width, rhs_content_width);

        Self {
            content_width,
            lhs_line_nums_width,
            rhs_line_nums_width,
            lhs_max_line,
            rhs_max_line,
        }
    }
}

pub fn lines_with_novel(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> (HashSet<LineNumber>, HashSet<LineNumber>) {
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

    (lhs_lines_with_novel, rhs_lines_with_novel)
}

/// Calculate positions of highlights on both sides. This includes
/// both syntax highlighting and added/removed content highlighting.
fn highlight_positions(
    background: BackgroundColor,
    syntax_highlight: bool,
    file_format: &FileFormat,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> (
    FxHashMap<LineNumber, Vec<(SingleLineSpan, Style)>>,
    FxHashMap<LineNumber, Vec<(SingleLineSpan, Style)>>,
) {
    let lhs_positions = color_positions(
        Side::Left,
        background,
        syntax_highlight,
        file_format,
        lhs_mps,
    );
    // Preallocate the hashmap assuming the average line will have 2 items on it.
    let mut lhs_styles: FxHashMap<LineNumber, Vec<(SingleLineSpan, Style)>> = FxHashMap::default();
    for (span, style) in lhs_positions {
        let styles = lhs_styles.entry(span.line).or_insert_with(Vec::new);
        styles.push((span, style));
    }

    let rhs_positions = color_positions(
        Side::Right,
        background,
        syntax_highlight,
        file_format,
        rhs_mps,
    );
    let mut rhs_styles: FxHashMap<LineNumber, Vec<(SingleLineSpan, Style)>> = FxHashMap::default();
    for (span, style) in rhs_positions {
        let styles = rhs_styles.entry(span.line).or_insert_with(Vec::new);
        styles.push((span, style));
    }

    (lhs_styles, rhs_styles)
}

fn highlight_as_novel(
    line_num: Option<LineNumber>,
    lines: &[&str],
    opposite_line_num: Option<LineNumber>,
    lines_with_novel: &HashSet<LineNumber>,
) -> bool {
    if let Some(line_num) = line_num {
        // If this line contains any novel tokens, highlight it.
        if lines_with_novel.contains(&line_num) {
            return true;
        }

        let line_content = lines.get(line_num.as_usize()).map(|s| str::trim(s));
        // If this is a blank line without a corresponding line on the
        // other side, highlight it too. This helps highlight novel
        // blank lines.
        if line_content == Some("") && opposite_line_num.is_none() {
            return true;
        }
    }

    false
}

pub fn print(
    hunks: &[Hunk],
    display_options: &DisplayOptions,
    lhs_display_path: &str,
    rhs_display_path: &str,
    file_format: &FileFormat,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
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
                .iter()
                .map(|s| format!("{}\n", s))
                .collect(),
            split_on_newlines(rhs_src)
                .iter()
                .map(|s| format!("{}\n", s))
                .collect(),
        )
    };

    if lhs_src.is_empty() {
        for line in display_single_column(
            lhs_display_path,
            rhs_display_path,
            file_format,
            &rhs_colored_lines,
            Side::Right,
            display_options,
        ) {
            print!("{}", line);
        }
        println!();
        return;
    }
    if rhs_src.is_empty() {
        for line in display_single_column(
            lhs_display_path,
            rhs_display_path,
            file_format,
            &lhs_colored_lines,
            Side::Left,
            display_options,
        ) {
            print!("{}", line);
        }
        println!();
        return;
    }

    // TODO: this is largely duplicating the `apply_colors` logic.
    let (lhs_highlights, rhs_highlights) = if display_options.use_color {
        highlight_positions(
            display_options.background_color,
            display_options.syntax_highlight,
            file_format,
            lhs_mps,
            rhs_mps,
        )
    } else {
        (FxHashMap::default(), FxHashMap::default())
    };

    let (lhs_lines_with_novel, rhs_lines_with_novel) = lines_with_novel(lhs_mps, rhs_mps);

    let mut prev_lhs_line_num = None;
    let mut prev_rhs_line_num = None;

    let lhs_lines = split_on_newlines(lhs_src);
    let rhs_lines = split_on_newlines(rhs_src);
    let matched_lines = all_matched_lines_filled(lhs_mps, rhs_mps, &lhs_lines, &rhs_lines);
    let mut matched_lines_to_print = &matched_lines[..];

    for (i, hunk) in hunks.iter().enumerate() {
        println!(
            "{}",
            style::header(
                lhs_display_path,
                rhs_display_path,
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
        // We iterate through hunks in order, so we know the next hunk
        // must appear after start_i. This makes
        // `matched_lines_indexes_for_hunk` faster on later
        // iterations, and this function is hot on large textual
        // diffs.
        matched_lines_to_print = &matched_lines_to_print[start_i..];

        let no_lhs_changes = hunk.novel_lhs.is_empty();
        let no_rhs_changes = hunk.novel_rhs.is_empty();
        let same_lines = aligned_lines.iter().all(|(l, r)| l == r);

        let source_dims = SourceDimensions::new(
            display_options.display_width,
            aligned_lines,
            &lhs_lines,
            &rhs_lines,
        );
        for (lhs_line_num, rhs_line_num) in aligned_lines {
            let lhs_line_novel = highlight_as_novel(
                *lhs_line_num,
                &lhs_lines,
                *rhs_line_num,
                &lhs_lines_with_novel,
            );
            let rhs_line_novel = highlight_as_novel(
                *rhs_line_num,
                &rhs_lines,
                *lhs_line_num,
                &rhs_lines_with_novel,
            );

            let (display_lhs_line_num, display_rhs_line_num) = display_line_nums(
                *lhs_line_num,
                *rhs_line_num,
                &source_dims,
                display_options,
                lhs_line_novel,
                rhs_line_novel,
                prev_lhs_line_num,
                prev_rhs_line_num,
            );

            let show_both = matches!(
                display_options.display_mode,
                DisplayMode::SideBySideShowBoth
            );
            if no_lhs_changes && !show_both {
                match rhs_line_num {
                    Some(rhs_line_num) => {
                        let rhs_line = &rhs_colored_lines[rhs_line_num.as_usize()];
                        if same_lines {
                            print!("{}{}", display_rhs_line_num, rhs_line);
                        } else {
                            print!(
                                "{}{}{}",
                                display_lhs_line_num, display_rhs_line_num, rhs_line
                            );
                        }
                    }
                    None => {
                        // We didn't have any changed RHS lines in the
                        // hunk, but we had some contextual lines that
                        // only occurred on the LHS (e.g. extra newlines).
                        println!("{}{}", display_lhs_line_num, display_rhs_line_num);
                    }
                }
            } else if no_rhs_changes && !show_both {
                match lhs_line_num {
                    Some(lhs_line_num) => {
                        let lhs_line = &lhs_colored_lines[lhs_line_num.as_usize()];
                        if same_lines {
                            print!("{}{}", display_lhs_line_num, lhs_line);
                        } else {
                            print!(
                                "{}{}{}",
                                display_lhs_line_num, display_rhs_line_num, lhs_line
                            );
                        }
                    }
                    None => {
                        println!("{}{}", display_lhs_line_num, display_rhs_line_num);
                    }
                }
            } else {
                let lhs_line = match lhs_line_num {
                    Some(lhs_line_num) => split_and_apply(
                        lhs_lines[lhs_line_num.as_usize()],
                        source_dims.content_width,
                        display_options.tab_width,
                        lhs_highlights.get(lhs_line_num).unwrap_or(&vec![]),
                        Side::Left,
                    ),
                    None => vec![" ".repeat(source_dims.content_width)],
                };
                let rhs_line = match rhs_line_num {
                    Some(rhs_line_num) => split_and_apply(
                        rhs_lines[rhs_line_num.as_usize()],
                        source_dims.content_width,
                        display_options.tab_width,
                        rhs_highlights.get(rhs_line_num).unwrap_or(&vec![]),
                        Side::Right,
                    ),
                    None => vec!["".into()],
                };

                for (i, (lhs_line, rhs_line)) in zip_pad_shorter(&lhs_line, &rhs_line)
                    .into_iter()
                    .enumerate()
                {
                    let lhs_line =
                        lhs_line.unwrap_or_else(|| " ".repeat(source_dims.content_width));
                    let rhs_line = rhs_line.unwrap_or_else(|| "".into());
                    let lhs_num: String = if i == 0 {
                        display_lhs_line_num.clone()
                    } else {
                        let mut s = format_missing_line_num(
                            lhs_line_num
                                .unwrap_or_else(|| prev_lhs_line_num.unwrap_or_else(|| 10.into())),
                            &source_dims,
                            Side::Left,
                            display_options.use_color,
                        );
                        if let Some(line_num) = lhs_line_num {
                            s = apply_line_number_color(
                                &s,
                                lhs_lines_with_novel.contains(line_num),
                                Side::Left,
                                display_options,
                            );
                        }
                        s
                    };
                    let rhs_num: String = if i == 0 {
                        display_rhs_line_num.clone()
                    } else {
                        let mut s = format_missing_line_num(
                            rhs_line_num
                                .unwrap_or_else(|| prev_rhs_line_num.unwrap_or_else(|| 10.into())),
                            &source_dims,
                            Side::Right,
                            display_options.use_color,
                        );
                        if let Some(line_num) = rhs_line_num {
                            s = apply_line_number_color(
                                &s,
                                rhs_lines_with_novel.contains(line_num),
                                Side::Right,
                                display_options,
                            );
                        }
                        s
                    };

                    println!("{}{}{}{}{}", lhs_num, lhs_line, SPACER, rhs_num, rhs_line);
                }
            }

            if lhs_line_num.is_some() {
                prev_lhs_line_num = *lhs_line_num;
            }
            if rhs_line_num.is_some() {
                prev_rhs_line_num = *rhs_line_num;
            }
        }
        println!();
    }
}

#[cfg(test)]
mod tests {
    use crate::{
        parse::guess_language::Language,
        syntax::{AtomKind, MatchKind, TokenKind},
    };

    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn test_width_calculations() {
        let line_nums = [(Some(1.into()), Some(10.into()))];
        let source_dims = SourceDimensions::new(
            80,
            &line_nums,
            &split_on_newlines("foo\nbar\n"),
            &split_on_newlines("x\nx\nx\nx\nx\nx\nx\nx\nx\nx\nx\n"),
        );

        assert_eq!(source_dims.lhs_line_nums_width, 2);
        assert_eq!(source_dims.rhs_line_nums_width, 3);
    }

    #[test]
    fn test_format_missing_line_num() {
        let source_dims = SourceDimensions::new(
            80,
            &[
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
            ],
            &split_on_newlines("foo\nbar\n"),
            &split_on_newlines("fox\nbax\n"),
        );

        assert_eq!(
            format_missing_line_num(0.into(), &source_dims, Side::Left, true),
            ". ".dimmed().to_string()
        );
        assert_eq!(
            format_missing_line_num(0.into(), &source_dims, Side::Left, false),
            ". ".to_string()
        );
    }

    #[test]
    fn test_format_missing_line_num_at_end() {
        let source_dims = SourceDimensions::new(
            80,
            &[
                (Some(0.into()), Some(0.into())),
                (Some(1.into()), Some(1.into())),
            ],
            &split_on_newlines("foo\nbar\n"),
            &split_on_newlines("fox\nbax\n"),
        );

        assert_eq!(
            format_missing_line_num(1.into(), &source_dims, Side::Left, true),
            "  ".dimmed().to_string()
        );
        assert_eq!(
            format_missing_line_num(1.into(), &source_dims, Side::Left, false),
            "  ".to_string()
        );
    }

    #[test]
    fn test_display_single_column() {
        // Basic smoke test.
        let res_lines = display_single_column(
            "foo.py",
            "foo.py",
            &FileFormat::SupportedLanguage(Language::Python),
            &["print(123)\n".to_string()],
            Side::Right,
            &DisplayOptions::default(),
        );
        let res = res_lines.join("");
        assert!(res.len() > 10);
    }

    #[test]
    fn test_display_hunks() {
        // Simulate diffing:
        //
        // Old:
        // foo
        //
        // New:
        // bar
        let lhs_mps = [MatchedPos {
            kind: MatchKind::Novel {
                highlight: TokenKind::Atom(AtomKind::Normal),
            },
            pos: SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 3,
            },
        }];

        let rhs_mps = [MatchedPos {
            kind: MatchKind::Novel {
                highlight: TokenKind::Atom(AtomKind::Normal),
            },
            pos: SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 3,
            },
        }];

        let mut novel_lhs = HashSet::new();
        novel_lhs.insert(0.into());
        let mut novel_rhs = HashSet::new();
        novel_rhs.insert(0.into());

        let hunks = [Hunk {
            novel_lhs,
            novel_rhs,
            lines: vec![(Some(0.into()), Some(0.into()))],
        }];

        // Simple smoke test.
        print(
            &hunks,
            &DisplayOptions::default(),
            "foo-old.el",
            "foo-new.el",
            &FileFormat::SupportedLanguage(Language::EmacsLisp),
            "foo",
            "bar",
            &lhs_mps,
            &rhs_mps,
        );
    }
}
