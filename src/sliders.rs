//! Prefer contiguous novel nodes on the same line.
//!
//! A slider takes the following form:
//!
//! Old:
//!
//! ```text
//! A B
//! C D
//! ```
//!
//! New:
//!
//! ```text
//! A B
//! A B
//! C D
//! ```
//!
//! It would be correct, but ugly, to show the following diff:
//!
//! ```text
//! A +B+
//! +A+ B
//! C D
//! ```
//!
//! This module fixes these sliders by sliding novel region regions
//! forwards or backwards when the before and after nodes are the same
//! (B in this example).

use crate::{
    guess_language,
    positions::SingleLineSpan,
    syntax::{ChangeKind::*, Syntax},
};
use Syntax::*;

pub fn fix_all_sliders<'a>(language: guess_language::Language, nodes: &[&'a Syntax<'a>]) {
    // TODO: fix sliders that require more than two steps.
    fix_all_sliders_one_step(nodes);
    fix_all_sliders_one_step(nodes);

    if !prefer_outer_delimiter(language) {
        fix_all_nested_sliders(nodes);
    }
}

/// Should nester slider correction prefer the inner or outer
/// delimiter?
fn prefer_outer_delimiter(language: guess_language::Language) -> bool {
    use guess_language::Language::*;
    match language {
        // For Lisp family languages, we get the best result with the
        // outer delimiter.
        EmacsLisp | Clojure | CommonLisp | Janet => true,
        // JSON and TOML are like Lisp: the outer delimiter in an array object
        // is the most relevant.
        Json | Toml => true,
        // For everything else, prefer the inner delimiter. These
        // languages have syntax like `foo(bar)` or `foo[bar]` where
        // the inner delimiter is more relevant.
        Bash | C | CPlusPlus | CSharp | Css | Dart | Elixir | Elm | Gleam | Go | Haskell | Java
        | JavaScript | Jsx | Kotlin | Lua | Nix | OCaml | OCamlInterface | Php | Python | Ruby
        | Rust | Scala | Tsx | TypeScript | Yaml | Zig => false,
    }
}

fn fix_all_sliders_one_step<'a>(nodes: &[&'a Syntax<'a>]) {
    for node in nodes {
        if let List { children, .. } = node {
            fix_all_sliders_one_step(children);
        }
    }
    fix_sliders(nodes);
}

/// Correct sliders in middle insertions.
///
/// Consider the code:
///
/// ```text
/// // Before
/// old1(old2);
/// // After
/// old1(new1(old2));
/// ```
///
/// Tree diffing has two possible solution here. Either we've added
/// `new1(...)` or we've added `(new1...)`. Both are valid.
///
/// For C-like languages, the first case matches human intuition much
/// better. Fix the slider to make the inner delimiter novel.
fn fix_all_nested_sliders<'a>(nodes: &[&'a Syntax<'a>]) {
    for node in nodes {
        fix_nested_slider(node);
    }
}

fn fix_nested_slider<'a>(node: &'a Syntax<'a>) {
    if let List { children, .. } = node {
        match node
            .change()
            .expect("Changes should be set before slider correction")
        {
            Unchanged(_) => {
                for child in children {
                    fix_nested_slider(child);
                }
            }
            ReplacedComment(_, _) => {}
            Novel => {
                let mut found_unchanged = vec![];
                for child in children {
                    unchanged_descendants(child, &mut found_unchanged);
                }

                if let [List { .. }] = found_unchanged[..] {
                    push_unchanged_to_ancestor(node, found_unchanged[0]);
                }
            }
        }
    }
}

fn unchanged_descendants<'a>(node: &'a Syntax<'a>, found: &mut Vec<&'a Syntax<'a>>) {
    if found.len() > 1 {
        return;
    }

    match node.change().unwrap() {
        Unchanged(_) => {
            found.push(node);
        }
        Novel | ReplacedComment(_, _) => {
            if let List { children, .. } = node {
                for child in children {
                    unchanged_descendants(child, found);
                }
            }
        }
    }
}

fn push_unchanged_to_ancestor<'a>(root: &'a Syntax<'a>, inner: &'a Syntax<'a>) {
    let inner_change = inner.change().expect("Node changes should be set");

    let delimiters_match = match (root, inner) {
        (
            List {
                open_content: root_open,
                close_content: root_close,
                ..
            },
            List {
                open_content: inner_open,
                close_content: inner_close,
                ..
            },
        ) => root_open == inner_open && root_close == inner_close,
        _ => false,
    };

    if delimiters_match {
        root.set_change(inner_change);
        inner.set_change(Novel);
    }
}

fn fix_sliders<'a>(nodes: &[&'a Syntax<'a>]) {
    for (region_start, region_end) in novel_regions_after_unchanged(nodes) {
        slide_to_prev_node(nodes, region_start, region_end);
    }
    for (region_start, region_end) in novel_regions_before_unchanged(nodes) {
        slide_to_next_node(nodes, region_start, region_end);
    }
}

fn novel_regions_after_unchanged<'a>(nodes: &[&'a Syntax<'a>]) -> Vec<(usize, usize)> {
    let mut regions: Vec<Vec<usize>> = vec![];
    let mut region: Option<Vec<usize>> = None;

    for (i, node) in nodes.iter().enumerate() {
        let change = node.change().expect("Node changes should be set");

        match change {
            Unchanged(_) => {
                // Could have just finished a novel region.
                if let Some(region) = region {
                    regions.push(region);
                }

                // Could be the unchanged node before a novel region.
                region = Some(vec![]);
            }
            Novel => {
                if let Some(mut r) = region {
                    r.push(i);
                    region = Some(r);
                }
            }
            ReplacedComment(_, _) => {
                // Could have just finished a novel region.
                if let Some(region) = region {
                    regions.push(region);
                }

                region = None;
            }
        }
    }

    if let Some(region) = region {
        regions.push(region);
    }

    regions
        .into_iter()
        .filter(|r| !r.is_empty())
        .map(|r| (*r.first().unwrap(), *r.last().unwrap()))
        .collect()
}

fn novel_regions_before_unchanged<'a>(nodes: &[&'a Syntax<'a>]) -> Vec<(usize, usize)> {
    let mut regions: Vec<Vec<usize>> = vec![];
    let mut region: Option<Vec<usize>> = None;

    for (i, node) in nodes.iter().enumerate() {
        let change = node.change().expect("Node changes should be set");

        match change {
            Unchanged(_) => {
                // Could have just finished a novel region.
                if let Some(region) = region {
                    regions.push(region);
                }

                region = None;
            }
            Novel => {
                let mut r = if let Some(r) = region { r } else { vec![] };
                r.push(i);
                region = Some(r);
            }
            ReplacedComment(_, _) => {
                region = None;
            }
        }
    }

    regions
        .into_iter()
        .filter(|r| !r.is_empty())
        .map(|r| (*r.first().unwrap(), *r.last().unwrap()))
        .collect()
}

fn is_novel_deep(node: &Syntax) -> bool {
    match node {
        List { info, children, .. } => {
            if !matches!(info.change.get(), Some(Novel)) {
                return false;
            }
            for child in children {
                if !is_novel_deep(child) {
                    return false;
                }
            }

            true
        }
        Atom { info, .. } => matches!(info.change.get(), Some(Novel)),
    }
}

fn is_unchanged_deep(node: &Syntax) -> bool {
    match node {
        List { info, children, .. } => {
            if !matches!(info.change.get(), Some(Unchanged(_))) {
                return false;
            }
            for child in children {
                if !is_unchanged_deep(child) {
                    return false;
                }
            }

            true
        }
        Atom { info, .. } => matches!(info.change.get(), Some(Unchanged(_))),
    }
}

fn slide_to_prev_node<'a>(nodes: &[&'a Syntax<'a>], start_idx: usize, end_idx: usize) {
    if start_idx == 0 {
        return;
    }
    if start_idx == end_idx {
        return;
    }

    let start_node = nodes[start_idx];
    let last_node = nodes[end_idx];
    let before_start_node = nodes[start_idx - 1];
    let before_last_node = nodes[end_idx - 1];

    if before_start_node.content_id() != last_node.content_id() {
        return;
    }

    let distance_to_before_start = distance_between(before_start_node, start_node);
    let distance_to_last = distance_between(before_last_node, last_node);

    if distance_to_before_start <= distance_to_last {
        // Deep checks walk the whole tree, so do these last.
        if !is_unchanged_deep(before_start_node) {
            return;
        }
        for node in &nodes[start_idx..=end_idx] {
            if !is_novel_deep(node) {
                return;
            }
        }

        let opposite = match before_start_node
            .change()
            .expect("Node changes should be set")
        {
            Unchanged(n) => n,
            _ => unreachable!(),
        };

        before_start_node.set_change_deep(Novel);
        last_node.set_change_deep(Unchanged(opposite));
        opposite.set_change_deep(Unchanged(last_node));
    }
}

fn slide_to_next_node<'a>(nodes: &[&'a Syntax<'a>], start_idx: usize, end_idx: usize) {
    if end_idx == nodes.len() - 1 {
        return;
    }
    if start_idx == end_idx {
        return;
    }

    let start_node = nodes[start_idx];
    let last_node = nodes[end_idx];
    let after_start_node = nodes[start_idx + 1];
    let after_last_node = nodes[end_idx + 1];

    if after_last_node.content_id() != start_node.content_id() {
        return;
    }

    let distance_to_start = distance_between(start_node, after_start_node);
    let distance_to_after_last = distance_between(last_node, after_last_node);

    if distance_to_after_last < distance_to_start {
        // Deep checks walk the whole tree, so do these last.
        if !is_unchanged_deep(after_last_node) {
            return;
        }
        for node in &nodes[start_idx..=end_idx] {
            if !is_novel_deep(node) {
                return;
            }
        }

        let opposite = match after_last_node
            .change()
            .expect("Node changes should be set")
        {
            Unchanged(n) => n,
            _ => unreachable!(),
        };

        start_node.set_change_deep(Unchanged(opposite));
        opposite.set_change_deep(Unchanged(start_node));
        after_last_node.set_change_deep(Novel);
    }
}

/// Return the distance between two syntax nodes, as a tuple of number
/// of lines and number of columns.
fn distance_between(prev: &Syntax, next: &Syntax) -> (usize, usize) {
    let prev_pos = prev.last_line_span();
    let next_pos = next.first_line_span();

    if let (Some(prev_pos), Some(next_pos)) = (prev_pos, next_pos) {
        if prev_pos.line != next_pos.line {
            return (next_pos.line.0 - prev_pos.line.0, 0);
        }

        return (0, next_pos.start_col - prev_pos.end_col);
    }

    (0, 0)
}

impl<'a> Syntax<'a> {
    fn first_line_span(&self) -> Option<SingleLineSpan> {
        match self {
            List {
                open_position,
                children,
                close_position,
                ..
            } => {
                if let Some(position) = open_position.first() {
                    return Some(*position);
                }
                for child in children {
                    if let Some(position) = child.first_line_span() {
                        return Some(position);
                    }
                }

                close_position.first().copied()
            }
            Atom { position, .. } => position.first().copied(),
        }
    }

    fn last_line_span(&self) -> Option<SingleLineSpan> {
        match self {
            List {
                open_position,
                children,
                close_position,
                ..
            } => {
                if let Some(position) = close_position.last() {
                    return Some(*position);
                }
                for child in children.iter().rev() {
                    if let Some(position) = child.last_line_span() {
                        return Some(position);
                    }
                }

                open_position.last().copied()
            }
            Atom { position, .. } => position.last().copied(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{
        guess_language,
        syntax::{init_all_info, AtomKind},
        tree_sitter_parser::{from_language, parse},
    };
    use pretty_assertions::assert_eq;
    use typed_arena::Arena;

    /// Test that we slide at the start if the unchanged node is
    /// closer than the trailing novel node.
    #[test]
    fn test_slider_at_start() {
        let arena = Arena::new();

        let line1a = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 1,
        }];
        let line1b = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 10,
            end_col: 11,
        }];
        let line2 = vec![SingleLineSpan {
            line: 1.into(),
            start_col: 3,
            end_col: 4,
        }];

        let lhs = [
            Syntax::new_atom(&arena, line1a, "a", AtomKind::Comment),
            Syntax::new_atom(&arena, line1b, "b", AtomKind::Comment),
            Syntax::new_atom(&arena, line2, "a", AtomKind::Comment),
        ];

        let pos = vec![SingleLineSpan {
            line: 99.into(),
            start_col: 1,
            end_col: 2,
        }];
        let rhs = [Syntax::new_atom(&arena, pos, "a", AtomKind::Comment)];

        init_all_info(&lhs, &rhs);

        lhs[0].set_change(Unchanged(rhs[0]));
        lhs[1].set_change(Novel);
        lhs[2].set_change(Novel);

        fix_all_sliders(guess_language::Language::EmacsLisp, &lhs);
        assert_eq!(lhs[0].change(), Some(Novel));
        assert_eq!(lhs[1].change(), Some(Novel));
        assert_eq!(lhs[2].change(), Some(Unchanged(rhs[0])));
        assert_eq!(rhs[0].change(), Some(Unchanged(lhs[2])));
    }

    /// Test that we slide at the end if the unchanged node is
    /// closer than the leading novel node.
    #[test]
    fn test_slider_at_end() {
        let arena = Arena::new();

        let line1 = vec![SingleLineSpan {
            line: 0.into(),
            start_col: 0,
            end_col: 1,
        }];
        let line2a = vec![SingleLineSpan {
            line: 1.into(),
            start_col: 10,
            end_col: 11,
        }];
        let line2b = vec![SingleLineSpan {
            line: 1.into(),
            start_col: 12,
            end_col: 13,
        }];

        let lhs = [
            Syntax::new_atom(&arena, line1, "a", AtomKind::Comment),
            Syntax::new_atom(&arena, line2a, "b", AtomKind::Comment),
            Syntax::new_atom(&arena, line2b, "a", AtomKind::Comment),
        ];

        let pos = vec![SingleLineSpan {
            line: 99.into(),
            start_col: 1,
            end_col: 2,
        }];
        let rhs = [Syntax::new_atom(&arena, pos, "a", AtomKind::Comment)];

        init_all_info(&lhs, &rhs);

        lhs[0].set_change(Novel);
        lhs[1].set_change(Novel);
        lhs[2].set_change(Unchanged(rhs[0]));

        fix_all_sliders(guess_language::Language::EmacsLisp, &lhs);
        assert_eq!(rhs[0].change(), Some(Unchanged(lhs[0])));
        assert_eq!(lhs[0].change(), Some(Unchanged(rhs[0])));
        assert_eq!(lhs[1].change(), Some(Novel));
        assert_eq!(lhs[2].change(), Some(Novel));
    }
    #[test]
    fn test_slider_two_steps() {
        let arena = Arena::new();
        let config = from_language(guess_language::Language::EmacsLisp);

        let lhs = parse(&arena, "A B", &config);
        let rhs = parse(&arena, "A B X\n A B", &config);
        init_all_info(&lhs, &rhs);

        rhs[0].set_change(Unchanged(lhs[0]));
        rhs[1].set_change(Unchanged(lhs[1]));
        rhs[2].set_change(Novel);
        rhs[3].set_change(Novel);
        rhs[4].set_change(Novel);

        fix_all_sliders(guess_language::Language::EmacsLisp, &rhs);
        assert_eq!(rhs[0].change(), Some(Novel));
        assert_eq!(rhs[1].change(), Some(Novel));
        assert_eq!(rhs[2].change(), Some(Novel));
        assert_eq!(rhs[3].change(), Some(Unchanged(rhs[0])));
    }
}
