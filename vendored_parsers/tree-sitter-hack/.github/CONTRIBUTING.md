# Contributors Guide

Interested in contributing? Awesome! Before you do though, please read our
[Code of Conduct](https://slackhq.github.io/code-of-conduct). We take it very seriously, and expect that you will as
well.

There are many ways you can contribute! :heart:

### Bug Reports and Fixes :bug:
-  If you find a bug, please search for it in the [Issues](https://github.com/slackhq/tree-sitter-hack/issues), and if it isn't already tracked,
   [create a new issue](https://github.com/slackhq/tree-sitter-hack/issues/new). Fill out the "Bug Report" section of the issue template. Even if an Issue is closed, feel free to comment and add details, it will still
   be reviewed.
-  Issues that have already been identified as a bug (note: able to reproduce) will be labelled `bug`.
-  If you'd like to submit a fix for a bug, [send a Pull Request](#creating_a_pull_request) and mention the Issue number.
  -  Include tests that isolate the bug and verifies that it was fixed.

### New Features :bulb:
-  If you'd like to add new functionality to this project, describe the problem you want to solve in a [new Issue](https://github.com/slackhq/tree-sitter-hack/issues/new).
-  Issues that have been identified as a feature request will be labelled `enhancement`.
-  If you'd like to implement the new feature, please wait for feedback from the project
   maintainers before spending too much time writing the code. In some cases, `enhancement`s may
   not align well with the project objectives at the time.

### Tests :mag:, Documentation :books:, Miscellaneous :sparkles:
-  If you'd like to improve the tests, you want to make the documentation clearer, you have an
   alternative implementation of something that may have advantages over the way its currently
   done, or you have any other change, we would be happy to hear about it!
  -  If its a trivial change, go ahead and [send a Pull Request](#creating_a_pull_request) with the changes you have in mind.
  -  If not, [open an Issue](https://github.com/slackhq/tree-sitter-hack/issues/new) to discuss the idea first.

If you're new to our project and looking for some way to make your first contribution, look for
Issues labelled `good first contribution`.

## Requirements

For your contribution to be accepted:

- [x] You must have signed the [Contributor License Agreement (CLA)](https://cla-assistant.io/slackhq/tree-sitter-hack).
- [x] The test suite must be complete and pass.
- [x] The changes must be approved by code review.
- [x] Commits should be atomic and messages must be descriptive. Related issues should be mentioned by Issue number.

If the contribution doesn't meet the above criteria, you may fail our automated checks or a maintainer will discuss it with you. You can continue to improve a Pull Request by adding commits to the branch from which the PR was created.

[Interested in knowing more about about pull requests at Slack?](https://slack.engineering/on-empathy-pull-requests-979e4257d158#.awxtvmb2z)

## Creating a Pull Request

1.  :fork_and_knife: Fork the repository on GitHub.
2.  :runner: Clone/fetch your fork to your local development machine. It's a good idea to run the tests just
    to make sure everything is in order.
3.  :herb: Create a new branch and check it out.
4.  :crystal_ball: Make your changes and commit them locally. Magic happens here!
5.  :arrow_heading_up: Push your new branch to your fork. (e.g. `git push username fix-issue-16`).
6.  :inbox_tray: Open a Pull Request on github.com from your new branch on your fork to `main` in this
    repository.

## Maintainers

There are more details about processes and workflow in the [Maintainer's Guide](./maintainers_guide.md).
