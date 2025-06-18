use std::fmt;

use lazy_static::lazy_static;

pub(crate) struct CommitInfo {
    pub(crate) short_commit_hash: &'static str,
    pub(crate) commit_date: &'static str,
}

pub(crate) struct VersionInfo {
    pub(crate) version: &'static str,
    pub(crate) commit_info: Option<CommitInfo>,
    pub(crate) rustc_version: Option<&'static str>,
}

impl fmt::Display for VersionInfo {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}\n\n", self.version)?;

        if let Some(commit_info) = &self.commit_info {
            writeln!(
                f,
                "Revision:  {} {}",
                commit_info.short_commit_hash, commit_info.commit_date
            )?;
        }
        if let Some(rustc_version) = self.rustc_version {
            writeln!(f, "Toolchain: {}", rustc_version)?;
        }

        // Users running difftastic in containers sometimes have
        // issues with permissions reading from /tmp, which is where
        // git writes temporary files. Display whether the environment
        // looks like a container.
        let container_env = if std::env::var("container").is_ok() {
            " (probably Flatpak)"
        } else if std::env::var("APPIMAGE").is_ok() {
            " AppImage"
        } else if std::env::var("SNAP").is_ok() {
            " Snap"
        } else {
            ""
        };

        writeln!(
            f,
            "System:    {} {}{}",
            std::env::consts::OS,
            std::env::consts::ARCH,
            container_env
        )
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

    let rustc_version = option_env!("DFT_RUSTC_VERSION");

    VersionInfo {
        version,
        commit_info,
        rustc_version,
    }
}
