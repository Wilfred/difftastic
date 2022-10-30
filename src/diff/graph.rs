//! A graph representation for computing tree diffs.

use bumpalo::Bump;
use rustc_hash::FxHashMap;
use std::{
    cell::{Cell, RefCell},
    cmp::min,
    fmt,
    hash::{Hash, Hasher},
};
use strsim::normalized_levenshtein;

use crate::{
    diff::{
        changes::{insert_deep_unchanged, ChangeKind, ChangeMap},
        stack::Stack,
    },
    parse::syntax::{AtomKind, Syntax},
};
use Edge::*;

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
#[derive(Debug, Clone)]
pub struct Vertex<'a, 'b> {
    pub forward_neighbours: RefCell<Option<Vec<(Edge, &'b Vertex<'a, 'b>)>>>,
    pub backward_neighbours: RefCell<Option<Vec<(Edge, &'b Vertex<'a, 'b>)>>>,
    pub forward_predecessor: Cell<Option<(u64, &'b Vertex<'a, 'b>)>>,
    pub backward_predecessor: Cell<Option<(u64, &'b Vertex<'a, 'b>)>>,
    pub seen: Cell<(bool, bool)>, // Forward and backward, respectively.
    pub lhs_pos: u32,
    pub rhs_pos: u32,
    parents: Stack<EnteredDelimiter>,
}

impl<'a, 'b> PartialEq for Vertex<'a, 'b> {
    fn eq(&self, other: &Self) -> bool {
        if self.lhs_pos != other.lhs_pos || self.rhs_pos != other.rhs_pos {
            return false;
        }

        // Strictly speaking, we should compare the whole
        // EnteredDelimiter stack, not just where we are
        // in the tree (which essentially includes only all parents,
        // not how we got to them). By taking the position,
        // we have vertices with different stacks that are 'equal'.
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
        can_pop_either_parent(&self.parents) == can_pop_either_parent(&other.parents)
    }
}
impl<'a, 'b> Eq for Vertex<'a, 'b> {}

impl<'a, 'b> Hash for Vertex<'a, 'b> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_pos.hash(state);
        self.rhs_pos.hash(state);
        can_pop_either_parent(&self.parents).hash(state);
    }
}

/// Tracks entering syntax List nodes.
#[derive(Clone, PartialEq)]
enum EnteredDelimiter {
    /// If we've entered the LHS or RHS separately, we can pop either
    /// side independently.
    ///
    /// Assumes that at least one stack is non-empty.
    PopEither((Stack<u32>, Stack<u32>)),
    /// If we've entered the LHS and RHS together, we must pop both
    /// sides together too. Otherwise we'd consider the following case to have no changes.
    ///
    /// ```text
    /// Old: (a b c)
    /// New: (a b) c
    /// ```
    PopBoth((u32, u32)),
}

impl<'a> fmt::Debug for EnteredDelimiter {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            EnteredDelimiter::PopEither((lhs_delims, rhs_delims)) => {
                format!(
                    "PopEither(lhs count: {}, rhs count: {})",
                    lhs_delims.size(),
                    rhs_delims.size()
                )
            }
            EnteredDelimiter::PopBoth(_) => "PopBoth".to_string(),
        };
        f.write_str(&desc)
    }
}

fn push_both_delimiters<'a>(
    entered: &Stack<EnteredDelimiter>,
    lhs_delim: u32,
    rhs_delim: u32,
) -> Stack<EnteredDelimiter> {
    entered.push(EnteredDelimiter::PopBoth((lhs_delim, rhs_delim)))
}

fn can_pop_either_parent(entered: &Stack<EnteredDelimiter>) -> bool {
    matches!(entered.peek(), Some(EnteredDelimiter::PopEither(_)))
}

fn try_pop_both<'a>(
    entered: &Stack<EnteredDelimiter>,
) -> Option<(u32, u32, Stack<EnteredDelimiter>)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopBoth((lhs_delim, rhs_delim))) => {
            Some((*lhs_delim, *rhs_delim, entered.pop().unwrap()))
        }
        _ => None,
    }
}

fn try_pop_lhs<'a>(entered: &Stack<EnteredDelimiter>) -> Option<(u32, Stack<EnteredDelimiter>)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => match lhs_delims.peek() {
            Some(lhs_delim) => {
                let mut entered = entered.pop().unwrap();
                let new_lhs_delims = lhs_delims.pop().unwrap();

                if !new_lhs_delims.is_empty() || !rhs_delims.is_empty() {
                    entered = entered.push(EnteredDelimiter::PopEither((
                        new_lhs_delims,
                        rhs_delims.clone(),
                    )));
                }

                Some((*lhs_delim, entered))
            }
            None => None,
        },
        _ => None,
    }
}

fn try_pop_rhs<'a>(entered: &Stack<EnteredDelimiter>) -> Option<(u32, Stack<EnteredDelimiter>)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => match rhs_delims.peek() {
            Some(rhs_delim) => {
                let mut entered = entered.pop().unwrap();
                let new_rhs_delims = rhs_delims.pop().unwrap();

                if !lhs_delims.is_empty() || !new_rhs_delims.is_empty() {
                    entered = entered.push(EnteredDelimiter::PopEither((
                        lhs_delims.clone(),
                        new_rhs_delims,
                    )));
                }

                Some((*rhs_delim, entered))
            }
            None => None,
        },
        _ => None,
    }
}

fn push_lhs_delimiter<'a>(
    entered: &Stack<EnteredDelimiter>,
    delimiter: u32,
) -> Stack<EnteredDelimiter> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => entered.pop().unwrap().push(
            EnteredDelimiter::PopEither((lhs_delims.push(delimiter), rhs_delims.clone())),
        ),
        _ => entered.push(EnteredDelimiter::PopEither((
            Stack::new().push(delimiter),
            Stack::new(),
        ))),
    }
}

fn push_rhs_delimiter<'a>(
    entered: &Stack<EnteredDelimiter>,
    delimiter: u32,
) -> Stack<EnteredDelimiter> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => entered.pop().unwrap().push(
            EnteredDelimiter::PopEither((lhs_delims.clone(), rhs_delims.push(delimiter))),
        ),
        _ => entered.push(EnteredDelimiter::PopEither((
            Stack::new(),
            Stack::new().push(delimiter),
        ))),
    }
}

impl<'a, 'b> Vertex<'a, 'b> {
    pub fn new(lhs_pos: u32, rhs_pos: u32) -> Self {
        let parents = Stack::new();
        Vertex {
            forward_neighbours: RefCell::new(None),
            backward_neighbours: RefCell::new(None),
            forward_predecessor: Cell::new(None),
            backward_predecessor: Cell::new(None),
            seen: Cell::new((false, false)),
            lhs_pos,
            rhs_pos,
            parents,
        }
    }

    pub fn lhs_syntax(self: &Self, lhs_nodes: &Vec<SyntaxInTree<'a>>) -> Option<&'a Syntax<'a>> {
        lhs_nodes[self.lhs_pos as usize].syntax
    }

    pub fn rhs_syntax(self: &Self, rhs_nodes: &Vec<SyntaxInTree<'a>>) -> Option<&'a Syntax<'a>> {
        rhs_nodes[self.rhs_pos as usize].syntax
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

fn allocate_if_new<'syn, 'b>(
    v: Vertex<'syn, 'b>,
    alloc: &'b Bump,
    seen: &mut FxHashMap<&Vertex<'syn, 'b>, Vec<&'b Vertex<'syn, 'b>>>,
) -> &'b Vertex<'syn, 'b> {
    match seen.get_mut(&v) {
        Some(existing) => {
            // Don't explore more than two possible parenthesis
            // nestings for each syntax node pair.
            if let Some(allocated) = existing.last() {
                if existing.len() >= 2 {
                    return *allocated;
                }
            }

            // If we have seen exactly this graph node before, even
            // considering parenthesis matching, return it.
            for existing_node in existing.iter() {
                if existing_node.parents == v.parents {
                    return existing_node;
                }
            }

            // We haven't reached the graph node limit yet, allocate a
            // new one.
            let allocated = alloc.alloc(v);
            existing.push(allocated);
            allocated
        }
        None => {
            let allocated = alloc.alloc(v);
            seen.insert(allocated, vec![allocated]);
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

// A position in the tree. Every list of length N is represented by
// N+1 SyntaxInTree instances; N for each Syntax, and a sentinel node
// after the end. Vertex nodes contain indexes referring to arrays off
// SyntaxInTree objects (one for lhs and one for rhs), keeping them
// smaller and also making it easy to track when we are at the end
// of some sublist and need to go back to the parent nodes.
//
// This is probably not memory-optimal; e.g., next_index could have
// been replaced by +1 if we stored end flags in some other way.
// However, we have so few of these compared to Vertex nodes
// that it probably doesn't matter.
#[derive(Clone, Copy, Debug)]
pub struct SyntaxInTree<'a> {
    // None if we are a one-past-the-end node.
    pub syntax: Option<&'a Syntax<'a>>,

    // u32::MAX if first in list.
    pub next_index: u32,

    // u32::MAX if the one-past-the-end node.
    pub prev_index: u32,

    // u32::MAX for no children.
    pub first_child: u32,

    // u32::MAX for no children, otherwise points to the children list's one-past-the-end node.
    pub last_child: u32,
}

#[derive(Clone, Copy, Debug, PartialEq)]
pub enum Direction {
    Forwards,
    Backwards,
}

// Helpers to iterate through siblings, forwards or backwards. This is slightly tricky,
// as forwards and backwards need to visit the exact same nodes, just in opposite orders.
// E.g., assume we have three children. Forwards, we go through them as [0, 1, 2, end],
// where the end (3) signals that we are done and need to go back up to our parent.
// Backwards, similarly, we need to go [end, 2, 1, 0], _not_ [2, 1, 0, end]. This is fairly
// simple as long as we have our one-past-the-end representation. When we go from 0 to 1,
// we essentially emit the syntax node at 0; when we go from 1 to 0, we _also_ emit the
// syntax node at 0. So the convention needs to be flipped when going backwards
// (see get_advance_token()).
//
// However, recursion also needs to happen in the right order. Assume that 1 is a sublist
// with two elements (1.0, 1.1 and then 1.end). When going forwards, we go
//
//   [0, 1, 1.0, 1.1, 1.end, 2]
//
// However, when going backwards, when progressing from 2, we need to recurse into _1_, not 2.
// (If 2 has any children, we'll need to take them when we're processing end, not from 2.)
// So this means that when we're at 2, we need to check whether _1_ has any children, and if so,
// the first sub-node we'll see is 1.end. first_child() deals with this, and
// node_to_visit_after_children() deals with the fact that after seeing 1.0 in a backwards
// traversal, we'll need to go to 1, not to 2 (unlike in a forward traversal; when done with
// 1.end, we'll go to 2, ie., the sibling of our parent).

fn first_child<'a>(syntax: &SyntaxInTree<'a>, direction: Direction) -> u32 {
    assert!(syntax.first_child != u32::MAX);
    assert!(syntax.last_child != u32::MAX);
    match direction {
        Direction::Forwards => syntax.first_child,
        Direction::Backwards => syntax.last_child,
    }
}

fn next_sibling<'a>(syntax: u32, nodes: &Vec<SyntaxInTree<'a>>, direction: Direction) -> u32 {
    assert!(!is_end(syntax, nodes, direction));
    match direction {
        Direction::Forwards => nodes[syntax as usize].next_index,
        Direction::Backwards => nodes[syntax as usize].prev_index,
    }
}

fn node_to_visit_after_children<'a>(
    parent: u32,
    nodes: &Vec<SyntaxInTree<'a>>,
    direction: Direction,
) -> u32 {
    match direction {
        Direction::Forwards => next_sibling(parent, nodes, direction),
        Direction::Backwards => parent,
    }
}

fn is_end<'a>(pos: u32, nodes: &Vec<SyntaxInTree<'a>>, direction: Direction) -> bool {
    let syntax = &nodes[pos as usize];
    match direction {
        Direction::Forwards => syntax.next_index == u32::MAX,
        Direction::Backwards => syntax.prev_index == u32::MAX,
    }
}

// Get the token that is used on the edge between this and the next sibling
// (we cannot be at the end). In the forward direction, e.g. if we're at 1,
// this will be token 1 (to move us to 2). Since we need the edges to be
// the same in either direction, backwards will not be the same; for 1,
// this will emitting token 0 to go there, _not_ 1. Similarly, if we are
// at the end and want to advance backwards (forwards would be impossible),
// we'll need to emit 2.
fn get_advance_token<'a>(
    syntax: u32,
    nodes: &Vec<SyntaxInTree<'a>>,
    direction: Direction,
) -> &'a Syntax<'a> {
    nodes[get_advance_pos(syntax, nodes, direction) as usize]
        .syntax
        .unwrap()
}

fn get_advance_pos<'a>(syntax: u32, nodes: &Vec<SyntaxInTree<'a>>, direction: Direction) -> u32 {
    assert!(!is_end(syntax, nodes, direction));
    match direction {
        Direction::Forwards => syntax,
        Direction::Backwards => nodes[syntax as usize].prev_index,
    }
}

fn neighbours<'a, 'b>(
    vertex: &'b Vertex<'a, 'b>,
    direction: Direction,
) -> &'b RefCell<Option<Vec<(Edge, &'b Vertex<'a, 'b>)>>> {
    match direction {
        Direction::Forwards => &vertex.forward_neighbours,
        Direction::Backwards => &vertex.backward_neighbours,
    }
}

/// Compute the neighbours of `v` if we haven't previously done so,
/// write them to the .neighbours cell inside `v`, and return them.
pub fn get_set_neighbours<'syn, 'b>(
    v: &'b Vertex<'syn, 'b>,
    alloc: &'b Bump,
    lhs_nodes: &Vec<SyntaxInTree<'syn>>,
    rhs_nodes: &Vec<SyntaxInTree<'syn>>,
    seen: &mut FxHashMap<&Vertex<'syn, 'b>, Vec<&'b Vertex<'syn, 'b>>>,
    direction: Direction,
) -> Vec<(Edge, &'b Vertex<'syn, 'b>)> {
    match &*neighbours(v, direction).borrow() {
        Some(neighbours) => return neighbours.clone(),
        None => {}
    }

    let mut res: Vec<(Edge, &Vertex)> = vec![];

    if is_end(v.lhs_pos, lhs_nodes, direction) && is_end(v.rhs_pos, rhs_nodes, direction) {
        if let Some((lhs_parent, rhs_parent, parents_next)) = try_pop_both(&v.parents) {
            // We have exhausted all the nodes on both lists, so we can
            // move up to the parent node.
            let lhs_pos = node_to_visit_after_children(lhs_parent, lhs_nodes, direction);
            let rhs_pos = node_to_visit_after_children(rhs_parent, rhs_nodes, direction);
            let edge = match direction {
                Direction::Forwards => ExitDelimiterBoth,
                Direction::Backwards => {
                    let lhs_syntax = &lhs_nodes[lhs_pos as usize].syntax.unwrap();
                    let rhs_syntax = &rhs_nodes[rhs_pos as usize].syntax.unwrap();
                    let depth_difference = (lhs_syntax.num_ancestors() as i32
                        - rhs_syntax.num_ancestors() as i32)
                        .unsigned_abs();
                    EnterUnchangedDelimiter { depth_difference }
                }
            };

            // Continue from sibling of parent.
            res.push((
                edge,
                allocate_if_new(
                    Vertex {
                        forward_neighbours: RefCell::new(None),
                        backward_neighbours: RefCell::new(None),
                        forward_predecessor: Cell::new(None),
                        backward_predecessor: Cell::new(None),
                        seen: Cell::new((false, false)),
                        lhs_pos: lhs_pos,
                        rhs_pos: rhs_pos,
                        parents: parents_next,
                    },
                    alloc,
                    seen,
                ),
            ));
        }
    }

    if is_end(v.lhs_pos, lhs_nodes, direction) {
        if let Some((lhs_parent, parents_next)) = try_pop_lhs(&v.parents) {
            // Move to next after LHS parent.
            let lhs_pos = node_to_visit_after_children(lhs_parent, lhs_nodes, direction);
            let edge = match direction {
                Direction::Forwards => ExitDelimiterLHS,
                Direction::Backwards => EnterNovelDelimiterLHS {
                    contiguous: lhs_nodes[lhs_pos as usize]
                        .syntax
                        .unwrap()
                        .prev_is_contiguous(),
                },
            };

            // Continue from sibling of parent.
            res.push((
                edge,
                allocate_if_new(
                    Vertex {
                        forward_neighbours: RefCell::new(None),
                        backward_neighbours: RefCell::new(None),
                        forward_predecessor: Cell::new(None),
                        backward_predecessor: Cell::new(None),
                        seen: Cell::new((false, false)),
                        lhs_pos: lhs_pos,
                        rhs_pos: v.rhs_pos,
                        parents: parents_next,
                    },
                    alloc,
                    seen,
                ),
            ));
        }
    }

    if is_end(v.rhs_pos, rhs_nodes, direction) {
        if let Some((rhs_parent, parents_next)) = try_pop_rhs(&v.parents) {
            // Move to next after RHS parent.
            let rhs_pos = node_to_visit_after_children(rhs_parent, rhs_nodes, direction);
            let edge = match direction {
                Direction::Forwards => ExitDelimiterRHS,
                Direction::Backwards => EnterNovelDelimiterRHS {
                    contiguous: rhs_nodes[rhs_pos as usize]
                        .syntax
                        .unwrap()
                        .prev_is_contiguous(),
                },
            };

            // Continue from sibling of parent.
            res.push((
                edge,
                allocate_if_new(
                    Vertex {
                        forward_neighbours: RefCell::new(None),
                        backward_neighbours: RefCell::new(None),
                        forward_predecessor: Cell::new(None),
                        backward_predecessor: Cell::new(None),
                        seen: Cell::new((false, false)),
                        lhs_pos: v.lhs_pos,
                        rhs_pos: node_to_visit_after_children(rhs_parent, rhs_nodes, direction),
                        parents: parents_next,
                    },
                    alloc,
                    seen,
                ),
            ));
        }
    }

    if !is_end(v.lhs_pos, lhs_nodes, direction) && !is_end(v.rhs_pos, rhs_nodes, direction) {
        let lhs_syntax = get_advance_token(v.lhs_pos, lhs_nodes, direction);
        let rhs_syntax = get_advance_token(v.rhs_pos, rhs_nodes, direction);
        let lhs_pos = get_advance_pos(v.lhs_pos, lhs_nodes, direction);
        let rhs_pos = get_advance_pos(v.rhs_pos, rhs_nodes, direction);
        if lhs_syntax == rhs_syntax {
            let depth_difference = (lhs_syntax.num_ancestors() as i32
                - rhs_syntax.num_ancestors() as i32)
                .unsigned_abs();

            // Both nodes are equal, the happy case.
            res.push((
                UnchangedNode { depth_difference },
                allocate_if_new(
                    Vertex {
                        forward_neighbours: RefCell::new(None),
                        backward_neighbours: RefCell::new(None),
                        forward_predecessor: Cell::new(None),
                        backward_predecessor: Cell::new(None),
                        seen: Cell::new((false, false)),
                        lhs_pos: next_sibling(v.lhs_pos, lhs_nodes, direction),
                        rhs_pos: next_sibling(v.rhs_pos, rhs_nodes, direction),
                        parents: v.parents.clone(),
                    },
                    alloc,
                    seen,
                ),
            ));
        }

        if let (
            Syntax::List {
                open_content: lhs_open_content,
                close_content: lhs_close_content,
                ..
            },
            Syntax::List {
                open_content: rhs_open_content,
                close_content: rhs_close_content,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            // The list delimiters are equal, but children may not be.
            if lhs_open_content == rhs_open_content && lhs_close_content == rhs_close_content {
                let lhs_next = first_child(&lhs_nodes[lhs_pos as usize], direction);
                let rhs_next = first_child(&rhs_nodes[rhs_pos as usize], direction);

                // TODO: be consistent between parents_next and next_parents.
                let parents_next = push_both_delimiters(&v.parents, lhs_pos, rhs_pos);

                let depth_difference = (lhs_syntax.num_ancestors() as i32
                    - rhs_syntax.num_ancestors() as i32)
                    .unsigned_abs();

                res.push((
                    match direction {
                        Direction::Forwards => EnterUnchangedDelimiter { depth_difference },
                        Direction::Backwards => ExitDelimiterBoth,
                    },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: lhs_next,
                            rhs_pos: rhs_next,
                            parents: parents_next,
                        },
                        alloc,
                        seen,
                    ),
                ));
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
                res.push((
                    ReplacedComment { levenshtein_pct },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: next_sibling(v.lhs_pos, lhs_nodes, direction),
                            rhs_pos: next_sibling(v.rhs_pos, rhs_nodes, direction),
                            parents: v.parents.clone(),
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }

    if !is_end(v.lhs_pos, lhs_nodes, direction) {
        let lhs_syntax = get_advance_token(v.lhs_pos, lhs_nodes, direction);
        let lhs_pos = get_advance_pos(v.lhs_pos, lhs_nodes, direction);
        match lhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { content, .. } => {
                res.push((
                    NovelAtomLHS {
                        // TODO: should this apply if prev is a parent
                        // node rather than a sibling?
                        contiguous: lhs_syntax.prev_is_contiguous(),
                        probably_punctuation: looks_like_punctuation(content),
                    },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: next_sibling(v.lhs_pos, lhs_nodes, direction),
                            rhs_pos: v.rhs_pos,
                            parents: v.parents.clone(),
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { .. } => {
                let lhs_next = first_child(&lhs_nodes[lhs_pos as usize], direction);

                let parents_next = push_lhs_delimiter(&v.parents, lhs_pos);

                res.push((
                    match direction {
                        Direction::Forwards => EnterNovelDelimiterLHS {
                            contiguous: lhs_syntax.prev_is_contiguous(),
                        },
                        Direction::Backwards => ExitDelimiterLHS,
                    },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: lhs_next,
                            rhs_pos: v.rhs_pos,
                            parents: parents_next,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }

    if !is_end(v.rhs_pos, rhs_nodes, direction) {
        let rhs_syntax = get_advance_token(v.rhs_pos, rhs_nodes, direction);
        let rhs_pos = get_advance_pos(v.rhs_pos, rhs_nodes, direction);
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { content, .. } => {
                res.push((
                    NovelAtomRHS {
                        contiguous: rhs_syntax.prev_is_contiguous(),
                        probably_punctuation: looks_like_punctuation(content),
                    },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: v.lhs_pos,
                            rhs_pos: next_sibling(v.rhs_pos, rhs_nodes, direction),
                            parents: v.parents.clone(),
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { .. } => {
                let rhs_next = first_child(&rhs_nodes[rhs_pos as usize], direction);

                let parents_next = push_rhs_delimiter(&v.parents, rhs_pos);

                res.push((
                    match direction {
                        Direction::Forwards => EnterNovelDelimiterRHS {
                            contiguous: rhs_syntax.prev_is_contiguous(),
                        },
                        Direction::Backwards => ExitDelimiterRHS,
                    },
                    allocate_if_new(
                        Vertex {
                            forward_neighbours: RefCell::new(None),
                            backward_neighbours: RefCell::new(None),
                            forward_predecessor: Cell::new(None),
                            backward_predecessor: Cell::new(None),
                            seen: Cell::new((false, false)),
                            lhs_pos: v.lhs_pos,
                            rhs_pos: rhs_next,
                            parents: parents_next,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }
    assert!(
        !res.is_empty(),
        "Must always find some next steps if node is not the end"
    );

    neighbours(v, direction).replace(Some(res.clone()));
    res
}

pub fn populate_change_map<'a, 'b>(
    route: &[(Edge, &'b Vertex<'a, 'b>)],
    change_map: &mut ChangeMap<'a>,
    lhs_nodes: &Vec<SyntaxInTree<'a>>,
    rhs_nodes: &Vec<SyntaxInTree<'a>>,
) {
    for (e, v) in route {
        match e {
            ExitDelimiterBoth | ExitDelimiterLHS | ExitDelimiterRHS => {
                // Nothing to do: we have already marked this node when we entered it.
            }
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax(lhs_nodes).unwrap();
                let rhs = v.rhs_syntax(rhs_nodes).unwrap();

                insert_deep_unchanged(lhs, rhs, change_map);
                insert_deep_unchanged(rhs, lhs, change_map);
            }
            EnterUnchangedDelimiter { .. } => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax(lhs_nodes).unwrap();
                let rhs = v.rhs_syntax(rhs_nodes).unwrap();
                change_map.insert(lhs, ChangeKind::Unchanged(rhs));
                change_map.insert(rhs, ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } => {
                let lhs = v.lhs_syntax(lhs_nodes).unwrap();
                let rhs = v.rhs_syntax(rhs_nodes).unwrap();

                if *levenshtein_pct > 40 {
                    change_map.insert(lhs, ChangeKind::ReplacedComment(lhs, rhs));
                    change_map.insert(rhs, ChangeKind::ReplacedComment(rhs, lhs));
                } else {
                    change_map.insert(lhs, ChangeKind::Novel);
                    change_map.insert(rhs, ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | EnterNovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax(lhs_nodes).unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | EnterNovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax(rhs_nodes).unwrap();
                change_map.insert(rhs, ChangeKind::Novel);
            }
        }
    }
}
