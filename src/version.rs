use std::fmt;

use lazy_static::lazy_static;

pub(crate) struct CommitInfo {
    pub(crate) short_commit_hash: &'static str,
    pub(crate) commit_date: &'static str,
}

pub(crate) struct VersionInfo {
    pub(crate) version: &'static str,
    pub(crate) commit_info: Option<CommitInfo>,
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
    pub(crate) static ref VERSION: String = version().to_string();
}

pub(crate) const fn version() -> VersionInfo {
    let version = env!("CARGO_PKG_VERSION");
    let commit_info = match (
        option_env!("DFT_COMMIT_SHORT_HASH"),
        option_env!("DFT_COMMIT_DATE"),
    ) {
        (Some(short_commit_hash), Some(commit_date)) => Some(CommitInfo {
            short_commit_hash,
            commit_date,
        }),
        _ => None,
    };

    VersionInfo {
        version,
        commit_info,
    }
}
