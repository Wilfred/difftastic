use difftastic::hunks::matched_pos_to_hunks;
use log::info;
use mimalloc::MiMalloc;

#[global_allocator]
static GLOBAL: MiMalloc = MiMalloc;

use atty::Stream;
use clap::{crate_version, App, AppSettings, Arg};
use std::{env, ffi::OsStr, path::Path};
use typed_arena::Arena;
use walkdir::WalkDir;

use difftastic::*;
use difftastic::{
    dijkstra::mark_syntax,
    files::{is_probably_binary, read_or_die},
    lines::{join_overlapping, visible_groups, MaxLine},
    syntax::{change_positions, init_info, matching_lines},
    tree_sitter_parser as tsp,
};

extern crate pretty_env_logger;

fn configure_color() {
    if atty::is(Stream::Stdout) || env::var("GIT_PAGER_IN_USE").is_ok() {
        // Always enable colour if stdout is a TTY or if the git pager is active.
        // TODO: provide a way to disable this.
        // TODO: consider following the env parsing logic in git_config_bool
        // in config.c.
        colored::control::set_override(true);
    }
}

enum Mode {
    Diff {
        display_path: String,
        lhs_path: String,
        rhs_path: String,
    },
    DumpTreeSitter {
        path: String,
    },
    DumpSyntax {
        path: String,
    },
}

fn parse_args() -> Mode {
    let matches =
        App::new("Difftastic")
            .version(crate_version!())
            .about("A syntax aware diff.")
            .author("Wilfred Hughes")
            .arg(Arg::with_name("dump-syntax").long("dump-syntax").help(
                "Parse a single file with tree-sitter and display the difftastic syntax tree.",
            ))
            .arg(Arg::with_name("dump-ts").long("dump-ts").help(
                "Parse a single file with tree-sitter and display the tree-sitter parse tree.",
            ))
            .arg(Arg::with_name("positional_args").multiple(true))
            .setting(AppSettings::ArgRequiredElseHelp)
            .get_matches();

    let args: Vec<_> = matches.values_of_lossy("positional_args").unwrap();
    info!("CLI arguments: {:?}", args);

    if matches.is_present("dump-syntax") {
        if args.len() == 1 {
            return Mode::DumpSyntax {
                path: args[0].clone(),
            };
        } else {
            // TODO: delegate this parsing to clap.
            panic!(
                "Error: --dump-syntax takes one argument, but got: {}",
                args.len()
            );
        }
    }

    if matches.is_present("dump-ts") {
        if args.len() == 1 {
            return Mode::DumpTreeSitter {
                path: args[0].clone(),
            };
        } else {
            // TODO: delegate this parsing to clap.
            panic!(
                "Error: --dump-ts takes one argument, but got: {}",
                args.len()
            );
        }
    }

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
        _ => panic!(
            "Unexpected number of arguments, got {}: {:?}",
            args.len(),
            args
        ),
    };

    Mode::Diff {
        display_path,
        lhs_path,
        rhs_path,
    }
}

/// Terminate the process if we get SIGPIPE.
#[cfg(unix)]
fn reset_sigpipe() {
    unsafe {
        libc::signal(libc::SIGPIPE, libc::SIG_DFL);
    }
}

#[cfg(not(unix))]
fn reset_sigpipe() {
    // Do nothing.
}

fn main() {
    pretty_env_logger::init();

    reset_sigpipe();
    configure_color();

    let mode = parse_args();
    let (display_path, lhs_path, rhs_path) = match mode {
        Mode::DumpTreeSitter { path } => {
            let extension = Path::new(&path).extension();
            let extension = extension.unwrap_or_else(|| OsStr::new(""));
            match tsp::from_extension(extension) {
                Some(ts_lang) => {
                    let bytes = read_or_die(&path);
                    let src = String::from_utf8_lossy(&bytes).to_string();
                    let (tree, _) = tsp::parse_to_tree(&src, &ts_lang);
                    tsp::print_tree(&tree);
                }
                None => {
                    println!("No tree-sitter parser for extension: {:?}", extension);
                }
            }
            return;
        }
        Mode::DumpSyntax { path } => {
            let extension = Path::new(&path).extension();
            let extension = extension.unwrap_or_else(|| OsStr::new(""));
            match tsp::from_extension(extension) {
                Some(ts_lang) => {
                    let bytes = read_or_die(&path);
                    let src = String::from_utf8_lossy(&bytes).to_string();
                    let arena = Arena::new();
                    let ast = tsp::parse(&arena, &src, &ts_lang);
                    init_info(&ast, &[]);
                    println!("{:#?}", ast);
                }
                None => {
                    println!("No tree-sitter parser for extension: {:?}", extension);
                }
            }
            return;
        }
        Mode::Diff {
            display_path,
            lhs_path,
            rhs_path,
        } => (display_path, lhs_path, rhs_path),
    };

    if Path::new(&lhs_path).is_dir() && Path::new(&rhs_path).is_dir() {
        diff_directories(&lhs_path, &rhs_path);
    } else {
        diff_file(&display_path, &lhs_path, &rhs_path);
    }
}

// TODO: prefer PathBuf to &str for paths.
fn diff_file(display_path: &str, lhs_path: &str, rhs_path: &str) {
    let lhs_bytes = read_or_die(lhs_path);
    let rhs_bytes = read_or_die(rhs_path);

    let lhs_binary = is_probably_binary(&lhs_bytes);
    let rhs_binary = is_probably_binary(&rhs_bytes);
    if lhs_binary || rhs_binary {
        print!("{}", style::header(display_path, 1, 1, "binary"));
        return;
    }

    // TODO: don't replace tab characters inside string literals.
    let lhs_src = String::from_utf8_lossy(&lhs_bytes)
        .to_string()
        .replace("\t", "    ");
    let rhs_src = String::from_utf8_lossy(&rhs_bytes)
        .to_string()
        .replace("\t", "    ");

    let extension = Path::new(&display_path).extension();
    let extension = extension.unwrap_or_else(|| OsStr::new(""));
    let ts_lang = tsp::from_extension(extension);

    let arena = Arena::new();
    let (lang_name, lhs, rhs) = match ts_lang {
        Some(ts_lang) => (
            ts_lang.name,
            tsp::parse(&arena, &lhs_src, &ts_lang),
            tsp::parse(&arena, &rhs_src, &ts_lang),
        ),
        None => (
            "text",
            line_parser::parse(&arena, &lhs_src),
            line_parser::parse(&arena, &rhs_src),
        ),
    };

    init_info(&lhs, &rhs);
    mark_syntax(lhs.get(0).copied(), rhs.get(0).copied());

    let lhs_positions = change_positions(&lhs_src, &rhs_src, &lhs);
    let rhs_positions = change_positions(&rhs_src, &lhs_src, &rhs);

    let lhs_matched_lines = matching_lines(&lhs);

    let hunks = matched_pos_to_hunks(&lhs_positions, &rhs_positions);

    let mut groups = visible_groups(&lhs_positions, &rhs_positions);
    if hunks.is_empty() {
        if lang_name == "text" {
            println!("No changes.\n");
        } else {
            println!("No syntactic changes.\n");
        }
        return;
    }

    for group in &mut groups {
        group.pad(3, lhs_src.max_line(), rhs_src.max_line());
    }
    groups = join_overlapping(groups);

    if env::var("INLINE").is_ok() {
        println!("{}", style::header(display_path, 1, 1, lang_name));

        println!(
            "{}",
            inline::display(&lhs_src, &rhs_src, &lhs_positions, &rhs_positions, &groups)
        );
    } else {
        println!(
            "{}",
            side_by_side::display_hunks(
                &hunks,
                display_path,
                lang_name,
                &lhs_src,
                &rhs_src,
                &lhs_positions,
                &rhs_positions,
                lhs_src.max_line(),
                rhs_src.max_line(),
            )
        );
    }
}

/// Given two directories that contain the files, compare them
/// pairwise.
///
/// This is how the hg extdiff extension calls a diff tool when there
/// is more than one changed file.
fn diff_directories(lhs_dir: &str, rhs_dir: &str) {
    for entry in WalkDir::new(lhs_dir).into_iter().filter_map(Result::ok) {
        let lhs_path = entry.path();
        if lhs_path.is_dir() {
            continue;
        }

        let rel_path = lhs_path.strip_prefix(lhs_dir).unwrap();
        let rhs_path = Path::new(rhs_dir).join(rel_path);

        diff_file(
            &rel_path.to_string_lossy(),
            &lhs_path.to_string_lossy(),
            &rhs_path.to_string_lossy(),
        );
    }
}
