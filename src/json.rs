use crate::lines::AbsoluteRange;
use crate::tree_diff::{AtomKind, Syntax};
use regex::Regex;

#[derive(Debug, Clone)]
struct ParseState {
    str_i: usize,
    close_brace: Option<(String, AbsoluteRange)>,
}

impl ParseState {
    fn new() -> Self {
        ParseState {
            str_i: 0,
            close_brace: None,
        }
    }
}

fn parse_json_from(s: &str, state: &mut ParseState) -> Vec<Syntax> {
    let atom_patterns = &[
        // Single-line comments
        (Regex::new(r#"^//.*(\n|$)"#).unwrap(), AtomKind::Comment),
        // Multi-line comments
        (Regex::new(r#"^/\*(?s:.)*?\*/"#).unwrap(), AtomKind::Comment),
        // Numbers
        (Regex::new(r#"^[0-9]+"#).unwrap(), AtomKind::Other),
        // Symbols (e.g. variable names)
        (Regex::new(r#"^[.a-zA-Z0-9_]+"#).unwrap(), AtomKind::Other),
        // Operators
        (Regex::new(r#"^[=<>/*+-]+"#).unwrap(), AtomKind::Other),
        // String literals
        (Regex::new(r#"^"[^"]*""#).unwrap(), AtomKind::String),
    ];

    let open_delimiter = Regex::new(r#"^(\[|\{|\()"#).unwrap();
    let close_delimiter = Regex::new(r#"^(\]|\}|\))"#).unwrap();

    let mut result = vec![];

    'outer: while state.str_i < s.len() {
        for (pattern, kind) in atom_patterns {
            match pattern.find(&s[state.str_i..]) {
                Some(m) => {
                    assert_eq!(m.start(), 0);
                    let position = AbsoluteRange {
                        start: state.str_i,
                        end: state.str_i + m.end(),
                    };
                    let atom = Syntax::new_atom(position, m.as_str(), *kind);
                    result.push(atom);
                    state.str_i += m.end();
                    continue 'outer;
                }
                None => {}
            }
        }

        match open_delimiter.find(&s[state.str_i..]) {
            Some(m) => {
                let start = state.str_i;

                state.str_i += m.end();
                let children = parse_json_from(s, state);
                let (close_brace, close_pos) = state.close_brace.take().unwrap_or((
                    "UNCLOSED".into(),
                    AbsoluteRange {
                        start: state.str_i,
                        end: state.str_i + 1,
                    },
                ));

                let open_pos = AbsoluteRange {
                    start,
                    end: start + m.end(),
                };
                let items =
                    Syntax::new_list(m.as_str(), open_pos, children, &close_brace, close_pos);
                result.push(items);
                continue;
            }
            None => {}
        };

        match close_delimiter.find(&s[state.str_i..]) {
            Some(m) => {
                state.close_brace = Some((
                    m.as_str().into(),
                    AbsoluteRange {
                        start: state.str_i,
                        end: state.str_i + m.end(),
                    },
                ));
                state.str_i += m.end();
                return result;
            }
            None => {}
        };

        state.str_i += 1;
    }

    return result;
}

pub fn parse_json(s: &str) -> Vec<Syntax> {
    parse_json_from(s, &mut ParseState::new())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::tree_diff::set_changed;
    use crate::tree_diff::ChangeKind::*;
    use crate::tree_diff::Syntax::*;
    use std::cell::Cell;

    fn assert_syntaxes(actual: &[Syntax], expected: &[Syntax]) {
        if actual.len() != expected.len() {
            dbg!(actual, expected);
            assert!(false);
        } else {
            for (lhs_child, rhs_child) in actual.iter().zip(expected.iter()) {
                assert_syntax(lhs_child, rhs_child);
            }
        }
    }

    /// Compare all the fields in a Syntax value, not just
    /// those used in its Eq implementation.
    fn assert_syntax(actual: &Syntax, expected: &Syntax) {
        let mut matches = true;
        match (actual, expected) {
            (
                List {
                    change: lhs_change,
                    open_position: lhs_open_position,
                    open_delimiter: lhs_start_content,
                    children: lhs_children,
                    close_delimiter: lhs_end_content,
                    close_position: lhs_close_position,
                    num_descendants: lhs_num_descendants,
                },
                List {
                    change: rhs_change,
                    open_position: rhs_open_position,
                    open_delimiter: rhs_start_content,
                    children: rhs_children,
                    close_delimiter: rhs_end_content,
                    close_position: rhs_close_position,
                    num_descendants: rhs_num_descendants,
                },
            ) => {
                if lhs_change != rhs_change {
                    dbg!(lhs_change, rhs_change);
                    matches = false;
                }
                if lhs_open_position != rhs_open_position {
                    dbg!(lhs_open_position, rhs_open_position);
                    matches = false;
                }

                if lhs_start_content != rhs_start_content {
                    dbg!(lhs_start_content, rhs_start_content);
                    matches = false;
                }
                if lhs_end_content != rhs_end_content {
                    dbg!(lhs_end_content, rhs_end_content);
                    matches = false;
                }
                if lhs_close_position != rhs_close_position {
                    dbg!(lhs_close_position, rhs_close_position);
                    matches = false;
                }

                if lhs_num_descendants != rhs_num_descendants {
                    dbg!(lhs_num_descendants, rhs_num_descendants);
                    matches = false;
                }

                assert_syntaxes(lhs_children, rhs_children);
            }
            (
                Atom {
                    change: lhs_change,
                    position: lhs_position,
                    content: lhs_content,
                    kind: lhs_kind,
                },
                Atom {
                    change: rhs_change,
                    position: rhs_position,
                    content: rhs_content,
                    kind: rhs_kind,
                },
            ) => {
                if lhs_change != rhs_change {
                    dbg!(lhs_change, rhs_change);
                    matches = false;
                }
                if lhs_position != rhs_position {
                    dbg!(lhs_position, rhs_position);
                    matches = false;
                }

                if lhs_content != rhs_content {
                    dbg!(lhs_content, rhs_content);
                    matches = false;
                }
                if lhs_kind != rhs_kind {
                    dbg!(lhs_kind, rhs_kind);
                    matches = false;
                }
            }
            _ => {
                matches = false;
            }
        }
        if !matches {
            dbg!(actual, expected);
            assert!(false);
        }
    }

    #[test]
    fn test_parse_integer() {
        assert_syntaxes(
            &parse_json("123"),
            &[Syntax::new_atom(
                AbsoluteRange { start: 0, end: 3 },
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_empty_string() {
        assert_syntaxes(
            &parse_json("\"\""),
            &[Syntax::new_atom(
                AbsoluteRange { start: 0, end: 2 },
                "\"\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_multiple() {
        assert_syntaxes(
            &parse_json("123 456"),
            &[
                Syntax::new_atom(AbsoluteRange { start: 0, end: 3 }, "123", AtomKind::Other),
                Syntax::new_atom(AbsoluteRange { start: 4, end: 7 }, "456", AtomKind::Other),
            ],
        );
    }

    #[test]
    fn test_parse_symbol() {
        assert_syntaxes(
            &parse_json(".foo"),
            &[Syntax::new_atom(
                AbsoluteRange { start: 0, end: 4 },
                ".foo",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_integer_with_whitespace() {
        assert_syntaxes(
            &parse_json(" 123 "),
            &[Syntax::new_atom(
                AbsoluteRange { start: 1, end: 4 },
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_string() {
        assert_syntaxes(
            &parse_json("\"abc\""),
            &[Syntax::new_atom(
                AbsoluteRange { start: 0, end: 5 },
                "\"abc\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_comment() {
        assert_syntaxes(
            &parse_json("// foo\nx"),
            &[
                Syntax::new_atom(
                    AbsoluteRange { start: 0, end: 7 },
                    "// foo\n",
                    AtomKind::Comment,
                ),
                Syntax::new_atom(AbsoluteRange { start: 7, end: 8 }, "x", AtomKind::Other),
            ],
        );
    }

    #[test]
    fn test_parse_multiline_comment() {
        assert_syntaxes(
            &parse_json("/* foo\nbar */"),
            &[Syntax::new_atom(
                AbsoluteRange { start: 0, end: 13 },
                "/* foo\nbar */",
                AtomKind::Comment,
            )],
        );
    }

    #[test]
    fn test_parse_list() {
        assert_syntaxes(
            &parse_json("[ 123 ]"),
            &[Syntax::new_list(
                "[",
                AbsoluteRange { start: 0, end: 1 },
                vec![Syntax::new_atom(
                    AbsoluteRange { start: 2, end: 5 },
                    "123",
                    AtomKind::Other,
                )],
                "]",
                AbsoluteRange { start: 6, end: 7 },
            )],
        );
    }
    #[test]
    fn test_parse_empty_list() {
        assert_syntaxes(
            &parse_json("[]"),
            &[Syntax::new_list(
                "[",
                AbsoluteRange { start: 0, end: 1 },
                vec![],
                "]",
                AbsoluteRange { start: 1, end: 2 },
            )],
        );
    }

    #[test]
    fn test_parse_parens() {
        assert_syntaxes(
            &parse_json("()"),
            &[Syntax::new_list(
                "(",
                AbsoluteRange { start: 0, end: 1 },
                vec![],
                ")",
                AbsoluteRange { start: 1, end: 2 },
            )],
        );
    }

    #[test]
    fn test_parse_list_with_commas() {
        assert_syntaxes(
            &parse_json("[123, 456]"),
            &[Syntax::new_list(
                "[",
                AbsoluteRange { start: 0, end: 1 },
                vec![
                    Syntax::new_atom(AbsoluteRange { start: 1, end: 4 }, "123", AtomKind::Other),
                    Syntax::new_atom(AbsoluteRange { start: 6, end: 9 }, "456", AtomKind::Other),
                ],
                "]",
                AbsoluteRange { start: 9, end: 10 },
            )],
        );
    }

    #[test]
    fn test_parse_object() {
        assert_syntaxes(
            &parse_json("{x: 1}"),
            &[Syntax::new_list(
                "{",
                AbsoluteRange { start: 0, end: 1 },
                vec![
                    Syntax::new_atom(AbsoluteRange { start: 1, end: 2 }, "x", AtomKind::Other),
                    Syntax::new_atom(AbsoluteRange { start: 4, end: 5 }, "1", AtomKind::Other),
                ],
                "}",
                AbsoluteRange { start: 5, end: 6 },
            )],
        );
    }

    #[test]
    fn test_add_duplicate_node() {
        let lhs = parse_json("a");
        let rhs = parse_json("a a");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Unchanged),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Added),
                content: "a".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&expected_rhs, &rhs);
    }

    #[test]
    fn test_add_subtree() {
        let lhs = parse_json("[a]");
        let rhs = parse_json("[a a]");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![List {
            change: Cell::new(Unchanged),
            open_position: AbsoluteRange { start: 0, end: 1 },
            open_delimiter: "[".into(),
            close_position: AbsoluteRange { start: 4, end: 5 },
            close_delimiter: "]".into(),
            children: vec![
                Atom {
                    position: AbsoluteRange { start: 1, end: 2 },
                    change: Cell::new(Unchanged),
                    content: "a".into(),
                    kind: AtomKind::Other,
                },
                Atom {
                    position: AbsoluteRange { start: 3, end: 4 },
                    change: Cell::new(Added),
                    content: "a".into(),
                    kind: AtomKind::Other,
                },
            ],
            num_descendants: 2,
        }];
        assert_syntaxes(&expected_rhs, &rhs);
    }

    /// Moving a subtree should consume its children, so further uses
    /// of children of that subtree is not a move.
    ///
    /// [], [1] -> [[1]], 1
    ///
    /// In this example, the second instance of 1 is an addition.
    #[test]
    fn test_add_subsubtree() {
        let lhs = parse_json("[] [1]");
        let rhs = parse_json("[[1]] 1");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            List {
                open_delimiter: "[".into(),
                open_position: AbsoluteRange { start: 0, end: 1 },
                close_position: AbsoluteRange { start: 4, end: 5 },
                close_delimiter: "]".into(),
                change: Cell::new(Unchanged),
                children: vec![List {
                    change: Cell::new(Moved),
                    open_delimiter: "[".into(),
                    open_position: AbsoluteRange { start: 1, end: 2 },
                    close_position: AbsoluteRange { start: 3, end: 4 },
                    close_delimiter: "]".into(),
                    children: vec![Atom {
                        position: AbsoluteRange { start: 2, end: 3 },
                        change: Cell::new(Moved),
                        content: "1".into(),
                        kind: AtomKind::Other,
                    }],
                    num_descendants: 1,
                }],
                num_descendants: 2,
            },
            Atom {
                position: AbsoluteRange { start: 6, end: 7 },
                change: Cell::new(Added),
                content: "1".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&expected_rhs, &rhs);
    }

    /// Moving a subtree should consume its children, so further uses
    /// of children of that subtree is not a move.
    ///
    /// [], [1] -> 1, [[1]]
    ///
    /// In this example, the first instance of 1 is an addition.
    #[test]
    fn test_add_subsubtree_atom_first() {
        let lhs = parse_json("[] [1]");
        let rhs = parse_json("1 [[1]]");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Added),
                content: "1".into(),
                kind: AtomKind::Other,
            },
            List {
                open_delimiter: "[".into(),
                open_position: AbsoluteRange { start: 2, end: 3 },
                close_delimiter: "]".into(),
                close_position: AbsoluteRange { start: 6, end: 7 },
                change: Cell::new(Unchanged),
                children: vec![List {
                    change: Cell::new(Moved),
                    open_position: AbsoluteRange { start: 3, end: 4 },
                    open_delimiter: "[".into(),
                    close_position: AbsoluteRange { start: 5, end: 6 },
                    close_delimiter: "]".into(),
                    children: vec![Atom {
                        position: AbsoluteRange { start: 4, end: 5 },
                        change: Cell::new(Moved),
                        content: "1".into(),
                        kind: AtomKind::Other,
                    }],
                    num_descendants: 1,
                }],
                num_descendants: 2,
            },
        ];
        assert_syntaxes(&expected_rhs, &rhs);
    }
}
