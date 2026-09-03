//! Trimming tree-sitter highlighting queries to the parts difftastic uses.
//!
//! Building a tree-sitter query is expensive: tree-sitter analyses every
//! pattern against the grammar's parse states, and for a large grammar that
//! costs tens of milliseconds. Difftastic pays this on every run, so for a
//! small file it dominates: diffing a one-line Rust file spends about 90% of
//! its instructions inside `ts_query__perform_analysis`.
//!
//! Difftastic only looks at four kinds of capture (comments, strings,
//! keyword-ish things and types), and ignores every other capture that a
//! highlighting query produces. Patterns that capture nothing we care about
//! can be dropped before the query is built, which is most of the analysis
//! work for languages with detailed highlighting queries.

/// Is this capture name one that difftastic uses for highlighting?
///
/// Query names are often written with namespacing, so highlights.scm might
/// contain `@constant` or the more specific `@constant.builtin`.
pub(crate) fn is_relevant_capture(name: &str) -> bool {
    is_type_capture(name)
        || is_keyword_ish_capture(name)
        || is_string_capture(name)
        || is_comment_capture(name)
}

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

/// Return `src` with every pattern that captures nothing difftastic uses
/// removed.
///
/// Patterns in a tree-sitter query match independently of each other, so
/// dropping one doesn't affect the matches of the rest.
///
/// This is a textual transformation, so it can get the pattern boundaries
/// wrong on a query whose syntax we don't handle. That produces a query that
/// doesn't compile rather than one that silently matches differently, and
/// [`build`] falls back to the original source in that case.
pub(crate) fn retain_relevant_patterns(src: &str) -> String {
    let b = src.as_bytes();
    let n = b.len();
    let mut out = String::with_capacity(src.len());
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
            b'(' | b'[' => {
                let mut depth = 0_usize;
                while i < n {
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
                                i += 1;
                                break;
                            }
                        }
                        _ => {}
                    }
                    i += 1;
                }
            }
            b'"' => i = skip_string(b, i),
            // A bare word, such as `_`. Not valid as a whole pattern, but
            // consuming it keeps us making progress.
            _ => {
                while i < n && !matches!(b[i], b' ' | b'\t' | b'\r' | b'\n' | b'(' | b')' | b'[' | b']')
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

        let pattern = &src[start..i];
        if has_relevant_capture(pattern) {
            out.push_str(pattern);
            out.push('\n');
        }
    }

    out
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

/// Skip past `@some.capture-name`, given the index of the `@`.
fn skip_capture_name(b: &[u8], mut i: usize) -> usize {
    i += 1; // The '@'.
    while i < b.len() && (b[i].is_ascii_alphanumeric() || matches!(b[i], b'.' | b'_' | b'-')) {
        i += 1;
    }
    i
}

/// Does this pattern have any capture that difftastic uses?
///
/// Captures also occur inside predicates, e.g. the `@constant` in
/// `(#match? @constant "^[A-Z]")`, which is harmless: they name a capture
/// that appears in the same pattern.
fn has_relevant_capture(pattern: &str) -> bool {
    let b = pattern.as_bytes();
    let mut i = 0;
    while i < b.len() {
        match b[i] {
            b'"' => i = skip_string(b, i),
            b'@' => {
                let end = skip_capture_name(b, i);
                if is_relevant_capture(&pattern[i + 1..end]) {
                    return true;
                }
                i = end;
            }
            _ => i += 1,
        }
    }
    false
}

#[cfg(test)]
mod tests {
    use super::*;

    fn patterns(src: &str) -> Vec<String> {
        retain_relevant_patterns(src)
            .lines()
            .map(|l| l.to_owned())
            .collect()
    }

    #[test]
    fn drops_irrelevant_patterns() {
        let src = r#"
(type_identifier) @type
(field_identifier) @property
"fn" @keyword
"(" @punctuation.bracket
"#;
        assert_eq!(
            patterns(src),
            vec!["(type_identifier) @type", "\"fn\" @keyword"]
        );
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
            patterns(src),
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
        assert_eq!(patterns(src), vec!["(x) @keyword"]);
    }

    #[test]
    fn empty_query() {
        assert_eq!(retain_relevant_patterns(""), "");
    }
}
