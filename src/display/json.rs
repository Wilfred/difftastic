use std::collections::BTreeMap;

use line_numbers::LineNumber;
use serde::{ser::SerializeStruct, Serialize, Serializer};

use crate::{
    display::{
        context::{all_matched_lines_filled, opposite_positions},
        hunks::{matched_lines_indexes_for_hunk, matched_pos_to_hunks, merge_adjacent},
        side_by_side::lines_with_novel,
    },
    lines::MaxLine,
    parse::syntax::{self, MatchedPos, StringKind},
    summary::{DiffResult, FileContent, FileFormat},
};

#[derive(Debug, Serialize, PartialEq)]
#[serde(rename_all = "lowercase")]
enum Status {
    Unchanged,
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

impl<'f> From<&'f DiffResult> for File<'f> {
    fn from(summary: &'f DiffResult) -> Self {
        match (&summary.lhs_src, &summary.rhs_src) {
            (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
                // TODO: move into function as it is effectively duplicates lines 365-375 of main::print_diff_result
                let opposite_to_lhs = opposite_positions(&summary.lhs_positions);
                let opposite_to_rhs = opposite_positions(&summary.rhs_positions);

                let hunks = matched_pos_to_hunks(&summary.lhs_positions, &summary.rhs_positions);
                let hunks = merge_adjacent(
                    &hunks,
                    &opposite_to_lhs,
                    &opposite_to_rhs,
                    lhs_src.max_line(),
                    rhs_src.max_line(),
                    0,
                );

                if hunks.is_empty() {
                    return File::with_status(
                        &summary.file_format,
                        &summary.display_path,
                        Status::Unchanged,
                    );
                }

                if lhs_src.is_empty() {
                    return File::with_status(
                        &summary.file_format,
                        &summary.display_path,
                        Status::Created,
                    );
                }
                if rhs_src.is_empty() {
                    return File::with_status(
                        &summary.file_format,
                        &summary.display_path,
                        Status::Deleted,
                    );
                }

                let lhs_lines = lhs_src.split('\n').collect::<Vec<&str>>();
                let rhs_lines = rhs_src.split('\n').collect::<Vec<&str>>();

                let (lhs_lines_with_novel, rhs_lines_with_novel) =
                    lines_with_novel(&summary.lhs_positions, &summary.rhs_positions);

                let matched_lines = all_matched_lines_filled(
                    &summary.lhs_positions,
                    &summary.rhs_positions,
                    &lhs_lines,
                    &rhs_lines,
                );
                let mut matched_lines = &matched_lines[..];

                let mut chunks = Vec::with_capacity(hunks.len());
                for hunk in &hunks {
                    let mut lines = BTreeMap::new();

                    let (start_i, end_i) = matched_lines_indexes_for_hunk(matched_lines, hunk, 0);
                    let aligned_lines = &matched_lines[start_i..end_i];
                    matched_lines = &matched_lines[start_i..];

                    for (lhs_line_num, rhs_line_num) in aligned_lines {
                        if !lhs_lines_with_novel.contains(&lhs_line_num.unwrap_or(LineNumber(0)))
                            && !rhs_lines_with_novel
                                .contains(&rhs_line_num.unwrap_or(LineNumber(0)))
                        {
                            continue;
                        }

                        let line = lines
                            .entry((lhs_line_num.map(|l| l.0), rhs_line_num.map(|l| l.0)))
                            .or_insert_with(|| {
                                Line::new(lhs_line_num.map(|l| l.0), rhs_line_num.map(|l| l.0))
                            });

                        if let Some(line_num) = lhs_line_num {
                            add_changes_to_side(
                                line.lhs.as_mut().unwrap(),
                                *line_num,
                                &lhs_lines,
                                &summary.lhs_positions,
                            );
                        }
                        if let Some(line_num) = rhs_line_num {
                            add_changes_to_side(
                                line.rhs.as_mut().unwrap(),
                                *line_num,
                                &rhs_lines,
                                &summary.rhs_positions,
                            );
                        }
                    }

                    chunks.push(lines.into_values().collect());
                }

                File::with_sections(&summary.file_format, &summary.display_path, chunks)
            }
            (FileContent::Binary, FileContent::Binary) => {
                let status = if summary.has_byte_changes.is_some() {
                    Status::Changed
                } else {
                    Status::Unchanged
                };
                File::with_status(&FileFormat::Binary, &summary.display_path, status)
            }
            (_, FileContent::Binary) | (FileContent::Binary, _) => {
                File::with_status(&FileFormat::Binary, &summary.display_path, Status::Changed)
            }
        }
    }
}

impl Serialize for File<'_> {
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
            MatchKind::UnchangedPartOfNovelItem { highlight, .. } => highlight,
        };

        match highlight {
            TokenKind::Delimiter => Highlight::Delimiter,
            TokenKind::Atom(atom) => match atom {
                AtomKind::String(StringKind::StringLiteral) => Highlight::String,
                AtomKind::String(StringKind::Text) => Highlight::Normal,
                AtomKind::Keyword => Highlight::Keyword,
                AtomKind::Comment => Highlight::Comment,
                AtomKind::Type => Highlight::Type,
                AtomKind::Normal => Highlight::Normal,
                AtomKind::TreeSitterError => Highlight::TreeSitterError,
            },
        }
    }
}

pub(crate) fn print_directory(diffs: Vec<DiffResult>, print_unchanged: bool) {
    let files = diffs
        .iter()
        .map(File::from)
        .filter(|f| print_unchanged || f.status != Status::Unchanged)
        .collect::<Vec<File>>();
    println!(
        "{}",
        serde_json::to_string(&files).expect("failed to serialize files")
    );
}

pub(crate) fn print(diff: &DiffResult) {
    let file = File::from(diff);
    println!(
        "{}",
        serde_json::to_string(&file).expect("failed to serialize file")
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
        .iter()
        .filter(|m| m.pos.line == line_num)
        .filter(|m| m.kind.is_novel())
        .collect()
}
