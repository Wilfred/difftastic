# Changelog

All notable changes to this project will be documented in this file. See [standard-version](https://github.com/conventional-changelog/standard-version) for commit guidelines.

## [0.5.1](https://github.com/ikatyang/tree-sitter-toml/compare/v0.5.0...v0.5.1) (2021-03-21)


### Bug Fixes

* add missing binding.gyp ([5366d87](https://github.com/ikatyang/tree-sitter-toml/commit/5366d87))



# [0.5.0](https://github.com/ikatyang/tree-sitter-toml/compare/v0.4.1...v0.5.0) (2021-03-14)


### Features

* upgrade to tree-sitter@0.19.3 ([e880176](https://github.com/ikatyang/tree-sitter-toml/commit/e880176))


### BREAKING CHANGES

* require tree-sitter 0.19+



## [0.4.1](https://github.com/ikatyang/tree-sitter-toml/compare/v0.4.0...v0.4.1) (2020-11-14)


### Bug Fixes

* immediate hash in string is considered content instead of comment ([#18](https://github.com/ikatyang/tree-sitter-toml/issues/18)) ([4993307](https://github.com/ikatyang/tree-sitter-toml/commit/4993307))



# [0.4.0](https://github.com/ikatyang/tree-sitter-toml/compare/v0.3.0...v0.4.0) (2020-07-04)


### Features

* add queries for highlighting ([#13](https://github.com/ikatyang/tree-sitter-toml/issues/13)) ([64da30c](https://github.com/ikatyang/tree-sitter-toml/commit/64da30c))



# [0.3.0](https://github.com/ikatyang/tree-sitter-toml/compare/v0.2.0...v0.3.0) (2020-06-28)


### Features

* upgrade to TOML spec v1.0.0-rc.1 ([#11](https://github.com/ikatyang/tree-sitter-toml/issues/11)) ([7df9880](https://github.com/ikatyang/tree-sitter-toml/commit/7df9880))



## [0.2.0](https://github.com/ikatyang/tree-sitter-toml/compare/v0.1.3...v0.2.0) (2019-08-31)


### ⚠ BREAKING CHANGES

- rename `file` with `document`.
- rename `table_array` with `table_array_element`.
- unflatten `table` and `table_array_element`, i.e., `pair`s are now their children instead of siblings.

### Features

* unflatten structure and rename nodes ([#4](https://github.com/ikatyang/tree-sitter-toml/issues/4)) ([42afd6a](https://github.com/ikatyang/tree-sitter-toml/commit/42afd6a))

### [0.1.3](https://github.com/ikatyang/tree-sitter-toml/compare/v0.1.2...v0.1.3) (2019-08-21)


### Bug Fixes

* trailing whitespaces are allowed for `local_time` ([#3](https://github.com/ikatyang/tree-sitter-toml/issues/3)) ([752419c](https://github.com/ikatyang/tree-sitter-toml/commit/752419c))

### [0.1.2](https://github.com/ikatyang/tree-sitter-toml/compare/v0.1.1...v0.1.2) (2019-08-20)


### Features

* flatten table/table-array structure ([#2](https://github.com/ikatyang/tree-sitter-toml/issues/2)) ([a381203](https://github.com/ikatyang/tree-sitter-toml/commit/a381203))
* rename `root` with `file` ([a0cd384](https://github.com/ikatyang/tree-sitter-toml/commit/a0cd384))

### [0.1.1](https://github.com/ikatyang/tree-sitter-toml/compare/v0.1.0...v0.1.1) (2019-08-20)


### Bug Fixes

* disallow invalid whitespaces between scalar components ([#1](https://github.com/ikatyang/tree-sitter-toml/issues/1)) ([e2b28db](https://github.com/ikatyang/tree-sitter-toml/commit/e2b28db))

## 0.1.0 (2019-08-18)


### Features

* initial implementation ([5acac39](https://github.com/ikatyang/tree-sitter-toml/commit/5acac39))
