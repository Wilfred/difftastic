![Parse rate badge](https://byob.yarr.is/alex-pinkus/experimental-tree-sitter-swift/parse_rate)
[![Crates.io badge](https://byob.yarr.is/alex-pinkus/experimental-tree-sitter-swift/crates_io_version)](https://crates.io/crates/experimental-tree-sitter-swift)
[![NPM badge](https://byob.yarr.is/alex-pinkus/experimental-tree-sitter-swift/npm_version)](https://www.npmjs.com/package/experimental-tree-sitter-swift)
[![Build](https://github.com/alex-pinkus/experimental-tree-sitter-swift/actions/workflows/top-repos.yml/badge.svg)](https://github.com/alex-pinkus/experimental-tree-sitter-swift/actions/workflows/top-repos.yml)

# experimental-tree-sitter-swift

This contains an experimental [`tree-sitter`](https://tree-sitter.github.io/tree-sitter) grammar for the Swift
programming language.

## Getting started

To use this parser to parse Swift code, you'll want to depend on either the Rust crate or the NPM package.

### Rust
To use the Rust crate, you'll add this to your `Cargo.toml`:
```
tree-sitter = "0.20.0"
experimental-tree-sitter-swift = "=0.0.2"
```

Then you can use a `tree-sitter` parser with the language declared here:

```
let mut parser = tree_sitter::Parser::new();
parser.set_language(experimental_tree_sitter_swift::language())?;

// ...

let tree = parser.parse(&my_source_code, None)
    .ok_or_else(|| /* error handling code */)?;
```

### Javascript

To use this from NPM, you'll add similar dependencies to `package.json`:
```
"dependencies: {
  "experimental-tree-sitter-swift": "0.0.2",
  "tree-sitter": "^0.20.0"
}
```

Your usage of the parser will look like:
```
const Parser = require("tree-sitter");
const Swift = require("experimental-tree-sitter-swift");

const parser = new Parser();
parser.setLanguage(Swift);

// ...

const tree = parser.parse(mySourceCode);
```

### Editing the grammar

With this package checked out, a common workflow for editing the grammar will look something like:

1. Make a change to `grammar.ts`.
2. Run `npm install && npm test` to see whether the change has had impact on existing parsing behavior. The default
`npm test` target requires `valgrind` to be installed; if you do not have it installed, and do not wish to, you can
substitute `tree-sitter test` directly.
3. Run `tree-sitter parse` on some real Swift codebase and see whether (or where) it fails.
4. Use any failures to create new corpus test cases.

If you simply want to _use_ the parser, and not modify it, you can depend on it from Rust code using the instructions in
the [rust bindings README](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_rust/README.md).
Basically, you'll want to build the `parser.c` and `scanner.c` in your build script and use the generated files to
produce a parser that the bindings can interact with. I don't plan to publish this as a crate while it's still in the
`experimental` state.

## Contributions

If you have a change to make to this parser, and the change is a net positive, please submit a pull request. I mostly
started this parser to teach myself how `tree-sitter` works, and how to write a grammar, so I welcome improvements. If
you have an issue with the parser, please file a bug and include a test case to put in the `corpus`. I can't promise any
level of support, but having the test case makes it more likely that I want to tinker with it.

## Frequently asked questions

### Isn't there already a Swift grammar? Why did you create another one?

There is a Swift grammar that lives under the `tree-sitter` org, but it doesn't have a `LICENSE` file. Since it's not
licensed, I would have to be cautious about using it myself. I actually haven't looked at the code itself, or the
repository much at all, since I want to avoid potential licensing issues with this parser. A brief scan of the Github
issues tells me it's also not quite complete, but I haven't done a deep dive to see whether it's more complete than this
one.

I created this parser to learn how to use tree-sitter. Looking at the landscape, it seemed like it might be useful to
others, so I decided to publish it. Since this has a permissive license, it seems like a good path forward for anyone
else whose needs are similar to my own.

### If this isn't a fork of the existing Swift grammar, what is it based on?

A lot of specific features were based off of the [Kotlin language grammar](https://github.com/fwcd/tree-sitter-kotlin),
since the two have many cosmetic similarities. For instance, both languages have trailing closure syntax. Some parts
also come from the [Rust grammar](https://github.com/tree-sitter/tree-sitter-rust), which this grammar should probably
copy more of.

### Why is this `experimental`? What's experimental about it?

That's a question that remains to be answered. If this grammar doesn't get used much, it will probably be experimental
forever. If there's interest in it, hopefully others are willing to help define what it would take to make this not
"experimental". Reaching a point where we can offer some stability guarantees is probably a good first step.

### What stability guarantees do you offer?

Currently none. It seems prudent that someday, the grammar would be versioned and any removal or changes to nodes would
be considered a breaking change, and accompanied by a major version bump. Right now, this is not the place to go for
stability unless you pin an exact commit hash.

### Where is your `parser.c`?

This repository currently omits most of the code that is autogenerated during a build. This means, for instance, that
`grammar.json` and `parser.c` are both only available following a build. It also significantly reduces noise during
diffs.

The side benefit of not checking in `parser.c` is that you can guarantee backwards compatibility. Parsers generated by
the tree-sitter CLI aren't always backwards compatible. If you need a parser, generate it yourself using the CLI; all
the information to do so is available in this package. By doing that, you'll also know for sure that your parser version
and your library version are compatible.

If you need a `parser.c`, and you don't care about the tree-sitter version, but you don't have a local setup that would
allow you to obtain the parser, you can just download one from a recent workflow run in this package. To do so:
* Go to the [GitHub actions page](https://github.com/alex-pinkus/experimental-tree-sitter-swift/actions) for this
  repository.
* Click on the "Check grammar and style" action for the appropriate commit.
* Go down to `Artifacts` and click on `generated-parser-src`. All the relevant parser files will be available in your
  download.
