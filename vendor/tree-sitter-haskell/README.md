# tree-sitter-haskell

[![CI](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/ci.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/ci.yml)

Haskell grammar for [tree-sitter].

# References

* [Haskell 2010 Language Report – Syntax References][ref]
* [GHC Language Extensions][ext]

# Building with nvim-treesitter

When installing the grammar from source, be sure to include the scanner in the source files:

```vim
lua <<EOF
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.haskell = {
  install_info = {
    url = "~/path/to/tree-sitter-haskell",
    files = {"src/parser.c", "src/scanner.c"}
  }
}
EOF
```


# Supported Language Extensions

These extensions are supported ✅, unsupported ❌ or not applicable because they don't involve parsing ➖️:

* AllowAmbiguousTypes ➖️
* ApplicativeDo ➖️
* Arrows ❌
* BangPatterns ✅
* BinaryLiterals ✅
* BlockArguments ✅
* CApiFFI ✅
* ConstrainedClassMethods ✅
* ConstraintKinds ✅
* CPP ✅
* CUSKs ✅
* DataKinds ✅
* DatatypeContexts ✅
* DefaultSignatures ✅
* DeriveAnyClass ➖️
* DeriveDataTypeable ➖️
* DeriveFoldable ➖️
* DeriveFunctor ➖️
* DeriveGeneric ➖️
* DeriveLift ➖️
* DeriveTraversable ➖️
* DerivingStrategies ✅
* DerivingVia ✅
* DisambiguateRecordFields ➖️
* DuplicateRecordFields ➖️
* EmptyCase ✅
* EmptyDataDecls ✅
* EmptyDataDeriving ✅
* ExistentialQuantification ✅
* ExplicitForAll ✅
* ExplicitNamespaces ✅
* ExtendedDefaultRules ➖️
* FlexibleContexts ✅
* FlexibleInstances ✅
* ForeignFunctionInterface ✅
* FunctionalDependencies ✅
* GADTs ✅
* GADTSyntax ✅
* GeneralisedNewtypeDeriving ➖️
* GHCForeignImportPrim ✅
* Haskell2010 ➖️
* Haskell98 ➖️
* HexFloatLiterals ✅
* ImplicitParams ✅
* ImplicitPrelude ➖️
* ImportQualifiedPost ✅
* ImpredicativeTypes ➖️
* IncoherentInstances ➖️
* InstanceSigs ✅
* InterruptibleFFI ✅
* KindSignatures ✅
* LambdaCase ✅
* LexicalNegation ❌
* LiberalTypeSynonyms ✅
* LinearTypes ✅
* MagicHash ✅
* Modifiers ❌
* MonadComprehensions ➖️
* MonadFailDesugaring ➖️
* MonoLocalBinds ➖️
* MonomorphismRestriction ➖️
* MultiParamTypeClasses ✅
* MultiWayIf ✅
* NamedFieldPuns ✅
* NamedWildCards ✅
* NegativeLiterals ➖️
* NondecreasingIndentation ❌
* NPlusKPatterns ➖️
* NullaryTypeClasses ✅
* NumDecimals ➖️
* NumericUnderscores ✅
* OverlappingInstances ➖️
* OverloadedLabels ✅
* OverloadedLists ➖️
* OverloadedStrings ➖️
* PackageImports ✅
* ParallelListComp ✅
* PartialTypeSignatures ✅
* PatternGuards ✅
* PatternSynonyms ✅
* PolyKinds ➖️
* PostfixOperators ➖️
* QualifiedDo ✅
* QuantifiedConstraints ✅
* QuasiQuotes ✅
* Rank2Types ✅
* RankNTypes ✅
* RebindableSyntax ➖️
* RecordWildCards ➖️
* RecursiveDo ✅
* RoleAnnotations ✅
* Safe ➖️
* ScopedTypeVariables ✅
* StandaloneDeriving ✅
* StandaloneKindSignatures ✅
* StarIsType ✅
* StaticPointers ❌
* Strict ➖️
* StrictData ➖️
* TemplateHaskell ✅
* TemplateHaskellQuotes ✅
* TraditionalRecordSyntax ➖️
* TransformListComp ✅
* Trustworthy ➖️
* TupleSections ✅
* TypeApplications ✅
* TypeFamilies ✅
* TypeFamilyDependencies ✅
* TypeInType ✅
* TypeOperators ✅
* TypeSynonymInstances ➖️
* UnboxedSums ✅
* UnboxedTuples ✅
* UndecidableInstances ➖️
* UndecidableSuperClasses ➖️
* UnicodeSyntax ✅
* UnliftedFFITypes ➖️
* UnliftedNewtypes ✅
* Unsafe ➖️
* ViewPatterns ✅

# Bugs

## CPP

Preprocessor `#elif` and `#else` directives cannot be handled correctly, since the parser state would have to be
manually reset to what it was at the `#if`.
As a workaround, the code blocks in the alternative branches are parsed as part of the directives.

## Layout

`NondecreasingIndentation` is not supported (yet?).

### Operators on newlines in `do`

A strange edge case is when an infix operator follows an expression statement of a do block with an indent of less or equal the `do`'s layout column:

```haskell
f = do
  readSomething
  >>= doSomething
```

The `>>=` causes the `do`'s layout to be terminated, resulting in an AST similar to

```haskell
f = (do readSomething) >>= doSomething
```

This is checked heuristically, probably unreliably.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[ref]: https://www.haskell.org/onlinereport/haskell2010/haskellch10.html
[ext]: https://downloads.haskell.org/~ghc/latest/docs/html/users_guide/exts/table.html

# Testing

**Requires**: `tree-sitter(-cli)`

## Run test corpus

These are stored in `./tests/corpus/`

```
$ tree-sitter test
```

## Test parsing an example codebase

**Requires**: `bc`  
This will print the percentage of the codebase parsed, and the time taken

```
$ ./script/parse-examples             # this clones all repos
$ ./script/parse-example <example>    # where <example> is a project under ./examples/
```

## Enable scanner debug output

To get an extra-verbose scanner, unoptimized, with debug symbols:

```
$ CFLAGS='-DDEBUG' make debug.so
$ cp debug.so $HOME/.cache/tree-sitter/lib/haskell.so    # So `tree-sitter-cli` uses our binary
$ tree-sitter test
$ ./script/parse-example <example>
```

If you want to debug the scanner with `gdb`, you can
`b tree_sitter_haskell_external_scanner_scan` with `tree-sitter test`.

## Create visual graph of parser steps

**Requires**: `graphviz`

```
$ tree-sitter parse -D test/Basic.hs    # Produces log.html
```
