//! A fallback "parser" for plain text.

use lazy_static::lazy_static;
use regex::Regex;

use crate::{
    diff::myers_diff,
    lines::NewlinePositions,
    parse::syntax::{split_words, AtomKind, MatchKind, MatchedPos, TokenKind},
};

fn split_lines_keep_newline(s: &str) -> Vec<&str> {
    lazy_static! {
        static ref NEWLINE_RE: Regex = Regex::new("\n").unwrap();
    }

    let mut offset = 0;
    let mut res = vec![];
    for newline_match in NEWLINE_RE.find_iter(s) {
        res.push(s[offset..newline_match.end()].into());
        offset = newline_match.end();
    }

    if offset < s.len() {
        res.push(s[offset..].into());
    }

    res
}

#[derive(Debug)]
enum TextChangeKind {
    Novel,
    Unchanged,
}

/// Merge contiguous sequences marked as novel.
fn merge_novel<'a>(
    lines: &[(TextChangeKind, Vec<&'a str>, Vec<&'a str>)],
) -> Vec<(TextChangeKind, Vec<&'a str>, Vec<&'a str>)> {
    let mut lhs_novel = vec![];
    let mut rhs_novel = vec![];

    let mut res: Vec<(TextChangeKind, Vec<_>, Vec<_>)> = vec![];
    for (kind, lhs_lines, rhs_lines) in lines {
        match kind {
            TextChangeKind::Novel => {
                lhs_novel.extend(lhs_lines.iter().copied());
                rhs_novel.extend(rhs_lines.iter().copied());
            }
            TextChangeKind::Unchanged => {
                if !lhs_novel.is_empty() || !rhs_novel.is_empty() {
                    res.push((TextChangeKind::Novel, lhs_novel, rhs_novel));
                    lhs_novel = vec![];
                    rhs_novel = vec![];
                }

                res.push((
                    TextChangeKind::Unchanged,
                    lhs_lines.clone(),
                    rhs_lines.clone(),
                ));
            }
        }
    }

    if !lhs_novel.is_empty() || !rhs_novel.is_empty() {
        res.push((TextChangeKind::Novel, lhs_novel, rhs_novel));
    }
    res
}

fn changed_parts<'a>(
    src: &'a str,
    opposite_src: &'a str,
) -> Vec<(TextChangeKind, Vec<&'a str>, Vec<&'a str>)> {
    let src_lines = split_lines_keep_newline(src);
    let opposite_src_lines = split_lines_keep_newline(opposite_src);

    let mut res: Vec<(TextChangeKind, Vec<&'a str>, Vec<&'a str>)> = vec![];
    for diff_res in myers_diff::slice_unique_by_hash(&src_lines, &opposite_src_lines) {
        match diff_res {
            myers_diff::DiffResult::Left(line) => {
                res.push((TextChangeKind::Novel, vec![line], vec![]));
            }
            myers_diff::DiffResult::Both(line, opposite_line) => {
                res.push((TextChangeKind::Unchanged, vec![line], vec![opposite_line]));
            }
            myers_diff::DiffResult::Right(opposite_line) => {
                res.push((TextChangeKind::Novel, vec![], vec![opposite_line]));
            }
        }
    }

    // Merge so we can try word highlighting on similar lines.
    merge_novel(&res)
}

fn line_len_in_bytes(line: &str) -> usize {
    if line.ends_with('\n') {
        line.len() - 1
    } else {
        line.len()
    }
}

// TODO: Prefer src/opposite_src nomenclature as this function is called from both sides.
pub fn change_positions(lhs_src: &str, rhs_src: &str) -> Vec<MatchedPos> {
    // TODO: If either side is "", don't split each line by words
    // pointlessly. This is common for file additions/removals.
    let lhs_nlp = NewlinePositions::from(lhs_src);
    let rhs_nlp = NewlinePositions::from(rhs_src);

    let mut lhs_offset = 0;
    let mut rhs_offset = 0;

    let mut res = vec![];
    for (kind, lhs_lines, rhs_lines) in changed_parts(lhs_src, rhs_src) {
        match kind {
            TextChangeKind::Unchanged => {
                for (lhs_line, rhs_line) in lhs_lines.iter().zip(rhs_lines) {
                    let lhs_pos =
                        lhs_nlp.from_offsets(lhs_offset, lhs_offset + line_len_in_bytes(lhs_line));
                    let rhs_pos =
                        rhs_nlp.from_offsets(rhs_offset, rhs_offset + line_len_in_bytes(rhs_line));

                    res.push(MatchedPos {
                        kind: MatchKind::UnchangedToken {
                            highlight: TokenKind::Atom(AtomKind::Normal),
                            self_pos: lhs_pos.clone(),
                            opposite_pos: rhs_pos,
                        },
                        pos: lhs_pos[0],
                    });

                    lhs_offset += lhs_line.len();
                    rhs_offset += rhs_line.len();
                }
            }
            TextChangeKind::Novel => {
                let lhs_part = lhs_lines.join("");
                let rhs_part = rhs_lines.join("");

                for diff_res in myers_diff::slice_unique_by_hash(
                    &split_words(&lhs_part),
                    &split_words(&rhs_part),
                ) {
                    match diff_res {
                        myers_diff::DiffResult::Left(lhs_word) => {
                            if *lhs_word != "\n" {
                                let lhs_pos =
                                    lhs_nlp.from_offsets(lhs_offset, lhs_offset + lhs_word.len());
                                res.push(MatchedPos {
                                    kind: MatchKind::NovelWord {
                                        highlight: TokenKind::Atom(AtomKind::Normal),
                                    },
                                    pos: lhs_pos[0],
                                });
                            }

                            lhs_offset += lhs_word.len();
                        }
                        myers_diff::DiffResult::Both(lhs_word, rhs_word) => {
                            if *lhs_word != "\n" {
                                let lhs_pos =
                                    lhs_nlp.from_offsets(lhs_offset, lhs_offset + lhs_word.len());
                                let rhs_pos =
                                    rhs_nlp.from_offsets(rhs_offset, rhs_offset + rhs_word.len());

                                res.push(MatchedPos {
                                    kind: MatchKind::NovelLinePart {
                                        highlight: TokenKind::Atom(AtomKind::Normal),
                                        self_pos: lhs_pos[0],
                                        opposite_pos: rhs_pos,
                                    },
                                    pos: lhs_pos[0],
                                });
                            }

                            lhs_offset += lhs_word.len();
                            rhs_offset += rhs_word.len();
                        }
                        myers_diff::DiffResult::Right(rhs_word) => {
                            rhs_offset += rhs_word.len();
                        }
                    }
                }
            }
        }
    }

    res
}

#[cfg(test)]
mod tests {
    use crate::positions::SingleLineSpan;

    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn test_split_newlines() {
        let s = "foo\nbar\nbaz";
        let res = split_lines_keep_newline(s);
        assert_eq!(res, vec!["foo\n", "bar\n", "baz"])
    }

    #[test]
    fn test_positions_no_changes() {
        let positions = change_positions("foo", "foo");

        assert_eq!(positions.len(), 1);
        assert!(!positions[0].kind.is_novel());
        assert_eq!(
            positions[0].pos,
            SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 3
            }
        );
    }

    #[test]
    fn test_positions_whitespace_is_change() {
        // Even though the word exists on both sides, it should still
        // be treated as a change. We're doing a line-based diff and
        // the lines are different.
        let positions = change_positions("foo", " foo");
        assert!(positions[0].kind.is_novel());
    }

    #[test]
    fn test_no_changes_trailing_newlines() {
        let positions = change_positions("foo\n", "foo\n");

        assert_eq!(positions.len(), 1);
        assert!(!positions[0].kind.is_novel());
        assert_eq!(
            positions[0].pos,
            SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 3
            }
        );
    }

    #[test]
    fn test_novel_lhs_trailing_newlines() {
        let positions = change_positions("foo\n", "");

        assert_eq!(positions.len(), 1);
        assert!(positions[0].kind.is_novel());
    }

    #[test]
    fn test_positions_novel_lhs() {
        let positions = change_positions("foo", "");

        assert_eq!(positions.len(), 1);
        assert!(positions[0].kind.is_novel());
    }
}
