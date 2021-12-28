//! File reading utilities.

use std::{fs, path::Path};

pub fn read_or_die(path: &Path) -> Vec<u8> {
    match fs::read(path) {
        Ok(src) => src,
        Err(e) => {
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
