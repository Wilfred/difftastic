//! Syntax tree definitions with change metadata.

#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.

use itertools::{EitherOrBoth, Itertools};
use lazy_static::lazy_static;
use regex::Regex;
use std::{
    cell::Cell,
    cmp::min,
    collections::HashMap,
    env, fmt,
    hash::{Hash, Hasher},
};
use typed_arena::Arena;

use crate::{
    lines::{LineGroup, LineNumber, NewlinePositions},
    positions::SingleLineSpan,
};
use ChangeKind::*;
use Syntax::*;

#[derive(PartialEq, Eq, Clone, Copy)]
pub enum ChangeKind<'a> {
    Unchanged(&'a Syntax<'a>),
    ReplacedComment(&'a Syntax<'a>, &'a Syntax<'a>),
    Novel,
}

/// A Debug implementation that ignores the corresponding node
/// mentioned for Unchanged. Otherwise we will infinitely loop on
/// unchanged nodes, which both point to the other.
impl<'a> fmt::Debug for ChangeKind<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Unchanged(_) => "Unchanged",
            ReplacedComment(_, _) => "ReplacedComment",
            Novel => "Novel",
        };
        f.write_str(desc)
    }
}

/// Fields that are common to both `Syntax::List` and `Syntax::Atom`.
pub struct SyntaxInfo<'a> {
    next: Cell<Option<&'a Syntax<'a>>>,
    prev: Cell<Option<&'a Syntax<'a>>>,
    parent: Cell<Option<&'a Syntax<'a>>>,
    prev_is_contiguous: Cell<bool>,
    change: Cell<Option<ChangeKind<'a>>>,
    num_ancestors: Cell<u32>,
    unique_id: Cell<u32>,
    content_id: Cell<u32>,
}

impl<'a> SyntaxInfo<'a> {
    pub fn new() -> Self {
        Self {
            next: Cell::new(None),
            prev: Cell::new(None),
            parent: Cell::new(None),
            prev_is_contiguous: Cell::new(false),
            change: Cell::new(None),
            num_ancestors: Cell::new(0),
            unique_id: Cell::new(0),
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
                    ds.field("change", &info.change.get());

                    let next_s = match info.next.get() {
                        Some(List { .. }) => "Some(List)",
                        Some(Atom { .. }) => "Some(Atom)",
                        None => "None",
                    };
                    ds.field("next", &next_s);
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
                    ds.field("change", &info.change.get());
                    let next_s = match info.next.get() {
                        Some(List { .. }) => "Some(List)",
                        Some(Atom { .. }) => "Some(Atom)",
                        None => "None",
                    };
                    ds.field("next", &next_s);
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

    pub fn next(&self) -> Option<&'a Syntax<'a>> {
        self.info().next.get()
    }

    pub fn prev_is_contiguous(&self) -> bool {
        self.info().prev_is_contiguous.get()
    }

    /// A unique ID of this syntax node. Every node is guaranteed to
    /// have a different value.
    pub fn id(&self) -> u32 {
        self.info().unique_id.get()
    }

    /// A content ID of this syntax node. Two nodes have the same
    /// content ID if they have the same content, regardless of
    /// position.
    fn content_id(&self) -> u32 {
        self.info().content_id.get()
    }

    pub fn num_ancestors(&self) -> u32 {
        self.info().num_ancestors.get()
    }

    pub fn change(&'a self) -> Option<ChangeKind<'a>> {
        self.info().change.get()
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

    pub fn set_change(&self, ck: ChangeKind<'a>) {
        self.info().change.set(Some(ck));
    }

    pub fn set_change_deep(&self, ck: ChangeKind<'a>) {
        self.set_change(ck);

        if let List { children, .. } = self {
            // For unchanged lists, match up children with the
            // unchanged children on the other side.
            if let Unchanged(List {
                children: other_children,
                ..
            }) = ck
            {
                for (child, other_child) in children.iter().zip(other_children) {
                    child.set_change_deep(Unchanged(other_child));
                }
            } else {
                for child in children {
                    child.set_change_deep(ck);
                }
            };
        }
    }
}

/// Initialise all the fields in `SyntaxInfo`.
pub fn init_info<'a>(lhs_roots: &[&'a Syntax<'a>], rhs_roots: &[&'a Syntax<'a>]) {
    let mut id = 0;
    init_info_single(lhs_roots, &mut id);
    init_info_single(rhs_roots, &mut id);

    let mut existing = HashMap::new();
    set_content_id(lhs_roots, &mut existing);
    set_content_id(rhs_roots, &mut existing);
}

type ContentKey = (
    Option<String>,
    Option<String>,
    Vec<u32>,
    bool,
    Option<AtomKind>,
);

fn set_content_id<'a>(nodes: &[&'a Syntax<'a>], existing: &mut HashMap<ContentKey, u32>) {
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
                    None,
                )
            }
            Atom {
                content,
                kind: highlight,
                ..
            } => {
                let clean_content =
                    if *highlight == AtomKind::Comment && content.lines().count() > 1 {
                        content
                            .lines()
                            .map(|l| l.trim_start())
                            .collect::<Vec<_>>()
                            .join("\n")
                            .to_string()
                    } else {
                        content.clone()
                    };
                (Some(clean_content), None, vec![], false, Some(*highlight))
            }
        };

        // Ensure the ID is always greater than zero, so we can
        // distinguish an uninitialised SyntaxInfo value.
        let next_id = existing.len() as u32 + 1;
        let content_id = existing.entry(key).or_insert(next_id);
        node.info().content_id.set(*content_id);
    }
}

fn init_info_single<'a>(roots: &[&'a Syntax<'a>], next_id: &mut u32) {
    set_next(roots, None);
    set_prev(roots, None);
    set_parent(roots, None);
    set_num_ancestors(roots, 0);
    set_prev_is_contiguous(roots);
    set_unique_id(roots, next_id)
}

fn set_unique_id<'a>(nodes: &[&'a Syntax<'a>], next_id: &mut u32) {
    for node in nodes {
        node.info().unique_id.set(*next_id);
        *next_id += 1;
        if let List { children, .. } = node {
            set_unique_id(children, next_id);
        }
    }
}

/// For every syntax node in the tree, mark the next node according to
/// a preorder traversal.
fn set_next<'a>(nodes: &[&'a Syntax<'a>], parent_next: Option<&'a Syntax<'a>>) {
    for (i, node) in nodes.iter().enumerate() {
        let node_next = match nodes.get(i + 1) {
            Some(node_next) => Some(*node_next),
            None => parent_next,
        };

        node.info().next.set(node_next);
        if let List { children, .. } = node {
            set_next(children, node_next);
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

impl<'a> Hash for Syntax<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.content_id().hash(state);
    }
}

#[derive(PartialEq, Eq, Debug, Clone, Copy, Hash)]
pub enum AtomKind {
    Normal,
    Comment,
    Keyword,
}

/// Unlike atoms, tokens can be delimiters like `{`.
#[derive(PartialEq, Eq, Debug, Clone, Copy)]
pub enum TokenKind {
    Delimiter,
    Atom(AtomKind),
}

#[derive(PartialEq, Eq, Debug, Clone)]
pub enum MatchKind {
    Unchanged {
        highlight: TokenKind,
        // as this match could be for a list.
        opposite_pos: (Vec<SingleLineSpan>, Vec<SingleLineSpan>),
    },
    Novel,
    UnchangedCommentPart {
        opposite_pos: Vec<SingleLineSpan>,
    },
    ChangedCommentPart,
}

impl MatchKind {
    pub fn is_unchanged(&self) -> bool {
        matches!(self, MatchKind::Unchanged { .. })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MatchedPos {
    pub kind: MatchKind,
    pub pos: SingleLineSpan,
    // TODO: this is confusing: the previous syntax node with a match
    // may be on the current line or a previous one.
    pub prev_opposite_pos: Option<SingleLineSpan>,
}

fn split_words(s: &str) -> Vec<String> {
    lazy_static! {
        static ref RE: Regex = Regex::new(r"[a-zA-Z0-9]+|[^a-zA-Z0-9]+").unwrap();
    }

    RE.find_iter(s).map(|m| m.as_str().to_owned()).collect()
}

fn split_comment_words(
    content: &str,
    pos: SingleLineSpan,
    opposite_content: &str,
    opposite_pos: SingleLineSpan,
    prev_opposite_pos: Option<SingleLineSpan>,
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
    for diff_res in diff::slice(&content_parts, &other_parts) {
        match diff_res {
            diff::Result::Left(word) => {
                // This word is novel to this side.
                res.push(MatchedPos {
                    kind: MatchKind::ChangedCommentPart,
                    pos: content_newlines.from_offsets_relative_to(
                        pos,
                        offset,
                        offset + word.len(),
                    )[0],
                    prev_opposite_pos,
                });
                offset += word.len();
            }
            diff::Result::Both(word, opposite_word) => {
                // This word is present on both sides.
                let word_pos =
                    content_newlines.from_offsets_relative_to(pos, offset, offset + word.len())[0];
                let opposite_word_pos = opposite_content_newlines.from_offsets_relative_to(
                    opposite_pos,
                    opposite_offset,
                    opposite_offset + opposite_word.len(),
                );

                res.push(MatchedPos {
                    kind: MatchKind::UnchangedCommentPart {
                        opposite_pos: opposite_word_pos,
                    },
                    pos: word_pos,
                    prev_opposite_pos,
                });
                offset += word.len();
                opposite_offset += opposite_word.len();
            }
            diff::Result::Right(opposite_word) => {
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
        pos: SingleLineSpan,
        prev_opposite_pos: Option<SingleLineSpan>,
    ) -> Vec<Self> {
        let kind = match ck {
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

                return split_comment_words(
                    this_content,
                    pos,
                    opposite_content,
                    opposite_pos[0],
                    prev_opposite_pos,
                );
            }
            Unchanged(opposite) => {
                let opposite_pos = match opposite {
                    List {
                        open_position,
                        close_position,
                        ..
                    } => (open_position.clone(), close_position.clone()),
                    Atom { position, .. } => (position.clone(), position.clone()),
                };

                MatchKind::Unchanged {
                    highlight,
                    opposite_pos,
                }
            }
            Novel => MatchKind::Novel,
        };

        vec![Self {
            kind,
            pos,
            prev_opposite_pos,
        }]
    }
}

/// Walk `nodes` and return a vec of all the changed positions.
pub fn change_positions<'a>(
    src: &str,
    opposite_src: &str,
    nodes: &[&Syntax<'a>],
) -> Vec<MatchedPos> {
    let nl_pos = NewlinePositions::from(src);
    let opposite_nl_pos = NewlinePositions::from(opposite_src);

    let mut positions = Vec::new();
    let mut prev_unchanged = vec![SingleLineSpan {
        line: 0.into(),
        start_col: 0,
        end_col: 0,
    }];
    change_positions_(
        &nl_pos,
        &opposite_nl_pos,
        nodes,
        &mut prev_unchanged,
        &mut positions,
    );
    positions
}

fn change_positions_<'a>(
    nl_pos: &NewlinePositions,
    opposite_nl_pos: &NewlinePositions,
    nodes: &[&Syntax<'a>],
    prev_opposite_pos: &mut Vec<SingleLineSpan>,
    positions: &mut Vec<MatchedPos>,
) {
    for node in nodes {
        match node {
            List {
                info,
                open_position,
                children,
                close_position,
                ..
            } => {
                let change = info
                    .change
                    .get()
                    .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));

                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List {
                            open_position: opposite_open_pos,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_open_pos.clone();
                        }
                        Atom { .. } => unreachable!(),
                    }
                }

                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Delimiter,
                    open_position[0],
                    prev_opposite_pos.first().copied(),
                ));

                change_positions_(
                    nl_pos,
                    opposite_nl_pos,
                    children,
                    prev_opposite_pos,
                    positions,
                );

                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List {
                            close_position: opposite_close_pos,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_close_pos.clone();
                        }
                        Atom { .. } => unreachable!(),
                    }
                }
                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Delimiter,
                    close_position[0],
                    prev_opposite_pos.first().copied(),
                ));
            }
            Atom {
                info,
                position,
                kind,
                ..
            } => {
                let change = info
                    .change
                    .get()
                    .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));
                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List { .. } => {
                            dbg!(node, opposite_node);
                            unreachable!();
                        }
                        Atom {
                            position: opposite_position,
                            ..
                        } => {
                            *prev_opposite_pos = opposite_position.clone();
                        }
                    }
                }
                positions.extend(MatchedPos::new(
                    change,
                    TokenKind::Atom(*kind),
                    position[0],
                    prev_opposite_pos.first().copied(),
                ));
            }
        }
    }
}

fn zip_pad_shorter<Tx: Copy, Ty: Copy>(lhs: &[Tx], rhs: &[Ty]) -> Vec<(Option<Tx>, Option<Ty>)> {
    let mut res = vec![];

    let mut i = 0;
    loop {
        match (lhs.get(i), rhs.get(i)) {
            (None, None) => break,
            (x, y) => res.push((x.copied(), y.copied())),
        }

        i += 1;
    }

    res
}

/// Given two slices of line positions, return a list of line number
/// pairs. If the slices have different lengths, reuse the last item
/// from the shorter slice.
fn zip_lines(lhs: &[SingleLineSpan], rhs: &[SingleLineSpan]) -> Vec<(LineNumber, LineNumber)> {
    let lhs_lines: Vec<_> = lhs.iter().map(|slp| slp.line).collect();
    let rhs_lines: Vec<_> = rhs.iter().map(|slp| slp.line).collect();

    let lhs_last = match lhs_lines.last() {
        Some(last) => *last,
        None => {
            return vec![];
        }
    };
    let rhs_last = match rhs_lines.last() {
        Some(last) => *last,
        None => {
            return vec![];
        }
    };

    lhs_lines
        .into_iter()
        .zip_longest(rhs_lines.into_iter())
        .map(|l| match l {
            EitherOrBoth::Both(lhs_line, rhs_line) => (lhs_line, rhs_line),
            EitherOrBoth::Left(lhs_line) => (lhs_line, rhs_last),
            EitherOrBoth::Right(rhs_line) => (lhs_last, rhs_line),
        })
        .collect()
}

pub fn aligned_lines(
    group: &LineGroup,
    lhs_line_matches: &HashMap<LineNumber, LineNumber>,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let lhs_lines = group.lhs_lines();
    let rhs_lines = group.rhs_lines();

    // When adding padding to a LineGroup where each side has a
    // different number of lines, we can end up with extra padding on
    // the side with fewer lines.
    //
    // TODO: fix padding to be smarter.
    aligned_lines_(&lhs_lines, &rhs_lines, lhs_line_matches)
}

/// Given two slices of contiguous line numbers, return pairs of
/// matched lines.
///
/// A LHS line is matched with a RHS line if it's present in
/// `lhs_line_matches` and hasn't already been matched.
///
/// If a line has no match on the other side, the pair will contain
/// None on the other side.
fn aligned_lines_(
    lhs_lines: &[LineNumber],
    rhs_lines: &[LineNumber],
    lhs_line_matches: &HashMap<LineNumber, LineNumber>,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    let mut rhs_highest_matched = rhs_lines.first().map_or(0, |l| l.0 as isize) - 1;

    // For every LHS line, if there is a RHS line that is included in
    // `rhs_lines` and hasn't yet been paired up, add it to
    // matched_lines.
    //
    // TODO: prefer the line with the most similarity, not just the
    // first line.  See spurious `let` alignment in 9c71298f8294ce8f,
    // LHS line 96 in lines.rs.
    let mut matched_lines = vec![];
    for lhs_line in lhs_lines {
        if let Some(rhs_line) = lhs_line_matches.get(lhs_line) {
            if rhs_line.0 as isize > rhs_highest_matched {
                matched_lines.push((lhs_line, rhs_line));
                rhs_highest_matched = rhs_line.0 as isize;
            }
        }
    }

    let mut res = vec![];

    let mut lhs_i = 0;
    let mut rhs_i = 0;

    // Build a vec of matched line tuples. For lines without matches
    // (novel lines, empty lines), just match lines up pairwise. Pad
    // gaps if one side has more lines.
    for (lhs_matched_line, rhs_matched_line) in matched_lines {
        let mut lhs_prev_lines = vec![];
        while lhs_i < lhs_lines.len() && lhs_lines[lhs_i] < *lhs_matched_line {
            lhs_prev_lines.push(lhs_lines[lhs_i]);
            lhs_i += 1;
        }
        let mut rhs_prev_lines = vec![];
        while rhs_i < rhs_lines.len() && rhs_lines[rhs_i] < *rhs_matched_line {
            rhs_prev_lines.push(rhs_lines[rhs_i]);
            rhs_i += 1;
        }

        res.extend(zip_pad_shorter(&lhs_prev_lines, &rhs_prev_lines));

        res.push((Some(*lhs_matched_line), Some(*rhs_matched_line)));
        lhs_i += 1;
        rhs_i += 1;
    }

    // Handle unmatched lines after the last match.
    res.extend(zip_pad_shorter(
        &lhs_lines[min(lhs_i, lhs_lines.len())..],
        &rhs_lines[min(rhs_i, rhs_lines.len())..],
    ));

    res
}

pub fn matching_lines<'a>(nodes: &[&Syntax<'a>]) -> HashMap<LineNumber, LineNumber> {
    let mut res = HashMap::new();
    for node in nodes {
        matching_lines_(node, &mut res);
    }
    res
}

fn matching_lines_<'a>(node: &Syntax<'a>, matches: &mut HashMap<LineNumber, LineNumber>) {
    match node {
        List {
            info,
            open_position,
            children,
            close_position,
            ..
        } => {
            if let Some(Unchanged(List {
                open_position: other_open,
                close_position: other_close,
                ..
            })) = info.change.get()
            {
                for (line, other_line) in zip_lines(open_position, other_open) {
                    matches.entry(line).or_insert(other_line);
                }

                for (line, other_line) in zip_lines(close_position, other_close) {
                    matches.entry(line).or_insert(other_line);
                }
            }

            for child in children {
                matching_lines_(child, matches);
            }
        }
        Atom { info, position, .. } => {
            if let Some(Unchanged(Atom {
                position: other_pos,
                ..
            })) = info.change.get()
            {
                for (line, other_line) in zip_lines(position, other_pos) {
                    matches.entry(line).or_insert(other_line);
                }
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use pretty_assertions::assert_eq;

    #[test]
    fn test_aligned_middle() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![12.into(), 13.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(2.into(), 12.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![
                (Some(1.into()), None),
                (Some(2.into()), Some(12.into())),
                (None, Some(13.into()))
            ]
        );
    }

    #[test]
    fn test_aligned_all() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![11.into(), 12.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(1.into(), 2.into());
        line_matches.insert(2.into(), 12.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![
                (Some(1.into()), Some(11.into())),
                (Some(2.into()), Some(12.into())),
            ]
        );
    }

    #[test]
    fn test_aligned_none() {
        let lhs_lines: Vec<LineNumber> = vec![1.into()];
        let rhs_lines: Vec<LineNumber> = vec![11.into()];

        let line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![(Some(1.into()), Some(11.into()))]
        );
    }

    #[test]
    fn test_aligned_line_overlap() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![11.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(1.into(), 11.into());
        line_matches.insert(2.into(), 11.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![(Some(1.into()), Some(11.into())), (Some(2.into()), None)]
        );
    }

    #[test]
    fn test_aligned_out_of_order() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![11.into(), 12.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(2.into(), 11.into());
        line_matches.insert(1.into(), 12.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![
                (None, Some(11.into())),
                (Some(1.into()), Some(12.into())),
                (Some(2.into()), None)
            ]
        );
    }

    #[test]
    fn test_aligned_out_of_range() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![11.into(), 12.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(1.into(), 10.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![
                (Some(1.into()), Some(11.into())),
                (Some(2.into()), Some(12.into())),
            ]
        );
    }

    #[test]
    fn test_aligned_first_line() {
        let lhs_lines: Vec<LineNumber> = vec![0.into()];
        let rhs_lines: Vec<LineNumber> = vec![0.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(0.into(), 0.into());

        assert_eq!(
            aligned_lines_(&lhs_lines, &rhs_lines, &line_matches),
            vec![(Some(0.into()), Some(0.into()))]
        );
    }

    /// Ensure that we assign prev_opposite_pos even if the change is on the first node.
    #[test]
    fn test_prev_opposite_pos_first_node() {
        let arena = Arena::new();

        let atom = Syntax::new_atom(
            &arena,
            vec![SingleLineSpan {
                line: 0.into(),
                start_col: 2,
                end_col: 3,
            }],
            "foo",
            AtomKind::Normal,
        );
        atom.set_change(ChangeKind::Novel);
        let nodes: Vec<&Syntax> = vec![atom];

        let positions = change_positions("irrelevant", "also irrelevant", &nodes);
        assert_eq!(
            positions[0].prev_opposite_pos,
            Some(SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 0
            })
        );
    }

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
        init_info(&[comment], &[atom]);

        assert_ne!(comment, atom);
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
        init_info(&[x], &[y]);

        assert_eq!(x, y);
    }

    #[test]
    fn test_atom_equality_ignores_change() {
        let lhs = Atom {
            info: SyntaxInfo {
                change: Cell::new(Some(Novel)),
                ..SyntaxInfo::default()
            },

            position: vec![SingleLineSpan {
                line: 1.into(),
                start_col: 2,
                end_col: 3,
            }],
            content: "foo".into(),
            kind: AtomKind::Normal,
        };
        let rhs = Atom {
            info: SyntaxInfo {
                change: Cell::new(None),
                ..SyntaxInfo::default()
            },
            position: vec![SingleLineSpan {
                line: 1.into(),
                start_col: 2,
                end_col: 3,
            }],
            content: "foo".into(),
            kind: AtomKind::Normal,
        };
        init_info(&[&lhs], &[&rhs]);

        assert_eq!(lhs, rhs);
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

        let res = split_comment_words(content, pos, opposite_content, opposite_pos, None);
        assert_eq!(
            res,
            vec![MatchedPos {
                kind: MatchKind::ChangedCommentPart,
                pos: SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3
                },
                prev_opposite_pos: None,
            },]
        );
    }

    #[test]
    fn test_split_words() {
        let s = "example.com";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "com"])
    }
}
