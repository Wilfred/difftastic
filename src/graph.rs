//! A graph representation for computing tree diffs.

use std::{
    cmp::min,
    hash::{Hash, Hasher},
};
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
    /// If the previous edge was marking syntax as novel, what line
    /// was it on?
    ///
    /// We want to prefer marking syntax nodes as novel if we've
    /// already marked other nodes as novel on the current line. See
    /// `sample_files/contiguous_after.js`.
    ///
    /// Unfortunately this is path dependent: the vertex doesn't care
    /// how we got here.
    ///
    /// We solve this by distinguishing vertices based on the novel
    /// state of the previous edge. This increases the search space
    /// but allows us to keep using a graph traversal.
    pub lhs_prev_is_novel: bool,
    pub rhs_prev_is_novel: bool,
}
impl<'a> PartialEq for Vertex<'a> {
    fn eq(&self, other: &Self) -> bool {
        self.lhs_syntax.map(|node| node.id()) == other.lhs_syntax.map(|node| node.id())
            && self.rhs_syntax.map(|node| node.id()) == other.rhs_syntax.map(|node| node.id())
    }
}
impl<'a> Eq for Vertex<'a> {}

impl<'a> Hash for Vertex<'a> {
    fn hash<H: Hasher>(&self, state: &mut H) {
        self.lhs_syntax.map(|node| node.id()).hash(state);
        self.rhs_syntax.map(|node| node.id()).hash(state);
    }
}

impl<'a> Vertex<'a> {
    pub fn is_end(&self) -> bool {
        self.lhs_syntax.is_none() && self.rhs_syntax.is_none()
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
    UnchangedNode { depth_difference: u32 },
    UnchangedDelimiter { depth_difference: u32 },
    ReplacedComment { levenshtein_pct: u8 },
    NovelAtomLHS { contiguous: bool },
    NovelAtomRHS { contiguous: bool },
    NovelDelimiterLHS { contiguous: bool },
    NovelDelimiterRHS { contiguous: bool },
    NovelTreeLHS { num_descendants: u32 },
    NovelTreeRHS { num_descendants: u32 },
}

impl Edge {
    pub fn cost(&self) -> u64 {
        match self {
            // Matching nodes is always best.
            UnchangedNode { depth_difference } => min(40, *depth_difference as u64),
            // Matching an outer delimiter is good.
            UnchangedDelimiter { depth_difference } => 100 + min(40, *depth_difference as u64),

            // Replacing a comment is better than treating it as novel.
            ReplacedComment { levenshtein_pct } => 150 + u64::from(100 - levenshtein_pct),

            // Otherwise, we've added/removed a node.
            NovelAtomLHS { contiguous }
            | NovelAtomRHS { contiguous }
            | NovelDelimiterLHS { contiguous }
            | NovelDelimiterRHS { contiguous } => {
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
                // TODO: this crashes on debug builds if we have less
                // than 20 descendants.
                300 + (*num_descendants as u64 - 10)
                    * NovelDelimiterLHS { contiguous: false }.cost()
            }
        }
    }
}

const NOVEL_TREE_THRESHOLD: u32 = 20;

/// Calculate all the neighbours from `v` and write them to `buf`.
pub fn neighbours<'a>(v: &Vertex<'a>, buf: &mut [Option<(Edge, Vertex<'a>)>]) {
    for i in 0..buf.len() {
        buf[i] = None;
    }

    let mut i = 0;
    if let (Some(lhs_syntax), Some(rhs_syntax)) = (&v.lhs_syntax, &v.rhs_syntax) {
        if lhs_syntax == rhs_syntax {
            let depth_difference = (lhs_syntax.num_ancestors() as i32
                - rhs_syntax.num_ancestors() as i32)
                .abs() as u32;

            // Both nodes are equal, the happy case.
            // TODO: this is only OK if we've not changed depth.
            buf[i] = Some((
                UnchangedNode { depth_difference },
                Vertex {
                    lhs_syntax: lhs_syntax.next(),
                    rhs_syntax: rhs_syntax.next(),
                    lhs_prev_is_novel: false,
                    rhs_prev_is_novel: false,
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
                let lhs_next = if lhs_children.is_empty() {
                    lhs_syntax.next()
                } else {
                    Some(lhs_children[0])
                };
                let rhs_next = if rhs_children.is_empty() {
                    rhs_syntax.next()
                } else {
                    Some(rhs_children[0])
                };

                let depth_difference = (lhs_syntax.num_ancestors() as i32
                    - rhs_syntax.num_ancestors() as i32)
                    .abs() as u32;

                buf[i] = Some((
                    UnchangedDelimiter { depth_difference },
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: rhs_next,
                        lhs_prev_is_novel: false,
                        rhs_prev_is_novel: false,
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
                        lhs_syntax: lhs_syntax.next(),
                        rhs_syntax: rhs_syntax.next(),
                        lhs_prev_is_novel: false,
                        rhs_prev_is_novel: false,
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
                        contiguous: v.lhs_prev_is_novel && lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_syntax.next(),
                        rhs_syntax: v.rhs_syntax,
                        lhs_prev_is_novel: true,
                        rhs_prev_is_novel: v.rhs_prev_is_novel,
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
                let lhs_next = if children.is_empty() {
                    lhs_syntax.next()
                } else {
                    Some(children[0])
                };

                buf[i] = Some((
                    NovelDelimiterLHS {
                        contiguous: v.lhs_prev_is_novel && lhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: lhs_next,
                        rhs_syntax: v.rhs_syntax,
                        lhs_prev_is_novel: true,
                        rhs_prev_is_novel: v.rhs_prev_is_novel,
                    },
                ));
                i += 1;

                if *num_descendants > NOVEL_TREE_THRESHOLD {
                    buf[i] = Some((
                        NovelTreeLHS {
                            num_descendants: *num_descendants,
                        },
                        Vertex {
                            lhs_syntax: lhs_syntax.next(),
                            rhs_syntax: v.rhs_syntax,
                            lhs_prev_is_novel: v.lhs_prev_is_novel,
                            rhs_prev_is_novel: v.rhs_prev_is_novel,
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
                        contiguous: v.rhs_prev_is_novel && rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_syntax.next(),
                        lhs_prev_is_novel: v.lhs_prev_is_novel,
                        rhs_prev_is_novel: true,
                    },
                ));
            }
            // Step into this partially/fully novel list.
            Syntax::List {
                children,
                num_descendants,
                ..
            } => {
                let rhs_next = if children.is_empty() {
                    rhs_syntax.next()
                } else {
                    Some(children[0])
                };

                buf[i] = Some((
                    NovelDelimiterRHS {
                        contiguous: v.rhs_prev_is_novel && rhs_syntax.prev_is_contiguous(),
                    },
                    Vertex {
                        lhs_syntax: v.lhs_syntax,
                        rhs_syntax: rhs_next,
                        lhs_prev_is_novel: v.lhs_prev_is_novel,
                        rhs_prev_is_novel: true,
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
                            rhs_syntax: rhs_syntax.next(),
                            lhs_prev_is_novel: v.lhs_prev_is_novel,
                            rhs_prev_is_novel: v.rhs_prev_is_novel,
                        },
                    ));
                }
            }
        }
    }
}

pub fn mark_route(route: &[(Edge, Vertex)]) {
    for (e, v) in route {
        match e {
            UnchangedNode { .. } => {
                // No change on this node or its children.
                let lhs = v.lhs_syntax.unwrap();
                let rhs = v.rhs_syntax.unwrap();
                lhs.set_change_deep(ChangeKind::Unchanged(rhs));
                rhs.set_change_deep(ChangeKind::Unchanged(lhs));
            }
            UnchangedDelimiter { .. } => {
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
            NovelAtomLHS { .. } | NovelDelimiterLHS { .. } => {
                let lhs = v.lhs_syntax.unwrap();
                lhs.set_change(ChangeKind::Novel);
            }
            NovelAtomRHS { .. } | NovelDelimiterRHS { .. } => {
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
