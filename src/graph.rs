//! A graph representation for computing tree diffs.

use rustc_hash::FxHasher;
use std::hash::{Hash, Hasher};
use strsim::normalized_levenshtein;

use crate::syntax::{AtomKind, ChangeKind, Syntax};
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
pub struct Vertex<'a> {
    pub lhs_syntax: Option<&'a Syntax<'a>>,
    pub rhs_syntax: Option<&'a Syntax<'a>>,
    // Instead, store parent pointers for both sides and a hashset of
    // novel delimiter parent IDs.
    parents: im_rc::Vector<(Option<&'a Syntax<'a>>, Option<&'a Syntax<'a>>)>,
    parents_hash: u64,
}

impl<'a> PartialEq for Vertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.lhs_syntax.map(|node| node.id()) == other.lhs_syntax.map(|node| node.id())
            && self.rhs_syntax.map(|node| node.id()) == other.rhs_syntax.map(|node| node.id())
            && self.parents_hash == other.parents_hash
            && self.eq_parents_each_side(other)
    }
}
impl<'a> Eq for Vertex<'a> {}

impl<'a> Hash for Vertex<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.map(|node| node.id()).hash(state);
        self.rhs_syntax.map(|node| node.id()).hash(state);

        self.parents_hash.hash(state);
    }
}

fn hash_parents(parents: &im_rc::Vector<(Option<&Syntax>, Option<&Syntax>)>) -> u64 {
    let mut hasher = FxHasher::default();

    for (parent_id, _) in parents.iter() {
        if let Some(parent_id) = parent_id {
            // FxHasher finishes with 0 if called with
            // .write_u32(0). Ensure the u32 written is always
            // non-zero.
            hasher.write_u32(parent_id.id() + 1);
        }
    }
    for (_, parent_id) in parents.iter() {
        if let Some(parent_id) = parent_id {
            // FxHasher finishes with 0 if called with
            // .write_u32(0). Ensure the u32 written is always
            // non-zero.
            hasher.write_u32(parent_id.id() + 1);
        }
    }

    hasher.finish()
}

impl<'a> Vertex<'a> {
    pub fn is_end(&self) -> bool {
        self.lhs_syntax.is_none() && self.rhs_syntax.is_none() && self.parents.is_empty()
    }

    fn eq_parents_each_side(&self, other: &Self) -> bool {
        let self_lhs_parents = self.parents.iter().filter_map(|(lhs, _)| *lhs);
        let other_lhs_parents = other.parents.iter().filter_map(|(lhs, _)| *lhs);
        for (self_lhs_parent, other_lhs_parent) in self_lhs_parents.zip(other_lhs_parents) {
            if self_lhs_parent.id() != other_lhs_parent.id() {
                return false;
            }
        }

        let self_rhs_parents = self.parents.iter().filter_map(|(_, rhs)| *rhs);
        let other_rhs_parents = other.parents.iter().filter_map(|(_, rhs)| *rhs);
        for (self_rhs_parent, other_rhs_parent) in self_rhs_parents.zip(other_rhs_parents) {
            if self_rhs_parent.id() != other_rhs_parent.id() {
                return false;
            }
        }

        true
    }

    pub fn new(lhs_syntax: Option<&'a Syntax<'a>>, rhs_syntax: Option<&'a Syntax<'a>>) -> Self {
        let parents = im_rc::Vector::new();
        let parents_hash = hash_parents(&parents);
        Vertex {
            lhs_syntax,
            rhs_syntax,
            parents,
            parents_hash,
        }
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
    ReplacedComment { levenshtein_pct: u8 },
    NovelAtomLHS { contiguous: bool },
    NovelAtomRHS { contiguous: bool },
    // TODO: An EnterNovelDelimiterBoth edge might help performance
    // rather doing LHS and RHS separately.
    EnterNovelDelimiterLHS { contiguous: bool },
    EnterNovelDelimiterRHS { contiguous: bool },
    NovelTreeLHS { num_descendants: u32 },
    NovelTreeRHS { num_descendants: u32 },
    ExitDelimiterLHS,
    ExitDelimiterRHS,
    ExitDelimiterBoth,
}

impl Edge {
    pub fn cost(&self) -> u64 {
        match self {
            ExitDelimiterBoth => 1,
            ExitDelimiterLHS | ExitDelimiterRHS => 2,

            // Matching nodes is always best.
            UnchangedNode => 1,
            // Matching an outer delimiter is good.
            EnterUnchangedDelimiter => 100,

            // Replacing a comment is better than treating it as novel.
            ReplacedComment { levenshtein_pct } => 150 + u64::from(100 - levenshtein_pct),

            // Otherwise, we've added/removed a node.
            NovelAtomLHS { contiguous }
            | NovelAtomRHS { contiguous }
            | EnterNovelDelimiterLHS { contiguous }
            | EnterNovelDelimiterRHS { contiguous } => {
                if *contiguous {
                    300
                } else {
                    // This needs to be more than 40 greater than the
                    // contiguous case. Otherwise, we end up choosing
                    // a badly positioned unchanged delimiter just
                    // because it has a better depth difference.
                    //
                    // TODO: write a test for this case.
                    350
                }
            }

            // For large trees, it's better to mark the whole tree as
            // novel rather than marking 90% of the children as
            // novel. This stops us matching up completely unrelated trees.
            NovelTreeLHS { num_descendants } | NovelTreeRHS { num_descendants } => {
                300 + (*num_descendants as u64 - 10) * NovelAtomLHS { contiguous: false }.cost()
            }
        }
    }
}

const NOVEL_TREE_THRESHOLD: u32 = 20;

/// Calculate all the neighbours from `v` and write them to `buf`.
pub fn neighbours<'a>(v: &Vertex<'a>, buf: &mut [Option<(Edge, Vertex<'a>)>]) {
    for item in &mut *buf {
        *item = None;
    }

    let mut i = 0;

    if let Some((lhs_parent, rhs_parent)) = v.parents.back() {
        match (lhs_parent, rhs_parent) {
            (Some(lhs_parent), Some(rhs_parent))
                if v.lhs_syntax.is_none() && v.rhs_syntax.is_none() =>
            {
                // We have exhausted all the nodes on both lists, so we can
                // move up to the parent node.
                let mut next_parents = v.parents.clone();
                next_parents.pop_back();
                let parents_hash = hash_parents(&next_parents);

                // Continue from sibling of parent.
                buf[i] = Some((
                    ExitDelimiterBoth,
                    Vertex {
                        lhs_syntax: lhs_parent.next_if_same_layer(),
                        rhs_syntax: rhs_parent.next_if_same_layer(),
                        parents: next_parents,
                        parents_hash,
                    },
                ));
                i += 1;
            }
            (Some(lhs_parent), None) if v.lhs_syntax.is_none() => {
                // Move to next after LHS parent.
                let mut next_parents = v.parents.clone();
                next_parents.pop_back();
                let parents_hash = hash_parents(&next_parents);

                // Continue from sibling of parent.
                buf[i] = Some((
                    ExitDelimiterLHS,
                    Vertex {
                        lhs_syntax: lhs_parent.next_if_same_layer(),
                        rhs_syntax: v.rhs_syntax,
                        parents: next_parents,
                        parents_hash,
                    },
                ));
                i += 1;
            }
            (None, Some(rhs_parent)) if v.rhs_syntax.is_none() => {
                // Move to next after RHS parent.
                let mut next_parents = v.parents.clone();
                next_parents.pop_back();
                let parents_hash = hash_parents(&next_parents);

                // Continue from sibling of parent.
                buf[i] = Some((
                    ExitDelimiterRHS,
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_parent.next_if_same_layer(),
                        parents: next_parents,
                        parents_hash,
                    },
                ));
                i += 1;
            }
            _ => {}
        }
    }

    if let (Some(lhs_syntax), Some(rhs_syntax)) = (&v.lhs_syntax, &v.rhs_syntax) {
        if lhs_syntax == rhs_syntax {
            // Both nodes are equal, the happy case.
            buf[i] = Some((
                UnchangedNode,
                Vertex {
                    lhs_syntax: lhs_syntax.next_if_same_layer(),
                    rhs_syntax: rhs_syntax.next_if_same_layer(),
                    parents: v.parents.clone(),
                    parents_hash: v.parents_hash,
                },
            ));
            return;
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
                let lhs_next = lhs_children.get(0).copied();
                let rhs_next = rhs_children.get(0).copied();

                // TODO: be consistent between parents_next and next_parents.
                let mut parents_next = v.parents.clone();
                parents_next.push_back((Some(lhs_syntax), Some(rhs_syntax)));
                let parents_hash = hash_parents(&parents_next);

                buf[i] = Some((
                    EnterUnchangedDelimiter,
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: rhs_next,
                        parents: parents_next,
                        parents_hash,
                    },
                ));
                i += 1;
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
                buf[i] = Some((
                    ReplacedComment { levenshtein_pct },
                    Vertex {
                        lhs_syntax: lhs_syntax.next_if_same_layer(),
                        rhs_syntax: rhs_syntax.next_if_same_layer(),
                        parents: v.parents.clone(),
                        parents_hash: v.parents_hash,
                    },
                ));
                i += 1;
            }
        }
    }

    if let Some(lhs_syntax) = &v.lhs_syntax {
        match lhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                buf[i] = Some((
                    NovelAtomLHS {
                        // TODO: should this apply if prev is a parent
                        // node rather than a sibling?
                        contiguous: lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_syntax.next_if_same_layer(),
                        rhs_syntax: v.rhs_syntax,
                        parents: v.parents.clone(),
                        parents_hash: v.parents_hash,
                    },
                ));
                i += 1;
            }
            // Step into this partially/fully novel list.
            Syntax::List {
                children,
                num_descendants,
                ..
            } => {
                let lhs_next = children.get(0).copied();

                let mut parents_next = v.parents.clone();
                parents_next.push_back((Some(lhs_syntax), None));
                let parents_hash = hash_parents(&parents_next);

                buf[i] = Some((
                    EnterNovelDelimiterLHS {
                        contiguous: lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: v.rhs_syntax,
                        parents: parents_next,
                        parents_hash,
                    },
                ));
                i += 1;

                if *num_descendants > NOVEL_TREE_THRESHOLD {
                    buf[i] = Some((
                        NovelTreeLHS {
                            num_descendants: *num_descendants,
                        },
                        Vertex {
                            lhs_syntax: lhs_syntax.next_if_same_layer(),
                            rhs_syntax: v.rhs_syntax,
                            parents: v.parents.clone(),
                            parents_hash: v.parents_hash,
                        },
                    ));
                    i += 1;
                }
            }
        }
    }

    if let Some(rhs_syntax) = &v.rhs_syntax {
        match rhs_syntax {
            // Step over this novel atom.
            Syntax::Atom { .. } => {
                buf[i] = Some((
                    NovelAtomRHS {
                        contiguous: rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_syntax.next_if_same_layer(),
                        parents: v.parents.clone(),
                        parents_hash: v.parents_hash,
                    },
                ));
                i += 1;
            }
            // Step into this partially/fully novel list.
            Syntax::List {
                children,
                num_descendants,
                ..
            } => {
                let rhs_next = children.get(0).copied();

                let mut parents_next = v.parents.clone();
                parents_next.push_back((None, Some(rhs_syntax)));
                let parents_hash = hash_parents(&parents_next);

                buf[i] = Some((
                    EnterNovelDelimiterRHS {
                        contiguous: rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_next,
                        parents: parents_next,
                        parents_hash,
                    },
                ));
                i += 1;

                if *num_descendants > NOVEL_TREE_THRESHOLD {
                    buf[i] = Some((
                        NovelTreeRHS {
                            num_descendants: *num_descendants,
                        },
                        Vertex {
                            lhs_syntax: v.lhs_syntax,
                            rhs_syntax: rhs_syntax.next_if_same_layer(),
                            parents: v.parents.clone(),
                            parents_hash: v.parents_hash,
                        },
                    ));
                    i += 1;
                }
            }
        }
    }
    assert!(
        i > 0,
        "Must always find some next steps if node is not the end"
    );
}

pub fn mark_route(route: &[(Edge, Vertex)]) {
    for (e, v) in route {
        match e {
            ExitDelimiterBoth | ExitDelimiterLHS | ExitDelimiterRHS => {
                // Nothing to do: we have already marked this node when we entered it.
            }
            UnchangedNode => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Unchanged(rhs));
                rhs.set_change_deep(ChangeKind::Unchanged(lhs));
            }
            EnterUnchangedDelimiter => {
                // No change on the outer delimiter, but children may
                // have changed.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Unchanged(rhs));
                rhs.set_change(ChangeKind::Unchanged(lhs));
            }
            ReplacedComment { levenshtein_pct } => {
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();

                if *levenshtein_pct > 40 {
                    lhs.set_change(ChangeKind::ReplacedComment(lhs, rhs));
                    rhs.set_change(ChangeKind::ReplacedComment(rhs, lhs));
                } else {
                    lhs.set_change(ChangeKind::Novel);
                    rhs.set_change(ChangeKind::Novel);
                }
            }
            NovelAtomLHS { .. } | EnterNovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | EnterNovelDelimiterRHS { .. } => {
                let rhs = v.rhs_syntax.unwrap();
                rhs.set_change(ChangeKind::Novel);
            }
            NovelTreeLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Novel);
            }
            NovelTreeRHS { .. } => {
                let rhs = v.rhs_syntax.unwrap();
                rhs.set_change_deep(ChangeKind::Novel);
            }
        }
    }
}
