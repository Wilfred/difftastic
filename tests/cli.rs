use std::process::Command;

use assert_cmd::prelude::*;
use predicates::prelude::*;

fn find_runner() -> Option<String> {
    for (key, value) in std::env::vars() {
        if key.starts_with("CARGO_TARGET_") && key.ends_with("_RUNNER") && !value.is_empty() {
            return Some(value);
        }
    }
    None
}

// Sample code from
// https://github.com/assert-rs/assert_cmd/issues/139, supports
// cross-compiled binaries.
fn get_base_command() -> Command {
    let mut cmd;
    let path = assert_cmd::cargo::cargo_bin("difft");
    if let Some(runner) = find_runner() {
        let mut runner = runner.split_whitespace();
        cmd = Command::new(runner.next().unwrap());
        for arg in runner {
            cmd.arg(arg);
        }
        cmd.arg(path);
    } else {
        cmd = Command::new(path);
    }
    cmd
}

#[test]
fn no_such_files() {
    let mut cmd = get_base_command();

    cmd.arg("no_such_file").arg("no_such_file_either");
    cmd.assert().failure().code(2);
}

#[test]
fn inline() {
    let mut cmd = get_base_command();

    cmd.arg("--display=inline")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn binary_changed() {
    let mut cmd = get_base_command();

    cmd.arg("--display=inline")
        .arg("img/logo.png")
        .arg("/dev/null");

    let predicate_fn = predicate::str::contains("Binary contents changed");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn has_changes_default_exit_code() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn has_changes_requested_exit_code() {
    let mut cmd = get_base_command();

    cmd.arg("--exit-code")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().failure().code(1);
}

#[test]
fn ignore_comments() {
    let mut cmd = get_base_command();

    cmd.arg("--ignore-comments")
        .arg("sample_files/comma_and_comment_before.js")
        .arg("sample_files/comma_and_comment_after.js");

    let predicate_fn = predicate::str::contains("No syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only() {
    let mut cmd = get_base_command();

    cmd.arg("--check-only")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");

    let predicate_fn = predicate::str::contains("Has syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only_text_file() {
    let mut cmd = get_base_command();

    cmd.arg("--check-only")
        .arg("sample_files/text_before.txt")
        .arg("sample_files/text_after.txt");

    let predicate_fn = predicate::str::contains("Has changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn makefile_text_as_atom() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/makefile_before.mk")
        .arg("sample_files/cli_tests/makefile_after.mk");

    let predicate_fn = predicate::str::contains("CCFLAGS");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn yaml_parse_errors() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/bad_yaml_before.yml")
        .arg("sample_files/cli_tests/bad_yaml_after.yml");

    let predicate_fn = predicate::str::contains("exceeded DFT_PARSE_ERROR_LIMIT");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn list_languages() {
    let mut cmd = get_base_command();

    cmd.arg("--list-languages");

    let predicate_fn = predicate::str::contains("TOML");
    cmd.assert().stdout(predicate_fn);

    let predicate_fn = predicate::str::contains("*.toml");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn test_mime_type_false_positive() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/x_mod_false_positive.js")
        .arg("sample_files/cli_tests/empty.js");

    let predicate_fn = predicate::str::contains("JavaScript");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn slightly_invalid_utf8() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/MainWindowViewModel.cs")
        .arg("/dev/null");

    let predicate_fn = predicate::str::contains("using");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn directory_arguments() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/dir_before")
        .arg("sample_files/dir_after");

    let predicate_fn = predicate::str::contains("only_in_before.c")
        .and(predicate::str::contains("only_in_after_dir.rs"));
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn git_style_arguments_rename() {
    let mut cmd = get_base_command();

    cmd.arg("elisp_oldname.el")
        .arg("sample_files/elisp_before.el")
        .arg("lhs_hash_placeholder")
        .arg("lhs_mode_placeholder")
        .arg("sample_files/elisp_after.el")
        .arg("rhs_hash_placeholder")
        .arg("rhs_mode_placeholder")
        .arg("elisp_newname.el")
        .arg("similarity_placeholder");
    let predicate_fn = predicate::str::contains("Renamed");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn git_style_arguments_new_file() {
    let mut cmd = get_base_command();

    cmd.arg("simple.txt")
        .arg("/dev/null")
        .arg(".")
        .arg(".")
        .arg("sample_files/simple_before.txt")
        .arg("abcdef1234")
        .arg("100644");
    let predicate_fn = predicate::str::contains("File permissions changed").not();
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn drop_different_path_starts() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/dir_before/clojure.clj")
        .arg("sample_files/dir_after/clojure.clj");
    let predicate_fn = predicate::str::contains("dir_after/clojure.clj").not();
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn dump_tree_sitter() {
    let mut cmd = get_base_command();

    cmd.arg("--dump-ts")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn dump_syntax() {
    let mut cmd = get_base_command();

    cmd.arg("--dump-syntax")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn walk_hidden_items() {
    let mut cmd = get_base_command();

    cmd.args(["sample_files/hidden-before", "sample_files/hidden-after"]);

    let predicate_fn =
        predicate::str::contains(format!(".hidden{}doc.txt", std::path::MAIN_SEPARATOR))
            .and(predicate::str::contains(".hidden.txt"))
            .and(predicate::str::contains("before"))
            .and(predicate::str::contains("after"));
    cmd.assert().stdout(predicate_fn);
}
