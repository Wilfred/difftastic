# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/).

## [Unreleased](https://github.com/elixir-lang/tree-sitter-elixir/tree/main)

### Added

* Support for ~LVN sigils (LiveView Native templates) in the built-in injections ([#75](https://github.com/elixir-lang/tree-sitter-elixir/pull/75))

## [v0.3.1](https://github.com/elixir-lang/tree-sitter-elixir/tree/v0.3.1) (2024-09-28)

### Changed

* Changed highlight queries to distinguish field access from calls ([#73](https://github.com/elixir-lang/tree-sitter-elixir/pull/73))

## [v0.3.0](https://github.com/elixir-lang/tree-sitter-elixir/tree/v0.3.0) (2024-09-05)

### Changed

* The Rust crate to depend on tree-sitter-language rather than tree-sitter ([#70](https://github.com/elixir-lang/tree-sitter-elixir/pull/70))

## [v0.2.0](https://github.com/elixir-lang/tree-sitter-elixir/tree/v0.2.0) (2024-04-08)

### Changed

* Required tree-sitter version to 0.21+ ([#66](https://github.com/elixir-lang/tree-sitter-elixir/pull/66))

## [v0.1.1](https://github.com/elixir-lang/tree-sitter-elixir/tree/v0.1.1) (2023-12-04)

### Changed

* Rewritten the custom scanner code in C ([#56](https://github.com/elixir-lang/tree-sitter-elixir/pull/56))

### Fixed

* Parsing empty interpolation ([#55](https://github.com/elixir-lang/tree-sitter-elixir/pull/55))
* Fixed the repository URL in the Rust crate ([#57](https://github.com/elixir-lang/tree-sitter-elixir/pull/57))

## [v0.1.0](https://github.com/elixir-lang/tree-sitter-elixir/tree/v0.1.0) (2023-03-14)

Initial release.
