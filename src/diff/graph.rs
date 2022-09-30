//! A graph representation for computing tree diffs.

use bumpalo::Bump;
use rustc_hash::FxHashMap;
use std::{
    cell::{Cell, UnsafeCell},
    cmp::min,
    hash::{Hash, Hasher},
    marker::PhantomData,
    mem::transmute_copy,
};
use strsim::normalized_levenshtein;

use crate::{
    diff::{
        changes::{insert_deep_unchanged, ChangeKind, ChangeMap},
        stack::Stack,
    },
    parse::syntax::{AtomKind, Syntax, SyntaxId},
};
use Edge::*;

/// Compress `&Syntax` and `SyntaxId` into a usize.
///
/// Utilize the LSB as flag since `Syntax` is aligned.
///
/// ```text
/// LSB = 0 -> &Syntax
/// LSB = 1 -> SyntaxId * 2 + 1
/// ```
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SyntaxRefOrId<'a> {
    data: usize,
    phantom: PhantomData<&'a Syntax<'a>>,
}

impl<'a> SyntaxRefOrId<'a> {
    pub fn is_ref(&self) -> bool {
        self.data & 1 == 0
    }

    pub fn is_id(&self) -> bool {
        self.data & 1 == 1
    }

    pub fn get_ref(&self) -> Option<&'a Syntax<'a>> {
        if self.is_ref() {
            Some(unsafe { transmute_copy(&self.data) })
        } else {
            None
        }
    }
}

impl<'a> From<&'a Syntax<'a>> for SyntaxRefOrId<'a> {
    fn from(s: &'a Syntax<'a>) -> Self {
        Self {
            data: s as *const _ as _,
            phantom: PhantomData,
        }
    }
}

impl From<Option<SyntaxId>> for SyntaxRefOrId<'_> {
    fn from(s: Option<SyntaxId>) -> Self {
        Self {
            data: s.map_or(0, |n| n.get() as usize) * 2 + 1,
            phantom: PhantomData,
        }
    }
}

fn next_sibling_syntax<'a>(syntax: &'a Syntax<'a>) -> SyntaxRefOrId<'a> {
    let parent_id = syntax.parent().map(Syntax::id);
    syntax.next_sibling().map_or(parent_id.into(), |n| n.into())
}

fn next_child_syntax<'a>(syntax: &'a Syntax<'a>, children: &[&'a Syntax<'a>]) -> SyntaxRefOrId<'a> {
    let child = children.get(0).copied();
    child.map_or(Some(syntax.id()).into(), |s| s.into())
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
    // TODO: how to design the boundary of unsafe?
    pub neighbours: UnsafeCell<Option<Vec<(Edge, &'b Vertex<'a, 'b>)>>>,
    pub shortest_distance: Cell<u64>,
    pub predecessor: Cell<Option<&'b Vertex<'a, 'b>>>,
    pub lhs_syntax: SyntaxRefOrId<'a>,
    pub rhs_syntax: SyntaxRefOrId<'a>,
    lhs_parents: Stack<EnteredDelimiter<'a>>,
    rhs_parents: Stack<EnteredDelimiter<'a>>,
}

impl<'a, 'b> Vertex<'a, 'b> {
    pub fn is_end(&self) -> bool {
        self.lhs_syntax.is_id()
            && self.rhs_syntax.is_id()
            && self.lhs_parents.is_empty()
            && self.rhs_parents.is_empty()
    }

    pub fn new(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) -> Self {
        Vertex {
            neighbours: UnsafeCell::new(None),
            shortest_distance: Cell::new(u64::MAX),
            predecessor: Cell::new(None),
            lhs_syntax: lhs_syntax.map_or(None.into(), |s| s.into()),
            rhs_syntax: rhs_syntax.map_or(None.into(), |s| s.into()),
            lhs_parents: Stack::new(),
            rhs_parents: Stack::new(),
        }
    }

    fn can_pop_either_parent(&self) -> bool {
        matches!(self.lhs_parents.peek().map(Into::into), Some(PopEither(_)))
            || matches!(self.rhs_parents.peek().map(Into::into), Some(PopEither(_)))
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
            && self.can_pop_either_parent() == other.can_pop_either_parent()
    }
}

impl Eq for Vertex<'_, '_> {}

impl Hash for Vertex<'_, '_> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.hash(state);
        self.rhs_syntax.hash(state);
        self.can_pop_either_parent().hash(state);
    }
}

impl Default for Vertex<'_, '_> {
    fn default() -> Self {
        Self::new(None, None)
    }
}

/// Tracks entering syntax List nodes.
#[derive(Debug, Clone, PartialEq, Eq)]
enum EnteredDelimiterEnum<'a> {
    /// If we've entered the LHS or RHS separately, we can pop either
    /// side independently.
    ///
    /// Assumes that at least one stack is non-empty.
    PopEither(&'a Syntax<'a>),
    /// If we've entered the LHS and RHS together, we must pop both
    /// sides together too. Otherwise we'd consider the following case to have no changes.
    ///
    /// ```text
    /// Old: (a b c)
    /// New: (a b) c
    /// ```
    PopBoth(&'a Syntax<'a>),
}

use EnteredDelimiterEnum::*;

/// Compress `EnteredDelimiterEnum` into a usize.
///
/// Utilize the LSB as flag since `Syntax` is aligned.
///
/// ```text
/// LSB = 0 -> PopEither
/// LSB = 1 -> PopBoth
/// ```
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EnteredDelimiter<'a> {
    data: usize,
    phantom: PhantomData<&'a Syntax<'a>>,
}

impl<'a> From<&EnteredDelimiter<'a>> for EnteredDelimiterEnum<'a> {
    fn from(delim: &EnteredDelimiter<'a>) -> Self {
        if delim.data & 1 == 0 {
            PopEither(unsafe { transmute_copy(&delim.data) })
        } else {
            PopBoth(unsafe { transmute_copy(&(delim.data ^ 1)) })
        }
    }
}

impl<'a> From<&EnteredDelimiterEnum<'a>> for EnteredDelimiter<'a> {
    fn from(delim: &EnteredDelimiterEnum<'a>) -> Self {
        let data = match *delim {
            PopEither(s) => s as *const _ as usize,
            PopBoth(s) => s as *const _ as usize | 1,
        };
        EnteredDelimiter {
            data,
            phantom: PhantomData,
        }
    }
}

fn push_both<'a>(
    lhs_entered: &Stack<EnteredDelimiter<'a>>,
    rhs_entered: &Stack<EnteredDelimiter<'a>>,
    lhs_delim: &'a Syntax<'a>,
    rhs_delim: &'a Syntax<'a>,
) -> (Stack<EnteredDelimiter<'a>>, Stack<EnteredDelimiter<'a>>) {
    (
        lhs_entered.push((&PopBoth(lhs_delim)).into()),
        rhs_entered.push((&PopBoth(rhs_delim)).into()),
    )
}

fn push_either<'a>(
    entered: &Stack<EnteredDelimiter<'a>>,
    delim: &'a Syntax<'a>,
) -> Stack<EnteredDelimiter<'a>> {
    entered.push((&PopEither(delim)).into())
}

fn try_pop_both<'a>(
    lhs_entered: &Stack<EnteredDelimiter<'a>>,
    rhs_entered: &Stack<EnteredDelimiter<'a>>,
) -> Option<(
    &'a Syntax<'a>,
    &'a Syntax<'a>,
    Stack<EnteredDelimiter<'a>>,
    Stack<EnteredDelimiter<'a>>,
)> {
    match (
        lhs_entered.peek().map(Into::into),
        rhs_entered.peek().map(Into::into),
    ) {
        (Some(PopBoth(lhs_delim)), Some(PopBoth(rhs_delim))) => Some((
            lhs_delim,
            rhs_delim,
            lhs_entered.pop().unwrap(),
            rhs_entered.pop().unwrap(),
        )),
        _ => None,
    }
}

fn try_pop_either<'a>(
    entered: &Stack<EnteredDelimiter<'a>>,
) -> Option<(&'a Syntax<'a>, Stack<EnteredDelimiter<'a>>)> {
    match entered.peek().map(Into::into) {
        Some(PopEither(delim)) => Some((delim, entered.pop().unwrap())),
        _ => None,
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
    ExitDelimiterLHS,
    ExitDelimiterRHS,
    ExitDelimiterBoth,
}

const NOT_CONTIGUOUS_PENALTY: u64 = 50;

impl Edge {
    pub fn cost(self) -> u64 {
        match self {
            // When we're at the end of a list, there's only one exit
            // delimiter possibility, so the cost doesn't matter. We
            // choose a non-zero number as it's easier to reason
            // about.
            ExitDelimiterBoth => 1,
            // Choose a higher value for exiting individually. This
            // shouldn't matter since entering a novel delimiter is
            // already more expensive than entering a matched
            // delimiter, but be defensive.
            ExitDelimiterLHS | ExitDelimiterRHS => 2,

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

type SeenMap<'syn, 'b> =
    FxHashMap<&'b Vertex<'syn, 'b>, (Option<&'b Vertex<'syn, 'b>>, Option<&'b Vertex<'syn, 'b>>)>;

#[inline(never)]
fn allocate_if_new<'syn, 'b>(
    v: Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut SeenMap<'syn, 'b>,
) -> &'b Vertex<'syn, 'b> {
    match seen.get_mut(&v) {
        Some(existing) => match existing {
            (Some(_), Some(v2)) => v2,
            (Some(v1), sv2) => {
                if v1.lhs_parents == v.lhs_parents && v1.rhs_parents == v.rhs_parents {
                    v1
                } else {
                    let allocated = alloc.alloc(v);
                    *sv2 = Some(allocated);
                    allocated
                }
            }
            _ => unreachable!(),
        },
        None => {
            let allocated = alloc.alloc(v);
            seen.insert(allocated, (Some(allocated), None));
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

/// Compute the neighbours of `v` if we haven't previously done so,
/// write them to the .neighbours cell inside `v`, and return them.
pub fn set_neighbours<'syn, 'b>(
    v: &Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut SeenMap<'syn, 'b>,
) {
    if unsafe { (&*v.neighbours.get()).is_some() } {
        return;
    }

    let mut res = Vec::with_capacity(4);

    let mut add_neighbor = std::convert::identity(
        #[inline(always)]
        |edge, vertex| res.push((edge, allocate_if_new(vertex, alloc, seen))),
    );

    if v.lhs_syntax.is_id() && v.rhs_syntax.is_id() {
        if let Some((lhs_parent, rhs_parent, lhs_parents_next, rhs_parents_next)) =
            try_pop_both(&v.lhs_parents, &v.rhs_parents)
        {
            // We have exhausted all the nodes on both lists, so we can
            // move up to the parent node.

            // Continue from sibling of parent.
            add_neighbor(
                ExitDelimiterBoth,
                Vertex {
                    lhs_syntax: next_sibling_syntax(lhs_parent),
                    rhs_syntax: next_sibling_syntax(rhs_parent),
                    lhs_parents: lhs_parents_next,
                    rhs_parents: rhs_parents_next,
                    ..Vertex::default()
                },
            );
        }
    }

    if v.lhs_syntax.is_id() {
        if let Some((lhs_parent, lhs_parents_next)) = try_pop_either(&v.lhs_parents) {
            // Move to next after LHS parent.

            // Continue from sibling of parent.
            add_neighbor(
                ExitDelimiterLHS,
                Vertex {
                    lhs_syntax: next_sibling_syntax(lhs_parent),
                    rhs_syntax: v.rhs_syntax,
                    lhs_parents: lhs_parents_next,
                    rhs_parents: v.rhs_parents.clone(),
                    ..Vertex::default()
                },
            );
        }
    }

    if v.rhs_syntax.is_id() {
        if let Some((rhs_parent, rhs_parents_next)) = try_pop_either(&v.rhs_parents) {
            // Move to next after RHS parent.

            // Continue from sibling of parent.
            add_neighbor(
                ExitDelimiterRHS,
                Vertex {
                    lhs_syntax: v.lhs_syntax,
                    rhs_syntax: next_sibling_syntax(rhs_parent),
                    lhs_parents: v.lhs_parents.clone(),
                    rhs_parents: rhs_parents_next,
                    ..Vertex::default()
                },
            );
        }
    }

    if let (Some(lhs_syntax), Some(rhs_syntax)) = (v.lhs_syntax.get_ref(), v.rhs_syntax.get_ref()) {
        if lhs_syntax == rhs_syntax {
            let depth_difference = (lhs_syntax.num_ancestors() as i32
                - rhs_syntax.num_ancestors() as i32)
                .unsigned_abs();

            // Both nodes are equal, the happy case.
            add_neighbor(
                UnchangedNode { depth_difference },
                Vertex {
                    lhs_syntax: next_sibling_syntax(lhs_syntax),
                    rhs_syntax: next_sibling_syntax(rhs_syntax),
                    lhs_parents: v.lhs_parents.clone(),
                    rhs_parents: v.rhs_parents.clone(),
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
                let (lhs_parents_next, rhs_parents_next) =
                    push_both(&v.lhs_parents, &v.rhs_parents, lhs_syntax, rhs_syntax);

                let depth_difference = (lhs_syntax.num_ancestors() as i32
                    - rhs_syntax.num_ancestors() as i32)
                    .unsigned_abs();

                add_neighbor(
                    EnterUnchangedDelimiter { depth_difference },
                    Vertex {
                        lhs_syntax: next_child_syntax(lhs_syntax, lhs_children),
                        rhs_syntax: next_child_syntax(rhs_syntax, rhs_children),
                        lhs_parents: lhs_parents_next,
                        rhs_parents: rhs_parents_next,
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
                        lhs_syntax: next_sibling_syntax(lhs_syntax),
                        rhs_syntax: next_sibling_syntax(rhs_syntax),
                        lhs_parents: v.lhs_parents.clone(),
                        rhs_parents: v.rhs_parents.clone(),
                        ..Vertex::default()
                    },
                );
            }
        }
    }

    if let Some(lhs_syntax) = v.lhs_syntax.get_ref() {
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
                        lhs_syntax: next_sibling_syntax(lhs_syntax),
                        rhs_syntax: v.rhs_syntax,
                        lhs_parents: v.lhs_parents.clone(),
                        rhs_parents: v.rhs_parents.clone(),
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
                        lhs_syntax: next_child_syntax(lhs_syntax, children),
                        rhs_syntax: v.rhs_syntax,
                        lhs_parents: push_either(&v.lhs_parents, lhs_syntax),
                        rhs_parents: v.rhs_parents.clone(),
                        ..Vertex::default()
                    },
                );
            }
        }
    }

    if let Some(rhs_syntax) = v.rhs_syntax.get_ref() {
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
                        rhs_syntax: next_sibling_syntax(rhs_syntax),
                        lhs_parents: v.lhs_parents.clone(),
                        rhs_parents: v.rhs_parents.clone(),
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
                        rhs_syntax: next_child_syntax(rhs_syntax, children),
                        lhs_parents: v.lhs_parents.clone(),
                        rhs_parents: push_either(&v.rhs_parents, rhs_syntax),
                        ..Vertex::default()
                    },
                );
            }
        }
    }
    assert!(
        !res.is_empty(),
        "Must always find some next steps if node is not the end"
    );

    unsafe { *v.neighbours.get() = Some(res) };
}

pub fn populate_change_map<'a, 'b>(
    route: &[(Edge, &'b Vertex<'a, 'b>)],
    change_map: &mut ChangeMap<'a>,
) {
    for (e, v) in route {
        match e {
            ExitDelimiterBoth | ExitDelimiterLHS | ExitDelimiterRHS => {
                // Nothing to do: we have already marked this node when we entered it.
            }
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.get_ref().unwrap();
                let rhs = v.rhs_syntax.get_ref().unwrap();

                insert_deep_unchanged(lhs, rhs, change_map);
                insert_deep_unchanged(rhs, lhs, change_map);
            }
            EnterUnchangedDelimiter { .. } => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.get_ref().unwrap();
                let rhs = v.rhs_syntax.get_ref().unwrap();
                change_map.insert(lhs, ChangeKind::Unchanged(rhs));
                change_map.insert(rhs, ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } => {
                let lhs = v.lhs_syntax.get_ref().unwrap();
                let rhs = v.rhs_syntax.get_ref().unwrap();

                if *levenshtein_pct > 40 {
                    change_map.insert(lhs, ChangeKind::ReplacedComment(lhs, rhs));
                    change_map.insert(rhs, ChangeKind::ReplacedComment(rhs, lhs));
                } else {
                    change_map.insert(lhs, ChangeKind::Novel);
                    change_map.insert(rhs, ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | EnterNovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.get_ref().unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | EnterNovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax.get_ref().unwrap();
                change_map.insert(rhs, ChangeKind::Novel);
            }
        }
    }
}
