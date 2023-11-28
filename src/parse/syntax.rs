//! Syntax tree definitions with change metadata.

#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.

use std::{cell::Cell, env, fmt, hash::Hash, num::NonZeroU32};

use line_numbers::LinePositions;
use line_numbers::SingleLineSpan;
use typed_arena::Arena;

use self::Syntax::*;
use crate::words::split_words_and_numbers;
use crate::{
    diff::changes::ChangeKind,
    diff::changes::{ChangeKind::*, ChangeMap},
    diff::myers_diff,
    hash::DftHashMap,
    lines::is_all_whitespace,
};

/// A Debug implementation that does not recurse into the
/// corresponding node mentioned for Unchanged. Otherwise we will
/// infinitely loop on unchanged nodes, which both point to the other.
impl<'a> fmt::Debug for ChangeKind<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Unchanged(node) => format!("Unchanged(ID: {})", node.id()),
            ReplacedComment(lhs_node, rhs_node) | ReplacedString(lhs_node, rhs_node) => {
                let change_kind = if let ReplacedComment(_, _) = self {
                    "ReplacedComment"
                } else {
                    "ReplacedString"
                };

                format!(
                    "{}(lhs ID: {}, rhs ID: {})",
                    change_kind,
                    lhs_node.id(),
                    rhs_node.id()
                )
            }
            Novel => "Novel".to_owned(),
        };
        f.write_str(&desc)
    }
}

pub(crate) type SyntaxId = NonZeroU32;

/// Fields that are common to both `Syntax::List` and `Syntax::Atom`.
pub(crate) struct SyntaxInfo<'a> {
    /// The previous node with the same parent as this one.
    previous_sibling: Cell<Option<&'a Syntax<'a>>>,
    /// The next node with the same parent as this one.
    next_sibling: Cell<Option<&'a Syntax<'a>>>,
    /// The syntax node that occurs before this one, in a depth-first
    /// tree traversal.
    prev: Cell<Option<&'a Syntax<'a>>>,
    /// The parent syntax node, if present.
    parent: Cell<Option<&'a Syntax<'a>>>,
    /// The number of nodes that are ancestors of this one.
    num_ancestors: Cell<u32>,
    pub(crate) num_after: Cell<usize>,
    /// A number that uniquely identifies this syntax node.
    unique_id: Cell<SyntaxId>,
    /// A number that uniquely identifies the content of this syntax
    /// node. This may be the same as nodes on the other side of the
    /// diff, or nodes at different positions.
    ///
    /// Values are sequential, not hashes. Collisions never occur.
    content_id: Cell<u32>,
    /// Is this the only node with this content? Ignores nodes on the
    /// other side.
    content_is_unique: Cell<bool>,
}

impl<'a> SyntaxInfo<'a> {
    pub(crate) fn new() -> Self {
        Self {
            previous_sibling: Cell::new(None),
            next_sibling: Cell::new(None),
            prev: Cell::new(None),
            parent: Cell::new(None),
            num_ancestors: Cell::new(0),
            num_after: Cell::new(0),
            unique_id: Cell::new(NonZeroU32::new(u32::MAX).unwrap()),
            content_id: Cell::new(0),
            content_is_unique: Cell::new(false),
        }
    }
}

impl<'a> Default for SyntaxInfo<'a> {
    fn default() -> Self {
        Self::new()
    }
}

pub(crate) enum Syntax<'a> {
    List {
        info: SyntaxInfo<'a>,
        open_position: Vec<SingleLineSpan>,
        open_content: String,
        children: Vec<&'a Syntax<'a>>,
        close_position: Vec<SingleLineSpan>,
        close_content: String,
        num_descendants: u32,
    },
    Atom {
        info: SyntaxInfo<'a>,
        position: Vec<SingleLineSpan>,
        content: String,
        kind: AtomKind,
    },
}

fn dbg_pos(pos: &[SingleLineSpan]) -> String {
    match pos {
        [] => "-".into(),
        [pos] => format!("{}:{}-{}", pos.line.0, pos.start_col, pos.end_col),
        [start, .., end] => format!(
            "{}:{}-{}:{}",
            start.line.0, start.start_col, end.line.0, end.end_col
        ),
    }
}

impl<'a> fmt::Debug for Syntax<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            List {
                open_content,
                open_position,
                children,
                close_content,
                close_position,
                info,
                ..
            } => {
                let mut ds = f.debug_struct(&format!(
                    "List id:{} content:{}",
                    self.id(),
                    self.content_id()
                ));

                ds.field("open_content", &open_content)
                    .field("open_position", &dbg_pos(open_position))
                    .field("children", &children)
                    .field("close_content", &close_content)
                    .field("close_position", &dbg_pos(close_position));

                if env::var("DFT_VERBOSE").is_ok() {
                    let next_sibling_s = match info.next_sibling.get() {
                        Some(List { .. }) => "Some(List)",
                        Some(Atom { .. }) => "Some(Atom)",
                        None => "None",
                    };
                    ds.field("next_sibling", &next_sibling_s);
                }

                ds.finish()
            }
            Atom {
                content,
                position,
                info,
                kind: highlight,
                ..
            } => {
                let mut ds = f.debug_struct(&format!(
                    "Atom id:{} content:{}",
                    self.id(),
                    self.content_id()
                ));
                ds.field("content", &content);
                ds.field("position", &dbg_pos(position));

                if env::var("DFT_VERBOSE").is_ok() {
                    ds.field("highlight", highlight);
                    let next_sibling_s = match info.next_sibling.get() {
                        Some(List { .. }) => "Some(List)",
                        Some(Atom { .. }) => "Some(Atom)",
                        None => "None",
                    };
                    ds.field("next_sibling", &next_sibling_s);
                }

                ds.finish()
            }
        }
    }
}

impl<'a> Syntax<'a> {
    pub(crate) fn new_list(
        arena: &'a Arena<Syntax<'a>>,
        open_content: &str,
        open_position: Vec<SingleLineSpan>,
        children: Vec<&'a Syntax<'a>>,
        close_content: &str,
        close_position: Vec<SingleLineSpan>,
    ) -> &'a Syntax<'a> {
        // Skip empty atoms: they aren't displayed, so there's no
        // point making our syntax tree bigger. These occur when we're
        // parsing incomplete or malformed programs.
        let children = children
            .into_iter()
            .filter(|n| match n {
                List { .. } => true,
                Atom { content, .. } => !content.is_empty(),
            })
            .collect::<Vec<_>>();

        // Don't bother creating a list if we have no open/close and
        // there's only one child. This occurs in small files with
        // thorough tree-sitter parsers: you get parse trees like:
        //
        // (compilation-unit (top-level-def (function ...)))
        //
        // This is a small performance win as it makes the difftastic
        // syntax tree smaller. It also really helps when looking at
        // debug output for small inputs.
        if children.len() == 1 && open_content.is_empty() && close_content.is_empty() {
            return children[0];
        }

        let mut num_descendants = 0;
        for child in &children {
            num_descendants += match child {
                List {
                    num_descendants, ..
                } => *num_descendants + 1,
                Atom { .. } => 1,
            };
        }

        arena.alloc(List {
            info: SyntaxInfo::default(),
            open_position,
            open_content: open_content.into(),
            close_content: close_content.into(),
            close_position,
            children,
            num_descendants,
        })
    }

    pub(crate) fn new_atom(
        arena: &'a Arena<Syntax<'a>>,
        mut position: Vec<SingleLineSpan>,
        mut content: &str,
        kind: AtomKind,
    ) -> &'a Syntax<'a> {
        // If a parser hasn't cleaned up \r on CRLF files with
        // comments, discard it.
        if content.ends_with('\r') {
            content = &content[..content.len() - 1];
        }

        if kind == AtomKind::Comment && content.ends_with('\n') {
            position.pop();
            content = &content[..content.len() - 1];
        }

        arena.alloc(Atom {
            info: SyntaxInfo::default(),
            position,
            content: content.into(),
            kind,
        })
    }

    pub(crate) fn info(&self) -> &SyntaxInfo<'a> {
        match self {
            List { info, .. } | Atom { info, .. } => info,
        }
    }

    pub(crate) fn parent(&self) -> Option<&'a Syntax<'a>> {
        self.info().parent.get()
    }

    pub(crate) fn next_sibling(&self) -> Option<&'a Syntax<'a>> {
        self.info().next_sibling.get()
    }

    /// A unique ID of this syntax node. Every node is guaranteed to
    /// have a different value.
    pub(crate) fn id(&self) -> SyntaxId {
        self.info().unique_id.get()
    }

    /// A content ID of this syntax node. Two nodes have the same
    /// content ID if they have the same content, regardless of
    /// position.
    pub(crate) fn content_id(&self) -> u32 {
        self.info().content_id.get()
    }

    pub(crate) fn content_is_unique(&self) -> bool {
        self.info().content_is_unique.get()
    }

    pub(crate) fn num_ancestors(&self) -> u32 {
        self.info().num_ancestors.get()
    }

    pub(crate) fn dbg_content(&self) -> String {
        match self {
            List {
                open_content,
                open_position,
                close_content,
                ..
            } => {
                let line = open_position
                    .first()
                    .map(|p| p.line.display())
                    .unwrap_or_else(|| "?".to_owned());

                format!("line:{} {} ... {}", line, open_content, close_content)
            }
            Atom {
                content, position, ..
            } => {
                let line = position
                    .first()
                    .map_or_else(|| "?".to_owned(), |p| p.line.display());

                format!("line:{} {}", line, content)
            }
        }
    }
}

pub(crate) fn comment_positions<'a>(nodes: &[&'a Syntax<'a>]) -> Vec<SingleLineSpan> {
    fn walk_comment_positions(node: &Syntax<'_>, positions: &mut Vec<SingleLineSpan>) {
        match node {
            List { children, .. } => {
                for child in children {
                    walk_comment_positions(child, positions);
                }
            }
            Atom { position, kind, .. } => {
                if matches!(kind, AtomKind::Comment) {
                    positions.extend(position);
                }
            }
        }
    }

    let mut res = vec![];
    for node in nodes {
        walk_comment_positions(node, &mut res);
    }

    res
}

/// Initialise all the fields in `SyntaxInfo`.
pub(crate) fn init_all_info<'a>(lhs_roots: &[&'a Syntax<'a>], rhs_roots: &[&'a Syntax<'a>]) {
    init_info(lhs_roots, rhs_roots);
    init_next_prev(lhs_roots);
    init_next_prev(rhs_roots);
}

fn init_info<'a>(lhs_roots: &[&'a Syntax<'a>], rhs_roots: &[&'a Syntax<'a>]) {
    let mut id = NonZeroU32::new(1).unwrap();
    init_info_on_side(lhs_roots, &mut id);
    init_info_on_side(rhs_roots, &mut id);

    let mut existing = DftHashMap::default();
    set_content_id(lhs_roots, &mut existing);
    set_content_id(rhs_roots, &mut existing);

    set_content_is_unique(lhs_roots);
    set_content_is_unique(rhs_roots);
}

type ContentKey = (Option<String>, Option<String>, Vec<u32>, bool, bool);

fn set_content_id(nodes: &[&Syntax], existing: &mut DftHashMap<ContentKey, u32>) {
    for node in nodes {
        let key: ContentKey = match node {
            List {
                open_content,
                close_content,
                children,
                ..
            } => {
                // Recurse first, so children all have their content_id set.
                set_content_id(children, existing);

                let children_content_ids: Vec<_> =
                    children.iter().map(|c| c.info().content_id.get()).collect();

                (
                    Some(open_content.clone()),
                    Some(close_content.clone()),
                    children_content_ids,
                    true,
                    true,
                )
            }
            Atom {
                content,
                kind: highlight,
                ..
            } => {
                let is_comment = *highlight == AtomKind::Comment;
                let clean_content = if is_comment && content.lines().count() > 1 {
                    content
                        .lines()
                        .map(|l| l.trim_start())
                        .collect::<Vec<_>>()
                        .join("\n")
                        .to_string()
                } else {
                    content.clone()
                };
                (Some(clean_content), None, vec![], false, is_comment)
            }
        };

        // Ensure the ID is always greater than zero, so we can
        // distinguish an uninitialised SyntaxInfo value.
        let next_id = existing.len() as u32 + 1;
        let content_id = existing.entry(key).or_insert(next_id);
        node.info().content_id.set(*content_id);
    }
}

fn set_num_after(nodes: &[&Syntax], parent_num_after: usize) {
    for (i, node) in nodes.iter().enumerate() {
        let num_after = parent_num_after + nodes.len() - 1 - i;
        node.info().num_after.set(num_after);

        if let List { children, .. } = node {
            set_num_after(children, num_after);
        }
    }
}
pub(crate) fn init_next_prev<'a>(roots: &[&'a Syntax<'a>]) {
    set_prev_sibling(roots);
    set_next_sibling(roots);
    set_prev(roots, None);
}

/// Set all the `SyntaxInfo` values for all the `roots` on a single
/// side (LHS or RHS).
fn init_info_on_side<'a>(roots: &[&'a Syntax<'a>], next_id: &mut SyntaxId) {
    set_parent(roots, None);
    set_num_ancestors(roots, 0);
    set_num_after(roots, 0);
    set_unique_id(roots, next_id);
}

fn set_unique_id(nodes: &[&Syntax], next_id: &mut SyntaxId) {
    for node in nodes {
        node.info().unique_id.set(*next_id);
        *next_id = NonZeroU32::new(u32::from(*next_id) + 1)
            .expect("Should not have more than u32::MAX nodes");
        if let List { children, .. } = node {
            set_unique_id(children, next_id);
        }
    }
}

/// Assumes that `set_content_id` has already run.
fn find_nodes_with_unique_content(nodes: &[&Syntax], counts: &mut DftHashMap<u32, usize>) {
    for node in nodes {
        *counts.entry(node.content_id()).or_insert(0) += 1;
        if let List { children, .. } = node {
            find_nodes_with_unique_content(children, counts);
        }
    }
}

fn set_content_is_unique_from_counts(nodes: &[&Syntax], counts: &DftHashMap<u32, usize>) {
    for node in nodes {
        let count = counts
            .get(&node.content_id())
            .expect("Count should be present");
        node.info().content_is_unique.set(*count == 1);

        if let List { children, .. } = node {
            set_content_is_unique_from_counts(children, counts);
        }
    }
}

fn set_content_is_unique(nodes: &[&Syntax]) {
    let mut counts = DftHashMap::default();
    find_nodes_with_unique_content(nodes, &mut counts);
    set_content_is_unique_from_counts(nodes, &counts);
}

fn set_prev_sibling<'a>(nodes: &[&'a Syntax<'a>]) {
    let mut prev = None;

    for node in nodes {
        node.info().previous_sibling.set(prev);
        prev = Some(node);

        if let List { children, .. } = node {
            set_prev_sibling(children);
        }
    }
}

fn set_next_sibling<'a>(nodes: &[&'a Syntax<'a>]) {
    for (i, node) in nodes.iter().enumerate() {
        let sibling = nodes.get(i + 1).copied();
        node.info().next_sibling.set(sibling);

        if let List { children, .. } = node {
            set_next_sibling(children);
        }
    }
}

/// For every syntax node in the tree, mark the previous node
/// according to a preorder traversal.
fn set_prev<'a>(nodes: &[&'a Syntax<'a>], parent: Option<&'a Syntax<'a>>) {
    for (i, node) in nodes.iter().enumerate() {
        let node_prev = if i == 0 { parent } else { Some(nodes[i - 1]) };

        node.info().prev.set(node_prev);
        if let List { children, .. } = node {
            set_prev(children, Some(node));
        }
    }
}

fn set_parent<'a>(nodes: &[&'a Syntax<'a>], parent: Option<&'a Syntax<'a>>) {
    for node in nodes {
        node.info().parent.set(parent);
        if let List { children, .. } = node {
            set_parent(children, Some(node));
        }
    }
}

fn set_num_ancestors(nodes: &[&Syntax], num_ancestors: u32) {
    for node in nodes {
        node.info().num_ancestors.set(num_ancestors);

        if let List { children, .. } = node {
            set_num_ancestors(children, num_ancestors + 1);
        }
    }
}

impl<'a> PartialEq for Syntax<'a> {
    fn eq(&self, other: &Self) -> bool {
        debug_assert!(self.content_id() > 0);
        debug_assert!(other.content_id() > 0);
        self.content_id() == other.content_id()
    }
}
impl<'a> Eq for Syntax<'a> {}

/// Different types of strings. We want to diff these the same way,
/// but highlight them differently.
#[derive(PartialEq, Eq, Debug, Clone, Copy, Hash)]
pub(crate) enum StringKind {
    /// A string literal, such as `"foo"`.
    StringLiteral,
    /// Plain text, such as the content of `<p>foo</p>`.
    Text,
}

#[derive(PartialEq, Eq, Debug, Clone, Copy, Hash)]
pub(crate) enum AtomKind {
    Normal,
    // TODO: We should either have a AtomWithWords(HighlightKind) or a
    // separate String, Text and Comment kind.
    String(StringKind),
    Type,
    Comment,
    Keyword,
    TreeSitterError,
}

/// Unlike atoms, tokens can be delimiters like `{`.
#[derive(PartialEq, Eq, Debug, Clone, Copy)]
pub(crate) enum TokenKind {
    Delimiter,
    Atom(AtomKind),
}

/// A matched token (an atom, a delimiter, or a comment word).
#[derive(PartialEq, Eq, Debug, Clone)]
pub(crate) enum MatchKind {
    UnchangedToken {
        highlight: TokenKind,
        self_pos: Vec<SingleLineSpan>,
        opposite_pos: Vec<SingleLineSpan>,
    },
    Novel {
        highlight: TokenKind,
    },
    NovelLinePart {
        highlight: TokenKind,
        self_pos: SingleLineSpan,
        opposite_pos: Vec<SingleLineSpan>,
    },
    NovelWord {
        highlight: TokenKind,
    },
    Ignored {
        highlight: TokenKind,
    },
}

impl MatchKind {
    pub(crate) fn is_novel(&self) -> bool {
        matches!(
            self,
            MatchKind::Novel { .. } | MatchKind::NovelWord { .. } | MatchKind::NovelLinePart { .. }
        )
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct MatchedPos {
    pub(crate) kind: MatchKind,
    pub(crate) pos: SingleLineSpan,
}

/// Given the text `content` from a comment or strings, split it into
/// MatchedPos values for the novel and unchanged words.
///
/// If there is negligible text in common with `opposite_content`,
/// treat the whole `content` as a single novel region.
fn split_atom_words(
    content: &str,
    pos: &[SingleLineSpan],
    opposite_content: &str,
    opposite_pos: &[SingleLineSpan],
    kind: AtomKind,
) -> Vec<MatchedPos> {
    debug_assert!(kind == AtomKind::Comment || matches!(kind, AtomKind::String(_)));

    // TODO: merge adjacent single-line comments unless there are
    // blank lines between them.
    let content_parts = split_words_and_numbers(content);
    let other_parts = split_words_and_numbers(opposite_content);

    let word_diffs = myers_diff::slice_by_hash(&content_parts, &other_parts);

    if !has_common_words(&word_diffs) {
        return pos
            .iter()
            .map(|line| MatchedPos {
                kind: MatchKind::Novel {
                    highlight: TokenKind::Atom(kind),
                },
                pos: *line,
            })
            .collect();
    }

    let content_newlines = LinePositions::from(content);
    let opposite_content_newlines = LinePositions::from(opposite_content);

    let mut offset = 0;
    let mut opposite_offset = 0;

    let mut res = vec![];
    for diff_res in word_diffs {
        match diff_res {
            myers_diff::DiffResult::Left(word) => {
                // This word is novel to this side.
                if !is_all_whitespace(word) {
                    res.push(MatchedPos {
                        kind: MatchKind::NovelWord {
                            highlight: TokenKind::Atom(kind),
                        },
                        pos: content_newlines.from_region_relative_to(
                            // TODO: don't assume a single line atom.
                            pos[0],
                            offset,
                            offset + word.len(),
                        )[0],
                    });
                }
                offset += word.len();
            }
            myers_diff::DiffResult::Both(word, opposite_word) => {
                // This word is present on both sides.
                // TODO: don't assume this atom is on a single line.
                let word_pos =
                    content_newlines.from_region_relative_to(pos[0], offset, offset + word.len())
                        [0];
                let opposite_word_pos = opposite_content_newlines.from_region_relative_to(
                    opposite_pos[0],
                    opposite_offset,
                    opposite_offset + opposite_word.len(),
                );

                res.push(MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(kind),
                        self_pos: word_pos,
                        opposite_pos: opposite_word_pos,
                    },
                    pos: word_pos,
                });
                offset += word.len();
                opposite_offset += opposite_word.len();
            }
            myers_diff::DiffResult::Right(opposite_word) => {
                // Only exists on other side, nothing to do on this side.
                opposite_offset += opposite_word.len();
            }
        }
    }

    res
}

/// Are there sufficient common words that we should only highlight
/// individual changed words?
fn has_common_words(word_diffs: &Vec<myers_diff::DiffResult<&&str>>) -> bool {
    let mut novel_count = 0;
    let mut unchanged_count = 0;

    for word_diff in word_diffs {
        match word_diff {
            myers_diff::DiffResult::Both(word, _) => {
                if **word != " " {
                    unchanged_count += 1;
                }
            }
            _ => {
                novel_count += 1;
            }
        }
    }

    // We want more than two unchanged words, because the text content
    // includes the comment or string delimiters.
    //
    // A sufficiently similar set of words is when more than 50% of
    // the words are common between the two sides. We multiply by two
    // because non-matching words gives us two novel words, whereas
    // matched words only gives us one unchanged word.
    unchanged_count > 2 && unchanged_count * 2 >= novel_count
}

/// Skip line spans at the beginning or end that have zero width.
fn filter_empty_ends(line_spans: &[SingleLineSpan]) -> Vec<SingleLineSpan> {
    let mut spans: Vec<SingleLineSpan> = vec![];

    for (i, span) in line_spans.iter().enumerate() {
        if (i == 0 || i == line_spans.len() - 1) && span.start_col == span.end_col {
            continue;
        }

        spans.push(*span);
    }

    spans
}

impl MatchedPos {
    fn new(
        ck: ChangeKind,
        highlight: TokenKind,
        pos: &[SingleLineSpan],
        is_close_delim: bool,
    ) -> Vec<Self> {
        // Don't create a MatchedPos for empty positions at the start
        // or end. We still want empty positions in the middle of
        // multiline atoms, as a multiline string literal may include
        // empty lines.
        let pos = filter_empty_ends(pos);

        match ck {
            ReplacedComment(this, opposite) | ReplacedString(this, opposite) => {
                let this_content = match this {
                    List { .. } => unreachable!(),
                    Atom { content, .. } => content,
                };
                let (opposite_content, opposite_pos) = match opposite {
                    List { .. } => unreachable!(),
                    Atom {
                        content, position, ..
                    } => (content, position),
                };

                let kind = if let ReplacedString(this, _) = ck {
                    match this {
                        Atom {
                            kind: AtomKind::String(StringKind::Text),
                            ..
                        } => AtomKind::String(StringKind::Text),
                        _ => AtomKind::String(StringKind::StringLiteral),
                    }
                } else {
                    AtomKind::Comment
                };

                split_atom_words(this_content, &pos, opposite_content, opposite_pos, kind)
            }
            Unchanged(opposite) => {
                let opposite_pos = match opposite {
                    List {
                        open_position,
                        close_position,
                        ..
                    } => {
                        if is_close_delim {
                            close_position.clone()
                        } else {
                            open_position.clone()
                        }
                    }
                    Atom { position, .. } => position.clone(),
                };

                let opposite_pos_len = opposite_pos.len();
                let kind = MatchKind::UnchangedToken {
                    highlight,
                    self_pos: pos.to_vec(),
                    opposite_pos,
                };

                // Create a MatchedPos for every line that `pos` covers.
                let mut res = vec![];
                for line_pos in &pos {
                    res.push(Self {
                        kind: kind.clone(),
                        pos: *line_pos,
                    });

                    // Ensure we have the same number of unchanged
                    // MatchedPos on the LHS and RHS. This allows us
                    // to consider unchanged MatchedPos values
                    // pairwise.
                    if res.len() == opposite_pos_len {
                        break;
                    }
                }
                res
            }
            Novel => {
                let kind = MatchKind::Novel { highlight };
                // Create a MatchedPos for every line that `pos` covers.
                let mut res = vec![];
                for line_pos in &pos {
                    // Don't create a MatchedPos for entirely empty positions. This
                    // occurs when we have lists with empty open/close
                    // delimiter positions, such as the top-level list of syntax items.
                    if pos.len() == 1 && line_pos.start_col == line_pos.end_col {
                        continue;
                    }

                    res.push(Self {
                        kind: kind.clone(),
                        pos: *line_pos,
                    });
                }

                res
            }
        }
    }
}

/// Walk `nodes` and return a vec of all the changed positions.
pub(crate) fn change_positions<'a>(
    nodes: &[&'a Syntax<'a>],
    change_map: &ChangeMap<'a>,
) -> Vec<MatchedPos> {
    let mut positions = Vec::new();
    change_positions_(nodes, change_map, &mut positions);
    positions
}

fn change_positions_<'a>(
    nodes: &[&'a Syntax<'a>],
    change_map: &ChangeMap<'a>,
    positions: &mut Vec<MatchedPos>,
) {
    for node in nodes {
        let change = change_map
            .get(node)
            .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));

        match node {
            List {
                open_position,
                children,
                close_position,
                ..
            } => {
                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Delimiter,
                    open_position,
                    false,
                ));

                change_positions_(children, change_map, positions);

                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Delimiter,
                    close_position,
                    true,
                ));
            }
            Atom { position, kind, .. } => {
                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Atom(*kind),
                    position,
                    false,
                ));
            }
        }
    }
}

pub(crate) fn zip_pad_shorter<Tx: Clone, Ty: Clone>(
    lhs: &[Tx],
    rhs: &[Ty],
) -> Vec<(Option<Tx>, Option<Ty>)> {
    let mut res = vec![];

    let mut lhs_iter = lhs.iter();
    let mut rhs_iter = rhs.iter();
    loop {
        match (lhs_iter.next(), rhs_iter.next()) {
            (None, None) => break,
            (x, y) => res.push((x.cloned(), y.cloned())),
        }
    }

    res
}

/// Zip `lhs` with `rhs`, but repeat the last item from the shorter
/// slice.
pub(crate) fn zip_repeat_shorter<Tx: Clone, Ty: Clone>(lhs: &[Tx], rhs: &[Ty]) -> Vec<(Tx, Ty)> {
    let lhs_last: Tx = match lhs.last() {
        Some(last) => last.clone(),
        None => return vec![],
    };
    let rhs_last: Ty = match rhs.last() {
        Some(last) => last.clone(),
        None => return vec![],
    };

    let mut res = vec![];
    let mut lhs_iter = lhs.iter();
    let mut rhs_iter = rhs.iter();
    loop {
        match (lhs_iter.next(), rhs_iter.next()) {
            (None, None) => break,
            (x, y) => res.push((
                x.cloned().unwrap_or_else(|| lhs_last.clone()),
                y.cloned().unwrap_or_else(|| rhs_last.clone()),
            )),
        }
    }

    res
}

#[cfg(test)]
mod tests {
    use pretty_assertions::assert_eq;

    use super::*;

    /// Consider comment atoms as distinct to other atoms even if the
    /// content matches otherwise.
    #[test]
    fn test_comment_and_atom_differ() {
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 3,
        }];

        let arena = Arena::new();

        let comment = Syntax::new_atom(&arena, pos.clone(), "foo", AtomKind::Comment);
        let atom = Syntax::new_atom(&arena, pos, "foo", AtomKind::Normal);
        init_all_info(&[comment], &[atom]);

        assert_ne!(comment, atom);
    }

    #[test]
    fn test_new_atom_truncates_carriage_return() {
        let arena = Arena::new();
        let position = vec![];
        let content = "foo\r";

        let atom = Syntax::new_atom(&arena, position, content, AtomKind::Comment);

        match atom {
            List { .. } => unreachable!(),
            Atom { content, .. } => {
                assert_eq!(content, "foo");
            }
        }
    }

    #[test]
    fn test_new_atom_truncates_trailing_newline() {
        let arena = Arena::new();
        let position = vec![
            SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 8,
            },
            SingleLineSpan {
                line: 1.into(),
                start_col: 0,
                end_col: 1,
            },
        ];
        let content = ";; hello\n";

        let atom = Syntax::new_atom(&arena, position, content, AtomKind::Comment);

        match atom {
            List { .. } => unreachable!(),
            Atom {
                position, content, ..
            } => {
                assert_eq!(content, ";; hello");
                assert_eq!(
                    *position,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 8,
                    }]
                );
            }
        }
    }

    /// Ignore the syntax highighting kind when comparing
    /// atoms. Sometimes changing delimiter wrapping can change
    /// whether a parser thinks that a node is e.g. a type.
    #[test]
    fn test_atom_equality_ignores_highlighting() {
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 3,
        }];

        let arena = Arena::new();

        let type_atom = Syntax::new_atom(&arena, pos.clone(), "foo", AtomKind::Type);
        let atom = Syntax::new_atom(&arena, pos, "foo", AtomKind::Normal);
        init_all_info(&[type_atom], &[atom]);

        assert_eq!(type_atom, atom);
    }

    #[test]
    fn test_flatten_trivial_list() {
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 3,
        }];

        let arena = Arena::new();
        let atom = Syntax::new_atom(&arena, pos, "foo", AtomKind::Normal);

        let trivial_list = Syntax::new_list(&arena, "", vec![], vec![atom], "", vec![]);

        assert!(matches!(trivial_list, Atom { .. }));
    }

    #[test]
    fn test_ignore_empty_atoms() {
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 2,
        }];

        let arena = Arena::new();
        let atom = Syntax::new_atom(&arena, pos, "", AtomKind::Normal);

        let trivial_list = Syntax::new_list(&arena, "(", vec![], vec![atom], ")", vec![]);

        match trivial_list {
            List { children, .. } => {
                assert_eq!(children.len(), 0);
            }
            Atom { .. } => unreachable!(),
        }
    }

    #[test]
    fn test_multiline_comment_ignores_leading_whitespace() {
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 2,
            end_col: 3,
        }];

        let arena = Arena::new();

        let x = Syntax::new_atom(&arena, pos.clone(), "foo\nbar", AtomKind::Comment);
        let y = Syntax::new_atom(&arena, pos, "foo\n    bar", AtomKind::Comment);
        init_all_info(&[x], &[y]);

        assert_eq!(x, y);
    }

    #[test]
    fn test_split_atom_words() {
        let content = "abc def ghi novel";
        let pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 17,
        }];

        let opposite_content = "abc def ghi";
        let opposite_pos = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 11,
        }];

        let res = split_atom_words(
            content,
            &pos,
            opposite_content,
            &opposite_pos,
            AtomKind::Comment,
        );
        assert_eq!(
            res,
            vec![
                MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                        self_pos: SingleLineSpan {
                            line: 0.into(),
                            start_col: 0,
                            end_col: 3
                        },
                        opposite_pos: vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 0,
                            end_col: 3
                        }]
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 3
                    }
                },
                MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                        self_pos: SingleLineSpan {
                            line: 0.into(),
                            start_col: 3,
                            end_col: 4
                        },
                        opposite_pos: vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 3,
                            end_col: 4
                        }]
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 3,
                        end_col: 4
                    }
                },
                MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                        self_pos: SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 7
                        },
                        opposite_pos: vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 7
                        }]
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 4,
                        end_col: 7
                    }
                },
                MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                        self_pos: SingleLineSpan {
                            line: 0.into(),
                            start_col: 7,
                            end_col: 8
                        },
                        opposite_pos: vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 7,
                            end_col: 8
                        }]
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 7,
                        end_col: 8
                    }
                },
                MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                        self_pos: SingleLineSpan {
                            line: 0.into(),
                            start_col: 8,
                            end_col: 11
                        },
                        opposite_pos: vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 8,
                            end_col: 11
                        }]
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 8,
                        end_col: 11
                    }
                },
                MatchedPos {
                    kind: MatchKind::NovelWord {
                        highlight: TokenKind::Atom(AtomKind::Comment)
                    },
                    pos: SingleLineSpan {
                        line: 0.into(),
                        start_col: 12,
                        end_col: 17
                    }
                }
            ],
        );
    }
}
