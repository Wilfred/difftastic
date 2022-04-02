//! Display output as a valid 'unified' format patch.

use std::collections::HashSet;

use owo_colors::OwoColorize;

use crate::{
    constants::Side,
    context::all_matched_lines_filled,
    hunks::{matched_lines_for_hunk, Hunk},
    lines::LineNumber,
    side_by_side::split_on_newlines,
    style::{apply_colors, BackgroundColor},
    syntax::{MatchKind, MatchedPos},
};

fn print_file_header(lhs_path: &str, rhs_path: &str, use_color: bool) {
    let mut lhs_path_pretty = format!("--- {}", lhs_path);
    if use_color {
        lhs_path_pretty = lhs_path_pretty.yellow().bold().to_string();
    }
    let mut rhs_path_pretty = format!("+++ {}", rhs_path);
    if use_color {
        rhs_path_pretty = rhs_path_pretty.yellow().bold().to_string();
    }
    println!("{}", lhs_path_pretty);
    println!("{}", rhs_path_pretty);
}

fn print_hunk_header(aligned_lines: &[(Option<LineNumber>, Option<LineNumber>)]) {
    let mut min_lhs = None;
    let mut lhs_count = 0;
    for (lhs_line, _) in aligned_lines {
        if lhs_line.is_some() {
            if min_lhs.is_none() {
                min_lhs = *lhs_line;
            }
            lhs_count += 1;
        }
    }

    let mut min_rhs = None;
    let mut rhs_count = 0;
    for (_, rhs_line) in aligned_lines {
        if rhs_line.is_some() {
            if min_rhs.is_none() {
                min_rhs = *rhs_line;
            }
            rhs_count += 1;
        }
    }

    let lhs_line_num = match min_lhs {
        Some(lhs_line) => lhs_line.one_indexed(),
        None => 0,
    };
    let rhs_line_num = match min_rhs {
        Some(rhs_line) => rhs_line.one_indexed(),
        None => 0,
    };

    let hunk_summary = format!(
        "@@ -{}{} +{}{} @@",
        lhs_line_num,
        if lhs_count == 1 {
            "".to_owned()
        } else {
            format!(",{}", lhs_count)
        },
        rhs_line_num,
        if rhs_count == 1 {
            "".to_owned()
        } else {
            format!(",{}", rhs_count)
        },
    );
    println!("{}", hunk_summary.yellow().bold());
}

// The index of the first and last novel item in `lines`.
fn novel_boundaries(
    lines: &[(Option<LineNumber>, Option<LineNumber>)],
    novel_lines: &HashSet<LineNumber>,
    side: Side,
) -> Option<(usize, usize)> {
    let mut first_novel_idx = None;
    for (i, (lhs_line, rhs_line)) in lines.iter().enumerate() {
        let line = match side {
            Side::Left => lhs_line,
            Side::Right => rhs_line,
        };
        if let Some(line) = line {
            if novel_lines.contains(line) {
                first_novel_idx = Some(i);
                break;
            }
        }
    }

    let mut last_novel_idx = None;
    for (i, (lhs_line, rhs_line)) in lines.iter().enumerate().rev() {
        let line = match side {
            Side::Left => lhs_line,
            Side::Right => rhs_line,
        };
        if let Some(line) = line {
            if novel_lines.contains(line) {
                last_novel_idx = Some(i);
                break;
            }
        }
    }

    match (first_novel_idx, last_novel_idx) {
        (Some(first_novel_idx), Some(last_novel_idx)) => Some((first_novel_idx, last_novel_idx)),
        _ => None,
    }
}

fn print_context_before(
    aligned_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_colored_lines: &[&str],
    rhs_colored_lines: &[&str],
    lhs_novel_boundaries: Option<(usize, usize)>,
    rhs_novel_boundaries: Option<(usize, usize)>,
) {
    if let Some((first_novel_lhs, _)) = lhs_novel_boundaries {
        for (i, (lhs_line_num, _)) in aligned_lines.iter().enumerate() {
            if let Some(lhs_line_num) = lhs_line_num {
                if i < first_novel_lhs {
                    println!(" {}", lhs_colored_lines[lhs_line_num.0]);
                } else {
                    break;
                }
            }
        }
    } else {
        let (first_novel_rhs, _) =
            rhs_novel_boundaries.expect("We should have novel lines on at least one side");
        for (i, (_, rhs_line_num)) in aligned_lines.iter().enumerate() {
            if let Some(rhs_line_num) = rhs_line_num {
                if i < first_novel_rhs {
                    println!(" {}", rhs_colored_lines[rhs_line_num.0]);
                } else {
                    break;
                }
            }
        }
    }
}

fn print_context_after(
    aligned_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_colored_lines: &[&str],
    rhs_colored_lines: &[&str],
    lhs_novel_boundaries: Option<(usize, usize)>,
    rhs_novel_boundaries: Option<(usize, usize)>,
) {
    if let Some((_, last_novel_lhs)) = lhs_novel_boundaries {
        for (lhs_line_num, _) in aligned_lines.iter().skip(last_novel_lhs + 1) {
            if let Some(lhs_line_num) = lhs_line_num {
                println!(" {}", lhs_colored_lines[lhs_line_num.0]);
            }
        }
    } else {
        let (_, last_novel_rhs) =
            rhs_novel_boundaries.expect("We should have novel lines on at least one side");
        for (_, rhs_line_num) in aligned_lines.iter().skip(last_novel_rhs + 1) {
            if let Some(rhs_line_num) = rhs_line_num {
                println!(" {}", rhs_colored_lines[rhs_line_num.0]);
            }
        }
    }
}

fn print_changed_lines(
    aligned_lines: &[(Option<LineNumber>, Option<LineNumber>)],
    lhs_colored_lines: &[&str],
    rhs_colored_lines: &[&str],
    lhs_novel_boundaries: Option<(usize, usize)>,
    rhs_novel_boundaries: Option<(usize, usize)>,
) {
    if let Some((first_novel_lhs, last_novel_lhs)) = lhs_novel_boundaries {
        for (i, (lhs_line_num, _)) in aligned_lines.iter().enumerate().skip(first_novel_lhs) {
            if let Some(lhs_line_num) = lhs_line_num {
                if i <= last_novel_lhs {
                    println!("{}{}", "-".bright_red(), lhs_colored_lines[lhs_line_num.0]);
                } else {
                    break;
                }
            }
        }
    }
    if let Some((first_novel_rhs, last_novel_rhs)) = rhs_novel_boundaries {
        for (i, (_, rhs_line_num)) in aligned_lines.iter().enumerate().skip(first_novel_rhs) {
            if let Some(rhs_line_num) = rhs_line_num {
                if i <= last_novel_rhs {
                    println!(
                        "{}{}",
                        "+".bright_green(),
                        rhs_colored_lines[rhs_line_num.0]
                    );
                } else {
                    break;
                }
            }
        }
    }
}

fn lines_with_novel_either_side(
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) -> (HashSet<LineNumber>, HashSet<LineNumber>) {
    let mut lhs_lines_with_novel: HashSet<LineNumber> = lhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();
    let mut rhs_lines_with_novel: HashSet<LineNumber> = rhs_mps
        .iter()
        .filter(|mp| mp.kind.is_novel())
        .map(|mp| mp.pos.line)
        .collect();

    for lhs_mp in lhs_mps {
        if let MatchKind::UnchangedToken {
            self_pos,
            opposite_pos,
            ..
        } = &lhs_mp.kind
        {
            for (self_line, opposite_line) in self_pos.iter().zip(opposite_pos.iter()) {
                if rhs_lines_with_novel.contains(&opposite_line.line) {
                    lhs_lines_with_novel.insert(self_line.line);
                }
            }
        }
    }

    for rhs_mp in rhs_mps {
        if let MatchKind::UnchangedToken {
            self_pos,
            opposite_pos,
            ..
        } = &rhs_mp.kind
        {
            for (self_line, opposite_line) in self_pos.iter().zip(opposite_pos.iter()) {
                if lhs_lines_with_novel.contains(&opposite_line.line) {
                    rhs_lines_with_novel.insert(self_line.line);
                }
            }
        }
    }

    (lhs_lines_with_novel, rhs_lines_with_novel)
}

pub fn print(
    hunks: &[Hunk],
    lhs_path: &str,
    rhs_path: &str,
    use_color: bool,
    background: BackgroundColor,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) {
    print_file_header(lhs_path, rhs_path, use_color);

    let (lhs_colored_src, rhs_colored_src) = if use_color {
        (
            apply_colors(lhs_src, true, background, lhs_mps),
            apply_colors(rhs_src, false, background, rhs_mps),
        )
    } else {
        (lhs_src.to_string(), rhs_src.to_string())
    };

    let lhs_lines = split_on_newlines(lhs_src);
    let rhs_lines = split_on_newlines(rhs_src);
    let lhs_colored_lines = split_on_newlines(&lhs_colored_src);
    let rhs_colored_lines = split_on_newlines(&rhs_colored_src);

    let (lhs_lines_with_novel, rhs_lines_with_novel) =
        lines_with_novel_either_side(lhs_mps, rhs_mps);

    let matched_lines = all_matched_lines_filled(lhs_mps, rhs_mps, &lhs_lines, &rhs_lines);

    for hunk in hunks {
        let aligned_lines = matched_lines_for_hunk(&matched_lines, hunk);
        print_hunk_header(&aligned_lines);

        let lhs_boundaries = novel_boundaries(&aligned_lines, &lhs_lines_with_novel, Side::Left);
        let rhs_boundaries = novel_boundaries(&aligned_lines, &rhs_lines_with_novel, Side::Right);

        print_context_before(
            &aligned_lines,
            &lhs_colored_lines,
            &rhs_colored_lines,
            lhs_boundaries,
            rhs_boundaries,
        );

        print_changed_lines(
            &aligned_lines,
            &lhs_colored_lines,
            &rhs_colored_lines,
            lhs_boundaries,
            rhs_boundaries,
        );

        print_context_after(
            &aligned_lines,
            &lhs_colored_lines,
            &rhs_colored_lines,
            lhs_boundaries,
            rhs_boundaries,
        );
    }
}
