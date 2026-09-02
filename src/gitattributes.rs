use std::path::Path;
use std::process::Command;

/// The `git check-attr` results that difftastic uses.
#[derive(Debug, PartialEq)]
pub(crate) struct GitAttributes {
    pub(crate) diff: DiffAttribute,

    /// The value of the `linguist-language` attribute, if it's set to a
    /// value. This is the same attribute that GitHub's linguist uses to
    /// override its own language detection.
    ///
    /// See <https://github.com/github-linguist/linguist/blob/master/docs/overrides.md>.
    pub(crate) linguist_language: Option<String>,
}

/// The result of checking file's `diff` and `binary` attributes with `git check-attr`.
/// See man gitattributes, specifically **Generating diff text** section.
#[derive(Debug, PartialEq)]
pub(crate) enum DiffAttribute {
    /// The file type (text vs binary) will be autodetected.
    ///
    /// This is the default setting, when `diff` attribute is not present.
    Unspecified,

    /// The file should be treated as text.
    ///
    /// Corresponds to set `diff` attribute, unless `binary` attribute is set.
    AssumeText,

    /// The file should be treated as binary, and no diff will be shown.
    /// Sometimes this option is set for generated text files.
    ///
    /// Corresponds to explicitly unset `diff` attribute (`-diff`), or when `binary` attribute is
    /// set.
    AssumeBinary,
}

/// Runs `git check-attr diff binary linguist-language` to get those attributes of the path.
/// Returns [`Option::None`] when either `git` is not available, file is not inside git directory,
/// or something else went wrong.
pub(crate) fn check_attrs(path: &Path) -> Option<GitAttributes> {
    let res = Command::new("git")
        .args([
            "check-attr",
            "diff",
            "binary",
            "linguist-language",
            "-z",
            "--",
        ])
        .arg(path)
        .output();

    match res {
        Ok(output) => {
            // Running git outside of git repository, or perhaps many other error conditions, will
            // result in this. Since we run git check-attr eagerly, and can't distinguish the error
            // conditions easily and reliably, log just a debug message.
            if !output.status.success() {
                debug!(
                    "git check-attr exited with status {}: \"{}\"",
                    output.status,
                    output.stderr.escape_ascii()
                );
                return None;
            }

            let output = &output.stdout;
            debug!(
                "git check-attr output: {:?}",
                String::from_utf8_lossy(output)
            );

            match parse_output(output) {
                Some(res) => {
                    trace!("git check-attr result: {:?}", res);
                    return Some(res);
                }
                None => {
                    warn!(
                        "malformed git check-attr output: \"{}\"",
                        output.escape_ascii()
                    );
                }
            }
        }
        Err(err) => {
            debug!("failed to execute git: {err}");
        }
    }

    None
}

fn parse_output(output: &[u8]) -> Option<GitAttributes> {
    // The git check-attr -z output format is repeated
    //     <path> NUL <attribute> NUL <info> NUL
    //
    // The path is repeated before every attribute, not written once for the whole group.
    //
    // This function assumes git check-attr diff binary linguist-language -z -- PATH, so the
    // output contains attributes only for the specified file, and thus we don't even look at
    // path.

    let mut binary_set = false;
    let mut diff = DiffAttribute::Unspecified;
    let mut linguist_language = None;

    let mut it = output.split(|&b| b == b'\0');
    while let Some(path) = it.next() {
        if path.is_empty() {
            // Bogus "path" after the last NUL.
            // It would be a tad cleaner if split_terminator was available for &[u8]...
            break;
        }
        let attribute = it.next()?;
        let info = it.next()?;

        match attribute {
            b"diff" => {
                // this is only lossy for custom driver variant, which we don't support, and it's
                // quite unlikely to contain invalid UTF-8 (who puts their binaries in files named
                // by invalid strings?)
                match info {
                    b"set" => diff = DiffAttribute::AssumeText,
                    b"unset" => diff = DiffAttribute::AssumeBinary,
                    _ => (),
                }
            }
            b"binary" => {
                if info == b"set" {
                    binary_set = true;
                }
            }
            b"linguist-language" => {
                // git reports "unspecified" when the attribute isn't set at all, "set" when it's
                // set without a value, and "unset" for `-linguist-language`. None of those name a
                // language, so only treat anything else as a language name.
                if !matches!(info, b"unspecified" | b"set" | b"unset") {
                    linguist_language = Some(String::from_utf8_lossy(info).into_owned());
                }
            }
            _ => {
                warn!(
                    "unexpected attribute in git check-attr output: \"{}\"",
                    attribute.escape_ascii()
                );
            }
        }
    }

    if binary_set {
        // assume user doesn't want to see the diff, even if they specify diff=whatever
        diff = DiffAttribute::AssumeBinary;
    }

    Some(GitAttributes {
        diff,
        linguist_language,
    })
}

#[cfg(test)]
mod tests {
    use pretty_assertions::assert_eq;

    use super::*;

    fn diff_attr(output: &[u8]) -> Option<DiffAttribute> {
        parse_output(output).map(|attrs| attrs.diff)
    }

    fn linguist_language(output: &[u8]) -> Option<String> {
        parse_output(output).and_then(|attrs| attrs.linguist_language)
    }

    #[test]
    fn test_parse_output() {
        // The test case assumes fictional git repository with the following .gitattributes
        // contents to ignore generated protobuf files, but see generated gRPC files, and uses
        // imaginary "hex" diff driver for wtf.bin files:
        //
        //     /protos/*.pb.go -diff
        //     /protos/*_grpc.pb.go diff
        //     wtf.bin binary diff=hex
        //

        // This is a plaintext file, no attributes, assume regular text diff
        assert_eq!(
            diff_attr(b"protos/difft.proto\x00diff\x00unspecified\x00protos/difft.proto\x00binary\x00unspecified\x00"),
            Some(DiffAttribute::Unspecified)
        );

        // This is a generated file with diff attribute unset (we don't want to look into its diff)
        assert_eq!(
            diff_attr(b"protos/difft.pb.go\x00diff\x00unset\x00protos/difft.pb.go\x00binary\x00unspecified\x00"),
            Some(DiffAttribute::AssumeBinary)
        );

        // diff attribute is explicitly re-enabled for this file
        assert_eq!(
            diff_attr(b"protos/difft_grpc.pb.go\x00diff\x00set\x00protos/difft_grpc.pb.go\x00binary\x00unspecified\x00"),
            Some(DiffAttribute::AssumeText)
        );

        // Although diff=hex basically undoes the effect of binary macro attribute, we assume the
        // user doesn't want to see them here. difft doesn't run git diff drivers, after all.
        assert_eq!(
            diff_attr(b"wtf.bin\x00diff\x00hex\x00wtf.bin\x00binary\x00set\x00"),
            Some(DiffAttribute::AssumeBinary)
        );
    }

    #[test]
    fn test_parse_linguist_language() {
        // For a .gitattributes containing:
        //
        //     *.props linguist-language=XML
        //
        assert_eq!(
            linguist_language(
                b"Directory.Build.props\x00diff\x00unspecified\x00Directory.Build.props\x00binary\x00unspecified\x00Directory.Build.props\x00linguist-language\x00XML\x00"
            ),
            Some("XML".to_owned())
        );
    }

    #[test]
    fn test_parse_linguist_language_absent() {
        // git reports these three states when the attribute doesn't have a value. None of them
        // name a language.
        for info in [b"unspecified".as_slice(), b"set", b"unset"] {
            let mut output = b"foo.rs\x00linguist-language\x00".to_vec();
            output.extend_from_slice(info);
            output.push(b'\0');

            assert_eq!(linguist_language(&output), None, "info: {:?}", info);
        }
    }

    #[test]
    fn test_parse_linguist_language_with_diff_attrs() {
        // linguist-language should be reported alongside the diff attributes, not instead of them.
        assert_eq!(
            parse_output(b"gen.xml\x00diff\x00unset\x00gen.xml\x00linguist-language\x00XML\x00"),
            Some(GitAttributes {
                diff: DiffAttribute::AssumeBinary,
                linguist_language: Some("XML".to_owned()),
            })
        );
    }
}
