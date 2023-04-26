use crate::{
    display::{
        context::all_matched_lines_filled,
        hunks::{matched_lines_indexes_for_hunk, Hunk},
        side_by_side::lines_with_novel,
    },
    lines::LineNumber,
    options::DisplayOptions,
    parse::syntax::{self, MatchedPos},
    summary::FileFormat,
};
use serde::{ser::SerializeStruct, Serialize, Serializer};
use std::collections::HashMap;

#[derive(Debug, Serialize)]
#[serde(rename_all = "lowercase")]
enum Status {
    Changed,
    Created,
    Deleted,
}

#[derive(Debug)]
struct File<'f> {
    language: &'f FileFormat,
    path: &'f str,
    chunks: Vec<Vec<Line<'f>>>,
    status: Status,
}

impl<'f> File<'f> {
    fn with_sections(
        language: &'f FileFormat,
        path: &'f str,
        chunks: Vec<Vec<Line<'f>>>,
    ) -> File<'f> {
        File {
            language,
            path,
            chunks,
            status: Status::Changed,
        }
    }

    fn with_status(language: &'f FileFormat, path: &'f str, status: Status) -> File<'f> {
        File {
            language,
            path,
            chunks: Vec::new(),
            status,
        }
    }
}

impl<'f> Serialize for File<'f> {
    fn serialize<S>(&self, serializer: S) -> Result<S::Ok, S::Error>
    where
        S: Serializer,
    {
        // equivalent to #[serde(skip_serializing_if = "Vec::is_empty")]
        let mut file = if self.chunks.is_empty() {
            serializer.serialize_struct("File", 3)?
        } else {
            let mut file = serializer.serialize_struct("File", 4)?;
            file.serialize_field("chunks", &self.chunks)?;
            file
        };

        file.serialize_field("language", &format!("{}", self.language))?;
        file.serialize_field("path", &self.path)?;
        file.serialize_field("status", &self.status)?;

        file.end()
    }
}

#[derive(Debug, Serialize)]
struct Line<'l> {
    #[serde(skip_serializing_if = "Option::is_none")]
    lhs: Option<Side<'l>>,
    #[serde(skip_serializing_if = "Option::is_none")]
    rhs: Option<Side<'l>>,
}

impl<'l> Line<'l> {
    fn new(lhs_number: Option<u32>, rhs_number: Option<u32>) -> Line<'l> {
        Line {
            lhs: lhs_number.map(Side::new),
            rhs: rhs_number.map(Side::new),
        }
    }
}

#[derive(Debug, Serialize)]
struct Side<'s> {
    line_number: u32,
    changes: Vec<Change<'s>>,
}

impl<'s> Side<'s> {
    fn new(line_number: u32) -> Side<'s> {
        Side {
            line_number,
            changes: Vec::new(),
        }
    }
}

#[derive(Debug, Serialize)]
struct Change<'c> {
    start: u32,
    end: u32,
    content: &'c str,
    highlight: Highlight,
}

#[derive(Debug, Serialize)]
#[serde(rename_all = "snake_case")]
// TODO: use syntax::TokenKind and syntax::AtomKind instead of this merged enum,
// blocked by https://github.com/serde-rs/serde/issues/1402
enum Highlight {
    Delimiter,
    Normal,
    String,
    Type,
    Comment,
    Keyword,
    TreeSitterError,
}

impl Highlight {
    fn from_match(kind: &syntax::MatchKind) -> Self {
        use syntax::{AtomKind, MatchKind, TokenKind};

        let highlight = match kind {
            MatchKind::Ignored { highlight, .. } => highlight,
            MatchKind::UnchangedToken { highlight, .. } => highlight,
            MatchKind::Novel { highlight, .. } => highlight,
            MatchKind::NovelWord { highlight, .. } => highlight,
            MatchKind::NovelLinePart { highlight, .. } => highlight,
        };

        match highlight {
            TokenKind::Delimiter => Highlight::Delimiter,
            TokenKind::Atom(atom) => match atom {
                AtomKind::String => Highlight::String,
                AtomKind::Keyword => Highlight::Keyword,
                AtomKind::Comment => Highlight::Comment,
                AtomKind::Type => Highlight::Type,
                AtomKind::Normal => Highlight::Normal,
                AtomKind::TreeSitterError => Highlight::TreeSitterError,
            },
        }
    }
}

pub fn print(
    hunks: &[Hunk],
    display_options: &DisplayOptions,
    display_path: &str,
    file_format: &FileFormat,
    lhs_src: &str,
    rhs_src: &str,
    lhs_mps: &[MatchedPos],
    rhs_mps: &[MatchedPos],
) {
    if lhs_src.is_empty() {
        println!(
            "{}",
            serde_json::to_string(&File::with_status(
                file_format,
                display_path,
                Status::Created
            ))
            .expect("failed to serialize created file")
        );
        return;
    }
    if rhs_src.is_empty() {
        println!(
            "{}",
            serde_json::to_string(&File::with_status(
                file_format,
                display_path,
                Status::Deleted
            ))
            .expect("failed to serialize deleted file")
        );
        return;
    }

    let lhs_lines = lhs_src.split('\n').collect::<Vec<&str>>();
    let rhs_lines = rhs_src.split('\n').collect::<Vec<&str>>();

    let (lhs_lines_with_novel, rhs_lines_with_novel) = lines_with_novel(lhs_mps, rhs_mps);

    let matched_lines = all_matched_lines_filled(lhs_mps, rhs_mps, &lhs_lines, &rhs_lines);
    let mut matched_lines = &matched_lines[..];

    let mut chunks = Vec::with_capacity(hunks.len());
    for hunk in hunks {
        let mut lines = HashMap::with_capacity(hunk.lines.len());

        let (start_i, end_i) = matched_lines_indexes_for_hunk(
            &matched_lines,
            hunk,
            display_options.num_context_lines as usize,
        );
        let aligned_lines = &matched_lines[start_i..end_i];
        matched_lines = &matched_lines[start_i..];

        for (lhs_line_num, rhs_line_num) in aligned_lines {
            if !lhs_lines_with_novel.contains(&lhs_line_num.unwrap_or(LineNumber(0)))
                && !rhs_lines_with_novel.contains(&rhs_line_num.unwrap_or(LineNumber(0)))
            {
                continue;
            }

            let line = lines
                .entry((lhs_line_num.map(|l| l.0), rhs_line_num.map(|l| l.0)))
                .or_insert_with(|| Line::new(lhs_line_num.map(|l| l.0), rhs_line_num.map(|l| l.0)));

            if let Some(line_num) = lhs_line_num {
                add_changes_to_side(line.lhs.as_mut().unwrap(), *line_num, &lhs_lines, lhs_mps);
            }
            if let Some(line_num) = rhs_line_num {
                add_changes_to_side(line.rhs.as_mut().unwrap(), *line_num, &rhs_lines, rhs_mps);
            }
        }

        chunks.push(lines.into_values().collect());
    }

    println!(
        "{}",
        serde_json::to_string(&File::with_sections(file_format, display_path, chunks))
            .expect("failed to serialize file")
    )
}

fn add_changes_to_side<'s>(
    side: &mut Side<'s>,
    line_num: LineNumber,
    src_lines: &[&'s str],
    all_matches: &[MatchedPos],
) {
    let src_line = src_lines[line_num.0 as usize];

    let matches = matches_for_line(all_matches, line_num);
    for m in matches {
        side.changes.push(Change {
            start: m.pos.start_col,
            end: m.pos.end_col,
            content: &src_line[(m.pos.start_col as usize)..(m.pos.end_col as usize)],
            highlight: Highlight::from_match(&m.kind),
        })
    }
}

fn matches_for_line(matches: &[MatchedPos], line_num: LineNumber) -> Vec<&MatchedPos> {
    matches
        .into_iter()
        .filter(|m| m.pos.line == line_num)
        .filter(|m| m.kind.is_novel())
        .collect()
}
