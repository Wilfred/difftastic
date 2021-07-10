## 0.4 (unreleased)

Fixed an issue where complex diffs would not display some unchanged
lines.

Fixed a crash when diff context included the first line.

Improved parsing for Rust macro definitions.

## 0.3

Diffs are now displayed with unchanged lines aligned to the other side.

Improved Rust parsing to recognise lifetime syntax `'foo`, character
literals `'x'` and punctuation.

Improved punctuation parsing for OCaml and JS.

Fixed an issue where the diff calculated may not be minimal.

Fixed a crash on files with no changes.

## 0.2

First version using Dijkstra's algorithm for calculating diffs.

## 0.1

Experimenting with different implementation ideas.
