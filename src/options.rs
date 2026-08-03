//! CLI option parsing.

use std::env;
use std::ffi::{OsStr, OsString};
use std::fmt::Display;
use std::io::IsTerminal as _;
use std::path::{Path, PathBuf};

use clap::error::ErrorKind;
use clap::{crate_authors, crate_description, CommandFactory, Parser, ValueEnum};
use owo_colors::OwoColorize as _;

use crate::display::style::BackgroundColor;
use crate::exit_codes::EXIT_BAD_ARGUMENTS;
use crate::parse::guess_language::{language_override_from_name, LanguageOverride};
use crate::version::VERSION;

pub(crate) const DEFAULT_BYTE_LIMIT: usize = 1_000_000;
// Chosen experimentally: this is sufficiently many for all the sample
// files (the highest is slow_1.rs/slow_2.rs at 1.3M nodes), but
// small enough to terminate in ~5 seconds like the test file in #306.
pub(crate) const DEFAULT_GRAPH_LIMIT: usize = 3_000_000;
pub(crate) const DEFAULT_PARSE_ERROR_LIMIT: usize = 0;

pub(crate) const DEFAULT_TAB_WIDTH: usize = 4;

const USAGE: &str = concat!(env!("CARGO_BIN_NAME"), " [OPTIONS] OLD-PATH NEW-PATH");

#[derive(Debug, Clone, Copy, ValueEnum)]
pub(crate) enum ColorOutput {
    Always,
    Auto,
    Never,
}

#[derive(Debug, Clone)]
pub(crate) struct DisplayOptions {
    pub(crate) background_color: BackgroundColor,
    pub(crate) use_color: bool,
    pub(crate) display_mode: DisplayMode,
    pub(crate) print_unchanged: bool,
    pub(crate) tab_width: usize,
    pub(crate) terminal_width: usize,
    pub(crate) num_context_lines: u32,
    pub(crate) syntax_highlight: bool,
    pub(crate) sort_paths: bool,
}

pub(crate) const DEFAULT_TERMINAL_WIDTH: usize = 80;

impl Default for DisplayOptions {
    fn default() -> Self {
        Self {
            background_color: BackgroundColor::Dark,
            use_color: false,
            display_mode: DisplayMode::SideBySide,
            print_unchanged: true,
            tab_width: 8,
            terminal_width: DEFAULT_TERMINAL_WIDTH,
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

/// An option that is either on or off. Unlike a flag, the value is
/// explicit, so users can override a value set in an environment
/// variable.
#[derive(Debug, Clone, Copy, PartialEq, Eq, ValueEnum)]
enum OnOff {
    On,
    Off,
}

impl OnOff {
    fn is_on(self) -> bool {
        self == Self::On
    }
}

// The command line arguments accepted by difftastic.
//
// Difftastic supports several calling conventions (see `parse_args`),
// so the positional arguments are validated after clap has parsed
// them.
//
// Note that this is deliberately not a doc comment: clap would use it
// as the `--help` description instead of the crate description.
//
// The doc comments on the fields are the help text shown to
// users. They're all `verbatim_doc_comment`, so clap doesn't reflow
// the examples or strip the trailing full stops.
#[derive(Debug, Parser)]
#[command(
    name = "Difftastic",
    override_usage = USAGE,
    version = env!("CARGO_PKG_VERSION"),
    long_version = VERSION.as_str(),
    about = crate_description!(),
    author = crate_authors!(),
    after_long_help = after_help(),
    arg_required_else_help = true
)]
struct Args {
    /// Parse a single file with tree-sitter and display the difftastic syntax tree.
    #[arg(
        long,
        value_name = "PATH",
        help_heading = "DEBUG OPTIONS",
        verbatim_doc_comment
    )]
    dump_syntax: Option<String>,

    /// Parse a single file with tree-sitter and display the difftastic syntax tree, as a DOT graph.
    #[arg(
        long,
        value_name = "PATH",
        help_heading = "DEBUG OPTIONS",
        verbatim_doc_comment
    )]
    dump_syntax_dot: Option<String>,

    /// Parse a single file with tree-sitter and display the tree-sitter parse tree.
    #[arg(
        long = "dump-ts",
        value_name = "PATH",
        help_heading = "DEBUG OPTIONS",
        verbatim_doc_comment
    )]
    dump_ts: Option<String>,

    /// The number of contextual lines to show around changed lines.
    #[arg(
        long,
        value_name = "LINES",
        env = "DFT_CONTEXT",
        default_value_t = 3,
        verbatim_doc_comment
    )]
    context: u32,

    /// Use this many columns when calculating line wrapping. If not specified, difftastic will detect the terminal width.
    #[arg(long, value_name = "COLUMNS", env = "DFT_WIDTH", verbatim_doc_comment)]
    width: Option<usize>,

    /// Treat a tab as this many spaces.
    #[arg(
        long,
        value_name = "NUM_SPACES",
        env = "DFT_TAB_WIDTH",
        default_value_t = DEFAULT_TAB_WIDTH,
        verbatim_doc_comment
    )]
    tab_width: usize,

    /// Display mode for showing results.
    ///
    /// side-by-side: Display the before file and the after file in two separate columns, with line numbers aligned according to unchanged content. If a change is exclusively additions or exclusively removals, use a single column.
    ///
    /// side-by-side-show-both: The same as side-by-side, but always uses two columns.
    ///
    /// inline: A single column display, closer to traditional diff display.
    ///
    /// json: Output the results as a machine-readable JSON array with an element per file.
    #[arg(
        long,
        value_name = "MODE",
        env = "DFT_DISPLAY",
        default_value = "side-by-side",
        verbatim_doc_comment
    )]
    display: DisplayMode,

    /// When to use color output.
    #[arg(
        long,
        value_name = "WHEN",
        env = "DFT_COLOR",
        default_value = "auto",
        verbatim_doc_comment
    )]
    color: ColorOutput,

    /// Set the background brightness. Difftastic will prefer brighter colours on dark backgrounds.
    #[arg(
        long,
        value_name = "BACKGROUND",
        env = "DFT_BACKGROUND",
        default_value = "dark",
        verbatim_doc_comment
    )]
    background: BackgroundColor,

    /// Enable or disable syntax highlighting.
    #[arg(
        long,
        value_name = "on/off",
        env = "DFT_SYNTAX_HIGHLIGHT",
        default_value = "on",
        verbatim_doc_comment
    )]
    syntax_highlight: OnOff,

    /// Set the exit code to 1 if there are syntactic changes in any files. For files where there is no detected language (e.g. unsupported language or binary files), sets the exit code if there are any byte changes.
    #[arg(long, env = "DFT_EXIT_CODE", verbatim_doc_comment)]
    exit_code: bool,

    /// Remove any carriage return characters before diffing. This can be helpful when dealing with files on Windows that contain CRLF, i.e. `\r\n`.
    ///
    /// When disabled, difftastic will consider multiline string literals (in code) or multiline text (e.g. in HTML) to differ if the two input files have different line endings.
    #[arg(
        long,
        value_name = "on/off",
        env = "DFT_STRIP_CR",
        default_value = "on",
        verbatim_doc_comment
    )]
    strip_cr: OnOff,

    /// Report whether there are any changes, but don't calculate them. Much faster.
    #[arg(long, env = "DFT_CHECK_ONLY", verbatim_doc_comment)]
    check_only: bool,

    /// Don't consider comments when diffing.
    #[arg(long, env = "DFT_IGNORE_COMMENTS", verbatim_doc_comment)]
    ignore_comments: bool,

    /// Don't display anything if a file is unchanged. This is useful when comparing directories of files.
    #[arg(long, env = "DFT_SKIP_UNCHANGED", verbatim_doc_comment)]
    skip_unchanged: bool,

    /// Associate this glob pattern with this language, overriding normal language detection.
    ///
    /// For example:
    ///
    /// $ difft --override='*.c:C++' old.c new.c
    ///
    /// See --list-languages for the list of language names. Language names are matched case insensitively. Overrides may also specify the language "text" to treat a file as plain text.
    ///
    /// This argument may be given more than once. For example:
    ///
    /// $ difft --override='CustomFile:json' --override='*.c:text' old.c new.c
    ///
    /// To configure multiple overrides using environment variables, difftastic also accepts DFT_OVERRIDE_1 up to DFT_OVERRIDE_9.
    ///
    /// $ export DFT_OVERRIDE='CustomFile:json'
    /// $ export DFT_OVERRIDE_1='*.c:text'
    /// $ export DFT_OVERRIDE_2='*.js:javascript jsx'
    ///
    /// When multiple overrides are specified, the first matching override wins.
    #[arg(
        long = "override",
        value_name = "GLOB:NAME",
        env = "DFT_OVERRIDE",
        value_parser = parse_language_override,
        verbatim_doc_comment
    )]
    language_override: Vec<(LanguageOverride, glob::Pattern)>,

    /// Always treat file names matching this glob as binary files, ignoring the default heuristics for binary detection.
    ///
    /// For example:
    ///
    /// $ difft --override-binary='*.gz' old.gz new.gz
    ///
    /// This argument may be given more than once. For example:
    ///
    /// $ difft --override-binary='*.gz' --override-binary='foo.pickle' old.gz new.gz
    ///
    /// To configure multiple overrides using environment variables, difftastic also accepts DFT_OVERRIDE_BINARY_1 up to DFT_OVERRIDE_BINARY_9.
    ///
    /// $ export DFT_OVERRIDE_BINARY='*.gz'
    /// $ export DFT_OVERRIDE_BINARY_1='*.bz2'
    /// $ export DFT_OVERRIDE_BINARY_2='foo.pickle'
    #[arg(
        long,
        value_name = "GLOB",
        env = "DFT_OVERRIDE_BINARY",
        value_parser = parse_glob,
        verbatim_doc_comment
    )]
    override_binary: Vec<glob::Pattern>,

    /// Print all the languages supported by difftastic, along with their recognised extensions.
    #[arg(long, verbatim_doc_comment)]
    list_languages: bool,

    /// Use a line-oriented diff if either input file exceeds this size.
    #[arg(
        long,
        value_name = "LIMIT",
        env = "DFT_BYTE_LIMIT",
        default_value_t = DEFAULT_BYTE_LIMIT,
        verbatim_doc_comment
    )]
    byte_limit: usize,

    /// Use a line-oriented diff if the internal graph exceeds this number of vertices. This limit controls the worst case runtime and memory usage for difftastic.
    ///
    /// Higher values will allow difftastic to perform a structural diff in more cases. Higher values will also increase the time before difftastic gives up on structural diffing, and increase peak memory usage.
    #[arg(
        long,
        value_name = "LIMIT",
        env = "DFT_GRAPH_LIMIT",
        default_value_t = DEFAULT_GRAPH_LIMIT,
        verbatim_doc_comment
    )]
    graph_limit: usize,

    /// Use a line-oriented diff if the number of parse errors exceeds this value.
    ///
    /// A value of 0 means that any parse error will make difftastic use a line-oriented diff.
    #[arg(
        long,
        value_name = "LIMIT",
        env = "DFT_PARSE_ERROR_LIMIT",
        default_value_t = DEFAULT_PARSE_ERROR_LIMIT,
        verbatim_doc_comment
    )]
    parse_error_limit: usize,

    #[arg(value_name = "PATHS", hide = true)]
    paths: Vec<OsString>,

    /// When diffing a directory, output the results sorted by path. This is slower.
    #[arg(long, env = "DFT_SORT_PATHS", verbatim_doc_comment)]
    sort_paths: bool,
}

/// The examples shown at the end of `--help`.
fn after_help() -> String {
    let bin_name = env!("CARGO_BIN_NAME");

    let mut after_help = String::new();
    after_help
        .push_str("You can compare two files with difftastic by specifying them as arguments.\n\n");
    after_help.push_str(&format!("$ {} old.js new.js", bin_name).bold().to_string());

    after_help.push_str("\n\nYou can also use directories as arguments. Difftastic will walk both directories and compare files with matching names.\n\n");
    after_help.push_str(&format!("$ {} old/ new/", bin_name).bold().to_string());

    after_help.push_str("\n\nIf you have a file with conflict markers, you can pass it as a single argument. Difftastic will diff the two conflicting file states.\n\n");
    after_help.push_str(
        &format!("$ {} file_with_conflicts.js", bin_name)
            .bold()
            .to_string(),
    );

    // For some reason clap will hard wrap these invocations weirdly
    // (with extra blank lines) if we use bold. Since these are
    // showing CLI formats rather than concrete values, compromise by
    // not using bold.
    after_help.push_str("\n\nDifftastic can also be invoked with 7 or 9 arguments in the format that GIT_EXTERNAL_DIFF expects.\n\n");
    after_help.push_str(&format!(
        "$ {} DISPLAY-PATH OLD-FILE OLD-HEX OLD-MODE NEW-FILE NEW-HEX NEW-MODE",
        bin_name
    ));

    after_help.push('\n');
    after_help.push_str(&format!(
        "$ {} OLD-NAME OLD-FILE OLD-HEX OLD-MODE NEW-FILE NEW-HEX NEW-MODE NEW-NAME METADATA",
        bin_name
    ));

    after_help.push_str("\n\nSee the full manual at ");
    if std::io::stdout().is_terminal() {
        // Make the link to the manual clickable in terminals that
        // support OSC 8, the ANSI escape code for hyperlinks.
        //
        // https://gist.github.com/egmontkob/eb114294efbcd5adb1944c9f3cb5feda
        // https://github.com/Alhadis/OSC8-Adoption
        //
        // There isn't any way of detecting whether the terminal
        // supports OSC 8 specifically, but we can limit usage to when
        // there's a TTY. This is similar to how we detect whether to
        // use colour.
        after_help.push_str("\x1b]8;;https://difftastic.wilfred.me.uk/\x1b\\https://difftastic.wilfred.me.uk/\x1b]8;;\x1b\\");
    } else {
        after_help.push_str("https://difftastic.wilfred.me.uk/");
    }
    after_help.push('.');

    after_help
}

/// Parse a `--override` value, such as `*.c:C++`.
fn parse_language_override(s: &str) -> Result<(LanguageOverride, glob::Pattern), String> {
    let Some((glob_str, lang_name)) = s.rsplit_once(':') else {
        return Err(
            "language overrides are in the format 'GLOB:LANG_NAME', e.g. '*.js:JSON'".to_owned(),
        );
    };

    let pattern = parse_glob(glob_str)?;

    match language_override_from_name(lang_name) {
        Some(language_override) => Ok((language_override, pattern)),
        None => Err(format!(
            "no such language '{}'\n\nSee --list-languages for the names of all the languages available. Language overrides are case insensitive.",
            lang_name
        )),
    }
}

/// Parse a glob pattern, such as an `--override-binary` value.
fn parse_glob(s: &str) -> Result<glob::Pattern, String> {
    glob::Pattern::new(s).map_err(|e| format!("invalid glob syntax '{}': {}", s, e.msg))
}

/// Report `message` in the same style as clap's own errors, so we
/// show the usage information too, then exit.
pub(crate) fn arg_error(message: String) -> ! {
    let err = Args::command().error(ErrorKind::InvalidValue, message);
    let _ = err.print();

    std::process::exit(EXIT_BAD_ARGUMENTS);
}

/// The values set in the numbered environment variables `PREFIX_1` up
/// to `PREFIX_9`, parsed with `parse`.
///
/// These environment variables allow users to specify options that may
/// be given more than once on the command line.
fn parse_numbered_env_vars<T>(prefix: &str, parse: fn(&str) -> Result<T, String>) -> Vec<T> {
    let mut values = vec![];

    for i in 1..=9 {
        let name = format!("{}_{}", prefix, i);
        let Ok(value) = env::var(&name) else {
            continue;
        };

        match parse(&value) {
            Ok(value) => values.push(value),
            Err(message) => arg_error(format!(
                "invalid value '{}' for environment variable {}: {}",
                value, name, message
            )),
        }
    }

    values
}

/// Group adjacent overrides that specify the same language, so we can
/// check all the globs for a language together.
fn combine_overrides(
    overrides: Vec<(LanguageOverride, glob::Pattern)>,
) -> Vec<(LanguageOverride, Vec<glob::Pattern>)> {
    let mut combined: Vec<(LanguageOverride, Vec<glob::Pattern>)> = vec![];

    for (lang, glob) in overrides {
        match combined.last_mut() {
            Some((prev_lang, prev_globs)) if *prev_lang == lang => prev_globs.push(glob),
            _ => combined.push((lang, vec![glob])),
        }
    }

    combined
}

#[derive(Debug, Copy, Clone, ValueEnum)]
pub(crate) enum DisplayMode {
    SideBySide,
    SideBySideShowBoth,
    Inline,
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
            Self::NamedPath(path) => {
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
            Self::Stdin => None,
            Self::DevNull => None,
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
            Self::DevNull
        } else if arg == "-" {
            Self::Stdin
        } else {
            Self::NamedPath(PathBuf::from(arg))
        }
    }

    /// Return a `FileArgument` that always represents a path that
    /// exists, with the exception of `/dev/null`, which is turned into [FileArgument::DevNull].
    pub(crate) fn from_path_argument(arg: &OsStr) -> Self {
        // For new and deleted files, Git passes `/dev/null` as the reference file.
        if arg == "/dev/null" {
            Self::DevNull
        } else {
            Self::NamedPath(PathBuf::from(arg))
        }
    }
}

impl Display for FileArgument {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::NamedPath(path) => {
                write!(f, "{}", relative_to_current(path).display())
            }
            Self::Stdin => write!(f, "(stdin)"),
            Self::DevNull => write!(f, "/dev/null"),
        }
    }
}

pub(crate) enum Mode {
    Diff {
        diff_options: DiffOptions,
        display_options: DisplayOptions,
        set_exit_code: bool,
        language_overrides: Vec<(LanguageOverride, Vec<glob::Pattern>)>,
        binary_overrides: Vec<glob::Pattern>,
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
        binary_overrides: Vec<glob::Pattern>,
        path: FileArgument,
        /// The path that we show to the user.
        display_path: String,
    },
    GitHasUnmergedFile {
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
    DumpSyntaxDot {
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
        Some(common_components.join(std::path::MAIN_SEPARATOR_STR))
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
                None => {
                    if rhs.extension().is_some() {
                        rhs.display().to_string()
                    } else {
                        lhs.display().to_string()
                    }
                }
            }
        }
        (FileArgument::NamedPath(p), _) | (_, FileArgument::NamedPath(p)) => {
            p.display().to_string()
        }
        (FileArgument::DevNull, _) | (_, FileArgument::DevNull) => "/dev/null".into(),
        (FileArgument::Stdin, FileArgument::Stdin) => "-".into(),
    }
}

/// Report that we've been given a number of paths that doesn't match
/// any of difftastic's calling conventions, then exit.
fn wrong_number_of_paths(paths: &[OsString]) -> ! {
    let invocation = env::args_os()
        .map(|arg| arg.to_string_lossy().into_owned())
        .collect::<Vec<_>>()
        .join(" ");

    arg_error(format!(
        "Difftastic does not support being called with {} arguments.

Difftastic can be called with 2 arguments (the paths to diff), 1 argument (a file with conflict markers), or 7 or 9 arguments in the format used by GIT_EXTERNAL_DIFF.

For reference, difftastic was invoked as `{}`.",
        paths.len(),
        invocation,
    ))
}

/// Parse CLI arguments passed to the binary.
pub(crate) fn parse_args() -> Mode {
    let args = Args::parse();

    let use_color = should_use_color(args.color);
    let ignore_comments = args.ignore_comments;

    let mut binary_overrides = args.override_binary;
    binary_overrides.extend(parse_numbered_env_vars("DFT_OVERRIDE_BINARY", parse_glob));

    let mut raw_language_overrides = args.language_override;
    raw_language_overrides.extend(parse_numbered_env_vars(
        "DFT_OVERRIDE",
        parse_language_override,
    ));
    let language_overrides = combine_overrides(raw_language_overrides);

    if args.list_languages {
        return Mode::ListLanguages {
            use_color,
            language_overrides,
        };
    }

    if let Some(path) = args.dump_syntax {
        return Mode::DumpSyntax {
            path,
            ignore_comments,
            language_overrides,
        };
    }

    if let Some(path) = args.dump_syntax_dot {
        return Mode::DumpSyntaxDot {
            path,
            ignore_comments,
            language_overrides,
        };
    }

    if let Some(path) = args.dump_ts {
        return Mode::DumpTreeSitter {
            path,
            language_overrides,
        };
    }

    if matches!(args.display, DisplayMode::Json) && env::var("DFT_UNSTABLE").is_err() {
        arg_error(
            "JSON output is an unstable feature and its format may change in future. To enable JSON output, set the environment variable DFT_UNSTABLE=yes.".to_owned(),
        );
    }

    let diff_options = DiffOptions {
        graph_limit: args.graph_limit,
        byte_limit: args.byte_limit,
        parse_error_limit: args.parse_error_limit,
        check_only: args.check_only,
        ignore_comments,
        strip_cr: args.strip_cr.is_on(),
    };

    let display_options = DisplayOptions {
        background_color: args.background,
        use_color,
        display_mode: args.display,
        print_unchanged: !args.skip_unchanged,
        tab_width: args.tab_width,
        terminal_width: args.width.unwrap_or_else(detect_terminal_width),
        num_context_lines: args.context,
        syntax_highlight: args.syntax_highlight.is_on(),
        sort_paths: args.sort_paths,
    };

    let set_exit_code = args.exit_code;

    let paths = args.paths;
    info!("CLI arguments: {:?}", paths);

    // When there's a single path that hasn't been merged, git invokes
    // the external diff tool with a only single argument. There's
    // nothing to diff against.
    //
    // In this case, we just inform the user that there's an unmerged
    // file, matching the builtin git-diff behaviour.
    if paths.len() == 1
        && (env::var_os("GIT_EXEC_PATH").is_some()
            || env::var_os("GIT_CONFIG_PARAMETERS").is_some()
            || env::var_os("GIT_DIFF_PATH_TOTAL").is_some())
    {
        return Mode::GitHasUnmergedFile {
            display_path: paths[0].to_string_lossy().to_string(),
        };
    }

    // Print git environment variables so we can see the additional
    // variable set when git invokes us.
    for (env_var, value) in env::vars() {
        if env_var.starts_with("GIT_") {
            trace!("{}: {}", env_var, value);
        }
    }

    let (display_path, lhs_path, rhs_path, lhs_permissions, rhs_permissions, renamed) = match &paths
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
            // 7 arguments, per https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_string_lossy().to_string(),
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                FilePermissions::try_from(lhs_mode.as_os_str()).ok(),
                FilePermissions::try_from(rhs_mode.as_os_str()).ok(),
                None,
            )
        }
        [old_name, lhs_tmp_file, _lhs_hash, lhs_mode, rhs_tmp_file, _rhs_hash, rhs_mode, new_name, _metainfo] =>
        {
            // Rename file.
            // TODO: where does git document these 9 arguments?
            // (See run_external_diff() in diff.c in git source code.)

            let old_name = old_name.to_string_lossy().to_string();
            let new_name = new_name.to_string_lossy().to_string();
            let renamed = format!("Renamed from {} to {}", old_name, new_name);

            (
                new_name,
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                FilePermissions::try_from(lhs_mode.as_os_str()).ok(),
                FilePermissions::try_from(rhs_mode.as_os_str()).ok(),
                Some(renamed),
            )
        }
        [path] => {
            let display_path = path.to_string_lossy().to_string();
            let path = FileArgument::from_path_argument(path);

            return Mode::DiffFromConflicts {
                display_path,
                path,
                diff_options,
                display_options,
                set_exit_code,
                language_overrides,
                binary_overrides,
            };
        }
        _ => wrong_number_of_paths(&paths),
    };

    Mode::Diff {
        diff_options,
        display_options,
        set_exit_code,
        language_overrides,
        binary_overrides,
        lhs_path,
        rhs_path,
        lhs_permissions,
        rhs_permissions,
        display_path,
        renamed,
    }
}

/// Try to work out the width of the terminal we're on, or fall back
/// to a sensible default value.
fn detect_terminal_width() -> usize {
    if let Ok((columns, _rows)) = crossterm::terminal::size() {
        if columns > 0 {
            return columns.into();
        }
    }

    // If crossterm couldn't detect the terminal width, use the
    // shell variable COLUMNS if it's set. This helps with terminals like eshell.
    //
    // https://github.com/Wilfred/difftastic/issues/707
    // https://stackoverflow.com/a/48016366
    if let Ok(columns_env_val) = std::env::var("COLUMNS") {
        if let Ok(columns) = columns_env_val.parse::<usize>() {
            if columns > 0 {
                return columns;
            }
        }
    }

    DEFAULT_TERMINAL_WIDTH
}

pub(crate) fn should_use_color(color_output: ColorOutput) -> bool {
    match color_output {
        ColorOutput::Always => true,
        ColorOutput::Auto => detect_color_support(),
        ColorOutput::Never => false,
    }
}

/// Always enable colour if stdout is a TTY or if the git pager is active.
fn detect_color_support() -> bool {
    // TODO: consider following the env parsing logic in git_config_bool
    // in config.c.
    std::io::stdout().is_terminal() || env::var("GIT_PAGER_IN_USE").is_ok()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_app() {
        Args::command().debug_assert();
    }

    #[test]
    fn test_detect_display_width() {
        // Basic smoke test.
        assert!(detect_terminal_width() > 10);
    }
}
