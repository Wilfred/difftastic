//! A graph representation for computing tree diffs.

use bumpalo::Bump;
use rustc_hash::FxHasher;
use std::{
    cell::Cell,
    cmp::min,
    hash::{BuildHasherDefault, Hash, Hasher},
    marker::PhantomData,
};
use strsim::normalized_levenshtein;

use crate::{
    diff::changes::{insert_deep_unchanged, ChangeKind, ChangeMap},
    parse::syntax::{AtomKind, Syntax},
};
use Edge::*;

/// Compress two `&Syntax` into a usize.
///
/// Utilize the LSB as flag since `&Syntax` is aligned.
///
/// ```text
/// LSB = 0 -> side syntax
/// LSB = 1 -> optional parent syntax (side syntax is None)
/// ```
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SideSyntax<'a> {
    data: usize,
    phantom: PhantomData<&'a Syntax<'a>>,
}

impl<'a> SideSyntax<'a> {
    pub fn is_side(&self) -> bool {
        self.data & 1 == 0
    }

    pub fn get_side(&self) -> Option<&'a Syntax<'a>> {
        if self.is_side() {
            Some(unsafe { &*(self.data as *const _) })
        } else {
            None
        }
    }

    pub fn parent(&self) -> Option<&'a Syntax<'a>> {
        match self.get_side() {
            Some(side) => side.parent(),
            None => match self.data ^ 1 {
                0 => None,
                d => Some(unsafe { &*(d as *const _) }),
            },
        }
    }

    pub fn root(&self) -> Option<&'a Syntax<'a>> {
        match self.get_side() {
            Some(side) => Some(side.root()),
            None => match self.data ^ 1 {
                0 => None,
                d => Some(unsafe { &*(d as *const Syntax<'a>) }.root()),
            },
        }
    }

    pub fn from_side(side: &'a Syntax<'a>) -> Self {
        Self {
            data: side as *const _ as _,
            phantom: PhantomData,
        }
    }

    pub fn from_parent(parent: Option<&'a Syntax<'a>>) -> Self {
        let data = match parent {
            Some(p) => p as *const _ as usize | 1,
            None => 1,
        };
        Self {
            data,
            phantom: PhantomData,
        }
    }
}

fn next_sibling<'a>(syntax: &'a Syntax<'a>) -> SideSyntax<'a> {
    let parent = SideSyntax::from_parent(syntax.parent());
    syntax.next_sibling().map_or(parent, SideSyntax::from_side)
}

fn next_child<'a>(syntax: &'a Syntax<'a>, children: &[&'a Syntax<'a>]) -> SideSyntax<'a> {
    let parent = SideSyntax::from_parent(Some(syntax));
    let child = children.get(0).copied();
    child.map_or(parent, SideSyntax::from_side)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u64)]
enum EnteredDelimiter {
    /// If we've entered the LHS or RHS separately, we can pop either
    /// side independently.
    PopEither = 0,
    /// If we've entered the LHS and RHS together, we must pop both
    /// sides together too. Otherwise we'd consider the following
    /// case to have no changes.
    ///
    /// ```text
    /// Old: (a b c)
    /// New: (a b) c
    /// ```
    PopBoth = 1,
}

use EnteredDelimiter::*;

/// LSP is the stack top. One bit represents one `EnteredDelimiter`.
///
/// Assume the underlying type is u8, then
///
/// ```text
/// new:      0b00000001
/// push x:   0b0000001x
/// push y:   0b000001xy
/// pop:      0b0000001x
/// ```
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct BitStack(u64);

impl BitStack {
    fn new() -> Self {
        Self(1)
    }

    fn is_empty(&self) -> bool {
        self.0 == 1
    }

    fn is_full(&self) -> bool {
        self.0 & (1 << 63) != 0
    }

    fn peek(&self) -> Option<EnteredDelimiter> {
        if self.is_empty() {
            None
        } else if self.0 & 1 == PopEither as u64 {
            Some(PopEither)
        } else {
            Some(PopBoth)
        }
    }

    fn push(&self, tag: EnteredDelimiter) -> Self {
        assert!(!self.is_full(), "BitStack is full!");
        Self((self.0 << 1) | tag as u64)
    }

    fn pop(&self) -> Self {
        assert!(!self.is_empty(), "BitStack is empty!");
        Self(self.0 >> 1)
    }
}

/// A vertex in a directed acyclic graph that represents a diff.
///
/// Each vertex represents two pointers: one to the next unmatched LHS
/// syntax, and one to the next unmatched RHS syntax.
///
/// For example, suppose we have `X A` on the LHS and `A` on the
/// RHS. Our start vertex looks like this.
///
/// ```text
/// LHS: X A     RHS: A
///      ^            ^
/// ```
///
/// From this vertex, we could take [`Edge::NovelAtomLHS`], bringing
/// us to this vertex.
///
/// ```text
/// LHS: X A     RHS: A
///        ^          ^
/// ```
///
/// Alternatively, we could take the [`Edge::NovelAtomRHS`], bringing us
/// to this vertex.
///
/// ```text
/// LHS: X A     RHS: A
///      ^              ^
/// ```
#[derive(Debug)]
pub struct Vertex<'a, 'b> {
    pub is_visited: Cell<bool>,
    pub shortest_distance: Cell<u64>,
    pub predecessor: Cell<Option<(Edge, &'b Vertex<'a, 'b>)>>,
    pub lhs_syntax: SideSyntax<'a>,
    pub rhs_syntax: SideSyntax<'a>,
    lhs_parent_stack: BitStack,
    rhs_parent_stack: BitStack,
}

impl<'a, 'b> Vertex<'a, 'b> {
    pub fn is_end(&self) -> bool {
        !self.lhs_syntax.is_side()
            && !self.rhs_syntax.is_side()
            && self.lhs_parent_stack.is_empty()
            && self.rhs_parent_stack.is_empty()
    }

    pub fn new(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) -> Self {
        Vertex {
            is_visited: Cell::new(false),
            shortest_distance: Cell::new(u64::MAX),
            predecessor: Cell::new(None),
            lhs_syntax: lhs_syntax.map_or(SideSyntax::from_parent(None), SideSyntax::from_side),
            rhs_syntax: rhs_syntax.map_or(SideSyntax::from_parent(None), SideSyntax::from_side),
            lhs_parent_stack: BitStack::new(),
            rhs_parent_stack: BitStack::new(),
        }
    }

    fn parents_eq(&self, other: &Vertex<'a, 'b>) -> bool {
        self.lhs_parent_stack == other.lhs_parent_stack
            && self.rhs_parent_stack == other.rhs_parent_stack
            && self.lhs_syntax.root() == other.lhs_syntax.root()
            && self.rhs_syntax.root() == other.rhs_syntax.root()
    }

    fn can_pop_either(&self) -> bool {
        // self.lhs_parent_stack.peek() == Some(PopEither)
        //     || self.rhs_parent_stack.peek() == Some(PopEither)

        // Utilize the fact that PopEither = 0 while stack top indicator is 1.
        self.lhs_parent_stack.0 & 1 == 0 || self.rhs_parent_stack.0 & 1 == 0
    }
}

impl PartialEq for Vertex<'_, '_> {
    fn eq(&self, other: &Self) -> bool {
        // Strictly speaking, we should compare the whole
        // EnteredDelimiter stack, not just the immediate
        // parents. By taking the immediate parent, we have
        // vertices with different stacks that are 'equal'.
        //
        // This makes the graph traversal path dependent: the
        // first vertex we see 'wins', and we use it for deciding
        // how we can pop.
        //
        // In practice this seems to work well. The first vertex
        // has the lowest cost, so has the most PopBoth
        // occurrences, which is the best outcome.
        //
        // Handling this properly would require considering many
        // more vertices to be distinct, exponentially increasing
        // the graph size relative to tree depth.

        // We do want to distinguish whether we can pop each side
        // independently though. Without this, if we find a case
        // where we can pop sides together, we don't consider the
        // case where we get a better diff by popping each side
        // separately.

        self.lhs_syntax == other.lhs_syntax
            && self.rhs_syntax == other.rhs_syntax
            && self.can_pop_either() == other.can_pop_either()
    }
}

impl Eq for Vertex<'_, '_> {}

impl Hash for Vertex<'_, '_> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.hash(state);
        self.rhs_syntax.hash(state);
        self.can_pop_either().hash(state);
    }
}

impl Default for Vertex<'_, '_> {
    fn default() -> Self {
        Self::new(None, None)
    }
}

/// An edge in our graph, with an associated [`cost`](Edge::cost).
///
/// A syntax node can always be marked as novel, so a vertex will have
/// at least a NovelFoo edge. Depending on the syntax nodes of the
/// current [`Vertex`], other edges may also be available.
///
/// See [`neighbours`] for all the edges available for a given `Vertex`.
#[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
pub enum Edge {
    UnchangedNode {
        depth_difference: u32,
    },
    EnterUnchangedDelimiter {
        depth_difference: u32,
    },
    ReplacedComment {
        levenshtein_pct: u8,
    },
    NovelAtomLHS {
        contiguous: bool,
        probably_punctuation: bool,
    },
    NovelAtomRHS {
        contiguous: bool,
        probably_punctuation: bool,
    },
    // TODO: An EnterNovelDelimiterBoth edge might help performance
    // rather doing LHS and RHS separately.
    EnterNovelDelimiterLHS {
        contiguous: bool,
    },
    EnterNovelDelimiterRHS {
        contiguous: bool,
    },
    ExitDelimiter,
}

const NOT_CONTIGUOUS_PENALTY: u64 = 50;

impl Edge {
    pub fn cost(self) -> u64 {
        match self {
            // When we're at the end of a list, there's only one exit
            // delimiter possibility, so the cost doesn't matter. We
            // choose a non-zero number as it's easier to reason
            // about.
            ExitDelimiter => 1,

            // Matching nodes is always best.
            UnchangedNode { depth_difference } => min(40, u64::from(depth_difference) + 1),
            // Matching an outer delimiter is good.
            EnterUnchangedDelimiter { depth_difference } => {
                100 + min(40, u64::from(depth_difference))
            }

            // Replacing a comment is better than treating it as novel.
            ReplacedComment { levenshtein_pct } => 150 + u64::from(100 - levenshtein_pct),

            // Otherwise, we've added/removed a node.
            NovelAtomLHS {
                contiguous,
                probably_punctuation,
            }
            | NovelAtomRHS {
                contiguous,
                probably_punctuation,
            } => {
                let mut cost = 300;
                if !contiguous {
                    cost += NOT_CONTIGUOUS_PENALTY;
                }
                // If it's only punctuation, decrease the cost
                // slightly. It's better to have novel punctuation
                // than novel variable names.
                if probably_punctuation {
                    cost -= 10;
                }
                cost
            }
            EnterNovelDelimiterLHS { contiguous } | EnterNovelDelimiterRHS { contiguous } => {
                let mut cost = 300;
                if !contiguous {
                    // This needs to be more than 40 greater than the
                    // contiguous case. Otherwise, we end up choosing
                    // a badly positioned unchanged delimiter just
                    // because it has a better depth difference.
                    //
                    // TODO: write a test for this case.
                    cost += NOT_CONTIGUOUS_PENALTY;
                }
                cost
            }
        }
    }
}

pub type SeenMap<'syn, 'b> = hashbrown::HashMap<
    &'b Vertex<'syn, 'b>,
    Option<&'b Vertex<'syn, 'b>>,
    BuildHasherDefault<FxHasher>,
>;

#[inline(never)]
fn allocate_if_new<'syn, 'b>(
    v: Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut SeenMap<'syn, 'b>,
) -> &'b Vertex<'syn, 'b> {
    match seen.get_key_value_mut(&v) {
        Some((key, value)) => {
            if let Some(existing) = value {
                return existing;
            }
            if key.parents_eq(&v) {
                return key;
            }
            let allocated = alloc.alloc(v);
            *value = Some(allocated);
            allocated
        }
        None => {
            let allocated = alloc.alloc(v);
            seen.insert(allocated, None);
            allocated
        }
    }
}

/// Does this atom look like punctuation?
///
/// This check is deliberately conservative, becuase it's hard to
/// accurately recognise punctuation in a language-agnostic way.
fn looks_like_punctuation(content: &str) -> bool {
    content == "," || content == ";" || content == "."
}

/// Compute the neighbours of `v`.
pub fn get_neighbours<'syn, 'b>(
    v: &Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut SeenMap<'syn, 'b>,
    neighbors: &mut Vec<(Edge, &'b Vertex<'syn, 'b>)>,
) {
    let mut add_neighbor = std::convert::identity(
        #[inline(always)]
        |edge, vertex| {
            let neighbor = allocate_if_new(vertex, alloc, seen);
            if !neighbor.is_visited.get() {
                neighbors.push((edge, neighbor));
            }
        },
    );

    let v_info = (
        v.lhs_syntax.get_side(),
        v.rhs_syntax.get_side(),
        v.lhs_parent_stack.peek(),
        v.rhs_parent_stack.peek(),
    );

    if let (None, None, Some(PopBoth), Some(PopBoth)) = v_info {
        // We have exhausted all the nodes on both lists, so we can
        // move up to the parent node.

        // Continue from sibling of parent.
        add_neighbor(
            ExitDelimiter,
            Vertex {
                lhs_syntax: next_sibling(v.lhs_syntax.parent().unwrap()),
                rhs_syntax: next_sibling(v.rhs_syntax.parent().unwrap()),
                lhs_parent_stack: v.lhs_parent_stack.pop(),
                rhs_parent_stack: v.rhs_parent_stack.pop(),
                ..Vertex::default()
            },
        );
    }

    if let (None, _, Some(PopEither), _) = v_info {
        // Move to next after LHS parent.

        // Continue from sibling of parent.
        add_neighbor(
            ExitDelimiter,
            Vertex {
                lhs_syntax: next_sibling(v.lhs_syntax.parent().unwrap()),
                rhs_syntax: v.rhs_syntax,
                lhs_parent_stack: v.lhs_parent_stack.pop(),
                rhs_parent_stack: v.rhs_parent_stack,
                ..Vertex::default()
            },
        );
    }

    if let (_, None, _, Some(PopEither)) = v_info {
        // Move to next after RHS parent.

        // Continue from sibling of parent.
        add_neighbor(
            ExitDelimiter,
            Vertex {
                lhs_syntax: v.lhs_syntax,
                rhs_syntax: next_sibling(v.rhs_syntax.parent().unwrap()),
                lhs_parent_stack: v.lhs_parent_stack,
                rhs_parent_stack: v.rhs_parent_stack.pop(),
                ..Vertex::default()
            },
        );
    }

    if let (Some(lhs_syntax), Some(rhs_syntax), _, _) = v_info {
        if lhs_syntax == rhs_syntax {
            let depth_difference = (lhs_syntax.num_ancestors() as i32
                - rhs_syntax.num_ancestors() as i32)
                .unsigned_abs();

            // Both nodes are equal, the happy case.
            add_neighbor(
                UnchangedNode { depth_difference },
                Vertex {
                    lhs_syntax: next_sibling(lhs_syntax),
                    rhs_syntax: next_sibling(rhs_syntax),
                    lhs_parent_stack: v.lhs_parent_stack,
                    rhs_parent_stack: v.rhs_parent_stack,
                    ..Vertex::default()
                },
            );
        }

        if let (
            Syntax::List {
                open_content: lhs_open_content,
                close_content: lhs_close_content,
                children: lhs_children,
                ..
            },
            Syntax::List {
                open_content: rhs_open_content,
                close_content: rhs_close_content,
                children: rhs_children,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            // The list delimiters are equal, but children may not be.
            if lhs_open_content == rhs_open_content && lhs_close_content == rhs_close_content {
                // TODO: be consistent between parents_next and next_parents.
                let depth_difference = (lhs_syntax.num_ancestors() as i32
                    - rhs_syntax.num_ancestors() as i32)
                    .unsigned_abs();

                add_neighbor(
                    EnterUnchangedDelimiter { depth_difference },
                    Vertex {
                        lhs_syntax: next_child(lhs_syntax, lhs_children),
                        rhs_syntax: next_child(rhs_syntax, rhs_children),
                        lhs_parent_stack: v.lhs_parent_stack.push(PopBoth),
                        rhs_parent_stack: v.rhs_parent_stack.push(PopBoth),
                        ..Vertex::default()
                    },
                );
            }
        }

        if let (
            Syntax::Atom {
                content: lhs_content,
                kind: AtomKind::Comment,
                ..
            },
            Syntax::Atom {
                content: rhs_content,
                kind: AtomKind::Comment,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            // Both sides are comments and their content is reasonably
            // similar.
            if lhs_content != rhs_content {
                let levenshtein_pct =
                    (normalized_levenshtein(lhs_content, rhs_content) * 100.0).round() as u8;

                add_neighbor(
                    ReplacedComment { levenshtein_pct },
                    Vertex {
                        lhs_syntax: next_sibling(lhs_syntax),
                        rhs_syntax: next_sibling(rhs_syntax),
                        lhs_parent_stack: v.lhs_parent_stack,
                        rhs_parent_stack: v.rhs_parent_stack,
                        ..Vertex::default()
                    },
                );
            }
        }
    }

    if let (Some(lhs_syntax), _, _, _) = v_info {
        match lhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { content, .. } => {
                add_neighbor(
                    NovelAtomLHS {
                        // TODO: should this apply if prev is a parent
                        // node rather than a sibling?
                        contiguous: lhs_syntax.prev_is_contiguous(),
                        probably_punctuation: looks_like_punctuation(content),
                    },
                    Vertex {
                        lhs_syntax: next_sibling(lhs_syntax),
                        rhs_syntax: v.rhs_syntax,
                        lhs_parent_stack: v.lhs_parent_stack,
                        rhs_parent_stack: v.rhs_parent_stack,
                        ..Vertex::default()
                    },
                );
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                add_neighbor(
                    EnterNovelDelimiterLHS {
                        contiguous: lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: next_child(lhs_syntax, children),
                        rhs_syntax: v.rhs_syntax,
                        lhs_parent_stack: v.lhs_parent_stack.push(PopEither),
                        rhs_parent_stack: v.rhs_parent_stack,
                        ..Vertex::default()
                    },
                );
            }
        }
    }

    if let (_, Some(rhs_syntax), _, _) = v_info {
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { content, .. } => {
                add_neighbor(
                    NovelAtomRHS {
                        contiguous: rhs_syntax.prev_is_contiguous(),
                        probably_punctuation: looks_like_punctuation(content),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: next_sibling(rhs_syntax),
                        lhs_parent_stack: v.lhs_parent_stack,
                        rhs_parent_stack: v.rhs_parent_stack,
                        ..Vertex::default()
                    },
                );
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                add_neighbor(
                    EnterNovelDelimiterRHS {
                        contiguous: rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: next_child(rhs_syntax, children),
                        lhs_parent_stack: v.lhs_parent_stack,
                        rhs_parent_stack: v.rhs_parent_stack.push(PopEither),
                        ..Vertex::default()
                    },
                );
            }
        }
    }
}

pub fn populate_change_map<'a, 'b>(
    route: &[(Edge, &'b Vertex<'a, 'b>)],
    change_map: &mut ChangeMap<'a>,
) {
    change_map.reserve(route.len());

    for (e, v) in route {
        match e {
            ExitDelimiter => {
                // Nothing to do: we have already marked this node when we entered it.
            }
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();

                insert_deep_unchanged(lhs, rhs, change_map);
            }
            EnterUnchangedDelimiter { .. } => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::Unchanged(rhs));
                change_map.insert(rhs, ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } => {
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();

                if *levenshtein_pct > 40 {
                    change_map.insert(lhs, ChangeKind::ReplacedComment(lhs, rhs));
                    change_map.insert(rhs, ChangeKind::ReplacedComment(rhs, lhs));
                } else {
                    change_map.insert(lhs, ChangeKind::Novel);
                    change_map.insert(rhs, ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | EnterNovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | EnterNovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(rhs, ChangeKind::Novel);
            }
        }
    }
}
