use assert_cmd::prelude::*;
use std::process::Command;

#[test]
fn no_such_files() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("no_such_file").arg("no_such_file_either");
    cmd.assert().failure().code(2);
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
    use predicates::prelude::*;

    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--check-only")
        .arg("sample_files/simple_before.js")
        .arg("sample_files/simple_after.js");

    let predicate_fn = predicate::str::contains("Has syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only_text_file() {
    use predicates::prelude::*;

    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("--check-only")
        .arg("sample_files/text_before.txt")
        .arg("sample_files/text_after.txt");

    let predicate_fn = predicate::str::contains("Has changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn makefile_text_as_atom() {
    use predicates::prelude::*;

    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("sample_files/cli_tests/makefile_before.mk")
        .arg("sample_files/cli_tests/makefile_after.mk");

    let predicate_fn = predicate::str::contains("CCFLAGS");
    cmd.assert().stdout(predicate_fn);
}
