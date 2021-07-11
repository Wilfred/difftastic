#![allow(clippy::mutable_key_type)] // Hash for Syntax doesn't use mutable fields.
#![allow(dead_code)]

use itertools::{EitherOrBoth, Itertools};
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
    Moved,
    Novel,
}

/// A Debug implementation that ignores the corresponding node
/// mentioned for Unchanged. Otherwise we will infinitely loop on
/// unchanged nodes, which both point to the other.
impl<'a> fmt::Debug for ChangeKind<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Unchanged(_) => "Unchanged",
            Moved => "Moved",
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
    pub num_ancestors: Cell<isize>,
}

pub enum Syntax<'a> {
    List {
        info: SyntaxInfo<'a>,
        open_position: Vec<SingleLineSpan>,
        open_content: String,
        children: Vec<&'a Syntax<'a>>,
        close_position: Vec<SingleLineSpan>,
        close_content: String,
        num_descendants: usize,
    },
    Atom {
        info: SyntaxInfo<'a>,
        position: Vec<SingleLineSpan>,
        content: String,
        is_comment: bool,
    },
}

impl<'a> fmt::Debug for Syntax<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            List {
                open_content,
                children,
                close_content,
                info,
                ..
            } => {
                let mut ds = f.debug_struct("List");

                ds.field("open_content", &open_content)
                    .field("children", &children)
                    .field("close_content", &close_content)
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
                let mut ds = f.debug_struct("Atom");
                ds.field("content", &content)
                    .field("change", &info.change.get());
                ds.field("position", &position);

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
        Self::new_atom_(arena, position, content, true)
    }

    pub fn new_comment(
        arena: &'a Arena<Syntax<'a>>,
        position: Vec<SingleLineSpan>,
        content: &str,
    ) -> &'a mut Syntax<'a> {
        Self::new_atom_(arena, position, content, true)
    }

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
    set_next(roots, None);
    set_num_ancestors(roots, 0);
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

fn set_num_ancestors<'a>(nodes: &[&Syntax<'a>], num_ancestors: isize) {
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
        let info = match self {
            List { info, .. } => info,
            Atom { info, .. } => info,
        };
        info.pos_content_hash.hash(state);
    }
}

#[derive(PartialEq, Eq, Debug)]
pub enum MatchKind {
    Unchanged,
    Moved,
    Novel,
}

impl MatchKind {
    fn from_change(ck: ChangeKind) -> Self {
        match ck {
            Unchanged(_) => MatchKind::Unchanged,
            Moved => MatchKind::Moved,
            Novel => MatchKind::Novel,
        }
    }
}

#[derive(Debug)]
pub struct MatchedPos {
    pub kind: MatchKind,
    pub pos: Vec<SingleLineSpan>,
    pub prev_opposite_pos: Vec<SingleLineSpan>,
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

                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: open_position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });

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
                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: close_position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });
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
                positions.push(MatchedPos {
                    kind: MatchKind::from_change(change),
                    pos: position.clone(),
                    prev_opposite_pos: prev_opposite_pos.clone(),
                });
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
            (x, y) => res.push((x.map(|v| *v), y.map(|v| *v))),
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
    let mut rhs_highest_matched = rhs_lines.first().unwrap().number as isize - 1;
    // For every LHS line, if there is a RHS line that is included in
    // `rhs_lines` and hasn't yet been paired up, add it to
    // matched_lines.
    let mut matched_lines = vec![];
    for lhs_line in lhs_lines {
        if let Some(rhs_line) = lhs_line_matches.get(lhs_line) {
            if rhs_line.number as isize > rhs_highest_matched {
                matched_lines.push((lhs_line, rhs_line));
                rhs_highest_matched = rhs_line.number as isize;
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
                    if !matches.contains_key(&line) {
                        matches.insert(line, other_line);
                    }
                }

                for (line, other_line) in zip_lines(close_position, other_close) {
                    if !matches.contains_key(&line) {
                        matches.insert(line, other_line);
                    }
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
                    if !matches.contains_key(&line) {
                        matches.insert(line, other_line);
                    }
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
            aligned_lines(&lhs_lines, &rhs_lines, &line_matches),
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
    fn test_atom_equality_ignores_change() {
        assert_eq!(
            Atom {
                info: SyntaxInfo {
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
