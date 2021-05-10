use crate::tree_diff::ChangeKind;
use crate::tree_diff::Syntax;
use regex::Regex;

#[derive(Debug, Copy, Clone)]
struct ParseState {
    str_i: usize,
    next_id: usize,
}

impl ParseState {
    fn new() -> Self {
        ParseState {
            str_i: 0,
            next_id: 0,
        }
    }
}

fn parse_json_from(s: &str, state: &mut ParseState) -> Vec<Syntax> {
    let num_atom = Regex::new(r#"^[0-9]+"#).unwrap();
    let sym_atom = Regex::new(r#"^[a-zA-Z0-9]+"#).unwrap();
    let str_atom = Regex::new(r#"^"[^"]+""#).unwrap();
    let open_brace = Regex::new(r#"^\[|\{"#).unwrap();
    let close_brace = Regex::new(r#"^\]|\{"#).unwrap();

    let mut result = vec![];

    while state.str_i < s.len() {
        match num_atom.find(&s[state.str_i..]) {
            Some(m) => {
                let atom = Syntax::Atom {
                    id: state.next_id,
                    content: m.as_str().into(),
                    change: ChangeKind::Unchanged,
                };
                state.next_id += 1;
                result.push(atom);
                state.str_i += m.end();
                continue;
            }
            None => {}
        };

        match str_atom.find(&s[state.str_i..]) {
            Some(m) => {
                let atom = Syntax::Atom {
                    id: state.next_id,
                    content: m.as_str().into(),
                    change: ChangeKind::Unchanged,
                };
                state.next_id += 1;
                result.push(atom);
                state.str_i += m.end();
                continue;
            }
            None => {}
        };

        match sym_atom.find(&s[state.str_i..]) {
            Some(m) => {
                let atom = Syntax::Atom {
                    id: state.next_id,
                    content: m.as_str().into(),
                    change: ChangeKind::Unchanged,
                };
                state.next_id += 1;
                result.push(atom);
                state.str_i += m.end();
                continue;
            }
            None => {}
        };

        match open_brace.find(&s[state.str_i..]) {
            Some(m) => {
                // TODO: error if there's no closing ] brace?

                let id = state.next_id;
                state.next_id += 1;
                state.str_i += m.end();

                let children = parse_json_from(s, state);
                let items = Syntax::List {
                    id,
                    // TODO: rename to open_content?
                    start_content: m.as_str().into(),
                    children,
                    change: ChangeKind::Unchanged,
                    // TODO: get end_content when matching on close_brace.
                    end_content: "]".into(),
                };
                result.push(items);
                continue;
            }
            None => {}
        };

        match close_brace.find(&s[state.str_i..]) {
            Some(m) => {
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
    use pretty_assertions::assert_eq;

    #[test]
    fn test_parse_integer() {
        assert_eq!(
            parse_json("123"),
            vec![{
                Syntax::Atom {
                    id: 0,
                    content: "123".into(),
                    change: ChangeKind::Unchanged,
                }
            }]
        );
    }

    #[test]
    fn test_parse_multiple() {
        assert_eq!(
            parse_json("123 456"),
            vec![
                Syntax::Atom {
                    id: 0,
                    content: "123".into(),
                    change: ChangeKind::Unchanged,
                },
                Syntax::Atom {
                    id: 1,
                    content: "456".into(),
                    change: ChangeKind::Unchanged,
                }
            ]
        );
    }

    #[test]
    fn test_parse_integer_with_whitespace() {
        assert_eq!(
            parse_json(" 123 "),
            vec![{
                Syntax::Atom {
                    id: 0,
                    content: "123".into(),
                    change: ChangeKind::Unchanged,
                }
            }]
        );
    }

    #[test]
    fn test_parse_string() {
        assert_eq!(
            parse_json("\"abc\""),
            vec![{
                Syntax::Atom {
                    id: 0,
                    content: "\"abc\"".into(),
                    change: ChangeKind::Unchanged,
                }
            }]
        );
    }

    #[test]
    fn test_parse_list() {
        assert_eq!(
            parse_json("[ 123 ]"),
            vec![Syntax::List {
                id: 0,
                start_content: "[".into(),
                end_content: "]".into(),
                change: ChangeKind::Unchanged,
                children: vec![Syntax::Atom {
                    id: 1,
                    content: "123".into(),
                    change: ChangeKind::Unchanged,
                }]
            }],
        );
    }
    #[test]
    fn test_parse_empty_list() {
        assert_eq!(
            parse_json("[]"),
            vec![Syntax::List {
                id: 0,
                start_content: "[".into(),
                end_content: "]".into(),
                change: ChangeKind::Unchanged,
                children: vec![]
            }],
        );
    }

    #[test]
    fn test_parse_list_with_commas() {
        assert_eq!(
            parse_json("[123, 456]"),
            vec![Syntax::List {
                id: 0,
                start_content: "[".into(),
                end_content: "]".into(),
                change: ChangeKind::Unchanged,
                children: vec![
                    Syntax::Atom {
                        id: 1,
                        content: "123".into(),
                        change: ChangeKind::Unchanged,
                    },
                    Syntax::Atom {
                        id: 2,
                        content: "456".into(),
                        change: ChangeKind::Unchanged,
                    }
                ]
            }],
        );
    }

    #[test]
    fn test_parse_object() {
        assert_eq!(
            parse_json("{x: 1}"),
            vec![Syntax::List {
                id: 0,
                start_content: "{".into(),
                end_content: "]".into(),
                change: ChangeKind::Unchanged,
                children: vec![
                    Syntax::Atom {
                        id: 1,
                        content: "x".into(),
                        change: ChangeKind::Unchanged,
                    },
                    Syntax::Atom {
                        id: 2,
                        content: "1".into(),
                        change: ChangeKind::Unchanged,
                    }
                ]
            }],
        );
    }
}
