//! File reading utilities.

use std::{fs, io::ErrorKind::*, path::Path};

pub fn read_files_or_die(
    lhs_path: &Path,
    rhs_path: &Path,
    missing_as_empty: bool,
) -> (Vec<u8>, Vec<u8>) {
    let lhs_res = fs::read(lhs_path);
    let rhs_res = fs::read(rhs_path);

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
            std::process::exit(1);
        }
    }
}

fn eprint_read_error(path: &Path, e: &std::io::Error) {
    match e.kind() {
        std::io::ErrorKind::NotFound => {
            eprintln!("No such file: {}", path.display());
        }
        std::io::ErrorKind::PermissionDenied => {
            eprintln!("Permission denied when reading file: {}", path.display());
        }
        _ => {
            eprintln!(
                "Could not read file: {} (error {:?})",
                path.display(),
                e.kind()
            );
        }
    };
}

pub fn read_or_die(path: &Path) -> Vec<u8> {
    match fs::read(path) {
        Ok(src) => src,
        Err(e) => {
            eprint_read_error(path, &e);
            std::process::exit(1);
        }
    }
}

/// Do these bytes look like a binary (non-textual) format?
pub fn is_probably_binary(bytes: &[u8]) -> bool {
    // If more than 20 of the first 1,000 characters are not valid
    // UTF-8, we assume it's binary.
    let num_replaced = String::from_utf8_lossy(bytes)
        .to_string()
        .chars()
        .take(1000)
        .filter(|c| *c == std::char::REPLACEMENT_CHARACTER)
        .count();
    num_replaced > 20
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_text_is_not_binary() {
        let s = "hello world";
        assert!(!is_probably_binary(s.as_bytes()));
    }
}
