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

fn lex(src: &str, language: Option<&str>) -> Vec<Token> {
    let mut result = vec![];

    let js_re = Regex::new(r#"//.+|[a-zA-Z0-9_]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap();
    let lisp_re = Regex::new(r#";.+|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap();
    let css_re = Regex::new(r#"(?s)/\*.*?\*/|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap();

    let re = if language == Some("lisp") {
        lisp_re
    } else if language == Some("css") {
        css_re
    } else {
        js_re
    };

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

fn highlight_changes(
    before_src: &str,
    after_src: &str,
    language: Option<&str>,
) -> (String, String) {
    let before_tokens = lex(&before_src, language);
    let after_tokens = lex(&after_src, language);

    let mut before_colored = String::with_capacity(before_src.len());
    let mut after_colored = String::with_capacity(after_src.len());
    for d in diff::slice(&before_tokens, &after_tokens) {
        match d {
            // Only present in the before, so has been removed.
            diff::Result::Left(l) => {
                before_colored.push_str(&l.text.red().to_string());
                before_colored.push_str(&l.trivia);
            }
            // Present in both.
            diff::Result::Both(l, r) => {
                before_colored.push_str(&l.text);
                before_colored.push_str(&l.trivia);
                after_colored.push_str(&r.text);
                after_colored.push_str(&r.trivia);
            }
            // Only present in the after.
            diff::Result::Right(r) => {
                after_colored.push_str(&r.text.green().to_string());
                after_colored.push_str(&r.trivia);
            }
        }
    }

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

    let language = matches.value_of("language");
    let (before_colored, after_colored) = highlight_changes(&before_src, &after_src, language);

    print!(
        "{}",
        vertical_concat(&before_colored, &after_colored, pad_to_length)
    );
}
