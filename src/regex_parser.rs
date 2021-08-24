//! Lexes source code and parses delimiters according to a simple
//! regex-based parser.

use std::borrow::Borrow;
use std::ffi::OsStr;

use crate::lines::NewlinePositions;
use crate::positions::SingleLineSpan;
use crate::syntax::Syntax;
use regex::Regex;
use typed_arena::Arena;

pub struct Language {
    pub name: String,
    atom_patterns: Vec<Regex>,
    comment_patterns: Vec<Regex>,
    open_delimiter_pattern: Regex,
    close_delimiter_pattern: Regex,
}

pub fn from_extension(extension: &OsStr) -> Option<Language> {
    match extension.to_string_lossy().borrow() {
        "clj" => Some(Language {
            name: "Clojure".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r":?[a-zA-Z0-9_>+=-]+").unwrap(),
                // Operators
                Regex::new(r"[`'~@&]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![Regex::new(r";.*").unwrap()],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "css" => Some(Language {
            name: "CSS".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols
                Regex::new(r"[.a-zA-Z0-9_]+").unwrap(),
                // Punctuation
                Regex::new(r"[:;]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
                // Single quoted strings
                Regex::new(r"'((\\')|[^'])*'").unwrap(),
            ],
            comment_patterns: vec![
                // Multi-line comments
                Regex::new(r"/\*(?s:.)*?\*/").unwrap(),
            ],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "el" => Some(Language {
            name: "Emacs Lisp".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"[a-zA-Z0-9_?:/*+=<>-]+").unwrap(),
                // Operators
                Regex::new(r"[`',#.&@]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![Regex::new(r";.*").unwrap()],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "go" => Some(Language {
            name: "Go".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"[.a-zA-Z0-9_]+").unwrap(),
                // Two character operators
                Regex::new(r"(!=|:=|&&|\|\|)").unwrap(),
                // Single character operators
                Regex::new(r"[.;:,=&!*+-]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![
                // Single line comments
                Regex::new("//.*(\n|$)").unwrap(),
                // Multi-line comments
                Regex::new(r"/\*(?s:.)*?\*/").unwrap(),
            ],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "js" => Some(Language {
            name: "JavaScript".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"[.a-zA-Z0-9_]+").unwrap(),
                // Two character operators
                Regex::new(r"(&&|\|\||\+\+|--|\*\*)").unwrap(),
                // Single character operators
                Regex::new(r"[=<>/*+?:;,-]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
                // Single quoted strings
                Regex::new(r"'((\\')|[^'])*'").unwrap(),
                // Backtick strings
                Regex::new(r"`((\\`)|[^`])*1`").unwrap(),
            ],
            comment_patterns: vec![
                // Single line comments
                Regex::new("//.*(\n|$)").unwrap(),
                // Multi-line comments
                Regex::new(r"/\*(?s:.)*?\*/").unwrap(),
            ],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "json" => Some(Language {
            name: "JSON".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Booleans
                Regex::new(r"(true)|(false)|(null)").unwrap(),
                // Punctuation
                Regex::new(r"[:,]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![],
            open_delimiter_pattern: Regex::new(r"(\[|\{)").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\})").unwrap(),
        }),
        "ml" | "mli" => Some(Language {
            name: "OCaml".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"[.a-zA-Z0-9_]+").unwrap(),
                // Two character operators
                Regex::new(r"(->|<-|:=|&&|\|\|)").unwrap(),
                // Single character operators
                Regex::new(r"[?~=<>/*+,&|:;'#!-]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![
                // Multi-line comments
                Regex::new(r"\(\*(?s:.)*?\*\)").unwrap(),
            ],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "rs" => Some(Language {
            name: "Rust".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Single quoted character 'a' or '\n', trying to avoid matching
                // lifetimes.
                Regex::new(r"'..?'").unwrap(),
                // Lifetimes
                Regex::new(r"'[a-z_]+").unwrap(),
                // Bindings in macros.
                Regex::new(r"\$[a-z_]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"[a-zA-Z0-9_]+!?").unwrap(),
                // Two character operators
                Regex::new(r"(::|&&|\|\||\.\.|=>|<=|>=|==|!=|->)").unwrap(),
                // Single character operators
                // | is a delimiter for lambdas, but also used in pattern matching.
                Regex::new(r"[.&=<>/*+:;,|#!?$-]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![
                // Single line comments
                Regex::new("//.*(\n|$)").unwrap(),
                // Multi-line comments
                Regex::new(r"/\*(?s:.)*?\*/").unwrap(),
            ],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        "scm" => Some(Language {
            name: "Scheme".into(),
            atom_patterns: vec![
                // Numbers
                Regex::new(r"[0-9]+").unwrap(),
                // Symbols (e.g. variable names)
                Regex::new(r"#?[a-zA-Z0-9_?:/*=-]+").unwrap(),
                // Operators
                Regex::new(r"[`',#.]").unwrap(),
                // Double-quoted strings
                Regex::new(r#""((\\.)|[^"])*""#).unwrap(),
            ],
            comment_patterns: vec![Regex::new(r";.*").unwrap()],
            open_delimiter_pattern: Regex::new(r"(\[|\{|\()").unwrap(),
            close_delimiter_pattern: Regex::new(r"(\]|\}|\))").unwrap(),
        }),
        _ => None,
    }
}

/// Parse `s` according to `lang`.
pub fn parse<'a>(arena: &'a Arena<Syntax<'a>>, s: &str, lang: &Language) -> Vec<&'a Syntax<'a>> {
    let nl_pos = NewlinePositions::from(s);
    parse_from(arena, s, &nl_pos, lang, &mut ParseState::new())
}

enum LexKind {
    Comment,
    Atom,
    OpenDelimiter,
    CloseDelimiter,
}

fn parse_from<'a>(
    arena: &'a Arena<Syntax<'a>>,
    s: &str,
    nl_pos: &NewlinePositions,
    lang: &Language,
    state: &mut ParseState,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&'a Syntax<'a>> = vec![];

    while state.str_i < s.len() {
        let mut current_match: Option<(LexKind, regex::Match)> = None;

        for pattern in &lang.comment_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                match current_match {
                    Some((_, prev_m)) if prev_m.start() <= m.start() => {}
                    _ => {
                        current_match = Some((LexKind::Comment, m));
                    }
                }
            }
        }

        for pattern in &lang.atom_patterns {
            if let Some(m) = pattern.find(&s[state.str_i..]) {
                match current_match {
                    Some((_, prev_m)) if prev_m.start() <= m.start() => {}
                    _ => {
                        current_match = Some((LexKind::Atom, m));
                    }
                }
            }
        }

        if let Some(m) = lang.open_delimiter_pattern.find(&s[state.str_i..]) {
            match current_match {
                Some((_, prev_m)) if prev_m.start() <= m.start() => {}
                _ => {
                    current_match = Some((LexKind::OpenDelimiter, m));
                }
            }
        };

        if let Some(m) = lang.close_delimiter_pattern.find(&s[state.str_i..]) {
            match current_match {
                Some((_, prev_m)) if prev_m.start() <= m.start() => {}
                _ => {
                    current_match = Some((LexKind::CloseDelimiter, m));
                }
            }
        };

        match current_match {
            Some((match_kind, m)) => match match_kind {
                LexKind::Comment => {
                    let atom = Syntax::new_comment(
                        arena,
                        nl_pos.from_offsets(state.str_i + m.start(), state.str_i + m.end()),
                        m.as_str(),
                    );
                    result.push(atom);
                    state.str_i += m.end();
                }
                LexKind::Atom => {
                    let atom = Syntax::new_atom(
                        arena,
                        nl_pos.from_offsets(state.str_i + m.start(), state.str_i + m.end()),
                        m.as_str(),
                    );
                    result.push(atom);
                    state.str_i += m.end();
                }
                LexKind::OpenDelimiter => {
                    let start = state.str_i;

                    state.str_i += m.end();
                    let children = parse_from(arena, s, nl_pos, lang, state);
                    let (close_brace, close_pos) = state.close_brace.take().unwrap_or((
                        "UNCLOSED".into(),
                        nl_pos.from_offsets(state.str_i, state.str_i + 1),
                    ));

                    let open_pos = nl_pos.from_offsets(start + m.start(), start + m.end());
                    let items = Syntax::new_list(
                        arena,
                        m.as_str(),
                        open_pos,
                        children,
                        &close_brace,
                        close_pos,
                    );
                    result.push(items);
                }
                LexKind::CloseDelimiter => {
                    state.close_brace = Some((
                        m.as_str().into(),
                        nl_pos.from_offsets(state.str_i + m.start(), state.str_i + m.end()),
                    ));
                    state.str_i += m.end();
                    return result;
                }
            },
            None => break,
        };
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
pub mod tests {
    use super::*;
    use crate::syntax::Syntax::*;

    fn lang() -> Language {
        from_extension(&OsStr::new("js")).unwrap()
    }

    pub fn assert_syntaxes<'a>(actual: &[&'a Syntax<'a>], expected: &[&'a Syntax<'a>]) {
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
                    info: lhs_info,
                    open_position: lhs_open_position,
                    open_content: lhs_start_content,
                    children: lhs_children,
                    close_content: lhs_end_content,
                    close_position: lhs_close_position,
                    num_descendants: lhs_num_descendants,
                    ..
                },
                List {
                    info: rhs_info,
                    open_position: rhs_open_position,
                    open_content: rhs_start_content,
                    children: rhs_children,
                    close_content: rhs_end_content,
                    close_position: rhs_close_position,
                    num_descendants: rhs_num_descendants,
                    ..
                },
            ) => {
                if lhs_info.change.get() != rhs_info.change.get() {
                    dbg!(lhs_info.change.get(), rhs_info.change.get());
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
                    info: lhs_info,
                    position: lhs_position,
                    content: lhs_content,
                    is_comment: lhs_is_comment,
                    ..
                },
                Atom {
                    info: rhs_info,
                    position: rhs_position,
                    content: rhs_content,
                    is_comment: rhs_is_comment,
                    ..
                },
            ) => {
                if lhs_info.change.get() != rhs_info.change.get() {
                    dbg!(lhs_info.change.get(), rhs_info.change.get());
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
            )],
        );
    }

    #[test]
    fn test_parse_string_escaped_doublequote() {
        let arena = Arena::new();

        assert_syntaxes(
            // "\""
            &parse(&arena, "\"\\\"\"", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 4,
                }],
                "\"\\\"\"",
            )],
        );
    }

    #[test]
    fn test_parse_string_escaped_backlash() {
        let arena = Arena::new();

        assert_syntaxes(
            // "\\"
            &parse(&arena, "\"\\\\\"", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![SingleLineSpan {
                    line: 0.into(),
                    start_col: 0,
                    end_col: 4,
                }],
                "\"\\\\\"",
            )],
        );
    }

    #[test]
    fn test_parse_multiline_string() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "\"\n\"", &lang()),
            &[Syntax::new_atom(
                &arena,
                vec![
                    SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 1,
                    },
                    SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 1,
                    },
                ],
                "\"\n\"",
            )],
        );
    }

    #[test]
    fn test_parse_string_escaped_backlash_and_second_string() {
        let arena = Arena::new();

        assert_syntaxes(
            // "\\" "a"
            &parse(&arena, "\"\\\\\" \"a\"", &lang()),
            &[
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 4,
                    }],
                    "\"\\\\\"",
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 5,
                        end_col: 8,
                    }],
                    "\"a\"",
                ),
            ],
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
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 4,
                        end_col: 7,
                    }],
                    "456",
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
            )],
        );
    }

    #[test]
    fn test_parse_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "// foo\nx", &lang()),
            &[
                Syntax::new_comment(
                    &arena,
                    vec![SingleLineSpan {
                        line: 0.into(),
                        start_col: 0,
                        end_col: 6,
                    }],
                    "// foo\n",
                ),
                Syntax::new_atom(
                    &arena,
                    vec![SingleLineSpan {
                        line: 1.into(),
                        start_col: 0,
                        end_col: 1,
                    }],
                    "x",
                ),
            ],
        );
    }

    #[test]
    fn test_parse_multiline_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "/* foo\nbar */", &lang()),
            &[Syntax::new_comment(
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
            )],
        );
    }

    #[test]
    fn test_parse_indented_multiline_comment() {
        let arena = Arena::new();

        assert_syntaxes(
            &parse(&arena, "  /* foo\n  bar */", &lang()),
            // Deliberately construct an Atom directly, because
            // Syntax::new_comment has the multiline logic.
            &[&Atom {
                info: crate::syntax::SyntaxInfo::new(0),
                content: "/* foo\nbar */".into(),
                is_comment: true,
                position: vec![
                    SingleLineSpan {
                        line: 0.into(),
                        start_col: 2,
                        end_col: 8,
                    },
                    SingleLineSpan {
                        line: 1.into(),
                        start_col: 2,
                        end_col: 8,
                    },
                ],
            }],
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
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 5,
                        }],
                        ",",
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 6,
                            end_col: 9,
                        }],
                        "456",
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
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 2,
                            end_col: 3,
                        }],
                        ":",
                    ),
                    Syntax::new_atom(
                        &arena,
                        vec![SingleLineSpan {
                            line: 0.into(),
                            start_col: 4,
                            end_col: 5,
                        }],
                        "1",
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
