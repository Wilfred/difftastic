//! CLI option parsing.

use std::{
    env,
    ffi::OsStr,
    fmt::Display,
    path::{Path, PathBuf},
};

use clap::{crate_authors, crate_description, Arg, Command};
use const_format::formatcp;
use crossterm::tty::IsTty;
use itertools::Itertools;

use crate::{
    display::style::BackgroundColor,
    exit_codes::EXIT_BAD_ARGUMENTS,
    parse::guess_language::{language_override_from_name, LanguageOverride},
    theme::Theme,
    version::VERSION,
};

pub(crate) const DEFAULT_BYTE_LIMIT: usize = 1_000_000;
// Chosen experimentally: this is sufficiently many for all the sample
// files (the highest is slow_before/after.rs at 1.3M nodes), but
// small enough to terminate in ~5 seconds like the test file in #306.
pub(crate) const DEFAULT_GRAPH_LIMIT: usize = 3_000_000;
pub(crate) const DEFAULT_PARSE_ERROR_LIMIT: usize = 0;

pub(crate) const DEFAULT_TAB_WIDTH: usize = 4;

pub(crate) const USAGE: &str = concat!(env!("CARGO_BIN_NAME"), " [OPTIONS] OLD-PATH NEW-PATH");

#[derive(Debug, Clone, Copy)]
pub(crate) enum ColorOutput {
    Always,
    Auto,
    Never,
}

#[derive(Debug, Clone)]
pub(crate) struct DisplayOptions {
    pub(crate) theme: Theme,
    pub(crate) background_color: BackgroundColor,
    pub(crate) use_color: bool,
    pub(crate) display_mode: DisplayMode,
    pub(crate) print_unchanged: bool,
    pub(crate) tab_width: usize,
    pub(crate) display_width: usize,
    pub(crate) num_context_lines: u32,
    pub(crate) syntax_highlight: bool,
    pub(crate) sort_paths: bool,
}

impl Default for DisplayOptions {
    fn default() -> Self {
        Self {
            theme: Theme::default(),
            background_color: BackgroundColor::Dark,
            use_color: false,
            display_mode: DisplayMode::SideBySide,
            print_unchanged: true,
            tab_width: 8,
            display_width: 80,
            num_context_lines: 3,
            syntax_highlight: true,
            sort_paths: false,
        }
    }
}

#[derive(Debug, Clone)]
pub(crate) struct DiffOptions {
    pub(crate) graph_limit: usize,
    pub(crate) byte_limit: usize,
    pub(crate) parse_error_limit: usize,
    pub(crate) check_only: bool,
    pub(crate) ignore_comments: bool,
    pub(crate) strip_cr: bool,
}

impl Default for DiffOptions {
    fn default() -> Self {
        Self {
            graph_limit: DEFAULT_GRAPH_LIMIT,
            byte_limit: DEFAULT_BYTE_LIMIT,
            parse_error_limit: DEFAULT_PARSE_ERROR_LIMIT,
            check_only: false,
            ignore_comments: false,
            strip_cr: false,
        }
    }
}

fn app() -> clap::Command<'static> {
    Command::new("Difftastic")
        .override_usage(USAGE)
        .version(VERSION.as_str())
        .about(crate_description!())
        .author(crate_authors!())
        .after_long_help(concat!(
            "You can compare two files with difftastic by specifying them as arguments.\n\n",
            "$ ",
            env!("CARGO_BIN_NAME"),
            " old.js new.js\n\n",
            "You can also use directories as arguments. Difftastic will walk both directories and compare files with matching names.\n\n",
            "$ ",
            env!("CARGO_BIN_NAME"),
            " old/ new/\n\n",
            "If you have a file with conflict markers, you can pass it as a single argument. Difftastic will diff the two conflicting file states.\n\n",
            "$ ",
            env!("CARGO_BIN_NAME"),
            " file_with_conflicts.js\n\n",
            "Difftastic can also be invoked with 7 arguments in the format that GIT_EXTERNAL_DIFF expects.\n\n",
            "See the full manual at: https://difftastic.wilfred.me.uk/")
        )
        .arg(
            Arg::new("dump-syntax")
                .long("dump-syntax")
                .takes_value(true)
                .value_name("PATH")
                .long_help(
                    "Parse a single file with tree-sitter and display the difftastic syntax tree.",
                ).help_heading("DEBUG OPTIONS"),
        )
        .arg(
            Arg::new("dump-ts")
                .long("dump-ts")
                .takes_value(true)
                .value_name("PATH")
                .long_help(
                    "Parse a single file with tree-sitter and display the tree-sitter parse tree.",
                ).help_heading("DEBUG OPTIONS"),
        )
        .arg(
            Arg::new("context")
                .long("context")
                .takes_value(true)
                .value_name("LINES")
                .long_help("The number of contextual lines to show around changed lines.")
                .default_value("3")
                .env("DFT_CONTEXT")
                .validator(|s| s.parse::<u32>())
                .required(false),
        )
        .arg(
            Arg::new("width")
                .long("width")
                .takes_value(true)
                .value_name("COLUMNS")
                .long_help("Use this many columns when calculating line wrapping. If not specified, difftastic will detect the terminal width.")
                .env("DFT_WIDTH")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("tab-width")
                .long("tab-width")
                .takes_value(true)
                .value_name("NUM_SPACES")
                .long_help("Treat a tab as this many spaces.")
                .env("DFT_TAB_WIDTH")
                .default_value(formatcp!("{}", DEFAULT_TAB_WIDTH))
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("display").long("display")
                .possible_values(["side-by-side", "side-by-side-show-both", "inline", "json"])
                .default_value("side-by-side")
                .value_name("MODE")
                .env("DFT_DISPLAY")
                .help("Display mode for showing results.

side-by-side: Display the before file and the after file in two separate columns, with line numbers aligned according to unchanged content. If a change is exclusively additions or exclusively removals, use a single column.

side-by-side-show-both: The same as side-by-side, but always uses two columns.

inline: A single column display, closer to traditional diff display.

json: Output the results as a machine-readable JSON array with an element per file.")
        )
        .arg(
            Arg::new("color").long("color")
                .possible_values(["always", "auto", "never"])
                .default_value("auto")
                .env("DFT_COLOR")
                .value_name("WHEN")
                .help("When to use color output.")
        )
        .arg(
            Arg::new("background").long("background")
                .value_name("BACKGROUND")
                .env("DFT_BACKGROUND")
                .possible_values(["dark", "light"])
                .default_value("dark")
                .help("Set the background brightness. Difftastic will prefer brighter colours on dark backgrounds.")
        )
        .arg(
            Arg::new("syntax-highlight").long("syntax-highlight")
                .value_name("on/off")
                .env("DFT_SYNTAX_HIGHLIGHT")
                .possible_values(["on", "off"])
                .default_value("on")
                .help("Enable or disable syntax highlighting.")
        )
        .arg(
            Arg::new("exit-code").long("exit-code")
                .env("DFT_EXIT_CODE")
                .help("Set the exit code to 1 if there are syntactic changes in any files. For files where there is no detected language (e.g. unsupported language or binary files), sets the exit code if there are any byte changes.")
        )
        .arg(
            Arg::new("strip-cr").long("strip-cr")
                .env("DFT_STRIP_CR")
                .help("Remove any carriage return characters before diffing. This can be helpful when dealing with files on Windows that contain CRLF, i.e. `\\r\\n`.")
        )
        .arg(
            Arg::new("check-only").long("check-only")
                .env("DFT_CHECK_ONLY")
                .help("Report whether there are any changes, but don't calculate them. Much faster.")
        )
        .arg(
            Arg::new("ignore-comments").long("ignore-comments")
                .env("DFT_IGNORE_COMMENTS")
                .help("Don't consider comments when diffing.")
        )
        .arg(
            Arg::new("skip-unchanged").long("skip-unchanged")
                .env("DFT_SKIP_UNCHANGED")
                .help("Don't display anything if a file is unchanged.")
        )
        .arg(
            Arg::new("missing-as-empty").long("missing-as-empty")
                .help("Treat paths that don't exist as equivalent to an empty file. Only applies when diffing files, not directories.")
        )
        .arg(
            Arg::new("override").long("override")
                .value_name("GLOB:NAME")
                .help(concat!("Associate this glob pattern with this language, overriding normal language detection. For example:

$ ", env!("CARGO_BIN_NAME"), " --override='*.c:C++' old.c new.c

See --list-languages for the list of language names. Language names are matched case insensitively. Overrides may also specify the language \"text\" to treat a file as plain text.

This argument may be given more than once. For example:

$ ", env!("CARGO_BIN_NAME"), " --override='CustomFile:json' --override='*.c:text' old.c new.c

To configure multiple overrides using environment variables, difftastic also accepts DFT_OVERRIDE_1 up to DFT_OVERRIDE_9.

$ export DFT_OVERRIDE='CustomFile:json'
$ export DFT_OVERRIDE_1='*.c:text'
$ export DFT_OVERRIDE_2='*.js:javascript jsx'

When multiple overrides are specified, the first matching override wins."))
                .env("DFT_OVERRIDE")
                .multiple_occurrences(true)
        )
        .arg(
            Arg::new("list-languages").long("list-languages")
                .help("Print the all the languages supported by difftastic, along with their extensions.")
        )
        .arg(
            Arg::new("byte-limit").long("byte-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help("Use a text diff if either input file exceeds this size.")
                .default_value(formatcp!("{}", DEFAULT_BYTE_LIMIT))
                .env("DFT_BYTE_LIMIT")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("graph-limit").long("graph-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help("Use a text diff if the structural graph exceed this number of nodes in memory.")
                .default_value(formatcp!("{}", DEFAULT_GRAPH_LIMIT))
                .env("DFT_GRAPH_LIMIT")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("parse-error-limit").long("parse-error-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help("Use a text diff if the number of parse errors exceeds this value.")
                .default_value(formatcp!("{}", DEFAULT_PARSE_ERROR_LIMIT))
                .env("DFT_PARSE_ERROR_LIMIT")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("paths")
                .value_name("PATHS")
                .multiple_values(true)
                .hide(true)
                .allow_invalid_utf8(true),
        )
        .arg(
            Arg::new("sort-paths").long("sort-paths")
                .env("DFT_SORT_PATHS")
                .help("When diffing a directory, output the results sorted by path. This is slower.")
        )
        .arg_required_else_help(true)
}

#[derive(Debug, Copy, Clone)]
pub(crate) enum DisplayMode {
    Inline,
    SideBySide,
    SideBySideShowBoth,
    Json,
}

#[derive(Eq, PartialEq, Debug)]
pub(crate) enum FileArgument {
    NamedPath(std::path::PathBuf),
    Stdin,
    DevNull,
}

impl FileArgument {
    pub(crate) fn permissions(&self) -> Option<FilePermissions> {
        match self {
            FileArgument::NamedPath(path) => {
                // When used with `git difftool`, the first argument
                // is a temporary file that always has the same
                // permissions. That doesn't mean the file permissions
                // have changed, so we shouldn't compare.
                if is_git_tmpfile(path) {
                    return None;
                }

                let metadata = std::fs::metadata(path).ok()?;
                Some(metadata.permissions().into())
            }
            FileArgument::Stdin => None,
            FileArgument::DevNull => None,
        }
    }
}

/// A cross-platform representation of file permissions.
///
/// We're only interested in whether two permissions are the same, and
/// how to display them, so internally this is just a human-friendly
/// string.
#[derive(Debug, Eq, PartialEq)]
pub(crate) struct FilePermissions(String);

impl Display for FilePermissions {
    fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
        write!(f, "{}", self.0)
    }
}

impl TryFrom<&OsStr> for FilePermissions {
    type Error = ();

    fn try_from(s: &OsStr) -> Result<Self, Self::Error> {
        if s == "." {
            Err(())
        } else {
            Ok(Self(s.to_string_lossy().into_owned()))
        }
    }
}

#[cfg(unix)]
impl From<std::fs::Permissions> for FilePermissions {
    fn from(perms: std::fs::Permissions) -> Self {
        use std::os::unix::fs::PermissionsExt;
        Self(format!("{:o}", perms.mode()))
    }
}

#[cfg(not(unix))]
impl From<std::fs::Permissions> for FilePermissions {
    fn from(perms: std::fs::Permissions) -> Self {
        let s = if perms.readonly() {
            "readonly"
        } else {
            "read-write"
        };
        Self(s.to_owned())
    }
}

fn try_canonicalize(path: &Path) -> PathBuf {
    path.canonicalize().unwrap_or_else(|_| path.into())
}

fn relative_to_current(path: &Path) -> PathBuf {
    if let Ok(current_path) = std::env::current_dir() {
        let path = try_canonicalize(path);
        let current_path = try_canonicalize(&current_path);

        if let Ok(rel_path) = path.strip_prefix(current_path) {
            return rel_path.into();
        }
    }

    path.into()
}

impl FileArgument {
    /// Return a `FileArgument` representing this command line
    /// argument.
    pub(crate) fn from_cli_argument(arg: &OsStr) -> Self {
        if arg == "/dev/null" {
            FileArgument::DevNull
        } else if arg == "-" {
            FileArgument::Stdin
        } else {
            FileArgument::NamedPath(PathBuf::from(arg))
        }
    }

    /// Return a `FileArgument` that always represents a path that
    /// exists, with the exception of `/dev/null`, which is turned into [FileArgument::DevNull].
    pub(crate) fn from_path_argument(arg: &OsStr) -> Self {
        // For new and deleted files, Git passes `/dev/null` as the reference file.
        if arg == "/dev/null" {
            FileArgument::DevNull
        } else {
            FileArgument::NamedPath(PathBuf::from(arg))
        }
    }
}

impl Display for FileArgument {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            FileArgument::NamedPath(path) => {
                write!(f, "{}", relative_to_current(path).display())
            }
            FileArgument::Stdin => write!(f, "(stdin)"),
            FileArgument::DevNull => write!(f, "/dev/null"),
        }
    }
}

pub(crate) enum Mode {
    Diff {
        diff_options: DiffOptions,
        display_options: DisplayOptions,
        set_exit_code: bool,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
        /// The path where we can read the LHS file. This is often a
        /// temporary file generated by source control.
        lhs_path: FileArgument,
        /// The path where we can read the RHS file. This is often a
        /// temporary file generated by source control.
        rhs_path: FileArgument,
        lhs_permissions: Option<FilePermissions>,
        rhs_permissions: Option<FilePermissions>,
        /// The path that we show to the user.
        display_path: String,
        /// If this file has been renamed, a description of the change.
        renamed: Option<String>,
    },
    DiffFromConflicts {
        diff_options: DiffOptions,
        display_options: DisplayOptions,
        set_exit_code: bool,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
        path: FileArgument,
        /// The path that we show to the user.
        display_path: String,
    },
    ListLanguages {
        use_color: bool,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
    },
    DumpTreeSitter {
        path: String,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
    },
    DumpSyntax {
        path: String,
        ignore_comments: bool,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
    },
}

fn common_path_suffix(lhs_path: &Path, rhs_path: &Path) -> Option<String> {
    let lhs_rev_components = lhs_path
        .components()
        .map(|c| c.as_os_str())
        .rev()
        .collect::<Vec<_>>();
    let rhs_rev_components = rhs_path
        .components()
        .map(|c| c.as_os_str())
        .rev()
        .collect::<Vec<_>>();

    let mut common_components = vec![];
    for (lhs_component, rhs_component) in lhs_rev_components.iter().zip(rhs_rev_components.iter()) {
        if lhs_component == rhs_component {
            common_components.push(lhs_component.to_string_lossy());
        } else {
            break;
        }
    }

    if common_components.is_empty() {
        None
    } else {
        common_components.reverse();
        Some(common_components.join(&std::path::MAIN_SEPARATOR.to_string()))
    }
}

/// Does `path` look like "/tmp/git-blob-abcdef/modified_field.txt"?
fn is_git_tmpfile(path: &Path) -> bool {
    let Ok(rel_path) = path.strip_prefix(std::env::temp_dir()) else {
        return false;
    };

    let components: Vec<_> = rel_path.components().collect();
    if components.len() != 2 {
        return false;
    }

    components[0]
        .as_os_str()
        .to_string_lossy()
        .starts_with("git-blob-")
}

fn build_display_path(lhs_path: &FileArgument, rhs_path: &FileArgument) -> String {
    match (lhs_path, rhs_path) {
        (FileArgument::NamedPath(lhs), FileArgument::NamedPath(rhs)) => {
            if is_git_tmpfile(lhs) {
                return rhs.display().to_string();
            }

            match common_path_suffix(lhs, rhs) {
                Some(common_suffix) => common_suffix,
                None => rhs.display().to_string(),
            }
        }
        (FileArgument::NamedPath(p), _) | (_, FileArgument::NamedPath(p)) => {
            p.display().to_string()
        }
        (FileArgument::DevNull, _) | (_, FileArgument::DevNull) => "/dev/null".into(),
        (FileArgument::Stdin, FileArgument::Stdin) => "-".into(),
    }
}

fn parse_overrides_or_die(raw_overrides: &[String]) -> Vec<(LanguageOverride, Vec<glob::Pattern>)> {
    let mut overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)> = vec![];
    let mut invalid_syntax = false;

    for raw_override in raw_overrides {
        if let Some((glob_str, lang_name)) = raw_override.rsplit_once(':') {
            match glob::Pattern::new(glob_str) {
                Ok(pattern) => {
                    if let Some(language_override) = language_override_from_name(lang_name) {
                        overrides.push((language_override, vec![pattern]));
                    } else {
                        eprintln!("No such language '{}'", lang_name);
                        eprintln!("See --list-languages for the names of all languages available. Language overrides are case insensitive.");
                        invalid_syntax = true;
                    }
                }
                Err(e) => {
                    eprintln!("Invalid glob syntax '{}'", glob_str);
                    eprintln!("Glob parsing error: {}", e.msg);
                    invalid_syntax = true;
                }
            }
        } else {
            eprintln!("Invalid language override syntax '{}'", raw_override);
            eprintln!("Language overrides are in the format 'GLOB:LANG_NAME', e.g. '*.js:JSON'.");
            invalid_syntax = true;
        }
    }

    if invalid_syntax {
        std::process::exit(EXIT_BAD_ARGUMENTS);
    }

    overrides
        .into_iter()
        .coalesce(
            |(prev_lang, mut prev_globs), (current_lang, current_globs)| {
                if prev_lang == current_lang {
                    prev_globs.extend(current_globs);
                    Ok((prev_lang, prev_globs))
                } else {
                    Err(((prev_lang, prev_globs), (current_lang, current_globs)))
                }
            },
        )
        .collect()
}

/// Parse CLI arguments passed to the binary.
pub(crate) fn parse_args() -> Mode {
    let matches = app().get_matches();

    let color_output = match matches.value_of("color").expect("color has a default") {
        "always" => ColorOutput::Always,
        "never" => ColorOutput::Never,
        "auto" => ColorOutput::Auto,
        _ => {
            unreachable!("clap has already validated color")
        }
    };
    let use_color = should_use_color(color_output);

    let ignore_comments = matches.is_present("ignore-comments");

    let mut raw_overrides: Vec<String> = vec![];
    if let Some(overrides) = matches.values_of("override") {
        raw_overrides = overrides.map(|s| s.into()).collect();
    }
    for i in 1..=9 {
        if let Ok(value) = env::var(format!("DFT_OVERRIDE_{}", i)) {
            raw_overrides.push(value);
        }
    }

    let language_overrides = parse_overrides_or_die(&raw_overrides);

    if matches.is_present("list-languages") {
        return Mode::ListLanguages {
            use_color,
            language_overrides,
        };
    }

    if let Some(path) = matches.value_of("dump-syntax") {
        return Mode::DumpSyntax {
            path: path.to_string(),
            ignore_comments,
            language_overrides,
        };
    }

    if let Some(path) = matches.value_of("dump-ts") {
        return Mode::DumpTreeSitter {
            path: path.to_string(),
            language_overrides,
        };
    }

    let display_width = if let Some(arg_width) = matches.value_of("width") {
        arg_width
            .parse::<usize>()
            .expect("Already validated by clap")
    } else {
        detect_display_width()
    };

    let display_mode = match matches.value_of("display").expect("display has a default") {
        "side-by-side" => DisplayMode::SideBySide,
        "side-by-side-show-both" => DisplayMode::SideBySideShowBoth,
        "inline" => DisplayMode::Inline,
        "json" => {
            if env::var("DFT_UNSTABLE").is_err() {
                eprintln!("JSON output is an unstable feature and its format may change in future. To enable JSON output, set the environment variable DFT_UNSTABLE=yes.");
                std::process::exit(EXIT_BAD_ARGUMENTS);
            }

            DisplayMode::Json
        }
        _ => {
            unreachable!("clap has already validated display")
        }
    };

    let background_color = match matches
        .value_of("background")
        .expect("Always present as we've given clap a default")
    {
        "dark" => BackgroundColor::Dark,
        "light" => BackgroundColor::Light,
        _ => unreachable!("clap has already validated the values"),
    };

    let syntax_highlight = matches.value_of("syntax-highlight") == Some("on");

    let sort_paths = matches.is_present("sort-paths");

    let graph_limit = matches
        .value_of("graph-limit")
        .expect("Always present as we've given clap a default")
        .parse::<usize>()
        .expect("Value already validated by clap");

    let byte_limit = matches
        .value_of("byte-limit")
        .expect("Always present as we've given clap a default")
        .parse::<usize>()
        .expect("Value already validated by clap");

    let parse_error_limit = matches
        .value_of("parse-error-limit")
        .expect("Always present as we've given clap a default")
        .parse::<usize>()
        .expect("Value already validated by clap");

    let tab_width = matches
        .value_of("tab-width")
        .expect("Always present as we've given clap a default")
        .parse::<usize>()
        .expect("Value already validated by clap");

    let num_context_lines = matches
        .value_of("context")
        .expect("Always present as we've given clap a default")
        .parse::<u32>()
        .expect("Value already validated by clap");

    let print_unchanged = !matches.is_present("skip-unchanged");

    let set_exit_code = matches.is_present("exit-code");

    let strip_cr = matches.is_present("strip-cr");

    let check_only = matches.is_present("check-only");

    let diff_options = DiffOptions {
        graph_limit,
        byte_limit,
        parse_error_limit,
        check_only,
        ignore_comments,
        strip_cr,
    };

    let args: Vec<_> = matches.values_of_os("paths").unwrap_or_default().collect();
    info!("CLI arguments: {:?}", args);

    // Print git environment variables so we can see the additional
    // variable set when git invokes us.
    for (env_var, value) in env::vars() {
        if env_var.starts_with("GIT_") {
            trace!("{}: {}", env_var, value);
        }
    }

    // create theme styles

    // TODO: document these different ways of calling difftastic.
    let (display_path, lhs_path, rhs_path, lhs_permissions, rhs_permissions, renamed) = match &args
        [..]
    {
        [lhs_path, rhs_path] => {
            let lhs_arg = FileArgument::from_cli_argument(lhs_path);
            let rhs_arg = FileArgument::from_cli_argument(rhs_path);
            let display_path = build_display_path(&lhs_arg, &rhs_arg);

            let lhs_permissions = lhs_arg.permissions();
            let rhs_permissions = rhs_arg.permissions();

            (
                display_path,
                lhs_arg,
                rhs_arg,
                lhs_permissions,
                rhs_permissions,
                None,
            )
        }
        [display_path, lhs_tmp_file, _lhs_hash, lhs_mode, rhs_tmp_file, _rhs_hash, rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_string_lossy().to_string(),
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                FilePermissions::try_from(*lhs_mode).ok(),
                FilePermissions::try_from(*rhs_mode).ok(),
                None,
            )
        }
        [old_name, lhs_tmp_file, _lhs_hash, lhs_mode, rhs_tmp_file, _rhs_hash, rhs_mode, new_name, _similarity] =>
        {
            // Rename file.
            // TODO: where does git document these 9 arguments?

            let old_name = old_name.to_string_lossy().to_string();
            let new_name = new_name.to_string_lossy().to_string();
            let renamed = format!("Renamed from {} to {}", old_name, new_name);

            (
                new_name,
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                FilePermissions::try_from(*lhs_mode).ok(),
                FilePermissions::try_from(*rhs_mode).ok(),
                Some(renamed),
            )
        }
        [path] => {
            let display_options = DisplayOptions {
                theme: Theme::default(),
                background_color,
                use_color,
                print_unchanged,
                tab_width,
                display_mode,
                display_width,
                num_context_lines,
                syntax_highlight,
                sort_paths,
            };

            let display_path = path.to_string_lossy().to_string();
            let path = FileArgument::from_path_argument(path);
            return Mode::DiffFromConflicts {
                display_path,
                path,
                diff_options,
                display_options,
                set_exit_code,
                language_overrides,
            };
        }
        _ => {
            if !args.is_empty() {
                eprintln!(
                    "error: Difftastic does not support being called with {} argument{}.\n",
                    args.len(),
                    if args.len() == 1 { "" } else { "s" }
                );
            }
            eprintln!("USAGE:\n\n    {}\n", USAGE);
            eprintln!("For more information try --help");
            std::process::exit(EXIT_BAD_ARGUMENTS);
        }
    };

    let display_options = DisplayOptions {
        theme: Theme::default(),
        background_color,
        use_color,
        print_unchanged,
        tab_width,
        display_mode,
        display_width,
        num_context_lines,
        syntax_highlight,
        sort_paths,
    };

    Mode::Diff {
        diff_options,
        display_options,
        set_exit_code,
        language_overrides,
        lhs_path,
        rhs_path,
        lhs_permissions,
        rhs_permissions,
        display_path,
        renamed,
    }
}

/// Choose the display width: try to autodetect, or fall back to a
/// sensible default.
fn detect_display_width() -> usize {
    if let Ok((columns, _rows)) = crossterm::terminal::size() {
        return columns.into();
    }

    80
}

pub(crate) fn should_use_color(color_output: ColorOutput) -> bool {
    match color_output {
        ColorOutput::Always => true,
        ColorOutput::Auto => {
            // Always enable colour if stdout is a TTY or if the git pager is active.
            // TODO: consider following the env parsing logic in git_config_bool
            // in config.c.
            std::io::stdout().is_tty() || env::var("GIT_PAGER_IN_USE").is_ok()
        }
        ColorOutput::Never => false,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_app() {
        app().debug_assert();
    }

    #[test]
    fn test_detect_display_width() {
        // Basic smoke test.
        assert!(detect_display_width() > 10);
    }
}
