use crate::lines::{format_line_num, LineGroup};

pub fn display(lhs_src: &str, rhs_src: &str, groups: &[LineGroup]) -> String {
    let lhs_lines: Vec<_> = lhs_src.lines().collect();
    let rhs_lines: Vec<_> = rhs_src.lines().collect();

    let mut res = String::new();

    for group in groups {
        for lhs_line_num in group.lhs_lines() {
            res.push_str(&format_line_num(lhs_line_num));
            res.push_str(lhs_lines[lhs_line_num.0]);
            res.push('\n');
        }
        for rhs_line_num in group.rhs_lines() {
            res.push_str("  ");
            res.push_str(&format_line_num(rhs_line_num));
            res.push_str(rhs_lines[rhs_line_num.0]);
            res.push('\n');
        }

        res.push('\n');
    }

    res
}
