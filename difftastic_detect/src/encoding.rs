//! Try to convert bytes to a String.

fn utf16_from_bytes_lossy(bytes: &[u8]) -> String {
    let is_big_endian = match &bytes {
        [0xfe, 0xff, ..] => true,
        [0xff, 0xfe, ..] => false,
        _ => false, // assume little endian if no BOM is present.
    };

    // https://stackoverflow.com/a/57172592
    let u16_values: Vec<u16> = bytes
        .chunks_exact(2)
        .into_iter()
        .map(|a| {
            if is_big_endian {
                u16::from_be_bytes([a[0], a[1]])
            } else {
                u16::from_le_bytes([a[0], a[1]])
            }
        })
        .collect();
    String::from_utf16_lossy(u16_values.as_slice())
}

pub enum ProbableFileKind {
    Text(String),
    Binary,
}

/// Do these bytes look like a binary (non-textual) format?
pub fn guess_content(bytes: &[u8]) -> ProbableFileKind {
    // Only consider the first 1,000 bytes, as tree_magic_mini
    // considers the entire file, which is very slow on large files.
    let mut magic_bytes = bytes;
    if magic_bytes.len() > 1000 {
        magic_bytes = &magic_bytes[..1000];
    }

    let mime = tree_magic_mini::from_u8(magic_bytes);
    match mime {
        // Treat pdf as binary.
        "application/pdf" => return ProbableFileKind::Binary,
        // Treat all image content as binary.
        v if v.starts_with("image/") => return ProbableFileKind::Binary,
        // Treat all audio content as binary.
        v if v.starts_with("audio/") => return ProbableFileKind::Binary,
        // Treat all video content as binary.
        v if v.starts_with("video/") => return ProbableFileKind::Binary,
        // Treat all font content as binary.
        v if v.starts_with("font/") => return ProbableFileKind::Binary,
        _ => {}
    }

    // If more than 20 of the first 1,000 characters are null bytes or
    // invalid UTF-8, we assume it's binary.
    let utf8_string = String::from_utf8_lossy(bytes).to_string();

    let num_utf8_invalid = utf8_string
        .chars()
        .take(1000)
        .filter(|c| *c == std::char::REPLACEMENT_CHARACTER || *c == '\0')
        .count();
    if num_utf8_invalid <= 20 {
        return ProbableFileKind::Text(utf8_string);
    }

    let utf16_string = utf16_from_bytes_lossy(bytes);
    let num_utf16_invalid = utf16_string
        .chars()
        .take(1000)
        .filter(|c| *c == std::char::REPLACEMENT_CHARACTER || *c == '\0')
        .count();
    if num_utf16_invalid <= 20 {
        return ProbableFileKind::Text(utf16_string);
    }

    ProbableFileKind::Binary
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_plaintext_is_text() {
        let s = "hello world";
        assert!(matches!(
            guess_content(s.as_bytes()),
            ProbableFileKind::Text(_)
        ));
    }
    #[test]
    fn test_null_bytes_are_binary() {
        let s = "\0".repeat(1000);
        assert!(matches!(
            guess_content(s.as_bytes()),
            ProbableFileKind::Binary
        ));
    }
}
