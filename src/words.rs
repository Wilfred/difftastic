/// Split `s` into a vec of things that look like words and individual
/// non-word characters.
///
/// "foo..bar23" -> vec!["foo", ".", ".", "bar23"]
///
/// See also `split_words_and_numbers`. Both these functions are hot,
/// so they are separate implementations rather than passing a bool to
/// customise number handling.
pub(crate) fn split_words(s: &str) -> Vec<&str> {
    split_words_up_to(s, usize::MAX).expect("usize::MAX words is unreachable")
}

/// Split `s` as [`split_words`], or return `None` as soon as there are more
/// than `limit` items.
///
/// Callers that give up on word diffing above a threshold can use this to
/// avoid walking a very long line: `long_line.txt` in the sample files is a
/// single 4.7MB line that splits into millions of words we then discard.
pub(crate) fn split_words_up_to(s: &str, limit: usize) -> Option<Vec<&str>> {
    let mut words = vec![];
    let mut word_start: Option<usize> = None;
    for (idx, c) in s.char_indices() {
        match word_start {
            Some(start) => {
                if c.is_alphanumeric() || c == '_' {
                    // Just carry on in this word.
                } else {
                    // Push the previous word, then this non-word character.
                    words.push(&s[start..idx]);
                    words.push(&s[idx..idx + c.len_utf8()]);
                    word_start = None;
                }
            }
            None => {
                if c.is_alphanumeric() || c == '_' {
                    word_start = Some(idx);
                } else {
                    words.push(&s[idx..idx + c.len_utf8()]);
                }
            }
        }

        if words.len() > limit {
            return None;
        }
    }

    if let Some(start) = word_start {
        words.push(&s[start..]);
    }
    if words.len() > limit {
        return None;
    }
    Some(words)
}

/// Split `s` into a vec of things that look like words and individual
/// non-word characters.
///
/// "foo..bar23" -> vec!["foo", ".", ".", "bar", "23"]
pub(crate) fn split_words_and_numbers(s: &str) -> Vec<&str> {
    let mut words = vec![];
    let mut word_start: Option<(usize, char)> = None;
    for (idx, c) in s.char_indices() {
        match word_start {
            Some((start, start_c)) => {
                if c.is_alphanumeric() || c == '_' {
                    // Word character, add to the current word if it's
                    // not a number.
                    if c.is_ascii_digit() == start_c.is_ascii_digit() {
                        // Just carry on in this word/number.
                    } else {
                        // Finish previous word, start a new one.
                        words.push(&s[start..idx]);
                        word_start = Some((idx, c));
                    }
                } else {
                    // Push the previous word, then this non-word character.
                    words.push(&s[start..idx]);
                    words.push(&s[idx..idx + c.len_utf8()]);
                    word_start = None;
                }
            }
            None => {
                if c.is_alphanumeric() || c == '_' {
                    word_start = Some((idx, c));
                } else {
                    words.push(&s[idx..idx + c.len_utf8()]);
                }
            }
        }
    }

    if let Some((start, _)) = word_start {
        words.push(&s[start..]);
    }
    words
}

#[cfg(test)]
mod tests {
    use pretty_assertions::assert_eq;

    use super::*;

    #[test]
    fn test_split_words() {
        let s = "example.com";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "com"])
    }

    #[test]
    fn test_split_words_punctuation() {
        let s = "example..";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "."])
    }

    #[test]
    fn test_split_words_numbers() {
        let s = "foo123bar";
        let res = split_words(s);
        assert_eq!(res, vec!["foo123bar"])
    }

    #[test]
    fn test_split_words_treats_newline_separately() {
        let s = "example.\ncom";
        let res = split_words(s);
        assert_eq!(res, vec!["example", ".", "\n", "com"])
    }

    #[test]
    fn test_split_words_single_unicode() {
        let s = "a ö b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "ö", " ", "b"])
    }

    #[test]
    fn test_split_words_single_unicode_not_alphabetic() {
        let s = "a 💝 b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "💝", " ", "b"])
    }

    #[test]
    fn test_split_words_unicode() {
        let s = "a xöy b";
        let res = split_words(s);
        assert_eq!(res, vec!["a", " ", "xöy", " ", "b"])
    }

    #[test]
    fn test_split_words_up_to() {
        assert_eq!(split_words_up_to("a.b", 3), Some(vec!["a", ".", "b"]));
        assert_eq!(split_words_up_to("a.b", 2), None);
        assert_eq!(split_words_up_to("", 0), Some(vec![]));
    }

    #[test]
    fn test_split_words_up_to_matches_split_words() {
        for s in ["", "a", "example.com", "a ö b", "foo123bar", "x.\ny"] {
            assert_eq!(split_words_up_to(s, usize::MAX), Some(split_words(s)));
        }
    }

    #[test]
    fn test_split_words_and_numbers() {
        let s = "a123b";
        let res = split_words_and_numbers(s);
        assert_eq!(res, vec!["a", "123", "b"])
    }

    #[test]
    fn test_split_words_and_numbers_spaces() {
        let s = "foo bar";
        let res = split_words_and_numbers(s);
        assert_eq!(res, vec!["foo", " ", "bar"])
    }
}
