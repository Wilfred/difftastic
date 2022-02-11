use std::collections::HashMap;

use askama::Template;

use crate::{
    line_parser::split_lines_keep_newline,
    lines::LineNumber,
    positions::SingleLineSpan,
    syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
};

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

fn apply_styles(mps: &[MatchedPos]) -> HashMap<LineNumber, Vec<(SingleLineSpan, Option<String>)>> {
    let mut line_styles = HashMap::new();
    for mp in mps {
        let line_pos = mp.pos;
        let style = match mp.kind {
            MatchKind::UnchangedToken { highlight, .. } => match highlight {
                TokenKind::Atom(AtomKind::Comment) => Some("comment".to_string()),
                _ => None,
            },
            _ => None,
        };

        let line_classes = line_styles.entry(line_pos.line).or_insert_with(Vec::new);
        line_classes.push((line_pos, style));
    }

    line_styles
}

pub fn print(
    display_path: &str,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) {
    let template = SummaryTemplate {
        display_path: display_path.into(),
        lhs_src: apply_classes(lhs_src),
        rhs_src: apply_classes(rhs_src),
    };
    println!("{}", template.render().unwrap());
}
