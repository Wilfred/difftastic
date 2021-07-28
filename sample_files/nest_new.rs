use crate::lines::NewlinePositions;
use crate::positions::SingleLineSpan;
use crate::syntax::{AtomKind, Syntax};
use regex::Regex;
use rust_embed::RustEmbed;
use std::fs;
use toml::Value;
use typed_arena::Arena;

pub fn read_or_die(path: &str) -> String {
    match fs::read_to_string(path) {
        Ok(src) => src,
        Err(e) => {
            match e.kind() {
                std::io::ErrorKind::NotFound => {
                    eprintln!("No such file: {}", path);
                }
                std::io::ErrorKind::PermissionDenied => {
                    eprintln!("Permission denied when reading file: {}", path);
                }
                _ => {
                    eprintln!("Could not read file: {} (error {:?})", path, e.kind());
                }
            };
            std::process::exit(1);
        }
    }
}

#[derive(RustEmbed)]
#[folder = "config/"]
pub struct ConfigDir;

impl ConfigDir {
    pub fn read_default_toml() -> Vec<Language> {
        let syntax_toml_bytes = ConfigDir::get("syntax.toml").unwrap();
        let syntax_toml = std::str::from_utf8(syntax_toml_bytes.as_ref()).unwrap();
        read_syntax_toml(syntax_toml)
    }
}

pub struct Language {
    pub name: String,
    extensions: Vec<String>,
    atom_patterns: Vec<Regex>,
    string_patterns: Vec<Regex>,
    comment_patterns: Vec<Regex>,
    open_delimiter_pattern: Regex,
    close_delimiter_pattern: Regex,
}

fn read_syntax_toml(src: &str) -> Vec<Language> {
    let v = src.parse::<Value>().unwrap();
    let table = v.as_table().unwrap();

    table
        .iter()
        .map(|(name, value)| lang_from_value(name, value))
        .collect()
}

pub fn find_lang(languages: Vec<Language>, extension: &str) -> Option<Language> {
    for language in languages {
        if language.extensions.iter().any(|e| e == extension) {
            return Some(language);
        }
    }
    None
}

fn as_string_vec(v: &Value) -> Vec<String> {
    // TODO: Make this robust against invalid toml
    let arr = v.as_array().unwrap();
    arr.iter().map(|v| v.as_str().unwrap().into()).collect()
}

fn as_regex_vec(v: &Value) -> Vec<Regex> {
    // TODO: properly handle malformed user-supplied regexes.
    as_string_vec(v).iter().map(|s| as_regex(&s)).collect()
}

fn as_regex(s: &str) -> Regex {
    let mut pattern = String::with_capacity(1 + s.len());
    pattern.push('^');
    pattern.push_str(s);

    Regex::new(&pattern).unwrap()
}

fn lang_from_value(name: &str, v: &Value) -> Language {
    let table = v.as_table().unwrap();
    Language {
        name: name.into(),
        extensions: as_string_vec(v.get("extensions").unwrap()),
        atom_patterns: as_regex_vec(v.get("atom_patterns").unwrap()),
        string_patterns: as_regex_vec(v.get("string_patterns").unwrap()),
        comment_patterns: as_regex_vec(v.get("comment_patterns").unwrap()),
        open_delimiter_pattern: as_regex(
            table
                .get("open_delimiter_pattern")
                .unwrap()
                .as_str()
                .unwrap(),
        ),
        close_delimiter_pattern: as_regex(
            table
                .get("close_delimiter_pattern")
                .unwrap()
                .as_str()
                .unwrap(),
        ),
    }
}

/// Split `s` by lines, and treat each line as an atom.
///
/// This is a fallback for files that we don't know how to parse.
pub fn parse_lines<'a>(arena: &'a Arena<Syntax<'a>>, s: &str) -> Vec<&'a Syntax<'a>> {
    let mut res: Vec<&'a Syntax<'a>> = vec![];
    for (i, line) in s.lines().enumerate() {
        res.push(Syntax::new_atom(
            arena,
            vec![SingleLineSpan {
                line: i.into(),
                start_col: 0,
                end_col: line.len(),
            }],
            line,
            AtomKind::Other,
        ));
    }

    res
}

/// Parse `s` according to `lang`.
pub fn parse<'a>(arena: &'a Arena<Syntax<'a>>, s: &str, lang: &Language) -> Vec<&'a Syntax<'a>> {
    let nl_pos = NewlinePositions::from(s);
    parse_from(arena, s, &nl_pos, lang, &mut ParseState::new())
}

fn parse_from<'a>(
    arena: &'a Arena<Syntax<'a>>,
    s: &str,
    nl_pos: &NewlinePositions,
    lang: &Language,
    state: &mut ParseState,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&'a Syntax<'a>> = vec![];

    'outer: while state.str_i < s.len() {
        for pattern in &lang.comment_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                assert_eq!(m.start(), 0);
                let atom = Syntax::new_atom(
                    arena,
                    nl_pos.from_offsets(state.str_i, state.str_i + m.end()),
                    m.as_str(),
                    AtomKind::Comment,
                );
                result.push(atom);
                state.str_i += m.end();
                continue 'outer;
            }
        }

        for pattern in &lang.atom_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                assert_eq!(m.start(), 0);
                let atom = Syntax::new_atom(
                    arena,
                    nl_pos.from_offsets(state.str_i, state.str_i + m.end()),
                    m.as_str(),
                    AtomKind::Other,
                );
                result.push(atom);
                state.str_i += m.end();
                continue 'outer;
            }
        }

        for pattern in &lang.string_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                assert_eq!(m.start(), 0);
                let atom = Syntax::new_atom(
                    arena,
                    nl_pos.from_offsets(state.str_i, state.str_i + m.end()),
                    m.as_str(),
                    AtomKind::String,
                );
                result.push(atom);
                state.str_i += m.end();
                continue 'outer;
            }
        }

        if let Some(m) = lang.open_delimiter_pattern.find(&s[state.str_i..]) {
            let start = state.str_i;

            state.str_i += m.end();
            let children = parse_from(arena, s, nl_pos, lang, state);
            let (close_brace, close_pos) = state.close_brace.take().unwrap_or((
                "UNCLOSED".into(),
                nl_pos.from_offsets(state.str_i, state.str_i + 1),
            ));

            let open_pos = nl_pos.from_offsets(start, start + m.end());
            let items = Syntax::new_list(
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

        if let Some(m) = lang.close_delimiter_pattern.find(&s[state.str_i..]) {
            state.close_brace = Some((
                m.as_str().into(),
                nl_pos.from_offsets(state.str_i, state.str_i + m.end()),
            ));
            state.str_i += m.end();
            return result;
        };
        state.str_i += 1;
    }

    result
}

#[derive(Debug, Clone)]
struct ParseState {
    str_i: usize,
    close_brace: Option<(String, Vec<SingleLineSpan>)>,
}

impl ParseState {
    fn new() -> Self {
        ParseState {
            str_i: 0,
            close_brace: None,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::syntax::Syntax::*;

    fn lang() -> Language {
        let syntax_toml = ConfigDir::read_default_toml();
        find_lang(syntax_toml, "js").unwrap()
    }

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
                    change: lhs_change,
                    open_position: lhs_open_position,
                    open_content: lhs_start_content,
                    children: lhs_children,
                    close_content: lhs_end_content,
                    close_position: lhs_close_position,
                    num_descendants: lhs_num_descendants,
                    ..
                },
                List {
                    change: rhs_change,
                    open_position: rhs_open_position,
                    open_content: rhs_start_content,
                    children: rhs_children,
                    close_content: rhs_end_content,
                    close_position: rhs_close_position,
                    num_descendants: rhs_num_descendants,
                    ..
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
                    ..
                },
                Atom {
                    change: rhs_change,
                    position: rhs_position,
                    content: rhs_content,
                    kind: rhs_kind,
                    ..
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
    fn test_parse_lines() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse_lines(&arena, "foo\nbar"),
            &[
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 3,
                    }],
                    "foo",
                    AtomKind::Other,
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 3,
                    }],
                    "bar",
                    AtomKind::Other,
                ),
            ],
        );
    }

    #[test]
    fn test_parse_integer() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "123", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 3,
                }],
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_empty_string() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "\"\"", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 2,
                }],
                "\"\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_multiple() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "123 456", &lang()),
            &[
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 3,
                    }],
                    "123",
                    AtomKind::Other,
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 4,
                        end_col: 7,
                    }],
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
            &parse(&arena, ".foo", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 4,
                }],
                ".foo",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_integer_with_whitespace() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, " 123 ", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 1,
                    end_col: 4,
                }],
                "123",
                AtomKind::Other,
            )],
        );
    }

    #[test]
    fn test_parse_string() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "\"abc\"", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 5,
                }],
                "\"abc\"",
                AtomKind::String,
            )],
        );
    }

    #[test]
    fn test_parse_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "// foo\nx", &lang()),
            &[
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 6,
                    }],
                    "// foo\n",
                    AtomKind::Comment,
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 1,
                    }],
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
            &parse(&arena, "/* foo\nbar */", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![
                    SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 6,
                    },
                    SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 6,
                    },
                ],
                "/* foo\nbar */",
                AtomKind::Comment,
            )],
        );
    }

    #[test]
    fn test_parse_list() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "[ 123 ]", &lang()),
            &[Syntax::new_list(
                &arena,
                "[",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 1,
                }],
                vec![Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 2,
                        end_col: 5,
                    }],
                    "123",
                    AtomKind::Other,
                )],
                "]",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 6,
                    end_col: 7,
                }],
            )],
        );
    }
    #[test]
    fn test_parse_empty_list() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "[]", &lang()),
            &[Syntax::new_list(
                &arena,
                "[",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 1,
                }],
                vec![],
                "]",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 1,
                    end_col: 2,
                }],
            )],
        );
    }

    #[test]
    fn test_parse_parens() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "()", &lang()),
            &[Syntax::new_list(
                &arena,
                "(",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 1,
                }],
                vec![],
                ")",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 1,
                    end_col: 2,
                }],
            )],
        );
    }

    #[test]
    fn test_parse_list_with_commas() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "[123, 456]", &lang()),
            &[Syntax::new_list(
                &arena,
                "[",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 1,
                }],
                vec![
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 1,
                            end_col: 4,
                        }],
                        "123",
                        AtomKind::Other,
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 5,
                        }],
                        ",",
                        AtomKind::Other,
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 6,
                            end_col: 9,
                        }],
                        "456",
                        AtomKind::Other,
                    ),
                ],
                "]",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 9,
                    end_col: 10,
                }],
            )],
        );
    }

    #[test]
    fn test_parse_object() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "{x: 1}", &lang()),
            &[Syntax::new_list(
                &arena,
                "{",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 1,
                }],
                vec![
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 1,
                            end_col: 2,
                        }],
                        "x",
                        AtomKind::Other,
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 2,
                            end_col: 3,
                        }],
                        ":",
                        AtomKind::Other,
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 5,
                        }],
                        "1",
                        AtomKind::Other,
                    ),
                ],
                "}",
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 5,
                    end_col: 6,
                }],
            )],
        );
    }
}
