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
    let path = assert_cmd::cargo_bin!("difft");
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
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    cmd.assert().success();
}

#[test]
fn binary_changed() {
    let mut cmd = get_base_command();

    cmd.arg("--display=inline")
        .arg("img/logo.png")
        .arg("/dev/null");

    let predicate_fn = predicate::str::contains("Binary file removed");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn binary_override() {
    let mut cmd = get_base_command();

    cmd.arg("--override-binary=*.js")
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    let predicate_fn = predicate::str::contains("Binary file modified");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn has_changes_default_exit_code() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    cmd.assert().success();
}

#[test]
fn has_changes_requested_exit_code() {
    let mut cmd = get_base_command();

    cmd.arg("--exit-code")
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    cmd.assert().failure().code(1);
}

#[test]
fn ignore_comments() {
    let mut cmd = get_base_command();

    cmd.arg("--ignore-comments")
        .arg("sample_files/comma_and_comment_1.js")
        .arg("sample_files/comma_and_comment_2.js");

    let predicate_fn = predicate::str::contains("No syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only() {
    let mut cmd = get_base_command();

    cmd.arg("--check-only")
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");

    let predicate_fn = predicate::str::contains("Has syntactic changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn check_only_text_file() {
    let mut cmd = get_base_command();

    cmd.arg("--check-only")
        .arg("sample_files/text_1.txt")
        .arg("sample_files/text_2.txt");

    let predicate_fn = predicate::str::contains("Has changes");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn text_changes_at_end_doesnt_crash() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/changes_at_end_1.txt")
        .arg("sample_files/cli_tests/changes_at_end_2.txt");

    cmd.assert().success();
}

#[test]
fn makefile_text_as_atom() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/makefile_1.mk")
        .arg("sample_files/cli_tests/makefile_2.mk");

    let predicate_fn = predicate::str::contains("CCFLAGS");
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn yaml_parse_errors() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/cli_tests/bad_yaml_1.yml")
        .arg("sample_files/cli_tests/bad_yaml_2.yml");

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

    cmd.arg("sample_files/dir_1").arg("sample_files/dir_2");

    let predicate_fn =
        predicate::str::contains("only_in_1.c").and(predicate::str::contains("only_in_2.rs"));
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn git_style_arguments_rename() {
    let mut cmd = get_base_command();

    cmd.arg("elisp_oldname.el")
        .arg("sample_files/elisp_1.el")
        .arg("lhs_hash_placeholder")
        .arg("lhs_mode_placeholder")
        .arg("sample_files/elisp_2.el")
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
        .arg("sample_files/simple_1.txt")
        .arg("abcdef1234")
        .arg("100644");
    let predicate_fn = predicate::str::contains("File permissions changed").not();
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn drop_different_path_starts() {
    let mut cmd = get_base_command();

    cmd.arg("sample_files/dir_1/clojure.clj")
        .arg("sample_files/dir_2/clojure.clj");
    let predicate_fn = predicate::str::contains("dir_2/clojure.clj").not();
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn dump_tree_sitter() {
    let mut cmd = get_base_command();

    cmd.arg("--dump-ts")
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    cmd.assert().success();
}

#[test]
fn dump_syntax() {
    let mut cmd = get_base_command();

    cmd.arg("--dump-syntax")
        .arg("sample_files/simple_1.js")
        .arg("sample_files/simple_2.js");
    cmd.assert().success();
}

#[test]
fn walk_hidden_items() {
    let mut cmd = get_base_command();

    cmd.args(["sample_files/hidden_1", "sample_files/hidden_2"]);

    let predicate_fn =
        predicate::str::contains(format!(".hidden{}doc.txt", std::path::MAIN_SEPARATOR))
            .and(predicate::str::contains(".hidden.txt"))
            .and(predicate::str::contains("before"))
            .and(predicate::str::contains("after"));
    cmd.assert().stdout(predicate_fn);
}

#[test]
fn git_unmerged_files() {
    let mut cmd = get_base_command();

    cmd.args(["sample_files/simple_1.js"]);
    cmd.env("GIT_EXEC_PATH", "/usr/lib/git-core");

    let predicate_fn = predicate::str::contains("Unmerged path");
    cmd.assert().stdout(predicate_fn);
}

/// Assert that `--show-function` pulls in the definition of
/// `function_name` as context, and that it is *not* shown without the
/// flag (i.e. the definition is far enough away that only
/// `--show-function` surfaces it).
fn assert_function_context(old: &str, new: &str, function_name: &str) {
    // Without --show-function, the distant definition is not displayed.
    let mut cmd = get_base_command();
    cmd.arg("--color=never").arg(old).arg(new);
    cmd.assert()
        .success()
        .stdout(predicate::str::contains(function_name).not());

    // With --show-function, the enclosing definition is displayed.
    let mut cmd = get_base_command();
    cmd.arg("--color=never")
        .arg("--show-function")
        .arg(old)
        .arg(new);
    cmd.assert()
        .success()
        .stdout(predicate::str::contains(function_name));
}

/// Assert that `--show-function` does not show `function_name`, e.g.
/// because the change is not inside any function.
fn assert_no_function_context(old: &str, new: &str, function_name: &str) {
    let mut cmd = get_base_command();
    cmd.arg("--color=never")
        .arg("--show-function")
        .arg(old)
        .arg(new);
    cmd.assert()
        .success()
        .stdout(predicate::str::contains(function_name).not());
}

#[test]
fn show_function_rust() {
    assert_function_context(
        "sample_files/show_function_rust_1.rs",
        "sample_files/show_function_rust_2.rs",
        "enclosing_function",
    );
}

#[test]
fn show_function_rust_top_level() {
    assert_no_function_context(
        "sample_files/show_function_rust_1.rs",
        "sample_files/show_function_rust_toplevel.rs",
        "enclosing_function",
    );
}

#[test]
fn show_function_c() {
    assert_function_context(
        "sample_files/show_function_c_1.c",
        "sample_files/show_function_c_2.c",
        "enclosing_function",
    );
}

#[test]
fn show_function_c_top_level() {
    assert_no_function_context(
        "sample_files/show_function_c_1.c",
        "sample_files/show_function_c_toplevel.c",
        "enclosing_function",
    );
}

#[test]
fn show_function_python() {
    assert_function_context(
        "sample_files/show_function_python_1.py",
        "sample_files/show_function_python_2.py",
        "enclosing_function",
    );
}

#[test]
fn show_function_python_top_level() {
    assert_no_function_context(
        "sample_files/show_function_python_1.py",
        "sample_files/show_function_python_toplevel.py",
        "enclosing_function",
    );
}

#[test]
fn show_function_php() {
    assert_function_context(
        "sample_files/show_function_php_1.php",
        "sample_files/show_function_php_2.php",
        "enclosing_function",
    );
}

#[test]
fn show_function_php_top_level() {
    assert_no_function_context(
        "sample_files/show_function_php_1.php",
        "sample_files/show_function_php_toplevel.php",
        "enclosing_function",
    );
}

#[test]
fn show_function_new_inner_shows_top_level() {
    // Adding a new inner function should surface the top-level
    // function's definition, not the new inner one.
    assert_function_context(
        "sample_files/show_function_new_inner_1.rs",
        "sample_files/show_function_new_inner_2.rs",
        "outer_function",
    );
}

#[test]
fn show_function_renamed() {
    // Renaming an inner function surfaces the enclosing function.
    assert_function_context(
        "sample_files/show_function_rename_1.rs",
        "sample_files/show_function_rename_2.rs",
        "top_function",
    );
}

#[test]
fn show_function_deleted() {
    // Deleting an inner function surfaces the enclosing function.
    assert_function_context(
        "sample_files/show_function_delete_1.rs",
        "sample_files/show_function_delete_2.rs",
        "top_function",
    );
}

#[test]
fn show_function_nested_single_line() {
    // Two functions are defined on the same line. --show-function should
    // surface that single shared definition line (sane output, no panic)
    // when a change happens inside their body. We use a wide terminal so
    // the long definition line isn't wrapped, keeping the assertion
    // robust.
    let old = "sample_files/show_function_nested_oneline_1.rs";
    let new = "sample_files/show_function_nested_oneline_2.rs";

    let mut cmd = get_base_command();
    cmd.arg("--color=never")
        .arg("--width=200")
        .arg("--show-function")
        .arg(old)
        .arg(new);
    cmd.assert().success().stdout(predicate::str::contains(
        "fn outer_oneline() { fn inner_oneline() {",
    ));

    // Without --show-function, the shared definition line is too far from
    // the change to be displayed.
    let mut cmd = get_base_command();
    cmd.arg("--color=never")
        .arg("--width=200")
        .arg(old)
        .arg(new);
    cmd.assert()
        .success()
        .stdout(predicate::str::contains("outer_oneline").not());
}
