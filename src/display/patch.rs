use owo_colors::OwoColorize as _;

use crate::constants::Side;
use crate::diff::myers_diff;
use crate::display::style::apply_colors;
use crate::line_parser::split_lines_keep_newline;
use crate::options::DisplayOptions;
use crate::parse::syntax::MatchedPos;
use crate::summary::FileFormat;

use super::style::apply_header_color;

fn header(display_options: &DisplayOptions, lhs_path: &str, rhs_path: &str) -> String {
    let mut s = String::new();
    s.push_str(&apply_header_color(
        &format!("--- {}", lhs_path),
        display_options.use_color,
        display_options.background_color,
        1,
    ));
    s.push('\n');
    s.push_str(&apply_header_color(
        &format!("+++ {}", rhs_path),
        display_options.use_color,
        display_options.background_color,
        1,
    ));

    s
}

pub(crate) fn print(
    display_options: &DisplayOptions,
    file_format: &FileFormat,
    lhs_path: &str,
    rhs_path: &str,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) {
    println!("{}", header(display_options, lhs_path, rhs_path));

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
            lhs_src.lines().map(|s| format!("{}\n", s)).collect(),
            rhs_src.lines().map(|s| format!("{}\n", s)).collect(),
        )
    };

    let lhs_lines = split_lines_keep_newline(lhs_src);
    let rhs_lines = split_lines_keep_newline(rhs_src);

    let mut lhs_i: usize = 0;
    let mut rhs_i = 0;

    let mut lhs_i_last_printed = None;

    for diff_res in myers_diff::slice_unique_by_hash(&lhs_lines, &rhs_lines) {
        match diff_res {
            myers_diff::DiffResult::Left(_) | myers_diff::DiffResult::Right(_) => {
                // This is a novel line, so we should print context.

                // First, print the trailing context of the previous
                // hunk.
                for _ in 0..display_options.num_context_lines {
                    if let Some(last_printed) = lhs_i_last_printed {
                        if lhs_i > 0 && last_printed < lhs_i - 1 {
                            print!(" {}", lhs_colored_lines[last_printed + 1]);
                            lhs_i_last_printed = Some(last_printed + 1);
                        }
                    }
                }

                // Hunk header.
                let in_new_hunk = match lhs_i_last_printed {
                    Some(last_printed) => last_printed + 1 < lhs_i,
                    None => true,
                };
                if in_new_hunk {
                    println!("{}", "@@ -1,2 +3,4 @@ Modified lines X-Y.".dimmed());
                }

                // Finally, print the leading context of this novel
                // line.
                for i in (1..display_options.num_context_lines + 1).rev() {
                    let should_print = match lhs_i_last_printed {
                        Some(last_printed) => {
                            lhs_i > i as usize && lhs_i - i as usize > last_printed
                        }
                        None => true,
                    };

                    if should_print && lhs_i > i as usize {
                        print!(" {}", lhs_colored_lines[lhs_i - i as usize]);
                        lhs_i_last_printed = Some(lhs_i - i as usize);
                    }
                }
            }
            myers_diff::DiffResult::Both(_, _) => {}
        }

        match diff_res {
            myers_diff::DiffResult::Left(_) => {
                lhs_i_last_printed = Some(lhs_i);
                print!("{}{}", "-".red(), lhs_colored_lines[lhs_i]);
                lhs_i += 1;
            }
            myers_diff::DiffResult::Both(_, _) => {
                lhs_i += 1;
                rhs_i += 1;
            }
            myers_diff::DiffResult::Right(_) => {
                print!("{}{}", "+".green(), rhs_colored_lines[rhs_i]);

                rhs_i += 1;
            }
        }
    }

    // Print the trailing context of the final hunk.
    for _ in 0..display_options.num_context_lines {
        if let Some(last_printed) = lhs_i_last_printed {
            if last_printed < lhs_i && last_printed + 1 < lhs_colored_lines.len() {
                print!(" {}", lhs_colored_lines[last_printed + 1]);
                lhs_i_last_printed = Some(last_printed + 1);
            }
        }
    }
}
