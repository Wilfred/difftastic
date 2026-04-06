//! Library entrypoints for using difftastic inside other Rust crates.

#![allow(renamed_and_removed_lints)]
#![allow(clippy::type_complexity)]
#![allow(clippy::comparison_to_empty)]
#![allow(clippy::too_many_arguments)]
#![allow(clippy::if_same_then_else)]
#![allow(clippy::mutable_key_type)]
#![allow(unknown_lints)]
#![allow(clippy::manual_unwrap_or_default)]
#![allow(clippy::implicit_saturating_sub)]
#![allow(clippy::needless_as_bytes)]
#![allow(dead_code)]
#![warn(clippy::str_to_string)]
#![warn(clippy::string_to_string)]
#![warn(clippy::todo)]
#![warn(clippy::dbg_macro)]

mod conflicts;
mod constants;
mod diff;
mod display;
mod exit_codes;
mod files;
mod hash;
mod line_parser;
mod lines;
mod options;
mod parse;
mod summary;
mod version;
mod words;

#[macro_use]
extern crate log;

use std::fmt::{Display, Formatter};
use std::path::{Path, PathBuf};

use humansize::{format_size, FormatSizeOptions, BINARY};
use typed_arena::Arena;

use crate::diff::changes::ChangeMap;
use crate::diff::dijkstra::{mark_syntax, ExceededGraphLimit};
use crate::diff::sliders::fix_all_sliders;
use crate::diff::unchanged;
use crate::display::context::opposite_positions;
use crate::display::hunks::{matched_pos_to_hunks, merge_adjacent};
use crate::files::{guess_content, ProbableFileKind};
use crate::lines::MaxLine;
use crate::options::{DiffOptions, DisplayOptions, FileArgument};
use crate::parse::guess_language::{guess, language_name, LanguageOverride};
use crate::parse::syntax::{self, init_next_prev};
use crate::parse::tree_sitter_parser as tsp;
use crate::summary::{DiffResult, FileContent, FileFormat};

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DifftasticError(String);

impl DifftasticError {
    pub(crate) fn new(message: impl Into<String>) -> Self {
        Self(message.into())
    }
}

impl Display for DifftasticError {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        f.write_str(&self.0)
    }
}

impl std::error::Error for DifftasticError {}

impl From<serde_json::Error> for DifftasticError {
    fn from(value: serde_json::Error) -> Self {
        Self(value.to_string())
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HighlightKind {
    Normal,
    Keyword,
    String,
    Comment,
    Number,
    Type,
    Function,
    Operator,
    Punctuation,
    Variable,
    Constant,
    Builtin,
    Attribute,
    Tag,
    Property,
    Namespace,
    Label,
    Preprocessor,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HighlightSpan {
    pub offset: u32,
    pub length: u32,
    pub kind: HighlightKind,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChangeIntensity {
    Novel,
    NovelWord,
    UnchangedContext,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ChangeSpan {
    pub start_col: u32,
    pub end_col: u32,
    pub highlight: HighlightKind,
    pub intensity: ChangeIntensity,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SemanticLine {
    pub lhs_line: Option<u32>,
    pub rhs_line: Option<u32>,
    pub lhs_changes: Vec<ChangeSpan>,
    pub rhs_changes: Vec<ChangeSpan>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SemanticChunk {
    pub lines: Vec<SemanticLine>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiffStatus {
    Unchanged,
    Changed,
    Created,
    Deleted,
    Binary,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SemanticDiffResult {
    pub status: DiffStatus,
    pub language: String,
    pub chunks: Vec<SemanticChunk>,
    pub aligned_lines: Vec<(Option<u32>, Option<u32>)>,
}

#[derive(Debug, Clone)]
pub struct DiffRequest<'a> {
    pub display_path: &'a str,
    pub lhs_path: Option<&'a Path>,
    pub rhs_path: Option<&'a Path>,
    pub lhs_bytes: &'a [u8],
    pub rhs_bytes: &'a [u8],
}

pub fn diff_bytes_json(request: DiffRequest<'_>) -> Result<String, DifftasticError> {
    let lhs_path =
        file_argument_for_side(request.lhs_path, request.display_path, request.lhs_bytes);
    let rhs_path =
        file_argument_for_side(request.rhs_path, request.display_path, request.rhs_bytes);
    let diff_options = DiffOptions::default();
    let display_options = DisplayOptions::default();
    let overrides = Vec::<(LanguageOverride, Vec<glob::Pattern>)>::new();
    let binary_overrides = Vec::<glob::Pattern>::new();

    let diff = diff_bytes(
        request.display_path,
        &lhs_path,
        &rhs_path,
        request.lhs_bytes,
        request.rhs_bytes,
        &display_options,
        &diff_options,
        &overrides,
        &binary_overrides,
    );
    Ok(display::json::serialize(&diff)?)
}

pub fn diff_bytes_semantic(request: DiffRequest<'_>) -> Result<SemanticDiffResult, DifftasticError> {
    let lhs_path =
        file_argument_for_side(request.lhs_path, request.display_path, request.lhs_bytes);
    let rhs_path =
        file_argument_for_side(request.rhs_path, request.display_path, request.rhs_bytes);
    let diff_options = DiffOptions::default();
    let display_options = DisplayOptions::default();
    let overrides = Vec::<(LanguageOverride, Vec<glob::Pattern>)>::new();
    let binary_overrides = Vec::<glob::Pattern>::new();

    let diff = diff_bytes(
        request.display_path,
        &lhs_path,
        &rhs_path,
        request.lhs_bytes,
        request.rhs_bytes,
        &display_options,
        &diff_options,
        &overrides,
        &binary_overrides,
    );
    Ok(convert_to_semantic(&diff))
}

fn convert_to_semantic(result: &DiffResult) -> SemanticDiffResult {
    use crate::display::context::{all_matched_lines_filled, opposite_positions};
    use crate::display::hunks::{matched_lines_indexes_for_hunk, matched_pos_to_hunks, merge_adjacent};
    use crate::display::side_by_side::lines_with_novel;
    use crate::lines::MaxLine;

    match (&result.lhs_src, &result.rhs_src) {
        (FileContent::Binary, _) | (_, FileContent::Binary) => {
            let status = if result.has_byte_changes.is_some() {
                DiffStatus::Changed
            } else {
                DiffStatus::Binary
            };
            return SemanticDiffResult {
                status,
                language: format!("{}", result.file_format),
                chunks: Vec::new(),
                aligned_lines: Vec::new(),
            };
        }
        (FileContent::Text(lhs_src), FileContent::Text(rhs_src)) => {
            let opposite_to_lhs = opposite_positions(&result.lhs_positions);
            let opposite_to_rhs = opposite_positions(&result.rhs_positions);

            let hunks = matched_pos_to_hunks(&result.lhs_positions, &result.rhs_positions);
            let hunks = merge_adjacent(
                &hunks,
                &opposite_to_lhs,
                &opposite_to_rhs,
                lhs_src.max_line(),
                rhs_src.max_line(),
                0,
            );

            if hunks.is_empty() {
                return SemanticDiffResult {
                    status: DiffStatus::Unchanged,
                    language: format!("{}", result.file_format),
                    chunks: Vec::new(),
                    aligned_lines: Vec::new(),
                };
            }

            if lhs_src.is_empty() {
                return SemanticDiffResult {
                    status: DiffStatus::Created,
                    language: format!("{}", result.file_format),
                    chunks: Vec::new(),
                    aligned_lines: Vec::new(),
                };
            }

            if rhs_src.is_empty() {
                return SemanticDiffResult {
                    status: DiffStatus::Deleted,
                    language: format!("{}", result.file_format),
                    chunks: Vec::new(),
                    aligned_lines: Vec::new(),
                };
            }

            let lhs_lines: Vec<&str> = lhs_src.split('\n').collect();
            let rhs_lines: Vec<&str> = rhs_src.split('\n').collect();

            let (lhs_lines_with_novel, rhs_lines_with_novel) =
                lines_with_novel(&result.lhs_positions, &result.rhs_positions);

            let matched_lines = all_matched_lines_filled(
                &result.lhs_positions,
                &result.rhs_positions,
                &lhs_lines,
                &rhs_lines,
            );

            let aligned_lines: Vec<(Option<u32>, Option<u32>)> = matched_lines
                .iter()
                .map(|(lhs, rhs)| (lhs.map(|l| l.0), rhs.map(|l| l.0)))
                .collect();

            let mut matched_lines_slice = &matched_lines[..];
            let mut chunks = Vec::with_capacity(hunks.len());

            for hunk in &hunks {
                let (start_i, end_i) =
                    matched_lines_indexes_for_hunk(matched_lines_slice, hunk, 0);
                let aligned = &matched_lines_slice[start_i..end_i];
                matched_lines_slice = &matched_lines_slice[start_i..];

                let mut lines = Vec::new();
                for (lhs_line_num, rhs_line_num) in aligned {
                    let lhs_novel = lhs_line_num
                        .map(|l| lhs_lines_with_novel.contains(&l))
                        .unwrap_or(false);
                    let rhs_novel = rhs_line_num
                        .map(|l| rhs_lines_with_novel.contains(&l))
                        .unwrap_or(false);
                    if !lhs_novel && !rhs_novel {
                        continue;
                    }

                    let lhs_changes = lhs_line_num
                        .map(|ln| semantic_changes_for_line(&result.lhs_positions, ln))
                        .unwrap_or_default();
                    let rhs_changes = rhs_line_num
                        .map(|ln| semantic_changes_for_line(&result.rhs_positions, ln))
                        .unwrap_or_default();

                    lines.push(SemanticLine {
                        lhs_line: lhs_line_num.map(|l| l.0),
                        rhs_line: rhs_line_num.map(|l| l.0),
                        lhs_changes,
                        rhs_changes,
                    });
                }

                if !lines.is_empty() {
                    chunks.push(SemanticChunk { lines });
                }
            }

            SemanticDiffResult {
                status: DiffStatus::Changed,
                language: format!("{}", result.file_format),
                chunks,
                aligned_lines,
            }
        }
    }
}

fn semantic_changes_for_line(
    positions: &[syntax::MatchedPos],
    line_num: line_numbers::LineNumber,
) -> Vec<ChangeSpan> {
    positions
        .iter()
        .filter(|m| m.pos.line == line_num && m.kind.is_novel())
        .map(|m| {
            let (highlight, intensity) = convert_match_kind(&m.kind);
            ChangeSpan {
                start_col: m.pos.start_col,
                end_col: m.pos.end_col,
                highlight,
                intensity,
            }
        })
        .collect()
}

fn convert_match_kind(kind: &syntax::MatchKind) -> (HighlightKind, ChangeIntensity) {
    use syntax::{AtomKind, MatchKind, TokenKind};

    let (highlight, intensity) = match kind {
        MatchKind::Novel { highlight } => (highlight, ChangeIntensity::Novel),
        MatchKind::NovelWord { highlight } => (highlight, ChangeIntensity::NovelWord),
        MatchKind::UnchangedPartOfNovelItem { highlight, .. } => {
            (highlight, ChangeIntensity::UnchangedContext)
        }
        MatchKind::UnchangedToken { highlight, .. } | MatchKind::Ignored { highlight, .. } => {
            (highlight, ChangeIntensity::Novel)
        }
    };

    let kind = match highlight {
        TokenKind::Delimiter => HighlightKind::Punctuation,
        TokenKind::Atom(atom) => match atom {
            AtomKind::String(syntax::StringKind::StringLiteral) => HighlightKind::String,
            AtomKind::String(syntax::StringKind::Text) => HighlightKind::Normal,
            AtomKind::Keyword => HighlightKind::Keyword,
            AtomKind::Comment => HighlightKind::Comment,
            AtomKind::Type => HighlightKind::Type,
            AtomKind::Normal => HighlightKind::Normal,
            AtomKind::TreeSitterError => HighlightKind::Preprocessor,
        },
    };

    (kind, intensity)
}

pub fn highlight_ranges_for_path(
    path: &Path,
    source: &str,
) -> Result<Vec<HighlightSpan>, DifftasticError> {
    let overrides = Vec::<(LanguageOverride, Vec<glob::Pattern>)>::new();
    let Some(language) = guess(path, source, &overrides) else {
        return Ok(Vec::new());
    };
    tsp::highlight_ranges(source, language)
}

fn file_argument_for_side(path: Option<&Path>, display_path: &str, content: &[u8]) -> FileArgument {
    match path {
        Some(path) => FileArgument::NamedPath(path.to_path_buf()),
        None if content.is_empty() => FileArgument::DevNull,
        None => FileArgument::NamedPath(PathBuf::from(display_path)),
    }
}

fn diff_bytes(
    display_path: &str,
    lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_bytes: &[u8],
    rhs_bytes: &[u8],
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
    binary_overrides: &[glob::Pattern],
) -> DiffResult {
    let (mut lhs_src, mut rhs_src) = match (
        guess_content(lhs_bytes, lhs_path, binary_overrides),
        guess_content(rhs_bytes, rhs_path, binary_overrides),
    ) {
        (ProbableFileKind::Binary, _) | (_, ProbableFileKind::Binary) => {
            let has_byte_changes = if lhs_bytes == rhs_bytes {
                None
            } else {
                Some((lhs_bytes.len(), rhs_bytes.len()))
            };
            return DiffResult {
                extra_info: None,
                display_path: display_path.to_owned(),
                file_format: FileFormat::Binary,
                lhs_src: FileContent::Binary,
                rhs_src: FileContent::Binary,
                lhs_positions: vec![],
                rhs_positions: vec![],
                hunks: vec![],
                has_byte_changes,
                has_syntactic_changes: false,
            };
        }
        (ProbableFileKind::Text(lhs_src), ProbableFileKind::Text(rhs_src)) => (lhs_src, rhs_src),
    };

    if diff_options.strip_cr {
        lhs_src.retain(|c| c != '\r');
        rhs_src.retain(|c| c != '\r');
    }
    if !lhs_src.is_empty() && !lhs_src.ends_with('\n') {
        lhs_src.push('\n');
    }
    if !rhs_src.is_empty() && !rhs_src.ends_with('\n') {
        rhs_src.push('\n');
    }

    diff_file_content(
        display_path,
        lhs_path,
        rhs_path,
        &lhs_src,
        &rhs_src,
        display_options,
        diff_options,
        overrides,
    )
}

fn check_only_text(
    file_format: &FileFormat,
    display_path: &str,
    lhs_src: &str,
    rhs_src: &str,
) -> DiffResult {
    let has_byte_changes = if lhs_src == rhs_src {
        None
    } else {
        Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
    };

    DiffResult {
        display_path: display_path.to_owned(),
        extra_info: None,
        file_format: file_format.clone(),
        lhs_src: FileContent::Text(lhs_src.into()),
        rhs_src: FileContent::Text(rhs_src.into()),
        lhs_positions: vec![],
        rhs_positions: vec![],
        hunks: vec![],
        has_byte_changes,
        has_syntactic_changes: lhs_src != rhs_src,
    }
}

fn diff_file_content(
    display_path: &str,
    _lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    lhs_src: &str,
    rhs_src: &str,
    display_options: &DisplayOptions,
    diff_options: &DiffOptions,
    overrides: &[(LanguageOverride, Vec<glob::Pattern>)],
) -> DiffResult {
    let guess_src = match rhs_path {
        FileArgument::DevNull => lhs_src,
        _ => rhs_src,
    };

    let language = guess(Path::new(display_path), guess_src, overrides);
    let lang_config = language.map(|language| (language, tsp::from_language(language)));

    if lhs_src == rhs_src {
        let file_format = match language {
            Some(language) => FileFormat::SupportedLanguage(language),
            None => FileFormat::PlainText,
        };

        return DiffResult {
            extra_info: None,
            display_path: display_path.to_owned(),
            file_format,
            lhs_src: FileContent::Text("".into()),
            rhs_src: FileContent::Text("".into()),
            lhs_positions: vec![],
            rhs_positions: vec![],
            hunks: vec![],
            has_byte_changes: None,
            has_syntactic_changes: false,
        };
    }

    let (file_format, lhs_positions, rhs_positions) = match lang_config {
        None => {
            let file_format = FileFormat::PlainText;
            if diff_options.check_only {
                return check_only_text(&file_format, display_path, lhs_src, rhs_src);
            }

            let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
            let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
            (file_format, lhs_positions, rhs_positions)
        }
        Some((language, lang_config)) => {
            let arena = Arena::new();
            match tsp::to_tree_with_limit(diff_options, &lang_config, lhs_src, rhs_src) {
                Ok((lhs_tree, rhs_tree)) => match tsp::to_syntax_with_limit(
                    lhs_src,
                    rhs_src,
                    &lhs_tree,
                    &rhs_tree,
                    &arena,
                    &lang_config,
                    diff_options,
                ) {
                    Ok((lhs, rhs)) => {
                        if diff_options.check_only {
                            let has_syntactic_changes = lhs != rhs;
                            let has_byte_changes = if lhs_src == rhs_src {
                                None
                            } else {
                                Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
                            };

                            return DiffResult {
                                extra_info: None,
                                display_path: display_path.to_owned(),
                                file_format: FileFormat::SupportedLanguage(language),
                                lhs_src: FileContent::Text(lhs_src.to_owned()),
                                rhs_src: FileContent::Text(rhs_src.to_owned()),
                                lhs_positions: vec![],
                                rhs_positions: vec![],
                                hunks: vec![],
                                has_byte_changes,
                                has_syntactic_changes,
                            };
                        }

                        let mut change_map = ChangeMap::default();
                        let possibly_changed = if std::env::var("DFT_DBG_KEEP_UNCHANGED").is_ok() {
                            vec![(lhs.clone(), rhs.clone())]
                        } else {
                            unchanged::mark_unchanged(&lhs, &rhs, &mut change_map)
                        };

                        let mut exceeded_graph_limit = false;
                        for (lhs_section_nodes, rhs_section_nodes) in possibly_changed {
                            init_next_prev(&lhs_section_nodes);
                            init_next_prev(&rhs_section_nodes);

                            match mark_syntax(
                                lhs_section_nodes.first().copied(),
                                rhs_section_nodes.first().copied(),
                                &mut change_map,
                                diff_options.graph_limit,
                            ) {
                                Ok(()) => {}
                                Err(ExceededGraphLimit {}) => {
                                    exceeded_graph_limit = true;
                                    break;
                                }
                            }
                        }

                        if exceeded_graph_limit {
                            let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                            let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
                            (
                                FileFormat::TextFallback {
                                    reason: "exceeded DFT_GRAPH_LIMIT".into(),
                                },
                                lhs_positions,
                                rhs_positions,
                            )
                        } else {
                            fix_all_sliders(language, &lhs, &mut change_map);
                            fix_all_sliders(language, &rhs, &mut change_map);

                            let mut lhs_positions = syntax::change_positions(&lhs, &change_map);
                            let mut rhs_positions = syntax::change_positions(&rhs, &change_map);

                            if diff_options.ignore_comments {
                                let lhs_comments =
                                    tsp::comment_positions(&lhs_tree, lhs_src, &lang_config);
                                lhs_positions.extend(lhs_comments);

                                let rhs_comments =
                                    tsp::comment_positions(&rhs_tree, rhs_src, &lang_config);
                                rhs_positions.extend(rhs_comments);
                            }

                            (
                                FileFormat::SupportedLanguage(language),
                                lhs_positions,
                                rhs_positions,
                            )
                        }
                    }
                    Err(tsp::ExceededParseErrorLimit(error_count)) => {
                        let file_format = FileFormat::TextFallback {
                            reason: format!(
                                "{} {} parse error{}, exceeded DFT_PARSE_ERROR_LIMIT",
                                error_count,
                                language_name(language),
                                if error_count == 1 { "" } else { "s" }
                            ),
                        };

                        if diff_options.check_only {
                            return check_only_text(&file_format, display_path, lhs_src, rhs_src);
                        }

                        let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                        let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
                        (file_format, lhs_positions, rhs_positions)
                    }
                },
                Err(tsp::ExceededByteLimit(num_bytes)) => {
                    let format_options = FormatSizeOptions::from(BINARY).decimal_places(1);
                    let file_format = FileFormat::TextFallback {
                        reason: format!(
                            "{} exceeded DFT_BYTE_LIMIT",
                            &format_size(num_bytes, format_options)
                        ),
                    };

                    if diff_options.check_only {
                        return check_only_text(&file_format, display_path, lhs_src, rhs_src);
                    }

                    let lhs_positions = line_parser::change_positions(lhs_src, rhs_src);
                    let rhs_positions = line_parser::change_positions(rhs_src, lhs_src);
                    (file_format, lhs_positions, rhs_positions)
                }
            }
        }
    };

    let opposite_to_lhs = opposite_positions(&lhs_positions);
    let opposite_to_rhs = opposite_positions(&rhs_positions);

    let hunks = matched_pos_to_hunks(&lhs_positions, &rhs_positions);
    let hunks = merge_adjacent(
        &hunks,
        &opposite_to_lhs,
        &opposite_to_rhs,
        lhs_src.max_line(),
        rhs_src.max_line(),
        display_options.num_context_lines as usize,
    );
    let has_syntactic_changes = !hunks.is_empty();

    let has_byte_changes = if lhs_src == rhs_src {
        None
    } else {
        Some((lhs_src.as_bytes().len(), rhs_src.as_bytes().len()))
    };

    DiffResult {
        extra_info: None,
        display_path: display_path.to_owned(),
        file_format,
        lhs_src: FileContent::Text(lhs_src.to_owned()),
        rhs_src: FileContent::Text(rhs_src.to_owned()),
        lhs_positions,
        rhs_positions,
        hunks,
        has_byte_changes,
        has_syntactic_changes,
    }
}
