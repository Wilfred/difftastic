//! A fallback "parser" for plain text.

use typed_arena::Arena;

use crate::{positions::SingleLineSpan, syntax::Syntax};

/// Split `s` by lines, and treat each line as an atom.
///
/// This is a fallback for files that we don't know how to parse.
pub fn parse<'a>(arena: &'a Arena<Syntax<'a>>, s: &str) -> Vec<&'a Syntax<'a>> {
    let mut res = vec![];
    // TODO: This scales poorly to large files (e.g. parser.c
    // changes). Consider grouping Syntax items into lists when we
    // encounter blank lines.
    for (i, line) in s.lines().enumerate() {
        // Mark each line as a comment atom, so we get word-level diffs.
        // TODO: this is very hot on large files, such as parser.c,
        // because we spend ~65% of execution time computing
        // levenshtein distance.
        res.push(Syntax::new_comment(
            arena,
            vec![SingleLineSpan {
                line: i.into(),
                start_col: 0,
                end_col: line.len(),
            }],
            line,
        ));
    }

    res
}

#[cfg(test)]
mod tests {
    use super::*;
    use Syntax::*;

    fn assert_syntaxes<'a>(actual: &[&'a Syntax<'a>], expected: &[&'a Syntax<'a>]) {
        if !syntaxes_match(actual, expected) {
            dbg!(expected, actual);
            assert!(false);
        }
    }

    fn syntaxes_match<'a>(actual: &[&'a Syntax<'a>], expected: &[&'a Syntax<'a>]) -> bool {
        if actual.len() != expected.len() {
            return false;
        } else {
            for (lhs_child, rhs_child) in actual.iter().zip(expected.iter()) {
                if !syntax_matches(lhs_child, rhs_child) {
                    return false;
                }
            }
        }
        true
    }

    /// Compare all the fields in a Syntax value, not just
    /// those used in its Eq implementation.
    fn syntax_matches<'a>(actual: &'a Syntax<'a>, expected: &'a Syntax<'a>) -> bool {
        match (actual, expected) {
            (
                List {
                    open_position: lhs_open_position,
                    open_content: lhs_start_content,
                    children: lhs_children,
                    close_content: lhs_end_content,
                    close_position: lhs_close_position,
                    num_descendants: lhs_num_descendants,
                    ..
                },
                List {
                    open_position: rhs_open_position,
                    open_content: rhs_start_content,
                    children: rhs_children,
                    close_content: rhs_end_content,
                    close_position: rhs_close_position,
                    num_descendants: rhs_num_descendants,
                    ..
                },
            ) => {
                if actual.change() != expected.change() {
                    dbg!(actual.change(), expected.change());
                    return false;
                }
                if lhs_open_position != rhs_open_position {
                    dbg!(lhs_open_position, rhs_open_position);
                    return false;
                }

                if lhs_start_content != rhs_start_content {
                    dbg!(lhs_start_content, rhs_start_content);
                    return false;
                }
                if lhs_end_content != rhs_end_content {
                    dbg!(lhs_end_content, rhs_end_content);
                    return false;
                }
                if lhs_close_position != rhs_close_position {
                    dbg!(lhs_close_position, rhs_close_position);
                    return false;
                }

                if lhs_num_descendants != rhs_num_descendants {
                    dbg!(lhs_num_descendants, rhs_num_descendants);
                    return false;
                }

                if !syntaxes_match(lhs_children, rhs_children) {
                    return false;
                }
            }
            (
                Atom {
                    position: lhs_position,
                    content: lhs_content,
                    is_comment: lhs_is_comment,
                    ..
                },
                Atom {
                    position: rhs_position,
                    content: rhs_content,
                    is_comment: rhs_is_comment,
                    ..
                },
            ) => {
                if actual.change() != expected.change() {
                    dbg!(actual.change(), expected.change());
                    return false;
                }
                if lhs_position != rhs_position {
                    dbg!(lhs_position, rhs_position);
                    return false;
                }

                if lhs_content != rhs_content {
                    dbg!(lhs_content, rhs_content);
                    return false;
                }
                if lhs_is_comment != rhs_is_comment {
                    dbg!(lhs_is_comment, rhs_is_comment);
                    return false;
                }
            }
            _ => {
                return false;
            }
        }
        true
    }

    #[test]
    fn test_parse_lines() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "foo\nbar"),
            &[
                Syntax::new_comment(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 3,
                    }],
                    "foo",
                ),
                Syntax::new_comment(
                    &arena,
                    vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 3,
                    }],
                    "bar",
                ),
            ],
        );
    }
}
