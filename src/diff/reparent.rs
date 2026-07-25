//! Find syntax that has been re-nested, and treat it as a removal
//! followed by an insertion.
//!
//! Difftastic ignores absolute positions when diffing, so moving a
//! node into a different parent doesn't necessarily produce any novel
//! tokens. Many wrapper nodes (statements, blocks, paths, member
//! chains) have empty delimiters, and an empty delimiter always
//! matches another empty delimiter. Re-nesting between two such
//! wrappers therefore changes the tree without changing any token.
//!
//! For example, in Python:
//!
//! ```text
//! if a:                if a:
//!     print(a)             print(a)
//!     if b:            if b:
//!         print(b)         print(b)
//! ```
//!
//! Every token here matches, and the only novel node is a block with
//! empty delimiters, so nothing is displayed and difftastic reports
//! "No syntactic changes".
//!
//! Difftastic has no concept of a move, but a move is a removal and an
//! insertion, so this module rewrites the affected subtree to be novel
//! on both sides. The rest of the diff is untouched.

use crate::diff::changes::{ChangeKind, ChangeMap};
use crate::hash::{DftHashMap, DftHashSet};
use crate::parse::syntax::{Syntax, SyntaxId};

/// Rewrite re-nested nodes to be novel on both sides.
///
/// This runs after the main diff, so it never affects matching.
pub(crate) fn mark_reparented<'a>(
    lhs_nodes: &[&'a Syntax<'a>],
    rhs_nodes: &[&'a Syntax<'a>],
    change_map: &mut ChangeMap<'a>,
) {
    let mut info = TreeInfo::default();
    info.walk(lhs_nodes, change_map, 0);
    info.walk(rhs_nodes, change_map, 0);

    let mut roots = vec![];
    find_reparented(lhs_nodes, change_map, &info, &mut roots);
    find_reparented(rhs_nodes, change_map, &info, &mut roots);

    mark_novel_with_counterparts(roots, change_map);
}

/// Facts about both trees that we'd otherwise recompute for every node.
#[derive(Debug, Default)]
struct TreeInfo {
    /// How many novel ancestors each node has.
    novel_depths: DftHashMap<SyntaxId, u32>,
    /// Nodes whose subtree contains something the display layer paints.
    ///
    /// Novel nodes with empty delimiters produce no output of their
    /// own, so they're invisible unless they contain something else.
    visible: DftHashSet<SyntaxId>,
}

impl<'a> TreeInfo {
    /// Returns whether any node in `nodes` is visibly novel.
    fn walk(
        &mut self,
        nodes: &[&'a Syntax<'a>],
        change_map: &ChangeMap<'a>,
        novel_depth: u32,
    ) -> bool {
        let mut any_visible = false;

        for node in nodes {
            self.novel_depths.insert(node.id(), novel_depth);

            let is_novel = matches!(change_map.get(node), Some(ChangeKind::Novel));
            let child_depth = novel_depth + u32::from(is_novel);

            let visible = match node {
                Syntax::Atom { position, .. } => {
                    is_novel && position.iter().any(|p| p.start_col != p.end_col)
                }
                Syntax::List {
                    open_content,
                    close_content,
                    children,
                    ..
                } => {
                    let children_visible = self.walk(children, change_map, child_depth);
                    let delimiters_visible =
                        is_novel && !(open_content.is_empty() && close_content.is_empty());

                    children_visible || delimiters_visible
                }
            };

            if visible {
                self.visible.insert(node.id());
                any_visible = true;
            }
        }

        any_visible
    }

    fn novel_depth(&self, node: &Syntax<'_>) -> u32 {
        self.novel_depths.get(&node.id()).copied().unwrap_or(0)
    }

    fn is_visible(&self, node: &Syntax<'_>) -> bool {
        self.visible.contains(&node.id())
    }
}

/// Find the outermost nodes that have been re-nested.
///
/// Descendants of a re-nested node are not reported: they've moved
/// because their parent moved, which is a single change.
fn find_reparented<'a>(
    nodes: &[&'a Syntax<'a>],
    change_map: &ChangeMap<'a>,
    info: &TreeInfo,
    roots: &mut Vec<&'a Syntax<'a>>,
) {
    for node in nodes {
        if let Some(ChangeKind::Unchanged(opposite)) = change_map.get(node) {
            if is_reparented(node, opposite, change_map, info) {
                roots.push(node);
                continue;
            }
        }

        if let Syntax::List { children, .. } = node {
            find_reparented(children, change_map, info, roots);
        }
    }
}

/// Has `node` been re-nested relative to `opposite`, in a way that the
/// user can see but the display layer would otherwise miss?
fn is_reparented<'a>(
    node: &'a Syntax<'a>,
    opposite: &'a Syntax<'a>,
    change_map: &ChangeMap<'a>,
    info: &TreeInfo,
) -> bool {
    // The node sits inside a different number of novel wrappers than
    // its counterpart does.
    //
    // Reformatting doesn't produce any novel nodes at all, so this is
    // always 0 == 0 on a file that has only been reformatted.
    if info.novel_depth(node) == info.novel_depth(opposite) {
        return false;
    }

    // The node starts at a different column than its counterpart.
    //
    // Without this we'd also report nodes whose nesting changed but
    // which look exactly the same to the reader, such as the `if a:`
    // in the example above.
    if first_visible_column(node) == first_visible_column(opposite) {
        return false;
    }

    // Some other part of the change already shows what happened, e.g.
    // wrapping code in a new `if` displays the `if` itself.
    !already_visible(node, change_map, info) && !already_visible(opposite, change_map, info)
}

/// Is the re-nesting of `node` apparent from tokens that are displayed
/// anyway?
fn already_visible<'a>(node: &'a Syntax<'a>, change_map: &ChangeMap<'a>, info: &TreeInfo) -> bool {
    // The novel wrappers themselves may have visible delimiters, as in
    // `(x)` becoming `[(x)]`.
    let mut outermost_novel = None;

    let mut current = node.parent();
    while let Some(ancestor) = current {
        if matches!(change_map.get(ancestor), Some(ChangeKind::Novel)) {
            if info.is_visible(ancestor) {
                return true;
            }
            outermost_novel = Some(ancestor);
        }
        current = ancestor.parent();
    }

    // Otherwise the novel tokens may be siblings of the novel wrapper,
    // as in Python, where adding `if guard:` around a block puts the
    // novel atoms next to the novel block rather than inside it. Look
    // at the smallest matched construct that contains the whole move.
    match move_scope(outermost_novel, change_map) {
        Some(scope) => info.is_visible(scope),
        None => false,
    }
}

/// The smallest matched construct containing every novel wrapper above
/// a node. This is the region a reader would look at to work out why
/// the node moved.
fn move_scope<'a>(
    outermost_novel: Option<&'a Syntax<'a>>,
    change_map: &ChangeMap<'a>,
) -> Option<&'a Syntax<'a>> {
    let mut current = outermost_novel?.parent();

    while let Some(ancestor) = current {
        if matches!(change_map.get(ancestor), Some(ChangeKind::Unchanged(_))) {
            return Some(ancestor);
        }
        current = ancestor.parent();
    }

    None
}

/// The column of the first token in this subtree that occupies any
/// characters in the source.
fn first_visible_column(node: &Syntax<'_>) -> Option<u32> {
    match node {
        Syntax::Atom { position, .. } => position
            .iter()
            .find(|p| p.start_col != p.end_col)
            .map(|p| p.start_col),
        Syntax::List {
            open_position,
            children,
            close_position,
            ..
        } => {
            if let Some(p) = open_position.iter().find(|p| p.start_col != p.end_col) {
                return Some(p.start_col);
            }

            for child in children {
                if let Some(col) = first_visible_column(child) {
                    return Some(col);
                }
            }

            close_position
                .iter()
                .find(|p| p.start_col != p.end_col)
                .map(|p| p.start_col)
        }
    }
}

/// Mark every node in these subtrees as novel.
///
/// Marking a node novel orphans whatever it was matched with, so the
/// counterpart is marked too. The display layer requires the same
/// number of unchanged positions on both sides, and pairs them up in
/// order, so leaving an orphan behind would break it.
fn mark_novel_with_counterparts<'a>(roots: Vec<&'a Syntax<'a>>, change_map: &mut ChangeMap<'a>) {
    let mut marked: DftHashSet<SyntaxId> = DftHashSet::default();
    let mut queue = roots;

    while let Some(node) = queue.pop() {
        mark_subtree_novel(node, change_map, &mut marked, &mut queue);
    }
}

fn mark_subtree_novel<'a>(
    node: &'a Syntax<'a>,
    change_map: &mut ChangeMap<'a>,
    marked: &mut DftHashSet<SyntaxId>,
    queue: &mut Vec<&'a Syntax<'a>>,
) {
    if !marked.insert(node.id()) {
        return;
    }

    if let Some(ChangeKind::Unchanged(opposite)) = change_map.get(node) {
        queue.push(opposite);
    }
    change_map.insert(node, ChangeKind::Novel);

    if let Syntax::List { children, .. } = node {
        for child in children {
            mark_subtree_novel(child, change_map, marked, queue);
        }
    }
}

#[cfg(test)]
mod tests {
    use typed_arena::Arena;

    use super::*;
    use crate::diff::shortest_path::mark_syntax;
    use crate::diff::sliders::fix_all_sliders;
    use crate::diff::unchanged::mark_unchanged;
    use crate::options::DEFAULT_GRAPH_LIMIT;
    use crate::parse::guess_language::Language;
    use crate::parse::syntax::{init_all_info, init_next_prev};
    use crate::parse::tree_sitter_parser::{from_language, parse};

    /// Run the same steps as a real diff, up to and including
    /// `mark_reparented`.
    fn diff<'a>(
        arena: &'a Arena<Syntax<'a>>,
        language: Language,
        lhs_src: &str,
        rhs_src: &str,
    ) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>, ChangeMap<'a>) {
        diff_(arena, language, lhs_src, rhs_src, true)
    }

    fn diff_<'a>(
        arena: &'a Arena<Syntax<'a>>,
        language: Language,
        lhs_src: &str,
        rhs_src: &str,
        reparent: bool,
    ) -> (Vec<&'a Syntax<'a>>, Vec<&'a Syntax<'a>>, ChangeMap<'a>) {
        let config = from_language(language);
        let lhs = parse(arena, lhs_src, config, false);
        let rhs = parse(arena, rhs_src, config, false);
        init_all_info(&lhs, &rhs);

        let mut change_map = ChangeMap::default();
        for (lhs_section, rhs_section) in mark_unchanged(&lhs, &rhs, &mut change_map) {
            init_next_prev(&lhs_section);
            init_next_prev(&rhs_section);
            mark_syntax(
                lhs_section.first().copied(),
                rhs_section.first().copied(),
                &mut change_map,
                DEFAULT_GRAPH_LIMIT,
            )
            .unwrap();
        }

        fix_all_sliders(language, &lhs, &mut change_map);
        fix_all_sliders(language, &rhs, &mut change_map);

        if reparent {
            mark_reparented(&lhs, &rhs, &mut change_map);
        }
        (lhs, rhs, change_map)
    }

    /// The 1-indexed lines containing novel atoms.
    fn novel_lines<'a>(nodes: &[&'a Syntax<'a>], change_map: &ChangeMap<'a>) -> Vec<u32> {
        fn walk<'a>(node: &'a Syntax<'a>, change_map: &ChangeMap<'a>, lines: &mut Vec<u32>) {
            match node {
                Syntax::Atom { position, .. } => {
                    if matches!(change_map.get(node), Some(ChangeKind::Novel)) {
                        for p in position {
                            if p.start_col != p.end_col {
                                lines.push(p.line.0 + 1);
                            }
                        }
                    }
                }
                Syntax::List { children, .. } => {
                    for child in children {
                        walk(child, change_map, lines);
                    }
                }
            }
        }

        let mut lines = vec![];
        for node in nodes {
            walk(node, change_map, &mut lines);
        }

        lines.sort_unstable();
        lines.dedup();
        lines
    }

    /// Every node matched with a node on the other side must still be
    /// matched with it, otherwise the display layer can't pair up
    /// unchanged positions.
    fn assert_matches_are_mutual<'a>(nodes: &[&'a Syntax<'a>], change_map: &ChangeMap<'a>) {
        for node in nodes {
            if let Some(ChangeKind::Unchanged(opposite)) = change_map.get(node) {
                match change_map.get(opposite) {
                    Some(ChangeKind::Unchanged(back)) => assert_eq!(
                        back.id(),
                        node.id(),
                        "{:?} is matched with a node that is matched with something else",
                        node.dbg_content()
                    ),
                    other => panic!(
                        "{:?} is matched with {:?}, which is {:?}",
                        node.dbg_content(),
                        opposite.dbg_content(),
                        other.is_some()
                    ),
                }
            }

            if let Syntax::List { children, .. } = node {
                assert_matches_are_mutual(children, change_map);
            }
        }
    }

    /// Dedenting a block changes the tree without changing any token,
    /// so we show the block as removed and added.
    #[test]
    fn dedenting_a_block_is_shown() {
        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff(
            &arena,
            Language::Python,
            "def test(a, b):\n    if a:\n        print(a)\n        if b:\n            print(b)\n",
            "def test(a, b):\n    if a:\n        print(a)\n    if b:\n        print(b)\n",
        );

        assert_eq!(novel_lines(&lhs, &change_map), vec![4, 5]);
        assert_eq!(novel_lines(&rhs, &change_map), vec![4, 5]);
    }

    /// Reformatting doesn't produce any novel nodes, so there's
    /// nothing for us to report.
    #[test]
    fn reindenting_is_not_shown() {
        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff(
            &arena,
            Language::Python,
            "def f(a):\n    if a:\n        for i in r:\n            print(i)\n",
            "def f(a):\n  if a:\n    for i in r:\n      print(i)\n",
        );

        assert_eq!(novel_lines(&lhs, &change_map), Vec::<u32>::new());
        assert_eq!(novel_lines(&rhs, &change_map), Vec::<u32>::new());
    }

    /// Wrapping code in a new block already displays the new block, so
    /// don't also report the code inside it.
    #[test]
    fn wrapping_in_a_new_block_only_shows_the_new_block() {
        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff(
            &arena,
            Language::Python,
            "def f():\n    a()\n    b()\n",
            "def f():\n    if guard:\n        a()\n        b()\n",
        );

        assert_eq!(novel_lines(&lhs, &change_map), Vec::<u32>::new());
        assert_eq!(novel_lines(&rhs, &change_map), vec![2]);
    }

    /// Languages that delimit blocks explicitly already show this
    /// change, because the closing delimiter moves. Don't report it
    /// again.
    #[test]
    fn dedenting_is_not_reported_twice_in_brace_languages() {
        let lhs_src =
            "fn main() {\n    if a {\n        alpha();\n        if b {\n            beta();\n        }\n    }\n}\n";
        let rhs_src = "fn main() {\n    if a {\n        alpha();\n    }\n    if b {\n        beta();\n    }\n}\n";

        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff_(&arena, Language::Rust, lhs_src, rhs_src, true);
        let with_reparent = (
            novel_lines(&lhs, &change_map),
            novel_lines(&rhs, &change_map),
        );

        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff_(&arena, Language::Rust, lhs_src, rhs_src, false);
        let without_reparent = (
            novel_lines(&lhs, &change_map),
            novel_lines(&rhs, &change_map),
        );

        assert_eq!(with_reparent, without_reparent);
    }

    #[test]
    fn marking_novel_keeps_matches_mutual() {
        let arena = Arena::new();
        let (lhs, rhs, change_map) = diff(
            &arena,
            Language::Python,
            "def test(a, b):\n    if a:\n        print(a)\n        if b:\n            print(b)\n",
            "def test(a, b):\n    if a:\n        print(a)\n    if b:\n        print(b)\n",
        );

        assert_matches_are_mutual(&lhs, &change_map);
        assert_matches_are_mutual(&rhs, &change_map);
    }
}
