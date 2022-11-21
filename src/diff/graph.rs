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

    pub fn from_side(side: &'a Syntax<'a>) -> Self {
        Self {
            data: side as *const _ as _,
            phantom: PhantomData,
        }
    }

    pub fn from_parent(parent: Option<&'a Syntax<'a>>) -> Self {
        Self {
            data: parent.map_or(0, |s| s as *const _ as usize) | 1,
            phantom: PhantomData,
        }
    }
}

fn get_ptr<T>(opt: Option<&T>) -> *const T {
    opt.map_or(std::ptr::null::<T>(), |t| t as *const _)
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
/// From this vertex, we could take [`Edge::NovelLhs`], bringing
/// us to this vertex.
///
/// ```text
/// LHS: X A     RHS: A
///        ^          ^
/// ```
///
/// Alternatively, we could take the [`Edge::NovelRhs`], bringing us
/// to this vertex.
///
/// ```text
/// LHS: X A     RHS: A
///      ^              ^
/// ```
#[derive(Debug)]
pub struct Vertex<'a, 'b> {
    // states
    pub is_visited: Cell<bool>,
    pub shortest_distance: Cell<u64>,
    pub pred_edge: Cell<Option<Edge>>,
    pub pred_vertex: Cell<Option<&'b Vertex<'a, 'b>>>,

    // core info
    pub lhs_syntax: SideSyntax<'a>,
    pub rhs_syntax: SideSyntax<'a>,
    // If we've entered the LHS and RHS together, we must pop both
    // sides together too. Otherwise we'd consider the following
    // case to have no changes.
    //
    // ```text
    // Old: (a b c)
    // New: (a b) c
    // ```
    pop_both_ancestor: Option<&'b Vertex<'a, 'b>>,
    // If we've entered the LHS or RHS separately, we can pop either
    // side independently.
    pop_lhs_cnt: u16,
    pop_rhs_cnt: u16,
}

impl<'a, 'b> Vertex<'a, 'b> {
    pub fn is_end(&self) -> bool {
        !self.lhs_syntax.is_side()
            && !self.rhs_syntax.is_side()
            && self.pop_both_ancestor.is_none()
            && self.pop_lhs_cnt == 0
            && self.pop_rhs_cnt == 0
    }

    pub fn new(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) -> Self {
        Vertex {
            is_visited: Cell::new(false),
            shortest_distance: Cell::new(u64::MAX),
            pred_edge: Cell::new(None),
            pred_vertex: Cell::new(None),
            lhs_syntax: lhs_syntax.map_or(SideSyntax::from_parent(None), SideSyntax::from_side),
            rhs_syntax: rhs_syntax.map_or(SideSyntax::from_parent(None), SideSyntax::from_side),
            pop_both_ancestor: None,
            pop_lhs_cnt: 0,
            pop_rhs_cnt: 0,
        }
    }

    fn parent_stack_eq(&self, other: &Vertex<'a, 'b>) -> bool {
        // Vertices are pinned so ptrs are unique IDs
        get_ptr(self.pop_both_ancestor) == get_ptr(other.pop_both_ancestor)
            && self.pop_lhs_cnt == other.pop_lhs_cnt
            && self.pop_rhs_cnt == other.pop_rhs_cnt
    }

    fn can_pop_either(&self) -> bool {
        self.pop_lhs_cnt != 0 || self.pop_rhs_cnt != 0
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
    UnchangedNode,
    EnterUnchangedDelimiter,
    ReplacedComment,
    NovelComment,
    NovelLhs,
    NovelRhs,
    // TODO: An EnterNovelDelimiterBoth edge might help performance
    // rather doing LHS and RHS separately.
}

use Edge::*;

const NOT_CONTIGUOUS_PENALTY: u64 = 50;

pub type SeenMap<'syn, 'b> = hashbrown::HashMap<
    &'b Vertex<'syn, 'b>,
    Option<&'b Vertex<'syn, 'b>>,
    BuildHasherDefault<FxHasher>,
>;

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
            if key.parent_stack_eq(&v) {
                return key;
            }
            let allocated = alloc.alloc(v);
            *value = Some(allocated);
            allocated
        }
        None => {
            let allocated = alloc.alloc(v);
            seen.insert_unique_unchecked(allocated, None);
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

#[inline(always)]
fn next_sibling<'a>(syntax: &'a Syntax<'a>) -> SideSyntax<'a> {
    let parent = SideSyntax::from_parent(syntax.parent());
    syntax.next_sibling().map_or(parent, SideSyntax::from_side)
}

#[inline(always)]
fn next_child<'a>(syntax: &'a Syntax<'a>, children: &[&'a Syntax<'a>]) -> SideSyntax<'a> {
    let parent = SideSyntax::from_parent(Some(syntax));
    let child = children.get(0).copied();
    child.map_or(parent, SideSyntax::from_side)
}

#[inline(always)]
fn next_vertex<'a, 'b>(
    mut lhs_syntax: SideSyntax<'a>,
    mut rhs_syntax: SideSyntax<'a>,
    mut pop_both_ancestor: Option<&'b Vertex<'a, 'b>>,
    mut pop_lhs_cnt: u16,
    mut pop_rhs_cnt: u16,
) -> Vertex<'a, 'b> {
    loop {
        while !lhs_syntax.is_side() && pop_lhs_cnt > 0 {
            lhs_syntax = next_sibling(lhs_syntax.parent().unwrap());
            pop_lhs_cnt -= 1;
        }

        while !rhs_syntax.is_side() && pop_rhs_cnt > 0 {
            rhs_syntax = next_sibling(rhs_syntax.parent().unwrap());
            pop_rhs_cnt -= 1;
        }

        if let (false, false, Some(ancestor), 0, 0) = (
            lhs_syntax.is_side(),
            rhs_syntax.is_side(),
            pop_both_ancestor,
            pop_lhs_cnt,
            pop_rhs_cnt,
        ) {
            lhs_syntax = next_sibling(lhs_syntax.parent().unwrap());
            rhs_syntax = next_sibling(rhs_syntax.parent().unwrap());
            pop_both_ancestor = ancestor.pop_both_ancestor;
            pop_lhs_cnt = ancestor.pop_lhs_cnt;
            pop_rhs_cnt = ancestor.pop_rhs_cnt;
        } else {
            break;
        }
    }

    Vertex {
        lhs_syntax,
        rhs_syntax,
        pop_both_ancestor,
        pop_lhs_cnt,
        pop_rhs_cnt,
        ..Default::default()
    }
}

#[inline(always)]
fn next_novel<'a>(syntax: &'a Syntax<'a>, pop_cnt: u16) -> (u64, SideSyntax<'a>, u16) {
    let mut cost = 300;
    // TODO: should this apply if prev is a parent
    // node rather than a sibling?
    if !syntax.prev_is_contiguous() {
        cost += NOT_CONTIGUOUS_PENALTY;
    }

    let next_syntax;
    let next_pop_cnt;

    match syntax {
        Syntax::Atom { content, .. } => {
            // If it's only punctuation, decrease the cost
            // slightly. It's better to have novel punctuation
            // than novel variable names.
            if looks_like_punctuation(content) {
                cost -= 10;
            }
            next_syntax = next_sibling(syntax);
            next_pop_cnt = pop_cnt;
        }
        Syntax::List { children, .. } => {
            next_syntax = next_child(syntax, children);
            next_pop_cnt = pop_cnt + 1;
        }
    };

    (cost, next_syntax, next_pop_cnt)
}

/// Compute the neighbours of `v`.
pub fn get_neighbours<'syn, 'b>(
    v: &'b Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut SeenMap<'syn, 'b>,
    neighbors: &mut Vec<(Edge, u64, &'b Vertex<'syn, 'b>)>,
) {
    let mut add_neighbor = std::convert::identity(
        #[inline(always)]
        |edge, cost, vertex| {
            let neighbor = allocate_if_new(vertex, alloc, seen);
            if !neighbor.is_visited.get() {
                neighbors.push((edge, cost, neighbor));
            }
        },
    );

    let v_info = (v.lhs_syntax.get_side(), v.rhs_syntax.get_side());

    if let (Some(lhs_syntax), Some(rhs_syntax)) = v_info {
        if lhs_syntax == rhs_syntax {
            // Both nodes are equal, the happy case.
            let depth_difference = (lhs_syntax.num_ancestors() as i64
                - rhs_syntax.num_ancestors() as i64)
                .unsigned_abs();
            let cost = min(40, depth_difference + 1);

            add_neighbor(
                UnchangedNode,
                cost,
                next_vertex(
                    next_sibling(lhs_syntax),
                    next_sibling(rhs_syntax),
                    v.pop_both_ancestor,
                    v.pop_lhs_cnt,
                    v.pop_rhs_cnt,
                ),
            );
        } else if let (
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
                let depth_difference = (lhs_syntax.num_ancestors() as i64
                    - rhs_syntax.num_ancestors() as i64)
                    .unsigned_abs();
                let cost = 100 + min(40, depth_difference);

                add_neighbor(
                    EnterUnchangedDelimiter,
                    cost,
                    next_vertex(
                        next_child(lhs_syntax, lhs_children),
                        next_child(rhs_syntax, rhs_children),
                        Some(v),
                        0,
                        0,
                    ),
                );
            }
        } else if let (
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
            // Both sides are comments and their content is reasonably similar.
            let levenshtein_pct =
                (normalized_levenshtein(lhs_content, rhs_content) * 100.0).round() as u8;
            let cost = 150 + u64::from(100 - levenshtein_pct);

            add_neighbor(
                if levenshtein_pct > 40 {
                    ReplacedComment
                } else {
                    NovelComment
                },
                cost,
                next_vertex(
                    next_sibling(lhs_syntax),
                    next_sibling(rhs_syntax),
                    v.pop_both_ancestor,
                    v.pop_lhs_cnt,
                    v.pop_rhs_cnt,
                ),
            );
        }
    }

    if let (Some(lhs_syntax), _) = v_info {
        let (cost, next_syntax, next_pop_cnt) = next_novel(lhs_syntax, v.pop_lhs_cnt);

        add_neighbor(
            NovelLhs,
            cost,
            next_vertex(
                next_syntax,
                v.rhs_syntax,
                v.pop_both_ancestor,
                next_pop_cnt,
                v.pop_rhs_cnt,
            ),
        );
    }

    if let (_, Some(rhs_syntax)) = v_info {
        let (cost, next_syntax, next_pop_cnt) = next_novel(rhs_syntax, v.pop_rhs_cnt);

        add_neighbor(
            NovelRhs,
            cost,
            next_vertex(
                v.lhs_syntax,
                next_syntax,
                v.pop_both_ancestor,
                v.pop_lhs_cnt,
                next_pop_cnt,
            ),
        );
    }
}

pub fn populate_change_map<'a, 'b>(
    route: &[(Edge, &'b Vertex<'a, 'b>)],
    change_map: &mut ChangeMap<'a>,
) {
    change_map.reserve(route.len());

    for (e, v) in route {
        match e {
            UnchangedNode => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();

                insert_deep_unchanged(lhs, rhs, change_map);
            }
            EnterUnchangedDelimiter => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::Unchanged(rhs));
                change_map.insert(rhs, ChangeKind::Unchanged(lhs));
            }
            ReplacedComment => {
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::ReplacedComment(lhs, rhs));
                change_map.insert(rhs, ChangeKind::ReplacedComment(rhs, lhs));
            }
            NovelComment => {
                let lhs = v.lhs_syntax.get_side().unwrap();
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
                change_map.insert(rhs, ChangeKind::Novel);
            }
            NovelLhs => {
                let lhs = v.lhs_syntax.get_side().unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
            }
            NovelRhs => {
                let rhs = v.rhs_syntax.get_side().unwrap();
                change_map.insert(rhs, ChangeKind::Novel);
            }
        }
    }
}
