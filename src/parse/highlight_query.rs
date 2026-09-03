//! Trimming tree-sitter highlighting queries to the parts difftastic uses.
//!
//! Building a tree-sitter query is expensive: tree-sitter analyses every
//! pattern against the grammar's parse states, and for a large grammar that
//! costs tens of milliseconds. Difftastic pays this on every run, so for a
//! small file it dominates: diffing a one-line Rust file spent about 90% of
//! its instructions inside `ts_query__perform_analysis`.
//!
//! `tree_highlights` reduces every capture to one of four buckets and discards
//! the rest, so most of that analysis is for captures we never read. Two kinds
//! of pattern can be dropped before the query is built:
//!
//! - those with no capture in any bucket at all, e.g. `@punctuation.bracket`;
//! - those whose every capture is on a node kind that a simpler pattern
//!   already puts in the same bucket unconditionally. `(type_identifier)
//!   @type` puts every `type_identifier` in the type bucket, so
//!   `(struct_pattern type: (scoped_type_identifier name: (type_identifier)
//!   @constructor))` cannot add anything.
//!
//! Both are safe because patterns in a tree-sitter query match independently:
//! dropping one cannot change the matches of the others, and the cursor's
//! capture list pool is unbounded by default, so no match is dropped for want
//! of room.

use crate::hash::DftHashMap;

pub(crate) const BUCKET_TYPE: u8 = 1 << 0;
pub(crate) const BUCKET_KEYWORD: u8 = 1 << 1;
pub(crate) const BUCKET_STRING: u8 = 1 << 2;
pub(crate) const BUCKET_COMMENT: u8 = 1 << 3;

/// Which of difftastic's highlighting buckets this capture name belongs to.
///
/// This mirrors the classification in `tree_highlights`, the only consumer of
/// highlighting captures, so the two cannot disagree about which captures
/// matter.
pub(crate) fn capture_buckets(name: &str) -> u8 {
    let mut buckets = 0;
    if is_type_capture(name) {
        buckets |= BUCKET_TYPE;
    } else if is_keyword_ish_capture(name) {
        buckets |= BUCKET_KEYWORD;
    }
    if is_string_capture(name) {
        buckets |= BUCKET_STRING;
    }
    if is_comment_capture(name) {
        buckets |= BUCKET_COMMENT;
    }
    buckets
}

/// Query names are often written with namespacing, so highlights.scm might
/// contain `@constant` or the more specific `@constant.builtin`. We support
/// arbitrary `@constant.foo` so we get the benefit of all the relevant
/// highlighting queries.
pub(crate) fn is_type_capture(name: &str) -> bool {
    name == "type"
        || name.starts_with("type.")
        || name.starts_with("storage.type.")
        || name.starts_with("keyword.type.")
        || name == "tag"
        || name == "constructor"
        // Rust uses 'label' for lifetimes, and highlighting lifetimes
        // consistently with types seems reasonable.
        || name == "label"
}

pub(crate) fn is_keyword_ish_capture(name: &str) -> bool {
    name == "keyword"
        || name.starts_with("keyword.")
        || name == "constant"
        || name.starts_with("constant.")
        || name == "operator"
        || name == "repeat"
        || name == "conditional"
        || name == "boolean"
        || name == "exception"
        || name == "include"
}

pub(crate) fn is_string_capture(name: &str) -> bool {
    name == "string"
        || name.starts_with("string.")
        || name == "character"
        || name.starts_with("character.")
}

pub(crate) fn is_comment_capture(name: &str) -> bool {
    name == "comment" || name.starts_with("comment.")
}

/// Return `src` with the patterns that cannot affect difftastic's output
/// removed.
///
/// This is a textual transformation, so it can get the pattern boundaries
/// wrong on a query whose syntax it doesn't handle. That produces a query that
/// doesn't compile rather than one that silently matches differently, and the
/// caller falls back to the original source in that case.
pub(crate) fn retain_relevant_patterns(src: &str) -> String {
    let patterns = split_patterns(src);

    // Which node kinds does a whole-node pattern already put in which buckets?
    let mut covered: DftHashMap<&str, u8> = DftHashMap::default();
    for pattern in &patterns {
        if let Some((kind, capture)) = whole_node_pattern(pattern) {
            *covered.entry(kind).or_default() |= capture_buckets(capture);
        }
    }

    let mut out = String::with_capacity(src.len());
    for pattern in &patterns {
        if is_useful(pattern, &covered) {
            out.push_str(pattern);
            out.push('\n');
        }
    }
    out
}

fn is_useful(pattern: &str, covered: &DftHashMap<&str, u8>) -> bool {
    let captures = bucketed_captures(pattern);
    if captures.is_empty() {
        return false;
    }

    // Keep the whole-node patterns themselves: they're what makes the others
    // redundant.
    if whole_node_pattern(pattern).is_some() {
        return true;
    }

    captures.iter().any(|(buckets, kind)| match kind {
        Some(kind) => covered.get(kind).is_none_or(|c| c & buckets != *buckets),
        // We couldn't tell what the capture is on, so assume it matters.
        None => true,
    })
}

/// Split a query into its top-level patterns.
fn split_patterns(src: &str) -> Vec<&str> {
    let b = src.as_bytes();
    let n = b.len();
    let mut patterns = vec![];
    let mut i = 0;

    while i < n {
        match b[i] {
            b' ' | b'\t' | b'\r' | b'\n' => {
                i += 1;
                continue;
            }
            b';' => {
                i = skip_line_comment(b, i);
                continue;
            }
            _ => {}
        }

        let start = i;
        match b[i] {
            b'(' | b'[' => i = skip_group(b, i),
            b'"' => i = skip_string(b, i),
            // A bare word, such as `_`. Not a valid pattern on its own, but
            // consuming it keeps us making progress.
            _ => {
                while i < n
                    && !matches!(b[i], b' ' | b'\t' | b'\r' | b'\n' | b'(' | b')' | b'[' | b']')
                {
                    i += 1;
                }
            }
        }

        // A pattern is followed by any quantifiers and captures that apply to
        // it, e.g. the `@keyword` in `"if" @keyword`.
        loop {
            let mut j = i;
            while j < n && matches!(b[j], b' ' | b'\t' | b'\r' | b'\n') {
                j += 1;
            }
            if j < n && matches!(b[j], b'?' | b'*' | b'+') {
                i = j + 1;
                continue;
            }
            if j < n && b[j] == b'@' {
                i = skip_capture_name(b, j);
                continue;
            }
            break;
        }

        patterns.push(&src[start..i]);
    }

    patterns
}

/// If this pattern captures a whole node of one kind with no other
/// constraints, return that kind and the capture name.
///
/// Such a pattern matches every node of that kind anywhere in the tree, e.g.
/// `(line_comment) @comment` or `"fn" @keyword`. The kind is returned as
/// written, so the anonymous token `"fn"` can't be confused with a named node
/// called `fn`.
fn whole_node_pattern(pattern: &str) -> Option<(&str, &str)> {
    let pattern = pattern.trim();
    let b = pattern.as_bytes();

    // The kind is spelled as it appears in `bucketed_captures`: a named node
    // by its name, an anonymous token with its quotes, so the two can't
    // collide.
    let (kind, kind_end) = match *b.first()? {
        b'"' => {
            let end = skip_string(b, 0);
            (&pattern[..end], end)
        }
        b'(' => {
            let end = skip_group(b, 0);
            // Reject anything with children, fields, predicates or wildcards.
            let inner = pattern[1..end - 1].trim();
            if inner.is_empty()
                || inner == "_"
                || !inner.bytes().all(|c| c.is_ascii_alphanumeric() || c == b'_')
            {
                return None;
            }
            (inner, end)
        }
        _ => return None,
    };

    let capture = pattern[kind_end..].trim_start().strip_prefix('@')?;
    if capture.is_empty() || !capture.bytes().all(is_capture_char) {
        return None;
    }

    Some((kind, capture))
}

/// The captures in this pattern that difftastic reads, each with the node kind
/// it is attached to.
///
/// Captures inside predicates, e.g. the `@constant` in `(#match? @constant
/// "^[A-Z]")`, are skipped: they refer back to a capture written elsewhere in
/// the same pattern.
fn bucketed_captures(pattern: &str) -> Vec<(u8, Option<&str>)> {
    let b = pattern.as_bytes();
    let n = b.len();
    let mut captures = vec![];

    // The most recently completed expression, which is what a capture attaches
    // to. `(a (b) @x)` captures a `b` node; `(a (b)) @x` captures an `a` node.
    let mut last_kind: Option<&str> = None;
    // Depth of the innermost predicate we're inside, if any.
    let mut predicate_depth: Option<usize> = None;
    let mut depth = 0_usize;
    let mut group_starts: Vec<usize> = vec![];
    let mut i = 0;

    while i < n {
        match b[i] {
            b'"' => {
                let end = skip_string(b, i);
                last_kind = Some(&pattern[i..end]);
                i = end;
            }
            b';' => i = skip_line_comment(b, i),
            b'(' | b'[' => {
                group_starts.push(i);
                depth += 1;
                if predicate_depth.is_none() && b[i] == b'(' && group_is_predicate(b, i) {
                    predicate_depth = Some(depth);
                }
                i += 1;
            }
            b')' | b']' => {
                last_kind = group_starts.pop().and_then(|start| node_kind(pattern, start));
                if predicate_depth == Some(depth) {
                    predicate_depth = None;
                }
                depth = depth.saturating_sub(1);
                i += 1;
            }
            b'@' => {
                let end = skip_capture_name(b, i);
                if predicate_depth.is_none() {
                    let buckets = capture_buckets(&pattern[i + 1..end]);
                    if buckets != 0 {
                        captures.push((buckets, last_kind));
                    }
                }
                i = end;
            }
            _ => i += 1,
        }
    }

    captures
}

/// The node kind named by the group starting at `start`, if it names one.
/// `[...]` alternations and `(_)` wildcards don't.
fn node_kind(pattern: &str, start: usize) -> Option<&str> {
    let b = pattern.as_bytes();
    if b[start] != b'(' {
        return None;
    }
    let mut i = start + 1;
    while i < b.len() && matches!(b[i], b' ' | b'\t' | b'\r' | b'\n') {
        i += 1;
    }
    let name_start = i;
    while i < b.len() && (b[i].is_ascii_alphanumeric() || b[i] == b'_') {
        i += 1;
    }
    let name = &pattern[name_start..i];
    if name.is_empty() || name == "_" {
        return None;
    }
    Some(name)
}

/// Is the group starting at `start` a predicate, e.g. `(#match? ...)`?
fn group_is_predicate(b: &[u8], start: usize) -> bool {
    let mut i = start + 1;
    while i < b.len() && matches!(b[i], b' ' | b'\t' | b'\r' | b'\n') {
        i += 1;
    }
    b.get(i) == Some(&b'#')
}

/// Skip a `(...)` or `[...]` group, given the index of its opening bracket.
fn skip_group(b: &[u8], mut i: usize) -> usize {
    let mut depth = 0_usize;
    while i < b.len() {
        match b[i] {
            b'"' => {
                i = skip_string(b, i);
                continue;
            }
            b';' => {
                i = skip_line_comment(b, i);
                continue;
            }
            b'(' | b'[' => depth += 1,
            b')' | b']' => {
                depth -= 1;
                if depth == 0 {
                    return i + 1;
                }
            }
            _ => {}
        }
        i += 1;
    }
    i
}

fn skip_line_comment(b: &[u8], mut i: usize) -> usize {
    while i < b.len() && b[i] != b'\n' {
        i += 1;
    }
    i
}

fn skip_string(b: &[u8], mut i: usize) -> usize {
    i += 1; // The opening quote.
    while i < b.len() {
        match b[i] {
            b'\\' => i += 2,
            b'"' => return i + 1,
            _ => i += 1,
        }
    }
    i
}

fn is_capture_char(c: u8) -> bool {
    c.is_ascii_alphanumeric() || matches!(c, b'.' | b'_' | b'-')
}

/// Skip past `@some.capture-name`, given the index of the `@`.
fn skip_capture_name(b: &[u8], mut i: usize) -> usize {
    i += 1; // The '@'.
    while i < b.len() && is_capture_char(b[i]) {
        i += 1;
    }
    i
}

#[cfg(test)]
mod tests {
    use super::*;

    fn kept(src: &str) -> Vec<String> {
        retain_relevant_patterns(src)
            .lines()
            .map(|l| l.to_owned())
            .collect()
    }

    #[test]
    fn drops_patterns_with_no_relevant_capture() {
        let src = "(type_identifier) @type\n(field_identifier) @property\n\"fn\" @keyword\n\"(\" @punctuation.bracket\n";
        assert_eq!(kept(src), vec!["(type_identifier) @type", "\"fn\" @keyword"]);
    }

    #[test]
    fn keeps_multiline_patterns_with_predicates() {
        let src = "((identifier) @constant\n (#match? @constant \"^[A-Z]\"))\n(x) @property\n";
        assert_eq!(
            retain_relevant_patterns(src),
            "((identifier) @constant\n (#match? @constant \"^[A-Z]\"))\n"
        );
    }

    #[test]
    fn keeps_pattern_with_one_relevant_capture() {
        let src = "(call (name) @function (arg) @string)\n";
        assert_eq!(retain_relevant_patterns(src), src);
    }

    #[test]
    fn handles_alternations_and_quantifiers() {
        let src = "[\"if\" \"else\"] @keyword\n(comment)+ @comment\n(x) @property\n";
        assert_eq!(
            kept(src),
            vec!["[\"if\" \"else\"] @keyword", "(comment)+ @comment"]
        );
    }

    #[test]
    fn ignores_captures_inside_strings() {
        let src = "((x) @operator (#match? @operator \"@property\"))\n";
        assert_eq!(retain_relevant_patterns(src), src);
    }

    #[test]
    fn skips_comments_between_patterns() {
        let src = "; a comment with (parens\n(x) @keyword\n; another\n(y) @property\n";
        assert_eq!(kept(src), vec!["(x) @keyword"]);
    }

    #[test]
    fn empty_query() {
        assert_eq!(retain_relevant_patterns(""), "");
    }

    #[test]
    fn drops_patterns_covered_by_a_whole_node_pattern() {
        // Every type_identifier is already a type, so the nested pattern can't
        // add anything.
        let src = "(type_identifier) @type\n(struct_pattern type: (scoped_type_identifier name: (type_identifier) @constructor))\n";
        assert_eq!(kept(src), vec!["(type_identifier) @type"]);
    }

    #[test]
    fn drops_outer_capture_covered_by_a_whole_node_pattern() {
        let src = "(line_comment) @comment\n(line_comment (doc_comment)) @comment.documentation\n";
        assert_eq!(kept(src), vec!["(line_comment) @comment"]);
    }

    #[test]
    fn keeps_pattern_when_the_bucket_differs() {
        // (self) is only covered for the string bucket, so the keyword capture
        // still matters.
        let src = "(self) @string\n(scoped_identifier (self) @keyword)\n";
        assert_eq!(
            kept(src),
            vec!["(self) @string", "(scoped_identifier (self) @keyword)"]
        );
    }

    #[test]
    fn keeps_pattern_on_an_uncovered_kind() {
        let src = "(type_identifier) @type\n((identifier) @type (#match? @type \"^[A-Z]\"))\n";
        assert_eq!(kept(src).len(), 2);
    }

    #[test]
    fn whole_node_pattern_rejects_constrained_patterns() {
        assert_eq!(whole_node_pattern("(a) @type"), Some(("a", "type")));
        assert_eq!(
            whole_node_pattern("\"fn\" @keyword"),
            Some(("\"fn\"", "keyword"))
        );
        assert_eq!(whole_node_pattern("(a (b)) @type"), None);
        assert_eq!(whole_node_pattern("(a) @type @keyword"), None);
        assert_eq!(whole_node_pattern("[(a) (b)] @type"), None);
        assert_eq!(whole_node_pattern("(a)"), None);
        assert_eq!(whole_node_pattern("(_) @type"), None);
    }
}
