extern crate clap;
extern crate colored;
extern crate diff;
extern crate itertools;
extern crate regex;
extern crate term_size;

mod lines;

use clap::{App, Arg};
use colored::*;
use itertools::EitherOrBoth::{Both, Left, Right};
use itertools::Itertools;
use lines::{relevant_lines, LineNumber, Range};
use regex::Regex;
use std::cmp::max;
use std::collections::HashSet;
use std::fs;
use std::iter::FromIterator;

fn term_width() -> Option<usize> {
    if let Some((w, _)) = term_size::dimensions() {
        return Some(w);
    }
    None
}

#[derive(Debug, Clone)]
struct Token {
    start: usize,
    // The actual token, e.g. "var"
    text: String,
}

impl PartialEq for Token {
    fn eq(&self, other: &Token) -> bool {
        self.text == other.text
    }
}

#[derive(Debug)]
enum Language {
    JavaScript,
    Lisp,
    Css,
}

fn infer_language(filename: &str) -> Option<Language> {
    if filename.ends_with(".js") {
        return Some(Language::JavaScript);
    } else if filename.ends_with(".el") {
        return Some(Language::Lisp);
    } else if filename.ends_with(".css") {
        return Some(Language::Css);
    }
    None
}

fn language_lexer(lang: Language) -> Regex {
    match lang {
        Language::JavaScript => {
            Regex::new(r#"//.+|[a-zA-Z0-9_]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap()
        }
        Language::Lisp => Regex::new(r#";.+|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap(),
        Language::Css => {
            Regex::new(r#"(?s)/\*.*?\*/|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap()
        }
    }
}

fn lex(src: &str, re: &Regex) -> Vec<Token> {
    let mut result = vec![];

    for mat in re.find_iter(src) {
        result.push(Token {
            start: mat.start(),
            text: mat.as_str().to_string(),
        });
    }

    result
}

#[test]
fn lex_single_symbol_css() {
    let re = language_lexer(Language::Css);
    let tokens = lex(".foo", &re);

    // Since we've overriden eq for tokens, manually compare fields.
    assert_eq!(tokens.len(), 1);
    let token = &tokens[0];
    assert_eq!(token.start, 0);
    assert_eq!(token.text, ".foo");
}

#[derive(Debug, PartialEq, Clone, Copy)]
enum Change {
    Add,
    Remove,
}

fn difference_positions(
    before_src: &str,
    after_src: &str,
    lang: Language,
) -> (Vec<(Change, Range)>) {
    let re = language_lexer(lang);
    let before_tokens = lex(&before_src, &re);
    let after_tokens = lex(&after_src, &re);

    let mut positions = vec![];
    for d in diff::slice(&before_tokens, &after_tokens) {
        match d {
            // Only present in the before, so has been removed.
            diff::Result::Left(l) => {
                positions.push((
                    Change::Remove,
                    Range {
                        start: l.start,
                        end: l.start + l.text.len(),
                    },
                ));
            }
            // Present in both.
            diff::Result::Both(_, _) => (),
            // Only present in the after.
            diff::Result::Right(r) => {
                positions.push((
                    Change::Add,
                    Range {
                        start: r.start,
                        end: r.start + r.text.len(),
                    },
                ));
            }
        }
    }
    positions
}

fn apply_color(s: &str, ranges: &[Range], c: Color) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for range in ranges {
        if i < range.start {
            res.push_str(&s[i..range.start]);
        }
        let colored = &s[range.start..range.end].color(c);
        res.push_str(&colored.to_string());
        i = range.end;
    }
    if i < s.len() {
        res.push_str(&s[i..s.len()]);
    }
    res
}

#[test]
fn apply_color_no_positions() {
    assert_eq!(apply_color("foobar", &vec![], Color::Black), "foobar");
}

#[test]
fn apply_color_whole_length() {
    assert_eq!(
        apply_color("foo", &vec![Range { start: 0, end: 3 }], Color::Red),
        "foo".red().to_string()
    );
}

fn added(differences: &[(Change, Range)]) -> Vec<Range> {
    differences
        .iter()
        .filter(|(c, _)| *c == Change::Add)
        .map(|(_, r)| *r)
        .collect()
}

fn removed(differences: &[(Change, Range)]) -> Vec<Range> {
    differences
        .iter()
        .filter(|(c, _)| *c == Change::Remove)
        .map(|(_, r)| *r)
        .collect()
}

fn highlight_differences(
    before_src: &str,
    after_src: &str,
    differences: &[(Change, Range)],
) -> (String, String) {
    let before_colored = apply_color(before_src, &removed(differences), Color::Red);
    let after_colored = apply_color(after_src, &added(differences), Color::Green);

    (before_colored, after_colored)
}

fn max_line_length(s: &str) -> usize {
    let mut max_length = 0;
    for line in s.lines() {
        max_length = max(max_length, line.len());
    }

    max_length
}

// Ensure that every line in S in the same length, by appending spaces as necessary.
fn pad_string(s: &str, min_length: usize) -> String {
    let mut result = String::with_capacity(s.len());
    for line in s.lines() {
        result.push_str(&format!("{:width$}\n", line, width = min_length));
    }
    result.push_str("\n");

    result
}

/// Return a copy of string that only contains the lines specified.
fn filter_lines(s: &str, lines_wanted: &[LineNumber]) -> String {
    let lines_wanted: HashSet<usize> =
        HashSet::from_iter(lines_wanted.iter().map(|line| line.number));

    let mut result = String::new();
    let mut first = true;
    for (i, line) in s.lines().enumerate() {
        if lines_wanted.contains(&i) {
            if first {
                first = false;
            } else {
                result.push('\n');
            }
            result.push_str(line);
        }
    }
    result
}

#[test]
fn test_filter_lines() {
    let s = "foo\nbar\nbaz\nquux";
    let result = filter_lines(s, &[LineNumber::from(1), LineNumber::from(3)]);
    assert_eq!(result, "bar\nquux");
}

fn vertical_concat(left: &str, right: &str, max_left_length: usize) -> String {
    let mut result = String::with_capacity(left.len() + right.len());

    let spacer = "  ";
    for item in left.lines().zip_longest(right.lines()) {
        match item {
            Both(left_line, right_line) if left_line != "" => {
                result.push_str(left_line);
                result.push_str(spacer);
                result.push_str(right_line);
            }
            Both(_, right_line) | Right(right_line) => {
                result.push_str(&" ".repeat(max_left_length));
                result.push_str(spacer);
                result.push_str(right_line);
            }
            Left(left_line) => {
                result.push_str(left_line);
            }
        }
        result.push_str("\n");
    }

    result
}

fn main() {
    let matches = App::new("Difftastic")
        .version("0.1")
        .about("A word level diff tool that understands syntax!")
        .author("Wilfred Hughes")
        .arg(
            Arg::with_name("language")
                .long("lang")
                .takes_value(true)
                .help("Override the language parser"),
        )
        .arg(
            Arg::with_name("context")
                .long("context")
                .takes_value(true)
                .help("Number of lines of context (todo)"),
        )
        .arg(Arg::with_name("first").index(1).required(true))
        .arg(Arg::with_name("second").index(2).required(true))
        .get_matches();

    let before_path = matches.value_of("first").unwrap();
    let mut before_src = fs::read_to_string(before_path).expect("Unable to read PATH 1");
    let after_path = matches.value_of("second").unwrap();
    let mut after_src = fs::read_to_string(after_path).expect("Unable to read PATH 2");

    let terminal_width = term_width().unwrap_or(80);
    let pad_to_length = std::cmp::max(max_line_length(&before_src), terminal_width / 2 - 1);
    // Pad the left column, so the right column aligns. Do this before
    // diffing, so we can calculate the visible length correctly.
    before_src = pad_string(&before_src, pad_to_length);
    // Pad after too, so unchanged comments don't have differing
    // whitespace.
    after_src = pad_string(&after_src, pad_to_length);

    let language = match matches.value_of("language") {
        Some("css") => Language::Css,
        Some("js") => Language::JavaScript,
        Some("lisp") => Language::Lisp,
        Some(_) => {
            println!("No such language known.");
            return;
        }
        None => infer_language(before_path).expect("Could not infer language"),
    };

    let differences = difference_positions(&before_src, &after_src, language);

    let mut lines = vec![];
    lines.extend(relevant_lines(&removed(&differences), &before_src));
    lines.extend(relevant_lines(&added(&differences), &after_src));
    lines.sort();
    lines.dedup();

    println!("lines: {:?}", lines);

    let (mut before_colored, mut after_colored) =
        highlight_differences(&before_src, &after_src, &differences);

    if matches.value_of("context").is_some() {
        // TODO: this is very dumb. Context is always zero, and we
        // assume the left and right line up (rather than showing gaps
        // if we've just added a big block of text).
        before_colored = filter_lines(&before_colored, &lines);
        after_colored = filter_lines(&after_colored, &lines);
    }

    print!(
        "{}",
        vertical_concat(&before_colored, &after_colored, pad_to_length)
    );
}
