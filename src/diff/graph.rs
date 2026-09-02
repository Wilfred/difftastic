//! A graph representation for computing tree diffs.

use std::cell::{Cell, OnceCell};
use std::cmp::min;
use std::fmt;
use std::hash::{Hash, Hasher};

use bumpalo::Bump;
use hashbrown::hash_map::RawEntryMut;
use smallvec::{smallvec, SmallVec};
use strsim::normalized_levenshtein;

use self::Edge::*;
use crate::diff::changes::{insert_deep_unchanged, ChangeKind, ChangeMap};
use crate::diff::stack::Stack;
use crate::hash::DftHashMap;
use crate::parse::syntax::{AtomKind, Syntax, SyntaxId};

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
///
/// Vertices are arena allocated (the 'v lifetime) and have references
/// to syntax nodes (the 's lifetime).
#[derive(Debug, Clone)]
pub(crate) struct Vertex<'s, 'v> {
    /// The neighbours of this vertex. This is computed lazily, on
    /// first access.
    pub(crate) neighbours: OnceCell<&'v [(Edge, &'v Vertex<'s, 'v>)]>,
    /// The predecessor of this vertex in the shortest route found so
    /// far.
    ///
    /// This can change as Dijkstra runs: the first time we see the
    /// node in the to-visit set, we may not have reached it by the
    /// shortest route.
    pub(crate) predecessor: Cell<Option<(u32, &'v Vertex<'s, 'v>)>>,
    /// The vertices with an edge leading to this vertex. This is
    /// computed lazily, on first access, and only used by
    /// bidirectional search.
    pub(crate) predecessors: OnceCell<&'v [(Edge, &'v Vertex<'s, 'v>)]>,
    /// The successor of this vertex in the shortest route to the end
    /// vertex found so far. Only used by bidirectional search.
    pub(crate) successor: Cell<Option<(u32, &'v Vertex<'s, 'v>)>>,
    // TODO: experiment with storing SyntaxId only, and have a HashMap
    // from SyntaxId to &Syntax.
    pub(crate) lhs_syntax: Option<&'s Syntax<'s>>,
    pub(crate) rhs_syntax: Option<&'s Syntax<'s>>,
    parents: Stack<'v, EnteredDelimiter<'s, 'v>>,
    lhs_parent_id: Option<SyntaxId>,
    rhs_parent_id: Option<SyntaxId>,
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
        let b0 = match (self.lhs_syntax, other.lhs_syntax) {
            (Some(s0), Some(s1)) => s0.id() == s1.id(),
            (None, None) => self.lhs_parent_id == other.lhs_parent_id,
            _ => false,
        };
        let b1 = match (self.rhs_syntax, other.rhs_syntax) {
            (Some(s0), Some(s1)) => s0.id() == s1.id(),
            (None, None) => self.rhs_parent_id == other.rhs_parent_id,
            _ => false,
        };
        // We do want to distinguish whether we can pop each side
        // independently though. Without this, if we find a case
        // where we can pop sides together, we don't consider the
        // case where we get a better diff by popping each side
        // separately.
        let b2 = can_pop_either_parent(&self.parents) == can_pop_either_parent(&other.parents);

        b0 && b1 && b2
    }
}
impl Eq for Vertex<'_, '_> {}

impl Hash for Vertex<'_, '_> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.map(|node| node.id()).hash(state);
        self.rhs_syntax.map(|node| node.id()).hash(state);

        self.lhs_parent_id.hash(state);
        self.rhs_parent_id.hash(state);
        can_pop_either_parent(&self.parents).hash(state);
    }
}

/// Tracks entering syntax List nodes.
#[derive(Clone, PartialEq)]
enum EnteredDelimiter<'s, 'v> {
    /// If we've entered the LHS or RHS separately, we can pop either
    /// side independently.
    ///
    /// Assumes that at least one stack is non-empty.
    PopEither((Stack<'v, &'s Syntax<'s>>, Stack<'v, &'s Syntax<'s>>)),
    /// If we've entered the LHS and RHS together, we must pop both
    /// sides together too. Otherwise we'd consider the following case to have no changes.
    ///
    /// ```text
    /// Old: (a b c)
    /// New: (a b) c
    /// ```
    PopBoth((&'s Syntax<'s>, &'s Syntax<'s>)),
}

impl fmt::Debug for EnteredDelimiter<'_, '_> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let desc = match self {
            Self::PopEither((lhs_delims, rhs_delims)) => {
                format!(
                    "PopEither(lhs count: {}, rhs count: {})",
                    lhs_delims.size(),
                    rhs_delims.size()
                )
            }
            Self::PopBoth(_) => "PopBoth".to_owned(),
        };
        f.write_str(&desc)
    }
}

fn push_both_delimiters<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    lhs_delim: &'s Syntax<'s>,
    rhs_delim: &'s Syntax<'s>,
    alloc: &'v Bump,
) -> Stack<'v, EnteredDelimiter<'s, 'v>> {
    entered.push(EnteredDelimiter::PopBoth((lhs_delim, rhs_delim)), alloc)
}

fn can_pop_either_parent(entered: &Stack<EnteredDelimiter>) -> bool {
    matches!(entered.peek(), Some(EnteredDelimiter::PopEither(_)))
}

fn try_pop_both<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
) -> Option<(
    &'s Syntax<'s>,
    &'s Syntax<'s>,
    Stack<'v, EnteredDelimiter<'s, 'v>>,
)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopBoth((lhs_delim, rhs_delim))) => {
            Some((lhs_delim, rhs_delim, entered.pop().unwrap()))
        }
        _ => None,
    }
}

fn try_pop_lhs<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    alloc: &'v Bump,
) -> Option<(&'s Syntax<'s>, Stack<'v, EnteredDelimiter<'s, 'v>>)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => match lhs_delims.peek() {
            Some(lhs_delim) => {
                let mut entered = entered.pop().unwrap();
                let new_lhs_delims = lhs_delims.pop().unwrap();

                if !new_lhs_delims.is_empty() || !rhs_delims.is_empty() {
                    entered = entered.push(
                        EnteredDelimiter::PopEither((new_lhs_delims, rhs_delims.clone())),
                        alloc,
                    );
                }

                Some((lhs_delim, entered))
            }
            None => None,
        },
        _ => None,
    }
}

fn try_pop_rhs<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    alloc: &'v Bump,
) -> Option<(&'s Syntax<'s>, Stack<'v, EnteredDelimiter<'s, 'v>>)> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => match rhs_delims.peek() {
            Some(rhs_delim) => {
                let mut entered = entered.pop().unwrap();
                let new_rhs_delims = rhs_delims.pop().unwrap();

                if !lhs_delims.is_empty() || !new_rhs_delims.is_empty() {
                    entered = entered.push(
                        EnteredDelimiter::PopEither((lhs_delims.clone(), new_rhs_delims)),
                        alloc,
                    );
                }

                Some((rhs_delim, entered))
            }
            None => None,
        },
        _ => None,
    }
}

fn push_lhs_delimiter<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    delimiter: &'s Syntax<'s>,
    alloc: &'v Bump,
) -> Stack<'v, EnteredDelimiter<'s, 'v>> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => entered.pop().unwrap().push(
            EnteredDelimiter::PopEither((lhs_delims.push(delimiter, alloc), rhs_delims.clone())),
            alloc,
        ),
        _ => entered.push(
            EnteredDelimiter::PopEither((Stack::new().push(delimiter, alloc), Stack::new())),
            alloc,
        ),
    }
}

fn push_rhs_delimiter<'s, 'v>(
    entered: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    delimiter: &'s Syntax<'s>,
    alloc: &'v Bump,
) -> Stack<'v, EnteredDelimiter<'s, 'v>> {
    match entered.peek() {
        Some(EnteredDelimiter::PopEither((lhs_delims, rhs_delims))) => entered.pop().unwrap().push(
            EnteredDelimiter::PopEither((lhs_delims.clone(), rhs_delims.push(delimiter, alloc))),
            alloc,
        ),
        _ => entered.push(
            EnteredDelimiter::PopEither((Stack::new(), Stack::new().push(delimiter, alloc))),
            alloc,
        ),
    }
}

impl<'s, 'v> Vertex<'s, 'v> {
    pub(crate) fn is_end(&self) -> bool {
        self.lhs_syntax.is_none() && self.rhs_syntax.is_none() && self.parents.is_empty()
    }

    /// A compact description of this vertex, for debugging.
    pub(crate) fn dbg_summary(&self) -> String {
        let mut stack = vec![];
        let mut parents = self.parents.clone();
        while let Some(entered) = parents.peek() {
            stack.push(match entered {
                EnteredDelimiter::PopBoth((l, r)) => {
                    format!("Both({}/{})", l.id(), r.id())
                }
                EnteredDelimiter::PopEither((ls, rs)) => {
                    let ids = |st: &Stack<'v, &'s Syntax<'s>>| {
                        let mut st = st.clone();
                        let mut v = vec![];
                        while let Some(d) = st.peek() {
                            v.push(d.id().to_string());
                            st = st.pop().unwrap();
                        }
                        v.join(",")
                    };
                    format!("Either([{}]/[{}])", ids(ls), ids(rs))
                }
            });
            parents = parents.pop().unwrap();
        }
        format!(
            "lhs={}#{} rhs={}#{} lhs_parent={:?} rhs_parent={:?} stack(top first)={:?}",
            self.lhs_syntax.map_or("None".into(), Syntax::dbg_content),
            self.lhs_syntax.map_or("-".into(), |n| n.id().to_string()),
            self.rhs_syntax.map_or("None".into(), Syntax::dbg_content),
            self.rhs_syntax.map_or("-".into(), |n| n.id().to_string()),
            self.lhs_parent_id,
            self.rhs_parent_id,
            stack,
        )
    }

    /// An end vertex with the given parent IDs.
    pub(crate) fn new_end(
        lhs_parent_id: Option<SyntaxId>,
        rhs_parent_id: Option<SyntaxId>,
    ) -> Self {
        let mut v = Self::new(None, None);
        v.lhs_parent_id = lhs_parent_id;
        v.rhs_parent_id = rhs_parent_id;
        v
    }

    pub(crate) fn new(
        lhs_syntax: Option<&'s Syntax<'s>>,
        rhs_syntax: Option<&'s Syntax<'s>>,
    ) -> Self {
        let parents = Stack::new();
        Vertex {
            neighbours: OnceCell::new(),
            predecessor: Cell::new(None),
            predecessors: OnceCell::new(),
            successor: Cell::new(None),
            lhs_syntax,
            rhs_syntax,
            parents,
            lhs_parent_id: None,
            rhs_parent_id: None,
        }
    }
}

/// An edge in our graph, with an associated [`cost`](Edge::cost).
///
/// A syntax node can always be marked as novel, so a vertex will have
/// at least a NovelFoo edge. Depending on the syntax nodes of the
/// current [`Vertex`], other edges may also be available.
///
/// See [`compute_neighbours`] for all the edges available for a given `Vertex`.
#[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
pub(crate) enum Edge {
    UnchangedNode {
        depth_difference: u32,
        /// Is this node just punctuation? We penalise this case,
        /// because it's more useful to match e.g. a variable name
        /// than a comma.
        probably_punctuation: bool,
    },
    EnterUnchangedDelimiter {
        depth_difference: u32,
    },
    ReplacedComment {
        levenshtein_pct: u8,
    },
    ReplacedString {
        levenshtein_pct: u8,
    },
    NovelAtomLHS {
        probably_punctuation: bool,
    },
    NovelAtomRHS {
        probably_punctuation: bool,
    },
    EnterNovelDelimiterLHS {},
    EnterNovelDelimiterRHS {},
    /// Enter both lists as novel in a single step. This reaches the
    /// same vertex as `EnterNovelDelimiterLHS` followed by
    /// `EnterNovelDelimiterRHS`.
    EnterNovelDelimiterBoth {},
}

/// Edge costs. These are the defaults unless overridden with
/// environment variables, for experiments.
struct Costs {
    /// Cap on the depth difference penalty for unchanged nodes and
    /// delimiters (DFT_COST_DEPTH_CAP).
    depth_cap: u32,
    /// Extra cost for matching a punctuation node (DFT_COST_PUNCT).
    punct_penalty: u32,
    /// Cost of entering an unchanged delimiter (DFT_COST_ENTER).
    enter: u32,
    /// Cost of a novel atom or delimiter (DFT_COST_NOVEL).
    novel: u32,
    /// Cost of a novel punctuation atom (DFT_COST_NOVEL_PUNCT).
    novel_punct: u32,
    /// Base cost of a replaced comment or string (DFT_COST_REPLACE).
    replace: u32,
}

fn costs() -> &'static Costs {
    static COSTS: std::sync::OnceLock<Costs> = std::sync::OnceLock::new();
    COSTS.get_or_init(|| {
        let get = |name: &str, default: u32| {
            std::env::var(name)
                .ok()
                .and_then(|s| s.parse().ok())
                .unwrap_or(default)
        };
        let novel = get("DFT_COST_NOVEL", 300);
        Costs {
            depth_cap: get("DFT_COST_DEPTH_CAP", 40),
            punct_penalty: get("DFT_COST_PUNCT", 200),
            enter: get("DFT_COST_ENTER", 100),
            novel,
            novel_punct: get("DFT_COST_NOVEL_PUNCT", novel),
            replace: get("DFT_COST_REPLACE", 500),
        }
    })
}

/// The cost of `EnterNovelDelimiterBoth`. This is 600 unless
/// overridden with DFT_NOVEL_BOTH_COST, for experiments. A value of
/// 0 disables the edge.
fn novel_both_cost() -> u32 {
    static COST: std::sync::OnceLock<u32> = std::sync::OnceLock::new();
    *COST.get_or_init(|| {
        std::env::var("DFT_NOVEL_BOTH_COST")
            .ok()
            .and_then(|s| s.parse().ok())
            .unwrap_or(600)
    })
}

impl Edge {
    pub(crate) fn cost(self) -> u32 {
        let costs = costs();
        match self {
            // Matching nodes is always best.
            UnchangedNode {
                depth_difference,
                probably_punctuation,
            } => {
                // TODO: Perhaps prefer matching longer strings? It's
                // probably easier to read.

                // The cost for unchanged nodes can be as low as 1,
                // but we penalise nodes that have a different depth
                // difference, capped at 40.
                let base = min(costs.depth_cap, depth_difference + 1);

                // If the node is only punctuation, increase the
                // cost. It's better to have unchanged variable names
                // and novel punctuation than the reverse.
                //
                // We want a sufficiently large punctuation cost such
                // that unchanged variables always win, even if there
                // are replacement edges elsewhere.
                //
                // Replacement edges have a cost between 500 and 600,
                // so they can be up to 100 less than two novel nodes.
                // If we have replacements either side of a node
                // (e.g. see comma_and_comment_1.js), then that's
                // potentially a cost difference of 200.
                base + if probably_punctuation {
                    costs.punct_penalty
                } else {
                    0
                }
            }
            // Matching an outer delimiter is good.
            EnterUnchangedDelimiter { depth_difference } => {
                costs.enter + min(costs.depth_cap, depth_difference)
            }

            // Otherwise, we've added/removed a node.
            NovelAtomLHS {
                probably_punctuation,
            }
            | NovelAtomRHS {
                probably_punctuation,
            } => {
                if probably_punctuation {
                    costs.novel_punct
                } else {
                    costs.novel
                }
            }
            EnterNovelDelimiterLHS { .. } | EnterNovelDelimiterRHS { .. } => costs.novel,
            EnterNovelDelimiterBoth { .. } => novel_both_cost(),
            // Replacing a comment is better than treating it as
            // novel. However, since ReplacedComment is an alternative
            // to NovelAtomLHS and NovelAtomRHS, we need to be
            // slightly less than 2 * 300.
            ReplacedComment { levenshtein_pct } | ReplacedString { levenshtein_pct } => {
                costs.replace + u32::from(100 - levenshtein_pct)
            }
        }
    }
}

pub(crate) fn allocate_if_new<'s, 'v>(
    v: Vertex<'s, 'v>,
    alloc: &'v Bump,
    seen: &mut DftHashMap<&Vertex<'s, 'v>, SmallVec<[&'v Vertex<'s, 'v>; 2]>>,
) -> &'v Vertex<'s, 'v> {
    // We use the entry API so that we only need to do a single lookup
    // for access and insert.
    match seen.raw_entry_mut().from_key(&v) {
        RawEntryMut::Occupied(mut occupied) => {
            let existing = occupied.get_mut();

            // Don't explore more than two possible parenthesis
            // nestings for each syntax node pair.
            if let Some(allocated) = existing.last() {
                if existing.len() >= stack_cap() {
                    return allocated;
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
        RawEntryMut::Vacant(vacant) => {
            let allocated = alloc.alloc(v);

            // We know that this vec will never have more than 2
            // nodes, and this code is very hot, so use a smallvec.
            //
            // We still use a vec to enable experiments with the value
            // of how many possible parenthesis nestings to explore.
            let existing: SmallVec<[&'v Vertex<'s, 'v>; 2]> = smallvec![&*allocated];

            vacant.insert(allocated, existing);
            allocated
        }
    }
}

/// The total number of vertices allocated, i.e. the size of the
/// graph explored so far.
pub(crate) fn vertex_count(
    seen: &DftHashMap<&Vertex<'_, '_>, SmallVec<[&Vertex<'_, '_>; 2]>>,
) -> usize {
    seen.values().map(|entries| entries.len()).sum()
}

/// How many delimiter stacks to explore per syntax node pair. This
/// is 2 unless overridden with DFT_STACK_CAP, for experiments.
fn stack_cap() -> usize {
    static CAP: std::sync::OnceLock<usize> = std::sync::OnceLock::new();
    *CAP.get_or_init(|| {
        std::env::var("DFT_STACK_CAP")
            .ok()
            .and_then(|s| s.parse().ok())
            .unwrap_or(2)
    })
}

/// Find the vertex that has exactly the same state as `v`, if we
/// have allocated one.
///
/// Unlike `allocate_if_new`, this never returns a vertex with a
/// different delimiter stack.
fn find_exact<'s, 'v>(
    v: &Vertex<'s, 'v>,
    seen: &DftHashMap<&Vertex<'s, 'v>, SmallVec<[&'v Vertex<'s, 'v>; 2]>>,
) -> Option<&'v Vertex<'s, 'v>> {
    seen.get(v).and_then(|existing| {
        existing
            .iter()
            .find(|existing_node| existing_node.parents == v.parents)
            .copied()
    })
}

/// Does this node look like punctuation?
///
/// This check is deliberately conservative, because it's hard to
/// accurately recognise punctuation in a language-agnostic way.
fn looks_like_punctuation(node: &Syntax) -> bool {
    match node {
        Syntax::Atom { content, .. } => content == "," || content == ";" || content == ".",
        _ => false,
    }
}

/// Pop as many parents of `lhs_node` and `rhs_node` as
/// possible. Return the new syntax nodes and parents.
fn pop_all_parents<'s, 'v>(
    lhs_node: Option<&'s Syntax<'s>>,
    rhs_node: Option<&'s Syntax<'s>>,
    lhs_parent_id: Option<SyntaxId>,
    rhs_parent_id: Option<SyntaxId>,
    parents: &Stack<'v, EnteredDelimiter<'s, 'v>>,
    alloc: &'v Bump,
) -> (
    Option<&'s Syntax<'s>>,
    Option<&'s Syntax<'s>>,
    Option<SyntaxId>,
    Option<SyntaxId>,
    Stack<'v, EnteredDelimiter<'s, 'v>>,
) {
    let mut lhs_node = lhs_node;
    let mut rhs_node = rhs_node;
    let mut lhs_parent_id = lhs_parent_id;
    let mut rhs_parent_id = rhs_parent_id;
    let mut parents = parents.clone();

    loop {
        if lhs_node.is_none() {
            if let Some((lhs_parent, parents_next)) = try_pop_lhs(&parents, alloc) {
                // Move to next after LHS parent.

                // Continue from sibling of parent.
                lhs_node = lhs_parent.next_sibling();
                lhs_parent_id = lhs_parent.parent().map(Syntax::id);
                parents = parents_next;
                continue;
            }
        }

        if rhs_node.is_none() {
            if let Some((rhs_parent, parents_next)) = try_pop_rhs(&parents, alloc) {
                // Move to next after RHS parent.

                // Continue from sibling of parent.
                rhs_node = rhs_parent.next_sibling();
                rhs_parent_id = rhs_parent.parent().map(Syntax::id);
                parents = parents_next;
                continue;
            }
        }

        if lhs_node.is_none() && rhs_node.is_none() {
            // We have exhausted all the nodes on both lists, so we can
            // move up to the parent node.

            // Continue from sibling of parent.
            if let Some((lhs_parent, rhs_parent, parents_next)) = try_pop_both(&parents) {
                lhs_node = lhs_parent.next_sibling();
                rhs_node = rhs_parent.next_sibling();
                lhs_parent_id = lhs_parent.parent().map(Syntax::id);
                rhs_parent_id = rhs_parent.parent().map(Syntax::id);
                parents = parents_next;
                continue;
            }
        }

        break;
    }

    (lhs_node, rhs_node, lhs_parent_id, rhs_parent_id, parents)
}

/// Compute the neighbours of `v`.
///
/// This function is extremely hot and directly affects difftastic
/// performance.
pub(crate) fn compute_neighbours<'s, 'v>(
    v: &Vertex<'s, 'v>,
    alloc: &'v Bump,
    seen: &mut DftHashMap<&Vertex<'s, 'v>, SmallVec<[&'v Vertex<'s, 'v>; 2]>>,
) -> &'v [(Edge, &'v Vertex<'s, 'v>)] {
    // There are only eight pushes in this function, so that's sufficient.
    let mut neighbours: SmallVec<[(Edge, &Vertex); 8]> = SmallVec::new();

    if let (Some(lhs_syntax), Some(rhs_syntax)) = (&v.lhs_syntax, &v.rhs_syntax) {
        if lhs_syntax == rhs_syntax {
            let depth_difference = (lhs_syntax.num_ancestors() as i32
                - rhs_syntax.num_ancestors() as i32)
                .unsigned_abs();

            let probably_punctuation = looks_like_punctuation(lhs_syntax);

            // Both nodes are equal, the happy case.
            let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) = pop_all_parents(
                lhs_syntax.next_sibling(),
                rhs_syntax.next_sibling(),
                v.lhs_parent_id,
                v.rhs_parent_id,
                &v.parents,
                alloc,
            );

            neighbours.push((
                UnchangedNode {
                    depth_difference,
                    probably_punctuation,
                },
                allocate_if_new(
                    Vertex {
                        neighbours: OnceCell::new(),
                        predecessor: Cell::new(None),
                        predecessors: OnceCell::new(),
                        successor: Cell::new(None),
                        lhs_syntax,
                        rhs_syntax,
                        parents,
                        lhs_parent_id,
                        rhs_parent_id,
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
                let lhs_next = lhs_children.first().copied();
                let rhs_next = rhs_children.first().copied();

                let parents_next = push_both_delimiters(&v.parents, lhs_syntax, rhs_syntax, alloc);

                let depth_difference = (lhs_syntax.num_ancestors() as i32
                    - rhs_syntax.num_ancestors() as i32)
                    .unsigned_abs();

                // When we enter a list, we may need to immediately
                // pop several levels if the list has no children.
                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        lhs_next,
                        rhs_next,
                        Some(lhs_syntax.id()),
                        Some(rhs_syntax.id()),
                        &parents_next,
                        alloc,
                    );

                neighbours.push((
                    EnterUnchangedDelimiter { depth_difference },
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }

        if let (
            Syntax::List {
                children: lhs_children,
                ..
            },
            Syntax::List {
                children: rhs_children,
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            if novel_both_cost() > 0 {
                // Enter both lists at once, treating both delimiters
                // as novel.
                let lhs_next = lhs_children.first().copied();
                let rhs_next = rhs_children.first().copied();

                let parents_next = push_lhs_delimiter(&v.parents, lhs_syntax, alloc);
                let parents_next = push_rhs_delimiter(&parents_next, rhs_syntax, alloc);

                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        lhs_next,
                        rhs_next,
                        Some(lhs_syntax.id()),
                        Some(rhs_syntax.id()),
                        &parents_next,
                        alloc,
                    );

                neighbours.push((
                    EnterNovelDelimiterBoth {},
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
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
                kind: lhs_kind @ AtomKind::Comment | lhs_kind @ AtomKind::String(_),
                ..
            },
            Syntax::Atom {
                content: rhs_content,
                kind: rhs_kind @ AtomKind::Comment | rhs_kind @ AtomKind::String(_),
                ..
            },
        ) = (lhs_syntax, rhs_syntax)
        {
            // Both sides are comments/both sides are strings and
            // their content is reasonably similar.
            if lhs_kind == rhs_kind && lhs_content != rhs_content {
                let levenshtein_pct =
                    (normalized_levenshtein(lhs_content, rhs_content) * 100.0).round() as u8;
                let edge = if lhs_kind == &AtomKind::Comment {
                    ReplacedComment { levenshtein_pct }
                } else {
                    ReplacedString { levenshtein_pct }
                };

                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        lhs_syntax.next_sibling(),
                        rhs_syntax.next_sibling(),
                        v.lhs_parent_id,
                        v.rhs_parent_id,
                        &v.parents,
                        alloc,
                    );
                neighbours.push((
                    edge,
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }

    if let Some(lhs_syntax) = &v.lhs_syntax {
        match lhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                let probably_punctuation = looks_like_punctuation(lhs_syntax);
                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        lhs_syntax.next_sibling(),
                        v.rhs_syntax,
                        v.lhs_parent_id,
                        v.rhs_parent_id,
                        &v.parents,
                        alloc,
                    );

                neighbours.push((
                    NovelAtomLHS {
                        probably_punctuation,
                    },
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                let lhs_next = children.first().copied();

                let parents_next = push_lhs_delimiter(&v.parents, lhs_syntax, alloc);

                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        lhs_next,
                        v.rhs_syntax,
                        Some(lhs_syntax.id()),
                        v.rhs_parent_id,
                        &parents_next,
                        alloc,
                    );

                neighbours.push((
                    EnterNovelDelimiterLHS {},
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }

    if let Some(rhs_syntax) = &v.rhs_syntax {
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                let probably_punctuation = looks_like_punctuation(rhs_syntax);
                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        v.lhs_syntax,
                        rhs_syntax.next_sibling(),
                        v.lhs_parent_id,
                        v.rhs_parent_id,
                        &v.parents,
                        alloc,
                    );

                neighbours.push((
                    NovelAtomRHS {
                        probably_punctuation,
                    },
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List { children, .. } => {
                let rhs_next = children.first().copied();
                let parents_next = push_rhs_delimiter(&v.parents, rhs_syntax, alloc);

                let (lhs_syntax, rhs_syntax, lhs_parent_id, rhs_parent_id, parents) =
                    pop_all_parents(
                        v.lhs_syntax,
                        rhs_next,
                        v.lhs_parent_id,
                        Some(rhs_syntax.id()),
                        &parents_next,
                        alloc,
                    );

                neighbours.push((
                    EnterNovelDelimiterRHS {},
                    allocate_if_new(
                        Vertex {
                            neighbours: OnceCell::new(),
                            predecessor: Cell::new(None),
                            predecessors: OnceCell::new(),
                            successor: Cell::new(None),
                            lhs_syntax,
                            rhs_syntax,
                            parents,
                            lhs_parent_id,
                            rhs_parent_id,
                        },
                        alloc,
                        seen,
                    ),
                ));
            }
        }
    }
    assert!(
        !neighbours.is_empty(),
        "Must always find some next steps if node is not the end"
    );

    alloc.alloc_slice_copy(neighbours.as_slice())
}

/// Information about the syntax trees that is needed to walk the
/// graph backwards, from the end vertex towards the start vertex.
#[derive(Debug, Clone, Copy)]
pub(crate) struct BackwardContext<'s> {
    /// The last top-level LHS node being diffed.
    pub(crate) lhs_last_root: Option<&'s Syntax<'s>>,
    /// The last top-level RHS node being diffed.
    pub(crate) rhs_last_root: Option<&'s Syntax<'s>>,
    /// The parent of the top-level LHS nodes, if we're diffing a
    /// subsection of a larger tree. Top-level nodes are treated as
    /// having no parent by the graph.
    pub(crate) lhs_root_parent_id: Option<SyntaxId>,
    pub(crate) rhs_root_parent_id: Option<SyntaxId>,
}

impl BackwardContext<'_> {
    pub(crate) fn new<'s>(
        lhs_syntax: Option<&'s Syntax<'s>>,
        rhs_syntax: Option<&'s Syntax<'s>>,
    ) -> BackwardContext<'s> {
        let last = |root: Option<&'s Syntax<'s>>| {
            std::iter::successors(root, |node| node.next_sibling()).last()
        };
        BackwardContext {
            lhs_last_root: last(lhs_syntax),
            rhs_last_root: last(rhs_syntax),
            lhs_root_parent_id: lhs_syntax.and_then(|node| node.parent()).map(Syntax::id),
            rhs_root_parent_id: rhs_syntax.and_then(|node| node.parent()).map(Syntax::id),
        }
    }

    /// The parent IDs that a vertex whose LHS syntax is `node` may
    /// have. Inside a list, this is always the enclosing list. For
    /// top-level nodes the graph carries the start vertex's `None`
    /// until a top-level list is popped, after which it uses the
    /// parent of the top-level nodes, so both are possible.
    fn lhs_parent_ids(&self, node: &Syntax) -> SmallVec<[Option<SyntaxId>; 2]> {
        Self::parent_ids(node, self.lhs_root_parent_id)
    }

    fn rhs_parent_ids(&self, node: &Syntax) -> SmallVec<[Option<SyntaxId>; 2]> {
        Self::parent_ids(node, self.rhs_root_parent_id)
    }

    fn parent_ids(
        node: &Syntax,
        root_parent_id: Option<SyntaxId>,
    ) -> SmallVec<[Option<SyntaxId>; 2]> {
        let parent_id = node.parent().map(Syntax::id);
        if parent_id == root_parent_id {
            let mut res = smallvec![None];
            if parent_id.is_some() {
                res.push(parent_id);
            }
            res
        } else {
            smallvec![parent_id]
        }
    }

    /// The parent IDs that an end vertex may have.
    pub(crate) fn end_parent_ids(&self) -> Vec<(Option<SyntaxId>, Option<SyntaxId>)> {
        let mut res = vec![(None, None)];
        if self.lhs_root_parent_id.is_some() {
            res.push((self.lhs_root_parent_id, None));
        }
        if self.rhs_root_parent_id.is_some() {
            res.push((None, self.rhs_root_parent_id));
        }
        if self.lhs_root_parent_id.is_some() && self.rhs_root_parent_id.is_some() {
            res.push((self.lhs_root_parent_id, self.rhs_root_parent_id));
        }
        res
    }
}

/// A position in the graph before `pop_all_parents` has been
/// applied. Unlike a `Vertex`, we track the syntax node we're inside
/// on each side, so we can walk backwards from the end of a list.
#[derive(Clone)]
struct RawState<'s, 'v> {
    lhs_syntax: Option<&'s Syntax<'s>>,
    rhs_syntax: Option<&'s Syntax<'s>>,
    /// The list whose children we're currently visiting, or `None`
    /// at the top level.
    lhs_parent: Option<&'s Syntax<'s>>,
    rhs_parent: Option<&'s Syntax<'s>>,
    /// The parent IDs as the forward search would record them.
    lhs_parent_id: Option<SyntaxId>,
    rhs_parent_id: Option<SyntaxId>,
    parents: Stack<'v, EnteredDelimiter<'s, 'v>>,
    /// Have we undone a RHS pop in the topmost PopEither? If so,
    /// undoing a LHS pop would produce a duplicate of a state we
    /// generate elsewhere.
    rhs_undone: bool,
}

/// The node before `node` in the sequence being visited, i.e. its
/// previous sibling, or the last child of `parent` if we've reached
/// the end of the sequence.
fn step_back<'s>(
    node: Option<&'s Syntax<'s>>,
    parent: Option<&'s Syntax<'s>>,
    last_root: Option<&'s Syntax<'s>>,
) -> Option<&'s Syntax<'s>> {
    match node {
        Some(node) => node.previous_sibling(),
        None => match parent {
            Some(Syntax::List { children, .. }) => children.last().copied(),
            Some(Syntax::Atom { .. }) => None,
            None => last_root,
        },
    }
}

/// The list that the LHS is currently inside, according to the
/// delimiter stack.
fn lhs_parent_from_stack<'s, 'v>(
    parents: &Stack<'v, EnteredDelimiter<'s, 'v>>,
) -> Option<&'s Syntax<'s>> {
    let mut parents = parents.clone();
    while let Some(entered) = parents.peek() {
        match entered {
            EnteredDelimiter::PopBoth((lhs_delim, _)) => return Some(lhs_delim),
            EnteredDelimiter::PopEither((lhs_delims, _)) => {
                if let Some(lhs_delim) = lhs_delims.peek() {
                    return Some(lhs_delim);
                }
            }
        }
        parents = parents.pop().unwrap();
    }
    None
}

fn rhs_parent_from_stack<'s, 'v>(
    parents: &Stack<'v, EnteredDelimiter<'s, 'v>>,
) -> Option<&'s Syntax<'s>> {
    let mut parents = parents.clone();
    while let Some(entered) = parents.peek() {
        match entered {
            EnteredDelimiter::PopBoth((_, rhs_delim)) => return Some(rhs_delim),
            EnteredDelimiter::PopEither((_, rhs_delims)) => {
                if let Some(rhs_delim) = rhs_delims.peek() {
                    return Some(rhs_delim);
                }
            }
        }
        parents = parents.pop().unwrap();
    }
    None
}

/// Is `node` the first child of `delim`? If `node` is `None`, `delim`
/// must have no children, and we must be inside `delim`.
fn is_first_child(node: Option<&Syntax>, parent: Option<&Syntax>, delim: &Syntax) -> bool {
    match node {
        Some(node) => {
            node.previous_sibling().is_none() && node.parent().map(Syntax::id) == Some(delim.id())
        }
        None => match (parent, delim) {
            (Some(parent), Syntax::List { children, .. }) => {
                parent.id() == delim.id() && children.is_empty()
            }
            _ => false,
        },
    }
}

/// The largest number of raw states we consider when computing
/// predecessors of a vertex.
const MAX_PRE_IMAGES: usize = 100_000;

/// All the raw states `s` such that applying `pop_all_parents` to
/// `s` gives `v`.
///
/// `pop_all_parents` may pop several delimiters in a row, so we undo
/// pops one at a time, in every combination.
fn pre_images<'s, 'v>(
    v: &Vertex<'s, 'v>,
    ctx: BackwardContext<'s>,
    alloc: &'v Bump,
) -> Vec<RawState<'s, 'v>> {
    let mut res: Vec<RawState<'s, 'v>> = vec![];
    let mut todo = vec![RawState {
        lhs_syntax: v.lhs_syntax,
        rhs_syntax: v.rhs_syntax,
        lhs_parent: lhs_parent_from_stack(&v.parents),
        rhs_parent: rhs_parent_from_stack(&v.parents),
        lhs_parent_id: v.lhs_parent_id,
        rhs_parent_id: v.rhs_parent_id,
        parents: v.parents.clone(),
        rhs_undone: false,
    }];

    while let Some(s) = todo.pop() {
        if res.len() >= MAX_PRE_IMAGES {
            break;
        }

        let lhs_prev = step_back(s.lhs_syntax, s.lhs_parent, ctx.lhs_last_root);
        let rhs_prev = step_back(s.rhs_syntax, s.rhs_parent, ctx.rhs_last_root);

        // Popping a delimiter sets the parent ID to the delimiter's
        // parent, so we can only undo a pop if that matches.
        let lhs_poppable = match lhs_prev {
            Some(lhs_delim @ Syntax::List { .. })
                if lhs_delim.parent().map(Syntax::id) == s.lhs_parent_id =>
            {
                Some(lhs_delim)
            }
            _ => None,
        };
        let rhs_poppable = match rhs_prev {
            Some(rhs_delim @ Syntax::List { .. })
                if rhs_delim.parent().map(Syntax::id) == s.rhs_parent_id =>
            {
                Some(rhs_delim)
            }
            _ => None,
        };

        // Undo popping a LHS delimiter.
        if !s.rhs_undone {
            if let Some(lhs_delim) = lhs_poppable {
                todo.push(RawState {
                    lhs_syntax: None,
                    rhs_syntax: s.rhs_syntax,
                    lhs_parent: Some(lhs_delim),
                    rhs_parent: s.rhs_parent,
                    lhs_parent_id: Some(lhs_delim.id()),
                    rhs_parent_id: s.rhs_parent_id,
                    parents: push_lhs_delimiter(&s.parents, lhs_delim, alloc),
                    rhs_undone: false,
                });
            }
        }
        // Undo popping a RHS delimiter.
        if let Some(rhs_delim) = rhs_poppable {
            todo.push(RawState {
                lhs_syntax: s.lhs_syntax,
                rhs_syntax: None,
                lhs_parent: s.lhs_parent,
                rhs_parent: Some(rhs_delim),
                lhs_parent_id: s.lhs_parent_id,
                rhs_parent_id: Some(rhs_delim.id()),
                parents: push_rhs_delimiter(&s.parents, rhs_delim, alloc),
                rhs_undone: true,
            });
        }
        // Undo popping both delimiters together.
        if let (Some(lhs_delim), Some(rhs_delim)) = (lhs_poppable, rhs_poppable) {
            todo.push(RawState {
                lhs_syntax: None,
                rhs_syntax: None,
                lhs_parent: Some(lhs_delim),
                rhs_parent: Some(rhs_delim),
                lhs_parent_id: Some(lhs_delim.id()),
                rhs_parent_id: Some(rhs_delim.id()),
                parents: push_both_delimiters(&s.parents, lhs_delim, rhs_delim, alloc),
                rhs_undone: false,
            });
        }

        res.push(s);
    }

    res
}

/// Could there be a `ReplacedComment` or `ReplacedString` edge
/// between these two nodes?
fn is_replaceable<'s>(lhs: &Syntax<'s>, rhs: &Syntax<'s>) -> bool {
    match (lhs, rhs) {
        (
            Syntax::Atom {
                kind: lhs_kind @ (AtomKind::Comment | AtomKind::String(_)),
                ..
            },
            Syntax::Atom {
                kind: rhs_kind @ (AtomKind::Comment | AtomKind::String(_)),
                ..
            },
        ) => lhs_kind == rhs_kind && lhs != rhs,
        _ => false,
    }
}

/// Compute the vertices that have an edge to `v`.
///
/// Every candidate is checked by computing its neighbours, so the
/// result is exactly consistent with `compute_neighbours`.
pub(crate) fn compute_predecessors<'s, 'v>(
    v: &'v Vertex<'s, 'v>,
    ctx: BackwardContext<'s>,
    alloc: &'v Bump,
    seen: &mut DftHashMap<&Vertex<'s, 'v>, SmallVec<[&'v Vertex<'s, 'v>; 2]>>,
) -> &'v [(Edge, &'v Vertex<'s, 'v>)] {
    let mut candidates: SmallVec<[&'v Vertex<'s, 'v>; 16]> = SmallVec::new();

    let mut consider =
        |lhs_syntax: Option<&'s Syntax<'s>>,
         rhs_syntax: Option<&'s Syntax<'s>>,
         lhs_parent_id: Option<SyntaxId>,
         rhs_parent_id: Option<SyntaxId>,
         parents: Stack<'v, EnteredDelimiter<'s, 'v>>,
         seen: &mut DftHashMap<&Vertex<'s, 'v>, SmallVec<[&'v Vertex<'s, 'v>; 2]>>| {
            // Only canonical states (where no more parents can be
            // popped) are vertices in the graph.
            let (popped_lhs, popped_rhs, _, _, popped_parents) = pop_all_parents(
                lhs_syntax,
                rhs_syntax,
                lhs_parent_id,
                rhs_parent_id,
                &parents,
                alloc,
            );
            if popped_lhs.map(Syntax::id) != lhs_syntax.map(Syntax::id)
                || popped_rhs.map(Syntax::id) != rhs_syntax.map(Syntax::id)
                || popped_parents != parents
            {
                return;
            }

            let vertex = Vertex {
                neighbours: OnceCell::new(),
                predecessor: Cell::new(None),
                predecessors: OnceCell::new(),
                successor: Cell::new(None),
                lhs_syntax,
                rhs_syntax,
                parents,
                lhs_parent_id,
                rhs_parent_id,
            };
            // Prefer the vertex with exactly this state if we've seen
            // it, as `allocate_if_new` may return a vertex with a
            // different delimiter stack.
            let candidate = match find_exact(&vertex, seen) {
                Some(existing) => existing,
                None => allocate_if_new(vertex, alloc, seen),
            };
            if !candidates.iter().any(|c| std::ptr::eq(*c, candidate)) {
                candidates.push(candidate);
            }
        };

    for s in pre_images(v, ctx, alloc) {
        let lhs_prev = step_back(s.lhs_syntax, s.lhs_parent, ctx.lhs_last_root);
        let rhs_prev = step_back(s.rhs_syntax, s.rhs_parent, ctx.rhs_last_root);

        // NovelAtomLHS.
        if let Some(lhs_prev @ Syntax::Atom { .. }) = lhs_prev {
            consider(
                Some(lhs_prev),
                s.rhs_syntax,
                s.lhs_parent_id,
                s.rhs_parent_id,
                s.parents.clone(),
                seen,
            );
        }
        // NovelAtomRHS.
        if let Some(rhs_prev @ Syntax::Atom { .. }) = rhs_prev {
            consider(
                s.lhs_syntax,
                Some(rhs_prev),
                s.lhs_parent_id,
                s.rhs_parent_id,
                s.parents.clone(),
                seen,
            );
        }
        // UnchangedNode, ReplacedComment or ReplacedString.
        if let (Some(lhs_prev), Some(rhs_prev)) = (lhs_prev, rhs_prev) {
            if lhs_prev == rhs_prev || is_replaceable(lhs_prev, rhs_prev) {
                consider(
                    Some(lhs_prev),
                    Some(rhs_prev),
                    s.lhs_parent_id,
                    s.rhs_parent_id,
                    s.parents.clone(),
                    seen,
                );
            }
        }

        // EnterUnchangedDelimiter.
        if let Some((lhs_delim, rhs_delim, parents)) = try_pop_both(&s.parents) {
            if is_first_child(s.lhs_syntax, s.lhs_parent, lhs_delim)
                && is_first_child(s.rhs_syntax, s.rhs_parent, rhs_delim)
            {
                for lhs_parent_id in ctx.lhs_parent_ids(lhs_delim) {
                    for rhs_parent_id in ctx.rhs_parent_ids(rhs_delim) {
                        consider(
                            Some(lhs_delim),
                            Some(rhs_delim),
                            lhs_parent_id,
                            rhs_parent_id,
                            parents.clone(),
                            seen,
                        );
                    }
                }
            }
        }
        // EnterNovelDelimiterLHS.
        if let Some((lhs_delim, parents)) = try_pop_lhs(&s.parents, alloc) {
            if is_first_child(s.lhs_syntax, s.lhs_parent, lhs_delim) {
                for lhs_parent_id in ctx.lhs_parent_ids(lhs_delim) {
                    consider(
                        Some(lhs_delim),
                        s.rhs_syntax,
                        lhs_parent_id,
                        s.rhs_parent_id,
                        parents.clone(),
                        seen,
                    );
                }
            }
        }
        // EnterNovelDelimiterRHS.
        if let Some((rhs_delim, parents)) = try_pop_rhs(&s.parents, alloc) {
            if is_first_child(s.rhs_syntax, s.rhs_parent, rhs_delim) {
                for rhs_parent_id in ctx.rhs_parent_ids(rhs_delim) {
                    consider(
                        s.lhs_syntax,
                        Some(rhs_delim),
                        s.lhs_parent_id,
                        rhs_parent_id,
                        parents.clone(),
                        seen,
                    );
                }
            }
        }
        // EnterNovelDelimiterBoth.
        if let Some((rhs_delim, parents)) = try_pop_rhs(&s.parents, alloc) {
            if let Some((lhs_delim, parents)) = try_pop_lhs(&parents, alloc) {
                if is_first_child(s.lhs_syntax, s.lhs_parent, lhs_delim)
                    && is_first_child(s.rhs_syntax, s.rhs_parent, rhs_delim)
                {
                    for lhs_parent_id in ctx.lhs_parent_ids(lhs_delim) {
                        for rhs_parent_id in ctx.rhs_parent_ids(rhs_delim) {
                            consider(
                                Some(lhs_delim),
                                Some(rhs_delim),
                                lhs_parent_id,
                                rhs_parent_id,
                                parents.clone(),
                                seen,
                            );
                        }
                    }
                }
            }
        }
    }

    // Keep the candidates that really do have an edge to `v`,
    // preferring the cheapest edge when there are several.
    let mut predecessors: SmallVec<[(Edge, &'v Vertex<'s, 'v>); 8]> = SmallVec::new();
    for candidate in candidates {
        let neighbours = *candidate
            .neighbours
            .get_or_init(|| compute_neighbours(candidate, alloc, seen));

        let mut best: Option<Edge> = None;
        for (edge, next) in neighbours {
            if std::ptr::eq(*next, v) && best.map_or(true, |b| edge.cost() < b.cost()) {
                best = Some(*edge);
            }
        }
        if let Some(edge) = best {
            predecessors.push((edge, candidate));
        }
    }

    alloc.alloc_slice_copy(predecessors.as_slice())
}

pub(crate) fn populate_change_map<'s, 'v>(
    route: &[(Edge, &'v Vertex<'s, 'v>)],
    change_map: &mut ChangeMap<'s>,
) {
    for (e, v) in route {
        match e {
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();

                insert_deep_unchanged(lhs, rhs, change_map);
                insert_deep_unchanged(rhs, lhs, change_map);
            }
            EnterUnchangedDelimiter { .. } => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                change_map.insert(lhs, ChangeKind::Unchanged(rhs));
                change_map.insert(rhs, ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } | ReplacedString { levenshtein_pct } => {
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                let change_kind = |first, second| {
                    if let ReplacedComment { .. } = e {
                        ChangeKind::ReplacedComment(first, second)
                    } else {
                        ChangeKind::ReplacedString(first, second)
                    }
                };

                if *levenshtein_pct > 20 {
                    change_map.insert(lhs, change_kind(lhs, rhs));
                    change_map.insert(rhs, change_kind(rhs, lhs));
                } else {
                    change_map.insert(lhs, ChangeKind::Novel);
                    change_map.insert(rhs, ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | EnterNovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
            }
            EnterNovelDelimiterBoth { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                change_map.insert(lhs, ChangeKind::Novel);
                change_map.insert(rhs, ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | EnterNovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax.unwrap();
                change_map.insert(rhs, ChangeKind::Novel);
            }
        }
    }
}
