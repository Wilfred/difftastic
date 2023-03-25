use assert_cmd::prelude::*;
use predicates::prelude::*;
use std::process::Command;

#[test]
fn no_such_files() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("no_such_file").arg("no_such_file_either");
    cmd.assert().failure().code(2);
}

#[test]
fn inline() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--display=inline")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn binary_changed() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--display=inline")
        .arg("img/logo.png")
        .arg("/dev/null");

    let predicate_fn = predicate::str::contains("Binary contents changed");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn has_changes_default_exit_code() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().success();
}

#[test]
fn has_changes_requested_exit_code() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--exit-code")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");
    cmd.assert().failure().code(1);
}

#[test]
fn check_only() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--check-only")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");

    let predicate_fn = predicate::str::contains("Has syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only_text_file() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--check-only")
        .arg("sample_files/text_before.txt")
        .arg("sample_files/text_after.txt");

    let predicate_fn = predicate::str::contains("Has changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn makefile_text_as_atom() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/cli_tests/makefile_before.mk")
        .arg("sample_files/cli_tests/makefile_after.mk");

    let predicate_fn = predicate::str::contains("CCFLAGS");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn yaml_parse_errors() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/cli_tests/bad_yaml_before.yml")
        .arg("sample_files/cli_tests/bad_yaml_after.yml");

    let predicate_fn = predicate::str::contains("exceeded DFT_PARSE_ERROR_LIMIT");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn list_languages() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--list-languages");

    let predicate_fn = predicate::str::contains("TOML");
    cmd.assert().stdout(predicate_fn);

    let predicate_fn = predicate::str::contains("*.toml");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn test_mime_type_false_positive() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/cli_tests/x_mod_false_positive.js")
        .arg("sample_files/cli_tests/empty.js");

    let predicate_fn = predicate::str::contains("JavaScript");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn slightly_invalid_utf8() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/cli_tests/MainWindowViewModel.cs")
        .arg("/dev/null");

    let predicate_fn = predicate::str::contains("using");
    cmd.assert().stdout(predicate_fn);
}
