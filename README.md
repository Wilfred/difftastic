# tree-sitter-haskell

[![Test the grammar](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/test.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/test.yml)

Haskell grammar for [tree-sitter].

**Note** This grammar needs at least tree-sitter `0.19.4` and C++-14.

# References

* [Haskell 2010 Language Report – Syntax References](ref)
* [GHC Language Extensions](ext)

# Building with nvim-treesitter

Depending on what compilers are installed in your system, it may be necessary to force `nvim-treesitter` to use a
specific one to satisfy the C++-14 requirement (see [this
issue](https://github.com/tree-sitter/tree-sitter-haskell/issues/34) for more info):

```vim
lua require'nvim-treesitter.install'.compilers = { "clang" }
```

or

```vim
lua require'nvim-treesitter.install'.compilers = { "gcc" }
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
* LinearTypes ❌
* MagicHash ✅
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
* TransformListComp ❌
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
