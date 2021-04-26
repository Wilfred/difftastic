use crate::tree_diff::ChangeKind;
use crate::tree_diff::Syntax;
use regex::Regex;

fn parse_json_from(s: &str, mut i: usize) -> Vec<Syntax> {
    let num_atom = Regex::new(r#"[0-9]+"#).unwrap();

    let mut result = vec![];
    while i < s.len() {
        match num_atom.find_at(s, i) {
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

        i += 1;
    }

    result
}

fn parse_json(s: &str) -> Vec<Syntax> {
    parse_json_from(s, 0)
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
}
