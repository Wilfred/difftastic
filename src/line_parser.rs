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
    // TODO: move assert_syntaxes to a more relevant file.
    use crate::regex_parser::tests::assert_syntaxes;

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
