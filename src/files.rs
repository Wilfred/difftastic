//! File reading utilities.

use std::io::Read;
use std::{
    fs,
    io::ErrorKind::*,
    path::{Path, PathBuf},
};

use ignore::WalkBuilder;

use crate::exit_codes::EXIT_BAD_ARGUMENTS;
use crate::hash::DftHashSet;
use crate::options::FileArgument;

pub(crate) fn read_file_or_die(path: &FileArgument) -> Vec<u8> {
    match read_file_arg(path) {
        Ok(src) => src,
        Err(e) => {
            eprint_read_error(path, &e);
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    }
}

pub(crate) fn read_files_or_die(
    lhs_path: &FileArgument,
    rhs_path: &FileArgument,
    missing_as_empty: bool,
) -> (Vec<u8>, Vec<u8>) {
    let lhs_res = read_file_arg(lhs_path);
    let rhs_res = read_file_arg(rhs_path);

    match (lhs_res, rhs_res) {
        // Both files exist, the happy case.
        (Ok(lhs_src), Ok(rhs_src)) => (lhs_src, rhs_src),

        // Proceed if we've been given two paths and only one
        // exists. This is important for mercurial diffs when a file
        // has been removed.
        (Ok(lhs_src), Err(e)) if missing_as_empty && e.kind() == NotFound => (lhs_src, vec![]),
        (Err(e), Ok(rhs_src)) if missing_as_empty && e.kind() == NotFound => (vec![], rhs_src),

        (lhs_res, rhs_res) => {
            // Something else went wrong. Print both errors
            // encountered.
            if let Err(e) = lhs_res {
                eprint_read_error(lhs_path, &e);
            }
            if let Err(e) = rhs_res {
                eprint_read_error(rhs_path, &e);
            }
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    }
}

/// Read a path provided in a CLI argument, handling /dev/null and -
/// correctly.
fn read_file_arg(file_arg: &FileArgument) -> std::io::Result<Vec<u8>> {
    match file_arg {
        FileArgument::NamedPath(path) => fs::read(path),
        FileArgument::Stdin => {
            let stdin = std::io::stdin();
            let mut handle = stdin.lock();

            let mut bytes = vec![];
            handle.read_to_end(&mut bytes)?;
            Ok(bytes)
        }
        FileArgument::DevNull => {
            // Treat /dev/null as an empty file, even on platforms like
            // Windows where this path doesn't exist. Git uses /dev/null
            // regardless of the platform.
            Ok(vec![])
        }
    }
}

/// Write a human-friendly description of `e` to stderr.
fn eprint_read_error(file_arg: &FileArgument, e: &std::io::Error) {
    match e.kind() {
        std::io::ErrorKind::NotFound => {
            eprintln!("No such file: {}", file_arg);
        }
        std::io::ErrorKind::PermissionDenied => {
            eprintln!("Permission denied when reading file: {}", file_arg);
        }
        _ => match file_arg {
            FileArgument::NamedPath(path) if path.is_dir() => {
                eprintln!("Expected a file, got a directory: {}", path.display());
            }
            _ => eprintln!("Could not read file: {} (error {:?})", file_arg, e.kind()),
        },
    };
}

pub(crate) fn read_or_die(path: &Path) -> Vec<u8> {
    match fs::read(path) {
        Ok(src) => src,
        Err(e) => {
            eprint_read_error(&FileArgument::NamedPath(path.to_path_buf()), &e);
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    }
}

fn has_utf16_byte_order_mark(bytes: &[u8]) -> bool {
    matches!(bytes, [0xfe, 0xff, ..] | [0xff, 0xfe, ..])
}

/// Group bytes into u16 values for conversion to UTF-16, respecting
/// the byte order mark if present.
fn u16_from_bytes(bytes: &[u8]) -> Vec<u16> {
    let is_big_endian = match &bytes {
        [0xfe, 0xff, ..] => true,
        [0xff, 0xfe, ..] => false,
        _ => false, // assume little endian if no BOM is present.
    };

    // https://stackoverflow.com/a/57172592
    bytes
        .chunks_exact(2)
        .map(|a| {
            if is_big_endian {
                u16::from_be_bytes([a[0], a[1]])
            } else {
                u16::from_le_bytes([a[0], a[1]])
            }
        })
        .collect()
}

#[derive(Debug, Eq, PartialEq)]
pub(crate) enum ProbableFileKind {
    Text(String),
    Binary,
}

/// Do these bytes look like a binary (non-textual) format?
pub(crate) fn guess_content(
    bytes: &[u8],
    path: &FileArgument,
    binary_overrides: &[glob::Pattern],
) -> ProbableFileKind {
    if let FileArgument::NamedPath(path) = path {
        let path = path.to_string_lossy();
        for pattern in binary_overrides {
            if pattern.matches(&path) {
                info!(
                    "Input file is treated as binary due to explicit override glob {}",
                    pattern
                );
                return ProbableFileKind::Binary;
            }
        }
    }

    // If the bytes are entirely valid UTF-8, treat them as a string.
    if let Ok(valid_utf8_string) = std::str::from_utf8(bytes) {
        info!("Input file is valid UTF-8");
        return ProbableFileKind::Text(valid_utf8_string.to_owned());
    }

    // Only consider the first 1,000 bytes, as tree_magic_mini
    // considers the entire file, which is very slow on large files.
    let mut magic_bytes = bytes;
    if magic_bytes.len() > 1000 {
        magic_bytes = &magic_bytes[..1000];
    }

    let mime = tree_magic_mini::from_u8(magic_bytes);
    info!("MIME type detected: {}", mime);

    // Use MIME type detection to guess whether a file is binary. This
    // has false positives and false negatives, so only check the MIME
    // type after allowing perfect text files (see issue #433).
    match mime {
        // Treat pdf as binary.
        "application/pdf" => return ProbableFileKind::Binary,
        // application/* is a mix of stuff, application/json is fine
        // but application/zip is binary that often decodes as valid
        // UTF-16.
        //
        // See
        // <https://developer.mozilla.org/en-US/docs/Web/HTTP/Guides/MIME_types/Common_types>
        // for a list of MIME types.
        "application/x-archive" => return ProbableFileKind::Binary,
        "application/x-bzip" => return ProbableFileKind::Binary,
        "application/x-bzip2" => return ProbableFileKind::Binary,
        "application/x-7zip-compressed" => return ProbableFileKind::Binary,
        "application/gzip" => return ProbableFileKind::Binary,
        "application/zip" => return ProbableFileKind::Binary,
        "application/zstd" => return ProbableFileKind::Binary,
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

    // Note that many binary files and mostly-valid UTF-8 files happen
    // to be valid UTF-16. Decoding these as UTF-16 leads to garbage
    // ("mojibake").
    //
    // To avoid this, we only try UTF-16 after we've done MIME type
    // checks for binary, and we conservatively require an explicit
    // byte order mark.
    let u16_values = u16_from_bytes(bytes);
    let utf16_str_result = String::from_utf16(&u16_values);
    match utf16_str_result {
        Ok(valid_utf16_string) if has_utf16_byte_order_mark(bytes) => {
            info!("Input file is valid UTF-16 with a byte order mark");
            return ProbableFileKind::Text(valid_utf16_string);
        }
        _ => {}
    }

    // If the input bytes are *almost* valid UTF-8, treat them as
    // UTF-8. This is helpful when the user has written a small number
    // of bad bytes to a file. Users would still like to be able to
    // diff these files.
    let utf8_string = String::from_utf8_lossy(bytes).to_string();
    let num_utf8_invalid = utf8_string
        .chars()
        .take(50000)
        .filter(|c| *c == std::char::REPLACEMENT_CHARACTER || *c == '\0')
        .count();
    if num_utf8_invalid <= 2 {
        info!(
            "Input file is mostly valid UTF-8 (invalid characters: {})",
            num_utf8_invalid
        );
        return ProbableFileKind::Text(utf8_string);
    }

    // Deliberately don't check for mostly-valid UTF-16 due to the
    // high UTF-16 false positive rate on binary files.

    // If the input bytes are mostly valid Windows-1252 (an extension of
    // ISO-8859-1 aka Latin 1), treat them as such.
    let (latin1_str, _encoding, saw_malformed) = encoding_rs::WINDOWS_1252.decode(bytes);
    if !saw_malformed {
        let num_null = latin1_str
            .chars()
            .take(50000)
            .filter(|c| *c == std::char::REPLACEMENT_CHARACTER || *c == '\0')
            .count();
        if num_null <= 1 {
            info!(
                "Input file is mostly valid Latin 1 (invalid characters: {})",
                num_null
            );
            return ProbableFileKind::Text(latin1_str.to_string());
        }
    }

    ProbableFileKind::Binary
}

/// All the files in `dir`, including subdirectories.
fn relative_file_paths_in_dir(dir: &Path) -> Vec<PathBuf> {
    // Walk all the files in `dir`, excluding those mentioned in .git.
    let walker = WalkBuilder::new(dir)
        // Include files whose name starts with a dot.
        .hidden(false)
        // Exclude the .git directory.
        .filter_entry(|e| {
            !(e.file_type().map(|ft| ft.is_dir()).unwrap_or(false) && e.file_name() == ".git")
        })
        .build();

    walker
        .filter_map(Result::ok)
        .map(|entry| Path::new(entry.path()).to_owned())
        .filter(|path| !path.is_dir())
        .map(|path| path.strip_prefix(dir).unwrap().to_path_buf())
        .collect()
}

/// Walk `lhs_dir` and `rhs_dir`, and return relative paths of files
/// that occur in at least one directory.
///
/// Attempts to preserve the ordering of files in both directories.
pub(crate) fn relative_paths_in_either(lhs_dir: &Path, rhs_dir: &Path) -> Vec<PathBuf> {
    let lhs_paths = relative_file_paths_in_dir(lhs_dir);
    let rhs_paths = relative_file_paths_in_dir(rhs_dir);

    let mut seen = DftHashSet::default();
    let mut paths: Vec<PathBuf> = vec![];

    let mut i = 0;
    let mut j = 0;

    loop {
        match (lhs_paths.get(i), rhs_paths.get(j)) {
            (Some(lhs_path), Some(rhs_path)) if lhs_path == rhs_path => {
                if !seen.contains(lhs_path) {
                    // It should be impossible to get duplicates, but
                    // be defensive.
                    paths.push(lhs_path.clone());
                    seen.insert(lhs_path);
                }

                i += 1;
                j += 1;
            }
            (Some(lhs_path), Some(rhs_path)) => {
                if seen.contains(lhs_path) {
                    i += 1;
                } else if seen.contains(rhs_path) {
                    j += 1;
                } else {
                    paths.push(lhs_path.clone());
                    paths.push(rhs_path.clone());

                    seen.insert(lhs_path);
                    seen.insert(rhs_path);

                    i += 1;
                    j += 1;
                }
            }
            _ => break,
        }
    }

    paths.extend(
        lhs_paths[i..]
            .iter()
            .filter(|&path| !seen.contains(path))
            .cloned(),
    );
    paths.extend(
        rhs_paths[j..]
            .iter()
            .filter(|&path| !seen.contains(path))
            .cloned(),
    );

    paths
}

#[cfg(test)]
mod tests {
    use super::*;

    fn guess_content(bytes: &[u8]) -> ProbableFileKind {
        super::guess_content(bytes, &FileArgument::Stdin, &[])
    }

    #[test]
    fn test_plaintext_is_text() {
        let s = "hello world";
        assert!(matches!(
            guess_content(s.as_bytes()),
            ProbableFileKind::Text(_)
        ));
    }

    #[test]
    // This test only works if the MIME database is present, so make
    // it opt-in.
    #[ignore]
    fn test_gzip_is_binary() {
        // Bytes for "echo "[]" | gzip -c | hexdump -C"
        let bytes = vec![
            0x1f, 0x8b, 0x08, 0x00, 0x3a, 0xb0, 0x91, 0x63, 0x00, 0x03, 0x8b, 0x8e, 0xe5, 0x02,
            0x00, 0x44, 0xd2, 0x68, 0x70, 0x03, 0x00, 0x00, 0x00,
        ];

        assert_eq!(guess_content(&bytes), ProbableFileKind::Binary);
    }

    #[test]
    fn test_dex_is_binary() {
        let bytes = vec![
            0x34, 0x8a, 0x4b, 0x8f, 0x77, 0xa4, 0x4e, 0xb1, 0x31, 0x2d, 0x5f, 0xfb, 0x10, 0x08,
            0xa8, 0x6b, 0x58, 0x06, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x78, 0x56, 0x34, 0x12,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x05, 0x00, 0x00, 0x23, 0x00,
            0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
        ];

        assert_eq!(guess_content(&bytes), ProbableFileKind::Binary);
    }

    #[test]
    fn test_png_bytes_are_binary() {
        let bytes = vec![
            0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48,
            0x44, 0x52, 0x00, 0x00, 0x03, 0x76, 0x00, 0x00, 0x01, 0xed, 0x08, 0x06, 0x00, 0x00,
            0x01, 0x22, 0x94, 0xdc, 0xb2, 0x00, 0x00, 0x1b, 0x5a, 0x7a, 0x54, 0x58, 0x74, 0x52,
            0x61, 0x77, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x74, 0x79, 0x70,
            0x65, 0x20, 0x65, 0x78, 0x69, 0x66, 0x00, 0x00, 0x78, 0xda, 0xad, 0x9b, 0x69, 0x76,
            0x1c, 0xb7, 0x92, 0x85, 0xff, 0x63, 0x15, 0xbd, 0x04, 0x4c, 0x81, 0x61, 0x39, 0x18,
            0xcf, 0x79, 0x3b, 0xe8, 0xe5, 0xf7, 0x77, 0xb3, 0x48, 0x8a, 0x92, 0xa8, 0xc1, 0xcf,
            0x2d, 0xda, 0x2a, 0xba, 0x2a, 0x2b, 0x13, 0x19, 0xc3, 0x1d, 0x02, 0x69, 0x77, 0xfe,
            0xf7, 0x3f, 0xd7, 0xfd, 0x0f, 0x7f, 0x4a, 0x6f, 0xc5, 0x65, 0xab, 0xad, 0xf4, 0x52,
            0x3c, 0x7f, 0x72, 0xcf, 0x3d, 0x0e, 0x7e, 0x69, 0xfe, 0xdb, 0x9f, 0xf3, 0xf6, 0xda,
            0xbd, 0xbf, 0xfa, 0x3d, 0xf3, 0x6f, 0x78, 0x7b, 0x2f, 0x7c, 0x1c, 0x15, 0xdc, 0x77,
            0x1f, 0xbc, 0xff, 0x16, 0xf8, 0xf9, 0xf4, 0x7e, 0x7b, 0x3f, 0x59, 0xe4, 0x9d, 0xc4,
            0x6b, 0x7a, 0x7b, 0xff, 0xfd, 0x5b, 0x49, 0x27, 0x4a, 0x9f, 0x4e, 0x54, 0x3e, 0x5e,
            0xc3, 0x57, 0xef, 0x07, 0xfb, 0xe1, 0xfd, 0xf4, 0x71, 0xf9, 0xf8, 0xdd, 0x8a, 0x5a,
            0xf9, 0xb8, 0x72, 0xfc, 0xfc, 0xfe, 0x3c, 0x61, 0xf8, 0xcf, 0x7f, 0xda, 0xb7, 0x7f,
            0xef, 0xdd, 0xed, 0x72, 0xcf, 0x4e, 0x47, 0xe7, 0x91, 0x0b, 0xf1, 0x29, 0x6f, 0x37,
            0xf5, 0x7e, 0x8b, 0xcf, 0x6f, 0x1c, 0x38, 0x09, 0x4c, 0x7a, 0xbe, 0x56, 0xf8, 0xa9,
            0xfc, 0x6b, 0xfc, 0x5e, 0x9f, 0x9f, 0xce, 0x4f, 0xf3, 0xc3, 0x2f, 0x17, 0xb2, 0xdf,
            0x7e, 0xf9, 0xc9, 0xcf, 0x0a, 0x3d, 0xc4, 0x90, 0xfc, 0x0d, 0x39, 0xec, 0x30, 0xc2,
            0x0d, 0xe7, 0x79, 0x5d, 0x61, 0xb1, 0xc4, 0x1c, 0x4f, 0xac, 0xbc, 0xc6, 0xb8, 0x62,
            0x7a, 0xde, 0x6b, 0xa9, 0xc6, 0x1e, 0x57, 0xf2, 0x29, 0xa4, 0xec, 0x52, 0x4e, 0x39,
            0xdc, 0x58, 0x53, 0x4f, 0x3b, 0xb5, 0x14, 0xd3, 0x8a, 0x27, 0x25, 0xde, 0x8d, 0x1f,
            0x6b, 0x09, 0xcf, 0x75, 0xfb, 0x73, 0xb9, 0x15, 0x1a, 0x17, 0xde, 0x81, 0x23, 0x63,
            0xe0, 0x64, 0x81, 0x6f, 0x3c, 0x3f, 0xee, 0xfd, 0x97, 0x7f, 0xfb, 0xf3, 0xe5, 0x89,
            0xee, 0x5d, 0x0a, 0x51, 0x50, 0x30, 0x49, 0x7d, 0x78, 0x25, 0x38, 0x46, 0xa5, 0x21,
            0x28, 0x8a, 0x49, 0x7f, 0x73, 0x14, 0x09, 0x09, 0xf7, 0xbd, 0x8e, 0xec, 0x09, 0xf0,
            0xfb, 0xcf, 0x8f, 0x7f, 0x48, 0x2c, 0x27, 0xc9, 0x1c, 0xa5, 0x30, 0x37, 0x6e, 0x70,
            0xf8, 0xf9, 0x3a, 0xc5, 0xb4, 0xf0, 0xad, 0xb6, 0x92, 0x7b, 0x12, 0x9d, 0x38, 0xd0,
            0x78, 0xcd, 0xaf, 0x2f, 0xd7, 0xfd, 0x76, 0x02, 0x42, 0xc4, 0xb5, 0x8d, 0xc5, 0x84,
            0x44, 0x06, 0x7c, 0x09, 0xc9, 0x42, 0x09, 0xbe, 0xc6, 0x58, 0x43, 0x20, 0x8e, 0x8d,
            0xfc, 0x0c, 0x56, 0x1e, 0x93, 0xcb, 0x71, 0x92, 0x82, 0x60, 0x16, 0x37,
        ];
        assert_eq!(guess_content(&bytes), ProbableFileKind::Binary);
    }
}
