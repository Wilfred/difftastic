# Maintainers Guide

This document describes tools, tasks and workflow that one needs to be familiar with in order to effectively maintain
this project. If you use this package within your own software as is but don't plan on modifying it, this guide is
**not** for you.

## Tools

Across our scripts we use a few tools. Using `brew install`, you will probably need to install `gsed`, `fd`, and `ruby`.

You will also need [Hack](https://docs.hhvm.com/hack/getting-started/getting-started) installed to run `hh_*****` commands.

We highly recommend using our editor of choice, VSCode, as it integrates well our included tasks. **Please install the VSCode Prettier extension to keep our codebase readable and prevent extra noise in commits.**

Look in [/bin](/bin) for a variety of useful scripts.


## Tasks

[VSCode tasks](https://code.visualstudio.com/docs/editor/tasks) are extremely useful when developing to quickly test changes in the grammar. We highly recommend using the ones we have included, which can be found [here](/.vscode/tasks.json). You can access them quickly using the command palette.

### Testing

Use the `npm run` scripts to run our test suite. For example, `npm run test` or `npm run test-corpus`. 

### Releasing

This project is released here: https://www.npmjs.com/package/tree-sitter-hacklang.

## Workflow

For making fixes or updates to the grammar, the process is generally as follows:

1. Find an error (via reported issues, `bin/test-dir`, `bin/test-examples`, etc.).
1. Using `bin/ts-errors` to isolate the error, create the simplest example to trigger the error.
1. Find the relevant rules in [grammar.js](/grammar.js) and try to update the rule, referencing the tree-sitter manual and `bin/hh-json` to understand the language.
1. Write tests for your new rules
   - Use `bin/ts-query` to generate a tree-sitter query that matches your current test code.
   - Use `bin/hh-json` and `bin/hh-errors` to make sure your test code is valid Hack.
1. Check for regressions using full test suite.

<!-- ### Versioning and Tags

> Does this project use semver? What does the numbering system look like? Are releases tagged in git? -->

### Branches

`main` is where active development occurs.

Long running branches named feature branches are occasionally created for collaboration on a feature that has a large scope (because everyone cannot push commits to another person's open Pull Request).

At some point in the future after a major version increment, there may be maintenance branches
for older major versions.

### Issue Management

Labels are used to run issues through an organized workflow. Here are the basic definitions:

*  `bug`: A confirmed bug report. A bug is considered confirmed when reproduction steps have been
   documented and the issue has been reproduced.
*  `enhancement`: A feature request for something this package might not already do.
*  `docs`: An issue that is purely about documentation work.
*  `tests`: An issue that is purely about testing work.
*  `needs feedback`: An issue that may have claimed to be a bug but was not reproducible, or was otherwise missing some information.
*  `discussion`: An issue that is purely meant to hold a discussion. Typically the maintainers are looking for feedback in this issues.
*  `question`: An issue that is like a support request because the user's usage was not correct.
*  `semver:major|minor|patch`: Metadata about how resolving this issue would affect the version number.
*  `security`: An issue that has special consideration for security reasons.
*  `good first contribution`: An issue that has a well-defined relatively-small scope, with clear expectations. It helps when the testing approach is also known.
*  `duplicate`: An issue that is functionally the same as another issue. Apply this only if you've linked the other issue by number.


**Triage** is the process of taking new issues that aren't yet "seen" and marking them with a basic
level of information with labels. An issue should have **one** of the following labels applied:
`bug`, `enhancement`, `question`, `needs feedback`, `docs`, `tests`, or `discussion`.

Issues are closed when a resolution has been reached. If for any reason a closed issue seems
relevant once again, reopening is great and better than creating a duplicate issue.

## Everything else

When in doubt, find the other maintainers and ask.
