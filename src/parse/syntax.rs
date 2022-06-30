//! Syntax tree definitions with change metadata.

#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.

use std::{cell::Cell, collections::HashMap, env, fmt, hash::Hash, num::NonZeroU32};
use typed_arena::Arena;

use crate::{
    diff::changes::ChangeKind,
    diff::changes::{ChangeKind::*, ChangeMap},
    diff::myers_diff,
    lines::{LineNumber, NewlinePositions},
    positions::SingleLineSpan,
};
use Syntax::*;

/// A Debug implementation that does not reucurse into the
/// corresponding node mentioned for Unchanged. Otherwise we will
/// infinitely loop on unchanged nodes, which both point to the other.
impl<'a> fmt::Debug for ChangeKind<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Unchanged(node) => format!("Unchanged(ID: {})", node.id()),
            ReplacedComment(lhs_node, rhs_node) => {
                format!(
                    "ReplacedComment(lhs ID: {}, rhs ID: {})",
                    lhs_node.id(),
                    rhs_node.id()
                )
            }
            Novel => "Novel".to_owned(),
        };
        f.write_str(&desc)
    }
}

pub type SyntaxId = NonZeroU32;

/// Fields that are common to both `Syntax::List` and `Syntax::Atom`.
pub struct SyntaxInfo<'a> {
    /// The previous node with the same parent as this one.
    previous_sibling: Cell<Option<&'a Syntax<'a>>>,
    /// The next node with the same parent as this one.
    next_sibling: Cell<Option<&'a Syntax<'a>>>,
    /// The syntax node that occurs before this one, in a depth-first
    /// tree traversal.
    prev: Cell<Option<&'a Syntax<'a>>>,
    /// The parent syntax node, if present.
    parent: Cell<Option<&'a Syntax<'a>>>,
    /// Does the previous syntax node occur on the same line as the
    /// first line of this node?
    prev_is_contiguous: Cell<bool>,
    /// The number of nodes that are ancestors of this one.
    num_ancestors: Cell<u32>,
    pub num_after: Cell<usize>,
    /// A number that uniquely identifies this syntax node.
    unique_id: Cell<SyntaxId>,
    /// A number that uniquely identifies the content of this syntax
    /// node. This may be the same as nodes on the other side of the
    /// diff, or nodes at different positions.
    ///
    /// Values are sequential, not hashes. Collisions never occur.
    content_id: Cell<u32>,
}

impl<'a> SyntaxInfo<'a> {
    pub fn new() -> Self {
        Self {
            previous_sibling: Cell::new(None),
            next_sibling: Cell::new(None),
            prev: Cell::new(None),
            parent: Cell::new(None),
            prev_is_contiguous: Cell::new(false),
            num_ancestors: Cell::new(0),
            num_after: Cell::new(0),
            unique_id: Cell::new(NonZeroU32::new(u32::MAX).unwrap()),
            content_id: Cell::new(0),
        }
    }
}

impl<'a> Default for SyntaxInfo<'a> {
    fn default() -> Self {
        Self::new()
    }
}

pub enum Syntax<'a> {
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
    pub fn new_list(
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

    pub fn new_atom(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
        kind: AtomKind,
    ) -> &'a Syntax<'a> {
        arena.alloc(Atom {
            info: SyntaxInfo::default(),
            position,
            content: content.into(),
            kind,
        })
    }

    pub fn info(&self) -> &SyntaxInfo<'a> {
        match self {
            List { info, .. } | Atom { info, .. } => info,
        }
    }

    pub fn parent(&self) -> Option<&'a Syntax<'a>> {
        self.info().parent.get()
    }

    pub fn next_sibling(&self) -> Option<&'a Syntax<'a>> {
        self.info().next_sibling.get()
    }

    pub fn num_after(&self) -> usize {
        self.info().num_after.get()
    }

    pub fn prev_is_contiguous(&self) -> bool {
        self.info().prev_is_contiguous.get()
    }

    /// A unique ID of this syntax node. Every node is guaranteed to
    /// have a different value.
    pub fn id(&self) -> SyntaxId {
        self.info().unique_id.get()
    }

    /// A content ID of this syntax node. Two nodes have the same
    /// content ID if they have the same content, regardless of
    /// position.
    pub fn content_id(&self) -> u32 {
        self.info().content_id.get()
    }

    pub fn num_ancestors(&self) -> u32 {
        self.info().num_ancestors.get()
    }

    pub fn dbg_content(&self) -> String {
        match self {
            List {
                open_content,
                open_position,
                close_content,
                ..
            } => {
                let line = open_position
                    .first()
                    .map(|p| format!("{}", p.line.one_indexed()))
                    .unwrap_or_else(|| "?".to_owned());

                format!("line:{} {} ... {}", line, open_content, close_content)
            }
            Atom {
                content, position, ..
            } => {
                let line = position
                    .first()
                    .map_or_else(|| "?".to_owned(), |p| p.line.one_indexed().to_string());

                format!("line:{} {}", line, content)
            }
        }
    }

    pub fn first_line(&self) -> Option<LineNumber> {
        let position = match self {
            List { open_position, .. } => open_position,
            Atom { position, .. } => position,
        };
        position.first().map(|lp| lp.line)
    }

    pub fn last_line(&self) -> Option<LineNumber> {
        let position = match self {
            List { close_position, .. } => close_position,
            Atom { position, .. } => position,
        };
        position.last().map(|lp| lp.line)
    }
}

/// Initialise all the fields in `SyntaxInfo`.
pub fn init_all_info<'a>(lhs_roots: &[&'a Syntax<'a>], rhs_roots: &[&'a Syntax<'a>]) {
    init_info(lhs_roots, rhs_roots);
    init_next_prev(lhs_roots);
    init_next_prev(rhs_roots);
}

fn init_info<'a>(lhs_roots: &[&'a Syntax<'a>], rhs_roots: &[&'a Syntax<'a>]) {
    let mut id = NonZeroU32::new(1).unwrap();
    init_info_single(lhs_roots, &mut id);
    init_info_single(rhs_roots, &mut id);

    let mut existing = HashMap::new();
    set_content_id(lhs_roots, &mut existing);
    set_content_id(rhs_roots, &mut existing);
}

type ContentKey = (Option<String>, Option<String>, Vec<u32>, bool, bool);

fn set_content_id(nodes: &[&Syntax], existing: &mut HashMap<ContentKey, u32>) {
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

fn set_num_after<'a>(nodes: &[&Syntax<'a>], parent_num_after: usize) {
    for (i, node) in nodes.iter().enumerate() {
        let num_after = parent_num_after + nodes.len() - 1 - i;
        node.info().num_after.set(num_after);

        if let List { children, .. } = node {
            set_num_after(children, num_after);
        }
    }
}
pub fn init_next_prev<'a>(roots: &[&'a Syntax<'a>]) {
    set_prev_sibling(roots);
    set_next_sibling(roots);
    set_prev(roots, None);
    set_prev_is_contiguous(roots);
}

fn init_info_single<'a>(roots: &[&'a Syntax<'a>], next_id: &mut SyntaxId) {
    set_parent(roots, None);
    set_num_ancestors(roots, 0);
    set_num_after(roots, 0);
    set_unique_id(roots, next_id);
}

fn set_unique_id<'a>(nodes: &[&'a Syntax<'a>], next_id: &mut SyntaxId) {
    for node in nodes {
        node.info().unique_id.set(*next_id);
        *next_id = NonZeroU32::new(u32::from(*next_id) + 1)
            .expect("Should not have more than u32::MAX nodes");
        if let List { children, .. } = node {
            set_unique_id(children, next_id);
        }
    }
}

fn set_prev_sibling<'a>(nodes: &[&'a Syntax<'a>]) {
    for (i, node) in nodes.iter().enumerate() {
        if i == 0 {
            continue;
        }

        let sibling = nodes.get(i - 1).copied();
        node.info().previous_sibling.set(sibling);

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

fn set_num_ancestors<'a>(nodes: &[&Syntax<'a>], num_ancestors: u32) {
    for node in nodes {
        node.info().num_ancestors.set(num_ancestors);

        if let List { children, .. } = node {
            set_num_ancestors(children, num_ancestors + 1);
        }
    }
}

fn set_prev_is_contiguous<'a>(roots: &[&Syntax<'a>]) {
    for node in roots {
        let is_contiguous = if let Some(prev) = node.info().prev.get() {
            match prev {
                List {
                    open_position,
                    close_position,
                    ..
                } => {
                    let prev_is_parent = prev.num_ancestors() < node.num_ancestors();
                    if prev_is_parent {
                        open_position.last().map(|p| p.line) == node.first_line()
                    } else {
                        // predecessor node at the same level.
                        close_position.last().map(|p| p.line) == node.first_line()
                    }
                }
                Atom { .. } => prev.last_line() == node.first_line(),
            }
        } else {
            false
        };
        node.info().prev_is_contiguous.set(is_contiguous);
        if let List { children, .. } = node {
            set_prev_is_contiguous(children);
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

#[derive(PartialEq, Eq, Debug, Clone, Copy, Hash)]
pub enum AtomKind {
    Normal,
    String,
    Type,
    Comment,
    Keyword,
}

/// Unlike atoms, tokens can be delimiters like `{`.
#[derive(PartialEq, Eq, Debug, Clone, Copy)]
pub enum TokenKind {
    Delimiter,
    Atom(AtomKind),
}

/// A matched token (an atom, a delimiter, or a comment word).
#[derive(PartialEq, Eq, Debug, Clone)]
pub enum MatchKind {
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
}

impl MatchKind {
    pub fn is_novel(&self) -> bool {
        matches!(
            self,
            MatchKind::Novel { .. } | MatchKind::NovelWord { .. } | MatchKind::NovelLinePart { .. }
        )
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MatchedPos {
    pub kind: MatchKind,
    pub pos: SingleLineSpan,
}

/// Split `s` into a vec of things that look like words and individual
/// non-word characters.
///
/// "foo bar" -> vec!["foo", " ", "bar"]
pub fn split_words(s: &str) -> Vec<&str> {
    let mut res = vec![];
    let mut word_start = None;
    for (idx, c) in s.char_indices() {
        if c.is_alphanumeric() {
            if word_start.is_none() {
                word_start = Some(idx);
            }
        } else {
            if let Some(start) = word_start {
                res.push(&s[start..idx]);
                word_start = None;
            }
            res.push(&s[idx..idx + c.len_utf8()]);
        }
    }

    if let Some(start) = word_start {
        res.push(&s[start..]);
    }
    res
}

fn split_comment_words(
    content: &str,
    pos: SingleLineSpan,
    opposite_content: &str,
    opposite_pos: SingleLineSpan,
) -> Vec<MatchedPos> {
    // TODO: merge adjacent single-line comments unless there are
    // blank lines between them.
    let content_parts = split_words(content);
    let other_parts = split_words(opposite_content);

    let content_newlines = NewlinePositions::from(content);
    let opposite_content_newlines = NewlinePositions::from(opposite_content);

    let mut offset = 0;
    let mut opposite_offset = 0;

    let mut res = vec![];
    for diff_res in myers_diff::slice(&content_parts, &other_parts) {
        match diff_res {
            myers_diff::DiffResult::Left(word) => {
                // This word is novel to this side.
                res.push(MatchedPos {
                    kind: MatchKind::NovelWord {
                        highlight: TokenKind::Atom(AtomKind::Comment),
                    },
                    pos: content_newlines.from_offsets_relative_to(
                        pos,
                        offset,
                        offset + word.len(),
                    )[0],
                });
                offset += word.len();
            }
            myers_diff::DiffResult::Both(word, opposite_word) => {
                // This word is present on both sides.
                let word_pos =
                    content_newlines.from_offsets_relative_to(pos, offset, offset + word.len())[0];
                let opposite_word_pos = opposite_content_newlines.from_offsets_relative_to(
                    opposite_pos,
                    opposite_offset,
                    opposite_offset + opposite_word.len(),
                );

                res.push(MatchedPos {
                    kind: MatchKind::NovelLinePart {
                        highlight: TokenKind::Atom(AtomKind::Comment),
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

impl MatchedPos {
    fn new(
        ck: ChangeKind,
        highlight: TokenKind,
        pos: &[SingleLineSpan],
        is_close: bool,
    ) -> Vec<Self> {
        match ck {
            ReplacedComment(this, opposite) => {
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

                split_comment_words(
                    this_content,
                    // TODO: handle the whole pos here.
                    pos[0],
                    opposite_content,
                    opposite_pos[0],
                )
            }
            Unchanged(opposite) => {
                let opposite_pos = match opposite {
                    List {
                        open_position,
                        close_position,
                        ..
                    } => {
                        if is_close {
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
                for (i, line_pos) in pos.iter().enumerate() {
                    // Don't create a MatchedPos for empty positions
                    // at the start. We will want empty positions on
                    // multiline atoms elsewhere, as a multline string
                    // literal may include empty lines.
                    if i == 0 && line_pos.start_col == line_pos.end_col {
                        continue;
                    }

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
                for line_pos in pos {
                    // Don't create a MatchedPos for empty positions. This
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
pub fn change_positions<'a>(
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

pub fn zip_pad_shorter<Tx: Clone, Ty: Clone>(
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
pub fn zip_repeat_shorter<Tx: Clone, Ty: Clone>(lhs: &[Tx], rhs: &[Ty]) -> Vec<(Tx, Ty)> {
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
    use super::*;
    use pretty_assertions::assert_eq;

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
    fn test_split_comment_words_basic() {
        let content = "abc";
        let pos = SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 3,
        };

        let opposite_content = "def";
        let opposite_pos = SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 3,
        };

        let res = split_comment_words(content, pos, opposite_content, opposite_pos);
        assert_eq!(
            res,
            vec![MatchedPos {
                kind: MatchKind::NovelWord {
                    highlight: TokenKind::Atom(AtomKind::Comment),
                },
                pos: SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3
                },
            },]
        );
    }

    #[test]
    fn test_split_words() {
        let s = "example.com";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "com"])
    }

    #[test]
    fn test_split_words_punctuations() {
        let s = "example..";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "."])
    }

    #[test]
    fn test_split_words_treats_newline_separately() {
        let s = "example.\ncom";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "\n", "com"])
    }

    #[test]
    fn test_split_words_single_unicode() {
        let s = "a ö b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "ö", " ", "b"])
    }

    #[test]
    fn test_split_words_single_unicode_not_alphabetic() {
        let s = "a 💝 b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "💝", " ", "b"])
    }

    #[test]
    fn test_split_words_unicode() {
        let s = "a xöy b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "xöy", " ", "b"])
    }
}
