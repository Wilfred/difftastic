//! CLI option parsing.

use std::{env, ffi::OsStr, path::Path, path::PathBuf};

use clap::{crate_authors, crate_description, crate_version, Arg, Command};
use const_format::formatcp;
use crossterm::tty::IsTty;

use crate::{
    display::style::BackgroundColor, exit_codes::EXIT_BAD_ARGUMENTS, parse::guess_language,
};

pub const DEFAULT_BYTE_LIMIT: usize = 1_000_000;
// Chosen experimentally: this is sufficiently many for all the sample
// files (the highest is slow_before/after.rs at 1.3M nodes), but
// small enough to terminate in ~5 seconds like the test file in #306.
pub const DEFAULT_GRAPH_LIMIT: usize = 3_000_000;
pub const DEFAULT_PARSE_ERROR_LIMIT: usize = 0;

pub const DEFAULT_TAB_WIDTH: usize = 8;

const USAGE: &str = concat!(env!("CARGO_BIN_NAME"), " [OPTIONS] OLD-PATH NEW-PATH");

#[derive(Debug, Clone, Copy)]
pub enum ColorOutput {
    Always,
    Auto,
    Never,
}

#[derive(Debug, Clone)]
pub struct DisplayOptions {
    pub background_color: BackgroundColor,
    pub use_color: bool,
    pub display_mode: DisplayMode,
    pub print_unchanged: bool,
    pub tab_width: usize,
    pub display_width: usize,
    pub num_context_lines: u32,
    pub in_vcs: bool,
    pub syntax_highlight: bool,
}

impl Default for DisplayOptions {
    fn default() -> Self {
        Self {
            background_color: BackgroundColor::Dark,
            use_color: false,
            display_mode: DisplayMode::SideBySide,
            print_unchanged: true,
            tab_width: 8,
            display_width: 80,
            num_context_lines: 3,
            in_vcs: false,
            syntax_highlight: true,
        }
    }
}

#[derive(Debug, Clone)]
pub struct DiffOptions {
    pub graph_limit: usize,
    pub byte_limit: usize,
    pub parse_error_limit: usize,
    pub check_only: bool,
    pub ignore_comments: bool,
}

impl Default for DiffOptions {
    fn default() -> Self {
        Self {
            graph_limit: DEFAULT_GRAPH_LIMIT,
            byte_limit: DEFAULT_BYTE_LIMIT,
            parse_error_limit: DEFAULT_PARSE_ERROR_LIMIT,
            check_only: false,
            ignore_comments: false,
        }
    }
}

fn app() -> clap::Command<'static> {
    Command::new("Difftastic")
        .override_usage(USAGE)
        .version(crate_version!())
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
                .possible_values(["side-by-side", "side-by-side-show-both", "inline"])
                .default_value("side-by-side")
                .value_name("MODE")
                .env("DFT_DISPLAY")
                .help("Display mode for showing results.

side-by-side: Display the before file and the after file in two separate columns, with line numbers aligned according to unchanged content. If a change is exclusively additions or exclusively removals, use a single column.

side-by-side-show-both: The same as side-by-side, but always uses two columns.

inline: A single column display, closer to traditional diff display.")
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
                .help("Don't display anything if a file is unchanged.")
        )
        .arg(
            Arg::new("missing-as-empty").long("missing-as-empty")
                .help("Treat paths that don't exist as equivalent to an empty file. Only applies when diffing files, not directories.")
        )
        .arg(
            Arg::new("language").long("language")
                .value_name("EXT")
                .allow_invalid_utf8(true)
                .help("Override language detection. Inputs are assumed to have this file extension. When diffing directories, applies to all files.")
                // TODO: support DFT_LANGUAGE for consistency
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
        .arg_required_else_help(true)
}

#[derive(Debug, Copy, Clone)]
pub enum DisplayMode {
    Inline,
    SideBySide,
    SideBySideShowBoth,
}

#[derive(Eq, PartialEq, Debug)]
pub enum FileArgument {
    NamedPath(std::path::PathBuf),
    Stdin,
    DevNull,
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
    pub fn from_cli_argument(arg: &OsStr) -> Self {
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
    pub fn from_path_argument(arg: &OsStr) -> Self {
        // For new and deleted files, Git passes `/dev/null` as the reference file.
        if arg == "/dev/null" {
            FileArgument::DevNull
        } else {
            FileArgument::NamedPath(PathBuf::from(arg))
        }
    }

    pub fn display(&self) -> String {
        match self {
            FileArgument::NamedPath(path) => relative_to_current(path).display().to_string(),
            FileArgument::Stdin => "(stdin)".to_string(),
            FileArgument::DevNull => "/dev/null".to_string(),
        }
    }
}

pub enum Mode {
    Diff {
        diff_options: DiffOptions,
        display_options: DisplayOptions,
        set_exit_code: bool,
        language_override: Option<guess_language::Language>,
        /// The path where we can read the LHS file. This is often a
        /// temporary file generated by source control.
        lhs_path: FileArgument,
        /// The path where we can read the RHS file. This is often a
        /// temporary file generated by source control.
        rhs_path: FileArgument,
        /// The path that we should display for the LHS file. This is
        /// usually the same as `lhs_path`, but the six argument form
        /// of git-diff specifies this separately.
        lhs_display_path: String,
        /// The path that we should display for the RHS file.
        rhs_display_path: String,
    },
    ListLanguages {
        use_color: bool,
    },
    DumpTreeSitter {
        path: String,
        language_override: Option<guess_language::Language>,
    },
    DumpSyntax {
        path: String,
        language_override: Option<guess_language::Language>,
        ignore_comments: bool,
    },
}

/// Parse CLI arguments passed to the binary.
pub fn parse_args() -> Mode {
    let matches = app().get_matches();

    let language_override = match matches.value_of_os("language") {
        Some(lang_str) => {
            if let Some(lang) = guess_language::from_extension(lang_str) {
                Some(lang)
            } else {
                eprintln!(
                    "No language is associated with extension: {}",
                    lang_str.to_string_lossy()
                );
                None
            }
        }
        None => None,
    };

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

    if matches.is_present("list-languages") {
        return Mode::ListLanguages { use_color };
    }

    if let Some(path) = matches.value_of("dump-syntax") {
        return Mode::DumpSyntax {
            path: path.to_string(),
            language_override,
            ignore_comments,
        };
    }

    if let Some(path) = matches.value_of("dump-ts") {
        return Mode::DumpTreeSitter {
            path: path.to_string(),
            language_override,
        };
    }

    let args: Vec<_> = matches.values_of_os("paths").unwrap_or_default().collect();
    info!("CLI arguments: {:?}", args);

    // TODO: document these different ways of calling difftastic.
    let (lhs_display_path, rhs_display_path, lhs_path, rhs_path, in_vcs) = match &args[..] {
        [lhs_path, rhs_path] => {
            let lhs_arg = FileArgument::from_cli_argument(lhs_path);
            let rhs_arg = FileArgument::from_cli_argument(rhs_path);
            (
                lhs_arg.display(),
                rhs_arg.display(),
                lhs_arg,
                rhs_arg,
                false,
            )
        }
        [display_path, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_string_lossy().to_string(),
                display_path.to_string_lossy().to_string(),
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                true,
            )
        }
        [old_name, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode, new_name, _similarity] =>
        {
            // Rename file.
            // TODO: where does git document these 9 arguments?
            (
                old_name.to_string_lossy().to_string(),
                new_name.to_string_lossy().to_string(),
                FileArgument::from_path_argument(lhs_tmp_file),
                FileArgument::from_path_argument(rhs_tmp_file),
                true,
            )
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

    let check_only = matches.is_present("check-only");

    let display_options = DisplayOptions {
        background_color,
        use_color,
        print_unchanged,
        tab_width,
        display_mode,
        display_width,
        num_context_lines,
        syntax_highlight,
        in_vcs,
    };

    let diff_options = DiffOptions {
        graph_limit,
        byte_limit,
        parse_error_limit,
        check_only,
        ignore_comments,
    };

    Mode::Diff {
        diff_options,
        display_options,
        set_exit_code,
        language_override,
        lhs_path,
        rhs_path,
        lhs_display_path,
        rhs_display_path,
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

pub fn should_use_color(color_output: ColorOutput) -> bool {
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
