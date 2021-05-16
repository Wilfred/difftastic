use crate::tree_diff::{AtomKind, Syntax};
use regex::Regex;

#[derive(Debug, Clone)]
struct ParseState {
    str_i: usize,
    close_brace: Option<String>,
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
        // Numbers
        Regex::new(r#"^[0-9]+"#).unwrap(),
        // Symbols (e.g. variable names)
        Regex::new(r#"^[a-zA-Z0-9]+"#).unwrap(),
        // String literals
        Regex::new(r#"^"[^"]+""#).unwrap(),
    ];

    let open_brace = Regex::new(r#"^(\[|\{)"#).unwrap();
    let close_brace = Regex::new(r#"^(\]|\})"#).unwrap();

    let mut result = vec![];

    'outer: while state.str_i < s.len() {
        for pattern in atom_patterns {
            match pattern.find(&s[state.str_i..]) {
                Some(m) => {
                    assert_eq!(m.start(), 0);
                    let atom = Syntax::new_atom(m.as_str(), AtomKind::Other);
                    result.push(atom);
                    state.str_i += m.end();
                    continue 'outer;
                }
                None => {}
            }
        }

        match open_brace.find(&s[state.str_i..]) {
            Some(m) => {
                state.str_i += m.end();
                let children = parse_json_from(s, state);
                let close_brace = state.close_brace.take().unwrap_or("UNCLOSED".into());

                let items = Syntax::new_list(m.as_str(), children, &close_brace);
                result.push(items);
                continue;
            }
            None => {}
        };

        match close_brace.find(&s[state.str_i..]) {
            Some(m) => {
                state.close_brace = Some(m.as_str().into());
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
    use crate::tree_diff::assert_syntaxes;

    #[test]
    fn test_parse_integer() {
        assert_syntaxes(
            &parse_json("123"),
            &[Syntax::new_atom("123", AtomKind::Other)],
        );
    }

    #[test]
    fn test_parse_multiple() {
        assert_syntaxes(
            &parse_json("123 456"),
            &[
                Syntax::new_atom("123", AtomKind::Other),
                Syntax::new_atom("456", AtomKind::Other),
            ],
        );
    }

    #[test]
    fn test_parse_integer_with_whitespace() {
        assert_syntaxes(
            &parse_json(" 123 "),
            &[Syntax::new_atom("123", AtomKind::Other)],
        );
    }

    #[test]
    fn test_parse_string() {
        assert_syntaxes(
            &parse_json("\"abc\""),
            &[Syntax::new_atom("\"abc\"", AtomKind::Other)],
        );
    }

    #[test]
    fn test_parse_list() {
        assert_syntaxes(
            &parse_json("[ 123 ]"),
            &[Syntax::new_list(
                "[",
                vec![Syntax::new_atom("123", AtomKind::Other)],
                "]",
            )],
        );
    }
    #[test]
    fn test_parse_empty_list() {
        assert_syntaxes(&parse_json("[]"), &[Syntax::new_list("[", vec![], "]")]);
    }

    #[test]
    fn test_parse_list_with_commas() {
        assert_syntaxes(
            &parse_json("[123, 456]"),
            &[Syntax::new_list(
                "[",
                vec![
                    Syntax::new_atom("123", AtomKind::Other),
                    Syntax::new_atom("456", AtomKind::Other),
                ],
                "]",
            )],
        );
    }

    #[test]
    fn test_parse_object() {
        assert_syntaxes(
            &parse_json("{x: 1}"),
            &[Syntax::new_list(
                "{",
                vec![
                    Syntax::new_atom("x", AtomKind::Other),
                    Syntax::new_atom("1", AtomKind::Other),
                ],
                "}",
            )],
        );
    }
}
