use crate::tree_diff::ChangeKind;
use crate::tree_diff::Syntax;
use regex::Regex;

fn parse_json_from(s: &str, mut i: usize) -> (Vec<Syntax>, usize) {
    let num_atom = Regex::new(r#"[0-9]+"#).unwrap();
    let str_atom = Regex::new(r#""[^"]+""#).unwrap();
    let open_brace = Regex::new(r#"\["#).unwrap();
    let close_brace = Regex::new(r#"\]"#).unwrap();

    let mut result = vec![];

    while i < s.len() {
        match num_atom.find(&s[i..]) {
            Some(m) => {
                let atom = Syntax::Atom {
                    content: m.as_str().into(),
                    change: ChangeKind::Unchanged,
                };
                result.push(atom);
                i += m.end();
                continue;
            }
            None => {}
        };

        match str_atom.find(&s[i..]) {
            Some(m) => {
                let atom = Syntax::Atom {
                    content: m.as_str().into(),
                    change: ChangeKind::Unchanged,
                };
                result.push(atom);
                i += m.end();
                continue;
            }
            None => {}
        };

        match open_brace.find(&s[i..]) {
            Some(m) => {
                // TODO: error if there's no closing ] brace?
                let (children, next_i) = parse_json_from(s, i + m.end());
                let items = Syntax::Items {
                    // TODO: rename to open_content?
                    start_content: m.as_str().into(),
                    children,
                    change: ChangeKind::Unchanged,
                    end_content: "todo".into(),
                };
                result.push(items);
                i = next_i;
                continue;
            }
            None => {}
        };

        match close_brace.find(&s[i..]) {
            Some(m) => {
                return (result, i + m.end());
            }
            None => {}
        };

        i += 1;
    }

    return (result, i);
}

fn parse_json(s: &str) -> Vec<Syntax> {
    let (syntax, _) = parse_json_from(s, 0);
    syntax
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
                    content: "123".into(),
                    change: ChangeKind::Unchanged,
                },
                Syntax::Atom {
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
                    content: "\"abc\"".into(),
                    change: ChangeKind::Unchanged,
                }
            }]
        );
    }
}
