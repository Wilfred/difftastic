fn display_line_nums(
) -> (String, String) {
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
            prev_rhs_line_num.unwrap_or_else(|| 10.into()),
            widths.rhs_line_nums,
        ),
    };

    (display_lhs_line_num, display_rhs_line_num)
}
