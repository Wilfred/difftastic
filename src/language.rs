use regex::Regex;

#[cfg(test)]
use pretty_assertions::assert_eq;

#[derive(Debug, Clone)]
pub struct Token {
    pub start: usize,
    // The actual token, e.g. "var"
    pub text: String,
}

impl PartialEq for Token {
    fn eq(&self, other: &Token) -> bool {
        self.text == other.text
    }
}

#[derive(Debug)]
pub enum Language {
    JavaScript,
    Lisp,
    Css,
    Rust,
}

impl Language {
    /// Given a human friendly name, return the corresponding enum
    /// variant.
    pub fn from(s: &str) -> Option<Language> {
        match s {
            "css" => Some(Language::Css),
            "js" => Some(Language::JavaScript),
            "lisp" => Some(Language::Lisp),
            "rust" => Some(Language::Rust),
            _ => None,
        }
    }
}

pub fn infer_language(filename: &str) -> Option<Language> {
    if filename.ends_with(".js") {
        return Some(Language::JavaScript);
    } else if filename.ends_with(".el") {
        return Some(Language::Lisp);
    } else if filename.ends_with(".css") {
        return Some(Language::Css);
    } else if filename.ends_with(".rs") {
        return Some(Language::Rust);
    }
    None
}

pub fn language_lexer(lang: Language) -> Regex {
    // TODO: this doesn't handle newlines in comments well, see inline display of the elisp sample file.
    match lang {
        Language::JavaScript => {
            Regex::new(r#"//.+|[a-zA-Z0-9_]+|"(\\.|[^"\\])*"|'(\\.|[^'\\])*'|[^ \t\n]"#).unwrap()
        }
        Language::Rust => {
            // TODO: proper raw string literal lexing.
            Regex::new(r#"//.+|[a-zA-Z0-9_]+!?|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap()
        }
        Language::Lisp => Regex::new(r#";.+|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap(),
        Language::Css => {
            Regex::new(r#"(?s)/\*.*?\*/|[a-zA-Z0-9_*!.-]+|"(\\.|[^"\\])*"|[^ \t\n]"#).unwrap()
        }
    }
}

pub fn lex(src: &str, re: &Regex) -> Vec<Token> {
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

#[test]
fn lex_js_single_quotes() {
    let re = language_lexer(Language::JavaScript);
    let tokens = lex("'foo'", &re);

    // Since we've overriden eq for tokens, manually compare fields.
    assert_eq!(tokens.len(), 1);
    let token = &tokens[0];
    assert_eq!(token.start, 0);
    assert_eq!(token.text, "'foo'");
}

#[test]
fn lex_js_function_call_with_double_quotes() {
    let re = language_lexer(Language::JavaScript);
    let tokens = lex("foo(\"bar\")", &re);

    assert_eq!(tokens.len(), 4);

    // Since we've overriden eq for tokens, manually compare fields.
    assert_eq!(tokens[0].start, 0);
    assert_eq!(tokens[0].text, "foo");
    assert_eq!(tokens[1].text, "(");
    assert_eq!(tokens[2].text, "\"bar\"");
    assert_eq!(tokens[3].text, ")");
}
