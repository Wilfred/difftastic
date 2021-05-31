use crate::lines::AbsoluteRange;
use crate::tree_diff::{AtomKind, Node};
use regex::Regex;
use typed_arena::Arena;

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

fn parse_json_from<'a>(
    arena: &'a Arena<Node<'a>>,
    s: &str,
    state: &mut ParseState,
) -> Vec<&'a Node<'a>> {
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

    let mut result: Vec<&'a Node<'a>> = vec![];

    'outer: while state.str_i < s.len() {
        for (pattern, kind) in atom_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                assert_eq!(m.start(), 0);
                let position = AbsoluteRange {
                    start: state.str_i,
                    end: state.str_i + m.end(),
                };
                let atom = Node::new_atom(arena, position, m.as_str(), *kind);
                result.push(atom);
                state.str_i += m.end();
                continue 'outer;
            }
        }

        if let Some(m) = open_delimiter.find(&s[state.str_i..]) {
            let start = state.str_i;

            state.str_i += m.end();
            let children = parse_json_from(arena, s, state);
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
            let items = Node::new_list(
                arena,
                m.as_str(),
                open_pos,
                children,
                &close_brace,
                close_pos,
            );
            result.push(items);
            continue;
        };

        if let Some(m) = close_delimiter.find(&s[state.str_i..]) {
            state.close_brace = Some((
                m.as_str().into(),
                AbsoluteRange {
                    start: state.str_i,
                    end: state.str_i + m.end(),
                },
            ));
            state.str_i += m.end();
            return result;
        };

        state.str_i += 1;
    }

    result
}

pub fn parse_json<'a>(arena: &'a Arena<Node<'a>>, s: &str) -> Vec<&'a Node<'a>> {
    parse_json_from(arena, s, &mut ParseState::new())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::tree_diff::set_changed;
    use crate::tree_diff::ChangeKind::*;
    use crate::tree_diff::Node::*;
    use std::cell::Cell;

    fn as_refs<'a, T>(items: &'a Vec<T>) -> Vec<&'a T> {
        items.iter().collect()
    }

    fn assert_syntaxes<'a>(actual: &[&'a Node<'a>], expected: &[&'a Node<'a>]) {
        if !syntaxes_match(actual, expected) {
            dbg!(expected, actual);
            assert!(false);
        }
    }

    fn syntaxes_match<'a>(actual: &[&'a Node<'a>], expected: &[&'a Node<'a>]) -> bool {
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
    fn syntax_matches<'a>(actual: &'a Node<'a>, expected: &'a Node<'a>) -> bool {
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
                    dbg!(lhs_change.get(), rhs_change.get());
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
                    dbg!(lhs_change.get(), rhs_change.get());
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
                if lhs_kind != rhs_kind {
                    dbg!(lhs_kind, rhs_kind);
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
    fn test_parse_integer() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "123"),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 0, end: 3 },
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_empty_string() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "\"\""),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 0, end: 2 },
                "\"\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_multiple() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "123 456"),
            &[
                Node::new_atom(
                    &arena,
                    AbsoluteRange { start: 0, end: 3 },
                    "123",
                    AtomKind::Other,
                ),
                Node::new_atom(
                    &arena,
                    AbsoluteRange { start: 4, end: 7 },
                    "456",
                    AtomKind::Other,
                ),
            ],
        );
    }

    #[test]
    fn test_parse_symbol() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, ".foo"),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 0, end: 4 },
                ".foo",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_integer_with_whitespace() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, " 123 "),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 1, end: 4 },
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_string() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "\"abc\""),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 0, end: 5 },
                "\"abc\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "// foo\nx"),
            &[
                Node::new_atom(
                    &arena,
                    AbsoluteRange { start: 0, end: 7 },
                    "// foo\n",
                    AtomKind::Comment,
                ),
                Node::new_atom(
                    &arena,
                    AbsoluteRange { start: 7, end: 8 },
                    "x",
                    AtomKind::Other,
                ),
            ],
        );
    }

    #[test]
    fn test_parse_multiline_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "/* foo\nbar */"),
            &[Node::new_atom(
                &arena,
                AbsoluteRange { start: 0, end: 13 },
                "/* foo\nbar */",
                AtomKind::Comment,
            )],
        );
    }

    #[test]
    fn test_parse_list() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "[ 123 ]"),
            &[Node::new_list(
                &arena,
                "[",
                AbsoluteRange { start: 0, end: 1 },
                vec![Node::new_atom(
                    &arena,
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
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "[]"),
            &[Node::new_list(
                &arena,
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
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "()"),
            &[Node::new_list(
                &arena,
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
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "[123, 456]"),
            &[Node::new_list(
                &arena,
                "[",
                AbsoluteRange { start: 0, end: 1 },
                vec![
                    Node::new_atom(
                        &arena,
                        AbsoluteRange { start: 1, end: 4 },
                        "123",
                        AtomKind::Other,
                    ),
                    Node::new_atom(
                        &arena,
                        AbsoluteRange { start: 6, end: 9 },
                        "456",
                        AtomKind::Other,
                    ),
                ],
                "]",
                AbsoluteRange { start: 9, end: 10 },
            )],
        );
    }

    #[test]
    fn test_parse_object() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_json(&arena, "{x: 1}"),
            &[Node::new_list(
                &arena,
                "{",
                AbsoluteRange { start: 0, end: 1 },
                vec![
                    Node::new_atom(
                        &arena,
                        AbsoluteRange { start: 1, end: 2 },
                        "x",
                        AtomKind::Other,
                    ),
                    Node::new_atom(
                        &arena,
                        AbsoluteRange { start: 4, end: 5 },
                        "1",
                        AtomKind::Other,
                    ),
                ],
                "}",
                AbsoluteRange { start: 5, end: 6 },
            )],
        );
    }

    #[test]
    fn test_add_duplicate_node() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "a");
        let rhs = parse_json(&arena, "a a");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Unchanged(lhs[0]))),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Some(Novel)),
                content: "a".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&rhs, &as_refs(&expected_rhs));
    }

    #[test]
    fn test_add_node_before_sequence() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "a b");
        let rhs = parse_json(&arena, "a a b");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Unchanged(lhs[0]))),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Some(Novel)),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 4, end: 5 },
                change: Cell::new(Some(Unchanged(lhs[1]))),
                content: "b".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&rhs, &as_refs(&expected_rhs));
    }

    #[test]
    fn test_move_atom() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "a b");
        let rhs = parse_json(&arena, "x a");

        set_changed(&lhs, &rhs);

        let expected_lhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Unchanged(rhs[1]))),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Some(Novel)),
                content: "b".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&lhs, &as_refs(&expected_lhs));

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Novel)),
                content: "x".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Some(Unchanged(lhs[0]))),
                content: "a".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&rhs, &as_refs(&expected_rhs));
    }

    #[test]
    fn test_move_atom2() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "x a");
        let rhs = parse_json(&arena, "a b");

        set_changed(&lhs, &rhs);

        let expected_rhs = vec![
            Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Unchanged(lhs[1]))),
                content: "a".into(),
                kind: AtomKind::Other,
            },
            Atom {
                position: AbsoluteRange { start: 2, end: 3 },
                change: Cell::new(Some(Novel)),
                content: "b".into(),
                kind: AtomKind::Other,
            },
        ];
        assert_syntaxes(&rhs, &as_refs(&expected_rhs));
    }

    #[test]
    fn test_add_subtree() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "[a]");
        let rhs = parse_json(&arena, "[a a]");

        set_changed(&lhs, &rhs);

        let lhs_atom = match lhs[0] {
            List { children, .. } => children[0],
            Atom { .. } => unreachable!(),
        };

        let expected_rhs: Vec<&Node> = vec![arena.alloc(List {
            change: Cell::new(Some(Unchanged(lhs[0]))),
            open_position: AbsoluteRange { start: 0, end: 1 },
            open_delimiter: "[".into(),
            close_position: AbsoluteRange { start: 4, end: 5 },
            close_delimiter: "]".into(),
            children: vec![
                arena.alloc(Atom {
                    position: AbsoluteRange { start: 1, end: 2 },
                    change: Cell::new(Some(Unchanged(lhs_atom))),
                    content: "a".into(),
                    kind: AtomKind::Other,
                }),
                arena.alloc(Atom {
                    position: AbsoluteRange { start: 3, end: 4 },
                    change: Cell::new(Some(Novel)),
                    content: "a".into(),
                    kind: AtomKind::Other,
                }),
            ],
            num_descendants: 2,
        })];
        assert_syntaxes(&rhs, &expected_rhs);
    }

    /// Moving a subtree should consume its children, so further uses
    /// of children of that subtree is not a move.
    ///
    /// [], [1] -> [[1]], 1
    ///
    /// In this example, the second instance of 1 is an addition.
    #[test]
    fn test_add_subsubtree() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "[] [1]");
        let rhs = parse_json(&arena, "[[1]] 1");

        set_changed(&lhs, &rhs);

        let expected_rhs: Vec<&Node> = vec![
            arena.alloc(List {
                open_delimiter: "[".into(),
                open_position: AbsoluteRange { start: 0, end: 1 },
                close_position: AbsoluteRange { start: 4, end: 5 },
                close_delimiter: "]".into(),
                change: Cell::new(Some(Unchanged(lhs[0]))),
                children: vec![arena.alloc(List {
                    change: Cell::new(Some(Moved)),
                    open_delimiter: "[".into(),
                    open_position: AbsoluteRange { start: 1, end: 2 },
                    close_position: AbsoluteRange { start: 3, end: 4 },
                    close_delimiter: "]".into(),
                    children: vec![arena.alloc(Atom {
                        position: AbsoluteRange { start: 2, end: 3 },
                        change: Cell::new(Some(Moved)),
                        content: "1".into(),
                        kind: AtomKind::Other,
                    })],
                    num_descendants: 1,
                })],
                num_descendants: 2,
            }),
            arena.alloc(Atom {
                position: AbsoluteRange { start: 6, end: 7 },
                change: Cell::new(Some(Novel)),
                content: "1".into(),
                kind: AtomKind::Other,
            }),
        ];
        assert_syntaxes(&rhs, &expected_rhs);
    }

    /// Moving a subtree should consume its children, so further uses
    /// of children of that subtree is not a move.
    ///
    /// [], [1] -> 1, [[1]]
    ///
    /// In this example, the first instance of 1 is an addition.
    #[test]
    fn test_add_subsubtree_atom_first() {
        let arena = Arena::new();

        let lhs = parse_json(&arena, "[] [1]");
        let rhs = parse_json(&arena, "1 [[1]]");

        set_changed(&lhs, &rhs);

        let expected_rhs: Vec<&Node> = vec![
            arena.alloc(Atom {
                position: AbsoluteRange { start: 0, end: 1 },
                change: Cell::new(Some(Novel)),
                content: "1".into(),
                kind: AtomKind::Other,
            }),
            arena.alloc(List {
                open_delimiter: "[".into(),
                open_position: AbsoluteRange { start: 2, end: 3 },
                close_delimiter: "]".into(),
                close_position: AbsoluteRange { start: 6, end: 7 },
                change: Cell::new(Some(Novel)),
                children: vec![arena.alloc(List {
                    change: Cell::new(Some(Moved)),
                    open_position: AbsoluteRange { start: 3, end: 4 },
                    open_delimiter: "[".into(),
                    close_position: AbsoluteRange { start: 5, end: 6 },
                    close_delimiter: "]".into(),
                    children: vec![arena.alloc(Atom {
                        position: AbsoluteRange { start: 4, end: 5 },
                        change: Cell::new(Some(Moved)),
                        content: "1".into(),
                        kind: AtomKind::Other,
                    })],
                    num_descendants: 1,
                })],
                num_descendants: 2,
            }),
        ];
        assert_syntaxes(&rhs, &expected_rhs);
    }
}
