# Changelog

## 0.7.0 - 2022-06-02

housekeeping:
* bump tree-sitter dependency to 0.20.6
* regenerate parser
* fix clang+windows CI job

fix:
* allow empty string literals

## 0.6.0 - 2021-09-20

feature:
* add template for expressions
* add template if expressions

cleanup:
* move fuzzing instrumentation to different repository

## 0.5.0 - 2021-09-15

feature:
* unhide `(block|object|tuple)_(start|end)` tokens

fix:
* remove empty `template_directive` block because it causes issues for semgrep

## 0.4.0 - 2021-07-02

feature:
* add named "key" and "val" fields to left and right side of object elements
* unhide the `template_interpolation_(start|end)` and `quoted_template_(start|end)` tokens

## 0.3.2 - 2021-07-01

fix:
* add a build step to CI to make sure the scanner is compilable
* add fuzzing instrumentation

## 0.3.1 - 2021-06-30

fix:
* dont use c struct initializer syntax in src/scanner.cc

## 0.3.0 - 2021-06-28

fix:
* correct expression for identifiers
* allow empty template interpolations
* allow empty templates
* fix crash when `context_stack.size()` exceeds `CHAR_MAX`
* fix crash when `heredoc_identifier.size()` exceeds `CHAR_MAX`

quality:
* add fuzzing

## 0.2.0 - 2021-06-26

feature:
* add quoted templates and heredoc templates
* still missing template directives though

quality:
* collect corpus of real world hcl files from github
* add github actions

## 0.1.0 - 2021-06-13

* initial version
