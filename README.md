# tree-sitter-tact

<center>
  <img src=".github/BANNER.png" alt="Tree-sitter + Tact = tree-sitter-tact"/>
</center>

A fully-featured 🌳 [Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for the ⚡ Tact contract programming language:

- 🍰 Parses whole Tact grammar as defined in [grammar.ohm](https://github.com/tact-lang/tact/blob/main/src/grammar/grammar.ohm) (with performance and usability in mind).
- 🎨 Provides highlighting, scoping and tagging [queries](#-structure).
- ⚙ Test-covered (including queries), reflects latest Tact language updates.
- 🚀 See guildelines on usage and integration in editors supporting Tree-sitter [below](#-usage).

## 🚀 Usage

- [ ] To be refined and added in the next commit

## 💲 CLI Usage

Tree-sitter grammars have limited utility on its own and are best used as parsers that can be embedded in other projects. However, [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) can be used with this grammar to show generated parse trees and syntax highlighting for a given Tact file.

For a quick demo of tree-sitter-cli usage:
1. Clone this repo.
2. Install Node.js dependencies (by `npm i`, `pnpm i` or `yarn`).
3. Execute relevant commands from the `scripts` tag in `package.json`.

For a more streamlined experience, you may:
1. [Install tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md#installation).
2. Create a `tree-sitters` directory in your home directory.
3. Clone this repository (or symlink it) into the new `~/tree-sitters/` directory.
4. Run `tree-sitter parse path/to/file.tact` to be shown the parse tree for the file.
5. Run `tree-sitter highlight path/to/file.tact` to be shown the file with syntax highlighting applied.

## 🎨 Structure

Grammar definition resides in `grammar.js`:

- Actual grammar and bindings are generated from it via Tree-sitter.
- Queries and tests rely on its namings of nodes and fields.

Generic queries are structured as follows:

```
queries/
|-- highlights.scm -- syntax highlighting queries (generic, for Tree-sitter & GitHub)
|-- locals.scm -- fixed set of capture names to track local scopes and variables (and alike)
`-- tags.scm -- tagging queries for code navigation systems (as used on GitHub)
```

To find highlighting and other queries for specific editors, look in the `editor_queries/` directory.

## ⚙ References

- [grammar.ohm](https://github.com/tact-lang/tact/blob/main/src/grammar/grammar.ohm) — Official grammar specification in Ohm PEG language.
- [tact-by-example](https://github.com/tact-lang/tact-by-example) — Many different contract samples.

## Useful ⚡ Tact links

- [Official Website](https://tact-lang.org/)
- Discussion Group in [Telegram](https://t.me/tactlang)
- [X/Twitter](https://twitter.com/tact_language)

## Credits

Based on [The Open Network](https://ton.org).

Built with 🤍 by [Novus Nota](https://github.com/novusnota).

## License

[MIT](LICENSE)
