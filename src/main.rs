extern crate clap;
extern crate colored;
extern crate diff;
extern crate itertools;
extern crate regex;
extern crate term_size;

use clap::{App, Arg};
use colored::*;
use itertools::EitherOrBoth::{Both, Left, Right};
use itertools::Itertools;
use regex::{Match, Regex};
use std::cmp::max;
use std::fs;

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
    // Any trailing whitespace or comment before the next token.
    trivia: String,
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

    let mut prev: Option<Match> = None;
    for mat in re.find_iter(src) {
        if let Some(prev_match) = prev {
            let trivia = &src[prev_match.end()..mat.start()];
            result.push(Token {
                start: prev_match.end(),
                text: prev_match.as_str().to_string(),
                trivia: trivia.to_string(),
            });
        }
        prev = Some(mat);
    }
    if let Some(prev_match) = prev {
        let trivia = &src[prev_match.end()..src.len()];
        result.push(Token {
            start: prev_match.end(),
            text: prev_match.as_str().to_string(),
            trivia: trivia.to_string(),
        });
    }

    result
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
) -> (Vec<(Change, usize, usize)>) {
    let re = language_lexer(lang);
    let before_tokens = lex(&before_src, &re);
    let after_tokens = lex(&after_src, &re);

    let mut positions = vec![];
    for d in diff::slice(&before_tokens, &after_tokens) {
        match d {
            // Only present in the before, so has been removed.
            diff::Result::Left(l) => {
                positions.push((Change::Remove, l.start, l.start + l.text.len()));
            }
            // Present in both.
            diff::Result::Both(_, _) => (),
            // Only present in the after.
            diff::Result::Right(r) => {
                positions.push((Change::Add, r.start, r.start + r.text.len()));
            }
        }
    }
    positions
}

fn apply_color(s: &str, positions: &Vec<(usize, usize)>, c: Color) -> String {
    let mut res = String::with_capacity(s.len());
    let mut i = 0;
    for (start, end) in positions {
        if i < *start {
            res.push_str(&s[i..*start]);
        }
        let colored = &s[*start..*end].color(c);
        res.push_str(&colored.to_string());
        i = *end;
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
        apply_color("foo", &vec![(0, 3)], Color::Red),
        "foo".red().to_string()
    );
}

fn highlight_differences(
    before_src: &str,
    after_src: &str,
    differences: &Vec<(Change, usize, usize)>,
) -> (String, String) {
    let additions: Vec<(usize, usize)> = differences
        .iter()
        .filter(|(c, _, _)| *c == Change::Add)
        .map(|(_, start, end)| (*start, *end))
        .collect();
    let removals: Vec<(usize, usize)> = differences
        .iter()
        .filter(|(c, _, _)| *c == Change::Remove)
        .map(|(_, start, end)| (*start, *end))
        .collect();

    let before_colored = apply_color(before_src, &removals, Color::Red);
    let after_colored = apply_color(after_src, &additions, Color::Green);

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

    let positions = difference_positions(&before_src, &after_src, language);
    let (before_colored, after_colored) =
        highlight_differences(&before_src, &after_src, &positions);

    print!(
        "{}",
        vertical_concat(&before_colored, &after_colored, pad_to_length)
    );
}
