[![Build Status](https://github.com/elm-tooling/tree-sitter-elm/actions/workflows/test.yml/badge.svg)](https://github.com/elm-tooling/tree-sitter-elm/actions/workflows/test.yml)

# Elm tree sitter

## Why am I doing this?

I believe that Elm would greatly benefit from better tooling, the ultimate goal is to write a language server integration. This is a possible building block for that.

What it brings to the table:

- Very fast parsing, should enable parsing on each keystroke.
- Resilient, even if you use wrong syntax, most of the file should still be recognized alright.
- Should also be useful to the elm atom maintainers, as atom is using tree sitter as the new default for code highlighting (our ast might be too expressive). Highlight implementation still needs to be done if wanted.

## What is this tested with?

This is tested against the tests included in the repo and:

- [elm-spa-example](https://github.com/rtfeldman/elm-spa-example)
- All core elm packets from [here](https://github.com/elm)

So it should work fine for a fair amount of code. What's not tested right now is behavior in error cases.

## Thanks

Very very big thanks goes out to @klazuka and the people of [intellij-elm](https://github.com/klazuka/intellij-elm/) as I basically stole [how they're creating their parser](https://github.com/klazuka/intellij-elm/blob/master/src/main/grammars/ElmParser.bnf) minus the GLSL implementation.

## Want to help?

Help writing some tests or simply find valid elm files, that fail parsing.
Test are located in the `test` folder and separated in parser tests and highlighting tests.
