//! Emit per-line diff metadata as an OSC sequence, so that a host application
//! (e.g. lazygit) can map a rendered diff cell back to its patch-space identity
//! (file, line type, new-file line, old-file line) without re-parsing the
//! rendered output. difftastic produces a structural, non-unified rendering --
//! side-by-side columns by default, no `@@`/`+`/`-` markers -- so that identity
//! cannot be recovered from the painted text at all. The pager, which still has
//! it at render time, states it.
//!
//! The metadata is attached **per cell**: in side-by-side mode the old-file
//! (left) column carries the deleted/old line's identity and the new-file
//! (right) column the added/new line's, so a single rendered row can carry two
//! records. A host reads the nearest record to the left of the point it cares
//! about, knowing only "left column / right column", never difftastic's layout.
//! When side-by-side collapses a hunk to a single column, a modified row still
//! represents both patch lines; its `d` and `a` records are then emitted
//! back-to-back at the row's start (the `d` region is zero-width -- spec
//! §6.2), so a host acting on the row still sees both halves.
//!
//! This is gated on the `OSC1717` environment variable: the host advertises the
//! protocol versions it understands and difftastic emits the highest mutually-
//! understood one. When the variable is unset (i.e. difftastic is not running
//! under such a host) nothing is emitted, so a raw terminal / less / tmux see a
//! normal diff.
//!
//! The OSC number 1717 was chosen after auditing the OSC allocations of the major
//! terminal emulators (xterm, VTE, kitty, foot, WezTerm, iTerm2, Windows Terminal,
//! Ghostty, VS Code, ConEmu, urxvt); none of them interpret it, so a terminal that
//! is not a participating host skips it harmlessly.

use std::sync::OnceLock;

use line_numbers::LineNumber;

use crate::constants::Side;

/// Highest protocol version this build of difftastic knows how to emit.
const SUPPORTED_VERSION: u32 = 1;

const OSC: &str = "\x1b]1717";
const ST: &str = "\x1b\\";

/// The protocol version to emit, negotiated against the host's advertised list
/// in `OSC1717` (e.g. "V1" or "V1,V2"), or `None` when no host is asking (the
/// variable is unset) so difftastic stays silent.
pub(crate) fn negotiated_version() -> Option<u32> {
    static VERSION: OnceLock<Option<u32>> = OnceLock::new();
    *VERSION.get_or_init(|| pick_version(&std::env::var("OSC1717").ok()?))
}

/// The handshake record: a version-only OSC 1717 (no further fields) that a
/// conforming pager emits once, as its first output, to announce it speaks the
/// protocol (see the spec, §4.4). It lets a host probe difftastic on an empty diff
/// — which emits no per-line records — and tell "speaks the protocol" apart from
/// "unsupported pager". Empty when no host negotiated a version.
pub(crate) fn handshake() -> String {
    negotiated_version().map_or(String::new(), handshake_for_version)
}

fn handshake_for_version(version: u32) -> String {
    format!("{OSC};{version}{ST}")
}

/// The highest version in the host's advertised list (e.g. "V1" or "V1,V2")
/// that this build also understands, or `None` if the lists are disjoint.
fn pick_version(advertised: &str) -> Option<u32> {
    advertised
        .split(',')
        .filter_map(|v| v.trim().strip_prefix('V')?.parse::<u32>().ok())
        .filter(|v| *v <= SUPPORTED_VERSION)
        .max()
}

/// Whether an aligned row is a change in patch space: one side is absent (a
/// pure addition/deletion), or the two sides' contents differ.
///
/// Token-level novelty is deliberately NOT the test here. The records name
/// git's line-granular model (a modified line is a `d` plus an `a` -- spec
/// §5.1), but difftastic's novelty is per token: a line changed only by
/// *added* tokens has no novel old-side tokens at all, and a blank line has no
/// tokens to be novel. Classifying by novel-token sets tagged such old lines
/// `c`, so a host staging by the records dropped the deletion half of the
/// modification (or, mirrored, the addition half). Comparing the aligned
/// lines' contents recovers the patch-space type; genuinely identical lines
/// that merely fall inside a hunk still compare equal and stay `c`.
pub(crate) fn row_is_novel(
    lhs_line: Option<LineNumber>,
    rhs_line: Option<LineNumber>,
    lhs_lines: &[&str],
    rhs_lines: &[&str],
) -> bool {
    match (lhs_line, rhs_line) {
        (Some(lhs_line), Some(rhs_line)) => {
            lhs_lines.get(lhs_line.as_usize()) != rhs_lines.get(rhs_line.as_usize())
        }
        _ => true,
    }
}

/// Formats the per-cell diff-metadata OSC sequences for a file's rendered diff.
///
/// One instance is created per file (the `file` field is fixed for its
/// lifetime). Only constructed when a host negotiated a version via `OSC1717`;
/// otherwise `from_env` returns `None` and the display code emits nothing,
/// leaving difftastic's output byte-for-byte unchanged.
pub(crate) struct DiffLineMetadata {
    version: u32,
    file: String,
}

impl DiffLineMetadata {
    pub(crate) fn from_env(file: &str) -> Option<Self> {
        negotiated_version().map(|version| Self {
            version,
            file: file.to_owned(),
        })
    }

    /// OSC for the old-file (left) column cell of an aligned row, or `""` when
    /// there is no left content (the blank left half of a pure addition). A
    /// novel old line (novel in patch space -- see [`row_is_novel`]) is a
    /// deletion (`d`, carrying both line numbers); a non-novel one is context
    /// (`c`).
    ///
    /// `new_line` is the new-file position this old line sits at: the aligned
    /// new line when the row has one (a modification, or a context line shown on
    /// both sides), else the next new-file line after `prev_rhs`. A pure
    /// deletion has no new-file line of its own, so it sits at the position the
    /// following new line will occupy -- mirroring `patch.LineNumberOfLine` and
    /// delta's deletion convention. (difftastic, unlike a unified-diff pager,
    /// keeps no linear new-file counter; the previous aligned new line is the
    /// only thing it has to derive this from.)
    pub(crate) fn left_cell(
        &self,
        lhs_line: Option<LineNumber>,
        rhs_line: Option<LineNumber>,
        novel: bool,
        prev_rhs: Option<LineNumber>,
    ) -> String {
        let Some(lhs_line) = lhs_line else {
            return String::new();
        };
        let new_line = match rhs_line {
            Some(rhs_line) => rhs_line.as_usize() + 1,
            None => prev_rhs.map_or(1, |n| n.as_usize() + 2),
        };
        if novel {
            self.osc('d', new_line, Some(lhs_line.as_usize() + 1))
        } else {
            self.osc('c', new_line, None)
        }
    }

    /// OSC for the new-file (right) column cell of an aligned row, or `""` when
    /// there is no right content (the blank right half of a pure deletion). A
    /// novel new line (novel in patch space -- see [`row_is_novel`]) is an
    /// addition (`a`); a non-novel one is context (`c`).
    pub(crate) fn right_cell(&self, rhs_line: Option<LineNumber>, novel: bool) -> String {
        let Some(rhs_line) = rhs_line else {
            return String::new();
        };
        let type_char = if novel { 'a' } else { 'c' };
        self.osc(type_char, rhs_line.as_usize() + 1, None)
    }

    /// OSC for a line of a single-column whole-file addition or deletion (the
    /// path difftastic takes when one side is empty). Every line is novel: a
    /// right column is all additions, a left column all deletions. A deleted
    /// file has no new-file content, so its deletions sit at new-line 0 (as
    /// delta emits for `@@ -1,N +0,0 @@`).
    pub(crate) fn single_column_cell(&self, side: Side, line_idx: usize) -> String {
        match side {
            Side::Right => self.osc('a', line_idx + 1, None),
            Side::Left => self.osc('d', 0, Some(line_idx + 1)),
        }
    }

    /// Prefix every row of a header banner with its OSC record(s). difftastic
    /// renders no `@@`/`diff --git` rows; instead it prints one banner per hunk
    /// (`path --- N/total --- Format`) that announces both the file and the
    /// hunk. Every banner is a hunk header, so it carries that hunk's `h`
    /// record (`new_line` is the hunk's first new-file line); the first hunk's
    /// banner is also the only row announcing the file, so it additionally
    /// carries the file's `f` record -- before the `h`, per the combined-header
    /// rule (spec §5.5). An `f` never carries line numbers.
    ///
    /// The banner is one row, or two when the first hunk also shows a rename's
    /// old path -- and spec §6.4 wants every row of a header block tagged, so
    /// each row gets the same record(s).
    pub(crate) fn header_banner(
        &self,
        is_first_hunk: bool,
        new_line: usize,
        banner: &str,
    ) -> String {
        let mut prefix = String::new();
        if is_first_hunk {
            prefix.push_str(&format!(
                "{OSC};{version};f;;;{file}{ST}",
                version = self.version,
                file = self.file,
            ));
        }
        prefix.push_str(&self.osc('h', new_line, None));
        format!(
            "{}{}",
            prefix,
            banner.replace('\n', &format!("\n{}", prefix))
        )
    }

    fn osc(&self, type_char: char, new_line: usize, old_line: Option<usize>) -> String {
        let old_field = old_line.map_or(String::new(), |n| n.to_string());
        format!(
            "{OSC};{version};{type_char};{new_line};{old_field};{file}{ST}",
            version = self.version,
            file = self.file,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn metadata() -> DiffLineMetadata {
        DiffLineMetadata {
            version: 1,
            file: "a/b.txt".to_owned(),
        }
    }

    #[test]
    fn test_pick_version() {
        assert_eq!(pick_version("V1"), Some(1));
        assert_eq!(pick_version("V1,V2"), Some(1)); // we cap at SUPPORTED_VERSION
        assert_eq!(pick_version("V2,V3"), None); // disjoint with what we emit
        assert_eq!(pick_version(""), None);
        assert_eq!(pick_version("garbage"), None);
    }

    #[test]
    fn test_handshake_is_version_only() {
        // The handshake carries only the version (no further fields), so a host tells
        // it apart from a per-line record by field count.
        assert_eq!(handshake_for_version(1), "\x1b]1717;1\x1b\\");
    }

    #[test]
    fn test_context_line_is_symmetric() {
        // An unchanged line aligned on both sides: the same `c` record (keyed on
        // the new-file line) is emitted before each column's cell.
        let md = metadata();
        let left = md.left_cell(Some(2.into()), Some(2.into()), false, None);
        let right = md.right_cell(Some(2.into()), false);
        assert_eq!(left, "\x1b]1717;1;c;3;;a/b.txt\x1b\\");
        assert_eq!(left, right);
    }

    #[test]
    fn test_modification_splits_into_delete_and_add() {
        // `old(3)` -> `new(3)`: the left cell is the deletion (both numbers),
        // the right cell the addition (new number only).
        let md = metadata();
        assert_eq!(
            md.left_cell(Some(2.into()), Some(2.into()), true, None),
            "\x1b]1717;1;d;3;3;a/b.txt\x1b\\"
        );
        assert_eq!(
            md.right_cell(Some(2.into()), true),
            "\x1b]1717;1;a;3;;a/b.txt\x1b\\"
        );
    }

    #[test]
    fn test_pure_deletion_new_line_follows_previous_new_line() {
        // A deletion has no new-file line of its own; it sits at the new-file
        // position the next new line will take (previous new line + 1).
        let md = metadata();
        // previous new line was the 1-based line 1 (0-based 0) -> deletion at 2.
        assert_eq!(
            md.left_cell(Some(1.into()), None, true, Some(0.into())),
            "\x1b]1717;1;d;2;2;a/b.txt\x1b\\"
        );
        // No previous new line (deletion before any new content) -> 1.
        assert_eq!(
            md.left_cell(Some(0.into()), None, true, None),
            "\x1b]1717;1;d;1;1;a/b.txt\x1b\\"
        );
    }

    #[test]
    fn test_pure_addition_and_blank_counterpart() {
        let md = metadata();
        assert_eq!(
            md.right_cell(Some(4.into()), true),
            "\x1b]1717;1;a;5;;a/b.txt\x1b\\"
        );
        // The blank counterpart half of a pure add/delete carries no metadata.
        assert_eq!(md.left_cell(None, Some(4.into()), false, None), "");
        assert_eq!(md.right_cell(None, false), "");
    }

    #[test]
    fn test_whole_file_single_column() {
        let md = metadata();
        assert_eq!(
            md.single_column_cell(Side::Right, 0),
            "\x1b]1717;1;a;1;;a/b.txt\x1b\\"
        );
        // A deleted file has no new-file content, so deletions sit at new-line 0.
        assert_eq!(
            md.single_column_cell(Side::Left, 0),
            "\x1b]1717;1;d;0;1;a/b.txt\x1b\\"
        );
    }

    #[test]
    fn test_header_banner_file_and_hunk() {
        // Every banner is a hunk header (`h`, carrying the hunk's first line);
        // the first hunk's banner also announces the file, so it additionally
        // carries the `f` record -- first, and without line numbers (spec §5.5).
        let md = metadata();
        assert_eq!(
            md.header_banner(true, 1, "b.txt --- Rust"),
            "\x1b]1717;1;f;;;a/b.txt\x1b\\\x1b]1717;1;h;1;;a/b.txt\x1b\\b.txt --- Rust"
        );
        assert_eq!(
            md.header_banner(false, 16, "b.txt --- 2/2 --- Rust"),
            "\x1b]1717;1;h;16;;a/b.txt\x1b\\b.txt --- 2/2 --- Rust"
        );
    }

    #[test]
    fn test_header_banner_tags_every_row() {
        // A rename's first-hunk banner spans two rows (path, then old path);
        // each row carries the same records (spec §6.4).
        let md = metadata();
        assert_eq!(
            md.header_banner(true, 1, "new.txt --- Rust\nrenamed from old.txt"),
            "\x1b]1717;1;f;;;a/b.txt\x1b\\\x1b]1717;1;h;1;;a/b.txt\x1b\\new.txt --- Rust\n\
             \x1b]1717;1;f;;;a/b.txt\x1b\\\x1b]1717;1;h;1;;a/b.txt\x1b\\renamed from old.txt"
        );
    }

    #[test]
    fn test_row_is_novel_compares_contents_not_tokens() {
        let lhs_lines = ["foo(1)", "", "same"];
        let rhs_lines = ["foo(1, 0)", "same"];

        // A modification whose change is only added tokens: the old line has no
        // novel tokens, but the contents differ, so the row is a change.
        assert!(row_is_novel(
            Some(0.into()),
            Some(0.into()),
            &lhs_lines,
            &rhs_lines
        ));
        // One-sided rows are always changes -- including blank lines, which
        // have no tokens at all.
        assert!(row_is_novel(Some(1.into()), None, &lhs_lines, &rhs_lines));
        assert!(row_is_novel(None, Some(1.into()), &lhs_lines, &rhs_lines));
        // An identical line that merely sits inside a hunk stays context.
        assert!(!row_is_novel(
            Some(2.into()),
            Some(1.into()),
            &lhs_lines,
            &rhs_lines
        ));
    }

    #[test]
    fn test_path_is_last_field_so_it_may_contain_semicolons() {
        let md = DiffLineMetadata {
            version: 1,
            file: "weird;name.txt".to_owned(),
        };
        assert_eq!(
            md.right_cell(Some(0.into()), true),
            "\x1b]1717;1;a;1;;weird;name.txt\x1b\\"
        );
    }
}
