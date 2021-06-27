# Changelog

## 0.3.0 - not yet released

fix:
* correct expression for identifiers
* allow empty template interpolations
* allow empty templates
* fix bug in serializer when the `context_stack.size()` exceeds `CHAR_MAX`

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
