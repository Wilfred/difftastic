# tree-sitter-hack

![build](https://github.com/antoniodejesusochoasolano/tree-sitter-hack/actions/workflows/ci.yml/badge.svg)

[Hack](https://hacklang.org/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Installation

```
$ git clone https://github.com/antoniodejesusochoasolano/tree-sitter-hack
$ cd tree-sitter-hack
$ npm install
```
## Usage

```
$ echo 'function main(): void { print "wyd, world\\n"; }' > script.hack
$ npx tree-sitter generate
$ npx tree-sitter parse script.hack
(script [0, 0] - [3, 0]
  (function_declaration [0, 0] - [2, 1]
    name: (identifier [0, 9] - [0, 13])
    (parameters [0, 13] - [0, 15])
    return_type: (primitive_type [0, 17] - [0, 21])
    body: (compound_statement [0, 22] - [2, 1]
      (expression_statement [1, 2] - [1, 23]
        (print_expression [1, 2] - [1, 22]
          (string [1, 8] - [1, 22]))))))
```

## Testing
```
$ npx tree-sitter generate
$ bin/test-corpus
```

## Scripts

**`bin/generate-parser`**

Wrapper around `tree-sitter generate` that skips parser generation if `grammar.js` hasn't changed since last run.

**`bin/generate-corpus`**

Unlike most other Tree-sitter projects, we breakout test cases into separate files (see [`test/cases`](https://github.com/antoniodejesusochoasolano/tree-sitter-hack/tree/main/test/cases)). This is done so editors have an easier time syntax highlighting test cases. But also I find individual files easier to navigate than the `corpus.txt` files used by Tree-sitter.

We use `bin/generate-corpus` to generate the `test/corpus/case1.txt` from individual `test/cases` files so we can still use `tree-sitter test`.

**`bin/test-corpus`**

Run `bin/generate-corpus` and `bin/generate-parser` before running `tree-sitter test`.

**`bin/test-dir`**

Run `bin/ts-errors` on all files with `.hack` or `.php` extension in the given directory recursively.

```
$ ./bin/test-dir hhvm/hphp/hack/test
examples/hhvm/hphp/hack/test/error_formatting_highlighted/zero_width_syntax_err.php
(3,11)-(3,18) extends
examples/hhvm/hphp/hack/test/autocomplete/not_shape_key_string.php
(3,1)-(6,1) function foo(): string {\n  return "AUTO332\n}\n
(4,10)-(6,1) "AUTO332\n}\n
...
```

## Note

npm doesn't allow packages with the word "hack" in their registry which is why the repo
name does not match the package name.

> Unfortunately, the word "hack" triggers our spam detection and can't be used in package names. We recommend choosing other keywords that highlight your package's functionality.

## References

There's no published official Hacklang language spec so we have to make do.

- [HHVM Blog](https://hhvm.com/blog/) - Good source of language [deprecations](https://hhvm.com/blog/2019/10/01/deprecating-references.html) and [changes](https://hhvm.com/blog/2020/07/06/hhvm-4.65.html#breaking-changes).
- [Hack Documentation](https://docs.hhvm.com/hack/) - Source at [hhvm/user-documentation](https://github.com/hhvm/user-documentation).
- [Hack Parser Source](https://github.com/facebook/hhvm/tree/4da98da2f5ddc0989d3d150dddc1b06ee4087440/hphp/hack/src/parser)
- [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript) and [tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php) - Used to guide writing [`grammar.js`](https://github.com/antoniodejesusochoasolano/tree-sitter-hack/blob/main/grammar.js)
- Deprecated [Hack Language Specification](https://github.com/facebookarchive/hack-langspec)
- [PHP Language Specification](https://github.com/php/php-langspec) -
  Does not apply 100% to Hacklang, but still a good reference.
