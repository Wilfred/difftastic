//! Test helpers for creating [`MatchedPos`] values with minimal boilerplate.

use line_numbers::SingleLineSpan;

use crate::parse::syntax::{MatchKind, MatchedPos, TokenKind};

/// Creates a [`SingleLineSpan`] at the given line with column range 0..1.
pub(crate) fn span(line: u32) -> SingleLineSpan {
    SingleLineSpan {
        line: line.into(),
        start_col: 0,
        end_col: 1,
    }
}

/// Creates a novel [`MatchedPos`] at the given line.
pub(crate) fn novel(line: u32) -> MatchedPos {
    MatchedPos {
        kind: MatchKind::Novel {
            highlight: TokenKind::Delimiter,
        },
        pos: span(line),
    }
}

/// Creates an unchanged [`MatchedPos`] linking `self_line` to `opposite_line`.
pub(crate) fn unchanged(self_line: u32, opposite_line: u32) -> MatchedPos {
    MatchedPos {
        kind: MatchKind::UnchangedToken {
            highlight: TokenKind::Delimiter,
            self_pos: vec![span(self_line)],
            opposite_pos: vec![span(opposite_line)],
        },
        pos: span(self_line),
    }
}
