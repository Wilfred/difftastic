We welcome additional contributions from the community!
If you're thinking of contributing, here's what you should know.

 1. First check to make sure if an issue for the problem you're addressing,
    or feature you're adding, has already been filed.  If not, file one here:

	https://github.com/gdamore/tree-sitter-d/issues

    Please indicate in the description of the issue that you're working on
    the issue, so we don't duplicate effort.

 2. By submitting code to the project, you are asserting that the work is
    either your own, or that you are authorized to submit it to this project.
    Further, you are asserting that the project may continue to use, modify,
    and redistribute your contribution under the terms in the LICENSE.txt file.

 3. We maintain an "always release ready" stance for the master branch.  That
    is, at any point in time the tree should be in a state that a release
    could be cut, and bisect should never find a point where an issue is
    incompletely fixed or addressed.

 4. Your code must pass the CI checks.  You can test your grammar
    using "tree-sitter test", and it must be clean.

 5. If you add content to the grammar.js, please make sure to run
    the "npm format" script.  You will need "prettifier" to be
    installed.

 6. If you change the scanner.c file, please observe the formatting.
    You can format the code automatically using clang-format, and a
    `.clang-format` file is provided for this purpose.

 7. Every issue must be fixed by at most one git commit, which shall normally
    be identified in the first line of the commit message using the syntax

	"fixes #<issue#> <exact issue synopsis>"

    You can have multiple such lines if your commit addresses multiple issues,
    but this is normally discouraged.

 8. No merge commits.  Rebase if you need to.

 9. Additional text may follow the above line(s), separated from them by an
    empty line.  Normally this is not necessary, since the information should
    be in the bug tracking system.  Look at the git log to see examples.

10. Submit a GitHub pull request.  Ideally just one bug per PR if possible,
    and based upon the latest commit in the GitHub master branch.

11. We may rebase your changes, including squashing multiple commits,
    or ask you to do so, if you have not followed the procedure above, or
    if other changes have been made to the tree since you committed.

12. If you wish to add a copyright notice, please do so after any
    existing one and follow the existing style, and do not add new terms. 
    (For example, do not add "All rights reserved.")

Thank you for your contributions!
