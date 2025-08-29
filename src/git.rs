use std::path::Path;
use std::process::Command;

/// Corresponds to the diff attribute. See man gitattribute.
pub(crate) enum DiffAttribute {
    Set,
    Unset,
    Unspecified,
    Other,
}

impl From<&str> for DiffAttribute {
    fn from(s: &str) -> Self {
        match s {
            "set" => Self::Set,
            "unset" => Self::Unset,
            "unspecified" => Self::Unspecified,
            _ => Self::Other,
        }
    }
}

/// Runs `git check-attr diff` to get the diff attribute of the path. Returns
/// [`Option::None`] when either `git` is not available, file is not inside git
/// directory, or something else went wrong.
pub(crate) fn check_attr(path: &Path) -> Option<DiffAttribute> {
    let res = Command::new("git")
        .args(["check-attr", "diff", "-z", "--"])
        .arg(path)
        .output();

    match res {
        Ok(output) => {
            // Either git is not available, or file is outside git directory.
            if !output.status.success() {
                debug!("git check-attr exited with status {}", output.status);
                return None;
            }

            // The output format is "path" "attribute name" "value". We
            // specified both path and attribute name explicitly,
            // so we only need value here.
            let stdout = &output.stdout;
            let value = stdout.split(|&b| b == b'\0').nth(2);
            match value {
                None => {
                    warn!("malformed git check-attr output {stdout:#?}");
                }
                Some(value) => match std::str::from_utf8(value) {
                    Ok(s) => return Some(s.into()),
                    Err(err) => {
                        warn!("invalid diff attribute value: {err}");
                    }
                },
            }
        }
        Err(err) => {
            warn!("failed to execute git: {err}");
        }
    }

    None
}
