# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added

- Add support for hyperlinks: `\url`, `\href` ([#130](https://github.com/latex-lsp/tree-sitter-latex/issues/130))

### Fixed

- Add missing citation commands: `\citeA`, `\citeR`, `\citeS`, `\citeyearR` ([#94](https://github.com/latex-lsp/tree-sitter-latex/issues/94))
- Let `\declaretheorem` accept multiple environment names ([texlab/#1075](https://github.com/latex-lsp/texlab/issues/1075))
- Fix parsing wrong superscripts like `10^10` ([#107](https://github.com/latex-lsp/tree-sitter-latex/issues/107))

## [0.4.0] - 2024-04-01

### Added

- Add support for definition commands found in `xparse` package ([#82](https://github.com/latex-lsp/tree-sitter-latex/issues/82))
- Add rules for parsing subscript and superscript expressions ([#63](https://github.com/latex-lsp/tree-sitter-latex/pull/63))
- Add Swift package description ([#76](https://github.com/latex-lsp/tree-sitter-latex/pull/76))
- Add Go package description

### Changed

- _BREAKING_: Don't check parser.c into git repository anymore

### Fixed

- Parse `pycode` environments correctly ([#67](https://github.com/latex-lsp/tree-sitter-latex/pull/67), [#66](https://github.com/latex-lsp/tree-sitter-latex/issues/66))

## [0.3.0] - 2022-10-26

### Added

- Extend list of supported `\big` style commands

### Changed

- Do not associate bracket groups with commands by default ([#51](https://github.com/latex-lsp/tree-sitter-latex/pull/51), [#48](https://github.com/latex-lsp/tree-sitter-latex/issues/48))

## [0.2.1] - 2022-10-25

### Added

- Add `Makefile` for easier usage of `C` bindings ([#54](https://github.com/latex-lsp/tree-sitter-latex/pull/54))

### Changed

- Update to ABI version 14

### Fixed

- Allow `\big`, `\bigl` and `\bigr` commands in addition to `\left` and `\right` ([#58](https://github.com/latex-lsp/tree-sitter-latex/issues/58))
- Allow options when using `minted` environment ([#55](https://github.com/latex-lsp/tree-sitter-latex/issues/55))
