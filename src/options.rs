use std::{borrow::Borrow, env};

use atty::Stream;
use clap::{crate_authors, crate_description, crate_version, App, AppSettings, Arg};
use const_format::formatcp;

use crate::{guess_language, style::BackgroundColor};

pub const DEFAULT_NODE_LIMIT: u32 = 30_000;
pub const DEFAULT_BYTE_LIMIT: usize = 1_000_000;

const USAGE: &str = concat!(env!("CARGO_BIN_NAME"), " [OPTIONS] OLD-PATH NEW-PATH");

#[derive(Debug)]
pub enum ColorOutput {
    Always,
    Auto,
    Never,
}

fn app() -> clap::App<'static> {
    App::new("Difftastic")
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
                .long_help("Use this many columns when calculating line wrapping. Overrides $DFT_WIDTH if present. If not specified, difftastic will detect the terminal width.")
                .validator(|s| s.parse::<usize>())
                .required(false),
        )
        .arg(
            Arg::new("display").long("display")
                .possible_values(["side-by-side", "side-by-side-show-both", "inline", "unified"])
                .value_name("MODE")
                .help("Display mode for showing results. Overrides $DFT_DISPLAY if present.")
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
                .possible_values(["dark", "light"])
                .help("Set the background brightness. Overrides $DFT_BACKGROUND if present. Difftastic will prefer brighter colours on dark backgrounds.")
        )
        .arg(
            Arg::new("skip-unchanged").long("skip-unchanged")
                .help("Don't display anything if a file is unchanged.")
        )
        .arg(
            Arg::new("missing-as-empty").long("missing-as-empty")
                .help("Treat paths that don't exist as equivalent to an empty file.")
        )
        .arg(
            Arg::new("language").long("language")
                .value_name("EXT")
                .allow_invalid_utf8(true)
                .help("Override language detection. Inputs are assumed to have this file extension. When diffing directories, applies to all files.")
                // TODO: support DFT_LANGUAGE for consistency
        )
        .arg(
            Arg::new("node-limit").long("node-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help(concat!("Use a text diff if the number of syntax nodes exceeds this number. Overrides $DFT_NODE_LIMIT if present."))
                .default_value(formatcp!("{}", DEFAULT_NODE_LIMIT))
                .validator(|s| s.parse::<u32>())
                .required(false),
        )
        .arg(
            Arg::new("byte-limit").long("byte-limit")
                .takes_value(true)
                .value_name("LIMIT")
                .help(concat!("Use a text diff if either input file exceeds this size. Overrides $DFT_BYTE_LIMIT if present."))
                .default_value(formatcp!("{}", DEFAULT_BYTE_LIMIT))
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
        .setting(AppSettings::ArgRequiredElseHelp)
}

#[derive(Debug, Copy, Clone)]
pub enum DisplayMode {
    Inline,
    SideBySide,
    SideBySideShowBoth,
    Unified,
}

pub enum Mode {
    Diff {
        node_limit: u32,
        byte_limit: usize,
        print_unchanged: bool,
        missing_as_empty: bool,
        display_mode: DisplayMode,
        background_color: BackgroundColor,
        color_output: ColorOutput,
        display_width: usize,
        display_path: String,
        language_override: Option<guess_language::Language>,
        lhs_path: String,
        rhs_path: String,
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

    // TODO: Use OsString rather than forcing paths to be valid UTF-8.
    let args: Vec<_> = matches.values_of_lossy("paths").unwrap_or_default();
    info!("CLI arguments: {:?}", args);

    // TODO: document these different ways of calling difftastic.
    let (display_path, lhs_path, rhs_path) = match &args[..] {
        [lhs_path, rhs_path] => (
            rhs_path.to_string(),
            lhs_path.to_string(),
            rhs_path.to_string(),
        ),
        [display_path, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode] => {
            // https://git-scm.com/docs/git#Documentation/git.txt-codeGITEXTERNALDIFFcode
            (
                display_path.to_string(),
                lhs_tmp_file.to_string(),
                rhs_tmp_file.to_string(),
            )
        }
        [_old_name, lhs_tmp_file, _lhs_hash, _lhs_mode, rhs_tmp_file, _rhs_hash, _rhs_mode, new_name, _similarity] =>
        {
            // Rename file.
            // TODO: mention old name as well as diffing.
            // TODO: where does git document these 9 arguments?
            (
                new_name.to_string(),
                lhs_tmp_file.to_string(),
                rhs_tmp_file.to_string(),
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
        let env_width = if let Ok(env_width) = env::var("DFT_WIDTH") {
            env_width.parse::<usize>().ok()
        } else {
            None
        };
        env_width.unwrap_or_else(detect_display_width)
    };

    let display_mode_str = if let Some(display_mode_str) = matches.value_of("display") {
        display_mode_str.to_owned()
    } else {
        env::var("DFT_DISPLAY").unwrap_or_else(|_| "".to_owned())
    };
    let display_mode = match display_mode_str.borrow() {
        "side-by-side" => DisplayMode::SideBySide,
        "side-by-side-show-both" => DisplayMode::SideBySideShowBoth,
        "inline" => DisplayMode::Inline,
        "unified" => DisplayMode::Unified,
        _ => {
            // The CLI validates values, but environment variables can
            // be any string.
            DisplayMode::SideBySide
        }
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
        if let Ok(background) = env::var("DFT_BACKGROUND") {
            if background == "light" {
                BackgroundColor::Light
            } else {
                BackgroundColor::Dark
            }
        } else {
            BackgroundColor::Dark
        }
    };

    let node_limit: u32 = if matches.occurrences_of("node-limit") == 0 {
        if let Ok(env_width) = env::var("DFT_NODE_LIMIT") {
            env_width.parse::<u32>().ok().unwrap_or(DEFAULT_NODE_LIMIT)
        } else {
            DEFAULT_NODE_LIMIT
        }
    } else {
        matches
            .value_of("node-limit")
            .expect("Always present as we've given clap a default")
            .parse::<u32>()
            .expect("Value already validated by clap")
    };

    let byte_limit: usize = if matches.occurrences_of("byte-limit") == 0 {
        if let Ok(env_width) = env::var("DFT_BYTE_LIMIT") {
            env_width
                .parse::<usize>()
                .ok()
                .unwrap_or(DEFAULT_BYTE_LIMIT)
        } else {
            DEFAULT_BYTE_LIMIT
        }
    } else {
        matches
            .value_of("byte-limit")
            .expect("Always present as we've given clap a default")
            .parse::<usize>()
            .expect("Value already validated by clap")
    };

    let print_unchanged = !matches.is_present("skip-unchanged");
    let missing_as_empty = matches.is_present("missing-as-empty");

    Mode::Diff {
        node_limit,
        byte_limit,
        print_unchanged,
        missing_as_empty,
        display_mode,
        background_color,
        color_output,
        display_width,
        display_path,
        language_override,
        lhs_path,
        rhs_path,
    }
}

/// Choose the display width: try to autodetect, or fall back to a
/// sensible default.
fn detect_display_width() -> usize {
    term_size::dimensions().map(|(w, _)| w).unwrap_or(80)
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
