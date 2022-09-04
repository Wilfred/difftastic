//! File reading utilities.

use std::{
    fs,
    io::ErrorKind::*,
    path::{Path, PathBuf},
};

use rustc_hash::FxHashSet;
use walkdir::WalkDir;

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

        // Treat /dev/null as an empty file, even on platforms like
        // Windows where this path doesn't exist. Git uses /dev/null
        // regardless of the platform.
        (Ok(lhs_src), Err(_)) if rhs_path == Path::new("/dev/null") => (lhs_src, vec![]),
        (Err(_), Ok(rhs_src)) if lhs_path == Path::new("/dev/null") => (vec![], rhs_src),

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

/// All the files in `dir`, including subdirectories.
fn relative_file_paths_in_dir(dir: &Path) -> Vec<PathBuf> {
    WalkDir::new(dir)
        .into_iter()
        .filter_map(Result::ok)
        .map(|entry| entry.into_path())
        .filter(|path| !path.is_dir())
        .map(|path| path.strip_prefix(dir).unwrap().to_path_buf())
        .collect()
}

/// Walk `lhs_dir` and `rhs_dir`, and return relative paths of files
/// that occur in at least one directory.
///
/// Attempts to preserve the ordering of files in both directories.
pub fn relative_paths_in_either(lhs_dir: &Path, rhs_dir: &Path) -> Vec<PathBuf> {
    let lhs_paths = relative_file_paths_in_dir(lhs_dir);
    let rhs_paths = relative_file_paths_in_dir(rhs_dir);

    let mut seen = FxHashSet::default();
    let mut res: Vec<PathBuf> = vec![];

    let mut i = 0;
    let mut j = 0;

    loop {
        match (lhs_paths.get(i), rhs_paths.get(j)) {
            (Some(lhs_path), Some(rhs_path)) if lhs_path == rhs_path => {
                if !seen.contains(lhs_path) {
                    // It should be impossible to get duplicates, but
                    // be defensive.
                    res.push(lhs_path.clone());
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
                    res.push(lhs_path.clone());
                    res.push(rhs_path.clone());

                    seen.insert(lhs_path);
                    seen.insert(rhs_path);

                    i += 1;
                    j += 1;
                }
            }
            _ => break,
        }
    }

    res.extend(lhs_paths.into_iter().skip(i));
    res.extend(rhs_paths.into_iter().skip(j));

    res
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
