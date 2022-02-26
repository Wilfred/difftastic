use std::collections::HashMap;

use askama::Template;

use crate::{
    line_parser::split_lines_keep_newline,
    lines::{codepoint_len, LineNumber},
    positions::SingleLineSpan,
    syntax::{AtomKind, MatchKind, MatchedPos, TokenKind},
};

#[derive(Template)]
#[template(path = "summary.html")]
struct SummaryTemplate {
    display_path: String,
    lhs_src: Vec<Vec<(String, Option<&'static str>)>>,
    rhs_src: Vec<Vec<(String, Option<&'static str>)>>,
}

fn apply_line(
    line: &str,
    styles: &[(SingleLineSpan, Option<&'static str>)],
) -> Vec<(String, Option<&'static str>)> {
    let mut offset = 0;
    let mut res = vec![];

    for (span, classes) in styles {
        if offset < span.start_col {
            res.push((line[offset..span.start_col].to_owned(), None));
        }

        res.push((line[span.start_col..span.end_col].to_owned(), *classes));
        offset = span.end_col;
    }
    if offset < codepoint_len(line) {
        res.push((line[offset..].to_owned(), None));
    }

    res
}

fn apply_classes(src: &str, mps: &[MatchedPos]) -> Vec<Vec<(String, Option<&'static str>)>> {
    let styles = apply_styles(mps);

    let lines = split_lines_keep_newline(src);

    let mut res = vec![];
    for (i, line) in lines.into_iter().enumerate() {
        let ln: LineNumber = i.into();
        let empty_styles = vec![];
        let line_styles = styles.get(&ln).unwrap_or(&empty_styles);
        res.push(apply_line(line, line_styles));
    }

    res
}

fn apply_styles(
    mps: &[MatchedPos],
) -> HashMap<LineNumber, Vec<(SingleLineSpan, Option<&'static str>)>> {
    let mut line_styles = HashMap::new();
    for mp in mps {
        let line_pos = mp.pos;
        let style = match mp.kind {
            MatchKind::UnchangedToken { highlight, .. } => match highlight {
                TokenKind::Atom(kind) => match kind {
                    AtomKind::Normal => None,
                    AtomKind::String => Some("string"),
                    AtomKind::Type => Some("type"),
                    AtomKind::Comment => Some("comment"),
                    AtomKind::Keyword => Some("keyword"),
                },
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
        lhs_src: apply_classes(lhs_src, lhs_mps),
        rhs_src: apply_classes(rhs_src, rhs_mps),
    };
    println!("{}", template.render().unwrap());
}
