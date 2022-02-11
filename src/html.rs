use askama::Template;

use crate::line_parser::split_lines_keep_newline;

#[derive(Template)]
#[template(path = "summary.html")]
struct SummaryTemplate {
    display_path: String,
    lhs_src: Vec<Vec<(String, Option<String>)>>,
    rhs_src: Vec<Vec<(String, Option<String>)>>,
}

fn apply_classes(src: &str) -> Vec<Vec<(String, Option<String>)>> {
    let lines = split_lines_keep_newline(src);
    lines
        .iter()
        .map(|line| vec![(line.to_string(), None)])
        .collect()
}

pub fn print(display_path: &str, lhs_src: &str, rhs_src: &str) {
    let template = SummaryTemplate {
        display_path: display_path.into(),
        lhs_src: apply_classes(lhs_src),
        rhs_src: apply_classes(rhs_src),
    };
    println!("{}", template.render().unwrap());
}
