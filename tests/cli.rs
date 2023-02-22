use assert_cmd::prelude::*;
use std::process::Command;

#[test]
fn no_such_files() {
    let mut cmd = Command::cargo_bin("difft").unwrap();

    cmd.arg("no_such_file").arg("no_such_file_either");
    cmd.assert().failure().code(2);
}
