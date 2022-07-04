//! CLI option parsing.

use std::{borrow::Borrow, env, ffi::OsString};

use atty::Stream;
use clap::{crate_authors, crate_description, crate_version, Arg, Command};
use const_format::formatcp;

use crate::{display::style::BackgroundColor, parse::guess_language};

pub const DEFAULT_BYTE_LIMIT: usize = 1_000_000;
// Chosen experimentally: this is sufficiently many for all the sample
// files (the highest is slow_before/after.rs at 1.3M nodes), but
// small enough to terminate in ~5 seconds like the test file in #306.
pub const DEFAULT_GRAPH_LIMIT: usize = 3_000_000;
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
    pub in_vcs: bool,
    pub syntax_highlight: bool,
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
                .possible_values(["side-by-side", "side-by-side-show-both", "inline", ])
                .value_name("MODE")
                .env("DFT_DISPLAY")
                .help("Display mode for showing results.")
        )
        .arg(
            Arg::new("color").long("color")
                .possible_values(["always", "auto", "never"])
                .value_name("WHEN")
                .help("When to use color output.")
        )
        .arg(
            Arg::new("background").long("background")
                .value_name("BACKGROUND")
                .env("DFT_BACKGROUND")
                .possible_values(["dark", "light"])
                .help("Set the background brightness. Difftastic will prefer brighter colours on dark backgrounds.")
        )
        .arg(
            Arg::new("syntax-highlight").long("syntax-highlight")
                .value_name("ON/OFF")
                .env("DFT_SYNTAX_HIGHLIGHT")
                .possible_values(["on", "off"])
                .default_value("on")
                .help("Enable or disable syntax highlighting.")
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
            Arg::new("byte-limit").long("byte-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help(concat!("Use a text diff if either input file exceeds this size."))
                .default_value(formatcp!("{}", DEFAULT_BYTE_LIMIT))
                .env("DFT_BYTE_LIMIT")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("graph-limit").long("graph-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help(concat!("Use a text diff if the structural graph exceed this number of nodes in memory."))
                .default_value(formatcp!("{}", DEFAULT_GRAPH_LIMIT))
                .env("DFT_GRAPH_LIMIT")
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

pub enum Mode {
    Diff {
        graph_limit: usize,
        byte_limit: usize,
        display_options: DisplayOptions,
        missing_as_empty: bool,
        language_override: Option<guess_language::Language>,
        /// The path where we can read the LHS file. This is often a
        /// temporary file generated by source control.
        lhs_path: OsString,
        /// The path where we can read the RHS file. This is often a
        /// temporary file generated by source control.
        rhs_path: OsString,
        /// The path that we should display for the LHS file.
        lhs_display_path: String,
        /// The path that we should display for the RHS file.
        rhs_display_path: String,
    },
    DumpTreeSitter {
        path: String,
        language_override: Option<guess_language::Language>,
    },
    DumpSyntax {
        path: String,
        language_override: Option<guess_language::Language>,
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

    if let Some(path) = matches.value_of("dump-syntax") {
        return Mode::DumpSyntax {
            path: path.to_string(),
            language_override,
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
        [lhs_path, rhs_path] => (
            lhs_path.to_owned(),
            rhs_path.to_owned(),
            lhs_path.to_owned(),
            rhs_path.to_owned(),
            false,
        ),
        [display_path, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_owned(),
                display_path.to_owned(),
                lhs_tmp_file.to_owned(),
                rhs_tmp_file.to_owned(),
                true,
            )
        }
        [old_name, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode, new_name, _similarity] =>
        {
            // Rename file.
            // TODO: where does git document these 9 arguments?
            (
                old_name.to_owned(),
                new_name.to_owned(),
                lhs_tmp_file.to_owned(),
                rhs_tmp_file.to_owned(),
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
            std::process::exit(1);
        }
    };

    let display_width = if let Some(arg_width) = matches.value_of("width") {
        arg_width
            .parse::<usize>()
            .expect("Already validated by clap")
    } else {
        detect_display_width()
    };

    let display_mode = if let Some(display_mode_str) = matches.value_of("display") {
        match display_mode_str.borrow() {
            "side-by-side" => DisplayMode::SideBySide,
            "side-by-side-show-both" => DisplayMode::SideBySideShowBoth,
            "inline" => DisplayMode::Inline,
            _ => {
                unreachable!("clap has already validated display")
            }
        }
    } else {
        DisplayMode::SideBySide
    };

    let color_output = if let Some(color_when) = matches.value_of("color") {
        if color_when == "always" {
            ColorOutput::Always
        } else if color_when == "never" {
            ColorOutput::Never
        } else {
            ColorOutput::Auto
        }
    } else {
        ColorOutput::Auto
    };

    let background_color = if let Some(background) = matches.value_of("background") {
        if background == "light" {
            BackgroundColor::Light
        } else {
            BackgroundColor::Dark
        }
    } else {
        BackgroundColor::Dark
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

    let tab_width = matches
        .value_of("tab-width")
        .expect("Always present as we've given clap a default")
        .parse::<usize>()
        .expect("Value already validated by clap");

    let print_unchanged = !matches.is_present("skip-unchanged");
    let missing_as_empty = matches.is_present("missing-as-empty");

    let use_color = should_use_color(color_output);

    let display_options = DisplayOptions {
        background_color,
        use_color,
        print_unchanged,
        tab_width,
        display_mode,
        display_width,
        syntax_highlight,
        in_vcs,
    };

    Mode::Diff {
        graph_limit,
        byte_limit,
        display_options,
        missing_as_empty,
        language_override,
        lhs_path: lhs_path.to_owned(),
        rhs_path: rhs_path.to_owned(),
        lhs_display_path: lhs_display_path.to_string_lossy().to_string(),
        rhs_display_path: rhs_display_path.to_string_lossy().to_string(),
    }
}

/// Choose the display width: try to autodetect, or fall back to a
/// sensible default.
fn detect_display_width() -> usize {
    term_size::dimensions().map_or(80, |(w, _)| w)
}

pub fn should_use_color(color_output: ColorOutput) -> bool {
    match color_output {
        ColorOutput::Always => true,
        ColorOutput::Auto => {
            // Always enable colour if stdout is a TTY or if the git pager is active.
            // TODO: consider following the env parsing logic in git_config_bool
            // in config.c.
            atty::is(Stream::Stdout) || env::var("GIT_PAGER_IN_USE").is_ok()
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
