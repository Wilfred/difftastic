//! A fallback "parser" for plain text.

use line_numbers::{LinePositions, SingleLineSpan};

use crate::diff::lcs_diff;
use crate::parse::syntax::{AtomKind, MatchKind, MatchedPos, TokenKind};
use crate::words::split_words;

const MAX_WORDS_IN_LINE: usize = 1000;

fn split_lines_keep_newline(s: &str) -> Vec<&str> {
    s.split_inclusive('\n').collect()
}

#[derive(Debug)]
enum TextChangeKind {
    Novel,
    Unchanged,
}

fn changed_parts<'a>(
    src: &'a str,
    opposite_src: &'a str,
) -> Vec<(TextChangeKind, Vec<&'a str>, Vec<&'a str>)> {
    let src_lines = split_lines_keep_newline(src);
    let opposite_src_lines = split_lines_keep_newline(opposite_src);

    // Build the result with contiguous sequences of novel lines
    // already merged, so we can try word highlighting on similar
    // lines.
    let mut res: Vec<(TextChangeKind, Vec<&'a str>, Vec<&'a str>)> = vec![];
    let mut lhs_novel: Vec<&'a str> = vec![];
    let mut rhs_novel: Vec<&'a str> = vec![];
    for diff_res in lcs_diff::slice_unique_by_hash(&src_lines, &opposite_src_lines) {
        match diff_res {
            lcs_diff::DiffResult::Left(line) => {
                lhs_novel.push(line);
            }
            lcs_diff::DiffResult::Both(line, opposite_line) => {
                if !lhs_novel.is_empty() || !rhs_novel.is_empty() {
                    res.push((
                        TextChangeKind::Novel,
                        std::mem::take(&mut lhs_novel),
                        std::mem::take(&mut rhs_novel),
                    ));
                }
                res.push((TextChangeKind::Unchanged, vec![line], vec![opposite_line]));
            }
            lcs_diff::DiffResult::Right(opposite_line) => {
                rhs_novel.push(opposite_line);
            }
        }
    }

    if !lhs_novel.is_empty() || !rhs_novel.is_empty() {
        res.push((TextChangeKind::Novel, lhs_novel, rhs_novel));
    }
    res
}

fn line_len_in_bytes(line: &str) -> usize {
    if line.ends_with('\n') {
        line.len() - 1
    } else {
        line.len()
    }
}

/// Build vecs of MatchedPos for both sides, performing a
/// line-oriented diff. Match up unchanged lines, and match up
/// unchanged words within novel lines.
pub(crate) fn change_positions(lhs_src: &str, rhs_src: &str) -> (Vec<MatchedPos>, Vec<MatchedPos>) {
    // TODO: If either side is "", don't split each line by words
    // pointlessly. This is common for file additions/removals.
    let lhs_lp = LinePositions::from(lhs_src);
    let rhs_lp = LinePositions::from(rhs_src);

    let mut lhs_offset = 0;
    let mut rhs_offset = 0;

    let mut lhs_mps = vec![];
    let mut rhs_mps = vec![];

    let mut seen_unchanged = false;
    for (kind, lhs_lines, rhs_lines) in changed_parts(lhs_src, rhs_src) {
        match kind {
            TextChangeKind::Unchanged => {
                seen_unchanged = true;
                for (lhs_line, rhs_line) in lhs_lines.iter().zip(rhs_lines) {
                    let lhs_pos =
                        lhs_lp.from_region(lhs_offset, lhs_offset + line_len_in_bytes(lhs_line));
                    let rhs_pos =
                        rhs_lp.from_region(rhs_offset, rhs_offset + line_len_in_bytes(rhs_line));

                    lhs_mps.push(MatchedPos {
                        kind: MatchKind::UnchangedToken {
                            highlight: TokenKind::Atom(AtomKind::Normal),
                            self_pos: lhs_pos.clone(),
                            opposite_pos: rhs_pos.clone(),
                        },
                        pos: lhs_pos[0],
                    });
                    rhs_mps.push(MatchedPos {
                        kind: MatchKind::UnchangedToken {
                            highlight: TokenKind::Atom(AtomKind::Normal),
                            self_pos: rhs_pos.clone(),
                            opposite_pos: lhs_pos,
                        },
                        pos: rhs_pos[0],
                    });

                    lhs_offset += lhs_line.len();
                    rhs_offset += rhs_line.len();
                }
            }
            TextChangeKind::Novel => {
                let lhs_part = lhs_lines.join("");
                let rhs_part = rhs_lines.join("");

                let lhs_words = split_words(&lhs_part);
                let rhs_words = split_words(&rhs_part);

                // Myers Diff scales badly on large inputs, and
                // word-level diffing is merely nice to have. If we
                // have a very large number of words, don't diff
                // individual words.
                if lhs_words.len() > MAX_WORDS_IN_LINE || rhs_words.len() > MAX_WORDS_IN_LINE {
                    for lhs_pos in lhs_lp.from_region(lhs_offset, lhs_offset + lhs_part.len()) {
                        if lhs_pos.start_col != lhs_pos.end_col {
                            lhs_mps.push(MatchedPos {
                                kind: MatchKind::NovelWord {
                                    highlight: TokenKind::Atom(AtomKind::Normal),
                                },
                                pos: lhs_pos,
                            });
                        }
                    }
                    for rhs_pos in rhs_lp.from_region(rhs_offset, rhs_offset + rhs_part.len()) {
                        if rhs_pos.start_col != rhs_pos.end_col {
                            rhs_mps.push(MatchedPos {
                                kind: MatchKind::NovelWord {
                                    highlight: TokenKind::Atom(AtomKind::Normal),
                                },
                                pos: rhs_pos,
                            });
                        }
                    }

                    lhs_offset += lhs_part.len();
                    rhs_offset += rhs_part.len();
                    continue;
                }

                for diff_res in lcs_diff::slice_unique_by_hash(&lhs_words, &rhs_words) {
                    match diff_res {
                        lcs_diff::DiffResult::Left(lhs_word) => {
                            let lhs_pos =
                                lhs_lp.from_region(lhs_offset, lhs_offset + lhs_word.len());

                            lhs_mps.push(MatchedPos {
                                kind: MatchKind::NovelWord {
                                    highlight: TokenKind::Atom(AtomKind::Normal),
                                },
                                pos: lhs_pos[0],
                            });

                            lhs_offset += lhs_word.len();
                        }
                        lcs_diff::DiffResult::Both(lhs_word, rhs_word) => {
                            if *lhs_word != "\n" {
                                let lhs_pos =
                                    lhs_lp.from_region(lhs_offset, lhs_offset + lhs_word.len());
                                let rhs_pos =
                                    rhs_lp.from_region(rhs_offset, rhs_offset + rhs_word.len());

                                lhs_mps.push(MatchedPos {
                                    kind: MatchKind::UnchangedPartOfNovelItem {
                                        highlight: TokenKind::Atom(AtomKind::Normal),
                                        self_pos: lhs_pos[0],
                                        opposite_pos: rhs_pos.clone(),
                                    },
                                    pos: lhs_pos[0],
                                });
                                rhs_mps.push(MatchedPos {
                                    kind: MatchKind::UnchangedPartOfNovelItem {
                                        highlight: TokenKind::Atom(AtomKind::Normal),
                                        self_pos: rhs_pos[0],
                                        opposite_pos: lhs_pos,
                                    },
                                    pos: rhs_pos[0],
                                });
                            }

                            lhs_offset += lhs_word.len();
                            rhs_offset += rhs_word.len();
                        }
                        lcs_diff::DiffResult::Right(rhs_word) => {
                            let rhs_pos =
                                rhs_lp.from_region(rhs_offset, rhs_offset + rhs_word.len());

                            rhs_mps.push(MatchedPos {
                                kind: MatchKind::NovelWord {
                                    highlight: TokenKind::Atom(AtomKind::Normal),
                                },
                                pos: rhs_pos[0],
                            });

                            rhs_offset += rhs_word.len();
                        }
                    }
                }
            }
        }
    }

    // If there are no unchanged items, insert a dummy item at the
    // beginning of both files with a width of zero. This gives
    // display something to use when aligning.
    if !seen_unchanged {
        let lhs_pos = SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 0,
        };
        let rhs_pos = SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 0,
        };
        lhs_mps.insert(
            0,
            MatchedPos {
                kind: MatchKind::UnchangedToken {
                    highlight: TokenKind::Atom(AtomKind::Normal),
                    self_pos: vec![lhs_pos],
                    opposite_pos: vec![rhs_pos],
                },
                pos: lhs_pos,
            },
        );
        rhs_mps.insert(
            0,
            MatchedPos {
                kind: MatchKind::UnchangedToken {
                    highlight: TokenKind::Atom(AtomKind::Normal),
                    self_pos: vec![rhs_pos],
                    opposite_pos: vec![lhs_pos],
                },
                pos: rhs_pos,
            },
        );
    }

    (lhs_mps, rhs_mps)
}

#[cfg(test)]
mod tests {
    use line_numbers::SingleLineSpan;
    use pretty_assertions::assert_eq;

    use super::*;

    #[test]
    fn test_split_newlines() {
        let s = "foo\nbar\nbaz";
        let res = split_lines_keep_newline(s);
        assert_eq!(res, vec!["foo\n", "bar\n", "baz"])
    }

    #[test]
    fn test_positions_no_changes() {
        let (positions, _) = change_positions("foo", "foo");

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
        let (mut positions, _) = change_positions("foo", " foo");
        let last_pos = positions.pop().unwrap();
        assert!(last_pos.kind.is_novel());
    }

    #[test]
    fn test_no_changes_trailing_newlines() {
        let (positions, _) = change_positions("foo\n", "foo\n");

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
        let (mut positions, _) = change_positions("foo\n", "");

        let last_pos = positions.pop().unwrap();
        assert!(last_pos.kind.is_novel());
    }

    #[test]
    fn test_positions_novel_lhs() {
        let (mut positions, _) = change_positions("foo", "");

        let last_pos = positions.pop().unwrap();
        assert!(last_pos.kind.is_novel());
    }
}
