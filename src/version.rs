use std::fmt;

use lazy_static::lazy_static;

pub struct CommitInfo {
    pub short_commit_hash: &'static str,
    pub commit_hash: &'static str,
    pub commit_date: &'static str,
}

pub struct VersionInfo {
    pub version: &'static str,
    pub commit_info: Option<CommitInfo>,
}

impl fmt::Display for VersionInfo {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}", self.version)?;

        if let Some(ref ci) = &self.commit_info {
            write!(f, " ({} {})", ci.short_commit_hash, ci.commit_date)?;
        }
        Ok(())
    }
}

lazy_static! {
    pub static ref VERSION: String = version().to_string();
}

pub const fn version() -> VersionInfo {
    let version = env!("CARGO_PKG_VERSION");
    let commit_info = match (
        option_env!("DFT_COMMIT_SHORT_HASH"),
        option_env!("DFT_COMMIT_HASH"),
        option_env!("DFT_COMMIT_DATE"),
    ) {
        (Some(short_commit_hash), Some(commit_hash), Some(commit_date)) => Some(CommitInfo {
            short_commit_hash,
            commit_hash,
            commit_date,
        }),
        _ => None,
    };

    VersionInfo {
        version,
        commit_info,
    }
}
