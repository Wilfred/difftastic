#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.

use itertools::{EitherOrBoth, Itertools};
use regex::Regex;
use std::cell::Cell;
use std::cmp::min;
use std::collections::hash_map::DefaultHasher;
use std::collections::HashMap;
use std::fmt;
use std::hash::{Hash, Hasher};
use typed_arena::Arena;

use crate::lines::{LineNumber, NewlinePositions};
use crate::positions::SingleLineSpan;
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
    pub pos_content_hash: u64,
    pub next: Cell<Option<&'a Syntax<'a>>>,
    pub change: Cell<Option<ChangeKind<'a>>>,
    pub num_ancestors: Cell<u64>,
    pub unique_id: Cell<u64>,
}

pub enum Syntax<'a> {
    List {
        info: SyntaxInfo<'a>,
        open_position: Vec<SingleLineSpan>,
        open_content: String,
        children: Vec<&'a Syntax<'a>>,
        close_position: Vec<SingleLineSpan>,
        close_content: String,
        num_descendants: u64,
    },
    Atom {
        info: SyntaxInfo<'a>,
        position: Vec<SingleLineSpan>,
        content: String,
        is_comment: bool,
    },
}

fn dbg_pos(pos: &[SingleLineSpan]) -> String {
    if pos.is_empty() {
        "-".into()
    } else {
        let start = pos.first().unwrap();
        let end = pos.last().unwrap();
        format!(
            "{}:{}-{}:{}",
            start.line.0, start.start_col, end.line.0, end.end_col
        )
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
                let mut ds = f.debug_struct(&format!("List id:{}", self.id()));

                ds.field("open_content", &open_content)
                    .field("open_position", &dbg_pos(open_position))
                    .field("children", &children)
                    .field("close_content", &close_content)
                    .field("close_position", &dbg_pos(close_position))
                    .field("change", &info.change.get());

                let next_s = match info.next.get() {
                    Some(List { .. }) => "Some(List)",
                    Some(Atom { .. }) => "Some(Atom)",
                    None => "None",
                };
                ds.field("next", &next_s);

                ds.finish()
            }
            Atom {
                content,
                position,
                info,
                ..
            } => {
                let mut ds = f.debug_struct(&format!("Atom id:{}", self.id()));
                ds.field("content", &content)
                    .field("change", &info.change.get());
                ds.field("position", &dbg_pos(position));

                let next_s = match info.next.get() {
                    Some(List { .. }) => "Some(List)",
                    Some(Atom { .. }) => "Some(Atom)",
                    None => "None",
                };
                ds.field("next", &next_s);

                ds.finish()
            }
        }
    }
}

impl<'a> Syntax<'a> {
    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_list(
        arena: &'a Arena<Syntax<'a>>,
        open_content: &str,
        open_position: Vec<SingleLineSpan>,
        children: Vec<&'a Syntax<'a>>,
        close_content: &str,
        close_position: Vec<SingleLineSpan>,
    ) -> &'a mut Syntax<'a> {
        let mut num_descendants = 0;
        for child in &children {
            num_descendants += match child {
                List {
                    num_descendants, ..
                } => *num_descendants + 1,
                Atom { .. } => 1,
            };
        }

        let mut hasher = DefaultHasher::new();

        open_position.hash(&mut hasher);
        open_content.hash(&mut hasher);
        close_content.hash(&mut hasher);
        close_position.hash(&mut hasher);
        for child in &children {
            child.hash(&mut hasher);
        }

        arena.alloc(List {
            info: SyntaxInfo {
                unique_id: Cell::new(0),
                pos_content_hash: hasher.finish(),
                next: Cell::new(None),
                change: Cell::new(None),
                num_ancestors: Cell::new(0),
            },
            open_position,
            open_content: open_content.into(),
            close_content: close_content.into(),
            close_position,
            children,
            num_descendants,
        })
    }

    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_atom(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
    ) -> &'a mut Syntax<'a> {
        Self::new_atom_(arena, position, content, false)
    }

    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    pub fn new_comment(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
    ) -> &'a mut Syntax<'a> {
        Self::new_atom_(arena, position, content, true)
    }

    #[allow(clippy::mut_from_ref)] // Clippy doesn't understand arenas.
    fn new_atom_(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
        is_comment: bool,
    ) -> &'a mut Syntax<'a> {
        let mut hasher = DefaultHasher::new();

        position.hash(&mut hasher);
        content.hash(&mut hasher);

        arena.alloc(Atom {
            info: SyntaxInfo {
                unique_id: Cell::new(0),
                pos_content_hash: hasher.finish(),
                next: Cell::new(None),
                change: Cell::new(None),
                num_ancestors: Cell::new(0),
            },
            position,
            content: content.into(),
            is_comment,
        })
    }

    pub fn info(&self) -> &SyntaxInfo<'a> {
        match self {
            List { info, .. } => info,
            Atom { info, .. } => info,
        }
    }

    pub fn next(&self) -> Option<&'a Syntax<'a>> {
        self.info().next.get()
    }

    pub fn id(&self) -> u64 {
        self.info().unique_id.get()
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

    pub fn equal_content(&self, other: &Self) -> bool {
        match (&self, other) {
            (
                Atom {
                    content: lhs_content,
                    is_comment: lhs_is_comment,
                    ..
                },
                Atom {
                    content: rhs_content,
                    is_comment: rhs_is_comment,
                    ..
                },
            ) => lhs_content == rhs_content && lhs_is_comment == rhs_is_comment,
            (
                List {
                    open_content: lhs_open_content,
                    close_content: lhs_close_content,
                    children: lhs_children,
                    ..
                },
                List {
                    open_content: rhs_open_content,
                    close_content: rhs_close_content,
                    children: rhs_children,
                    ..
                },
            ) => {
                if lhs_open_content != rhs_open_content || lhs_close_content != rhs_close_content {
                    return false;
                }
                if lhs_children.len() != rhs_children.len() {
                    return false;
                }
                for (lhs_child, rhs_child) in lhs_children.iter().zip(rhs_children.iter()) {
                    if !lhs_child.equal_content(rhs_child) {
                        return false;
                    }
                }

                true
            }
            _ => false,
        }
    }

    /// Does this `Node` have the same position in all its subnodes?
    ///
    /// Nodes with different numbers of children return false
    /// regardless of top-level positions.
    fn equal_pos(&self, other: &Self) -> bool {
        match (&self, other) {
            (
                Atom {
                    position: lhs_position,
                    ..
                },
                Atom {
                    position: rhs_position,
                    ..
                },
            ) => lhs_position == rhs_position,
            (
                List {
                    open_position: lhs_open_position,
                    close_position: lhs_close_position,
                    children: lhs_children,
                    ..
                },
                List {
                    open_position: rhs_open_position,
                    close_position: rhs_close_position,
                    children: rhs_children,
                    ..
                },
            ) => {
                if lhs_open_position != rhs_open_position
                    || lhs_close_position != rhs_close_position
                {
                    return false;
                }
                if lhs_children.len() != rhs_children.len() {
                    return false;
                }

                for (lhs_child, rhs_child) in lhs_children.iter().zip(rhs_children.iter()) {
                    if !lhs_child.equal_pos(rhs_child) {
                        return false;
                    }
                }

                true
            }
            _ => false,
        }
    }
}

pub fn init_info<'a>(roots: &[&'a Syntax<'a>]) {
    set_unique_id(roots, 0);
    set_next(roots, None);
    set_num_ancestors(roots, 0);
}

fn set_unique_id<'a>(nodes: &[&'a Syntax<'a>], prev_id: u64) -> u64 {
    let mut id = prev_id + 1;
    for node in nodes {
        node.info().unique_id.set(id);
        if let List { children, .. } = node {
            id = set_unique_id(children, id);
        }
        id += 1;
    }
    id
}

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

fn set_num_ancestors<'a>(nodes: &[&Syntax<'a>], num_ancestors: u64) {
    for node in nodes {
        node.info().num_ancestors.set(num_ancestors);

        if let List { children, .. } = node {
            set_num_ancestors(children, num_ancestors + 1);
        }
    }
}

impl<'a> PartialEq for Syntax<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.equal_pos(other) && self.equal_content(other)
    }
}
impl<'a> Eq for Syntax<'a> {}

impl<'a> Hash for Syntax<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.info().pos_content_hash.hash(state);
    }
}

#[derive(PartialEq, Eq, Debug)]
pub enum MatchKind {
    Unchanged,
    Novel,
    UnchangedCommentPart,
    ChangedCommentPart,
}

#[derive(Debug)]
pub struct MatchedPos {
    pub kind: MatchKind,
    pub pos: Vec<SingleLineSpan>,
    pub prev_opposite_pos: Vec<SingleLineSpan>,
}

fn split_comment_words(
    content: &str,
    pos: &[SingleLineSpan],
    opposite_content: &str,
    prev_opposite_pos: &[SingleLineSpan],
) -> Vec<MatchedPos> {
    // TODO: also split on whitespace, so "// (foo)" splits before "(".

    // TODO: merge adjacent single-line comments unless there are
    // blank lines between them.
    let word_boundary = Regex::new(r"\b").unwrap();

    let content_parts: Vec<_> = word_boundary.split(content).collect();
    let other_parts: Vec<_> = word_boundary.split(opposite_content).collect();

    let content_newlines = NewlinePositions::from(content);

    let mut offset = 0;

    let mut res = vec![];
    for diff_res in diff::slice(&content_parts, &other_parts) {
        match diff_res {
            diff::Result::Left(word) => {
                // This word is novel to this side.
                res.push(MatchedPos {
                    kind: MatchKind::ChangedCommentPart,
                    pos: content_newlines.from_offsets_relative_to(
                        pos[0],
                        offset,
                        offset + word.len(),
                    ),
                    prev_opposite_pos: prev_opposite_pos.to_vec(),
                });
                offset += word.len();
            }
            diff::Result::Both(word, _) => {
                // This word is present on both sides.
                res.push(MatchedPos {
                    kind: MatchKind::UnchangedCommentPart,
                    pos: content_newlines.from_offsets_relative_to(
                        pos[0],
                        offset,
                        offset + word.len(),
                    ),
                    prev_opposite_pos: prev_opposite_pos.to_vec(),
                });
                offset += word.len();
            }
            diff::Result::Right(_) => {
                // Only exists on other side, nothing to do on this side.
            }
        }
    }

    res
}

impl MatchedPos {
    fn new(
        ck: ChangeKind,
        pos: Vec<SingleLineSpan>,
        prev_opposite_pos: Vec<SingleLineSpan>,
    ) -> Vec<Self> {
        let kind = match ck {
            ReplacedComment(this, opposite) => {
                let this_content = match this {
                    List { .. } => unreachable!(),
                    Atom { content, .. } => content,
                };
                let opposite_content = match opposite {
                    List { .. } => unreachable!(),
                    Atom { content, .. } => content,
                };

                return split_comment_words(
                    this_content,
                    &pos,
                    opposite_content,
                    &prev_opposite_pos,
                );
            }
            Unchanged(_) => MatchKind::Unchanged,
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
                    open_position.clone(),
                    prev_opposite_pos.clone(),
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
                    close_position.clone(),
                    prev_opposite_pos.clone(),
                ));
            }
            Atom { info, position, .. } => {
                let change = info
                    .change
                    .get()
                    .unwrap_or_else(|| panic!("Should have changes set in all nodes: {:#?}", node));
                if let Unchanged(opposite_node) = change {
                    match opposite_node {
                        List { .. } => {
                            dbg!(node, opposite_node);
                            unreachable!()
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
                    position.clone(),
                    prev_opposite_pos.clone(),
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
    lhs_lines: &[LineNumber],
    rhs_lines: &[LineNumber],
    lhs_line_matches: &HashMap<LineNumber, LineNumber>,
) -> Vec<(Option<LineNumber>, Option<LineNumber>)> {
    // When adding padding to a LineGroup where each side has a
    // different number of lines, we can end up with extra padding on
    // the side with fewer lines.
    //
    // Work around that by discarding any lines at the beginning with
    // aren't matched.
    //
    // TODO: fix padding to be smarter.
    aligned_lines_(lhs_lines, rhs_lines, lhs_line_matches)
        .iter()
        .skip_while(|(lhs, rhs)| lhs.is_none() || rhs.is_none())
        .copied()
        .collect()
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
    let mut rhs_highest_matched = rhs_lines.first().map(|l| l.0 as isize).unwrap_or(0) - 1;

    // For every LHS line, if there is a RHS line that is included in
    // `rhs_lines` and hasn't yet been paired up, add it to
    // matched_lines.
    //
    // TODO: prefer the lie with the most similarity, not just the
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
    fn test_aligned_middle_drop_none_at_start() {
        let lhs_lines: Vec<LineNumber> = vec![1.into(), 2.into()];
        let rhs_lines: Vec<LineNumber> = vec![12.into(), 13.into()];

        let mut line_matches: HashMap<LineNumber, LineNumber> = HashMap::new();
        line_matches.insert(2.into(), 12.into());

        assert_eq!(
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
            vec![(Some(2.into()), Some(12.into())), (None, Some(13.into()))]
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
            "foo".into(),
        );
        atom.set_change(ChangeKind::Novel);
        let nodes: Vec<&Syntax> = vec![atom];

        let positions = change_positions("irrelevant", "also irrelevant", &nodes);
        assert_eq!(
            positions[0].prev_opposite_pos,
            vec![SingleLineSpan {
                line: 0.into(),
                start_col: 0,
                end_col: 0
            }]
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

        let comment = Syntax::new_comment(&arena, pos.clone(), "foo".into());
        let atom = Syntax::new_atom(&arena, pos, "foo".into());

        assert_ne!(comment, atom);
    }

    #[test]
    fn test_atom_equality_ignores_change() {
        assert_eq!(
            Atom {
                info: SyntaxInfo {
                    unique_id: Cell::new(0),
                    pos_content_hash: 0,
                    next: Cell::new(None),
                    change: Cell::new(Some(Novel)),
                    num_ancestors: Cell::new(0),
                },
                position: vec![SingleLineSpan {
                    line: 1.into(),
                    start_col: 2,
                    end_col: 3
                }],
                content: "foo".into(),
                is_comment: false,
            },
            Atom {
                info: SyntaxInfo {
                    unique_id: Cell::new(1),
                    pos_content_hash: 1,
                    next: Cell::new(None),
                    change: Cell::new(None),
                    num_ancestors: Cell::new(1),
                },
                position: vec![SingleLineSpan {
                    line: 1.into(),
                    start_col: 2,
                    end_col: 3
                }],
                content: "foo".into(),
                is_comment: false,
            }
        );
    }
}
